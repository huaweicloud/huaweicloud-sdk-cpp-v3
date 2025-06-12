

#include "huaweicloud/metastudio/v1/model/PlatformAuthorizationInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




PlatformAuthorizationInfo::PlatformAuthorizationInfo()
{
    authorizeState_ = "";
    authorizeStateIsSet_ = false;
    authorizedTime_ = "";
    authorizedTimeIsSet_ = false;
    expireTime_ = "";
    expireTimeIsSet_ = false;
    account_ = "";
    accountIsSet_ = false;
}

PlatformAuthorizationInfo::~PlatformAuthorizationInfo() = default;

void PlatformAuthorizationInfo::validate()
{
}

web::json::value PlatformAuthorizationInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(authorizeStateIsSet_) {
        val[utility::conversions::to_string_t("authorize_state")] = ModelBase::toJson(authorizeState_);
    }
    if(authorizedTimeIsSet_) {
        val[utility::conversions::to_string_t("authorized_time")] = ModelBase::toJson(authorizedTime_);
    }
    if(expireTimeIsSet_) {
        val[utility::conversions::to_string_t("expire_time")] = ModelBase::toJson(expireTime_);
    }
    if(accountIsSet_) {
        val[utility::conversions::to_string_t("account")] = ModelBase::toJson(account_);
    }

    return val;
}
bool PlatformAuthorizationInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("authorize_state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("authorize_state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorizeState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("authorized_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("authorized_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorizedTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("account"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("account"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccount(refVal);
        }
    }
    return ok;
}


std::string PlatformAuthorizationInfo::getAuthorizeState() const
{
    return authorizeState_;
}

void PlatformAuthorizationInfo::setAuthorizeState(const std::string& value)
{
    authorizeState_ = value;
    authorizeStateIsSet_ = true;
}

bool PlatformAuthorizationInfo::authorizeStateIsSet() const
{
    return authorizeStateIsSet_;
}

void PlatformAuthorizationInfo::unsetauthorizeState()
{
    authorizeStateIsSet_ = false;
}

std::string PlatformAuthorizationInfo::getAuthorizedTime() const
{
    return authorizedTime_;
}

void PlatformAuthorizationInfo::setAuthorizedTime(const std::string& value)
{
    authorizedTime_ = value;
    authorizedTimeIsSet_ = true;
}

bool PlatformAuthorizationInfo::authorizedTimeIsSet() const
{
    return authorizedTimeIsSet_;
}

void PlatformAuthorizationInfo::unsetauthorizedTime()
{
    authorizedTimeIsSet_ = false;
}

std::string PlatformAuthorizationInfo::getExpireTime() const
{
    return expireTime_;
}

void PlatformAuthorizationInfo::setExpireTime(const std::string& value)
{
    expireTime_ = value;
    expireTimeIsSet_ = true;
}

bool PlatformAuthorizationInfo::expireTimeIsSet() const
{
    return expireTimeIsSet_;
}

void PlatformAuthorizationInfo::unsetexpireTime()
{
    expireTimeIsSet_ = false;
}

std::string PlatformAuthorizationInfo::getAccount() const
{
    return account_;
}

void PlatformAuthorizationInfo::setAccount(const std::string& value)
{
    account_ = value;
    accountIsSet_ = true;
}

bool PlatformAuthorizationInfo::accountIsSet() const
{
    return accountIsSet_;
}

void PlatformAuthorizationInfo::unsetaccount()
{
    accountIsSet_ = false;
}

}
}
}
}
}


