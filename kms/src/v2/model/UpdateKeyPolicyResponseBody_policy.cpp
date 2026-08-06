

#include "huaweicloud/kms/v2/model/UpdateKeyPolicyResponseBody_policy.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




UpdateKeyPolicyResponseBody_policy::UpdateKeyPolicyResponseBody_policy()
{
    version_ = "";
    versionIsSet_ = false;
    validityPeriodIsSet_ = false;
    allowedAccessPointIsSet_ = false;
    allowedDataSecurityZoneIsSet_ = false;
}

UpdateKeyPolicyResponseBody_policy::~UpdateKeyPolicyResponseBody_policy() = default;

void UpdateKeyPolicyResponseBody_policy::validate()
{
}

web::json::value UpdateKeyPolicyResponseBody_policy::toJson() const
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
bool UpdateKeyPolicyResponseBody_policy::fromJson(const web::json::value& val)
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
            UpdateKeyPolicyResponseBody_policy_validity_period refVal;
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


std::string UpdateKeyPolicyResponseBody_policy::getVersion() const
{
    return version_;
}

void UpdateKeyPolicyResponseBody_policy::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool UpdateKeyPolicyResponseBody_policy::versionIsSet() const
{
    return versionIsSet_;
}

void UpdateKeyPolicyResponseBody_policy::unsetversion()
{
    versionIsSet_ = false;
}

UpdateKeyPolicyResponseBody_policy_validity_period UpdateKeyPolicyResponseBody_policy::getValidityPeriod() const
{
    return validityPeriod_;
}

void UpdateKeyPolicyResponseBody_policy::setValidityPeriod(const UpdateKeyPolicyResponseBody_policy_validity_period& value)
{
    validityPeriod_ = value;
    validityPeriodIsSet_ = true;
}

bool UpdateKeyPolicyResponseBody_policy::validityPeriodIsSet() const
{
    return validityPeriodIsSet_;
}

void UpdateKeyPolicyResponseBody_policy::unsetvalidityPeriod()
{
    validityPeriodIsSet_ = false;
}

std::vector<std::string>& UpdateKeyPolicyResponseBody_policy::getAllowedAccessPoint()
{
    return allowedAccessPoint_;
}

void UpdateKeyPolicyResponseBody_policy::setAllowedAccessPoint(const std::vector<std::string>& value)
{
    allowedAccessPoint_ = value;
    allowedAccessPointIsSet_ = true;
}

bool UpdateKeyPolicyResponseBody_policy::allowedAccessPointIsSet() const
{
    return allowedAccessPointIsSet_;
}

void UpdateKeyPolicyResponseBody_policy::unsetallowedAccessPoint()
{
    allowedAccessPointIsSet_ = false;
}

std::vector<std::string>& UpdateKeyPolicyResponseBody_policy::getAllowedDataSecurityZone()
{
    return allowedDataSecurityZone_;
}

void UpdateKeyPolicyResponseBody_policy::setAllowedDataSecurityZone(const std::vector<std::string>& value)
{
    allowedDataSecurityZone_ = value;
    allowedDataSecurityZoneIsSet_ = true;
}

bool UpdateKeyPolicyResponseBody_policy::allowedDataSecurityZoneIsSet() const
{
    return allowedDataSecurityZoneIsSet_;
}

void UpdateKeyPolicyResponseBody_policy::unsetallowedDataSecurityZone()
{
    allowedDataSecurityZoneIsSet_ = false;
}

}
}
}
}
}


