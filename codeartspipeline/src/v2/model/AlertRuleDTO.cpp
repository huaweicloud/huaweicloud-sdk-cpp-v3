

#include "huaweicloud/codeartspipeline/v2/model/AlertRuleDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




AlertRuleDTO::AlertRuleDTO()
{
    ruleType_ = "";
    ruleTypeIsSet_ = false;
    thresholdValue_ = 0;
    thresholdValueIsSet_ = false;
    severity_ = "";
    severityIsSet_ = false;
    isEnabled_ = false;
    isEnabledIsSet_ = false;
}

AlertRuleDTO::~AlertRuleDTO() = default;

void AlertRuleDTO::validate()
{
}

web::json::value AlertRuleDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ruleTypeIsSet_) {
        val[utility::conversions::to_string_t("ruleType")] = ModelBase::toJson(ruleType_);
    }
    if(thresholdValueIsSet_) {
        val[utility::conversions::to_string_t("thresholdValue")] = ModelBase::toJson(thresholdValue_);
    }
    if(severityIsSet_) {
        val[utility::conversions::to_string_t("severity")] = ModelBase::toJson(severity_);
    }
    if(isEnabledIsSet_) {
        val[utility::conversions::to_string_t("isEnabled")] = ModelBase::toJson(isEnabled_);
    }

    return val;
}
bool AlertRuleDTO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ruleType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ruleType"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("thresholdValue"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("thresholdValue"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setThresholdValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("severity"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("severity"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSeverity(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isEnabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isEnabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsEnabled(refVal);
        }
    }
    return ok;
}


std::string AlertRuleDTO::getRuleType() const
{
    return ruleType_;
}

void AlertRuleDTO::setRuleType(const std::string& value)
{
    ruleType_ = value;
    ruleTypeIsSet_ = true;
}

bool AlertRuleDTO::ruleTypeIsSet() const
{
    return ruleTypeIsSet_;
}

void AlertRuleDTO::unsetruleType()
{
    ruleTypeIsSet_ = false;
}

int32_t AlertRuleDTO::getThresholdValue() const
{
    return thresholdValue_;
}

void AlertRuleDTO::setThresholdValue(int32_t value)
{
    thresholdValue_ = value;
    thresholdValueIsSet_ = true;
}

bool AlertRuleDTO::thresholdValueIsSet() const
{
    return thresholdValueIsSet_;
}

void AlertRuleDTO::unsetthresholdValue()
{
    thresholdValueIsSet_ = false;
}

std::string AlertRuleDTO::getSeverity() const
{
    return severity_;
}

void AlertRuleDTO::setSeverity(const std::string& value)
{
    severity_ = value;
    severityIsSet_ = true;
}

bool AlertRuleDTO::severityIsSet() const
{
    return severityIsSet_;
}

void AlertRuleDTO::unsetseverity()
{
    severityIsSet_ = false;
}

bool AlertRuleDTO::isIsEnabled() const
{
    return isEnabled_;
}

void AlertRuleDTO::setIsEnabled(bool value)
{
    isEnabled_ = value;
    isEnabledIsSet_ = true;
}

bool AlertRuleDTO::isEnabledIsSet() const
{
    return isEnabledIsSet_;
}

void AlertRuleDTO::unsetisEnabled()
{
    isEnabledIsSet_ = false;
}

}
}
}
}
}


