

#include "huaweicloud/lts/v2/model/SqlAlarmRuleRespList.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




SqlAlarmRuleRespList::SqlAlarmRuleRespList()
{
    sqlAlarmRuleName_ = "";
    sqlAlarmRuleNameIsSet_ = false;
    sqlAlarmRuleId_ = "";
    sqlAlarmRuleIdIsSet_ = false;
    sqlAlarmRuleDescription_ = "";
    sqlAlarmRuleDescriptionIsSet_ = false;
    sqlRequestsIsSet_ = false;
    frequencyIsSet_ = false;
    conditionExpression_ = "";
    conditionExpressionIsSet_ = false;
    topicsIsSet_ = false;
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
    templateName_ = "";
    templateNameIsSet_ = false;
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
}

SqlAlarmRuleRespList::~SqlAlarmRuleRespList() = default;

void SqlAlarmRuleRespList::validate()
{
}

web::json::value SqlAlarmRuleRespList::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sqlAlarmRuleNameIsSet_) {
        val[utility::conversions::to_string_t("sql_alarm_rule_name")] = ModelBase::toJson(sqlAlarmRuleName_);
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
    if(topicsIsSet_) {
        val[utility::conversions::to_string_t("topics")] = ModelBase::toJson(topics_);
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
    if(templateNameIsSet_) {
        val[utility::conversions::to_string_t("template_name")] = ModelBase::toJson(templateName_);
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

    return val;
}

bool SqlAlarmRuleRespList::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("topics"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("topics"));
        if(!fieldValue.is_null())
        {
            std::vector<Topics> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTopics(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("template_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateName(refVal);
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
    return ok;
}

std::string SqlAlarmRuleRespList::getSqlAlarmRuleName() const
{
    return sqlAlarmRuleName_;
}

void SqlAlarmRuleRespList::setSqlAlarmRuleName(const std::string& value)
{
    sqlAlarmRuleName_ = value;
    sqlAlarmRuleNameIsSet_ = true;
}

bool SqlAlarmRuleRespList::sqlAlarmRuleNameIsSet() const
{
    return sqlAlarmRuleNameIsSet_;
}

void SqlAlarmRuleRespList::unsetsqlAlarmRuleName()
{
    sqlAlarmRuleNameIsSet_ = false;
}

std::string SqlAlarmRuleRespList::getSqlAlarmRuleId() const
{
    return sqlAlarmRuleId_;
}

void SqlAlarmRuleRespList::setSqlAlarmRuleId(const std::string& value)
{
    sqlAlarmRuleId_ = value;
    sqlAlarmRuleIdIsSet_ = true;
}

bool SqlAlarmRuleRespList::sqlAlarmRuleIdIsSet() const
{
    return sqlAlarmRuleIdIsSet_;
}

void SqlAlarmRuleRespList::unsetsqlAlarmRuleId()
{
    sqlAlarmRuleIdIsSet_ = false;
}

std::string SqlAlarmRuleRespList::getSqlAlarmRuleDescription() const
{
    return sqlAlarmRuleDescription_;
}

void SqlAlarmRuleRespList::setSqlAlarmRuleDescription(const std::string& value)
{
    sqlAlarmRuleDescription_ = value;
    sqlAlarmRuleDescriptionIsSet_ = true;
}

bool SqlAlarmRuleRespList::sqlAlarmRuleDescriptionIsSet() const
{
    return sqlAlarmRuleDescriptionIsSet_;
}

void SqlAlarmRuleRespList::unsetsqlAlarmRuleDescription()
{
    sqlAlarmRuleDescriptionIsSet_ = false;
}

std::vector<SqlRequest>& SqlAlarmRuleRespList::getSqlRequests()
{
    return sqlRequests_;
}

void SqlAlarmRuleRespList::setSqlRequests(const std::vector<SqlRequest>& value)
{
    sqlRequests_ = value;
    sqlRequestsIsSet_ = true;
}

bool SqlAlarmRuleRespList::sqlRequestsIsSet() const
{
    return sqlRequestsIsSet_;
}

void SqlAlarmRuleRespList::unsetsqlRequests()
{
    sqlRequestsIsSet_ = false;
}

Frequency SqlAlarmRuleRespList::getFrequency() const
{
    return frequency_;
}

void SqlAlarmRuleRespList::setFrequency(const Frequency& value)
{
    frequency_ = value;
    frequencyIsSet_ = true;
}

bool SqlAlarmRuleRespList::frequencyIsSet() const
{
    return frequencyIsSet_;
}

void SqlAlarmRuleRespList::unsetfrequency()
{
    frequencyIsSet_ = false;
}

std::string SqlAlarmRuleRespList::getConditionExpression() const
{
    return conditionExpression_;
}

void SqlAlarmRuleRespList::setConditionExpression(const std::string& value)
{
    conditionExpression_ = value;
    conditionExpressionIsSet_ = true;
}

bool SqlAlarmRuleRespList::conditionExpressionIsSet() const
{
    return conditionExpressionIsSet_;
}

void SqlAlarmRuleRespList::unsetconditionExpression()
{
    conditionExpressionIsSet_ = false;
}

std::vector<Topics>& SqlAlarmRuleRespList::getTopics()
{
    return topics_;
}

void SqlAlarmRuleRespList::setTopics(const std::vector<Topics>& value)
{
    topics_ = value;
    topicsIsSet_ = true;
}

bool SqlAlarmRuleRespList::topicsIsSet() const
{
    return topicsIsSet_;
}

void SqlAlarmRuleRespList::unsettopics()
{
    topicsIsSet_ = false;
}

std::string SqlAlarmRuleRespList::getSqlAlarmLevel() const
{
    return sqlAlarmLevel_;
}

void SqlAlarmRuleRespList::setSqlAlarmLevel(const std::string& value)
{
    sqlAlarmLevel_ = value;
    sqlAlarmLevelIsSet_ = true;
}

bool SqlAlarmRuleRespList::sqlAlarmLevelIsSet() const
{
    return sqlAlarmLevelIsSet_;
}

void SqlAlarmRuleRespList::unsetsqlAlarmLevel()
{
    sqlAlarmLevelIsSet_ = false;
}

bool SqlAlarmRuleRespList::isSqlAlarmSend() const
{
    return sqlAlarmSend_;
}

void SqlAlarmRuleRespList::setSqlAlarmSend(bool value)
{
    sqlAlarmSend_ = value;
    sqlAlarmSendIsSet_ = true;
}

bool SqlAlarmRuleRespList::sqlAlarmSendIsSet() const
{
    return sqlAlarmSendIsSet_;
}

void SqlAlarmRuleRespList::unsetsqlAlarmSend()
{
    sqlAlarmSendIsSet_ = false;
}

std::string SqlAlarmRuleRespList::getDomainId() const
{
    return domainId_;
}

void SqlAlarmRuleRespList::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool SqlAlarmRuleRespList::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void SqlAlarmRuleRespList::unsetdomainId()
{
    domainIdIsSet_ = false;
}

int64_t SqlAlarmRuleRespList::getCreateTime() const
{
    return createTime_;
}

void SqlAlarmRuleRespList::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool SqlAlarmRuleRespList::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void SqlAlarmRuleRespList::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

int64_t SqlAlarmRuleRespList::getUpdateTime() const
{
    return updateTime_;
}

void SqlAlarmRuleRespList::setUpdateTime(int64_t value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool SqlAlarmRuleRespList::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void SqlAlarmRuleRespList::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string SqlAlarmRuleRespList::getTemplateName() const
{
    return templateName_;
}

void SqlAlarmRuleRespList::setTemplateName(const std::string& value)
{
    templateName_ = value;
    templateNameIsSet_ = true;
}

bool SqlAlarmRuleRespList::templateNameIsSet() const
{
    return templateNameIsSet_;
}

void SqlAlarmRuleRespList::unsettemplateName()
{
    templateNameIsSet_ = false;
}

std::string SqlAlarmRuleRespList::getStatus() const
{
    return status_;
}

void SqlAlarmRuleRespList::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool SqlAlarmRuleRespList::statusIsSet() const
{
    return statusIsSet_;
}

void SqlAlarmRuleRespList::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t SqlAlarmRuleRespList::getTriggerConditionCount() const
{
    return triggerConditionCount_;
}

void SqlAlarmRuleRespList::setTriggerConditionCount(int32_t value)
{
    triggerConditionCount_ = value;
    triggerConditionCountIsSet_ = true;
}

bool SqlAlarmRuleRespList::triggerConditionCountIsSet() const
{
    return triggerConditionCountIsSet_;
}

void SqlAlarmRuleRespList::unsettriggerConditionCount()
{
    triggerConditionCountIsSet_ = false;
}

int32_t SqlAlarmRuleRespList::getTriggerConditionFrequency() const
{
    return triggerConditionFrequency_;
}

void SqlAlarmRuleRespList::setTriggerConditionFrequency(int32_t value)
{
    triggerConditionFrequency_ = value;
    triggerConditionFrequencyIsSet_ = true;
}

bool SqlAlarmRuleRespList::triggerConditionFrequencyIsSet() const
{
    return triggerConditionFrequencyIsSet_;
}

void SqlAlarmRuleRespList::unsettriggerConditionFrequency()
{
    triggerConditionFrequencyIsSet_ = false;
}

bool SqlAlarmRuleRespList::isWhetherRecoveryPolicy() const
{
    return whetherRecoveryPolicy_;
}

void SqlAlarmRuleRespList::setWhetherRecoveryPolicy(bool value)
{
    whetherRecoveryPolicy_ = value;
    whetherRecoveryPolicyIsSet_ = true;
}

bool SqlAlarmRuleRespList::whetherRecoveryPolicyIsSet() const
{
    return whetherRecoveryPolicyIsSet_;
}

void SqlAlarmRuleRespList::unsetwhetherRecoveryPolicy()
{
    whetherRecoveryPolicyIsSet_ = false;
}

int32_t SqlAlarmRuleRespList::getRecoveryPolicy() const
{
    return recoveryPolicy_;
}

void SqlAlarmRuleRespList::setRecoveryPolicy(int32_t value)
{
    recoveryPolicy_ = value;
    recoveryPolicyIsSet_ = true;
}

bool SqlAlarmRuleRespList::recoveryPolicyIsSet() const
{
    return recoveryPolicyIsSet_;
}

void SqlAlarmRuleRespList::unsetrecoveryPolicy()
{
    recoveryPolicyIsSet_ = false;
}

}
}
}
}
}


