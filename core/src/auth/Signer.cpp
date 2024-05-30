/**
 * Licensed to the Apache Software Foundation (ASF) under one
 * or more contributor license agreements.  See the NOTICE file
 * distributed with this work for additional information
 * regarding copyright ownership.  The ASF licenses this file
 * to you under the Apache LICENSE, Version 2.0 (the
 * "LICENSE"); you may not use this file except in compliance
 * with the LICENSE.  You may obtain a copy of the LICENSE at
 *
 *     http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing,
 * software distributed under the LICENSE is distributed on an
 * "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY
 * KIND, either express or implied.  See the LICENSE for the
 * specific language governing permissions and limitations
 * under the LICENSE.
 */


#include <huaweicloud/core/auth/Signer.h>

#include <sstream>
#include <cctype>
#include <iterator>
#include <cassert>
#include <cstring>
#include <algorithm>

#include <openssl/sha.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/utils/Constants.h>
#include <openssl/hmac.h>
#include <openssl/bn.h>
#include <spdlog/spdlog.h>

using namespace HuaweiCloud::Sdk::Core::Auth;
using namespace HuaweiCloud::Sdk::Core::Utils;

Signer::Signer(const std::string &appKey, const std::string &appSecret)
{
    appKey_ = appKey;
    appSecret_ = appSecret;
    algorithm_ = Constants::sdk_hmac_sha256;
    contentHeader_ = Constants::x_sdk_content_sha256;
    hasher_ = new Sha256Hasher();
}

Signer::Signer()
{
    hasher_ = new Sha256Hasher();
}

Signer::~Signer()
{
    delete hasher_;
    hasher_ = nullptr;
}


/*
 * Create signature in one stroke
 *
 */
std::string Signer::createSignature(HuaweiCloud::Sdk::Core::RequestParams &request)
{
    std::string datetime = request.initHeaders();
    std::string signedHeaders = getSignedHeaders(request.getHeaders());

    std::string canonRequest = getCanonicalRequest(signedHeaders, request.getMethod(), request.getUri(),
        request.getQueryParams(), request.getHeaders(), request.getBody());
    std::string stringToSign = getStringToSign(datetime, canonRequest);
    std::string signature = getSignature(stringToSign);
    std::string key = "Authorization";
    std::string value =
            algorithm_ + " Access=" + appKey_ + ", SignedHeaders=" + signedHeaders + ", Signature=" + signature;
    request.addHeader(key, value);
    return signature;
}


/*
 *
 * Task 1: To create canonicalized request string
 *
 *
 */
std::string Signer::getCanonicalRequest(const std::string &signedHeaders, const std::string &method, std::string uri,
                                        const std::string &queryParams, const std::set<Header> &headers, const std::string &payload)
{
    std::string hexencode;
    auto it = headers.find(Header(contentHeader_, ""));
    if (it != headers.end()) {
        Header entry = *it;
        hexencode = entry.getValue();
    } else {
        hexencode = getHexHash(payload);
    }

    return method + "\n" + getCanonicalURI(uri) + "\n" + getCanonicalQueryString(queryParams) + "\n" +
        getCanonicalHeaders(headers) + "\n" + signedHeaders + "\n" + hexencode;
}


std::string Signer::getCanonicalURI(std::string &uri)
{
    if (uri.empty()) {
        return std::string("/");
    }
    if (uri.back() != '/') {
        return uriEncode(uri, true) + "/";
    } else {
        return uriEncode(uri, true);
    }
}

/*
 * Canonicalize all the query parameters
 * Take in the entire string of query parameters and parse them into a map, which
 * sorts all parameters alphabetically
 * 1. Parameters cannot have the same name, the parameter will be overwritten by its last value
 * 2. Paramters without "=" sign means it does not have a value, which not be saved
 */
std::string Signer::getCanonicalQueryString(const std::string &queryParams)
{
    std::map<std::string, std::vector<std::string>> paramsMap;
    std::stringstream ss(queryParams);
    std::string param;
    while (std::getline(ss, param, '&')) {
        std::size_t pos = param.find('=');
        std::string key;
        std::string value;
        if (pos == std::string::npos) {
            key = uriDecode(param);
            value = "";
        } else {
            key = param.substr(0, pos);
            value = param.substr(pos + 1);
            key = uriDecode(key);
            value = uriDecode(value);
        }
        key = uriEncode(key);
        value = uriEncode(value);
        auto it = paramsMap.find(key);
        if (it == paramsMap.end()) {
            std::vector<std::string> values;
            values.push_back(value);
            paramsMap[key] = values;
        } else {
            it->second.push_back(value);
        }
    }
    return getCanonicalQueryString(paramsMap);
}

/*
 * Helper function for getting canonicalized query string
 *
 * Query entries are sorted by the map internally
 */
std::string Signer::getCanonicalQueryString(std::map<std::string, std::string> &queryParams)
{
    std::string canonQueryStr;
    if (queryParams.empty()) {
        return canonQueryStr;
    }

    for (const auto &it : queryParams) {
        canonQueryStr.append(it.first);
        canonQueryStr.append("=");
        canonQueryStr.append(it.second);
        canonQueryStr.append("&");
    }
    canonQueryStr.pop_back();
    return canonQueryStr;
}

std::string Signer::getCanonicalQueryString(std::map<std::string, std::vector<std::string>> &queryParams)
{
    std::string canonQueryStr;
    if (queryParams.empty()) {
        return canonQueryStr;
    }
    for (const auto &it : queryParams) {
        std::string key = it.first;
        std::vector<std::string> values = it.second;
        std::sort(values.begin(), values.end());
        for (auto &value : values) {
            canonQueryStr.append(key);
            canonQueryStr.append("=");
            canonQueryStr.append(value);
            canonQueryStr.append("&");
        }
    }
    canonQueryStr.pop_back();
    return canonQueryStr;
}

/* Get canonicalized headers
 * Headers are sorted by their names in the set internally
 */
std::string Signer::getCanonicalHeaders(const std::set<Header> &headers)
{
    std::string canonicalHeaders;
    for (auto header : headers) {
        std::string headerEntry = toLowerCaseStr(header.getKey()) + ":" + trim(header.getValue()) + "\n";
        canonicalHeaders += headerEntry;
    }
    return canonicalHeaders;
}


/*
 * Get signed headers
 * Take in a set of header objects and output a string
 *
 */
std::string Signer::getSignedHeaders(const std::set<Header> &headers)
{
    std::string signedHeaders;
    for (const auto& header : headers) {
        Header entry = header;
        signedHeaders += toLowerCaseStr(entry.getKey());
        signedHeaders.append(";");
    }
    signedHeaders.pop_back();
    return signedHeaders;
}


std::string Signer::getHexHash(const std::string &payload)
{
    unsigned char hash[SHA256_DIGEST_LENGTH];
    hasher_->hash(payload, hash);
    return hasher_->hexEncode(hash, SHA256_DIGEST_LENGTH);
}

std::string Signer::getStringToSign(const std::string &datetime, const std::string &canonicalRequest)
{
    return algorithm_ + "\n" + datetime + "\n" + getHexHash(canonicalRequest);
}

std::string Signer::getSignature(const std::string &stringToSign)
{
    const char *signingKey = const_cast<char *>(appSecret_.c_str());
    unsigned int digestLength = SHA256_DIGEST_LENGTH;
    std::vector<unsigned char> signatureChar = hasher_->hmac(signingKey, strlen(signingKey), stringToSign);
    std::string signature = hasher_->hexEncode(signatureChar.data(), digestLength);
    return signature;
}

/*
 * 基于用户的SK进行派生，获取到一个256bit的派生密钥
 * 参考 NIST SP 800-108 Rev. 1 (4.1 KDF in Counter Mode) 实现：
   Step 1: Label = Alg
   Step 2: Context = AK || Counter
   Step 3: L = 0x00000100
   Step 4: Data = 0x00000001 || Label || 0x00 || Context || L
   Step 5: Candidate = HMAC-SM3(SK, Data)
   Step 6: 参考 NIST.FIPS.186-4 (B.4.2) 实现对Candidate的迭代取值
 */
std::vector<unsigned char> Signer::derivePrivateKey(std::string alg, const EVP_MD *engine, std::string ak,
                                                    std::string sk, BIGNUM* nMinusTwo)
{
    std::vector<unsigned char> result;
    // 参考Step 2实现，context的长度等于(ak的长度+计数)，即(20 + 1)
    std::vector<uint8_t> context(21);
    // 参考Step 4实现，data的长度等于(0x00000001 + Alg长度 + 0x00 + Context的长度 + L的长度),即(4 + Alg长度 + 1 + 21 + 4)
    std::vector<uint8_t> data(alg.length() + 30);
    BIGNUM* candidate = BN_new();

    for (int counter = 0; counter <= 0xff; counter++) {
        context.clear();
        data.clear();
        context.insert(context.end(), ak.begin(), ak.end());
        context.push_back(counter);
        data.insert(data.end(), { 0x00, 0x00, 0x00, 0x01 });
        data.insert(data.end(), alg.begin(), alg.end());
        data.push_back(0x00);
        data.insert(data.end(), context.begin(), context.end());
        data.insert(data.end(), { 0x00, 0x00, 0x01, 0x00 });
        unsigned int hmacBytesLength;
        std::vector<uint8_t> hmacBytes(SHA256_DIGEST_LENGTH);
        HMAC(engine, sk.c_str(), static_cast<int>(sk.length()),reinterpret_cast<unsigned char*>(data.data()),
             data.size(),hmacBytes.data(), &hmacBytesLength);

        BN_bin2bn(hmacBytes.data(), hmacBytesLength, candidate);

        if (BN_cmp(candidate, nMinusTwo) <= 0) {
            BN_add(candidate, candidate, BN_value_one());
            int size = BN_num_bytes(candidate);
            result.resize(size);
            BN_bn2bin(candidate, result.data());
            break;
        }
    }

    BN_free(candidate);

    return result;
}