

#include "huaweicloud/drs/v5/model/QueryMetricResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




QueryMetricResult::QueryMetricResult()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
    timeStampIsSet_ = false;
    cpuUtil_ = "";
    cpuUtilIsSet_ = false;
    memUtil_ = "";
    memUtilIsSet_ = false;
    networkIncomingBytesRate_ = "";
    networkIncomingBytesRateIsSet_ = false;
    networkOutgoingBytesRate_ = "";
    networkOutgoingBytesRateIsSet_ = false;
    diskReadBytesRate_ = "";
    diskReadBytesRateIsSet_ = false;
    diskWriteBytesRate_ = "";
    diskWriteBytesRateIsSet_ = false;
    applyRowsRate_ = "";
    applyRowsRateIsSet_ = false;
    applyTransactionsRate_ = "";
    applyTransactionsRateIsSet_ = false;
    applyDdlRate_ = "";
    applyDdlRateIsSet_ = false;
    applyAverageExecuteTime_ = "";
    applyAverageExecuteTimeIsSet_ = false;
    applyAverageCommitTime_ = "";
    applyAverageCommitTimeIsSet_ = false;
    applyCurrentState_ = "";
    applyCurrentStateIsSet_ = false;
}

QueryMetricResult::~QueryMetricResult() = default;

void QueryMetricResult::validate()
{
}

web::json::value QueryMetricResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(timeStampIsSet_) {
        val[utility::conversions::to_string_t("time_stamp")] = ModelBase::toJson(timeStamp_);
    }
    if(cpuUtilIsSet_) {
        val[utility::conversions::to_string_t("cpu_util")] = ModelBase::toJson(cpuUtil_);
    }
    if(memUtilIsSet_) {
        val[utility::conversions::to_string_t("mem_util")] = ModelBase::toJson(memUtil_);
    }
    if(networkIncomingBytesRateIsSet_) {
        val[utility::conversions::to_string_t("network_incoming_bytes_rate")] = ModelBase::toJson(networkIncomingBytesRate_);
    }
    if(networkOutgoingBytesRateIsSet_) {
        val[utility::conversions::to_string_t("network_outgoing_bytes_rate")] = ModelBase::toJson(networkOutgoingBytesRate_);
    }
    if(diskReadBytesRateIsSet_) {
        val[utility::conversions::to_string_t("disk_read_bytes_rate")] = ModelBase::toJson(diskReadBytesRate_);
    }
    if(diskWriteBytesRateIsSet_) {
        val[utility::conversions::to_string_t("disk_write_bytes_rate")] = ModelBase::toJson(diskWriteBytesRate_);
    }
    if(applyRowsRateIsSet_) {
        val[utility::conversions::to_string_t("apply_rows_rate")] = ModelBase::toJson(applyRowsRate_);
    }
    if(applyTransactionsRateIsSet_) {
        val[utility::conversions::to_string_t("apply_transactions_rate")] = ModelBase::toJson(applyTransactionsRate_);
    }
    if(applyDdlRateIsSet_) {
        val[utility::conversions::to_string_t("apply_ddl_rate")] = ModelBase::toJson(applyDdlRate_);
    }
    if(applyAverageExecuteTimeIsSet_) {
        val[utility::conversions::to_string_t("apply_average_execute_time")] = ModelBase::toJson(applyAverageExecuteTime_);
    }
    if(applyAverageCommitTimeIsSet_) {
        val[utility::conversions::to_string_t("apply_average_commit_time")] = ModelBase::toJson(applyAverageCommitTime_);
    }
    if(applyCurrentStateIsSet_) {
        val[utility::conversions::to_string_t("apply_current_state")] = ModelBase::toJson(applyCurrentState_);
    }

    return val;
}
bool QueryMetricResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("node_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("node_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("time_stamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time_stamp"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimeStamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cpu_util"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cpu_util"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCpuUtil(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mem_util"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mem_util"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMemUtil(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("network_incoming_bytes_rate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("network_incoming_bytes_rate"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNetworkIncomingBytesRate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("network_outgoing_bytes_rate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("network_outgoing_bytes_rate"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNetworkOutgoingBytesRate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("disk_read_bytes_rate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("disk_read_bytes_rate"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDiskReadBytesRate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("disk_write_bytes_rate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("disk_write_bytes_rate"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDiskWriteBytesRate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("apply_rows_rate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("apply_rows_rate"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplyRowsRate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("apply_transactions_rate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("apply_transactions_rate"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplyTransactionsRate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("apply_ddl_rate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("apply_ddl_rate"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplyDdlRate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("apply_average_execute_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("apply_average_execute_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplyAverageExecuteTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("apply_average_commit_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("apply_average_commit_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplyAverageCommitTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("apply_current_state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("apply_current_state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplyCurrentState(refVal);
        }
    }
    return ok;
}


std::string QueryMetricResult::getJobId() const
{
    return jobId_;
}

void QueryMetricResult::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool QueryMetricResult::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void QueryMetricResult::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string QueryMetricResult::getNodeId() const
{
    return nodeId_;
}

void QueryMetricResult::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool QueryMetricResult::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void QueryMetricResult::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

utility::datetime QueryMetricResult::getTimeStamp() const
{
    return timeStamp_;
}

void QueryMetricResult::setTimeStamp(const utility::datetime& value)
{
    timeStamp_ = value;
    timeStampIsSet_ = true;
}

bool QueryMetricResult::timeStampIsSet() const
{
    return timeStampIsSet_;
}

void QueryMetricResult::unsettimeStamp()
{
    timeStampIsSet_ = false;
}

std::string QueryMetricResult::getCpuUtil() const
{
    return cpuUtil_;
}

void QueryMetricResult::setCpuUtil(const std::string& value)
{
    cpuUtil_ = value;
    cpuUtilIsSet_ = true;
}

bool QueryMetricResult::cpuUtilIsSet() const
{
    return cpuUtilIsSet_;
}

void QueryMetricResult::unsetcpuUtil()
{
    cpuUtilIsSet_ = false;
}

std::string QueryMetricResult::getMemUtil() const
{
    return memUtil_;
}

void QueryMetricResult::setMemUtil(const std::string& value)
{
    memUtil_ = value;
    memUtilIsSet_ = true;
}

bool QueryMetricResult::memUtilIsSet() const
{
    return memUtilIsSet_;
}

void QueryMetricResult::unsetmemUtil()
{
    memUtilIsSet_ = false;
}

std::string QueryMetricResult::getNetworkIncomingBytesRate() const
{
    return networkIncomingBytesRate_;
}

void QueryMetricResult::setNetworkIncomingBytesRate(const std::string& value)
{
    networkIncomingBytesRate_ = value;
    networkIncomingBytesRateIsSet_ = true;
}

bool QueryMetricResult::networkIncomingBytesRateIsSet() const
{
    return networkIncomingBytesRateIsSet_;
}

void QueryMetricResult::unsetnetworkIncomingBytesRate()
{
    networkIncomingBytesRateIsSet_ = false;
}

std::string QueryMetricResult::getNetworkOutgoingBytesRate() const
{
    return networkOutgoingBytesRate_;
}

void QueryMetricResult::setNetworkOutgoingBytesRate(const std::string& value)
{
    networkOutgoingBytesRate_ = value;
    networkOutgoingBytesRateIsSet_ = true;
}

bool QueryMetricResult::networkOutgoingBytesRateIsSet() const
{
    return networkOutgoingBytesRateIsSet_;
}

void QueryMetricResult::unsetnetworkOutgoingBytesRate()
{
    networkOutgoingBytesRateIsSet_ = false;
}

std::string QueryMetricResult::getDiskReadBytesRate() const
{
    return diskReadBytesRate_;
}

void QueryMetricResult::setDiskReadBytesRate(const std::string& value)
{
    diskReadBytesRate_ = value;
    diskReadBytesRateIsSet_ = true;
}

bool QueryMetricResult::diskReadBytesRateIsSet() const
{
    return diskReadBytesRateIsSet_;
}

void QueryMetricResult::unsetdiskReadBytesRate()
{
    diskReadBytesRateIsSet_ = false;
}

std::string QueryMetricResult::getDiskWriteBytesRate() const
{
    return diskWriteBytesRate_;
}

void QueryMetricResult::setDiskWriteBytesRate(const std::string& value)
{
    diskWriteBytesRate_ = value;
    diskWriteBytesRateIsSet_ = true;
}

bool QueryMetricResult::diskWriteBytesRateIsSet() const
{
    return diskWriteBytesRateIsSet_;
}

void QueryMetricResult::unsetdiskWriteBytesRate()
{
    diskWriteBytesRateIsSet_ = false;
}

std::string QueryMetricResult::getApplyRowsRate() const
{
    return applyRowsRate_;
}

void QueryMetricResult::setApplyRowsRate(const std::string& value)
{
    applyRowsRate_ = value;
    applyRowsRateIsSet_ = true;
}

bool QueryMetricResult::applyRowsRateIsSet() const
{
    return applyRowsRateIsSet_;
}

void QueryMetricResult::unsetapplyRowsRate()
{
    applyRowsRateIsSet_ = false;
}

std::string QueryMetricResult::getApplyTransactionsRate() const
{
    return applyTransactionsRate_;
}

void QueryMetricResult::setApplyTransactionsRate(const std::string& value)
{
    applyTransactionsRate_ = value;
    applyTransactionsRateIsSet_ = true;
}

bool QueryMetricResult::applyTransactionsRateIsSet() const
{
    return applyTransactionsRateIsSet_;
}

void QueryMetricResult::unsetapplyTransactionsRate()
{
    applyTransactionsRateIsSet_ = false;
}

std::string QueryMetricResult::getApplyDdlRate() const
{
    return applyDdlRate_;
}

void QueryMetricResult::setApplyDdlRate(const std::string& value)
{
    applyDdlRate_ = value;
    applyDdlRateIsSet_ = true;
}

bool QueryMetricResult::applyDdlRateIsSet() const
{
    return applyDdlRateIsSet_;
}

void QueryMetricResult::unsetapplyDdlRate()
{
    applyDdlRateIsSet_ = false;
}

std::string QueryMetricResult::getApplyAverageExecuteTime() const
{
    return applyAverageExecuteTime_;
}

void QueryMetricResult::setApplyAverageExecuteTime(const std::string& value)
{
    applyAverageExecuteTime_ = value;
    applyAverageExecuteTimeIsSet_ = true;
}

bool QueryMetricResult::applyAverageExecuteTimeIsSet() const
{
    return applyAverageExecuteTimeIsSet_;
}

void QueryMetricResult::unsetapplyAverageExecuteTime()
{
    applyAverageExecuteTimeIsSet_ = false;
}

std::string QueryMetricResult::getApplyAverageCommitTime() const
{
    return applyAverageCommitTime_;
}

void QueryMetricResult::setApplyAverageCommitTime(const std::string& value)
{
    applyAverageCommitTime_ = value;
    applyAverageCommitTimeIsSet_ = true;
}

bool QueryMetricResult::applyAverageCommitTimeIsSet() const
{
    return applyAverageCommitTimeIsSet_;
}

void QueryMetricResult::unsetapplyAverageCommitTime()
{
    applyAverageCommitTimeIsSet_ = false;
}

std::string QueryMetricResult::getApplyCurrentState() const
{
    return applyCurrentState_;
}

void QueryMetricResult::setApplyCurrentState(const std::string& value)
{
    applyCurrentState_ = value;
    applyCurrentStateIsSet_ = true;
}

bool QueryMetricResult::applyCurrentStateIsSet() const
{
    return applyCurrentStateIsSet_;
}

void QueryMetricResult::unsetapplyCurrentState()
{
    applyCurrentStateIsSet_ = false;
}

}
}
}
}
}


