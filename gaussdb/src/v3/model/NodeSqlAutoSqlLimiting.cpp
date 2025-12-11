

#include "huaweicloud/gaussdb/v3/model/NodeSqlAutoSqlLimiting.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




NodeSqlAutoSqlLimiting::NodeSqlAutoSqlLimiting()
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
}

NodeSqlAutoSqlLimiting::~NodeSqlAutoSqlLimiting() = default;

void NodeSqlAutoSqlLimiting::validate()
{
}

web::json::value NodeSqlAutoSqlLimiting::toJson() const
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

    return val;
}
bool NodeSqlAutoSqlLimiting::fromJson(const web::json::value& val)
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
    return ok;
}


std::string NodeSqlAutoSqlLimiting::getNodeId() const
{
    return nodeId_;
}

void NodeSqlAutoSqlLimiting::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool NodeSqlAutoSqlLimiting::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void NodeSqlAutoSqlLimiting::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string NodeSqlAutoSqlLimiting::getStartTime() const
{
    return startTime_;
}

void NodeSqlAutoSqlLimiting::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool NodeSqlAutoSqlLimiting::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void NodeSqlAutoSqlLimiting::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string NodeSqlAutoSqlLimiting::getEndTime() const
{
    return endTime_;
}

void NodeSqlAutoSqlLimiting::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool NodeSqlAutoSqlLimiting::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void NodeSqlAutoSqlLimiting::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string NodeSqlAutoSqlLimiting::getCondition() const
{
    return condition_;
}

void NodeSqlAutoSqlLimiting::setCondition(const std::string& value)
{
    condition_ = value;
    conditionIsSet_ = true;
}

bool NodeSqlAutoSqlLimiting::conditionIsSet() const
{
    return conditionIsSet_;
}

void NodeSqlAutoSqlLimiting::unsetcondition()
{
    conditionIsSet_ = false;
}

int32_t NodeSqlAutoSqlLimiting::getCpuUsage() const
{
    return cpuUsage_;
}

void NodeSqlAutoSqlLimiting::setCpuUsage(int32_t value)
{
    cpuUsage_ = value;
    cpuUsageIsSet_ = true;
}

bool NodeSqlAutoSqlLimiting::cpuUsageIsSet() const
{
    return cpuUsageIsSet_;
}

void NodeSqlAutoSqlLimiting::unsetcpuUsage()
{
    cpuUsageIsSet_ = false;
}

int32_t NodeSqlAutoSqlLimiting::getActiveSessions() const
{
    return activeSessions_;
}

void NodeSqlAutoSqlLimiting::setActiveSessions(int32_t value)
{
    activeSessions_ = value;
    activeSessionsIsSet_ = true;
}

bool NodeSqlAutoSqlLimiting::activeSessionsIsSet() const
{
    return activeSessionsIsSet_;
}

void NodeSqlAutoSqlLimiting::unsetactiveSessions()
{
    activeSessionsIsSet_ = false;
}

int32_t NodeSqlAutoSqlLimiting::getClearTime() const
{
    return clearTime_;
}

void NodeSqlAutoSqlLimiting::setClearTime(int32_t value)
{
    clearTime_ = value;
    clearTimeIsSet_ = true;
}

bool NodeSqlAutoSqlLimiting::clearTimeIsSet() const
{
    return clearTimeIsSet_;
}

void NodeSqlAutoSqlLimiting::unsetclearTime()
{
    clearTimeIsSet_ = false;
}

int32_t NodeSqlAutoSqlLimiting::getDuration() const
{
    return duration_;
}

void NodeSqlAutoSqlLimiting::setDuration(int32_t value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool NodeSqlAutoSqlLimiting::durationIsSet() const
{
    return durationIsSet_;
}

void NodeSqlAutoSqlLimiting::unsetduration()
{
    durationIsSet_ = false;
}

int32_t NodeSqlAutoSqlLimiting::getMaxConcurrency() const
{
    return maxConcurrency_;
}

void NodeSqlAutoSqlLimiting::setMaxConcurrency(int32_t value)
{
    maxConcurrency_ = value;
    maxConcurrencyIsSet_ = true;
}

bool NodeSqlAutoSqlLimiting::maxConcurrencyIsSet() const
{
    return maxConcurrencyIsSet_;
}

void NodeSqlAutoSqlLimiting::unsetmaxConcurrency()
{
    maxConcurrencyIsSet_ = false;
}

}
}
}
}
}


