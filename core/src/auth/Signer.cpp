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

using namespace HuaweiCloud::Sdk::Core::Auth;
using namespace HuaweiCloud::Sdk::Core::Utils;

Signer::Signer(const std::string &appKey, const std::string &appSecret)
{
    appKey_ = appKey;
    appSecret_ = appSecret;
    hasher_ = new Hasher();
}

Signer::Signer()
{
    hasher_ = new Hasher();
}

Signer::~Signer()
{
    delete hasher_;
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
    std::string stringToSign = getStringToSign(Constants::sdk_signing_algorithm, datetime, canonRequest);
    std::string signature = getSignature(const_cast<char *>(appSecret_.c_str()), stringToSign);
    std::string key = "Authorization";
    std::string value =
            "SDK-HMAC-SHA256 Access=" + appKey_ + ", SignedHeaders=" + signedHeaders + ", Signature=" + signature;
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
    auto it = headers.find(Header("X-Sdk-Content-Sha256", ""));
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
    hasher_->hashSHA256(payload, hash, SHA256_DIGEST_LENGTH);
    return hasher_->hexEncode(hash, SHA256_DIGEST_LENGTH);
}

std::string Signer::getStringToSign(const std::string &algorithm, const std::string &datetime, const std::string &canonicalRequest)
{
    return algorithm + "\n" + datetime + "\n" + getHexHash(canonicalRequest);
}

std::string Signer::getSignature(const char *signingKey, const std::string &stringToSign)
{
    unsigned int digestLength = SHA256_DIGEST_LENGTH;
    std::vector<unsigned char> signatureChar = hasher_->hmac(signingKey, strlen(signingKey), stringToSign);
    std::string signature = hasher_->hexEncode(signatureChar.data(), digestLength);
    return signature;
}