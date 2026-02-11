
#include <vector>
#include <algorithm>
#include <huaweicloud/core/auth/HKDF.h>
#include <huaweicloud/core/exception/SdkException.h>
#include <openssl/hmac.h>
#include <openssl/evp.h>


using namespace HuaweiCloud::Sdk::Core::Auth;
using namespace HuaweiCloud::Sdk::Core::Exception;

HKDF::HKDF() = default;

std::string HKDF::getDerKeySHA256(std::string &accessKey, std::string &secretKey, std::string &info)  {
    if (accessKey.empty() || secretKey.empty()) {
        return "";
    }
    try {
        std::vector<unsigned char> ikm(secretKey.begin(), secretKey.end());
        std::vector<unsigned char> salt(accessKey.begin(), accessKey.end());
        std::vector<unsigned char>  tmp_key = extract(ikm, salt, HMAC_ALGORITHM);
        std::vector<unsigned char> infoV(info.begin(), info.end());
        std::vector<unsigned char> der_secret_key = expand(tmp_key, infoV);
        if (!der_secret_key.empty()) {
            std::string str(der_secret_key.begin(), der_secret_key.end());
            return toHex(str);
        }
        return "";
    } catch (const std::exception& e) {
        throw std::runtime_error(e.what());
    }
}

std::string HKDF::toHex(const std::string& input) {
    static const char hex_digits[] = "0123456789ABCDEF";
    std::string hex_string;
    for (char c : input) {
        hex_string.push_back(hex_digits[(c >> 4) & 0x0F]);
        hex_string.push_back(hex_digits[c & 0x0F]);
    }
    return hex_string;
}

std::vector<unsigned char> HKDF::extract(const std::vector<unsigned char>& ikm, std::vector<unsigned char>& salt, const std::string& hmacAlgorithm) const {
    if (salt.empty()) {
        salt = std::vector<unsigned char>(getHashLen(hmacAlgorithm), 0);
    }

    return hmacSha256(salt, ikm);
}

/*
TODO: Some functions we used are marked as deprecated after openssl 3.0, so just ignore this warning for a while
      We will refactor the following codes later
*/
#pragma GCC diagnostic push
#pragma GCC diagnostic ignored "-Wdeprecated-declarations"
std::vector<unsigned char> HKDF::hmacSha256(const std::vector<unsigned char>& key,
                                       const std::vector<unsigned char>& data) {
    HMAC_CTX* ctx = HMAC_CTX_new();
    if (!ctx) {
        throw SdkException("Failed to create HMAC context");
    }

    if (!HMAC_Init_ex(ctx, key.data(), static_cast<int>(key.size()), EVP_sha256(), nullptr)) {
        HMAC_CTX_free(ctx);
        throw SdkException("Failed to initialize HMAC");
    }

    std::vector<unsigned char> result;
    result.resize(EVP_MAX_MD_SIZE);
    unsigned int result_length;

    if (!HMAC_Update(ctx, data.data(), data.size())) {
        HMAC_CTX_free(ctx);
        throw SdkException("Failed to update HMAC");
    }

    if (!HMAC_Final(ctx, result.data(), &result_length)) {
        HMAC_CTX_free(ctx);
        throw SdkException("Failed to compute HMAC");
    }

    result.resize(result_length);
    HMAC_CTX_free(ctx);

    return result;
}
#pragma GCC diagnostic pop

int HKDF::getHashLen(const std::string& hmac_algorithm) const {
    return hmac_algorithm == HMAC_SHA1 ? HMAC_SHA1_LENGTH : HMAC_SHA256_LENGTH;
}

std::vector<unsigned char> HKDF::expand(std::vector<unsigned char>& prk,
                                  std::vector<unsigned char>& info) {
    std::vector<unsigned char> rawResult;
    std::vector<unsigned char> temp;
    rawResult = expandFirst(prk, info);

    if (HMAC_SHA256_LENGTH == rawResult.size()) {
        return rawResult;
    } else if (HMAC_SHA256_LENGTH < rawResult.size()) {
        return std::vector<unsigned char>{rawResult.begin(), rawResult.begin() + HMAC_SHA256_LENGTH};
    } else {
        throw SdkException("Failed to expand with algorithm");
    }
}


std::vector<unsigned char> HKDF::expandFirst(const std::vector<unsigned char>& tmpKey, const std::vector<unsigned char>& info) {
    std::vector<unsigned char> result = info;
    result.push_back(1); // Append the byte 0x01
    return hmacSha256(tmpKey, result);
}



