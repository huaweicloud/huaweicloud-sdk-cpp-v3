

#include "huaweicloud/metastudio/v1/model/InteractionRuleInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




InteractionRuleInfo::InteractionRuleInfo()
{
    ruleIndex_ = "";
    ruleIndexIsSet_ = false;
    ruleName_ = "";
    ruleNameIsSet_ = false;
    enabled_ = false;
    enabledIsSet_ = false;
    eventType_ = 0;
    eventTypeIsSet_ = false;
    hitConditionIsSet_ = false;
    triggerIsSet_ = false;
    reviewConfigIsSet_ = false;
}

InteractionRuleInfo::~InteractionRuleInfo() = default;

void InteractionRuleInfo::validate()
{
}

web::json::value InteractionRuleInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ruleIndexIsSet_) {
        val[utility::conversions::to_string_t("rule_index")] = ModelBase::toJson(ruleIndex_);
    }
    if(ruleNameIsSet_) {
        val[utility::conversions::to_string_t("rule_name")] = ModelBase::toJson(ruleName_);
    }
    if(enabledIsSet_) {
        val[utility::conversions::to_string_t("enabled")] = ModelBase::toJson(enabled_);
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
    if(reviewConfigIsSet_) {
        val[utility::conversions::to_string_t("review_config")] = ModelBase::toJson(reviewConfig_);
    }

    return val;
}
bool InteractionRuleInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("rule_index"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule_index"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleIndex(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("enabled"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enabled"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnabled(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("review_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("review_config"));
        if(!fieldValue.is_null())
        {
            ReviewConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReviewConfig(refVal);
        }
    }
    return ok;
}


std::string InteractionRuleInfo::getRuleIndex() const
{
    return ruleIndex_;
}

void InteractionRuleInfo::setRuleIndex(const std::string& value)
{
    ruleIndex_ = value;
    ruleIndexIsSet_ = true;
}

bool InteractionRuleInfo::ruleIndexIsSet() const
{
    return ruleIndexIsSet_;
}

void InteractionRuleInfo::unsetruleIndex()
{
    ruleIndexIsSet_ = false;
}

std::string InteractionRuleInfo::getRuleName() const
{
    return ruleName_;
}

void InteractionRuleInfo::setRuleName(const std::string& value)
{
    ruleName_ = value;
    ruleNameIsSet_ = true;
}

bool InteractionRuleInfo::ruleNameIsSet() const
{
    return ruleNameIsSet_;
}

void InteractionRuleInfo::unsetruleName()
{
    ruleNameIsSet_ = false;
}

bool InteractionRuleInfo::isEnabled() const
{
    return enabled_;
}

void InteractionRuleInfo::setEnabled(bool value)
{
    enabled_ = value;
    enabledIsSet_ = true;
}

bool InteractionRuleInfo::enabledIsSet() const
{
    return enabledIsSet_;
}

void InteractionRuleInfo::unsetenabled()
{
    enabledIsSet_ = false;
}

int32_t InteractionRuleInfo::getEventType() const
{
    return eventType_;
}

void InteractionRuleInfo::setEventType(int32_t value)
{
    eventType_ = value;
    eventTypeIsSet_ = true;
}

bool InteractionRuleInfo::eventTypeIsSet() const
{
    return eventTypeIsSet_;
}

void InteractionRuleInfo::unseteventType()
{
    eventTypeIsSet_ = false;
}

HitCondition InteractionRuleInfo::getHitCondition() const
{
    return hitCondition_;
}

void InteractionRuleInfo::setHitCondition(const HitCondition& value)
{
    hitCondition_ = value;
    hitConditionIsSet_ = true;
}

bool InteractionRuleInfo::hitConditionIsSet() const
{
    return hitConditionIsSet_;
}

void InteractionRuleInfo::unsethitCondition()
{
    hitConditionIsSet_ = false;
}

TriggerProcess InteractionRuleInfo::getTrigger() const
{
    return trigger_;
}

void InteractionRuleInfo::setTrigger(const TriggerProcess& value)
{
    trigger_ = value;
    triggerIsSet_ = true;
}

bool InteractionRuleInfo::triggerIsSet() const
{
    return triggerIsSet_;
}

void InteractionRuleInfo::unsettrigger()
{
    triggerIsSet_ = false;
}

ReviewConfig InteractionRuleInfo::getReviewConfig() const
{
    return reviewConfig_;
}

void InteractionRuleInfo::setReviewConfig(const ReviewConfig& value)
{
    reviewConfig_ = value;
    reviewConfigIsSet_ = true;
}

bool InteractionRuleInfo::reviewConfigIsSet() const
{
    return reviewConfigIsSet_;
}

void InteractionRuleInfo::unsetreviewConfig()
{
    reviewConfigIsSet_ = false;
}

}
}
}
}
}


