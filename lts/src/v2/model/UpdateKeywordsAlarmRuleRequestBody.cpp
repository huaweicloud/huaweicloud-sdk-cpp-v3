

#include "huaweicloud/lts/v2/model/UpdateKeywordsAlarmRuleRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




UpdateKeywordsAlarmRuleRequestBody::UpdateKeywordsAlarmRuleRequestBody()
{
    keywordsAlarmRuleId_ = "";
    keywordsAlarmRuleIdIsSet_ = false;
    keywordsAlarmRuleName_ = "";
    keywordsAlarmRuleNameIsSet_ = false;
    keywordsAlarmRuleDescription_ = "";
    keywordsAlarmRuleDescriptionIsSet_ = false;
    keywordsRequestsIsSet_ = false;
    frequencyIsSet_ = false;
    keywordsAlarmLevel_ = "";
    keywordsAlarmLevelIsSet_ = false;
    keywordsAlarmSend_ = false;
    keywordsAlarmSendIsSet_ = false;
    keywordsAlarmSendCode_ = 0;
    keywordsAlarmSendCodeIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    notificationSaveRuleIsSet_ = false;
    triggerConditionCount_ = 0;
    triggerConditionCountIsSet_ = false;
    triggerConditionFrequency_ = 0;
    triggerConditionFrequencyIsSet_ = false;
    whetherRecoveryPolicy_ = false;
    whetherRecoveryPolicyIsSet_ = false;
    recoveryPolicy_ = 0;
    recoveryPolicyIsSet_ = false;
}

UpdateKeywordsAlarmRuleRequestBody::~UpdateKeywordsAlarmRuleRequestBody() = default;

void UpdateKeywordsAlarmRuleRequestBody::validate()
{
}

web::json::value UpdateKeywordsAlarmRuleRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keywordsAlarmRuleIdIsSet_) {
        val[utility::conversions::to_string_t("keywords_alarm_rule_id")] = ModelBase::toJson(keywordsAlarmRuleId_);
    }
    if(keywordsAlarmRuleNameIsSet_) {
        val[utility::conversions::to_string_t("keywords_alarm_rule_name")] = ModelBase::toJson(keywordsAlarmRuleName_);
    }
    if(keywordsAlarmRuleDescriptionIsSet_) {
        val[utility::conversions::to_string_t("keywords_alarm_rule_description")] = ModelBase::toJson(keywordsAlarmRuleDescription_);
    }
    if(keywordsRequestsIsSet_) {
        val[utility::conversions::to_string_t("keywords_requests")] = ModelBase::toJson(keywordsRequests_);
    }
    if(frequencyIsSet_) {
        val[utility::conversions::to_string_t("frequency")] = ModelBase::toJson(frequency_);
    }
    if(keywordsAlarmLevelIsSet_) {
        val[utility::conversions::to_string_t("keywords_alarm_level")] = ModelBase::toJson(keywordsAlarmLevel_);
    }
    if(keywordsAlarmSendIsSet_) {
        val[utility::conversions::to_string_t("keywords_alarm_send")] = ModelBase::toJson(keywordsAlarmSend_);
    }
    if(keywordsAlarmSendCodeIsSet_) {
        val[utility::conversions::to_string_t("keywords_alarm_send_code")] = ModelBase::toJson(keywordsAlarmSendCode_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(notificationSaveRuleIsSet_) {
        val[utility::conversions::to_string_t("notification_save_rule")] = ModelBase::toJson(notificationSaveRule_);
    }
    if(triggerConditionCountIsSet_) {
        val[utility::conversions::to_string_t("trigger_condition_count")] = ModelBase::toJson(triggerConditionCount_);
    }
    if(triggerConditionFrequencyIsSet_) {
        val[utility::conversions::to_string_t("trigger_condition_frequency")] = ModelBase::toJson(triggerConditionFrequency_);
    }
    if(whetherRecoveryPolicyIsSet_) {
        val[utility::conversions::to_string_t("whether_recovery_policy")] = ModelBase::toJson(whetherRecoveryPolicy_);
    }
    if(recoveryPolicyIsSet_) {
        val[utility::conversions::to_string_t("recovery_policy")] = ModelBase::toJson(recoveryPolicy_);
    }

    return val;
}

bool UpdateKeywordsAlarmRuleRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("keywords_alarm_rule_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keywords_alarm_rule_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeywordsAlarmRuleId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("keywords_alarm_rule_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keywords_alarm_rule_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeywordsAlarmRuleName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("keywords_alarm_rule_description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keywords_alarm_rule_description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeywordsAlarmRuleDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("keywords_requests"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keywords_requests"));
        if(!fieldValue.is_null())
        {
            std::vector<KeywordsRequest> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeywordsRequests(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("frequency"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("frequency"));
        if(!fieldValue.is_null())
        {
            Frequency refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFrequency(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("keywords_alarm_level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keywords_alarm_level"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeywordsAlarmLevel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("keywords_alarm_send"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keywords_alarm_send"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeywordsAlarmSend(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("keywords_alarm_send_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keywords_alarm_send_code"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeywordsAlarmSendCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("notification_save_rule"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("notification_save_rule"));
        if(!fieldValue.is_null())
        {
            NotificationSaveRule refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNotificationSaveRule(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("trigger_condition_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trigger_condition_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTriggerConditionCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("trigger_condition_frequency"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trigger_condition_frequency"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTriggerConditionFrequency(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("whether_recovery_policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("whether_recovery_policy"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWhetherRecoveryPolicy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("recovery_policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("recovery_policy"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecoveryPolicy(refVal);
        }
    }
    return ok;
}


std::string UpdateKeywordsAlarmRuleRequestBody::getKeywordsAlarmRuleId() const
{
    return keywordsAlarmRuleId_;
}

void UpdateKeywordsAlarmRuleRequestBody::setKeywordsAlarmRuleId(const std::string& value)
{
    keywordsAlarmRuleId_ = value;
    keywordsAlarmRuleIdIsSet_ = true;
}

bool UpdateKeywordsAlarmRuleRequestBody::keywordsAlarmRuleIdIsSet() const
{
    return keywordsAlarmRuleIdIsSet_;
}

void UpdateKeywordsAlarmRuleRequestBody::unsetkeywordsAlarmRuleId()
{
    keywordsAlarmRuleIdIsSet_ = false;
}

std::string UpdateKeywordsAlarmRuleRequestBody::getKeywordsAlarmRuleName() const
{
    return keywordsAlarmRuleName_;
}

void UpdateKeywordsAlarmRuleRequestBody::setKeywordsAlarmRuleName(const std::string& value)
{
    keywordsAlarmRuleName_ = value;
    keywordsAlarmRuleNameIsSet_ = true;
}

bool UpdateKeywordsAlarmRuleRequestBody::keywordsAlarmRuleNameIsSet() const
{
    return keywordsAlarmRuleNameIsSet_;
}

void UpdateKeywordsAlarmRuleRequestBody::unsetkeywordsAlarmRuleName()
{
    keywordsAlarmRuleNameIsSet_ = false;
}

std::string UpdateKeywordsAlarmRuleRequestBody::getKeywordsAlarmRuleDescription() const
{
    return keywordsAlarmRuleDescription_;
}

void UpdateKeywordsAlarmRuleRequestBody::setKeywordsAlarmRuleDescription(const std::string& value)
{
    keywordsAlarmRuleDescription_ = value;
    keywordsAlarmRuleDescriptionIsSet_ = true;
}

bool UpdateKeywordsAlarmRuleRequestBody::keywordsAlarmRuleDescriptionIsSet() const
{
    return keywordsAlarmRuleDescriptionIsSet_;
}

void UpdateKeywordsAlarmRuleRequestBody::unsetkeywordsAlarmRuleDescription()
{
    keywordsAlarmRuleDescriptionIsSet_ = false;
}

std::vector<KeywordsRequest>& UpdateKeywordsAlarmRuleRequestBody::getKeywordsRequests()
{
    return keywordsRequests_;
}

void UpdateKeywordsAlarmRuleRequestBody::setKeywordsRequests(const std::vector<KeywordsRequest>& value)
{
    keywordsRequests_ = value;
    keywordsRequestsIsSet_ = true;
}

bool UpdateKeywordsAlarmRuleRequestBody::keywordsRequestsIsSet() const
{
    return keywordsRequestsIsSet_;
}

void UpdateKeywordsAlarmRuleRequestBody::unsetkeywordsRequests()
{
    keywordsRequestsIsSet_ = false;
}

Frequency UpdateKeywordsAlarmRuleRequestBody::getFrequency() const
{
    return frequency_;
}

void UpdateKeywordsAlarmRuleRequestBody::setFrequency(const Frequency& value)
{
    frequency_ = value;
    frequencyIsSet_ = true;
}

bool UpdateKeywordsAlarmRuleRequestBody::frequencyIsSet() const
{
    return frequencyIsSet_;
}

void UpdateKeywordsAlarmRuleRequestBody::unsetfrequency()
{
    frequencyIsSet_ = false;
}

std::string UpdateKeywordsAlarmRuleRequestBody::getKeywordsAlarmLevel() const
{
    return keywordsAlarmLevel_;
}

void UpdateKeywordsAlarmRuleRequestBody::setKeywordsAlarmLevel(const std::string& value)
{
    keywordsAlarmLevel_ = value;
    keywordsAlarmLevelIsSet_ = true;
}

bool UpdateKeywordsAlarmRuleRequestBody::keywordsAlarmLevelIsSet() const
{
    return keywordsAlarmLevelIsSet_;
}

void UpdateKeywordsAlarmRuleRequestBody::unsetkeywordsAlarmLevel()
{
    keywordsAlarmLevelIsSet_ = false;
}

bool UpdateKeywordsAlarmRuleRequestBody::isKeywordsAlarmSend() const
{
    return keywordsAlarmSend_;
}

void UpdateKeywordsAlarmRuleRequestBody::setKeywordsAlarmSend(bool value)
{
    keywordsAlarmSend_ = value;
    keywordsAlarmSendIsSet_ = true;
}

bool UpdateKeywordsAlarmRuleRequestBody::keywordsAlarmSendIsSet() const
{
    return keywordsAlarmSendIsSet_;
}

void UpdateKeywordsAlarmRuleRequestBody::unsetkeywordsAlarmSend()
{
    keywordsAlarmSendIsSet_ = false;
}

int32_t UpdateKeywordsAlarmRuleRequestBody::getKeywordsAlarmSendCode() const
{
    return keywordsAlarmSendCode_;
}

void UpdateKeywordsAlarmRuleRequestBody::setKeywordsAlarmSendCode(int32_t value)
{
    keywordsAlarmSendCode_ = value;
    keywordsAlarmSendCodeIsSet_ = true;
}

bool UpdateKeywordsAlarmRuleRequestBody::keywordsAlarmSendCodeIsSet() const
{
    return keywordsAlarmSendCodeIsSet_;
}

void UpdateKeywordsAlarmRuleRequestBody::unsetkeywordsAlarmSendCode()
{
    keywordsAlarmSendCodeIsSet_ = false;
}

std::string UpdateKeywordsAlarmRuleRequestBody::getDomainId() const
{
    return domainId_;
}

void UpdateKeywordsAlarmRuleRequestBody::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool UpdateKeywordsAlarmRuleRequestBody::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void UpdateKeywordsAlarmRuleRequestBody::unsetdomainId()
{
    domainIdIsSet_ = false;
}

NotificationSaveRule UpdateKeywordsAlarmRuleRequestBody::getNotificationSaveRule() const
{
    return notificationSaveRule_;
}

void UpdateKeywordsAlarmRuleRequestBody::setNotificationSaveRule(const NotificationSaveRule& value)
{
    notificationSaveRule_ = value;
    notificationSaveRuleIsSet_ = true;
}

bool UpdateKeywordsAlarmRuleRequestBody::notificationSaveRuleIsSet() const
{
    return notificationSaveRuleIsSet_;
}

void UpdateKeywordsAlarmRuleRequestBody::unsetnotificationSaveRule()
{
    notificationSaveRuleIsSet_ = false;
}

int32_t UpdateKeywordsAlarmRuleRequestBody::getTriggerConditionCount() const
{
    return triggerConditionCount_;
}

void UpdateKeywordsAlarmRuleRequestBody::setTriggerConditionCount(int32_t value)
{
    triggerConditionCount_ = value;
    triggerConditionCountIsSet_ = true;
}

bool UpdateKeywordsAlarmRuleRequestBody::triggerConditionCountIsSet() const
{
    return triggerConditionCountIsSet_;
}

void UpdateKeywordsAlarmRuleRequestBody::unsettriggerConditionCount()
{
    triggerConditionCountIsSet_ = false;
}

int32_t UpdateKeywordsAlarmRuleRequestBody::getTriggerConditionFrequency() const
{
    return triggerConditionFrequency_;
}

void UpdateKeywordsAlarmRuleRequestBody::setTriggerConditionFrequency(int32_t value)
{
    triggerConditionFrequency_ = value;
    triggerConditionFrequencyIsSet_ = true;
}

bool UpdateKeywordsAlarmRuleRequestBody::triggerConditionFrequencyIsSet() const
{
    return triggerConditionFrequencyIsSet_;
}

void UpdateKeywordsAlarmRuleRequestBody::unsettriggerConditionFrequency()
{
    triggerConditionFrequencyIsSet_ = false;
}

bool UpdateKeywordsAlarmRuleRequestBody::isWhetherRecoveryPolicy() const
{
    return whetherRecoveryPolicy_;
}

void UpdateKeywordsAlarmRuleRequestBody::setWhetherRecoveryPolicy(bool value)
{
    whetherRecoveryPolicy_ = value;
    whetherRecoveryPolicyIsSet_ = true;
}

bool UpdateKeywordsAlarmRuleRequestBody::whetherRecoveryPolicyIsSet() const
{
    return whetherRecoveryPolicyIsSet_;
}

void UpdateKeywordsAlarmRuleRequestBody::unsetwhetherRecoveryPolicy()
{
    whetherRecoveryPolicyIsSet_ = false;
}

int32_t UpdateKeywordsAlarmRuleRequestBody::getRecoveryPolicy() const
{
    return recoveryPolicy_;
}

void UpdateKeywordsAlarmRuleRequestBody::setRecoveryPolicy(int32_t value)
{
    recoveryPolicy_ = value;
    recoveryPolicyIsSet_ = true;
}

bool UpdateKeywordsAlarmRuleRequestBody::recoveryPolicyIsSet() const
{
    return recoveryPolicyIsSet_;
}

void UpdateKeywordsAlarmRuleRequestBody::unsetrecoveryPolicy()
{
    recoveryPolicyIsSet_ = false;
}

}
}
}
}
}


