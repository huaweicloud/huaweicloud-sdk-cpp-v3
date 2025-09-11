

#include "huaweicloud/functiongraph/v2/model/VersionStrategyRules.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Functiongraph {
namespace V2 {
namespace Model {




VersionStrategyRules::VersionStrategyRules()
{
    ruleType_ = "";
    ruleTypeIsSet_ = false;
    param_ = "";
    paramIsSet_ = false;
    op_ = "";
    opIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
}

VersionStrategyRules::~VersionStrategyRules() = default;

void VersionStrategyRules::validate()
{
}

web::json::value VersionStrategyRules::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ruleTypeIsSet_) {
        val[utility::conversions::to_string_t("rule_type")] = ModelBase::toJson(ruleType_);
    }
    if(paramIsSet_) {
        val[utility::conversions::to_string_t("param")] = ModelBase::toJson(param_);
    }
    if(opIsSet_) {
        val[utility::conversions::to_string_t("op")] = ModelBase::toJson(op_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }

    return val;
}
bool VersionStrategyRules::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("rule_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("param"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("param"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParam(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("op"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("op"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValue(refVal);
        }
    }
    return ok;
}


std::string VersionStrategyRules::getRuleType() const
{
    return ruleType_;
}

void VersionStrategyRules::setRuleType(const std::string& value)
{
    ruleType_ = value;
    ruleTypeIsSet_ = true;
}

bool VersionStrategyRules::ruleTypeIsSet() const
{
    return ruleTypeIsSet_;
}

void VersionStrategyRules::unsetruleType()
{
    ruleTypeIsSet_ = false;
}

std::string VersionStrategyRules::getParam() const
{
    return param_;
}

void VersionStrategyRules::setParam(const std::string& value)
{
    param_ = value;
    paramIsSet_ = true;
}

bool VersionStrategyRules::paramIsSet() const
{
    return paramIsSet_;
}

void VersionStrategyRules::unsetparam()
{
    paramIsSet_ = false;
}

std::string VersionStrategyRules::getOp() const
{
    return op_;
}

void VersionStrategyRules::setOp(const std::string& value)
{
    op_ = value;
    opIsSet_ = true;
}

bool VersionStrategyRules::opIsSet() const
{
    return opIsSet_;
}

void VersionStrategyRules::unsetop()
{
    opIsSet_ = false;
}

std::string VersionStrategyRules::getValue() const
{
    return value_;
}

void VersionStrategyRules::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool VersionStrategyRules::valueIsSet() const
{
    return valueIsSet_;
}

void VersionStrategyRules::unsetvalue()
{
    valueIsSet_ = false;
}

}
}
}
}
}


