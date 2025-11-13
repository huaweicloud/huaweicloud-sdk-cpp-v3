

#include "huaweicloud/metastudio/v1/model/UpdateInteractionRuleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




UpdateInteractionRuleResponse::UpdateInteractionRuleResponse()
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
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

UpdateInteractionRuleResponse::~UpdateInteractionRuleResponse() = default;

void UpdateInteractionRuleResponse::validate()
{
}

web::json::value UpdateInteractionRuleResponse::toJson() const
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
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool UpdateInteractionRuleResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::string UpdateInteractionRuleResponse::getRuleIndex() const
{
    return ruleIndex_;
}

void UpdateInteractionRuleResponse::setRuleIndex(const std::string& value)
{
    ruleIndex_ = value;
    ruleIndexIsSet_ = true;
}

bool UpdateInteractionRuleResponse::ruleIndexIsSet() const
{
    return ruleIndexIsSet_;
}

void UpdateInteractionRuleResponse::unsetruleIndex()
{
    ruleIndexIsSet_ = false;
}

std::string UpdateInteractionRuleResponse::getRuleName() const
{
    return ruleName_;
}

void UpdateInteractionRuleResponse::setRuleName(const std::string& value)
{
    ruleName_ = value;
    ruleNameIsSet_ = true;
}

bool UpdateInteractionRuleResponse::ruleNameIsSet() const
{
    return ruleNameIsSet_;
}

void UpdateInteractionRuleResponse::unsetruleName()
{
    ruleNameIsSet_ = false;
}

bool UpdateInteractionRuleResponse::isEnabled() const
{
    return enabled_;
}

void UpdateInteractionRuleResponse::setEnabled(bool value)
{
    enabled_ = value;
    enabledIsSet_ = true;
}

bool UpdateInteractionRuleResponse::enabledIsSet() const
{
    return enabledIsSet_;
}

void UpdateInteractionRuleResponse::unsetenabled()
{
    enabledIsSet_ = false;
}

int32_t UpdateInteractionRuleResponse::getEventType() const
{
    return eventType_;
}

void UpdateInteractionRuleResponse::setEventType(int32_t value)
{
    eventType_ = value;
    eventTypeIsSet_ = true;
}

bool UpdateInteractionRuleResponse::eventTypeIsSet() const
{
    return eventTypeIsSet_;
}

void UpdateInteractionRuleResponse::unseteventType()
{
    eventTypeIsSet_ = false;
}

HitCondition UpdateInteractionRuleResponse::getHitCondition() const
{
    return hitCondition_;
}

void UpdateInteractionRuleResponse::setHitCondition(const HitCondition& value)
{
    hitCondition_ = value;
    hitConditionIsSet_ = true;
}

bool UpdateInteractionRuleResponse::hitConditionIsSet() const
{
    return hitConditionIsSet_;
}

void UpdateInteractionRuleResponse::unsethitCondition()
{
    hitConditionIsSet_ = false;
}

TriggerProcess UpdateInteractionRuleResponse::getTrigger() const
{
    return trigger_;
}

void UpdateInteractionRuleResponse::setTrigger(const TriggerProcess& value)
{
    trigger_ = value;
    triggerIsSet_ = true;
}

bool UpdateInteractionRuleResponse::triggerIsSet() const
{
    return triggerIsSet_;
}

void UpdateInteractionRuleResponse::unsettrigger()
{
    triggerIsSet_ = false;
}

ReviewConfig UpdateInteractionRuleResponse::getReviewConfig() const
{
    return reviewConfig_;
}

void UpdateInteractionRuleResponse::setReviewConfig(const ReviewConfig& value)
{
    reviewConfig_ = value;
    reviewConfigIsSet_ = true;
}

bool UpdateInteractionRuleResponse::reviewConfigIsSet() const
{
    return reviewConfigIsSet_;
}

void UpdateInteractionRuleResponse::unsetreviewConfig()
{
    reviewConfigIsSet_ = false;
}

std::string UpdateInteractionRuleResponse::getRuleId() const
{
    return ruleId_;
}

void UpdateInteractionRuleResponse::setRuleId(const std::string& value)
{
    ruleId_ = value;
    ruleIdIsSet_ = true;
}

bool UpdateInteractionRuleResponse::ruleIdIsSet() const
{
    return ruleIdIsSet_;
}

void UpdateInteractionRuleResponse::unsetruleId()
{
    ruleIdIsSet_ = false;
}

std::string UpdateInteractionRuleResponse::getCreateTime() const
{
    return createTime_;
}

void UpdateInteractionRuleResponse::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool UpdateInteractionRuleResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void UpdateInteractionRuleResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string UpdateInteractionRuleResponse::getUpdateTime() const
{
    return updateTime_;
}

void UpdateInteractionRuleResponse::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool UpdateInteractionRuleResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void UpdateInteractionRuleResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string UpdateInteractionRuleResponse::getXRequestId() const
{
    return xRequestId_;
}

void UpdateInteractionRuleResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool UpdateInteractionRuleResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void UpdateInteractionRuleResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


