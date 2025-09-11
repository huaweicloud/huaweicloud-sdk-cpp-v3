

#include "huaweicloud/dbss/v1/model/RiskRuleStatistic.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




RiskRuleStatistic::RiskRuleStatistic()
{
    count_ = 0L;
    countIsSet_ = false;
    ruleName_ = "";
    ruleNameIsSet_ = false;
    ruleNameEnglish_ = "";
    ruleNameEnglishIsSet_ = false;
}

RiskRuleStatistic::~RiskRuleStatistic() = default;

void RiskRuleStatistic::validate()
{
}

web::json::value RiskRuleStatistic::toJson() const
{
    web::json::value val = web::json::value::object();

    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(ruleNameIsSet_) {
        val[utility::conversions::to_string_t("rule_name")] = ModelBase::toJson(ruleName_);
    }
    if(ruleNameEnglishIsSet_) {
        val[utility::conversions::to_string_t("rule_name_english")] = ModelBase::toJson(ruleNameEnglish_);
    }

    return val;
}
bool RiskRuleStatistic::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("rule_name_english"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule_name_english"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleNameEnglish(refVal);
        }
    }
    return ok;
}


int64_t RiskRuleStatistic::getCount() const
{
    return count_;
}

void RiskRuleStatistic::setCount(int64_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool RiskRuleStatistic::countIsSet() const
{
    return countIsSet_;
}

void RiskRuleStatistic::unsetcount()
{
    countIsSet_ = false;
}

std::string RiskRuleStatistic::getRuleName() const
{
    return ruleName_;
}

void RiskRuleStatistic::setRuleName(const std::string& value)
{
    ruleName_ = value;
    ruleNameIsSet_ = true;
}

bool RiskRuleStatistic::ruleNameIsSet() const
{
    return ruleNameIsSet_;
}

void RiskRuleStatistic::unsetruleName()
{
    ruleNameIsSet_ = false;
}

std::string RiskRuleStatistic::getRuleNameEnglish() const
{
    return ruleNameEnglish_;
}

void RiskRuleStatistic::setRuleNameEnglish(const std::string& value)
{
    ruleNameEnglish_ = value;
    ruleNameEnglishIsSet_ = true;
}

bool RiskRuleStatistic::ruleNameEnglishIsSet() const
{
    return ruleNameEnglishIsSet_;
}

void RiskRuleStatistic::unsetruleNameEnglish()
{
    ruleNameEnglishIsSet_ = false;
}

}
}
}
}
}


