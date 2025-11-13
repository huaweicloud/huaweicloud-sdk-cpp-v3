

#include "huaweicloud/rds/v3/model/CollectPublicationMonitorResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




CollectPublicationMonitorResponse::CollectPublicationMonitorResponse()
{
    status_ = "";
    statusIsSet_ = false;
    worstLatency_ = 0;
    worstLatencyIsSet_ = false;
    bestLatency_ = 0;
    bestLatencyIsSet_ = false;
    averageLatency_ = 0;
    averageLatencyIsSet_ = false;
    lastDistSync_ = "";
    lastDistSyncIsSet_ = false;
    replicatedTransactions_ = 0;
    replicatedTransactionsIsSet_ = false;
    replicationRateTrans_ = 0.0;
    replicationRateTransIsSet_ = false;
}

CollectPublicationMonitorResponse::~CollectPublicationMonitorResponse() = default;

void CollectPublicationMonitorResponse::validate()
{
}

web::json::value CollectPublicationMonitorResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(worstLatencyIsSet_) {
        val[utility::conversions::to_string_t("worst_latency")] = ModelBase::toJson(worstLatency_);
    }
    if(bestLatencyIsSet_) {
        val[utility::conversions::to_string_t("best_latency")] = ModelBase::toJson(bestLatency_);
    }
    if(averageLatencyIsSet_) {
        val[utility::conversions::to_string_t("average_latency")] = ModelBase::toJson(averageLatency_);
    }
    if(lastDistSyncIsSet_) {
        val[utility::conversions::to_string_t("last_dist_sync")] = ModelBase::toJson(lastDistSync_);
    }
    if(replicatedTransactionsIsSet_) {
        val[utility::conversions::to_string_t("replicated_transactions")] = ModelBase::toJson(replicatedTransactions_);
    }
    if(replicationRateTransIsSet_) {
        val[utility::conversions::to_string_t("replication_rate_trans")] = ModelBase::toJson(replicationRateTrans_);
    }

    return val;
}
bool CollectPublicationMonitorResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("worst_latency"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("worst_latency"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorstLatency(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("best_latency"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("best_latency"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBestLatency(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("average_latency"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("average_latency"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAverageLatency(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("replicated_transactions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("replicated_transactions"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReplicatedTransactions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("replication_rate_trans"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("replication_rate_trans"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReplicationRateTrans(refVal);
        }
    }
    return ok;
}


std::string CollectPublicationMonitorResponse::getStatus() const
{
    return status_;
}

void CollectPublicationMonitorResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CollectPublicationMonitorResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CollectPublicationMonitorResponse::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t CollectPublicationMonitorResponse::getWorstLatency() const
{
    return worstLatency_;
}

void CollectPublicationMonitorResponse::setWorstLatency(int32_t value)
{
    worstLatency_ = value;
    worstLatencyIsSet_ = true;
}

bool CollectPublicationMonitorResponse::worstLatencyIsSet() const
{
    return worstLatencyIsSet_;
}

void CollectPublicationMonitorResponse::unsetworstLatency()
{
    worstLatencyIsSet_ = false;
}

int32_t CollectPublicationMonitorResponse::getBestLatency() const
{
    return bestLatency_;
}

void CollectPublicationMonitorResponse::setBestLatency(int32_t value)
{
    bestLatency_ = value;
    bestLatencyIsSet_ = true;
}

bool CollectPublicationMonitorResponse::bestLatencyIsSet() const
{
    return bestLatencyIsSet_;
}

void CollectPublicationMonitorResponse::unsetbestLatency()
{
    bestLatencyIsSet_ = false;
}

int32_t CollectPublicationMonitorResponse::getAverageLatency() const
{
    return averageLatency_;
}

void CollectPublicationMonitorResponse::setAverageLatency(int32_t value)
{
    averageLatency_ = value;
    averageLatencyIsSet_ = true;
}

bool CollectPublicationMonitorResponse::averageLatencyIsSet() const
{
    return averageLatencyIsSet_;
}

void CollectPublicationMonitorResponse::unsetaverageLatency()
{
    averageLatencyIsSet_ = false;
}

std::string CollectPublicationMonitorResponse::getLastDistSync() const
{
    return lastDistSync_;
}

void CollectPublicationMonitorResponse::setLastDistSync(const std::string& value)
{
    lastDistSync_ = value;
    lastDistSyncIsSet_ = true;
}

bool CollectPublicationMonitorResponse::lastDistSyncIsSet() const
{
    return lastDistSyncIsSet_;
}

void CollectPublicationMonitorResponse::unsetlastDistSync()
{
    lastDistSyncIsSet_ = false;
}

int32_t CollectPublicationMonitorResponse::getReplicatedTransactions() const
{
    return replicatedTransactions_;
}

void CollectPublicationMonitorResponse::setReplicatedTransactions(int32_t value)
{
    replicatedTransactions_ = value;
    replicatedTransactionsIsSet_ = true;
}

bool CollectPublicationMonitorResponse::replicatedTransactionsIsSet() const
{
    return replicatedTransactionsIsSet_;
}

void CollectPublicationMonitorResponse::unsetreplicatedTransactions()
{
    replicatedTransactionsIsSet_ = false;
}

double CollectPublicationMonitorResponse::getReplicationRateTrans() const
{
    return replicationRateTrans_;
}

void CollectPublicationMonitorResponse::setReplicationRateTrans(double value)
{
    replicationRateTrans_ = value;
    replicationRateTransIsSet_ = true;
}

bool CollectPublicationMonitorResponse::replicationRateTransIsSet() const
{
    return replicationRateTransIsSet_;
}

void CollectPublicationMonitorResponse::unsetreplicationRateTrans()
{
    replicationRateTransIsSet_ = false;
}

}
}
}
}
}


