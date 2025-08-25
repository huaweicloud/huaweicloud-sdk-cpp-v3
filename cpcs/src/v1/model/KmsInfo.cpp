

#include "huaweicloud/cpcs/v1/model/KmsInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




KmsInfo::KmsInfo()
{
    aes256_ = 0;
    aes256IsSet_ = false;
    sm4_ = 0;
    sm4IsSet_ = false;
    rsa2048_ = 0;
    rsa2048IsSet_ = false;
    rsa3072_ = 0;
    rsa3072IsSet_ = false;
    rsa4096_ = 0;
    rsa4096IsSet_ = false;
    ecP256_ = 0;
    ecP256IsSet_ = false;
    ecP384_ = 0;
    ecP384IsSet_ = false;
    sm2_ = 0;
    sm2IsSet_ = false;
}

KmsInfo::~KmsInfo() = default;

void KmsInfo::validate()
{
}

web::json::value KmsInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(aes256IsSet_) {
        val[utility::conversions::to_string_t("aes_256")] = ModelBase::toJson(aes256_);
    }
    if(sm4IsSet_) {
        val[utility::conversions::to_string_t("sm4")] = ModelBase::toJson(sm4_);
    }
    if(rsa2048IsSet_) {
        val[utility::conversions::to_string_t("rsa_2048")] = ModelBase::toJson(rsa2048_);
    }
    if(rsa3072IsSet_) {
        val[utility::conversions::to_string_t("rsa_3072")] = ModelBase::toJson(rsa3072_);
    }
    if(rsa4096IsSet_) {
        val[utility::conversions::to_string_t("rsa_4096")] = ModelBase::toJson(rsa4096_);
    }
    if(ecP256IsSet_) {
        val[utility::conversions::to_string_t("ec_p256")] = ModelBase::toJson(ecP256_);
    }
    if(ecP384IsSet_) {
        val[utility::conversions::to_string_t("ec_p384")] = ModelBase::toJson(ecP384_);
    }
    if(sm2IsSet_) {
        val[utility::conversions::to_string_t("sm2")] = ModelBase::toJson(sm2_);
    }

    return val;
}
bool KmsInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("aes_256"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("aes_256"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAes256(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sm4"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sm4"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSm4(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rsa_2048"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rsa_2048"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRsa2048(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rsa_3072"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rsa_3072"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRsa3072(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rsa_4096"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rsa_4096"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRsa4096(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ec_p256"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ec_p256"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEcP256(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ec_p384"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ec_p384"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEcP384(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sm2"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sm2"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSm2(refVal);
        }
    }
    return ok;
}


int32_t KmsInfo::getAes256() const
{
    return aes256_;
}

void KmsInfo::setAes256(int32_t value)
{
    aes256_ = value;
    aes256IsSet_ = true;
}

bool KmsInfo::aes256IsSet() const
{
    return aes256IsSet_;
}

void KmsInfo::unsetaes256()
{
    aes256IsSet_ = false;
}

int32_t KmsInfo::getSm4() const
{
    return sm4_;
}

void KmsInfo::setSm4(int32_t value)
{
    sm4_ = value;
    sm4IsSet_ = true;
}

bool KmsInfo::sm4IsSet() const
{
    return sm4IsSet_;
}

void KmsInfo::unsetsm4()
{
    sm4IsSet_ = false;
}

int32_t KmsInfo::getRsa2048() const
{
    return rsa2048_;
}

void KmsInfo::setRsa2048(int32_t value)
{
    rsa2048_ = value;
    rsa2048IsSet_ = true;
}

bool KmsInfo::rsa2048IsSet() const
{
    return rsa2048IsSet_;
}

void KmsInfo::unsetrsa2048()
{
    rsa2048IsSet_ = false;
}

int32_t KmsInfo::getRsa3072() const
{
    return rsa3072_;
}

void KmsInfo::setRsa3072(int32_t value)
{
    rsa3072_ = value;
    rsa3072IsSet_ = true;
}

bool KmsInfo::rsa3072IsSet() const
{
    return rsa3072IsSet_;
}

void KmsInfo::unsetrsa3072()
{
    rsa3072IsSet_ = false;
}

int32_t KmsInfo::getRsa4096() const
{
    return rsa4096_;
}

void KmsInfo::setRsa4096(int32_t value)
{
    rsa4096_ = value;
    rsa4096IsSet_ = true;
}

bool KmsInfo::rsa4096IsSet() const
{
    return rsa4096IsSet_;
}

void KmsInfo::unsetrsa4096()
{
    rsa4096IsSet_ = false;
}

int32_t KmsInfo::getEcP256() const
{
    return ecP256_;
}

void KmsInfo::setEcP256(int32_t value)
{
    ecP256_ = value;
    ecP256IsSet_ = true;
}

bool KmsInfo::ecP256IsSet() const
{
    return ecP256IsSet_;
}

void KmsInfo::unsetecP256()
{
    ecP256IsSet_ = false;
}

int32_t KmsInfo::getEcP384() const
{
    return ecP384_;
}

void KmsInfo::setEcP384(int32_t value)
{
    ecP384_ = value;
    ecP384IsSet_ = true;
}

bool KmsInfo::ecP384IsSet() const
{
    return ecP384IsSet_;
}

void KmsInfo::unsetecP384()
{
    ecP384IsSet_ = false;
}

int32_t KmsInfo::getSm2() const
{
    return sm2_;
}

void KmsInfo::setSm2(int32_t value)
{
    sm2_ = value;
    sm2IsSet_ = true;
}

bool KmsInfo::sm2IsSet() const
{
    return sm2IsSet_;
}

void KmsInfo::unsetsm2()
{
    sm2IsSet_ = false;
}

}
}
}
}
}


