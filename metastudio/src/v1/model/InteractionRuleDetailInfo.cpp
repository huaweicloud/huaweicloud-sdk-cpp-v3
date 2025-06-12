

#include "huaweicloud/metastudio/v1/model/InteractionRuleDetailInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




InteractionRuleDetailInfo::InteractionRuleDetailInfo()
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
    ruleId_ = "";
    ruleIdIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
}

InteractionRuleDetailInfo::~InteractionRuleDetailInfo() = default;

void InteractionRuleDetailInfo::validate()
{
}

web::json::value InteractionRuleDetailInfo::toJson() const
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
    if(ruleIdIsSet_) {
        val[utility::conversions::to_string_t("rule_id")] = ModelBase::toJson(ruleId_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }

    return val;
}
bool InteractionRuleDetailInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("rule_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rule_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    return ok;
}


std::string InteractionRuleDetailInfo::getRuleIndex() const
{
    return ruleIndex_;
}

void InteractionRuleDetailInfo::setRuleIndex(const std::string& value)
{
    ruleIndex_ = value;
    ruleIndexIsSet_ = true;
}

bool InteractionRuleDetailInfo::ruleIndexIsSet() const
{
    return ruleIndexIsSet_;
}

void InteractionRuleDetailInfo::unsetruleIndex()
{
    ruleIndexIsSet_ = false;
}

std::string InteractionRuleDetailInfo::getRuleName() const
{
    return ruleName_;
}

void InteractionRuleDetailInfo::setRuleName(const std::string& value)
{
    ruleName_ = value;
    ruleNameIsSet_ = true;
}

bool InteractionRuleDetailInfo::ruleNameIsSet() const
{
    return ruleNameIsSet_;
}

void InteractionRuleDetailInfo::unsetruleName()
{
    ruleNameIsSet_ = false;
}

bool InteractionRuleDetailInfo::isEnabled() const
{
    return enabled_;
}

void InteractionRuleDetailInfo::setEnabled(bool value)
{
    enabled_ = value;
    enabledIsSet_ = true;
}

bool InteractionRuleDetailInfo::enabledIsSet() const
{
    return enabledIsSet_;
}

void InteractionRuleDetailInfo::unsetenabled()
{
    enabledIsSet_ = false;
}

int32_t InteractionRuleDetailInfo::getEventType() const
{
    return eventType_;
}

void InteractionRuleDetailInfo::setEventType(int32_t value)
{
    eventType_ = value;
    eventTypeIsSet_ = true;
}

bool InteractionRuleDetailInfo::eventTypeIsSet() const
{
    return eventTypeIsSet_;
}

void InteractionRuleDetailInfo::unseteventType()
{
    eventTypeIsSet_ = false;
}

HitCondition InteractionRuleDetailInfo::getHitCondition() const
{
    return hitCondition_;
}

void InteractionRuleDetailInfo::setHitCondition(const HitCondition& value)
{
    hitCondition_ = value;
    hitConditionIsSet_ = true;
}

bool InteractionRuleDetailInfo::hitConditionIsSet() const
{
    return hitConditionIsSet_;
}

void InteractionRuleDetailInfo::unsethitCondition()
{
    hitConditionIsSet_ = false;
}

TriggerProcess InteractionRuleDetailInfo::getTrigger() const
{
    return trigger_;
}

void InteractionRuleDetailInfo::setTrigger(const TriggerProcess& value)
{
    trigger_ = value;
    triggerIsSet_ = true;
}

bool InteractionRuleDetailInfo::triggerIsSet() const
{
    return triggerIsSet_;
}

void InteractionRuleDetailInfo::unsettrigger()
{
    triggerIsSet_ = false;
}

ReviewConfig InteractionRuleDetailInfo::getReviewConfig() const
{
    return reviewConfig_;
}

void InteractionRuleDetailInfo::setReviewConfig(const ReviewConfig& value)
{
    reviewConfig_ = value;
    reviewConfigIsSet_ = true;
}

bool InteractionRuleDetailInfo::reviewConfigIsSet() const
{
    return reviewConfigIsSet_;
}

void InteractionRuleDetailInfo::unsetreviewConfig()
{
    reviewConfigIsSet_ = false;
}

std::string InteractionRuleDetailInfo::getRuleId() const
{
    return ruleId_;
}

void InteractionRuleDetailInfo::setRuleId(const std::string& value)
{
    ruleId_ = value;
    ruleIdIsSet_ = true;
}

bool InteractionRuleDetailInfo::ruleIdIsSet() const
{
    return ruleIdIsSet_;
}

void InteractionRuleDetailInfo::unsetruleId()
{
    ruleIdIsSet_ = false;
}

std::string InteractionRuleDetailInfo::getCreateTime() const
{
    return createTime_;
}

void InteractionRuleDetailInfo::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool InteractionRuleDetailInfo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void InteractionRuleDetailInfo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string InteractionRuleDetailInfo::getUpdateTime() const
{
    return updateTime_;
}

void InteractionRuleDetailInfo::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool InteractionRuleDetailInfo::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void InteractionRuleDetailInfo::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

}
}
}
}
}


