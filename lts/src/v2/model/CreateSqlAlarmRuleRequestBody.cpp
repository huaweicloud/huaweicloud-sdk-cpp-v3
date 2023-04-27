

#include "huaweicloud/lts/v2/model/CreateSqlAlarmRuleRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




CreateSqlAlarmRuleRequestBody::CreateSqlAlarmRuleRequestBody()
{
    sqlAlarmRuleName_ = "";
    sqlAlarmRuleNameIsSet_ = false;
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

CreateSqlAlarmRuleRequestBody::~CreateSqlAlarmRuleRequestBody() = default;

void CreateSqlAlarmRuleRequestBody::validate()
{
}

web::json::value CreateSqlAlarmRuleRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sqlAlarmRuleNameIsSet_) {
        val[utility::conversions::to_string_t("sql_alarm_rule_name")] = ModelBase::toJson(sqlAlarmRuleName_);
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

bool CreateSqlAlarmRuleRequestBody::fromJson(const web::json::value& val)
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
            Frequency refVal;
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


std::string CreateSqlAlarmRuleRequestBody::getSqlAlarmRuleName() const
{
    return sqlAlarmRuleName_;
}

void CreateSqlAlarmRuleRequestBody::setSqlAlarmRuleName(const std::string& value)
{
    sqlAlarmRuleName_ = value;
    sqlAlarmRuleNameIsSet_ = true;
}

bool CreateSqlAlarmRuleRequestBody::sqlAlarmRuleNameIsSet() const
{
    return sqlAlarmRuleNameIsSet_;
}

void CreateSqlAlarmRuleRequestBody::unsetsqlAlarmRuleName()
{
    sqlAlarmRuleNameIsSet_ = false;
}

std::string CreateSqlAlarmRuleRequestBody::getSqlAlarmRuleDescription() const
{
    return sqlAlarmRuleDescription_;
}

void CreateSqlAlarmRuleRequestBody::setSqlAlarmRuleDescription(const std::string& value)
{
    sqlAlarmRuleDescription_ = value;
    sqlAlarmRuleDescriptionIsSet_ = true;
}

bool CreateSqlAlarmRuleRequestBody::sqlAlarmRuleDescriptionIsSet() const
{
    return sqlAlarmRuleDescriptionIsSet_;
}

void CreateSqlAlarmRuleRequestBody::unsetsqlAlarmRuleDescription()
{
    sqlAlarmRuleDescriptionIsSet_ = false;
}

std::vector<SqlRequest>& CreateSqlAlarmRuleRequestBody::getSqlRequests()
{
    return sqlRequests_;
}

void CreateSqlAlarmRuleRequestBody::setSqlRequests(const std::vector<SqlRequest>& value)
{
    sqlRequests_ = value;
    sqlRequestsIsSet_ = true;
}

bool CreateSqlAlarmRuleRequestBody::sqlRequestsIsSet() const
{
    return sqlRequestsIsSet_;
}

void CreateSqlAlarmRuleRequestBody::unsetsqlRequests()
{
    sqlRequestsIsSet_ = false;
}

Frequency CreateSqlAlarmRuleRequestBody::getFrequency() const
{
    return frequency_;
}

void CreateSqlAlarmRuleRequestBody::setFrequency(const Frequency& value)
{
    frequency_ = value;
    frequencyIsSet_ = true;
}

bool CreateSqlAlarmRuleRequestBody::frequencyIsSet() const
{
    return frequencyIsSet_;
}

void CreateSqlAlarmRuleRequestBody::unsetfrequency()
{
    frequencyIsSet_ = false;
}

std::string CreateSqlAlarmRuleRequestBody::getConditionExpression() const
{
    return conditionExpression_;
}

void CreateSqlAlarmRuleRequestBody::setConditionExpression(const std::string& value)
{
    conditionExpression_ = value;
    conditionExpressionIsSet_ = true;
}

bool CreateSqlAlarmRuleRequestBody::conditionExpressionIsSet() const
{
    return conditionExpressionIsSet_;
}

void CreateSqlAlarmRuleRequestBody::unsetconditionExpression()
{
    conditionExpressionIsSet_ = false;
}

std::string CreateSqlAlarmRuleRequestBody::getSqlAlarmLevel() const
{
    return sqlAlarmLevel_;
}

void CreateSqlAlarmRuleRequestBody::setSqlAlarmLevel(const std::string& value)
{
    sqlAlarmLevel_ = value;
    sqlAlarmLevelIsSet_ = true;
}

bool CreateSqlAlarmRuleRequestBody::sqlAlarmLevelIsSet() const
{
    return sqlAlarmLevelIsSet_;
}

void CreateSqlAlarmRuleRequestBody::unsetsqlAlarmLevel()
{
    sqlAlarmLevelIsSet_ = false;
}

bool CreateSqlAlarmRuleRequestBody::isSqlAlarmSend() const
{
    return sqlAlarmSend_;
}

void CreateSqlAlarmRuleRequestBody::setSqlAlarmSend(bool value)
{
    sqlAlarmSend_ = value;
    sqlAlarmSendIsSet_ = true;
}

bool CreateSqlAlarmRuleRequestBody::sqlAlarmSendIsSet() const
{
    return sqlAlarmSendIsSet_;
}

void CreateSqlAlarmRuleRequestBody::unsetsqlAlarmSend()
{
    sqlAlarmSendIsSet_ = false;
}

std::string CreateSqlAlarmRuleRequestBody::getDomainId() const
{
    return domainId_;
}

void CreateSqlAlarmRuleRequestBody::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool CreateSqlAlarmRuleRequestBody::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void CreateSqlAlarmRuleRequestBody::unsetdomainId()
{
    domainIdIsSet_ = false;
}

NotificationSaveRule CreateSqlAlarmRuleRequestBody::getNotificationSaveRule() const
{
    return notificationSaveRule_;
}

void CreateSqlAlarmRuleRequestBody::setNotificationSaveRule(const NotificationSaveRule& value)
{
    notificationSaveRule_ = value;
    notificationSaveRuleIsSet_ = true;
}

bool CreateSqlAlarmRuleRequestBody::notificationSaveRuleIsSet() const
{
    return notificationSaveRuleIsSet_;
}

void CreateSqlAlarmRuleRequestBody::unsetnotificationSaveRule()
{
    notificationSaveRuleIsSet_ = false;
}

int32_t CreateSqlAlarmRuleRequestBody::getTriggerConditionCount() const
{
    return triggerConditionCount_;
}

void CreateSqlAlarmRuleRequestBody::setTriggerConditionCount(int32_t value)
{
    triggerConditionCount_ = value;
    triggerConditionCountIsSet_ = true;
}

bool CreateSqlAlarmRuleRequestBody::triggerConditionCountIsSet() const
{
    return triggerConditionCountIsSet_;
}

void CreateSqlAlarmRuleRequestBody::unsettriggerConditionCount()
{
    triggerConditionCountIsSet_ = false;
}

int32_t CreateSqlAlarmRuleRequestBody::getTriggerConditionFrequency() const
{
    return triggerConditionFrequency_;
}

void CreateSqlAlarmRuleRequestBody::setTriggerConditionFrequency(int32_t value)
{
    triggerConditionFrequency_ = value;
    triggerConditionFrequencyIsSet_ = true;
}

bool CreateSqlAlarmRuleRequestBody::triggerConditionFrequencyIsSet() const
{
    return triggerConditionFrequencyIsSet_;
}

void CreateSqlAlarmRuleRequestBody::unsettriggerConditionFrequency()
{
    triggerConditionFrequencyIsSet_ = false;
}

bool CreateSqlAlarmRuleRequestBody::isWhetherRecoveryPolicy() const
{
    return whetherRecoveryPolicy_;
}

void CreateSqlAlarmRuleRequestBody::setWhetherRecoveryPolicy(bool value)
{
    whetherRecoveryPolicy_ = value;
    whetherRecoveryPolicyIsSet_ = true;
}

bool CreateSqlAlarmRuleRequestBody::whetherRecoveryPolicyIsSet() const
{
    return whetherRecoveryPolicyIsSet_;
}

void CreateSqlAlarmRuleRequestBody::unsetwhetherRecoveryPolicy()
{
    whetherRecoveryPolicyIsSet_ = false;
}

int32_t CreateSqlAlarmRuleRequestBody::getRecoveryPolicy() const
{
    return recoveryPolicy_;
}

void CreateSqlAlarmRuleRequestBody::setRecoveryPolicy(int32_t value)
{
    recoveryPolicy_ = value;
    recoveryPolicyIsSet_ = true;
}

bool CreateSqlAlarmRuleRequestBody::recoveryPolicyIsSet() const
{
    return recoveryPolicyIsSet_;
}

void CreateSqlAlarmRuleRequestBody::unsetrecoveryPolicy()
{
    recoveryPolicyIsSet_ = false;
}

}
}
}
}
}


