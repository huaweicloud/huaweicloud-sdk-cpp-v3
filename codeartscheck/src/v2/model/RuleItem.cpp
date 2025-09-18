

#include "huaweicloud/codeartscheck/v2/model/RuleItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




RuleItem::RuleItem()
{
    ruleId_ = "";
    ruleIdIsSet_ = false;
    ruleLanguage_ = "";
    ruleLanguageIsSet_ = false;
    ruleName_ = "";
    ruleNameIsSet_ = false;
    ruleSeverity_ = "";
    ruleSeverityIsSet_ = false;
    ruleTages_ = "";
    ruleTagesIsSet_ = false;
    checked_ = "";
    checkedIsSet_ = false;
    ruleConfigListIsSet_ = false;
}

RuleItem::~RuleItem() = default;

void RuleItem::validate()
{
}

web::json::value RuleItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ruleIdIsSet_) {
        val[utility::conversions::to_string_t("rule_id")] = ModelBase::toJson(ruleId_);
    }
    if(ruleLanguageIsSet_) {
        val[utility::conversions::to_string_t("rule_language")] = ModelBase::toJson(ruleLanguage_);
    }
    if(ruleNameIsSet_) {
        val[utility::conversions::to_string_t("rule_name")] = ModelBase::toJson(ruleName_);
    }
    if(ruleSeverityIsSet_) {
        val[utility::conversions::to_string_t("rule_severity")] = ModelBase::toJson(ruleSeverity_);
    }
    if(ruleTagesIsSet_) {
        val[utility::conversions::to_string_t("rule_tages")] = ModelBase::toJson(ruleTages_);
    }
    if(checkedIsSet_) {
        val[utility::conversions::to_string_t("checked")] = ModelBase::toJson(checked_);
    }
    if(ruleConfigListIsSet_) {
        val[utility::conversions::to_string_t("rule_config_list")] = ModelBase::toJson(ruleConfigList_);
    }

    return val;
}
bool RuleItem::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("rule_language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule_language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rule_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rule_severity"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule_severity"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleSeverity(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rule_tages"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule_tages"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleTages(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("checked"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("checked"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setChecked(refVal);
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


std::string RuleItem::getRuleId() const
{
    return ruleId_;
}

void RuleItem::setRuleId(const std::string& value)
{
    ruleId_ = value;
    ruleIdIsSet_ = true;
}

bool RuleItem::ruleIdIsSet() const
{
    return ruleIdIsSet_;
}

void RuleItem::unsetruleId()
{
    ruleIdIsSet_ = false;
}

std::string RuleItem::getRuleLanguage() const
{
    return ruleLanguage_;
}

void RuleItem::setRuleLanguage(const std::string& value)
{
    ruleLanguage_ = value;
    ruleLanguageIsSet_ = true;
}

bool RuleItem::ruleLanguageIsSet() const
{
    return ruleLanguageIsSet_;
}

void RuleItem::unsetruleLanguage()
{
    ruleLanguageIsSet_ = false;
}

std::string RuleItem::getRuleName() const
{
    return ruleName_;
}

void RuleItem::setRuleName(const std::string& value)
{
    ruleName_ = value;
    ruleNameIsSet_ = true;
}

bool RuleItem::ruleNameIsSet() const
{
    return ruleNameIsSet_;
}

void RuleItem::unsetruleName()
{
    ruleNameIsSet_ = false;
}

std::string RuleItem::getRuleSeverity() const
{
    return ruleSeverity_;
}

void RuleItem::setRuleSeverity(const std::string& value)
{
    ruleSeverity_ = value;
    ruleSeverityIsSet_ = true;
}

bool RuleItem::ruleSeverityIsSet() const
{
    return ruleSeverityIsSet_;
}

void RuleItem::unsetruleSeverity()
{
    ruleSeverityIsSet_ = false;
}

std::string RuleItem::getRuleTages() const
{
    return ruleTages_;
}

void RuleItem::setRuleTages(const std::string& value)
{
    ruleTages_ = value;
    ruleTagesIsSet_ = true;
}

bool RuleItem::ruleTagesIsSet() const
{
    return ruleTagesIsSet_;
}

void RuleItem::unsetruleTages()
{
    ruleTagesIsSet_ = false;
}

std::string RuleItem::getChecked() const
{
    return checked_;
}

void RuleItem::setChecked(const std::string& value)
{
    checked_ = value;
    checkedIsSet_ = true;
}

bool RuleItem::checkedIsSet() const
{
    return checkedIsSet_;
}

void RuleItem::unsetchecked()
{
    checkedIsSet_ = false;
}

std::vector<RuleConfig>& RuleItem::getRuleConfigList()
{
    return ruleConfigList_;
}

void RuleItem::setRuleConfigList(const std::vector<RuleConfig>& value)
{
    ruleConfigList_ = value;
    ruleConfigListIsSet_ = true;
}

bool RuleItem::ruleConfigListIsSet() const
{
    return ruleConfigListIsSet_;
}

void RuleItem::unsetruleConfigList()
{
    ruleConfigListIsSet_ = false;
}

}
}
}
}
}


