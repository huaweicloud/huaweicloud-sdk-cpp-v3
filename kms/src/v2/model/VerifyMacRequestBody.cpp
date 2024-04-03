

#include "huaweicloud/kms/v2/model/VerifyMacRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




VerifyMacRequestBody::VerifyMacRequestBody()
{
    keyId_ = "";
    keyIdIsSet_ = false;
    macAlgorithm_ = "";
    macAlgorithmIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
    mac_ = "";
    macIsSet_ = false;
}

VerifyMacRequestBody::~VerifyMacRequestBody() = default;

void VerifyMacRequestBody::validate()
{
}

web::json::value VerifyMacRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keyIdIsSet_) {
        val[utility::conversions::to_string_t("key_id")] = ModelBase::toJson(keyId_);
    }
    if(macAlgorithmIsSet_) {
        val[utility::conversions::to_string_t("mac_algorithm")] = ModelBase::toJson(macAlgorithm_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }
    if(macIsSet_) {
        val[utility::conversions::to_string_t("mac")] = ModelBase::toJson(mac_);
    }

    return val;
}
bool VerifyMacRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("key_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeyId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mac_algorithm"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mac_algorithm"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMacAlgorithm(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mac"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mac"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMac(refVal);
        }
    }
    return ok;
}


std::string VerifyMacRequestBody::getKeyId() const
{
    return keyId_;
}

void VerifyMacRequestBody::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool VerifyMacRequestBody::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void VerifyMacRequestBody::unsetkeyId()
{
    keyIdIsSet_ = false;
}

std::string VerifyMacRequestBody::getMacAlgorithm() const
{
    return macAlgorithm_;
}

void VerifyMacRequestBody::setMacAlgorithm(const std::string& value)
{
    macAlgorithm_ = value;
    macAlgorithmIsSet_ = true;
}

bool VerifyMacRequestBody::macAlgorithmIsSet() const
{
    return macAlgorithmIsSet_;
}

void VerifyMacRequestBody::unsetmacAlgorithm()
{
    macAlgorithmIsSet_ = false;
}

std::string VerifyMacRequestBody::getMessage() const
{
    return message_;
}

void VerifyMacRequestBody::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool VerifyMacRequestBody::messageIsSet() const
{
    return messageIsSet_;
}

void VerifyMacRequestBody::unsetmessage()
{
    messageIsSet_ = false;
}

std::string VerifyMacRequestBody::getMac() const
{
    return mac_;
}

void VerifyMacRequestBody::setMac(const std::string& value)
{
    mac_ = value;
    macIsSet_ = true;
}

bool VerifyMacRequestBody::macIsSet() const
{
    return macIsSet_;
}

void VerifyMacRequestBody::unsetmac()
{
    macIsSet_ = false;
}

}
}
}
}
}


