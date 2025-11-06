

#include "huaweicloud/lts/v2/model/CreateKeywordsAlarmRuleRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




CreateKeywordsAlarmRuleRequestBody::CreateKeywordsAlarmRuleRequestBody()
{
    keywordsAlarmRuleName_ = "";
    keywordsAlarmRuleNameIsSet_ = false;
    keywordsAlarmRuleDescription_ = "";
    keywordsAlarmRuleDescriptionIsSet_ = false;
    keywordsRequestsIsSet_ = false;
    frequencyIsSet_ = false;
    keywordsAlarmLevel_ = "";
    keywordsAlarmLevelIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    triggerConditionCount_ = 0;
    triggerConditionCountIsSet_ = false;
    triggerConditionFrequency_ = 0;
    triggerConditionFrequencyIsSet_ = false;
    whetherRecoveryPolicy_ = false;
    whetherRecoveryPolicyIsSet_ = false;
    recoveryPolicy_ = 0;
    recoveryPolicyIsSet_ = false;
    notificationFrequency_ = 0;
    notificationFrequencyIsSet_ = false;
    alarmActionRuleName_ = "";
    alarmActionRuleNameIsSet_ = false;
    tagsIsSet_ = false;
}

CreateKeywordsAlarmRuleRequestBody::~CreateKeywordsAlarmRuleRequestBody() = default;

void CreateKeywordsAlarmRuleRequestBody::validate()
{
}

web::json::value CreateKeywordsAlarmRuleRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

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
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
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
    if(notificationFrequencyIsSet_) {
        val[utility::conversions::to_string_t("notification_frequency")] = ModelBase::toJson(notificationFrequency_);
    }
    if(alarmActionRuleNameIsSet_) {
        val[utility::conversions::to_string_t("alarm_action_rule_name")] = ModelBase::toJson(alarmActionRuleName_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }

    return val;
}
bool CreateKeywordsAlarmRuleRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("notification_frequency"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("notification_frequency"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNotificationFrequency(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alarm_action_rule_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alarm_action_rule_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlarmActionRuleName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<TagsRequestBody> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::string CreateKeywordsAlarmRuleRequestBody::getKeywordsAlarmRuleName() const
{
    return keywordsAlarmRuleName_;
}

void CreateKeywordsAlarmRuleRequestBody::setKeywordsAlarmRuleName(const std::string& value)
{
    keywordsAlarmRuleName_ = value;
    keywordsAlarmRuleNameIsSet_ = true;
}

bool CreateKeywordsAlarmRuleRequestBody::keywordsAlarmRuleNameIsSet() const
{
    return keywordsAlarmRuleNameIsSet_;
}

void CreateKeywordsAlarmRuleRequestBody::unsetkeywordsAlarmRuleName()
{
    keywordsAlarmRuleNameIsSet_ = false;
}

std::string CreateKeywordsAlarmRuleRequestBody::getKeywordsAlarmRuleDescription() const
{
    return keywordsAlarmRuleDescription_;
}

void CreateKeywordsAlarmRuleRequestBody::setKeywordsAlarmRuleDescription(const std::string& value)
{
    keywordsAlarmRuleDescription_ = value;
    keywordsAlarmRuleDescriptionIsSet_ = true;
}

bool CreateKeywordsAlarmRuleRequestBody::keywordsAlarmRuleDescriptionIsSet() const
{
    return keywordsAlarmRuleDescriptionIsSet_;
}

void CreateKeywordsAlarmRuleRequestBody::unsetkeywordsAlarmRuleDescription()
{
    keywordsAlarmRuleDescriptionIsSet_ = false;
}

std::vector<KeywordsRequest>& CreateKeywordsAlarmRuleRequestBody::getKeywordsRequests()
{
    return keywordsRequests_;
}

void CreateKeywordsAlarmRuleRequestBody::setKeywordsRequests(const std::vector<KeywordsRequest>& value)
{
    keywordsRequests_ = value;
    keywordsRequestsIsSet_ = true;
}

bool CreateKeywordsAlarmRuleRequestBody::keywordsRequestsIsSet() const
{
    return keywordsRequestsIsSet_;
}

void CreateKeywordsAlarmRuleRequestBody::unsetkeywordsRequests()
{
    keywordsRequestsIsSet_ = false;
}

Frequency CreateKeywordsAlarmRuleRequestBody::getFrequency() const
{
    return frequency_;
}

void CreateKeywordsAlarmRuleRequestBody::setFrequency(const Frequency& value)
{
    frequency_ = value;
    frequencyIsSet_ = true;
}

bool CreateKeywordsAlarmRuleRequestBody::frequencyIsSet() const
{
    return frequencyIsSet_;
}

void CreateKeywordsAlarmRuleRequestBody::unsetfrequency()
{
    frequencyIsSet_ = false;
}

std::string CreateKeywordsAlarmRuleRequestBody::getKeywordsAlarmLevel() const
{
    return keywordsAlarmLevel_;
}

void CreateKeywordsAlarmRuleRequestBody::setKeywordsAlarmLevel(const std::string& value)
{
    keywordsAlarmLevel_ = value;
    keywordsAlarmLevelIsSet_ = true;
}

bool CreateKeywordsAlarmRuleRequestBody::keywordsAlarmLevelIsSet() const
{
    return keywordsAlarmLevelIsSet_;
}

void CreateKeywordsAlarmRuleRequestBody::unsetkeywordsAlarmLevel()
{
    keywordsAlarmLevelIsSet_ = false;
}

std::string CreateKeywordsAlarmRuleRequestBody::getDomainId() const
{
    return domainId_;
}

void CreateKeywordsAlarmRuleRequestBody::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool CreateKeywordsAlarmRuleRequestBody::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void CreateKeywordsAlarmRuleRequestBody::unsetdomainId()
{
    domainIdIsSet_ = false;
}

int32_t CreateKeywordsAlarmRuleRequestBody::getTriggerConditionCount() const
{
    return triggerConditionCount_;
}

void CreateKeywordsAlarmRuleRequestBody::setTriggerConditionCount(int32_t value)
{
    triggerConditionCount_ = value;
    triggerConditionCountIsSet_ = true;
}

bool CreateKeywordsAlarmRuleRequestBody::triggerConditionCountIsSet() const
{
    return triggerConditionCountIsSet_;
}

void CreateKeywordsAlarmRuleRequestBody::unsettriggerConditionCount()
{
    triggerConditionCountIsSet_ = false;
}

int32_t CreateKeywordsAlarmRuleRequestBody::getTriggerConditionFrequency() const
{
    return triggerConditionFrequency_;
}

void CreateKeywordsAlarmRuleRequestBody::setTriggerConditionFrequency(int32_t value)
{
    triggerConditionFrequency_ = value;
    triggerConditionFrequencyIsSet_ = true;
}

bool CreateKeywordsAlarmRuleRequestBody::triggerConditionFrequencyIsSet() const
{
    return triggerConditionFrequencyIsSet_;
}

void CreateKeywordsAlarmRuleRequestBody::unsettriggerConditionFrequency()
{
    triggerConditionFrequencyIsSet_ = false;
}

bool CreateKeywordsAlarmRuleRequestBody::isWhetherRecoveryPolicy() const
{
    return whetherRecoveryPolicy_;
}

void CreateKeywordsAlarmRuleRequestBody::setWhetherRecoveryPolicy(bool value)
{
    whetherRecoveryPolicy_ = value;
    whetherRecoveryPolicyIsSet_ = true;
}

bool CreateKeywordsAlarmRuleRequestBody::whetherRecoveryPolicyIsSet() const
{
    return whetherRecoveryPolicyIsSet_;
}

void CreateKeywordsAlarmRuleRequestBody::unsetwhetherRecoveryPolicy()
{
    whetherRecoveryPolicyIsSet_ = false;
}

int32_t CreateKeywordsAlarmRuleRequestBody::getRecoveryPolicy() const
{
    return recoveryPolicy_;
}

void CreateKeywordsAlarmRuleRequestBody::setRecoveryPolicy(int32_t value)
{
    recoveryPolicy_ = value;
    recoveryPolicyIsSet_ = true;
}

bool CreateKeywordsAlarmRuleRequestBody::recoveryPolicyIsSet() const
{
    return recoveryPolicyIsSet_;
}

void CreateKeywordsAlarmRuleRequestBody::unsetrecoveryPolicy()
{
    recoveryPolicyIsSet_ = false;
}

int32_t CreateKeywordsAlarmRuleRequestBody::getNotificationFrequency() const
{
    return notificationFrequency_;
}

void CreateKeywordsAlarmRuleRequestBody::setNotificationFrequency(int32_t value)
{
    notificationFrequency_ = value;
    notificationFrequencyIsSet_ = true;
}

bool CreateKeywordsAlarmRuleRequestBody::notificationFrequencyIsSet() const
{
    return notificationFrequencyIsSet_;
}

void CreateKeywordsAlarmRuleRequestBody::unsetnotificationFrequency()
{
    notificationFrequencyIsSet_ = false;
}

std::string CreateKeywordsAlarmRuleRequestBody::getAlarmActionRuleName() const
{
    return alarmActionRuleName_;
}

void CreateKeywordsAlarmRuleRequestBody::setAlarmActionRuleName(const std::string& value)
{
    alarmActionRuleName_ = value;
    alarmActionRuleNameIsSet_ = true;
}

bool CreateKeywordsAlarmRuleRequestBody::alarmActionRuleNameIsSet() const
{
    return alarmActionRuleNameIsSet_;
}

void CreateKeywordsAlarmRuleRequestBody::unsetalarmActionRuleName()
{
    alarmActionRuleNameIsSet_ = false;
}

std::vector<TagsRequestBody>& CreateKeywordsAlarmRuleRequestBody::getTags()
{
    return tags_;
}

void CreateKeywordsAlarmRuleRequestBody::setTags(const std::vector<TagsRequestBody>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool CreateKeywordsAlarmRuleRequestBody::tagsIsSet() const
{
    return tagsIsSet_;
}

void CreateKeywordsAlarmRuleRequestBody::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


