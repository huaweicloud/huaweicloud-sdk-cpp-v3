

#include "huaweicloud/cfw/v1/model/RuleHitStatusListVO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




RuleHitStatusListVO::RuleHitStatusListVO()
{
    ruleId_ = "";
    ruleIdIsSet_ = false;
    ruleHitCount_ = 0L;
    ruleHitCountIsSet_ = false;
    ruleLastHitTime_ = 0L;
    ruleLastHitTimeIsSet_ = false;
}

RuleHitStatusListVO::~RuleHitStatusListVO() = default;

void RuleHitStatusListVO::validate()
{
}

web::json::value RuleHitStatusListVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ruleIdIsSet_) {
        val[utility::conversions::to_string_t("rule_id")] = ModelBase::toJson(ruleId_);
    }
    if(ruleHitCountIsSet_) {
        val[utility::conversions::to_string_t("rule_hit_count")] = ModelBase::toJson(ruleHitCount_);
    }
    if(ruleLastHitTimeIsSet_) {
        val[utility::conversions::to_string_t("rule_last_hit_time")] = ModelBase::toJson(ruleLastHitTime_);
    }

    return val;
}
bool RuleHitStatusListVO::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("rule_hit_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule_hit_count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleHitCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rule_last_hit_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule_last_hit_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleLastHitTime(refVal);
        }
    }
    return ok;
}


std::string RuleHitStatusListVO::getRuleId() const
{
    return ruleId_;
}

void RuleHitStatusListVO::setRuleId(const std::string& value)
{
    ruleId_ = value;
    ruleIdIsSet_ = true;
}

bool RuleHitStatusListVO::ruleIdIsSet() const
{
    return ruleIdIsSet_;
}

void RuleHitStatusListVO::unsetruleId()
{
    ruleIdIsSet_ = false;
}

int64_t RuleHitStatusListVO::getRuleHitCount() const
{
    return ruleHitCount_;
}

void RuleHitStatusListVO::setRuleHitCount(int64_t value)
{
    ruleHitCount_ = value;
    ruleHitCountIsSet_ = true;
}

bool RuleHitStatusListVO::ruleHitCountIsSet() const
{
    return ruleHitCountIsSet_;
}

void RuleHitStatusListVO::unsetruleHitCount()
{
    ruleHitCountIsSet_ = false;
}

int64_t RuleHitStatusListVO::getRuleLastHitTime() const
{
    return ruleLastHitTime_;
}

void RuleHitStatusListVO::setRuleLastHitTime(int64_t value)
{
    ruleLastHitTime_ = value;
    ruleLastHitTimeIsSet_ = true;
}

bool RuleHitStatusListVO::ruleLastHitTimeIsSet() const
{
    return ruleLastHitTimeIsSet_;
}

void RuleHitStatusListVO::unsetruleLastHitTime()
{
    ruleLastHitTimeIsSet_ = false;
}

}
}
}
}
}


