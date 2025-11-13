

#include "huaweicloud/metastudio/v1/model/CreateInteractionRuleReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateInteractionRuleReq::CreateInteractionRuleReq()
{
    ruleName_ = "";
    ruleNameIsSet_ = false;
    eventType_ = 0;
    eventTypeIsSet_ = false;
    hitConditionIsSet_ = false;
    triggerIsSet_ = false;
}

CreateInteractionRuleReq::~CreateInteractionRuleReq() = default;

void CreateInteractionRuleReq::validate()
{
}

web::json::value CreateInteractionRuleReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ruleNameIsSet_) {
        val[utility::conversions::to_string_t("rule_name")] = ModelBase::toJson(ruleName_);
    }
    if(eventTypeIsSet_) {
        val[utility::conversions::to_string_t("event_type")] = ModelBase::toJson(eventType_);
    }
    if(hitConditionIsSet_) {
        val[utility::conversions::to_string_t("hit_condition")] = ModelBase::toJson(hitCondition_);
    }
    if(triggerIsSet_) {
        val[utility::conversions::to_string_t("trigger")] = ModelBase::toJson(trigger_);
    }

    return val;
}
bool CreateInteractionRuleReq::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("event_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("event_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEventType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hit_condition"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hit_condition"));
        if(!fieldValue.is_null())
        {
            HitCondition refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHitCondition(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("trigger"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trigger"));
        if(!fieldValue.is_null())
        {
            TriggerProcess refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrigger(refVal);
        }
    }
    return ok;
}


std::string CreateInteractionRuleReq::getRuleName() const
{
    return ruleName_;
}

void CreateInteractionRuleReq::setRuleName(const std::string& value)
{
    ruleName_ = value;
    ruleNameIsSet_ = true;
}

bool CreateInteractionRuleReq::ruleNameIsSet() const
{
    return ruleNameIsSet_;
}

void CreateInteractionRuleReq::unsetruleName()
{
    ruleNameIsSet_ = false;
}

int32_t CreateInteractionRuleReq::getEventType() const
{
    return eventType_;
}

void CreateInteractionRuleReq::setEventType(int32_t value)
{
    eventType_ = value;
    eventTypeIsSet_ = true;
}

bool CreateInteractionRuleReq::eventTypeIsSet() const
{
    return eventTypeIsSet_;
}

void CreateInteractionRuleReq::unseteventType()
{
    eventTypeIsSet_ = false;
}

HitCondition CreateInteractionRuleReq::getHitCondition() const
{
    return hitCondition_;
}

void CreateInteractionRuleReq::setHitCondition(const HitCondition& value)
{
    hitCondition_ = value;
    hitConditionIsSet_ = true;
}

bool CreateInteractionRuleReq::hitConditionIsSet() const
{
    return hitConditionIsSet_;
}

void CreateInteractionRuleReq::unsethitCondition()
{
    hitConditionIsSet_ = false;
}

TriggerProcess CreateInteractionRuleReq::getTrigger() const
{
    return trigger_;
}

void CreateInteractionRuleReq::setTrigger(const TriggerProcess& value)
{
    trigger_ = value;
    triggerIsSet_ = true;
}

bool CreateInteractionRuleReq::triggerIsSet() const
{
    return triggerIsSet_;
}

void CreateInteractionRuleReq::unsettrigger()
{
    triggerIsSet_ = false;
}

}
}
}
}
}


