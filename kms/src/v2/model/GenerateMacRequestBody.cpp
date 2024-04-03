

#include "huaweicloud/kms/v2/model/GenerateMacRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




GenerateMacRequestBody::GenerateMacRequestBody()
{
    keyId_ = "";
    keyIdIsSet_ = false;
    macAlgorithm_ = "";
    macAlgorithmIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
}

GenerateMacRequestBody::~GenerateMacRequestBody() = default;

void GenerateMacRequestBody::validate()
{
}

web::json::value GenerateMacRequestBody::toJson() const
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

    return val;
}
bool GenerateMacRequestBody::fromJson(const web::json::value& val)
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
    return ok;
}


std::string GenerateMacRequestBody::getKeyId() const
{
    return keyId_;
}

void GenerateMacRequestBody::setKeyId(const std::string& value)
{
    keyId_ = value;
    keyIdIsSet_ = true;
}

bool GenerateMacRequestBody::keyIdIsSet() const
{
    return keyIdIsSet_;
}

void GenerateMacRequestBody::unsetkeyId()
{
    keyIdIsSet_ = false;
}

std::string GenerateMacRequestBody::getMacAlgorithm() const
{
    return macAlgorithm_;
}

void GenerateMacRequestBody::setMacAlgorithm(const std::string& value)
{
    macAlgorithm_ = value;
    macAlgorithmIsSet_ = true;
}

bool GenerateMacRequestBody::macAlgorithmIsSet() const
{
    return macAlgorithmIsSet_;
}

void GenerateMacRequestBody::unsetmacAlgorithm()
{
    macAlgorithmIsSet_ = false;
}

std::string GenerateMacRequestBody::getMessage() const
{
    return message_;
}

void GenerateMacRequestBody::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool GenerateMacRequestBody::messageIsSet() const
{
    return messageIsSet_;
}

void GenerateMacRequestBody::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


