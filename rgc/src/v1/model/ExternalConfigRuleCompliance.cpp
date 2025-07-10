

#include "huaweicloud/rgc/v1/model/ExternalConfigRuleCompliance.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rgc {
namespace V1 {
namespace Model {




ExternalConfigRuleCompliance::ExternalConfigRuleCompliance()
{
    ruleName_ = "";
    ruleNameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    controlId_ = "";
    controlIdIsSet_ = false;
}

ExternalConfigRuleCompliance::~ExternalConfigRuleCompliance() = default;

void ExternalConfigRuleCompliance::validate()
{
}

web::json::value ExternalConfigRuleCompliance::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ruleNameIsSet_) {
        val[utility::conversions::to_string_t("rule_name")] = ModelBase::toJson(ruleName_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(controlIdIsSet_) {
        val[utility::conversions::to_string_t("control_id")] = ModelBase::toJson(controlId_);
    }

    return val;
}
bool ExternalConfigRuleCompliance::fromJson(const web::json::value& val)
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


std::string ExternalConfigRuleCompliance::getRuleName() const
{
    return ruleName_;
}

void ExternalConfigRuleCompliance::setRuleName(const std::string& value)
{
    ruleName_ = value;
    ruleNameIsSet_ = true;
}

bool ExternalConfigRuleCompliance::ruleNameIsSet() const
{
    return ruleNameIsSet_;
}

void ExternalConfigRuleCompliance::unsetruleName()
{
    ruleNameIsSet_ = false;
}

std::string ExternalConfigRuleCompliance::getStatus() const
{
    return status_;
}

void ExternalConfigRuleCompliance::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ExternalConfigRuleCompliance::statusIsSet() const
{
    return statusIsSet_;
}

void ExternalConfigRuleCompliance::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ExternalConfigRuleCompliance::getControlId() const
{
    return controlId_;
}

void ExternalConfigRuleCompliance::setControlId(const std::string& value)
{
    controlId_ = value;
    controlIdIsSet_ = true;
}

bool ExternalConfigRuleCompliance::controlIdIsSet() const
{
    return controlIdIsSet_;
}

void ExternalConfigRuleCompliance::unsetcontrolId()
{
    controlIdIsSet_ = false;
}

}
}
}
}
}


