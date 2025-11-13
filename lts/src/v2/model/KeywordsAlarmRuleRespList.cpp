

#include "huaweicloud/lts/v2/model/KeywordsAlarmRuleRespList.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




KeywordsAlarmRuleRespList::KeywordsAlarmRuleRespList()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    keywordsAlarmRuleId_ = "";
    keywordsAlarmRuleIdIsSet_ = false;
    keywordsAlarmRuleName_ = "";
    keywordsAlarmRuleNameIsSet_ = false;
    keywordsAlarmRuleDescription_ = "";
    keywordsAlarmRuleDescriptionIsSet_ = false;
    conditionExpression_ = "";
    conditionExpressionIsSet_ = false;
    keywordsRequestsIsSet_ = false;
    frequencyIsSet_ = false;
    keywordsAlarmLevel_ = "";
    keywordsAlarmLevelIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    createTime_ = 0L;
    createTimeIsSet_ = false;
    updateTime_ = 0L;
    updateTimeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
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

KeywordsAlarmRuleRespList::~KeywordsAlarmRuleRespList() = default;

void KeywordsAlarmRuleRespList::validate()
{
}

web::json::value KeywordsAlarmRuleRespList::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("projectId")] = ModelBase::toJson(projectId_);
    }
    if(keywordsAlarmRuleIdIsSet_) {
        val[utility::conversions::to_string_t("keywords_alarm_rule_id")] = ModelBase::toJson(keywordsAlarmRuleId_);
    }
    if(keywordsAlarmRuleNameIsSet_) {
        val[utility::conversions::to_string_t("keywords_alarm_rule_name")] = ModelBase::toJson(keywordsAlarmRuleName_);
    }
    if(keywordsAlarmRuleDescriptionIsSet_) {
        val[utility::conversions::to_string_t("keywords_alarm_rule_description")] = ModelBase::toJson(keywordsAlarmRuleDescription_);
    }
    if(conditionExpressionIsSet_) {
        val[utility::conversions::to_string_t("condition_expression")] = ModelBase::toJson(conditionExpression_);
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
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
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
bool KeywordsAlarmRuleRespList::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("projectId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("projectId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t("condition_expression"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("condition_expression"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConditionExpression(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("keywords_requests"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("keywords_requests"));
        if(!fieldValue.is_null())
        {
            std::vector<KeywordsRequestResponse> refVal;
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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
            std::vector<TagsResBody> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    return ok;
}


std::string KeywordsAlarmRuleRespList::getProjectId() const
{
    return projectId_;
}

void KeywordsAlarmRuleRespList::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool KeywordsAlarmRuleRespList::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void KeywordsAlarmRuleRespList::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string KeywordsAlarmRuleRespList::getKeywordsAlarmRuleId() const
{
    return keywordsAlarmRuleId_;
}

void KeywordsAlarmRuleRespList::setKeywordsAlarmRuleId(const std::string& value)
{
    keywordsAlarmRuleId_ = value;
    keywordsAlarmRuleIdIsSet_ = true;
}

bool KeywordsAlarmRuleRespList::keywordsAlarmRuleIdIsSet() const
{
    return keywordsAlarmRuleIdIsSet_;
}

void KeywordsAlarmRuleRespList::unsetkeywordsAlarmRuleId()
{
    keywordsAlarmRuleIdIsSet_ = false;
}

std::string KeywordsAlarmRuleRespList::getKeywordsAlarmRuleName() const
{
    return keywordsAlarmRuleName_;
}

void KeywordsAlarmRuleRespList::setKeywordsAlarmRuleName(const std::string& value)
{
    keywordsAlarmRuleName_ = value;
    keywordsAlarmRuleNameIsSet_ = true;
}

bool KeywordsAlarmRuleRespList::keywordsAlarmRuleNameIsSet() const
{
    return keywordsAlarmRuleNameIsSet_;
}

void KeywordsAlarmRuleRespList::unsetkeywordsAlarmRuleName()
{
    keywordsAlarmRuleNameIsSet_ = false;
}

std::string KeywordsAlarmRuleRespList::getKeywordsAlarmRuleDescription() const
{
    return keywordsAlarmRuleDescription_;
}

void KeywordsAlarmRuleRespList::setKeywordsAlarmRuleDescription(const std::string& value)
{
    keywordsAlarmRuleDescription_ = value;
    keywordsAlarmRuleDescriptionIsSet_ = true;
}

bool KeywordsAlarmRuleRespList::keywordsAlarmRuleDescriptionIsSet() const
{
    return keywordsAlarmRuleDescriptionIsSet_;
}

void KeywordsAlarmRuleRespList::unsetkeywordsAlarmRuleDescription()
{
    keywordsAlarmRuleDescriptionIsSet_ = false;
}

std::string KeywordsAlarmRuleRespList::getConditionExpression() const
{
    return conditionExpression_;
}

void KeywordsAlarmRuleRespList::setConditionExpression(const std::string& value)
{
    conditionExpression_ = value;
    conditionExpressionIsSet_ = true;
}

bool KeywordsAlarmRuleRespList::conditionExpressionIsSet() const
{
    return conditionExpressionIsSet_;
}

void KeywordsAlarmRuleRespList::unsetconditionExpression()
{
    conditionExpressionIsSet_ = false;
}

std::vector<KeywordsRequestResponse>& KeywordsAlarmRuleRespList::getKeywordsRequests()
{
    return keywordsRequests_;
}

void KeywordsAlarmRuleRespList::setKeywordsRequests(const std::vector<KeywordsRequestResponse>& value)
{
    keywordsRequests_ = value;
    keywordsRequestsIsSet_ = true;
}

bool KeywordsAlarmRuleRespList::keywordsRequestsIsSet() const
{
    return keywordsRequestsIsSet_;
}

void KeywordsAlarmRuleRespList::unsetkeywordsRequests()
{
    keywordsRequestsIsSet_ = false;
}

Frequency KeywordsAlarmRuleRespList::getFrequency() const
{
    return frequency_;
}

void KeywordsAlarmRuleRespList::setFrequency(const Frequency& value)
{
    frequency_ = value;
    frequencyIsSet_ = true;
}

bool KeywordsAlarmRuleRespList::frequencyIsSet() const
{
    return frequencyIsSet_;
}

void KeywordsAlarmRuleRespList::unsetfrequency()
{
    frequencyIsSet_ = false;
}

std::string KeywordsAlarmRuleRespList::getKeywordsAlarmLevel() const
{
    return keywordsAlarmLevel_;
}

void KeywordsAlarmRuleRespList::setKeywordsAlarmLevel(const std::string& value)
{
    keywordsAlarmLevel_ = value;
    keywordsAlarmLevelIsSet_ = true;
}

bool KeywordsAlarmRuleRespList::keywordsAlarmLevelIsSet() const
{
    return keywordsAlarmLevelIsSet_;
}

void KeywordsAlarmRuleRespList::unsetkeywordsAlarmLevel()
{
    keywordsAlarmLevelIsSet_ = false;
}

std::string KeywordsAlarmRuleRespList::getDomainId() const
{
    return domainId_;
}

void KeywordsAlarmRuleRespList::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool KeywordsAlarmRuleRespList::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void KeywordsAlarmRuleRespList::unsetdomainId()
{
    domainIdIsSet_ = false;
}

int64_t KeywordsAlarmRuleRespList::getCreateTime() const
{
    return createTime_;
}

void KeywordsAlarmRuleRespList::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool KeywordsAlarmRuleRespList::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void KeywordsAlarmRuleRespList::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

int64_t KeywordsAlarmRuleRespList::getUpdateTime() const
{
    return updateTime_;
}

void KeywordsAlarmRuleRespList::setUpdateTime(int64_t value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool KeywordsAlarmRuleRespList::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void KeywordsAlarmRuleRespList::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string KeywordsAlarmRuleRespList::getStatus() const
{
    return status_;
}

void KeywordsAlarmRuleRespList::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool KeywordsAlarmRuleRespList::statusIsSet() const
{
    return statusIsSet_;
}

void KeywordsAlarmRuleRespList::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t KeywordsAlarmRuleRespList::getTriggerConditionCount() const
{
    return triggerConditionCount_;
}

void KeywordsAlarmRuleRespList::setTriggerConditionCount(int32_t value)
{
    triggerConditionCount_ = value;
    triggerConditionCountIsSet_ = true;
}

bool KeywordsAlarmRuleRespList::triggerConditionCountIsSet() const
{
    return triggerConditionCountIsSet_;
}

void KeywordsAlarmRuleRespList::unsettriggerConditionCount()
{
    triggerConditionCountIsSet_ = false;
}

int32_t KeywordsAlarmRuleRespList::getTriggerConditionFrequency() const
{
    return triggerConditionFrequency_;
}

void KeywordsAlarmRuleRespList::setTriggerConditionFrequency(int32_t value)
{
    triggerConditionFrequency_ = value;
    triggerConditionFrequencyIsSet_ = true;
}

bool KeywordsAlarmRuleRespList::triggerConditionFrequencyIsSet() const
{
    return triggerConditionFrequencyIsSet_;
}

void KeywordsAlarmRuleRespList::unsettriggerConditionFrequency()
{
    triggerConditionFrequencyIsSet_ = false;
}

bool KeywordsAlarmRuleRespList::isWhetherRecoveryPolicy() const
{
    return whetherRecoveryPolicy_;
}

void KeywordsAlarmRuleRespList::setWhetherRecoveryPolicy(bool value)
{
    whetherRecoveryPolicy_ = value;
    whetherRecoveryPolicyIsSet_ = true;
}

bool KeywordsAlarmRuleRespList::whetherRecoveryPolicyIsSet() const
{
    return whetherRecoveryPolicyIsSet_;
}

void KeywordsAlarmRuleRespList::unsetwhetherRecoveryPolicy()
{
    whetherRecoveryPolicyIsSet_ = false;
}

int32_t KeywordsAlarmRuleRespList::getRecoveryPolicy() const
{
    return recoveryPolicy_;
}

void KeywordsAlarmRuleRespList::setRecoveryPolicy(int32_t value)
{
    recoveryPolicy_ = value;
    recoveryPolicyIsSet_ = true;
}

bool KeywordsAlarmRuleRespList::recoveryPolicyIsSet() const
{
    return recoveryPolicyIsSet_;
}

void KeywordsAlarmRuleRespList::unsetrecoveryPolicy()
{
    recoveryPolicyIsSet_ = false;
}

int32_t KeywordsAlarmRuleRespList::getNotificationFrequency() const
{
    return notificationFrequency_;
}

void KeywordsAlarmRuleRespList::setNotificationFrequency(int32_t value)
{
    notificationFrequency_ = value;
    notificationFrequencyIsSet_ = true;
}

bool KeywordsAlarmRuleRespList::notificationFrequencyIsSet() const
{
    return notificationFrequencyIsSet_;
}

void KeywordsAlarmRuleRespList::unsetnotificationFrequency()
{
    notificationFrequencyIsSet_ = false;
}

std::string KeywordsAlarmRuleRespList::getAlarmActionRuleName() const
{
    return alarmActionRuleName_;
}

void KeywordsAlarmRuleRespList::setAlarmActionRuleName(const std::string& value)
{
    alarmActionRuleName_ = value;
    alarmActionRuleNameIsSet_ = true;
}

bool KeywordsAlarmRuleRespList::alarmActionRuleNameIsSet() const
{
    return alarmActionRuleNameIsSet_;
}

void KeywordsAlarmRuleRespList::unsetalarmActionRuleName()
{
    alarmActionRuleNameIsSet_ = false;
}

std::vector<TagsResBody>& KeywordsAlarmRuleRespList::getTags()
{
    return tags_;
}

void KeywordsAlarmRuleRespList::setTags(const std::vector<TagsResBody>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool KeywordsAlarmRuleRespList::tagsIsSet() const
{
    return tagsIsSet_;
}

void KeywordsAlarmRuleRespList::unsettags()
{
    tagsIsSet_ = false;
}

}
}
}
}
}


