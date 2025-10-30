

#include "huaweicloud/lts/v2/model/Annotations.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




Annotations::Annotations()
{
    message_ = "";
    messageIsSet_ = false;
    logInfo_ = "";
    logInfoIsSet_ = false;
    currentValue_ = "";
    currentValueIsSet_ = false;
    oldAnnotations_ = "";
    oldAnnotationsIsSet_ = false;
    alarmActionRuleName_ = "";
    alarmActionRuleNameIsSet_ = false;
    alarmRuleAlias_ = "";
    alarmRuleAliasIsSet_ = false;
    alarmRuleUrl_ = "";
    alarmRuleUrlIsSet_ = false;
    alarmStatus_ = "";
    alarmStatusIsSet_ = false;
    conditionExpression_ = "";
    conditionExpressionIsSet_ = false;
    conditionExpressionWithValue_ = "";
    conditionExpressionWithValueIsSet_ = false;
    notificationFrequency_ = "";
    notificationFrequencyIsSet_ = false;
    recordId_ = "";
    recordIdIsSet_ = false;
    recoveryPolicy_ = false;
    recoveryPolicyIsSet_ = false;
    resultsIsSet_ = false;
    frequency_ = "";
    frequencyIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

Annotations::~Annotations() = default;

void Annotations::validate()
{
}

web::json::value Annotations::toJson() const
{
    web::json::value val = web::json::value::object();

    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }
    if(logInfoIsSet_) {
        val[utility::conversions::to_string_t("log_info")] = ModelBase::toJson(logInfo_);
    }
    if(currentValueIsSet_) {
        val[utility::conversions::to_string_t("current_value")] = ModelBase::toJson(currentValue_);
    }
    if(oldAnnotationsIsSet_) {
        val[utility::conversions::to_string_t("old_annotations")] = ModelBase::toJson(oldAnnotations_);
    }
    if(alarmActionRuleNameIsSet_) {
        val[utility::conversions::to_string_t("alarm_action_rule_name")] = ModelBase::toJson(alarmActionRuleName_);
    }
    if(alarmRuleAliasIsSet_) {
        val[utility::conversions::to_string_t("alarm_rule_alias")] = ModelBase::toJson(alarmRuleAlias_);
    }
    if(alarmRuleUrlIsSet_) {
        val[utility::conversions::to_string_t("alarm_rule_url")] = ModelBase::toJson(alarmRuleUrl_);
    }
    if(alarmStatusIsSet_) {
        val[utility::conversions::to_string_t("alarm_status")] = ModelBase::toJson(alarmStatus_);
    }
    if(conditionExpressionIsSet_) {
        val[utility::conversions::to_string_t("condition_expression")] = ModelBase::toJson(conditionExpression_);
    }
    if(conditionExpressionWithValueIsSet_) {
        val[utility::conversions::to_string_t("condition_expression_with_value")] = ModelBase::toJson(conditionExpressionWithValue_);
    }
    if(notificationFrequencyIsSet_) {
        val[utility::conversions::to_string_t("notification_frequency")] = ModelBase::toJson(notificationFrequency_);
    }
    if(recordIdIsSet_) {
        val[utility::conversions::to_string_t("record_id")] = ModelBase::toJson(recordId_);
    }
    if(recoveryPolicyIsSet_) {
        val[utility::conversions::to_string_t("recovery_policy")] = ModelBase::toJson(recoveryPolicy_);
    }
    if(resultsIsSet_) {
        val[utility::conversions::to_string_t("results")] = ModelBase::toJson(results_);
    }
    if(frequencyIsSet_) {
        val[utility::conversions::to_string_t("frequency")] = ModelBase::toJson(frequency_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool Annotations::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_info"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("current_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("current_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCurrentValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("old_annotations"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("old_annotations"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOldAnnotations(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("alarm_rule_alias"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alarm_rule_alias"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlarmRuleAlias(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alarm_rule_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alarm_rule_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlarmRuleUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alarm_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alarm_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlarmStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("condition_expression_with_value"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("condition_expression_with_value"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConditionExpressionWithValue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("notification_frequency"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("notification_frequency"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNotificationFrequency(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("record_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("record_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecordId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("recovery_policy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("recovery_policy"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecoveryPolicy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("results"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("results"));
        if(!fieldValue.is_null())
        {
            std::vector<Results> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResults(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("frequency"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("frequency"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFrequency(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}


std::string Annotations::getMessage() const
{
    return message_;
}

void Annotations::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool Annotations::messageIsSet() const
{
    return messageIsSet_;
}

void Annotations::unsetmessage()
{
    messageIsSet_ = false;
}

std::string Annotations::getLogInfo() const
{
    return logInfo_;
}

void Annotations::setLogInfo(const std::string& value)
{
    logInfo_ = value;
    logInfoIsSet_ = true;
}

bool Annotations::logInfoIsSet() const
{
    return logInfoIsSet_;
}

void Annotations::unsetlogInfo()
{
    logInfoIsSet_ = false;
}

std::string Annotations::getCurrentValue() const
{
    return currentValue_;
}

void Annotations::setCurrentValue(const std::string& value)
{
    currentValue_ = value;
    currentValueIsSet_ = true;
}

bool Annotations::currentValueIsSet() const
{
    return currentValueIsSet_;
}

void Annotations::unsetcurrentValue()
{
    currentValueIsSet_ = false;
}

std::string Annotations::getOldAnnotations() const
{
    return oldAnnotations_;
}

void Annotations::setOldAnnotations(const std::string& value)
{
    oldAnnotations_ = value;
    oldAnnotationsIsSet_ = true;
}

bool Annotations::oldAnnotationsIsSet() const
{
    return oldAnnotationsIsSet_;
}

void Annotations::unsetoldAnnotations()
{
    oldAnnotationsIsSet_ = false;
}

std::string Annotations::getAlarmActionRuleName() const
{
    return alarmActionRuleName_;
}

void Annotations::setAlarmActionRuleName(const std::string& value)
{
    alarmActionRuleName_ = value;
    alarmActionRuleNameIsSet_ = true;
}

bool Annotations::alarmActionRuleNameIsSet() const
{
    return alarmActionRuleNameIsSet_;
}

void Annotations::unsetalarmActionRuleName()
{
    alarmActionRuleNameIsSet_ = false;
}

std::string Annotations::getAlarmRuleAlias() const
{
    return alarmRuleAlias_;
}

void Annotations::setAlarmRuleAlias(const std::string& value)
{
    alarmRuleAlias_ = value;
    alarmRuleAliasIsSet_ = true;
}

bool Annotations::alarmRuleAliasIsSet() const
{
    return alarmRuleAliasIsSet_;
}

void Annotations::unsetalarmRuleAlias()
{
    alarmRuleAliasIsSet_ = false;
}

std::string Annotations::getAlarmRuleUrl() const
{
    return alarmRuleUrl_;
}

void Annotations::setAlarmRuleUrl(const std::string& value)
{
    alarmRuleUrl_ = value;
    alarmRuleUrlIsSet_ = true;
}

bool Annotations::alarmRuleUrlIsSet() const
{
    return alarmRuleUrlIsSet_;
}

void Annotations::unsetalarmRuleUrl()
{
    alarmRuleUrlIsSet_ = false;
}

std::string Annotations::getAlarmStatus() const
{
    return alarmStatus_;
}

void Annotations::setAlarmStatus(const std::string& value)
{
    alarmStatus_ = value;
    alarmStatusIsSet_ = true;
}

bool Annotations::alarmStatusIsSet() const
{
    return alarmStatusIsSet_;
}

void Annotations::unsetalarmStatus()
{
    alarmStatusIsSet_ = false;
}

std::string Annotations::getConditionExpression() const
{
    return conditionExpression_;
}

void Annotations::setConditionExpression(const std::string& value)
{
    conditionExpression_ = value;
    conditionExpressionIsSet_ = true;
}

bool Annotations::conditionExpressionIsSet() const
{
    return conditionExpressionIsSet_;
}

void Annotations::unsetconditionExpression()
{
    conditionExpressionIsSet_ = false;
}

std::string Annotations::getConditionExpressionWithValue() const
{
    return conditionExpressionWithValue_;
}

void Annotations::setConditionExpressionWithValue(const std::string& value)
{
    conditionExpressionWithValue_ = value;
    conditionExpressionWithValueIsSet_ = true;
}

bool Annotations::conditionExpressionWithValueIsSet() const
{
    return conditionExpressionWithValueIsSet_;
}

void Annotations::unsetconditionExpressionWithValue()
{
    conditionExpressionWithValueIsSet_ = false;
}

std::string Annotations::getNotificationFrequency() const
{
    return notificationFrequency_;
}

void Annotations::setNotificationFrequency(const std::string& value)
{
    notificationFrequency_ = value;
    notificationFrequencyIsSet_ = true;
}

bool Annotations::notificationFrequencyIsSet() const
{
    return notificationFrequencyIsSet_;
}

void Annotations::unsetnotificationFrequency()
{
    notificationFrequencyIsSet_ = false;
}

std::string Annotations::getRecordId() const
{
    return recordId_;
}

void Annotations::setRecordId(const std::string& value)
{
    recordId_ = value;
    recordIdIsSet_ = true;
}

bool Annotations::recordIdIsSet() const
{
    return recordIdIsSet_;
}

void Annotations::unsetrecordId()
{
    recordIdIsSet_ = false;
}

bool Annotations::isRecoveryPolicy() const
{
    return recoveryPolicy_;
}

void Annotations::setRecoveryPolicy(bool value)
{
    recoveryPolicy_ = value;
    recoveryPolicyIsSet_ = true;
}

bool Annotations::recoveryPolicyIsSet() const
{
    return recoveryPolicyIsSet_;
}

void Annotations::unsetrecoveryPolicy()
{
    recoveryPolicyIsSet_ = false;
}

std::vector<Results>& Annotations::getResults()
{
    return results_;
}

void Annotations::setResults(const std::vector<Results>& value)
{
    results_ = value;
    resultsIsSet_ = true;
}

bool Annotations::resultsIsSet() const
{
    return resultsIsSet_;
}

void Annotations::unsetresults()
{
    resultsIsSet_ = false;
}

std::string Annotations::getFrequency() const
{
    return frequency_;
}

void Annotations::setFrequency(const std::string& value)
{
    frequency_ = value;
    frequencyIsSet_ = true;
}

bool Annotations::frequencyIsSet() const
{
    return frequencyIsSet_;
}

void Annotations::unsetfrequency()
{
    frequencyIsSet_ = false;
}

std::string Annotations::getType() const
{
    return type_;
}

void Annotations::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool Annotations::typeIsSet() const
{
    return typeIsSet_;
}

void Annotations::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


