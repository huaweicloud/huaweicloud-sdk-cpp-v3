

#include "huaweicloud/kms/v2/model/DecryptDatakeyCapsuleRequestBody_attestation_document.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




DecryptDatakeyCapsuleRequestBody_attestation_document::DecryptDatakeyCapsuleRequestBody_attestation_document()
{
    ecsSignature_ = "";
    ecsSignatureIsSet_ = false;
    customSignature_ = "";
    customSignatureIsSet_ = false;
    customPublicKey_ = "";
    customPublicKeyIsSet_ = false;
    expireTime_ = "";
    expireTimeIsSet_ = false;
    serviceToken_ = "";
    serviceTokenIsSet_ = false;
}

DecryptDatakeyCapsuleRequestBody_attestation_document::~DecryptDatakeyCapsuleRequestBody_attestation_document() = default;

void DecryptDatakeyCapsuleRequestBody_attestation_document::validate()
{
}

web::json::value DecryptDatakeyCapsuleRequestBody_attestation_document::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ecsSignatureIsSet_) {
        val[utility::conversions::to_string_t("ecs_signature")] = ModelBase::toJson(ecsSignature_);
    }
    if(customSignatureIsSet_) {
        val[utility::conversions::to_string_t("custom_signature")] = ModelBase::toJson(customSignature_);
    }
    if(customPublicKeyIsSet_) {
        val[utility::conversions::to_string_t("custom_public_key")] = ModelBase::toJson(customPublicKey_);
    }
    if(expireTimeIsSet_) {
        val[utility::conversions::to_string_t("expire_time")] = ModelBase::toJson(expireTime_);
    }
    if(serviceTokenIsSet_) {
        val[utility::conversions::to_string_t("service_token")] = ModelBase::toJson(serviceToken_);
    }

    return val;
}
bool DecryptDatakeyCapsuleRequestBody_attestation_document::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ecs_signature"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ecs_signature"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEcsSignature(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_signature"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_signature"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomSignature(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_public_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_public_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomPublicKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expire_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expire_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpireTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("service_token"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_token"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceToken(refVal);
        }
    }
    return ok;
}


std::string DecryptDatakeyCapsuleRequestBody_attestation_document::getEcsSignature() const
{
    return ecsSignature_;
}

void DecryptDatakeyCapsuleRequestBody_attestation_document::setEcsSignature(const std::string& value)
{
    ecsSignature_ = value;
    ecsSignatureIsSet_ = true;
}

bool DecryptDatakeyCapsuleRequestBody_attestation_document::ecsSignatureIsSet() const
{
    return ecsSignatureIsSet_;
}

void DecryptDatakeyCapsuleRequestBody_attestation_document::unsetecsSignature()
{
    ecsSignatureIsSet_ = false;
}

std::string DecryptDatakeyCapsuleRequestBody_attestation_document::getCustomSignature() const
{
    return customSignature_;
}

void DecryptDatakeyCapsuleRequestBody_attestation_document::setCustomSignature(const std::string& value)
{
    customSignature_ = value;
    customSignatureIsSet_ = true;
}

bool DecryptDatakeyCapsuleRequestBody_attestation_document::customSignatureIsSet() const
{
    return customSignatureIsSet_;
}

void DecryptDatakeyCapsuleRequestBody_attestation_document::unsetcustomSignature()
{
    customSignatureIsSet_ = false;
}

std::string DecryptDatakeyCapsuleRequestBody_attestation_document::getCustomPublicKey() const
{
    return customPublicKey_;
}

void DecryptDatakeyCapsuleRequestBody_attestation_document::setCustomPublicKey(const std::string& value)
{
    customPublicKey_ = value;
    customPublicKeyIsSet_ = true;
}

bool DecryptDatakeyCapsuleRequestBody_attestation_document::customPublicKeyIsSet() const
{
    return customPublicKeyIsSet_;
}

void DecryptDatakeyCapsuleRequestBody_attestation_document::unsetcustomPublicKey()
{
    customPublicKeyIsSet_ = false;
}

std::string DecryptDatakeyCapsuleRequestBody_attestation_document::getExpireTime() const
{
    return expireTime_;
}

void DecryptDatakeyCapsuleRequestBody_attestation_document::setExpireTime(const std::string& value)
{
    expireTime_ = value;
    expireTimeIsSet_ = true;
}

bool DecryptDatakeyCapsuleRequestBody_attestation_document::expireTimeIsSet() const
{
    return expireTimeIsSet_;
}

void DecryptDatakeyCapsuleRequestBody_attestation_document::unsetexpireTime()
{
    expireTimeIsSet_ = false;
}

std::string DecryptDatakeyCapsuleRequestBody_attestation_document::getServiceToken() const
{
    return serviceToken_;
}

void DecryptDatakeyCapsuleRequestBody_attestation_document::setServiceToken(const std::string& value)
{
    serviceToken_ = value;
    serviceTokenIsSet_ = true;
}

bool DecryptDatakeyCapsuleRequestBody_attestation_document::serviceTokenIsSet() const
{
    return serviceTokenIsSet_;
}

void DecryptDatakeyCapsuleRequestBody_attestation_document::unsetserviceToken()
{
    serviceTokenIsSet_ = false;
}

}
}
}
}
}


