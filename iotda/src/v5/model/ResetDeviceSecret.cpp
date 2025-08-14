

#include "huaweicloud/iotda/v5/model/ResetDeviceSecret.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ResetDeviceSecret::ResetDeviceSecret()
{
    secret_ = "";
    secretIsSet_ = false;
    forceDisconnect_ = false;
    forceDisconnectIsSet_ = false;
    secretType_ = "";
    secretTypeIsSet_ = false;
}

ResetDeviceSecret::~ResetDeviceSecret() = default;

void ResetDeviceSecret::validate()
{
}

web::json::value ResetDeviceSecret::toJson() const
{
    web::json::value val = web::json::value::object();

    if(secretIsSet_) {
        val[utility::conversions::to_string_t("secret")] = ModelBase::toJson(secret_);
    }
    if(forceDisconnectIsSet_) {
        val[utility::conversions::to_string_t("force_disconnect")] = ModelBase::toJson(forceDisconnect_);
    }
    if(secretTypeIsSet_) {
        val[utility::conversions::to_string_t("secret_type")] = ModelBase::toJson(secretType_);
    }

    return val;
}
bool ResetDeviceSecret::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("secret"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("secret"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecret(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("force_disconnect"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("force_disconnect"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setForceDisconnect(refVal);
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


std::string ResetDeviceSecret::getSecret() const
{
    return secret_;
}

void ResetDeviceSecret::setSecret(const std::string& value)
{
    secret_ = value;
    secretIsSet_ = true;
}

bool ResetDeviceSecret::secretIsSet() const
{
    return secretIsSet_;
}

void ResetDeviceSecret::unsetsecret()
{
    secretIsSet_ = false;
}

bool ResetDeviceSecret::isForceDisconnect() const
{
    return forceDisconnect_;
}

void ResetDeviceSecret::setForceDisconnect(bool value)
{
    forceDisconnect_ = value;
    forceDisconnectIsSet_ = true;
}

bool ResetDeviceSecret::forceDisconnectIsSet() const
{
    return forceDisconnectIsSet_;
}

void ResetDeviceSecret::unsetforceDisconnect()
{
    forceDisconnectIsSet_ = false;
}

std::string ResetDeviceSecret::getSecretType() const
{
    return secretType_;
}

void ResetDeviceSecret::setSecretType(const std::string& value)
{
    secretType_ = value;
    secretTypeIsSet_ = true;
}

bool ResetDeviceSecret::secretTypeIsSet() const
{
    return secretTypeIsSet_;
}

void ResetDeviceSecret::unsetsecretType()
{
    secretTypeIsSet_ = false;
}

}
}
}
}
}


