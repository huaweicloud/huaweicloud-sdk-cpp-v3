

#include "huaweicloud/gaussdb/v3/model/AutoSqlLimitingRule.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




AutoSqlLimitingRule::AutoSqlLimitingRule()
{
    nodeId_ = "";
    nodeIdIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    condition_ = "";
    conditionIsSet_ = false;
    cpuUsage_ = 0;
    cpuUsageIsSet_ = false;
    activeSessions_ = 0;
    activeSessionsIsSet_ = false;
    clearTime_ = 0;
    clearTimeIsSet_ = false;
    duration_ = 0;
    durationIsSet_ = false;
    maxConcurrency_ = 0;
    maxConcurrencyIsSet_ = false;
    retainSqlRule_ = false;
    retainSqlRuleIsSet_ = false;
}

AutoSqlLimitingRule::~AutoSqlLimitingRule() = default;

void AutoSqlLimitingRule::validate()
{
}

web::json::value AutoSqlLimitingRule::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(conditionIsSet_) {
        val[utility::conversions::to_string_t("condition")] = ModelBase::toJson(condition_);
    }
    if(cpuUsageIsSet_) {
        val[utility::conversions::to_string_t("cpu_usage")] = ModelBase::toJson(cpuUsage_);
    }
    if(activeSessionsIsSet_) {
        val[utility::conversions::to_string_t("active_sessions")] = ModelBase::toJson(activeSessions_);
    }
    if(clearTimeIsSet_) {
        val[utility::conversions::to_string_t("clear_time")] = ModelBase::toJson(clearTime_);
    }
    if(durationIsSet_) {
        val[utility::conversions::to_string_t("duration")] = ModelBase::toJson(duration_);
    }
    if(maxConcurrencyIsSet_) {
        val[utility::conversions::to_string_t("max_concurrency")] = ModelBase::toJson(maxConcurrency_);
    }
    if(retainSqlRuleIsSet_) {
        val[utility::conversions::to_string_t("retain_sql_rule")] = ModelBase::toJson(retainSqlRule_);
    }

    return val;
}
bool AutoSqlLimitingRule::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("node_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("condition"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("condition"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCondition(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cpu_usage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cpu_usage"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCpuUsage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("active_sessions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("active_sessions"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActiveSessions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("clear_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("clear_time"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClearTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("duration"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDuration(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("max_concurrency"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("max_concurrency"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxConcurrency(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("retain_sql_rule"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("retain_sql_rule"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRetainSqlRule(refVal);
        }
    }
    return ok;
}


std::string AutoSqlLimitingRule::getNodeId() const
{
    return nodeId_;
}

void AutoSqlLimitingRule::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool AutoSqlLimitingRule::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void AutoSqlLimitingRule::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string AutoSqlLimitingRule::getStartTime() const
{
    return startTime_;
}

void AutoSqlLimitingRule::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool AutoSqlLimitingRule::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void AutoSqlLimitingRule::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string AutoSqlLimitingRule::getEndTime() const
{
    return endTime_;
}

void AutoSqlLimitingRule::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool AutoSqlLimitingRule::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void AutoSqlLimitingRule::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string AutoSqlLimitingRule::getCondition() const
{
    return condition_;
}

void AutoSqlLimitingRule::setCondition(const std::string& value)
{
    condition_ = value;
    conditionIsSet_ = true;
}

bool AutoSqlLimitingRule::conditionIsSet() const
{
    return conditionIsSet_;
}

void AutoSqlLimitingRule::unsetcondition()
{
    conditionIsSet_ = false;
}

int32_t AutoSqlLimitingRule::getCpuUsage() const
{
    return cpuUsage_;
}

void AutoSqlLimitingRule::setCpuUsage(int32_t value)
{
    cpuUsage_ = value;
    cpuUsageIsSet_ = true;
}

bool AutoSqlLimitingRule::cpuUsageIsSet() const
{
    return cpuUsageIsSet_;
}

void AutoSqlLimitingRule::unsetcpuUsage()
{
    cpuUsageIsSet_ = false;
}

int32_t AutoSqlLimitingRule::getActiveSessions() const
{
    return activeSessions_;
}

void AutoSqlLimitingRule::setActiveSessions(int32_t value)
{
    activeSessions_ = value;
    activeSessionsIsSet_ = true;
}

bool AutoSqlLimitingRule::activeSessionsIsSet() const
{
    return activeSessionsIsSet_;
}

void AutoSqlLimitingRule::unsetactiveSessions()
{
    activeSessionsIsSet_ = false;
}

int32_t AutoSqlLimitingRule::getClearTime() const
{
    return clearTime_;
}

void AutoSqlLimitingRule::setClearTime(int32_t value)
{
    clearTime_ = value;
    clearTimeIsSet_ = true;
}

bool AutoSqlLimitingRule::clearTimeIsSet() const
{
    return clearTimeIsSet_;
}

void AutoSqlLimitingRule::unsetclearTime()
{
    clearTimeIsSet_ = false;
}

int32_t AutoSqlLimitingRule::getDuration() const
{
    return duration_;
}

void AutoSqlLimitingRule::setDuration(int32_t value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool AutoSqlLimitingRule::durationIsSet() const
{
    return durationIsSet_;
}

void AutoSqlLimitingRule::unsetduration()
{
    durationIsSet_ = false;
}

int32_t AutoSqlLimitingRule::getMaxConcurrency() const
{
    return maxConcurrency_;
}

void AutoSqlLimitingRule::setMaxConcurrency(int32_t value)
{
    maxConcurrency_ = value;
    maxConcurrencyIsSet_ = true;
}

bool AutoSqlLimitingRule::maxConcurrencyIsSet() const
{
    return maxConcurrencyIsSet_;
}

void AutoSqlLimitingRule::unsetmaxConcurrency()
{
    maxConcurrencyIsSet_ = false;
}

bool AutoSqlLimitingRule::isRetainSqlRule() const
{
    return retainSqlRule_;
}

void AutoSqlLimitingRule::setRetainSqlRule(bool value)
{
    retainSqlRule_ = value;
    retainSqlRuleIsSet_ = true;
}

bool AutoSqlLimitingRule::retainSqlRuleIsSet() const
{
    return retainSqlRuleIsSet_;
}

void AutoSqlLimitingRule::unsetretainSqlRule()
{
    retainSqlRuleIsSet_ = false;
}

}
}
}
}
}


