

#include "huaweicloud/iotda/v5/model/ResetDeviceSecretResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ResetDeviceSecretResponse::ResetDeviceSecretResponse()
{
    deviceId_ = "";
    deviceIdIsSet_ = false;
    secret_ = "";
    secretIsSet_ = false;
    secretType_ = "";
    secretTypeIsSet_ = false;
}

ResetDeviceSecretResponse::~ResetDeviceSecretResponse() = default;

void ResetDeviceSecretResponse::validate()
{
}

web::json::value ResetDeviceSecretResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(deviceIdIsSet_) {
        val[utility::conversions::to_string_t("device_id")] = ModelBase::toJson(deviceId_);
    }
    if(secretIsSet_) {
        val[utility::conversions::to_string_t("secret")] = ModelBase::toJson(secret_);
    }
    if(secretTypeIsSet_) {
        val[utility::conversions::to_string_t("secret_type")] = ModelBase::toJson(secretType_);
    }

    return val;
}
bool ResetDeviceSecretResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("device_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("device_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeviceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("secret"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("secret"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecret(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("secret_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("secret_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecretType(refVal);
        }
    }
    return ok;
}


std::string ResetDeviceSecretResponse::getDeviceId() const
{
    return deviceId_;
}

void ResetDeviceSecretResponse::setDeviceId(const std::string& value)
{
    deviceId_ = value;
    deviceIdIsSet_ = true;
}

bool ResetDeviceSecretResponse::deviceIdIsSet() const
{
    return deviceIdIsSet_;
}

void ResetDeviceSecretResponse::unsetdeviceId()
{
    deviceIdIsSet_ = false;
}

std::string ResetDeviceSecretResponse::getSecret() const
{
    return secret_;
}

void ResetDeviceSecretResponse::setSecret(const std::string& value)
{
    secret_ = value;
    secretIsSet_ = true;
}

bool ResetDeviceSecretResponse::secretIsSet() const
{
    return secretIsSet_;
}

void ResetDeviceSecretResponse::unsetsecret()
{
    secretIsSet_ = false;
}

std::string ResetDeviceSecretResponse::getSecretType() const
{
    return secretType_;
}

void ResetDeviceSecretResponse::setSecretType(const std::string& value)
{
    secretType_ = value;
    secretTypeIsSet_ = true;
}

bool ResetDeviceSecretResponse::secretTypeIsSet() const
{
    return secretTypeIsSet_;
}

void ResetDeviceSecretResponse::unsetsecretType()
{
    secretTypeIsSet_ = false;
}

}
}
}
}
}


