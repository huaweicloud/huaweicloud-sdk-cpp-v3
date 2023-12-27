

#include "huaweicloud/lts/v2/model/UpdateSqlAlarmRuleResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




UpdateSqlAlarmRuleResponse::UpdateSqlAlarmRuleResponse()
{
    sqlAlarmRuleName_ = "";
    sqlAlarmRuleNameIsSet_ = false;
    alarmRuleAlias_ = "";
    alarmRuleAliasIsSet_ = false;
    isCssSql_ = false;
    isCssSqlIsSet_ = false;
    indexId_ = "";
    indexIdIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    sqlAlarmRuleId_ = "";
    sqlAlarmRuleIdIsSet_ = false;
    sqlAlarmRuleDescription_ = "";
    sqlAlarmRuleDescriptionIsSet_ = false;
    sqlRequestsIsSet_ = false;
    frequencyIsSet_ = false;
    conditionExpression_ = "";
    conditionExpressionIsSet_ = false;
    sqlAlarmLevel_ = "";
    sqlAlarmLevelIsSet_ = false;
    sqlAlarmSend_ = false;
    sqlAlarmSendIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    createTime_ = 0L;
    createTimeIsSet_ = false;
    updateTime_ = 0L;
    updateTimeIsSet_ = false;
    topicsIsSet_ = false;
    language_ = "";
    languageIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    notificationFrequency_ = 0;
    notificationFrequencyIsSet_ = false;
    alarmActionRuleName_ = "";
    alarmActionRuleNameIsSet_ = false;
}

UpdateSqlAlarmRuleResponse::~UpdateSqlAlarmRuleResponse() = default;

void UpdateSqlAlarmRuleResponse::validate()
{
}

web::json::value UpdateSqlAlarmRuleResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sqlAlarmRuleNameIsSet_) {
        val[utility::conversions::to_string_t("sql_alarm_rule_name")] = ModelBase::toJson(sqlAlarmRuleName_);
    }
    if(alarmRuleAliasIsSet_) {
        val[utility::conversions::to_string_t("alarm_rule_alias")] = ModelBase::toJson(alarmRuleAlias_);
    }
    if(isCssSqlIsSet_) {
        val[utility::conversions::to_string_t("is_css_sql")] = ModelBase::toJson(isCssSql_);
    }
    if(indexIdIsSet_) {
        val[utility::conversions::to_string_t("indexId")] = ModelBase::toJson(indexId_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("projectId")] = ModelBase::toJson(projectId_);
    }
    if(sqlAlarmRuleIdIsSet_) {
        val[utility::conversions::to_string_t("sql_alarm_rule_id")] = ModelBase::toJson(sqlAlarmRuleId_);
    }
    if(sqlAlarmRuleDescriptionIsSet_) {
        val[utility::conversions::to_string_t("sql_alarm_rule_description")] = ModelBase::toJson(sqlAlarmRuleDescription_);
    }
    if(sqlRequestsIsSet_) {
        val[utility::conversions::to_string_t("sql_requests")] = ModelBase::toJson(sqlRequests_);
    }
    if(frequencyIsSet_) {
        val[utility::conversions::to_string_t("frequency")] = ModelBase::toJson(frequency_);
    }
    if(conditionExpressionIsSet_) {
        val[utility::conversions::to_string_t("condition_expression")] = ModelBase::toJson(conditionExpression_);
    }
    if(sqlAlarmLevelIsSet_) {
        val[utility::conversions::to_string_t("sql_alarm_level")] = ModelBase::toJson(sqlAlarmLevel_);
    }
    if(sqlAlarmSendIsSet_) {
        val[utility::conversions::to_string_t("sql_alarm_send")] = ModelBase::toJson(sqlAlarmSend_);
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
    if(topicsIsSet_) {
        val[utility::conversions::to_string_t("topics")] = ModelBase::toJson(topics_);
    }
    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(notificationFrequencyIsSet_) {
        val[utility::conversions::to_string_t("notification_frequency")] = ModelBase::toJson(notificationFrequency_);
    }
    if(alarmActionRuleNameIsSet_) {
        val[utility::conversions::to_string_t("alarm_action_rule_name")] = ModelBase::toJson(alarmActionRuleName_);
    }

    return val;
}
bool UpdateSqlAlarmRuleResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("sql_alarm_rule_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_alarm_rule_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlAlarmRuleName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("is_css_sql"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_css_sql"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsCssSql(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("projectId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("projectId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sql_alarm_rule_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_alarm_rule_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlAlarmRuleId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sql_alarm_rule_description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_alarm_rule_description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlAlarmRuleDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sql_requests"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_requests"));
        if(!fieldValue.is_null())
        {
            std::vector<SqlRequest> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlRequests(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("condition_expression"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("condition_expression"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConditionExpression(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sql_alarm_level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_alarm_level"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlAlarmLevel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sql_alarm_send"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_alarm_send"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlAlarmSend(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("topics"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("topics"));
        if(!fieldValue.is_null())
        {
            std::vector<Topics> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTopics(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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


std::string UpdateSqlAlarmRuleResponse::getSqlAlarmRuleName() const
{
    return sqlAlarmRuleName_;
}

void UpdateSqlAlarmRuleResponse::setSqlAlarmRuleName(const std::string& value)
{
    sqlAlarmRuleName_ = value;
    sqlAlarmRuleNameIsSet_ = true;
}

bool UpdateSqlAlarmRuleResponse::sqlAlarmRuleNameIsSet() const
{
    return sqlAlarmRuleNameIsSet_;
}

void UpdateSqlAlarmRuleResponse::unsetsqlAlarmRuleName()
{
    sqlAlarmRuleNameIsSet_ = false;
}

std::string UpdateSqlAlarmRuleResponse::getAlarmRuleAlias() const
{
    return alarmRuleAlias_;
}

void UpdateSqlAlarmRuleResponse::setAlarmRuleAlias(const std::string& value)
{
    alarmRuleAlias_ = value;
    alarmRuleAliasIsSet_ = true;
}

bool UpdateSqlAlarmRuleResponse::alarmRuleAliasIsSet() const
{
    return alarmRuleAliasIsSet_;
}

void UpdateSqlAlarmRuleResponse::unsetalarmRuleAlias()
{
    alarmRuleAliasIsSet_ = false;
}

bool UpdateSqlAlarmRuleResponse::isIsCssSql() const
{
    return isCssSql_;
}

void UpdateSqlAlarmRuleResponse::setIsCssSql(bool value)
{
    isCssSql_ = value;
    isCssSqlIsSet_ = true;
}

bool UpdateSqlAlarmRuleResponse::isCssSqlIsSet() const
{
    return isCssSqlIsSet_;
}

void UpdateSqlAlarmRuleResponse::unsetisCssSql()
{
    isCssSqlIsSet_ = false;
}

std::string UpdateSqlAlarmRuleResponse::getIndexId() const
{
    return indexId_;
}

void UpdateSqlAlarmRuleResponse::setIndexId(const std::string& value)
{
    indexId_ = value;
    indexIdIsSet_ = true;
}

bool UpdateSqlAlarmRuleResponse::indexIdIsSet() const
{
    return indexIdIsSet_;
}

void UpdateSqlAlarmRuleResponse::unsetindexId()
{
    indexIdIsSet_ = false;
}

std::string UpdateSqlAlarmRuleResponse::getProjectId() const
{
    return projectId_;
}

void UpdateSqlAlarmRuleResponse::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool UpdateSqlAlarmRuleResponse::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void UpdateSqlAlarmRuleResponse::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string UpdateSqlAlarmRuleResponse::getSqlAlarmRuleId() const
{
    return sqlAlarmRuleId_;
}

void UpdateSqlAlarmRuleResponse::setSqlAlarmRuleId(const std::string& value)
{
    sqlAlarmRuleId_ = value;
    sqlAlarmRuleIdIsSet_ = true;
}

bool UpdateSqlAlarmRuleResponse::sqlAlarmRuleIdIsSet() const
{
    return sqlAlarmRuleIdIsSet_;
}

void UpdateSqlAlarmRuleResponse::unsetsqlAlarmRuleId()
{
    sqlAlarmRuleIdIsSet_ = false;
}

std::string UpdateSqlAlarmRuleResponse::getSqlAlarmRuleDescription() const
{
    return sqlAlarmRuleDescription_;
}

void UpdateSqlAlarmRuleResponse::setSqlAlarmRuleDescription(const std::string& value)
{
    sqlAlarmRuleDescription_ = value;
    sqlAlarmRuleDescriptionIsSet_ = true;
}

bool UpdateSqlAlarmRuleResponse::sqlAlarmRuleDescriptionIsSet() const
{
    return sqlAlarmRuleDescriptionIsSet_;
}

void UpdateSqlAlarmRuleResponse::unsetsqlAlarmRuleDescription()
{
    sqlAlarmRuleDescriptionIsSet_ = false;
}

std::vector<SqlRequest>& UpdateSqlAlarmRuleResponse::getSqlRequests()
{
    return sqlRequests_;
}

void UpdateSqlAlarmRuleResponse::setSqlRequests(const std::vector<SqlRequest>& value)
{
    sqlRequests_ = value;
    sqlRequestsIsSet_ = true;
}

bool UpdateSqlAlarmRuleResponse::sqlRequestsIsSet() const
{
    return sqlRequestsIsSet_;
}

void UpdateSqlAlarmRuleResponse::unsetsqlRequests()
{
    sqlRequestsIsSet_ = false;
}

FrequencyRespBody UpdateSqlAlarmRuleResponse::getFrequency() const
{
    return frequency_;
}

void UpdateSqlAlarmRuleResponse::setFrequency(const FrequencyRespBody& value)
{
    frequency_ = value;
    frequencyIsSet_ = true;
}

bool UpdateSqlAlarmRuleResponse::frequencyIsSet() const
{
    return frequencyIsSet_;
}

void UpdateSqlAlarmRuleResponse::unsetfrequency()
{
    frequencyIsSet_ = false;
}

std::string UpdateSqlAlarmRuleResponse::getConditionExpression() const
{
    return conditionExpression_;
}

void UpdateSqlAlarmRuleResponse::setConditionExpression(const std::string& value)
{
    conditionExpression_ = value;
    conditionExpressionIsSet_ = true;
}

bool UpdateSqlAlarmRuleResponse::conditionExpressionIsSet() const
{
    return conditionExpressionIsSet_;
}

void UpdateSqlAlarmRuleResponse::unsetconditionExpression()
{
    conditionExpressionIsSet_ = false;
}

std::string UpdateSqlAlarmRuleResponse::getSqlAlarmLevel() const
{
    return sqlAlarmLevel_;
}

void UpdateSqlAlarmRuleResponse::setSqlAlarmLevel(const std::string& value)
{
    sqlAlarmLevel_ = value;
    sqlAlarmLevelIsSet_ = true;
}

bool UpdateSqlAlarmRuleResponse::sqlAlarmLevelIsSet() const
{
    return sqlAlarmLevelIsSet_;
}

void UpdateSqlAlarmRuleResponse::unsetsqlAlarmLevel()
{
    sqlAlarmLevelIsSet_ = false;
}

bool UpdateSqlAlarmRuleResponse::isSqlAlarmSend() const
{
    return sqlAlarmSend_;
}

void UpdateSqlAlarmRuleResponse::setSqlAlarmSend(bool value)
{
    sqlAlarmSend_ = value;
    sqlAlarmSendIsSet_ = true;
}

bool UpdateSqlAlarmRuleResponse::sqlAlarmSendIsSet() const
{
    return sqlAlarmSendIsSet_;
}

void UpdateSqlAlarmRuleResponse::unsetsqlAlarmSend()
{
    sqlAlarmSendIsSet_ = false;
}

std::string UpdateSqlAlarmRuleResponse::getDomainId() const
{
    return domainId_;
}

void UpdateSqlAlarmRuleResponse::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool UpdateSqlAlarmRuleResponse::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void UpdateSqlAlarmRuleResponse::unsetdomainId()
{
    domainIdIsSet_ = false;
}

int64_t UpdateSqlAlarmRuleResponse::getCreateTime() const
{
    return createTime_;
}

void UpdateSqlAlarmRuleResponse::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool UpdateSqlAlarmRuleResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void UpdateSqlAlarmRuleResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

int64_t UpdateSqlAlarmRuleResponse::getUpdateTime() const
{
    return updateTime_;
}

void UpdateSqlAlarmRuleResponse::setUpdateTime(int64_t value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool UpdateSqlAlarmRuleResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void UpdateSqlAlarmRuleResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::vector<Topics>& UpdateSqlAlarmRuleResponse::getTopics()
{
    return topics_;
}

void UpdateSqlAlarmRuleResponse::setTopics(const std::vector<Topics>& value)
{
    topics_ = value;
    topicsIsSet_ = true;
}

bool UpdateSqlAlarmRuleResponse::topicsIsSet() const
{
    return topicsIsSet_;
}

void UpdateSqlAlarmRuleResponse::unsettopics()
{
    topicsIsSet_ = false;
}

std::string UpdateSqlAlarmRuleResponse::getLanguage() const
{
    return language_;
}

void UpdateSqlAlarmRuleResponse::setLanguage(const std::string& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool UpdateSqlAlarmRuleResponse::languageIsSet() const
{
    return languageIsSet_;
}

void UpdateSqlAlarmRuleResponse::unsetlanguage()
{
    languageIsSet_ = false;
}

std::string UpdateSqlAlarmRuleResponse::getId() const
{
    return id_;
}

void UpdateSqlAlarmRuleResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdateSqlAlarmRuleResponse::idIsSet() const
{
    return idIsSet_;
}

void UpdateSqlAlarmRuleResponse::unsetid()
{
    idIsSet_ = false;
}

int32_t UpdateSqlAlarmRuleResponse::getNotificationFrequency() const
{
    return notificationFrequency_;
}

void UpdateSqlAlarmRuleResponse::setNotificationFrequency(int32_t value)
{
    notificationFrequency_ = value;
    notificationFrequencyIsSet_ = true;
}

bool UpdateSqlAlarmRuleResponse::notificationFrequencyIsSet() const
{
    return notificationFrequencyIsSet_;
}

void UpdateSqlAlarmRuleResponse::unsetnotificationFrequency()
{
    notificationFrequencyIsSet_ = false;
}

std::string UpdateSqlAlarmRuleResponse::getAlarmActionRuleName() const
{
    return alarmActionRuleName_;
}

void UpdateSqlAlarmRuleResponse::setAlarmActionRuleName(const std::string& value)
{
    alarmActionRuleName_ = value;
    alarmActionRuleNameIsSet_ = true;
}

bool UpdateSqlAlarmRuleResponse::alarmActionRuleNameIsSet() const
{
    return alarmActionRuleNameIsSet_;
}

void UpdateSqlAlarmRuleResponse::unsetalarmActionRuleName()
{
    alarmActionRuleNameIsSet_ = false;
}

}
}
}
}
}


