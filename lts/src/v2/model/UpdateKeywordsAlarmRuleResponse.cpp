

#include "huaweicloud/lts/v2/model/UpdateKeywordsAlarmRuleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




UpdateKeywordsAlarmRuleResponse::UpdateKeywordsAlarmRuleResponse()
{
    keywordsAlarmRuleId_ = "";
    keywordsAlarmRuleIdIsSet_ = false;
    keywordsAlarmRuleName_ = "";
    keywordsAlarmRuleNameIsSet_ = false;
    alarmRuleAlias_ = "";
    alarmRuleAliasIsSet_ = false;
    keywordsAlarmRuleDescription_ = "";
    keywordsAlarmRuleDescriptionIsSet_ = false;
    keywordsRequestsIsSet_ = false;
    frequencyIsSet_ = false;
    keywordsAlarmLevel_ = "";
    keywordsAlarmLevelIsSet_ = false;
    keywordsAlarmSend_ = false;
    keywordsAlarmSendIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    createTime_ = 0L;
    createTimeIsSet_ = false;
    updateTime_ = 0L;
    updateTimeIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    conditionExpression_ = "";
    conditionExpressionIsSet_ = false;
    notificationFrequency_ = 0;
    notificationFrequencyIsSet_ = false;
    alarmActionRuleName_ = "";
    alarmActionRuleNameIsSet_ = false;
    recoveryPolicy_ = 0;
    recoveryPolicyIsSet_ = false;
    tagsIsSet_ = false;
    triggerConditionCount_ = 0;
    triggerConditionCountIsSet_ = false;
    triggerConditionFrequency_ = 0;
    triggerConditionFrequencyIsSet_ = false;
    whetherRecoveryPolicy_ = false;
    whetherRecoveryPolicyIsSet_ = false;
}

UpdateKeywordsAlarmRuleResponse::~UpdateKeywordsAlarmRuleResponse() = default;

void UpdateKeywordsAlarmRuleResponse::validate()
{
}

web::json::value UpdateKeywordsAlarmRuleResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(keywordsAlarmRuleIdIsSet_) {
        val[utility::conversions::to_string_t("keywords_alarm_rule_id")] = ModelBase::toJson(keywordsAlarmRuleId_);
    }
    if(keywordsAlarmRuleNameIsSet_) {
        val[utility::conversions::to_string_t("keywords_alarm_rule_name")] = ModelBase::toJson(keywordsAlarmRuleName_);
    }
    if(alarmRuleAliasIsSet_) {
        val[utility::conversions::to_string_t("alarm_rule_alias")] = ModelBase::toJson(alarmRuleAlias_);
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
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("projectId")] = ModelBase::toJson(projectId_);
    }
    if(conditionExpressionIsSet_) {
        val[utility::conversions::to_string_t("condition_expression")] = ModelBase::toJson(conditionExpression_);
    }
    if(notificationFrequencyIsSet_) {
        val[utility::conversions::to_string_t("notification_frequency")] = ModelBase::toJson(notificationFrequency_);
    }
    if(alarmActionRuleNameIsSet_) {
        val[utility::conversions::to_string_t("alarm_action_rule_name")] = ModelBase::toJson(alarmActionRuleName_);
    }
    if(recoveryPolicyIsSet_) {
        val[utility::conversions::to_string_t("recovery_policy")] = ModelBase::toJson(recoveryPolicy_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
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

    return val;
}
bool UpdateKeywordsAlarmRuleResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("alarm_rule_alias"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alarm_rule_alias"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlarmRuleAlias(refVal);
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
            std::vector<KeywordsResBody> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeywordsRequests(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("frequency"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("frequency"));
        if(!fieldValue.is_null())
        {
            FrequencyRespBody refVal;
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
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("projectId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("projectId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("condition_expression"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("condition_expression"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConditionExpression(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("recovery_policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("recovery_policy"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecoveryPolicy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<TagsResBody> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
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
    return ok;
}


std::string UpdateKeywordsAlarmRuleResponse::getKeywordsAlarmRuleId() const
{
    return keywordsAlarmRuleId_;
}

void UpdateKeywordsAlarmRuleResponse::setKeywordsAlarmRuleId(const std::string& value)
{
    keywordsAlarmRuleId_ = value;
    keywordsAlarmRuleIdIsSet_ = true;
}

bool UpdateKeywordsAlarmRuleResponse::keywordsAlarmRuleIdIsSet() const
{
    return keywordsAlarmRuleIdIsSet_;
}

void UpdateKeywordsAlarmRuleResponse::unsetkeywordsAlarmRuleId()
{
    keywordsAlarmRuleIdIsSet_ = false;
}

std::string UpdateKeywordsAlarmRuleResponse::getKeywordsAlarmRuleName() const
{
    return keywordsAlarmRuleName_;
}

void UpdateKeywordsAlarmRuleResponse::setKeywordsAlarmRuleName(const std::string& value)
{
    keywordsAlarmRuleName_ = value;
    keywordsAlarmRuleNameIsSet_ = true;
}

bool UpdateKeywordsAlarmRuleResponse::keywordsAlarmRuleNameIsSet() const
{
    return keywordsAlarmRuleNameIsSet_;
}

void UpdateKeywordsAlarmRuleResponse::unsetkeywordsAlarmRuleName()
{
    keywordsAlarmRuleNameIsSet_ = false;
}

std::string UpdateKeywordsAlarmRuleResponse::getAlarmRuleAlias() const
{
    return alarmRuleAlias_;
}

void UpdateKeywordsAlarmRuleResponse::setAlarmRuleAlias(const std::string& value)
{
    alarmRuleAlias_ = value;
    alarmRuleAliasIsSet_ = true;
}

bool UpdateKeywordsAlarmRuleResponse::alarmRuleAliasIsSet() const
{
    return alarmRuleAliasIsSet_;
}

void UpdateKeywordsAlarmRuleResponse::unsetalarmRuleAlias()
{
    alarmRuleAliasIsSet_ = false;
}

std::string UpdateKeywordsAlarmRuleResponse::getKeywordsAlarmRuleDescription() const
{
    return keywordsAlarmRuleDescription_;
}

void UpdateKeywordsAlarmRuleResponse::setKeywordsAlarmRuleDescription(const std::string& value)
{
    keywordsAlarmRuleDescription_ = value;
    keywordsAlarmRuleDescriptionIsSet_ = true;
}

bool UpdateKeywordsAlarmRuleResponse::keywordsAlarmRuleDescriptionIsSet() const
{
    return keywordsAlarmRuleDescriptionIsSet_;
}

void UpdateKeywordsAlarmRuleResponse::unsetkeywordsAlarmRuleDescription()
{
    keywordsAlarmRuleDescriptionIsSet_ = false;
}

std::vector<KeywordsResBody>& UpdateKeywordsAlarmRuleResponse::getKeywordsRequests()
{
    return keywordsRequests_;
}

void UpdateKeywordsAlarmRuleResponse::setKeywordsRequests(const std::vector<KeywordsResBody>& value)
{
    keywordsRequests_ = value;
    keywordsRequestsIsSet_ = true;
}

bool UpdateKeywordsAlarmRuleResponse::keywordsRequestsIsSet() const
{
    return keywordsRequestsIsSet_;
}

void UpdateKeywordsAlarmRuleResponse::unsetkeywordsRequests()
{
    keywordsRequestsIsSet_ = false;
}

FrequencyRespBody UpdateKeywordsAlarmRuleResponse::getFrequency() const
{
    return frequency_;
}

void UpdateKeywordsAlarmRuleResponse::setFrequency(const FrequencyRespBody& value)
{
    frequency_ = value;
    frequencyIsSet_ = true;
}

bool UpdateKeywordsAlarmRuleResponse::frequencyIsSet() const
{
    return frequencyIsSet_;
}

void UpdateKeywordsAlarmRuleResponse::unsetfrequency()
{
    frequencyIsSet_ = false;
}

std::string UpdateKeywordsAlarmRuleResponse::getKeywordsAlarmLevel() const
{
    return keywordsAlarmLevel_;
}

void UpdateKeywordsAlarmRuleResponse::setKeywordsAlarmLevel(const std::string& value)
{
    keywordsAlarmLevel_ = value;
    keywordsAlarmLevelIsSet_ = true;
}

bool UpdateKeywordsAlarmRuleResponse::keywordsAlarmLevelIsSet() const
{
    return keywordsAlarmLevelIsSet_;
}

void UpdateKeywordsAlarmRuleResponse::unsetkeywordsAlarmLevel()
{
    keywordsAlarmLevelIsSet_ = false;
}

bool UpdateKeywordsAlarmRuleResponse::isKeywordsAlarmSend() const
{
    return keywordsAlarmSend_;
}

void UpdateKeywordsAlarmRuleResponse::setKeywordsAlarmSend(bool value)
{
    keywordsAlarmSend_ = value;
    keywordsAlarmSendIsSet_ = true;
}

bool UpdateKeywordsAlarmRuleResponse::keywordsAlarmSendIsSet() const
{
    return keywordsAlarmSendIsSet_;
}

void UpdateKeywordsAlarmRuleResponse::unsetkeywordsAlarmSend()
{
    keywordsAlarmSendIsSet_ = false;
}

std::string UpdateKeywordsAlarmRuleResponse::getDomainId() const
{
    return domainId_;
}

void UpdateKeywordsAlarmRuleResponse::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool UpdateKeywordsAlarmRuleResponse::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void UpdateKeywordsAlarmRuleResponse::unsetdomainId()
{
    domainIdIsSet_ = false;
}

int64_t UpdateKeywordsAlarmRuleResponse::getCreateTime() const
{
    return createTime_;
}

void UpdateKeywordsAlarmRuleResponse::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool UpdateKeywordsAlarmRuleResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void UpdateKeywordsAlarmRuleResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

int64_t UpdateKeywordsAlarmRuleResponse::getUpdateTime() const
{
    return updateTime_;
}

void UpdateKeywordsAlarmRuleResponse::setUpdateTime(int64_t value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool UpdateKeywordsAlarmRuleResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void UpdateKeywordsAlarmRuleResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string UpdateKeywordsAlarmRuleResponse::getProjectId() const
{
    return projectId_;
}

void UpdateKeywordsAlarmRuleResponse::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool UpdateKeywordsAlarmRuleResponse::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void UpdateKeywordsAlarmRuleResponse::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string UpdateKeywordsAlarmRuleResponse::getConditionExpression() const
{
    return conditionExpression_;
}

void UpdateKeywordsAlarmRuleResponse::setConditionExpression(const std::string& value)
{
    conditionExpression_ = value;
    conditionExpressionIsSet_ = true;
}

bool UpdateKeywordsAlarmRuleResponse::conditionExpressionIsSet() const
{
    return conditionExpressionIsSet_;
}

void UpdateKeywordsAlarmRuleResponse::unsetconditionExpression()
{
    conditionExpressionIsSet_ = false;
}

int32_t UpdateKeywordsAlarmRuleResponse::getNotificationFrequency() const
{
    return notificationFrequency_;
}

void UpdateKeywordsAlarmRuleResponse::setNotificationFrequency(int32_t value)
{
    notificationFrequency_ = value;
    notificationFrequencyIsSet_ = true;
}

bool UpdateKeywordsAlarmRuleResponse::notificationFrequencyIsSet() const
{
    return notificationFrequencyIsSet_;
}

void UpdateKeywordsAlarmRuleResponse::unsetnotificationFrequency()
{
    notificationFrequencyIsSet_ = false;
}

std::string UpdateKeywordsAlarmRuleResponse::getAlarmActionRuleName() const
{
    return alarmActionRuleName_;
}

void UpdateKeywordsAlarmRuleResponse::setAlarmActionRuleName(const std::string& value)
{
    alarmActionRuleName_ = value;
    alarmActionRuleNameIsSet_ = true;
}

bool UpdateKeywordsAlarmRuleResponse::alarmActionRuleNameIsSet() const
{
    return alarmActionRuleNameIsSet_;
}

void UpdateKeywordsAlarmRuleResponse::unsetalarmActionRuleName()
{
    alarmActionRuleNameIsSet_ = false;
}

int32_t UpdateKeywordsAlarmRuleResponse::getRecoveryPolicy() const
{
    return recoveryPolicy_;
}

void UpdateKeywordsAlarmRuleResponse::setRecoveryPolicy(int32_t value)
{
    recoveryPolicy_ = value;
    recoveryPolicyIsSet_ = true;
}

bool UpdateKeywordsAlarmRuleResponse::recoveryPolicyIsSet() const
{
    return recoveryPolicyIsSet_;
}

void UpdateKeywordsAlarmRuleResponse::unsetrecoveryPolicy()
{
    recoveryPolicyIsSet_ = false;
}

std::vector<TagsResBody>& UpdateKeywordsAlarmRuleResponse::getTags()
{
    return tags_;
}

void UpdateKeywordsAlarmRuleResponse::setTags(const std::vector<TagsResBody>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool UpdateKeywordsAlarmRuleResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void UpdateKeywordsAlarmRuleResponse::unsettags()
{
    tagsIsSet_ = false;
}

int32_t UpdateKeywordsAlarmRuleResponse::getTriggerConditionCount() const
{
    return triggerConditionCount_;
}

void UpdateKeywordsAlarmRuleResponse::setTriggerConditionCount(int32_t value)
{
    triggerConditionCount_ = value;
    triggerConditionCountIsSet_ = true;
}

bool UpdateKeywordsAlarmRuleResponse::triggerConditionCountIsSet() const
{
    return triggerConditionCountIsSet_;
}

void UpdateKeywordsAlarmRuleResponse::unsettriggerConditionCount()
{
    triggerConditionCountIsSet_ = false;
}

int32_t UpdateKeywordsAlarmRuleResponse::getTriggerConditionFrequency() const
{
    return triggerConditionFrequency_;
}

void UpdateKeywordsAlarmRuleResponse::setTriggerConditionFrequency(int32_t value)
{
    triggerConditionFrequency_ = value;
    triggerConditionFrequencyIsSet_ = true;
}

bool UpdateKeywordsAlarmRuleResponse::triggerConditionFrequencyIsSet() const
{
    return triggerConditionFrequencyIsSet_;
}

void UpdateKeywordsAlarmRuleResponse::unsettriggerConditionFrequency()
{
    triggerConditionFrequencyIsSet_ = false;
}

bool UpdateKeywordsAlarmRuleResponse::isWhetherRecoveryPolicy() const
{
    return whetherRecoveryPolicy_;
}

void UpdateKeywordsAlarmRuleResponse::setWhetherRecoveryPolicy(bool value)
{
    whetherRecoveryPolicy_ = value;
    whetherRecoveryPolicyIsSet_ = true;
}

bool UpdateKeywordsAlarmRuleResponse::whetherRecoveryPolicyIsSet() const
{
    return whetherRecoveryPolicyIsSet_;
}

void UpdateKeywordsAlarmRuleResponse::unsetwhetherRecoveryPolicy()
{
    whetherRecoveryPolicyIsSet_ = false;
}

}
}
}
}
}


