

#include "huaweicloud/codeartscheck/v2/model/RuleListItem.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




RuleListItem::RuleListItem()
{
    ruleSet_ = "";
    ruleSetIsSet_ = false;
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
    rightExample_ = "";
    rightExampleIsSet_ = false;
    errorExample_ = "";
    errorExampleIsSet_ = false;
    reviseOpinion_ = "";
    reviseOpinionIsSet_ = false;
    ruleDesc_ = "";
    ruleDescIsSet_ = false;
}

RuleListItem::~RuleListItem() = default;

void RuleListItem::validate()
{
}

web::json::value RuleListItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ruleSetIsSet_) {
        val[utility::conversions::to_string_t("rule_set")] = ModelBase::toJson(ruleSet_);
    }
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
    if(rightExampleIsSet_) {
        val[utility::conversions::to_string_t("right_example")] = ModelBase::toJson(rightExample_);
    }
    if(errorExampleIsSet_) {
        val[utility::conversions::to_string_t("error_example")] = ModelBase::toJson(errorExample_);
    }
    if(reviseOpinionIsSet_) {
        val[utility::conversions::to_string_t("revise_opinion")] = ModelBase::toJson(reviseOpinion_);
    }
    if(ruleDescIsSet_) {
        val[utility::conversions::to_string_t("rule_desc")] = ModelBase::toJson(ruleDesc_);
    }

    return val;
}
bool RuleListItem::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("rule_set"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule_set"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleSet(refVal);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t("right_example"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("right_example"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRightExample(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("error_example"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("error_example"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setErrorExample(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("revise_opinion"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("revise_opinion"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReviseOpinion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rule_desc"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule_desc"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleDesc(refVal);
        }
    }
    return ok;
}


std::string RuleListItem::getRuleSet() const
{
    return ruleSet_;
}

void RuleListItem::setRuleSet(const std::string& value)
{
    ruleSet_ = value;
    ruleSetIsSet_ = true;
}

bool RuleListItem::ruleSetIsSet() const
{
    return ruleSetIsSet_;
}

void RuleListItem::unsetruleSet()
{
    ruleSetIsSet_ = false;
}

std::string RuleListItem::getRuleId() const
{
    return ruleId_;
}

void RuleListItem::setRuleId(const std::string& value)
{
    ruleId_ = value;
    ruleIdIsSet_ = true;
}

bool RuleListItem::ruleIdIsSet() const
{
    return ruleIdIsSet_;
}

void RuleListItem::unsetruleId()
{
    ruleIdIsSet_ = false;
}

std::string RuleListItem::getRuleLanguage() const
{
    return ruleLanguage_;
}

void RuleListItem::setRuleLanguage(const std::string& value)
{
    ruleLanguage_ = value;
    ruleLanguageIsSet_ = true;
}

bool RuleListItem::ruleLanguageIsSet() const
{
    return ruleLanguageIsSet_;
}

void RuleListItem::unsetruleLanguage()
{
    ruleLanguageIsSet_ = false;
}

std::string RuleListItem::getRuleName() const
{
    return ruleName_;
}

void RuleListItem::setRuleName(const std::string& value)
{
    ruleName_ = value;
    ruleNameIsSet_ = true;
}

bool RuleListItem::ruleNameIsSet() const
{
    return ruleNameIsSet_;
}

void RuleListItem::unsetruleName()
{
    ruleNameIsSet_ = false;
}

std::string RuleListItem::getRuleSeverity() const
{
    return ruleSeverity_;
}

void RuleListItem::setRuleSeverity(const std::string& value)
{
    ruleSeverity_ = value;
    ruleSeverityIsSet_ = true;
}

bool RuleListItem::ruleSeverityIsSet() const
{
    return ruleSeverityIsSet_;
}

void RuleListItem::unsetruleSeverity()
{
    ruleSeverityIsSet_ = false;
}

std::string RuleListItem::getRuleTages() const
{
    return ruleTages_;
}

void RuleListItem::setRuleTages(const std::string& value)
{
    ruleTages_ = value;
    ruleTagesIsSet_ = true;
}

bool RuleListItem::ruleTagesIsSet() const
{
    return ruleTagesIsSet_;
}

void RuleListItem::unsetruleTages()
{
    ruleTagesIsSet_ = false;
}

std::string RuleListItem::getRightExample() const
{
    return rightExample_;
}

void RuleListItem::setRightExample(const std::string& value)
{
    rightExample_ = value;
    rightExampleIsSet_ = true;
}

bool RuleListItem::rightExampleIsSet() const
{
    return rightExampleIsSet_;
}

void RuleListItem::unsetrightExample()
{
    rightExampleIsSet_ = false;
}

std::string RuleListItem::getErrorExample() const
{
    return errorExample_;
}

void RuleListItem::setErrorExample(const std::string& value)
{
    errorExample_ = value;
    errorExampleIsSet_ = true;
}

bool RuleListItem::errorExampleIsSet() const
{
    return errorExampleIsSet_;
}

void RuleListItem::unseterrorExample()
{
    errorExampleIsSet_ = false;
}

std::string RuleListItem::getReviseOpinion() const
{
    return reviseOpinion_;
}

void RuleListItem::setReviseOpinion(const std::string& value)
{
    reviseOpinion_ = value;
    reviseOpinionIsSet_ = true;
}

bool RuleListItem::reviseOpinionIsSet() const
{
    return reviseOpinionIsSet_;
}

void RuleListItem::unsetreviseOpinion()
{
    reviseOpinionIsSet_ = false;
}

std::string RuleListItem::getRuleDesc() const
{
    return ruleDesc_;
}

void RuleListItem::setRuleDesc(const std::string& value)
{
    ruleDesc_ = value;
    ruleDescIsSet_ = true;
}

bool RuleListItem::ruleDescIsSet() const
{
    return ruleDescIsSet_;
}

void RuleListItem::unsetruleDesc()
{
    ruleDescIsSet_ = false;
}

}
}
}
}
}


