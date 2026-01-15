

#include "huaweicloud/dbss/v1/model/RuleRiskStatisticsDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




RuleRiskStatisticsDto::RuleRiskStatisticsDto()
{
    count_ = 0L;
    countIsSet_ = false;
    instanceRiskCountIsSet_ = false;
    ruleName_ = "";
    ruleNameIsSet_ = false;
}

RuleRiskStatisticsDto::~RuleRiskStatisticsDto() = default;

void RuleRiskStatisticsDto::validate()
{
}

web::json::value RuleRiskStatisticsDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(instanceRiskCountIsSet_) {
        val[utility::conversions::to_string_t("instance_risk_count")] = ModelBase::toJson(instanceRiskCount_);
    }
    if(ruleNameIsSet_) {
        val[utility::conversions::to_string_t("rule_name")] = ModelBase::toJson(ruleName_);
    }

    return val;
}
bool RuleRiskStatisticsDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("instance_risk_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_risk_count"));
        if(!fieldValue.is_null())
        {
            std::vector<AuditInstanceRiskCount> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceRiskCount(refVal);
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
    return ok;
}


int64_t RuleRiskStatisticsDto::getCount() const
{
    return count_;
}

void RuleRiskStatisticsDto::setCount(int64_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool RuleRiskStatisticsDto::countIsSet() const
{
    return countIsSet_;
}

void RuleRiskStatisticsDto::unsetcount()
{
    countIsSet_ = false;
}

std::vector<AuditInstanceRiskCount>& RuleRiskStatisticsDto::getInstanceRiskCount()
{
    return instanceRiskCount_;
}

void RuleRiskStatisticsDto::setInstanceRiskCount(const std::vector<AuditInstanceRiskCount>& value)
{
    instanceRiskCount_ = value;
    instanceRiskCountIsSet_ = true;
}

bool RuleRiskStatisticsDto::instanceRiskCountIsSet() const
{
    return instanceRiskCountIsSet_;
}

void RuleRiskStatisticsDto::unsetinstanceRiskCount()
{
    instanceRiskCountIsSet_ = false;
}

std::string RuleRiskStatisticsDto::getRuleName() const
{
    return ruleName_;
}

void RuleRiskStatisticsDto::setRuleName(const std::string& value)
{
    ruleName_ = value;
    ruleNameIsSet_ = true;
}

bool RuleRiskStatisticsDto::ruleNameIsSet() const
{
    return ruleNameIsSet_;
}

void RuleRiskStatisticsDto::unsetruleName()
{
    ruleNameIsSet_ = false;
}

}
}
}
}
}


