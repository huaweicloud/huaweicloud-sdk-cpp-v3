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

#include "huaweicloud/core/auth/P256Sha256Signer.h"

#include <openssl/evp.h>
#include <openssl/bn.h>
#include <openssl/ec.h>
#include <spdlog/spdlog.h>
#include <openssl/sha.h>

using namespace HuaweiCloud::Sdk::Core::Auth;

P256Sha256Signer::P256Sha256Signer(const std::string &appKey, const std::string &appSecret) : Signer(appKey, appSecret)
{
    algorithm_ = Constants::sdk_ecdsa_p256_sha256;
    contentHeader_ = Constants::x_sdk_content_sha256;
    hasher_ = new Sha256Hasher();
}

P256Sha256Signer::P256Sha256Signer() : Signer()
{
    hasher_ = new Sha256Hasher();
}

P256Sha256Signer::~P256Sha256Signer()= default;

/*
TODO: Some functions we used are marked as deprecated after openssl 3.0, so just ignore this warning for a while
      We will refactor the following codes later
*/
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
/*
 * 获取国标P-256数字签名入口
 */
std::string P256Sha256Signer::getSignature(const std::string &stringToSign)
{
    spdlog::info("Begin to get Signature P256Sha256");
    // 获取曲线参数n
    EC_KEY *ecKey = EC_KEY_new_by_curve_name(NID_X9_62_prime256v1);
    const EC_GROUP *ecGroup = EC_KEY_get0_group(ecKey);
    // 生成私钥计算需要, 根据 NIST-186-4 B.4.2中要求, 椭圆曲线的私钥必须要小于该椭圆曲线参数n, 获取椭圆参数n - 2, 作为生成私钥的上限
    BIGNUM *order = BN_new();
    EC_GROUP_get_order(ecGroup, order, nullptr);
    BIGNUM *nMinusTwo = BN_new();
    BN_sub(nMinusTwo, order, BN_value_one());
    BN_sub(nMinusTwo, nMinusTwo, BN_value_one());

    // 生成私钥 : 基于用户的SK进行派生，获取到一个256bit的派生密钥
    std::vector<unsigned char> privateKeyVec = derivePrivateKey(algorithm_, EVP_sha256(), appKey_, appSecret_, nMinusTwo);
    if (privateKeyVec.empty()) {
        spdlog::error("Failed to derive private integer");
        BN_free(nMinusTwo);
        BN_free(order);
        EC_KEY_free(ecKey);
        return "";
    }
    BIGNUM *privateKey = BN_bin2bn(privateKeyVec.data(), privateKeyVec.size(), nullptr);

    // 设置私钥
    EC_KEY_set_private_key(ecKey, privateKey);
    // 生成消息摘要
    unsigned char hash[SHA256_DIGEST_LENGTH];
    hasher_->hash(stringToSign, hash);
    // 生成数字签名
    ECDSA_SIG *sig = ECDSA_do_sign(hash, SHA256_DIGEST_LENGTH, ecKey);
    if (sig == nullptr) {
        spdlog::error("Failed to sign data");
        BN_free(nMinusTwo);
        BN_free(order);
        EC_KEY_free(ecKey);
        BN_clear_free(privateKey);
        return "";
    }

    // ASN1格式
    unsigned char* der = nullptr;
    int derLen = i2d_ECDSA_SIG(sig, &der);
    if (derLen <= 0) {
        BN_free(nMinusTwo);
        BN_free(order);
        EC_KEY_free(ecKey);
        BN_clear_free(privateKey);
        ECDSA_SIG_free(sig);
        spdlog::error("Failed to der_len");
        return "";
    }

    std::string signature = hasher_->hexEncode(der, derLen);
    // 释放资源
    OPENSSL_free(der);
    ECDSA_SIG_free(sig);
    BN_free(nMinusTwo);
    BN_free(order);
    EC_KEY_free(ecKey);
    BN_clear_free(privateKey);
    spdlog::info("End to get Signature P256Sha256");
    return signature;
}

/*
 * 国标P-256算法验证签名
 */
bool P256Sha256Signer::p256Sha256DoVerify(std::string signature, const std::string &stringToSign)
{
    spdlog::info("Begin to verify Signature P256Sha256");
    bool isVerify = false;
    EC_KEY *ecKey = EC_KEY_new_by_curve_name(NID_X9_62_prime256v1);
    const EC_GROUP *ecGroup = EC_KEY_get0_group(ecKey);
    // 生成私钥计算需要, 根据 NIST-186-4 B.4.2中要求, 椭圆曲线的私钥必须要小于该椭圆曲线参数n, 获取椭圆参数n - 2, 作为生成私钥的上限
    BIGNUM *order = BN_new();
    EC_GROUP_get_order(ecGroup, order, nullptr);
    BIGNUM *nMinusTwo = BN_new();
    BN_sub(nMinusTwo, order, BN_value_one());
    BN_sub(nMinusTwo, nMinusTwo, BN_value_one());

    // 生成私钥 : 基于用户的SK进行派生，获取到一个256bit的派生密钥
    std::vector<unsigned char> privateKeyVec = derivePrivateKey(algorithm_, EVP_sha256(), appKey_, appSecret_, nMinusTwo);
    if (privateKeyVec.empty()) {
        BN_free(nMinusTwo);
        BN_free(order);
        EC_KEY_free(ecKey);
        spdlog::error("Failed to derive private integer");
        return false;
    }
    BIGNUM *privateKey = BN_bin2bn(privateKeyVec.data(), privateKeyVec.size(), nullptr);

    // 获取公钥
    EC_POINT *publicKey = EC_POINT_new(ecGroup);
    EC_POINT_mul(ecGroup, publicKey, privateKey, nullptr, nullptr, nullptr);
    EC_KEY_set_public_key(ecKey, publicKey);

    // 生成消息摘要
    unsigned char hash[SHA256_DIGEST_LENGTH];
    hasher_->hash(stringToSign, hash);

    unsigned char der[100];
    int der_len = hasher_->hexStringToCharArray(signature, der);
    const unsigned char* d = der;
    ECDSA_SIG* sig = d2i_ECDSA_SIG(nullptr, &d, der_len);
    if (sig == nullptr) {
        BN_free(nMinusTwo);
        BN_free(order);
        EC_KEY_free(ecKey);
        BN_clear_free(privateKey);
        EC_POINT_free(publicKey);
        spdlog::error("Failed to get sign");
        return false;
    }

    // 验签
    int verifyResult = ECDSA_do_verify(hash, SHA256_DIGEST_LENGTH, sig, ecKey);
    isVerify = (verifyResult == 1);

    BN_free(nMinusTwo);
    BN_free(order);
    EC_KEY_free(ecKey);
    BN_clear_free(privateKey);
    EC_POINT_free(publicKey);
    ECDSA_SIG_free(sig);
    spdlog::info("End to verify Signature P256Sha256, {}", isVerify);
    return isVerify;
}
#pragma GCC diagnostic pop