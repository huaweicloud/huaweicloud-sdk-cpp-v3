

#include "huaweicloud/iotda/v5/model/BridgeAuthInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




BridgeAuthInfo::BridgeAuthInfo()
{
    authType_ = "";
    authTypeIsSet_ = false;
    secret_ = "";
    secretIsSet_ = false;
}

BridgeAuthInfo::~BridgeAuthInfo() = default;

void BridgeAuthInfo::validate()
{
}

web::json::value BridgeAuthInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(authTypeIsSet_) {
        val[utility::conversions::to_string_t("auth_type")] = ModelBase::toJson(authType_);
    }
    if(secretIsSet_) {
        val[utility::conversions::to_string_t("secret")] = ModelBase::toJson(secret_);
    }

    return val;
}
bool BridgeAuthInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("auth_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auth_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthType(refVal);
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
    return ok;
}


std::string BridgeAuthInfo::getAuthType() const
{
    return authType_;
}

void BridgeAuthInfo::setAuthType(const std::string& value)
{
    authType_ = value;
    authTypeIsSet_ = true;
}

bool BridgeAuthInfo::authTypeIsSet() const
{
    return authTypeIsSet_;
}

void BridgeAuthInfo::unsetauthType()
{
    authTypeIsSet_ = false;
}

std::string BridgeAuthInfo::getSecret() const
{
    return secret_;
}

void BridgeAuthInfo::setSecret(const std::string& value)
{
    secret_ = value;
    secretIsSet_ = true;
}

bool BridgeAuthInfo::secretIsSet() const
{
    return secretIsSet_;
}

void BridgeAuthInfo::unsetsecret()
{
    secretIsSet_ = false;
}

}
}
}
}
}


