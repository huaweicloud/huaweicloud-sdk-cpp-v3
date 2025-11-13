

#include "huaweicloud/rds/v3/model/CollectSubscriptionMonitorResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CollectSubscriptionMonitorResponse::CollectSubscriptionMonitorResponse()
{
    status_ = "";
    statusIsSet_ = false;
    latency_ = 0;
    latencyIsSet_ = false;
    lastDistSync_ = "";
    lastDistSyncIsSet_ = false;
    agentNotRunning_ = 0;
    agentNotRunningIsSet_ = false;
    pendingCmdCount_ = 0;
    pendingCmdCountIsSet_ = false;
    estimatedProcessTime_ = 0;
    estimatedProcessTimeIsSet_ = false;
}

CollectSubscriptionMonitorResponse::~CollectSubscriptionMonitorResponse() = default;

void CollectSubscriptionMonitorResponse::validate()
{
}

web::json::value CollectSubscriptionMonitorResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(latencyIsSet_) {
        val[utility::conversions::to_string_t("latency")] = ModelBase::toJson(latency_);
    }
    if(lastDistSyncIsSet_) {
        val[utility::conversions::to_string_t("last_dist_sync")] = ModelBase::toJson(lastDistSync_);
    }
    if(agentNotRunningIsSet_) {
        val[utility::conversions::to_string_t("agent_not_running")] = ModelBase::toJson(agentNotRunning_);
    }
    if(pendingCmdCountIsSet_) {
        val[utility::conversions::to_string_t("pending_cmd_count")] = ModelBase::toJson(pendingCmdCount_);
    }
    if(estimatedProcessTimeIsSet_) {
        val[utility::conversions::to_string_t("estimated_process_time")] = ModelBase::toJson(estimatedProcessTime_);
    }

    return val;
}
bool CollectSubscriptionMonitorResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("latency"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("latency"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLatency(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_dist_sync"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_dist_sync"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastDistSync(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("agent_not_running"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agent_not_running"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAgentNotRunning(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pending_cmd_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pending_cmd_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPendingCmdCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("estimated_process_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("estimated_process_time"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEstimatedProcessTime(refVal);
        }
    }
    return ok;
}


std::string CollectSubscriptionMonitorResponse::getStatus() const
{
    return status_;
}

void CollectSubscriptionMonitorResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CollectSubscriptionMonitorResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CollectSubscriptionMonitorResponse::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t CollectSubscriptionMonitorResponse::getLatency() const
{
    return latency_;
}

void CollectSubscriptionMonitorResponse::setLatency(int32_t value)
{
    latency_ = value;
    latencyIsSet_ = true;
}

bool CollectSubscriptionMonitorResponse::latencyIsSet() const
{
    return latencyIsSet_;
}

void CollectSubscriptionMonitorResponse::unsetlatency()
{
    latencyIsSet_ = false;
}

std::string CollectSubscriptionMonitorResponse::getLastDistSync() const
{
    return lastDistSync_;
}

void CollectSubscriptionMonitorResponse::setLastDistSync(const std::string& value)
{
    lastDistSync_ = value;
    lastDistSyncIsSet_ = true;
}

bool CollectSubscriptionMonitorResponse::lastDistSyncIsSet() const
{
    return lastDistSyncIsSet_;
}

void CollectSubscriptionMonitorResponse::unsetlastDistSync()
{
    lastDistSyncIsSet_ = false;
}

int32_t CollectSubscriptionMonitorResponse::getAgentNotRunning() const
{
    return agentNotRunning_;
}

void CollectSubscriptionMonitorResponse::setAgentNotRunning(int32_t value)
{
    agentNotRunning_ = value;
    agentNotRunningIsSet_ = true;
}

bool CollectSubscriptionMonitorResponse::agentNotRunningIsSet() const
{
    return agentNotRunningIsSet_;
}

void CollectSubscriptionMonitorResponse::unsetagentNotRunning()
{
    agentNotRunningIsSet_ = false;
}

int32_t CollectSubscriptionMonitorResponse::getPendingCmdCount() const
{
    return pendingCmdCount_;
}

void CollectSubscriptionMonitorResponse::setPendingCmdCount(int32_t value)
{
    pendingCmdCount_ = value;
    pendingCmdCountIsSet_ = true;
}

bool CollectSubscriptionMonitorResponse::pendingCmdCountIsSet() const
{
    return pendingCmdCountIsSet_;
}

void CollectSubscriptionMonitorResponse::unsetpendingCmdCount()
{
    pendingCmdCountIsSet_ = false;
}

int32_t CollectSubscriptionMonitorResponse::getEstimatedProcessTime() const
{
    return estimatedProcessTime_;
}

void CollectSubscriptionMonitorResponse::setEstimatedProcessTime(int32_t value)
{
    estimatedProcessTime_ = value;
    estimatedProcessTimeIsSet_ = true;
}

bool CollectSubscriptionMonitorResponse::estimatedProcessTimeIsSet() const
{
    return estimatedProcessTimeIsSet_;
}

void CollectSubscriptionMonitorResponse::unsetestimatedProcessTime()
{
    estimatedProcessTimeIsSet_ = false;
}

}
}
}
}
}


