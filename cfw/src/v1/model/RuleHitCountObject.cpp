

#include "huaweicloud/cfw/v1/model/RuleHitCountObject.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




RuleHitCountObject::RuleHitCountObject()
{
    ruleId_ = "";
    ruleIdIsSet_ = false;
    ruleHitCount_ = 0;
    ruleHitCountIsSet_ = false;
}

RuleHitCountObject::~RuleHitCountObject() = default;

void RuleHitCountObject::validate()
{
}

web::json::value RuleHitCountObject::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ruleIdIsSet_) {
        val[utility::conversions::to_string_t("rule_id")] = ModelBase::toJson(ruleId_);
    }
    if(ruleHitCountIsSet_) {
        val[utility::conversions::to_string_t("rule_hit_count")] = ModelBase::toJson(ruleHitCount_);
    }

    return val;
}

bool RuleHitCountObject::fromJson(const web::json::value& val)
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
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleHitCount(refVal);
        }
    }
    return ok;
}


std::string RuleHitCountObject::getRuleId() const
{
    return ruleId_;
}

void RuleHitCountObject::setRuleId(const std::string& value)
{
    ruleId_ = value;
    ruleIdIsSet_ = true;
}

bool RuleHitCountObject::ruleIdIsSet() const
{
    return ruleIdIsSet_;
}

void RuleHitCountObject::unsetruleId()
{
    ruleIdIsSet_ = false;
}

int32_t RuleHitCountObject::getRuleHitCount() const
{
    return ruleHitCount_;
}

void RuleHitCountObject::setRuleHitCount(int32_t value)
{
    ruleHitCount_ = value;
    ruleHitCountIsSet_ = true;
}

bool RuleHitCountObject::ruleHitCountIsSet() const
{
    return ruleHitCountIsSet_;
}

void RuleHitCountObject::unsetruleHitCount()
{
    ruleHitCountIsSet_ = false;
}

}
}
}
}
}


