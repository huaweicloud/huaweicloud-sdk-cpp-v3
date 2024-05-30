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

#include <huaweicloud/core/auth/Sm2Sm3Signer.h>
#include <huaweicloud/core/utils/Sm3Hasher.h>
#include <openssl/evp.h>
#include <openssl/bn.h>
#include <openssl/ec.h>
#include <spdlog/spdlog.h>
#include <openssl/crypto.h>
#include <iostream>


using namespace HuaweiCloud::Sdk::Core::Auth;

/* 选择 SM2 曲线，相关椭圆参数 a, b, xG, yG, ID的取值参考 GB/T 32918.5-2017文档 */
std::vector<unsigned char> g_sm2ParamA = {0xff, 0xff, 0xff, 0xfe, 0xff, 0xff, 0xff, 0xff,
                                          0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
                                          0xff, 0xff, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00,
                                          0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xfc};
std::vector<unsigned char> g_sm2ParamB = {0x28, 0xe9, 0xfa, 0x9e, 0x9d, 0x9f, 0x5e, 0x34,
                                          0x4d, 0x5a, 0x9e, 0x4b, 0xcf, 0x65, 0x09, 0xa7,
                                          0xf3, 0x97, 0x89, 0xf5, 0x15, 0xab, 0x8f, 0x92,
                                          0xdd, 0xbc, 0xbd, 0x41, 0x4d, 0x94, 0x0e, 0x93};
std::vector<unsigned char> g_sm2ParamxG = {0x32, 0xc4, 0xae, 0x2c, 0x1f, 0x19, 0x81, 0x19,
                                           0x5f, 0x99, 0x04, 0x46, 0x6a, 0x39, 0xc9, 0x94,
                                           0x8f, 0xe3, 0x0b, 0xbf, 0xf2, 0x66, 0x0b, 0xe1,
                                           0x71, 0x5a, 0x45, 0x89, 0x33, 0x4c, 0x74, 0xc7};
std::vector<unsigned char> g_sm2ParamyG = {0xbc, 0x37, 0x36, 0xa2, 0xf4, 0xf6, 0x77, 0x9c,
                                           0x59, 0xbd, 0xce, 0xe3, 0x6b, 0x69, 0x21, 0x53,
                                           0xd0, 0xa9, 0x87, 0x7c, 0xc6, 0x2a, 0x47, 0x40,
                                           0x02, 0xdf, 0x32, 0xe5, 0x21, 0x39, 0xf0, 0xa0};
std::vector<unsigned char> g_userId = {0x31,0x32,0x33,0x34,0x35,0x36,0x37,0x38,
                                       0x31,0x32,0x33,0x34,0x35,0x36,0x37,0x38};

Sm2Sm3Signer::Sm2Sm3Signer(const std::string &appKey, const std::string &appSecret) : Signer(appKey, appSecret)
{
    algorithm_ = Constants::sdk_sm2_sm3;
    contentHeader_ = Constants::x_sdk_content_sm3;
    hasher_ = new Sm3Hasher();
}

Sm2Sm3Signer::Sm2Sm3Signer() : Signer()
{
    hasher_ = new Sm3Hasher();
}

Sm2Sm3Signer::~Sm2Sm3Signer() = default;

/*
 * 国密SM2算法中对Z值计算
 * 根据GB/T 32918.5-2017文档,计算公式如下
 * ZA = Hash(ENTLA | | IDA | | a | | b | | xG | | yG | | xA | | yA)
 */
void Sm2Sm3Signer::sm3DigestZ(std::vector<unsigned char> pubKey, unsigned char *zDigest)
{
    int idBitLen = g_userId.size() * 8;
    std::vector<unsigned char> entla;
    std::vector<unsigned char> xPubKey(SM2_PUBKEY_LENGTH);
    std::vector<unsigned char> yPubKey(SM2_PUBKEY_LENGTH);

    entla.push_back((idBitLen & 0xff) >> 8);
    entla.push_back(idBitLen & 0xff);
    std::copy(pubKey.begin() + 1, pubKey.begin() + xPubKey.size() + 1, xPubKey.begin());
    std::copy(pubKey.begin() + xPubKey.size() + 1, pubKey.end(), yPubKey.begin());

    EVP_MD_CTX *ctx = EVP_MD_CTX_new();
    EVP_DigestInit(ctx, EVP_sm3());
    EVP_DigestUpdate(ctx, entla.data(), entla.size());
    EVP_DigestUpdate(ctx, g_userId.data(), g_userId.size());
    EVP_DigestUpdate(ctx, g_sm2ParamA.data(), g_sm2ParamA.size());
    EVP_DigestUpdate(ctx, g_sm2ParamB.data(), g_sm2ParamB.size());
    EVP_DigestUpdate(ctx, g_sm2ParamxG.data(), g_sm2ParamxG.size());
    EVP_DigestUpdate(ctx, g_sm2ParamyG.data(), g_sm2ParamyG.size());
    EVP_DigestUpdate(ctx, xPubKey.data(), xPubKey.size());
    EVP_DigestUpdate(ctx, yPubKey.data(), yPubKey.size());
    EVP_DigestFinal(ctx, zDigest, nullptr);
    EVP_MD_CTX_free(ctx);
}

/*
 * 国密SM2算法中对消息值做SM3哈希计算
 * M' = Za || M
 * e = Hash(M')
 */
void Sm2Sm3Signer::sm3DigestWithMessage(const unsigned char *message, size_t messageLen,
                                        std::vector<unsigned char> pubKey, unsigned char *digest)
{
    unsigned char zDigest[SM3_DIGEST_LENGTH];
    sm3DigestZ(pubKey, zDigest);

    EVP_MD_CTX *ctx = EVP_MD_CTX_new();
    EVP_DigestInit(ctx, EVP_sm3());
    EVP_DigestUpdate(ctx, zDigest, sizeof(zDigest));
    EVP_DigestUpdate(ctx, message, messageLen);
    EVP_DigestFinal(ctx, digest, nullptr);
    EVP_MD_CTX_free(ctx);
}

/*
 * 国密SM2算法数字签名
 * SM2 sign, based on GB/T 32918.5-2017
    Step 1: M' = Za || M
    Step 2: e = Hash(M')
    Step 3: Random k in [1, n-1]
    Step 4: P(x,y) = [k]G(x,y)
    Step 5: r = (e + x1) mod n, back to step 3 if r = 0 or r + k = n
    Step 6: s = ((1 + D)^-1 · (k - r · D)) mod n, back to step 3 if s = 0
 */
ECDSA_SIG * Sm2Sm3Signer::sm2SignData(const unsigned char *message, size_t messageLen, std::vector<unsigned char> pubKey,
                                      BIGNUM *priKey)
{
    unsigned char digest[SM3_DIGEST_LENGTH];
    BN_CTX *ctx = nullptr;
    BIGNUM *bnE = nullptr;
    BIGNUM *bnK = nullptr;
    BIGNUM *bnX = nullptr;
    BIGNUM *bnTmp = nullptr;
    BIGNUM *bnOne = nullptr;
    BIGNUM *dA = nullptr;
    BIGNUM *bnSumInv = nullptr;
    BIGNUM *bnDif = nullptr;
    const BIGNUM *n = nullptr;
    EC_GROUP *group = nullptr;
    EC_POINT *kG = nullptr;
    ECDSA_SIG *sig = nullptr;

    // 对消息值做哈希计算
    // Step 1: M' = Za || M
    // Step 2: e = Hash(M')
    sm3DigestWithMessage(message, messageLen, pubKey, digest);

    ctx = BN_CTX_secure_new();
    BN_CTX_start(ctx);
    bnOne = BN_CTX_get(ctx);
    bnE = BN_CTX_get(ctx);
    bnK = BN_CTX_get(ctx);
    bnX = BN_CTX_get(ctx);
    bnTmp = BN_CTX_get(ctx);
    bnSumInv = BN_CTX_get(ctx);
    bnDif = BN_CTX_get(ctx);

    BIGNUM *bn_r = BN_new();
    BIGNUM *bn_s = BN_new();

    group = EC_GROUP_new_by_curve_name(NID_sm2);
    kG = EC_POINT_new(group);
    BN_one(bnOne);
    dA = priKey;
    BN_bin2bn(digest, sizeof(digest), bnE);
    n = EC_GROUP_get0_order(group);

    // 生成数字签名
    for (int i = 0; i < 100; i++) {
        // Step 3: Random k in [1, n-1]
        BN_priv_rand_range_ex(bnK, n, 0, ctx);
        if (BN_is_zero(bnK)) {
            continue;
        }

        // Step 4: P(x,y) = [k]G(x,y)
        EC_POINT_mul(group, kG, bnK, nullptr, nullptr, ctx);
        EC_POINT_get_affine_coordinates(group,kG,bnX,bnTmp,ctx);

        // Step 5: r = (e + x1) mod n
        BN_mod_add(bn_r, bnE, bnX, n, ctx);

        // back to step 3 if r = 0 or r + k = n
        if (BN_is_zero(bn_r)) {
            continue;
        }

        BN_add(bnTmp, bn_r, bnK);
        if (BN_cmp(bnTmp, n) == 0) {
            continue;
        }

        // Step 6: s = ((1 + D)^-1 · (k - r · D)) mod n
        BN_add(bnTmp, bnOne, dA);  // compute (1 + D)
        BN_mod_inverse(bnSumInv, bnTmp, n, ctx); // (1 + D)^-1
        BN_mul(bnTmp, bn_r, dA, ctx); // compute (r · D)
        BN_sub(bnDif, bnK, bnTmp); // (k - r · D)
        BN_mod_mul(bn_s, bnSumInv, bnDif, n, ctx); // ((1 + D)^-1 · (k - r · D)) mod n

        // back to step 3 if s = 0
        if (BN_is_zero(bn_s)) {
            continue;
        }

        sig = ECDSA_SIG_new();
        ECDSA_SIG_set0(sig, bn_r, bn_s);
        break;
    }

    BN_CTX_end(ctx);
    BN_CTX_free(ctx);
    EC_GROUP_free(group);
    EC_POINT_free(kG);

    return sig;
}

/*
 * 获取国密SM2数字签名入口
    Step 1: 基于用户的SK进行派生，获取到一个私钥
    Step 2: 根据私钥进行椭圆计算，得到公钥
    Step 3: 通过私钥对消息体进行数字签名计算
    Step 4: 生成的数字签名以 ASN 1 的 Der 形式表示
 */
std::string Sm2Sm3Signer::getSignature(const std::string &msg) {
    spdlog::info("Begin to get Signature SM2withSM3");
    // 获取曲线参数
    EC_GROUP *ecGroup = EC_GROUP_new_by_curve_name(NID_sm2);
    // 生成私钥计算需要, 根据 NIST-186-4 B.4.2中要求, 椭圆曲线的私钥必须要小于该椭圆曲线参数n, 获取椭圆参数n - 2, 作为生成私钥的上限
    BIGNUM *n = BN_new();
    EC_GROUP_get_order(ecGroup, n, nullptr);
    BIGNUM *nMinusTwo = BN_new();
    BN_sub(nMinusTwo, n, BN_value_one());
    BN_sub(nMinusTwo, nMinusTwo, BN_value_one());

    // 生成私钥 : 基于用户的SK进行派生，获取到一个256bit的派生密钥
    std::vector<unsigned char> privateKeyVec = derivePrivateKey(algorithm_, EVP_sm3(), appKey_, appSecret_, nMinusTwo);
    if (privateKeyVec.empty()) {
        BN_free(nMinusTwo);
        BN_free(n);
        EC_GROUP_free(ecGroup);
        spdlog::info("Failed to derive private integer");
        return "";
    }
    BIGNUM *privateKey = BN_bin2bn(privateKeyVec.data(), privateKeyVec.size(), nullptr);

    // 生成公钥
    EC_POINT *pubKey = EC_POINT_new(ecGroup);
    EC_POINT_mul(ecGroup, pubKey, privateKey, nullptr, nullptr, nullptr);

    size_t pubKeyLen = EC_POINT_point2oct(ecGroup, pubKey, POINT_CONVERSION_UNCOMPRESSED, nullptr, 0, nullptr);
    std::vector<unsigned char> pubKeyVec(pubKeyLen);
    EC_POINT_point2oct(ecGroup, pubKey, POINT_CONVERSION_UNCOMPRESSED, pubKeyVec.data(), pubKeyLen, nullptr);

    // 生成SM2数字签名
    ECDSA_SIG *sig = sm2SignData(reinterpret_cast<const unsigned char *>(msg.data()), msg.length(),
                                 pubKeyVec, privateKey);
    if (sig == nullptr) {
        BN_free(nMinusTwo);
        BN_free(n);
        EC_GROUP_free(ecGroup);
        BN_clear_free(privateKey);
        EC_POINT_free(pubKey);
        spdlog::info("Failed to get sig");
        return "";
    }

    // 生成的数字签名以 ASN 1 的 Der 形式表示
    unsigned char *der = nullptr;
    int der_len = i2d_ECDSA_SIG(sig, &der);
    if (der_len <= 0) {
        BN_free(nMinusTwo);
        BN_free(n);
        EC_GROUP_free(ecGroup);
        BN_clear_free(privateKey);
        EC_POINT_free(pubKey);
        ECDSA_SIG_free(sig);
        spdlog::info("Failed to der_len");
        return "";
    }

    std::string signature = hasher_->hexEncode(der, der_len);

    BN_free(nMinusTwo);
    BN_free(n);
    EC_GROUP_free(ecGroup);
    BN_clear_free(privateKey);
    EC_POINT_free(pubKey);
    ECDSA_SIG_free(sig);
    OPENSSL_free(der);
    spdlog::info("End to get Signature SM2withSM3");
    return signature;
}

/*
 * 国密SM2算法验证签名
 *  SM2 verify, based on GB/T 32918.5-2017
    Step 1: assert r in [1, n-1]
    Step 2: assert s in [1, n-1]
    Step 3: M' = Za || M
    Step 4: e = Hash(M')
    Step 5: t = (r + s) mod n, failed if t = 0
    Step 6: P(x,y) = [s]G(x,y) + [t]Pub(x,y)
    Step 7: R = (e + x1) mod n, assert R = r
 */
bool Sm2Sm3Signer::sm2VerifySig(const std::string &msg, std::string signature)
{
    spdlog::info("Begin to verify Signature SM2withSM3");
    // 获取曲线参数
    EC_GROUP *ecGroup = EC_GROUP_new_by_curve_name(NID_sm2);
    // 生成私钥计算需要, 根据 NIST-186-4 B.4.2中要求, 椭圆曲线的私钥必须要小于该椭圆曲线参数n, 获取椭圆参数n - 2, 作为生成私钥的上限
    BIGNUM *order = BN_new();
    EC_GROUP_get_order(ecGroup, order, nullptr);
    BIGNUM *nMinusTwo = BN_new();
    BN_sub(nMinusTwo, order, BN_value_one());
    BN_sub(nMinusTwo, nMinusTwo, BN_value_one());

    // 生成私钥 : 基于用户的SK进行派生，获取到一个256bit的派生密钥
    std::vector<unsigned char> privateKeyVec = derivePrivateKey(algorithm_, EVP_sm3(), appKey_, appSecret_, nMinusTwo);
    if (privateKeyVec.empty()) {
        BN_free(nMinusTwo);
        BN_free(order);
        EC_GROUP_free(ecGroup);
        spdlog::info("Failed to derive private integer");
        return "";
    }
    BIGNUM *privateKey = BN_bin2bn(privateKeyVec.data(), privateKeyVec.size(), nullptr);

    // 生成公钥
    EC_POINT *pubKey = EC_POINT_new(ecGroup);
    EC_POINT_mul(ecGroup, pubKey, privateKey, nullptr, nullptr, nullptr);
    size_t pubKeyLen = EC_POINT_point2oct(ecGroup, pubKey, POINT_CONVERSION_UNCOMPRESSED, nullptr, 0, nullptr);
    std::vector<unsigned char> pubKeyVec(pubKeyLen);
    EC_POINT_point2oct(ecGroup, pubKey, POINT_CONVERSION_UNCOMPRESSED, pubKeyVec.data(), pubKeyLen, nullptr);

    bool isVerify = false;
    unsigned char digest[SM3_DIGEST_LENGTH];
    std::vector<unsigned char> xPubKey(SM2_PUBKEY_LENGTH);
    std::vector<unsigned char> yPubKey(SM2_PUBKEY_LENGTH);
    BN_CTX *ctx = nullptr;
    BIGNUM *bnE = nullptr;
    BIGNUM *bnT = nullptr;
    BIGNUM *bnXPubKey = nullptr;
    BIGNUM *bnYPubKey = nullptr;
    BIGNUM *bnX = nullptr;
    BIGNUM *bnY = nullptr;
    BIGNUM *bnR = nullptr;
    const BIGNUM *r = nullptr;
    const BIGNUM *s = nullptr;
    EC_GROUP *group = nullptr;
    EC_POINT *ecPubKey = nullptr;
    EC_POINT *ecPubKey1 = nullptr;
    EC_POINT *ecPubKey2 = nullptr;

    // 对消息生成哈希摘要
    // Step 3: M' = Za || M
    // Step 4: e = Hash(M')
    sm3DigestWithMessage(reinterpret_cast<const unsigned char *>(msg.data()), msg.length(), pubKeyVec, digest);

    unsigned char der[100];
    int derLen = hasher_->hexStringToCharArray(signature, der);
    const unsigned char* p = der;
    ECDSA_SIG* sig = d2i_ECDSA_SIG(nullptr, &p, derLen);
    if (sig == nullptr) {
        isVerify = false;
        goto cleanup;
    }

    std::copy(pubKeyVec.begin() + 1, pubKeyVec.begin() + xPubKey.size() + 1, xPubKey.begin());
    std::copy(pubKeyVec.begin() + xPubKey.size() + 1, pubKeyVec.end(), yPubKey.begin());

    ctx = BN_CTX_new();
    BN_CTX_start(ctx);
    bnE = BN_CTX_get(ctx);
    bnT = BN_CTX_get(ctx);
    bnXPubKey = BN_CTX_get(ctx);
    bnYPubKey = BN_CTX_get(ctx);
    bnX = BN_CTX_get(ctx);
    bnY = BN_CTX_get(ctx);
    bnR = BN_CTX_get(ctx);
    group = EC_GROUP_new_by_curve_name(NID_sm2);
    ecPubKey = EC_POINT_new(group);
    ecPubKey1 = EC_POINT_new(group);
    ecPubKey2 = EC_POINT_new(group);

    BN_bin2bn(digest, sizeof(digest), bnE);
    BN_bin2bn(xPubKey.data(), xPubKey.size(), bnXPubKey);
    BN_bin2bn(yPubKey.data(), yPubKey.size(), bnYPubKey);

    ECDSA_SIG_get0(sig, &r, &s);

    // Step 1: assert r in [1, n-1]
    if ((BN_is_zero(r)) || (BN_cmp(r, order) != (-1))) {
        isVerify = false;
        goto cleanup;
    }

    // Step 2: assert s in [1, n-1]
    if ((BN_is_zero(s)) || (BN_cmp(s, order) != (-1))) {
        isVerify = false;
        goto cleanup;
    }

    // Step 5: t = (r + s) mod n, failed if t = 0
    BN_mod_add(bnT, r, s, order, ctx);
    if ( BN_is_zero(bnT) ) {
        isVerify = false;
        goto cleanup;
    }

    // Step 6: P(x,y) = [s]G(x,y) + [t]Pub(x,y)
    EC_POINT_mul(group, ecPubKey1, s, nullptr, nullptr, ctx);
    EC_POINT_set_affine_coordinates_GFp(group,ecPubKey,bnXPubKey,bnYPubKey, ctx);
    EC_POINT_mul(group, ecPubKey2, nullptr, ecPubKey, bnT, ctx);
    EC_POINT_add(group, ecPubKey1, ecPubKey1, ecPubKey2, ctx);
    EC_POINT_get_affine_coordinates_GFp(group,ecPubKey1,bnX,bnY, ctx);
    // Step 7: R = (e + x1) mod n, assert R = r
    BN_mod_add(bnR, bnE, bnX, order, ctx);
    if (!(BN_cmp(r, bnR))) {
        isVerify = true;
    }

cleanup:
    if (ctx) {
        BN_CTX_end(ctx);
        BN_CTX_free(ctx);
    }

    if (group) {
        EC_GROUP_free(group);
    }

    if (ecPubKey) {
        EC_POINT_free(ecPubKey);
    }

    if (ecPubKey1) {
        EC_POINT_free(ecPubKey1);
    }

    if (ecPubKey2) {
        EC_POINT_free(ecPubKey2);
    }
    BN_free(nMinusTwo);
    BN_free(order);
    EC_GROUP_free(ecGroup);
    BN_clear_free(privateKey);
    EC_POINT_free(pubKey);

    spdlog::info("End to verify Signature SM2withSM3, {}", isVerify);
    return isVerify;
}