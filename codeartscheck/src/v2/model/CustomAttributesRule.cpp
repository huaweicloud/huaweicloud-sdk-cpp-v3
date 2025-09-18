

#include "huaweicloud/codeartscheck/v2/model/CustomAttributesRule.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




CustomAttributesRule::CustomAttributesRule()
{
    ruleId_ = "";
    ruleIdIsSet_ = false;
    value_ = "";
    valueIsSet_ = false;
    ruleConfigListIsSet_ = false;
}

CustomAttributesRule::~CustomAttributesRule() = default;

void CustomAttributesRule::validate()
{
}

web::json::value CustomAttributesRule::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ruleIdIsSet_) {
        val[utility::conversions::to_string_t("rule_id")] = ModelBase::toJson(ruleId_);
    }
    if(valueIsSet_) {
        val[utility::conversions::to_string_t("value")] = ModelBase::toJson(value_);
    }
    if(ruleConfigListIsSet_) {
        val[utility::conversions::to_string_t("rule_config_list")] = ModelBase::toJson(ruleConfigList_);
    }

    return val;
}
bool CustomAttributesRule::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("rule_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("rule_config_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule_config_list"));
        if(!fieldValue.is_null())
        {
            std::vector<RuleConfig> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleConfigList(refVal);
        }
    }
    return ok;
}


std::string CustomAttributesRule::getRuleId() const
{
    return ruleId_;
}

void CustomAttributesRule::setRuleId(const std::string& value)
{
    ruleId_ = value;
    ruleIdIsSet_ = true;
}

bool CustomAttributesRule::ruleIdIsSet() const
{
    return ruleIdIsSet_;
}

void CustomAttributesRule::unsetruleId()
{
    ruleIdIsSet_ = false;
}

std::string CustomAttributesRule::getValue() const
{
    return value_;
}

void CustomAttributesRule::setValue(const std::string& value)
{
    value_ = value;
    valueIsSet_ = true;
}

bool CustomAttributesRule::valueIsSet() const
{
    return valueIsSet_;
}

void CustomAttributesRule::unsetvalue()
{
    valueIsSet_ = false;
}

std::vector<RuleConfig>& CustomAttributesRule::getRuleConfigList()
{
    return ruleConfigList_;
}

void CustomAttributesRule::setRuleConfigList(const std::vector<RuleConfig>& value)
{
    ruleConfigList_ = value;
    ruleConfigListIsSet_ = true;
}

bool CustomAttributesRule::ruleConfigListIsSet() const
{
    return ruleConfigListIsSet_;
}

void CustomAttributesRule::unsetruleConfigList()
{
    ruleConfigListIsSet_ = false;
}

}
}
}
}
}


