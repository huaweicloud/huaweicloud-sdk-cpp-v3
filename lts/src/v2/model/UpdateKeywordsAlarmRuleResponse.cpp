

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
    language_ = "";
    languageIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    topicsIsSet_ = false;
    conditionExpression_ = "";
    conditionExpressionIsSet_ = false;
    indexId_ = "";
    indexIdIsSet_ = false;
    notificationFrequency_ = 0;
    notificationFrequencyIsSet_ = false;
    alarmActionRuleName_ = "";
    alarmActionRuleNameIsSet_ = false;
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
    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("projectId")] = ModelBase::toJson(projectId_);
    }
    if(topicsIsSet_) {
        val[utility::conversions::to_string_t("topics")] = ModelBase::toJson(topics_);
    }
    if(conditionExpressionIsSet_) {
        val[utility::conversions::to_string_t("condition_expression")] = ModelBase::toJson(conditionExpression_);
    }
    if(indexIdIsSet_) {
        val[utility::conversions::to_string_t("indexId")] = ModelBase::toJson(indexId_);
    }
    if(notificationFrequencyIsSet_) {
        val[utility::conversions::to_string_t("notification_frequency")] = ModelBase::toJson(notificationFrequency_);
    }
    if(alarmActionRuleNameIsSet_) {
        val[utility::conversions::to_string_t("alarm_action_rule_name")] = ModelBase::toJson(alarmActionRuleName_);
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
    if(val.has_field(utility::conversions::to_string_t("language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLanguage(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("topics"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("topics"));
        if(!fieldValue.is_null())
        {
            std::vector<Topics> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTopics(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("indexId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("indexId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIndexId(refVal);
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

std::string UpdateKeywordsAlarmRuleResponse::getLanguage() const
{
    return language_;
}

void UpdateKeywordsAlarmRuleResponse::setLanguage(const std::string& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool UpdateKeywordsAlarmRuleResponse::languageIsSet() const
{
    return languageIsSet_;
}

void UpdateKeywordsAlarmRuleResponse::unsetlanguage()
{
    languageIsSet_ = false;
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

std::vector<Topics>& UpdateKeywordsAlarmRuleResponse::getTopics()
{
    return topics_;
}

void UpdateKeywordsAlarmRuleResponse::setTopics(const std::vector<Topics>& value)
{
    topics_ = value;
    topicsIsSet_ = true;
}

bool UpdateKeywordsAlarmRuleResponse::topicsIsSet() const
{
    return topicsIsSet_;
}

void UpdateKeywordsAlarmRuleResponse::unsettopics()
{
    topicsIsSet_ = false;
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

std::string UpdateKeywordsAlarmRuleResponse::getIndexId() const
{
    return indexId_;
}

void UpdateKeywordsAlarmRuleResponse::setIndexId(const std::string& value)
{
    indexId_ = value;
    indexIdIsSet_ = true;
}

bool UpdateKeywordsAlarmRuleResponse::indexIdIsSet() const
{
    return indexIdIsSet_;
}

void UpdateKeywordsAlarmRuleResponse::unsetindexId()
{
    indexIdIsSet_ = false;
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

}
}
}
}
}


