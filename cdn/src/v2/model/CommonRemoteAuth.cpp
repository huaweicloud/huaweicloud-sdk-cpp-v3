

#include "huaweicloud/cdn/v2/model/CommonRemoteAuth.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V2 {
namespace Model {




CommonRemoteAuth::CommonRemoteAuth()
{
    remoteAuthentication_ = "";
    remoteAuthenticationIsSet_ = false;
    remoteAuthRulesIsSet_ = false;
}

CommonRemoteAuth::~CommonRemoteAuth() = default;

void CommonRemoteAuth::validate()
{
}

web::json::value CommonRemoteAuth::toJson() const
{
    web::json::value val = web::json::value::object();

    if(remoteAuthenticationIsSet_) {
        val[utility::conversions::to_string_t("remote_authentication")] = ModelBase::toJson(remoteAuthentication_);
    }
    if(remoteAuthRulesIsSet_) {
        val[utility::conversions::to_string_t("remote_auth_rules")] = ModelBase::toJson(remoteAuthRules_);
    }

    return val;
}
bool CommonRemoteAuth::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("remote_authentication"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("remote_authentication"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemoteAuthentication(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("remote_auth_rules"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("remote_auth_rules"));
        if(!fieldValue.is_null())
        {
            RemoteAuthRuleVo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemoteAuthRules(refVal);
        }
    }
    return ok;
}


std::string CommonRemoteAuth::getRemoteAuthentication() const
{
    return remoteAuthentication_;
}

void CommonRemoteAuth::setRemoteAuthentication(const std::string& value)
{
    remoteAuthentication_ = value;
    remoteAuthenticationIsSet_ = true;
}

bool CommonRemoteAuth::remoteAuthenticationIsSet() const
{
    return remoteAuthenticationIsSet_;
}

void CommonRemoteAuth::unsetremoteAuthentication()
{
    remoteAuthenticationIsSet_ = false;
}

RemoteAuthRuleVo CommonRemoteAuth::getRemoteAuthRules() const
{
    return remoteAuthRules_;
}

void CommonRemoteAuth::setRemoteAuthRules(const RemoteAuthRuleVo& value)
{
    remoteAuthRules_ = value;
    remoteAuthRulesIsSet_ = true;
}

bool CommonRemoteAuth::remoteAuthRulesIsSet() const
{
    return remoteAuthRulesIsSet_;
}

void CommonRemoteAuth::unsetremoteAuthRules()
{
    remoteAuthRulesIsSet_ = false;
}

}
}
}
}
}


