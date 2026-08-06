

#include "huaweicloud/kms/v2/model/ShowKeyPolicyResponseBody_policy.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




ShowKeyPolicyResponseBody_policy::ShowKeyPolicyResponseBody_policy()
{
    version_ = "";
    versionIsSet_ = false;
    validityPeriodIsSet_ = false;
    allowedAccessPointIsSet_ = false;
    allowedDataSecurityZoneIsSet_ = false;
}

ShowKeyPolicyResponseBody_policy::~ShowKeyPolicyResponseBody_policy() = default;

void ShowKeyPolicyResponseBody_policy::validate()
{
}

web::json::value ShowKeyPolicyResponseBody_policy::toJson() const
{
    web::json::value val = web::json::value::object();

    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(validityPeriodIsSet_) {
        val[utility::conversions::to_string_t("validity_period")] = ModelBase::toJson(validityPeriod_);
    }
    if(allowedAccessPointIsSet_) {
        val[utility::conversions::to_string_t("allowed_access_point")] = ModelBase::toJson(allowedAccessPoint_);
    }
    if(allowedDataSecurityZoneIsSet_) {
        val[utility::conversions::to_string_t("allowed_data_security_zone")] = ModelBase::toJson(allowedDataSecurityZone_);
    }

    return val;
}
bool ShowKeyPolicyResponseBody_policy::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("validity_period"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("validity_period"));
        if(!fieldValue.is_null())
        {
            ListKeyPolicyResponseBody_policy_validityPeriod refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValidityPeriod(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("allowed_access_point"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("allowed_access_point"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAllowedAccessPoint(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("allowed_data_security_zone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("allowed_data_security_zone"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAllowedDataSecurityZone(refVal);
        }
    }
    return ok;
}


std::string ShowKeyPolicyResponseBody_policy::getVersion() const
{
    return version_;
}

void ShowKeyPolicyResponseBody_policy::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool ShowKeyPolicyResponseBody_policy::versionIsSet() const
{
    return versionIsSet_;
}

void ShowKeyPolicyResponseBody_policy::unsetversion()
{
    versionIsSet_ = false;
}

ListKeyPolicyResponseBody_policy_validityPeriod ShowKeyPolicyResponseBody_policy::getValidityPeriod() const
{
    return validityPeriod_;
}

void ShowKeyPolicyResponseBody_policy::setValidityPeriod(const ListKeyPolicyResponseBody_policy_validityPeriod& value)
{
    validityPeriod_ = value;
    validityPeriodIsSet_ = true;
}

bool ShowKeyPolicyResponseBody_policy::validityPeriodIsSet() const
{
    return validityPeriodIsSet_;
}

void ShowKeyPolicyResponseBody_policy::unsetvalidityPeriod()
{
    validityPeriodIsSet_ = false;
}

std::vector<std::string>& ShowKeyPolicyResponseBody_policy::getAllowedAccessPoint()
{
    return allowedAccessPoint_;
}

void ShowKeyPolicyResponseBody_policy::setAllowedAccessPoint(const std::vector<std::string>& value)
{
    allowedAccessPoint_ = value;
    allowedAccessPointIsSet_ = true;
}

bool ShowKeyPolicyResponseBody_policy::allowedAccessPointIsSet() const
{
    return allowedAccessPointIsSet_;
}

void ShowKeyPolicyResponseBody_policy::unsetallowedAccessPoint()
{
    allowedAccessPointIsSet_ = false;
}

std::vector<std::string>& ShowKeyPolicyResponseBody_policy::getAllowedDataSecurityZone()
{
    return allowedDataSecurityZone_;
}

void ShowKeyPolicyResponseBody_policy::setAllowedDataSecurityZone(const std::vector<std::string>& value)
{
    allowedDataSecurityZone_ = value;
    allowedDataSecurityZoneIsSet_ = true;
}

bool ShowKeyPolicyResponseBody_policy::allowedDataSecurityZoneIsSet() const
{
    return allowedDataSecurityZoneIsSet_;
}

void ShowKeyPolicyResponseBody_policy::unsetallowedDataSecurityZone()
{
    allowedDataSecurityZoneIsSet_ = false;
}

}
}
}
}
}


