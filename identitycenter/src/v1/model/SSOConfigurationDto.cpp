

#include "huaweicloud/identitycenter/v1/model/SSOConfigurationDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




SSOConfigurationDto::SSOConfigurationDto()
{
    mfaMode_ = "";
    mfaModeIsSet_ = false;
    noMfaSigninBehavior_ = "";
    noMfaSigninBehaviorIsSet_ = false;
    noPasswordSigninBehavior_ = "";
    noPasswordSigninBehaviorIsSet_ = false;
    allowedMfaTypesIsSet_ = false;
    sessionConfigurationIsSet_ = false;
}

SSOConfigurationDto::~SSOConfigurationDto() = default;

void SSOConfigurationDto::validate()
{
}

web::json::value SSOConfigurationDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(mfaModeIsSet_) {
        val[utility::conversions::to_string_t("mfa_mode")] = ModelBase::toJson(mfaMode_);
    }
    if(noMfaSigninBehaviorIsSet_) {
        val[utility::conversions::to_string_t("no_mfa_signin_behavior")] = ModelBase::toJson(noMfaSigninBehavior_);
    }
    if(noPasswordSigninBehaviorIsSet_) {
        val[utility::conversions::to_string_t("no_password_signin_behavior")] = ModelBase::toJson(noPasswordSigninBehavior_);
    }
    if(allowedMfaTypesIsSet_) {
        val[utility::conversions::to_string_t("allowed_mfa_types")] = ModelBase::toJson(allowedMfaTypes_);
    }
    if(sessionConfigurationIsSet_) {
        val[utility::conversions::to_string_t("session_configuration")] = ModelBase::toJson(sessionConfiguration_);
    }

    return val;
}
bool SSOConfigurationDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("mfa_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mfa_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMfaMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("no_mfa_signin_behavior"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("no_mfa_signin_behavior"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNoMfaSigninBehavior(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("no_password_signin_behavior"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("no_password_signin_behavior"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNoPasswordSigninBehavior(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("allowed_mfa_types"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("allowed_mfa_types"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAllowedMfaTypes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("session_configuration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("session_configuration"));
        if(!fieldValue.is_null())
        {
            SessionConfigurationDto refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSessionConfiguration(refVal);
        }
    }
    return ok;
}


std::string SSOConfigurationDto::getMfaMode() const
{
    return mfaMode_;
}

void SSOConfigurationDto::setMfaMode(const std::string& value)
{
    mfaMode_ = value;
    mfaModeIsSet_ = true;
}

bool SSOConfigurationDto::mfaModeIsSet() const
{
    return mfaModeIsSet_;
}

void SSOConfigurationDto::unsetmfaMode()
{
    mfaModeIsSet_ = false;
}

std::string SSOConfigurationDto::getNoMfaSigninBehavior() const
{
    return noMfaSigninBehavior_;
}

void SSOConfigurationDto::setNoMfaSigninBehavior(const std::string& value)
{
    noMfaSigninBehavior_ = value;
    noMfaSigninBehaviorIsSet_ = true;
}

bool SSOConfigurationDto::noMfaSigninBehaviorIsSet() const
{
    return noMfaSigninBehaviorIsSet_;
}

void SSOConfigurationDto::unsetnoMfaSigninBehavior()
{
    noMfaSigninBehaviorIsSet_ = false;
}

std::string SSOConfigurationDto::getNoPasswordSigninBehavior() const
{
    return noPasswordSigninBehavior_;
}

void SSOConfigurationDto::setNoPasswordSigninBehavior(const std::string& value)
{
    noPasswordSigninBehavior_ = value;
    noPasswordSigninBehaviorIsSet_ = true;
}

bool SSOConfigurationDto::noPasswordSigninBehaviorIsSet() const
{
    return noPasswordSigninBehaviorIsSet_;
}

void SSOConfigurationDto::unsetnoPasswordSigninBehavior()
{
    noPasswordSigninBehaviorIsSet_ = false;
}

std::vector<std::string>& SSOConfigurationDto::getAllowedMfaTypes()
{
    return allowedMfaTypes_;
}

void SSOConfigurationDto::setAllowedMfaTypes(const std::vector<std::string>& value)
{
    allowedMfaTypes_ = value;
    allowedMfaTypesIsSet_ = true;
}

bool SSOConfigurationDto::allowedMfaTypesIsSet() const
{
    return allowedMfaTypesIsSet_;
}

void SSOConfigurationDto::unsetallowedMfaTypes()
{
    allowedMfaTypesIsSet_ = false;
}

SessionConfigurationDto SSOConfigurationDto::getSessionConfiguration() const
{
    return sessionConfiguration_;
}

void SSOConfigurationDto::setSessionConfiguration(const SessionConfigurationDto& value)
{
    sessionConfiguration_ = value;
    sessionConfigurationIsSet_ = true;
}

bool SSOConfigurationDto::sessionConfigurationIsSet() const
{
    return sessionConfigurationIsSet_;
}

void SSOConfigurationDto::unsetsessionConfiguration()
{
    sessionConfigurationIsSet_ = false;
}

}
}
}
}
}


