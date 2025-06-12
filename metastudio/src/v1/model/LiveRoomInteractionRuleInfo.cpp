

#include "huaweicloud/metastudio/v1/model/LiveRoomInteractionRuleInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




LiveRoomInteractionRuleInfo::LiveRoomInteractionRuleInfo()
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
    groupId_ = "";
    groupIdIsSet_ = false;
    groupName_ = "";
    groupNameIsSet_ = false;
    enabledScenesIsSet_ = false;
}

LiveRoomInteractionRuleInfo::~LiveRoomInteractionRuleInfo() = default;

void LiveRoomInteractionRuleInfo::validate()
{
}

web::json::value LiveRoomInteractionRuleInfo::toJson() const
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
    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(groupNameIsSet_) {
        val[utility::conversions::to_string_t("group_name")] = ModelBase::toJson(groupName_);
    }
    if(enabledScenesIsSet_) {
        val[utility::conversions::to_string_t("enabled_scenes")] = ModelBase::toJson(enabledScenes_);
    }

    return val;
}
bool LiveRoomInteractionRuleInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("group_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enabled_scenes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enabled_scenes"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnabledScenes(refVal);
        }
    }
    return ok;
}


std::string LiveRoomInteractionRuleInfo::getRuleIndex() const
{
    return ruleIndex_;
}

void LiveRoomInteractionRuleInfo::setRuleIndex(const std::string& value)
{
    ruleIndex_ = value;
    ruleIndexIsSet_ = true;
}

bool LiveRoomInteractionRuleInfo::ruleIndexIsSet() const
{
    return ruleIndexIsSet_;
}

void LiveRoomInteractionRuleInfo::unsetruleIndex()
{
    ruleIndexIsSet_ = false;
}

std::string LiveRoomInteractionRuleInfo::getRuleName() const
{
    return ruleName_;
}

void LiveRoomInteractionRuleInfo::setRuleName(const std::string& value)
{
    ruleName_ = value;
    ruleNameIsSet_ = true;
}

bool LiveRoomInteractionRuleInfo::ruleNameIsSet() const
{
    return ruleNameIsSet_;
}

void LiveRoomInteractionRuleInfo::unsetruleName()
{
    ruleNameIsSet_ = false;
}

bool LiveRoomInteractionRuleInfo::isEnabled() const
{
    return enabled_;
}

void LiveRoomInteractionRuleInfo::setEnabled(bool value)
{
    enabled_ = value;
    enabledIsSet_ = true;
}

bool LiveRoomInteractionRuleInfo::enabledIsSet() const
{
    return enabledIsSet_;
}

void LiveRoomInteractionRuleInfo::unsetenabled()
{
    enabledIsSet_ = false;
}

int32_t LiveRoomInteractionRuleInfo::getEventType() const
{
    return eventType_;
}

void LiveRoomInteractionRuleInfo::setEventType(int32_t value)
{
    eventType_ = value;
    eventTypeIsSet_ = true;
}

bool LiveRoomInteractionRuleInfo::eventTypeIsSet() const
{
    return eventTypeIsSet_;
}

void LiveRoomInteractionRuleInfo::unseteventType()
{
    eventTypeIsSet_ = false;
}

HitCondition LiveRoomInteractionRuleInfo::getHitCondition() const
{
    return hitCondition_;
}

void LiveRoomInteractionRuleInfo::setHitCondition(const HitCondition& value)
{
    hitCondition_ = value;
    hitConditionIsSet_ = true;
}

bool LiveRoomInteractionRuleInfo::hitConditionIsSet() const
{
    return hitConditionIsSet_;
}

void LiveRoomInteractionRuleInfo::unsethitCondition()
{
    hitConditionIsSet_ = false;
}

TriggerProcess LiveRoomInteractionRuleInfo::getTrigger() const
{
    return trigger_;
}

void LiveRoomInteractionRuleInfo::setTrigger(const TriggerProcess& value)
{
    trigger_ = value;
    triggerIsSet_ = true;
}

bool LiveRoomInteractionRuleInfo::triggerIsSet() const
{
    return triggerIsSet_;
}

void LiveRoomInteractionRuleInfo::unsettrigger()
{
    triggerIsSet_ = false;
}

ReviewConfig LiveRoomInteractionRuleInfo::getReviewConfig() const
{
    return reviewConfig_;
}

void LiveRoomInteractionRuleInfo::setReviewConfig(const ReviewConfig& value)
{
    reviewConfig_ = value;
    reviewConfigIsSet_ = true;
}

bool LiveRoomInteractionRuleInfo::reviewConfigIsSet() const
{
    return reviewConfigIsSet_;
}

void LiveRoomInteractionRuleInfo::unsetreviewConfig()
{
    reviewConfigIsSet_ = false;
}

std::string LiveRoomInteractionRuleInfo::getGroupId() const
{
    return groupId_;
}

void LiveRoomInteractionRuleInfo::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool LiveRoomInteractionRuleInfo::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void LiveRoomInteractionRuleInfo::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string LiveRoomInteractionRuleInfo::getGroupName() const
{
    return groupName_;
}

void LiveRoomInteractionRuleInfo::setGroupName(const std::string& value)
{
    groupName_ = value;
    groupNameIsSet_ = true;
}

bool LiveRoomInteractionRuleInfo::groupNameIsSet() const
{
    return groupNameIsSet_;
}

void LiveRoomInteractionRuleInfo::unsetgroupName()
{
    groupNameIsSet_ = false;
}

std::vector<std::string>& LiveRoomInteractionRuleInfo::getEnabledScenes()
{
    return enabledScenes_;
}

void LiveRoomInteractionRuleInfo::setEnabledScenes(const std::vector<std::string>& value)
{
    enabledScenes_ = value;
    enabledScenesIsSet_ = true;
}

bool LiveRoomInteractionRuleInfo::enabledScenesIsSet() const
{
    return enabledScenesIsSet_;
}

void LiveRoomInteractionRuleInfo::unsetenabledScenes()
{
    enabledScenesIsSet_ = false;
}

}
}
}
}
}


