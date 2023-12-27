

#include "huaweicloud/lts/v2/model/UpdateSqlAlarmRuleRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




UpdateSqlAlarmRuleRequestBody::UpdateSqlAlarmRuleRequestBody()
{
    sqlAlarmRuleId_ = "";
    sqlAlarmRuleIdIsSet_ = false;
    sqlAlarmRuleName_ = "";
    sqlAlarmRuleNameIsSet_ = false;
    alarmRuleAlias_ = "";
    alarmRuleAliasIsSet_ = false;
    isCssSql_ = false;
    isCssSqlIsSet_ = false;
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
    sqlAlarmSendCode_ = 0;
    sqlAlarmSendCodeIsSet_ = false;
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
    notificationFrequency_ = 0;
    notificationFrequencyIsSet_ = false;
    alarmActionRuleName_ = "";
    alarmActionRuleNameIsSet_ = false;
}

UpdateSqlAlarmRuleRequestBody::~UpdateSqlAlarmRuleRequestBody() = default;

void UpdateSqlAlarmRuleRequestBody::validate()
{
}

web::json::value UpdateSqlAlarmRuleRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sqlAlarmRuleIdIsSet_) {
        val[utility::conversions::to_string_t("sql_alarm_rule_id")] = ModelBase::toJson(sqlAlarmRuleId_);
    }
    if(sqlAlarmRuleNameIsSet_) {
        val[utility::conversions::to_string_t("sql_alarm_rule_name")] = ModelBase::toJson(sqlAlarmRuleName_);
    }
    if(alarmRuleAliasIsSet_) {
        val[utility::conversions::to_string_t("alarm_rule_alias")] = ModelBase::toJson(alarmRuleAlias_);
    }
    if(isCssSqlIsSet_) {
        val[utility::conversions::to_string_t("is_css_sql")] = ModelBase::toJson(isCssSql_);
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
    if(sqlAlarmSendCodeIsSet_) {
        val[utility::conversions::to_string_t("sql_alarm_send_code")] = ModelBase::toJson(sqlAlarmSendCode_);
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
    if(notificationFrequencyIsSet_) {
        val[utility::conversions::to_string_t("notification_frequency")] = ModelBase::toJson(notificationFrequency_);
    }
    if(alarmActionRuleNameIsSet_) {
        val[utility::conversions::to_string_t("alarm_action_rule_name")] = ModelBase::toJson(alarmActionRuleName_);
    }

    return val;
}
bool UpdateSqlAlarmRuleRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("sql_alarm_rule_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_alarm_rule_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlAlarmRuleId(refVal);
        }
    }
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
            CreateSqlAlarmRuleFrequency refVal;
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
    if(val.has_field(utility::conversions::to_string_t("sql_alarm_send_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_alarm_send_code"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlAlarmSendCode(refVal);
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
            SqlNotificationSaveRule refVal;
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


std::string UpdateSqlAlarmRuleRequestBody::getSqlAlarmRuleId() const
{
    return sqlAlarmRuleId_;
}

void UpdateSqlAlarmRuleRequestBody::setSqlAlarmRuleId(const std::string& value)
{
    sqlAlarmRuleId_ = value;
    sqlAlarmRuleIdIsSet_ = true;
}

bool UpdateSqlAlarmRuleRequestBody::sqlAlarmRuleIdIsSet() const
{
    return sqlAlarmRuleIdIsSet_;
}

void UpdateSqlAlarmRuleRequestBody::unsetsqlAlarmRuleId()
{
    sqlAlarmRuleIdIsSet_ = false;
}

std::string UpdateSqlAlarmRuleRequestBody::getSqlAlarmRuleName() const
{
    return sqlAlarmRuleName_;
}

void UpdateSqlAlarmRuleRequestBody::setSqlAlarmRuleName(const std::string& value)
{
    sqlAlarmRuleName_ = value;
    sqlAlarmRuleNameIsSet_ = true;
}

bool UpdateSqlAlarmRuleRequestBody::sqlAlarmRuleNameIsSet() const
{
    return sqlAlarmRuleNameIsSet_;
}

void UpdateSqlAlarmRuleRequestBody::unsetsqlAlarmRuleName()
{
    sqlAlarmRuleNameIsSet_ = false;
}

std::string UpdateSqlAlarmRuleRequestBody::getAlarmRuleAlias() const
{
    return alarmRuleAlias_;
}

void UpdateSqlAlarmRuleRequestBody::setAlarmRuleAlias(const std::string& value)
{
    alarmRuleAlias_ = value;
    alarmRuleAliasIsSet_ = true;
}

bool UpdateSqlAlarmRuleRequestBody::alarmRuleAliasIsSet() const
{
    return alarmRuleAliasIsSet_;
}

void UpdateSqlAlarmRuleRequestBody::unsetalarmRuleAlias()
{
    alarmRuleAliasIsSet_ = false;
}

bool UpdateSqlAlarmRuleRequestBody::isIsCssSql() const
{
    return isCssSql_;
}

void UpdateSqlAlarmRuleRequestBody::setIsCssSql(bool value)
{
    isCssSql_ = value;
    isCssSqlIsSet_ = true;
}

bool UpdateSqlAlarmRuleRequestBody::isCssSqlIsSet() const
{
    return isCssSqlIsSet_;
}

void UpdateSqlAlarmRuleRequestBody::unsetisCssSql()
{
    isCssSqlIsSet_ = false;
}

std::string UpdateSqlAlarmRuleRequestBody::getSqlAlarmRuleDescription() const
{
    return sqlAlarmRuleDescription_;
}

void UpdateSqlAlarmRuleRequestBody::setSqlAlarmRuleDescription(const std::string& value)
{
    sqlAlarmRuleDescription_ = value;
    sqlAlarmRuleDescriptionIsSet_ = true;
}

bool UpdateSqlAlarmRuleRequestBody::sqlAlarmRuleDescriptionIsSet() const
{
    return sqlAlarmRuleDescriptionIsSet_;
}

void UpdateSqlAlarmRuleRequestBody::unsetsqlAlarmRuleDescription()
{
    sqlAlarmRuleDescriptionIsSet_ = false;
}

std::vector<SqlRequest>& UpdateSqlAlarmRuleRequestBody::getSqlRequests()
{
    return sqlRequests_;
}

void UpdateSqlAlarmRuleRequestBody::setSqlRequests(const std::vector<SqlRequest>& value)
{
    sqlRequests_ = value;
    sqlRequestsIsSet_ = true;
}

bool UpdateSqlAlarmRuleRequestBody::sqlRequestsIsSet() const
{
    return sqlRequestsIsSet_;
}

void UpdateSqlAlarmRuleRequestBody::unsetsqlRequests()
{
    sqlRequestsIsSet_ = false;
}

CreateSqlAlarmRuleFrequency UpdateSqlAlarmRuleRequestBody::getFrequency() const
{
    return frequency_;
}

void UpdateSqlAlarmRuleRequestBody::setFrequency(const CreateSqlAlarmRuleFrequency& value)
{
    frequency_ = value;
    frequencyIsSet_ = true;
}

bool UpdateSqlAlarmRuleRequestBody::frequencyIsSet() const
{
    return frequencyIsSet_;
}

void UpdateSqlAlarmRuleRequestBody::unsetfrequency()
{
    frequencyIsSet_ = false;
}

std::string UpdateSqlAlarmRuleRequestBody::getConditionExpression() const
{
    return conditionExpression_;
}

void UpdateSqlAlarmRuleRequestBody::setConditionExpression(const std::string& value)
{
    conditionExpression_ = value;
    conditionExpressionIsSet_ = true;
}

bool UpdateSqlAlarmRuleRequestBody::conditionExpressionIsSet() const
{
    return conditionExpressionIsSet_;
}

void UpdateSqlAlarmRuleRequestBody::unsetconditionExpression()
{
    conditionExpressionIsSet_ = false;
}

std::string UpdateSqlAlarmRuleRequestBody::getSqlAlarmLevel() const
{
    return sqlAlarmLevel_;
}

void UpdateSqlAlarmRuleRequestBody::setSqlAlarmLevel(const std::string& value)
{
    sqlAlarmLevel_ = value;
    sqlAlarmLevelIsSet_ = true;
}

bool UpdateSqlAlarmRuleRequestBody::sqlAlarmLevelIsSet() const
{
    return sqlAlarmLevelIsSet_;
}

void UpdateSqlAlarmRuleRequestBody::unsetsqlAlarmLevel()
{
    sqlAlarmLevelIsSet_ = false;
}

bool UpdateSqlAlarmRuleRequestBody::isSqlAlarmSend() const
{
    return sqlAlarmSend_;
}

void UpdateSqlAlarmRuleRequestBody::setSqlAlarmSend(bool value)
{
    sqlAlarmSend_ = value;
    sqlAlarmSendIsSet_ = true;
}

bool UpdateSqlAlarmRuleRequestBody::sqlAlarmSendIsSet() const
{
    return sqlAlarmSendIsSet_;
}

void UpdateSqlAlarmRuleRequestBody::unsetsqlAlarmSend()
{
    sqlAlarmSendIsSet_ = false;
}

int32_t UpdateSqlAlarmRuleRequestBody::getSqlAlarmSendCode() const
{
    return sqlAlarmSendCode_;
}

void UpdateSqlAlarmRuleRequestBody::setSqlAlarmSendCode(int32_t value)
{
    sqlAlarmSendCode_ = value;
    sqlAlarmSendCodeIsSet_ = true;
}

bool UpdateSqlAlarmRuleRequestBody::sqlAlarmSendCodeIsSet() const
{
    return sqlAlarmSendCodeIsSet_;
}

void UpdateSqlAlarmRuleRequestBody::unsetsqlAlarmSendCode()
{
    sqlAlarmSendCodeIsSet_ = false;
}

std::string UpdateSqlAlarmRuleRequestBody::getDomainId() const
{
    return domainId_;
}

void UpdateSqlAlarmRuleRequestBody::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool UpdateSqlAlarmRuleRequestBody::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void UpdateSqlAlarmRuleRequestBody::unsetdomainId()
{
    domainIdIsSet_ = false;
}

SqlNotificationSaveRule UpdateSqlAlarmRuleRequestBody::getNotificationSaveRule() const
{
    return notificationSaveRule_;
}

void UpdateSqlAlarmRuleRequestBody::setNotificationSaveRule(const SqlNotificationSaveRule& value)
{
    notificationSaveRule_ = value;
    notificationSaveRuleIsSet_ = true;
}

bool UpdateSqlAlarmRuleRequestBody::notificationSaveRuleIsSet() const
{
    return notificationSaveRuleIsSet_;
}

void UpdateSqlAlarmRuleRequestBody::unsetnotificationSaveRule()
{
    notificationSaveRuleIsSet_ = false;
}

int32_t UpdateSqlAlarmRuleRequestBody::getTriggerConditionCount() const
{
    return triggerConditionCount_;
}

void UpdateSqlAlarmRuleRequestBody::setTriggerConditionCount(int32_t value)
{
    triggerConditionCount_ = value;
    triggerConditionCountIsSet_ = true;
}

bool UpdateSqlAlarmRuleRequestBody::triggerConditionCountIsSet() const
{
    return triggerConditionCountIsSet_;
}

void UpdateSqlAlarmRuleRequestBody::unsettriggerConditionCount()
{
    triggerConditionCountIsSet_ = false;
}

int32_t UpdateSqlAlarmRuleRequestBody::getTriggerConditionFrequency() const
{
    return triggerConditionFrequency_;
}

void UpdateSqlAlarmRuleRequestBody::setTriggerConditionFrequency(int32_t value)
{
    triggerConditionFrequency_ = value;
    triggerConditionFrequencyIsSet_ = true;
}

bool UpdateSqlAlarmRuleRequestBody::triggerConditionFrequencyIsSet() const
{
    return triggerConditionFrequencyIsSet_;
}

void UpdateSqlAlarmRuleRequestBody::unsettriggerConditionFrequency()
{
    triggerConditionFrequencyIsSet_ = false;
}

bool UpdateSqlAlarmRuleRequestBody::isWhetherRecoveryPolicy() const
{
    return whetherRecoveryPolicy_;
}

void UpdateSqlAlarmRuleRequestBody::setWhetherRecoveryPolicy(bool value)
{
    whetherRecoveryPolicy_ = value;
    whetherRecoveryPolicyIsSet_ = true;
}

bool UpdateSqlAlarmRuleRequestBody::whetherRecoveryPolicyIsSet() const
{
    return whetherRecoveryPolicyIsSet_;
}

void UpdateSqlAlarmRuleRequestBody::unsetwhetherRecoveryPolicy()
{
    whetherRecoveryPolicyIsSet_ = false;
}

int32_t UpdateSqlAlarmRuleRequestBody::getRecoveryPolicy() const
{
    return recoveryPolicy_;
}

void UpdateSqlAlarmRuleRequestBody::setRecoveryPolicy(int32_t value)
{
    recoveryPolicy_ = value;
    recoveryPolicyIsSet_ = true;
}

bool UpdateSqlAlarmRuleRequestBody::recoveryPolicyIsSet() const
{
    return recoveryPolicyIsSet_;
}

void UpdateSqlAlarmRuleRequestBody::unsetrecoveryPolicy()
{
    recoveryPolicyIsSet_ = false;
}

int32_t UpdateSqlAlarmRuleRequestBody::getNotificationFrequency() const
{
    return notificationFrequency_;
}

void UpdateSqlAlarmRuleRequestBody::setNotificationFrequency(int32_t value)
{
    notificationFrequency_ = value;
    notificationFrequencyIsSet_ = true;
}

bool UpdateSqlAlarmRuleRequestBody::notificationFrequencyIsSet() const
{
    return notificationFrequencyIsSet_;
}

void UpdateSqlAlarmRuleRequestBody::unsetnotificationFrequency()
{
    notificationFrequencyIsSet_ = false;
}

std::string UpdateSqlAlarmRuleRequestBody::getAlarmActionRuleName() const
{
    return alarmActionRuleName_;
}

void UpdateSqlAlarmRuleRequestBody::setAlarmActionRuleName(const std::string& value)
{
    alarmActionRuleName_ = value;
    alarmActionRuleNameIsSet_ = true;
}

bool UpdateSqlAlarmRuleRequestBody::alarmActionRuleNameIsSet() const
{
    return alarmActionRuleNameIsSet_;
}

void UpdateSqlAlarmRuleRequestBody::unsetalarmActionRuleName()
{
    alarmActionRuleNameIsSet_ = false;
}

}
}
}
}
}


