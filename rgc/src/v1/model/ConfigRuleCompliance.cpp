

#include "huaweicloud/rgc/v1/model/ConfigRuleCompliance.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




ConfigRuleCompliance::ConfigRuleCompliance()
{
    ruleName_ = "";
    ruleNameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    controlId_ = "";
    controlIdIsSet_ = false;
}

ConfigRuleCompliance::~ConfigRuleCompliance() = default;

void ConfigRuleCompliance::validate()
{
}

web::json::value ConfigRuleCompliance::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ruleNameIsSet_) {
        val[utility::conversions::to_string_t("rule_name")] = ModelBase::toJson(ruleName_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(controlIdIsSet_) {
        val[utility::conversions::to_string_t("control_id")] = ModelBase::toJson(controlId_);
    }

    return val;
}
bool ConfigRuleCompliance::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("rule_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("control_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("control_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setControlId(refVal);
        }
    }
    return ok;
}


std::string ConfigRuleCompliance::getRuleName() const
{
    return ruleName_;
}

void ConfigRuleCompliance::setRuleName(const std::string& value)
{
    ruleName_ = value;
    ruleNameIsSet_ = true;
}

bool ConfigRuleCompliance::ruleNameIsSet() const
{
    return ruleNameIsSet_;
}

void ConfigRuleCompliance::unsetruleName()
{
    ruleNameIsSet_ = false;
}

std::string ConfigRuleCompliance::getStatus() const
{
    return status_;
}

void ConfigRuleCompliance::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ConfigRuleCompliance::statusIsSet() const
{
    return statusIsSet_;
}

void ConfigRuleCompliance::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ConfigRuleCompliance::getRegion() const
{
    return region_;
}

void ConfigRuleCompliance::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool ConfigRuleCompliance::regionIsSet() const
{
    return regionIsSet_;
}

void ConfigRuleCompliance::unsetregion()
{
    regionIsSet_ = false;
}

std::string ConfigRuleCompliance::getControlId() const
{
    return controlId_;
}

void ConfigRuleCompliance::setControlId(const std::string& value)
{
    controlId_ = value;
    controlIdIsSet_ = true;
}

bool ConfigRuleCompliance::controlIdIsSet() const
{
    return controlIdIsSet_;
}

void ConfigRuleCompliance::unsetcontrolId()
{
    controlIdIsSet_ = false;
}

}
}
}
}
}


