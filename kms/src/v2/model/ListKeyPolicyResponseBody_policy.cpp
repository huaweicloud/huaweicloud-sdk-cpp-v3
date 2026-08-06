

#include "huaweicloud/kms/v2/model/ListKeyPolicyResponseBody_policy.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Kms {
namespace V2 {
namespace Model {




ListKeyPolicyResponseBody_policy::ListKeyPolicyResponseBody_policy()
{
    version_ = "";
    versionIsSet_ = false;
    validityPeriodIsSet_ = false;
    allowedAccessPointIsSet_ = false;
    allowedDataSecurityZoneIsSet_ = false;
}

ListKeyPolicyResponseBody_policy::~ListKeyPolicyResponseBody_policy() = default;

void ListKeyPolicyResponseBody_policy::validate()
{
}

web::json::value ListKeyPolicyResponseBody_policy::toJson() const
{
    web::json::value val = web::json::value::object();

    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(validityPeriodIsSet_) {
        val[utility::conversions::to_string_t("validityPeriod")] = ModelBase::toJson(validityPeriod_);
    }
    if(allowedAccessPointIsSet_) {
        val[utility::conversions::to_string_t("allowedAccessPoint")] = ModelBase::toJson(allowedAccessPoint_);
    }
    if(allowedDataSecurityZoneIsSet_) {
        val[utility::conversions::to_string_t("allowed_data_security_zone")] = ModelBase::toJson(allowedDataSecurityZone_);
    }

    return val;
}
bool ListKeyPolicyResponseBody_policy::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("validityPeriod"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("validityPeriod"));
        if(!fieldValue.is_null())
        {
            ListKeyPolicyResponseBody_policy_validityPeriod refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValidityPeriod(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("allowedAccessPoint"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("allowedAccessPoint"));
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


std::string ListKeyPolicyResponseBody_policy::getVersion() const
{
    return version_;
}

void ListKeyPolicyResponseBody_policy::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool ListKeyPolicyResponseBody_policy::versionIsSet() const
{
    return versionIsSet_;
}

void ListKeyPolicyResponseBody_policy::unsetversion()
{
    versionIsSet_ = false;
}

ListKeyPolicyResponseBody_policy_validityPeriod ListKeyPolicyResponseBody_policy::getValidityPeriod() const
{
    return validityPeriod_;
}

void ListKeyPolicyResponseBody_policy::setValidityPeriod(const ListKeyPolicyResponseBody_policy_validityPeriod& value)
{
    validityPeriod_ = value;
    validityPeriodIsSet_ = true;
}

bool ListKeyPolicyResponseBody_policy::validityPeriodIsSet() const
{
    return validityPeriodIsSet_;
}

void ListKeyPolicyResponseBody_policy::unsetvalidityPeriod()
{
    validityPeriodIsSet_ = false;
}

std::vector<std::string>& ListKeyPolicyResponseBody_policy::getAllowedAccessPoint()
{
    return allowedAccessPoint_;
}

void ListKeyPolicyResponseBody_policy::setAllowedAccessPoint(const std::vector<std::string>& value)
{
    allowedAccessPoint_ = value;
    allowedAccessPointIsSet_ = true;
}

bool ListKeyPolicyResponseBody_policy::allowedAccessPointIsSet() const
{
    return allowedAccessPointIsSet_;
}

void ListKeyPolicyResponseBody_policy::unsetallowedAccessPoint()
{
    allowedAccessPointIsSet_ = false;
}

std::vector<std::string>& ListKeyPolicyResponseBody_policy::getAllowedDataSecurityZone()
{
    return allowedDataSecurityZone_;
}

void ListKeyPolicyResponseBody_policy::setAllowedDataSecurityZone(const std::vector<std::string>& value)
{
    allowedDataSecurityZone_ = value;
    allowedDataSecurityZoneIsSet_ = true;
}

bool ListKeyPolicyResponseBody_policy::allowedDataSecurityZoneIsSet() const
{
    return allowedDataSecurityZoneIsSet_;
}

void ListKeyPolicyResponseBody_policy::unsetallowedDataSecurityZone()
{
    allowedDataSecurityZoneIsSet_ = false;
}

}
}
}
}
}


