

#include "huaweicloud/rds/v3/model/Session.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




Session::Session()
{
    sampleTime_ = "";
    sampleTimeIsSet_ = false;
    blockedProcessId_ = "";
    blockedProcessIdIsSet_ = false;
    databaseOid_ = 0;
    databaseOidIsSet_ = false;
    databaseName_ = "";
    databaseNameIsSet_ = false;
    sessionId_ = 0;
    sessionIdIsSet_ = false;
    parallelLeaderId_ = 0;
    parallelLeaderIdIsSet_ = false;
    backendUserOid_ = 0;
    backendUserOidIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    appName_ = "";
    appNameIsSet_ = false;
    clientIpAddress_ = "";
    clientIpAddressIsSet_ = false;
    clientHostName_ = "";
    clientHostNameIsSet_ = false;
    clientPort_ = 0;
    clientPortIsSet_ = false;
    sessionStartTime_ = "";
    sessionStartTimeIsSet_ = false;
    transactionStartTime_ = "";
    transactionStartTimeIsSet_ = false;
    transactionExecutionTime_ = 0;
    transactionExecutionTimeIsSet_ = false;
    queryStartTime_ = "";
    queryStartTimeIsSet_ = false;
    stateChangeTime_ = "";
    stateChangeTimeIsSet_ = false;
    waitEventType_ = "";
    waitEventTypeIsSet_ = false;
    waitEventName_ = "";
    waitEventNameIsSet_ = false;
    sessionStatus_ = "";
    sessionStatusIsSet_ = false;
    backendXid_ = 0;
    backendXidIsSet_ = false;
    backendXmin_ = 0;
    backendXminIsSet_ = false;
    queryId_ = "";
    queryIdIsSet_ = false;
    sqlStatement_ = "";
    sqlStatementIsSet_ = false;
    processType_ = "";
    processTypeIsSet_ = false;
    memoryUsage_ = 0.0f;
    memoryUsageIsSet_ = false;
    processStatus_ = "";
    processStatusIsSet_ = false;
    cpuUsage_ = 0.0f;
    cpuUsageIsSet_ = false;
    ioWaitStatus_ = 0.0f;
    ioWaitStatusIsSet_ = false;
    diskReadRate_ = 0.0f;
    diskReadRateIsSet_ = false;
    diskWriteRate_ = 0.0f;
    diskWriteRateIsSet_ = false;
}

Session::~Session() = default;

void Session::validate()
{
}

web::json::value Session::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sampleTimeIsSet_) {
        val[utility::conversions::to_string_t("sample_time")] = ModelBase::toJson(sampleTime_);
    }
    if(blockedProcessIdIsSet_) {
        val[utility::conversions::to_string_t("blocked_process_id")] = ModelBase::toJson(blockedProcessId_);
    }
    if(databaseOidIsSet_) {
        val[utility::conversions::to_string_t("database_oid")] = ModelBase::toJson(databaseOid_);
    }
    if(databaseNameIsSet_) {
        val[utility::conversions::to_string_t("database_name")] = ModelBase::toJson(databaseName_);
    }
    if(sessionIdIsSet_) {
        val[utility::conversions::to_string_t("session_id")] = ModelBase::toJson(sessionId_);
    }
    if(parallelLeaderIdIsSet_) {
        val[utility::conversions::to_string_t("parallel_leader_id")] = ModelBase::toJson(parallelLeaderId_);
    }
    if(backendUserOidIsSet_) {
        val[utility::conversions::to_string_t("backend_user_oid")] = ModelBase::toJson(backendUserOid_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(appNameIsSet_) {
        val[utility::conversions::to_string_t("app_name")] = ModelBase::toJson(appName_);
    }
    if(clientIpAddressIsSet_) {
        val[utility::conversions::to_string_t("client_ip_address")] = ModelBase::toJson(clientIpAddress_);
    }
    if(clientHostNameIsSet_) {
        val[utility::conversions::to_string_t("client_host_name")] = ModelBase::toJson(clientHostName_);
    }
    if(clientPortIsSet_) {
        val[utility::conversions::to_string_t("client_port")] = ModelBase::toJson(clientPort_);
    }
    if(sessionStartTimeIsSet_) {
        val[utility::conversions::to_string_t("session_start_time")] = ModelBase::toJson(sessionStartTime_);
    }
    if(transactionStartTimeIsSet_) {
        val[utility::conversions::to_string_t("transaction_start_time")] = ModelBase::toJson(transactionStartTime_);
    }
    if(transactionExecutionTimeIsSet_) {
        val[utility::conversions::to_string_t("transaction_execution_time")] = ModelBase::toJson(transactionExecutionTime_);
    }
    if(queryStartTimeIsSet_) {
        val[utility::conversions::to_string_t("query_start_time")] = ModelBase::toJson(queryStartTime_);
    }
    if(stateChangeTimeIsSet_) {
        val[utility::conversions::to_string_t("state_change_time")] = ModelBase::toJson(stateChangeTime_);
    }
    if(waitEventTypeIsSet_) {
        val[utility::conversions::to_string_t("wait_event_type")] = ModelBase::toJson(waitEventType_);
    }
    if(waitEventNameIsSet_) {
        val[utility::conversions::to_string_t("wait_event_name")] = ModelBase::toJson(waitEventName_);
    }
    if(sessionStatusIsSet_) {
        val[utility::conversions::to_string_t("session_status")] = ModelBase::toJson(sessionStatus_);
    }
    if(backendXidIsSet_) {
        val[utility::conversions::to_string_t("backend_xid")] = ModelBase::toJson(backendXid_);
    }
    if(backendXminIsSet_) {
        val[utility::conversions::to_string_t("backend_xmin")] = ModelBase::toJson(backendXmin_);
    }
    if(queryIdIsSet_) {
        val[utility::conversions::to_string_t("query_id")] = ModelBase::toJson(queryId_);
    }
    if(sqlStatementIsSet_) {
        val[utility::conversions::to_string_t("sql_statement")] = ModelBase::toJson(sqlStatement_);
    }
    if(processTypeIsSet_) {
        val[utility::conversions::to_string_t("process_type")] = ModelBase::toJson(processType_);
    }
    if(memoryUsageIsSet_) {
        val[utility::conversions::to_string_t("memory_usage")] = ModelBase::toJson(memoryUsage_);
    }
    if(processStatusIsSet_) {
        val[utility::conversions::to_string_t("process_status")] = ModelBase::toJson(processStatus_);
    }
    if(cpuUsageIsSet_) {
        val[utility::conversions::to_string_t("cpu_usage")] = ModelBase::toJson(cpuUsage_);
    }
    if(ioWaitStatusIsSet_) {
        val[utility::conversions::to_string_t("io_wait_status")] = ModelBase::toJson(ioWaitStatus_);
    }
    if(diskReadRateIsSet_) {
        val[utility::conversions::to_string_t("disk_read_rate")] = ModelBase::toJson(diskReadRate_);
    }
    if(diskWriteRateIsSet_) {
        val[utility::conversions::to_string_t("disk_write_rate")] = ModelBase::toJson(diskWriteRate_);
    }

    return val;
}
bool Session::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("sample_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sample_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSampleTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("blocked_process_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("blocked_process_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBlockedProcessId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("database_oid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("database_oid"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabaseOid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("database_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("database_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabaseName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("session_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("session_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSessionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parallel_leader_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parallel_leader_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParallelLeaderId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("backend_user_oid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backend_user_oid"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackendUserOid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("app_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("app_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("client_ip_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("client_ip_address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClientIpAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("client_host_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("client_host_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClientHostName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("client_port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("client_port"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClientPort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("session_start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("session_start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSessionStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("transaction_start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("transaction_start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTransactionStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("transaction_execution_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("transaction_execution_time"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTransactionExecutionTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("query_start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("query_start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQueryStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("state_change_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state_change_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStateChangeTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("wait_event_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("wait_event_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWaitEventType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("wait_event_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("wait_event_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWaitEventName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("session_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("session_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSessionStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("backend_xid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backend_xid"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackendXid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("backend_xmin"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backend_xmin"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackendXmin(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("query_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("query_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQueryId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sql_statement"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_statement"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlStatement(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("process_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("process_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProcessType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("memory_usage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("memory_usage"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMemoryUsage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("process_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("process_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProcessStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cpu_usage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cpu_usage"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCpuUsage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("io_wait_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("io_wait_status"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIoWaitStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("disk_read_rate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("disk_read_rate"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDiskReadRate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("disk_write_rate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("disk_write_rate"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDiskWriteRate(refVal);
        }
    }
    return ok;
}


std::string Session::getSampleTime() const
{
    return sampleTime_;
}

void Session::setSampleTime(const std::string& value)
{
    sampleTime_ = value;
    sampleTimeIsSet_ = true;
}

bool Session::sampleTimeIsSet() const
{
    return sampleTimeIsSet_;
}

void Session::unsetsampleTime()
{
    sampleTimeIsSet_ = false;
}

std::string Session::getBlockedProcessId() const
{
    return blockedProcessId_;
}

void Session::setBlockedProcessId(const std::string& value)
{
    blockedProcessId_ = value;
    blockedProcessIdIsSet_ = true;
}

bool Session::blockedProcessIdIsSet() const
{
    return blockedProcessIdIsSet_;
}

void Session::unsetblockedProcessId()
{
    blockedProcessIdIsSet_ = false;
}

int32_t Session::getDatabaseOid() const
{
    return databaseOid_;
}

void Session::setDatabaseOid(int32_t value)
{
    databaseOid_ = value;
    databaseOidIsSet_ = true;
}

bool Session::databaseOidIsSet() const
{
    return databaseOidIsSet_;
}

void Session::unsetdatabaseOid()
{
    databaseOidIsSet_ = false;
}

std::string Session::getDatabaseName() const
{
    return databaseName_;
}

void Session::setDatabaseName(const std::string& value)
{
    databaseName_ = value;
    databaseNameIsSet_ = true;
}

bool Session::databaseNameIsSet() const
{
    return databaseNameIsSet_;
}

void Session::unsetdatabaseName()
{
    databaseNameIsSet_ = false;
}

int32_t Session::getSessionId() const
{
    return sessionId_;
}

void Session::setSessionId(int32_t value)
{
    sessionId_ = value;
    sessionIdIsSet_ = true;
}

bool Session::sessionIdIsSet() const
{
    return sessionIdIsSet_;
}

void Session::unsetsessionId()
{
    sessionIdIsSet_ = false;
}

int32_t Session::getParallelLeaderId() const
{
    return parallelLeaderId_;
}

void Session::setParallelLeaderId(int32_t value)
{
    parallelLeaderId_ = value;
    parallelLeaderIdIsSet_ = true;
}

bool Session::parallelLeaderIdIsSet() const
{
    return parallelLeaderIdIsSet_;
}

void Session::unsetparallelLeaderId()
{
    parallelLeaderIdIsSet_ = false;
}

int32_t Session::getBackendUserOid() const
{
    return backendUserOid_;
}

void Session::setBackendUserOid(int32_t value)
{
    backendUserOid_ = value;
    backendUserOidIsSet_ = true;
}

bool Session::backendUserOidIsSet() const
{
    return backendUserOidIsSet_;
}

void Session::unsetbackendUserOid()
{
    backendUserOidIsSet_ = false;
}

std::string Session::getUserName() const
{
    return userName_;
}

void Session::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool Session::userNameIsSet() const
{
    return userNameIsSet_;
}

void Session::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string Session::getAppName() const
{
    return appName_;
}

void Session::setAppName(const std::string& value)
{
    appName_ = value;
    appNameIsSet_ = true;
}

bool Session::appNameIsSet() const
{
    return appNameIsSet_;
}

void Session::unsetappName()
{
    appNameIsSet_ = false;
}

std::string Session::getClientIpAddress() const
{
    return clientIpAddress_;
}

void Session::setClientIpAddress(const std::string& value)
{
    clientIpAddress_ = value;
    clientIpAddressIsSet_ = true;
}

bool Session::clientIpAddressIsSet() const
{
    return clientIpAddressIsSet_;
}

void Session::unsetclientIpAddress()
{
    clientIpAddressIsSet_ = false;
}

std::string Session::getClientHostName() const
{
    return clientHostName_;
}

void Session::setClientHostName(const std::string& value)
{
    clientHostName_ = value;
    clientHostNameIsSet_ = true;
}

bool Session::clientHostNameIsSet() const
{
    return clientHostNameIsSet_;
}

void Session::unsetclientHostName()
{
    clientHostNameIsSet_ = false;
}

int32_t Session::getClientPort() const
{
    return clientPort_;
}

void Session::setClientPort(int32_t value)
{
    clientPort_ = value;
    clientPortIsSet_ = true;
}

bool Session::clientPortIsSet() const
{
    return clientPortIsSet_;
}

void Session::unsetclientPort()
{
    clientPortIsSet_ = false;
}

std::string Session::getSessionStartTime() const
{
    return sessionStartTime_;
}

void Session::setSessionStartTime(const std::string& value)
{
    sessionStartTime_ = value;
    sessionStartTimeIsSet_ = true;
}

bool Session::sessionStartTimeIsSet() const
{
    return sessionStartTimeIsSet_;
}

void Session::unsetsessionStartTime()
{
    sessionStartTimeIsSet_ = false;
}

std::string Session::getTransactionStartTime() const
{
    return transactionStartTime_;
}

void Session::setTransactionStartTime(const std::string& value)
{
    transactionStartTime_ = value;
    transactionStartTimeIsSet_ = true;
}

bool Session::transactionStartTimeIsSet() const
{
    return transactionStartTimeIsSet_;
}

void Session::unsettransactionStartTime()
{
    transactionStartTimeIsSet_ = false;
}

int32_t Session::getTransactionExecutionTime() const
{
    return transactionExecutionTime_;
}

void Session::setTransactionExecutionTime(int32_t value)
{
    transactionExecutionTime_ = value;
    transactionExecutionTimeIsSet_ = true;
}

bool Session::transactionExecutionTimeIsSet() const
{
    return transactionExecutionTimeIsSet_;
}

void Session::unsettransactionExecutionTime()
{
    transactionExecutionTimeIsSet_ = false;
}

std::string Session::getQueryStartTime() const
{
    return queryStartTime_;
}

void Session::setQueryStartTime(const std::string& value)
{
    queryStartTime_ = value;
    queryStartTimeIsSet_ = true;
}

bool Session::queryStartTimeIsSet() const
{
    return queryStartTimeIsSet_;
}

void Session::unsetqueryStartTime()
{
    queryStartTimeIsSet_ = false;
}

std::string Session::getStateChangeTime() const
{
    return stateChangeTime_;
}

void Session::setStateChangeTime(const std::string& value)
{
    stateChangeTime_ = value;
    stateChangeTimeIsSet_ = true;
}

bool Session::stateChangeTimeIsSet() const
{
    return stateChangeTimeIsSet_;
}

void Session::unsetstateChangeTime()
{
    stateChangeTimeIsSet_ = false;
}

std::string Session::getWaitEventType() const
{
    return waitEventType_;
}

void Session::setWaitEventType(const std::string& value)
{
    waitEventType_ = value;
    waitEventTypeIsSet_ = true;
}

bool Session::waitEventTypeIsSet() const
{
    return waitEventTypeIsSet_;
}

void Session::unsetwaitEventType()
{
    waitEventTypeIsSet_ = false;
}

std::string Session::getWaitEventName() const
{
    return waitEventName_;
}

void Session::setWaitEventName(const std::string& value)
{
    waitEventName_ = value;
    waitEventNameIsSet_ = true;
}

bool Session::waitEventNameIsSet() const
{
    return waitEventNameIsSet_;
}

void Session::unsetwaitEventName()
{
    waitEventNameIsSet_ = false;
}

std::string Session::getSessionStatus() const
{
    return sessionStatus_;
}

void Session::setSessionStatus(const std::string& value)
{
    sessionStatus_ = value;
    sessionStatusIsSet_ = true;
}

bool Session::sessionStatusIsSet() const
{
    return sessionStatusIsSet_;
}

void Session::unsetsessionStatus()
{
    sessionStatusIsSet_ = false;
}

int32_t Session::getBackendXid() const
{
    return backendXid_;
}

void Session::setBackendXid(int32_t value)
{
    backendXid_ = value;
    backendXidIsSet_ = true;
}

bool Session::backendXidIsSet() const
{
    return backendXidIsSet_;
}

void Session::unsetbackendXid()
{
    backendXidIsSet_ = false;
}

int32_t Session::getBackendXmin() const
{
    return backendXmin_;
}

void Session::setBackendXmin(int32_t value)
{
    backendXmin_ = value;
    backendXminIsSet_ = true;
}

bool Session::backendXminIsSet() const
{
    return backendXminIsSet_;
}

void Session::unsetbackendXmin()
{
    backendXminIsSet_ = false;
}

std::string Session::getQueryId() const
{
    return queryId_;
}

void Session::setQueryId(const std::string& value)
{
    queryId_ = value;
    queryIdIsSet_ = true;
}

bool Session::queryIdIsSet() const
{
    return queryIdIsSet_;
}

void Session::unsetqueryId()
{
    queryIdIsSet_ = false;
}

std::string Session::getSqlStatement() const
{
    return sqlStatement_;
}

void Session::setSqlStatement(const std::string& value)
{
    sqlStatement_ = value;
    sqlStatementIsSet_ = true;
}

bool Session::sqlStatementIsSet() const
{
    return sqlStatementIsSet_;
}

void Session::unsetsqlStatement()
{
    sqlStatementIsSet_ = false;
}

std::string Session::getProcessType() const
{
    return processType_;
}

void Session::setProcessType(const std::string& value)
{
    processType_ = value;
    processTypeIsSet_ = true;
}

bool Session::processTypeIsSet() const
{
    return processTypeIsSet_;
}

void Session::unsetprocessType()
{
    processTypeIsSet_ = false;
}

float Session::getMemoryUsage() const
{
    return memoryUsage_;
}

void Session::setMemoryUsage(float value)
{
    memoryUsage_ = value;
    memoryUsageIsSet_ = true;
}

bool Session::memoryUsageIsSet() const
{
    return memoryUsageIsSet_;
}

void Session::unsetmemoryUsage()
{
    memoryUsageIsSet_ = false;
}

std::string Session::getProcessStatus() const
{
    return processStatus_;
}

void Session::setProcessStatus(const std::string& value)
{
    processStatus_ = value;
    processStatusIsSet_ = true;
}

bool Session::processStatusIsSet() const
{
    return processStatusIsSet_;
}

void Session::unsetprocessStatus()
{
    processStatusIsSet_ = false;
}

float Session::getCpuUsage() const
{
    return cpuUsage_;
}

void Session::setCpuUsage(float value)
{
    cpuUsage_ = value;
    cpuUsageIsSet_ = true;
}

bool Session::cpuUsageIsSet() const
{
    return cpuUsageIsSet_;
}

void Session::unsetcpuUsage()
{
    cpuUsageIsSet_ = false;
}

float Session::getIoWaitStatus() const
{
    return ioWaitStatus_;
}

void Session::setIoWaitStatus(float value)
{
    ioWaitStatus_ = value;
    ioWaitStatusIsSet_ = true;
}

bool Session::ioWaitStatusIsSet() const
{
    return ioWaitStatusIsSet_;
}

void Session::unsetioWaitStatus()
{
    ioWaitStatusIsSet_ = false;
}

float Session::getDiskReadRate() const
{
    return diskReadRate_;
}

void Session::setDiskReadRate(float value)
{
    diskReadRate_ = value;
    diskReadRateIsSet_ = true;
}

bool Session::diskReadRateIsSet() const
{
    return diskReadRateIsSet_;
}

void Session::unsetdiskReadRate()
{
    diskReadRateIsSet_ = false;
}

float Session::getDiskWriteRate() const
{
    return diskWriteRate_;
}

void Session::setDiskWriteRate(float value)
{
    diskWriteRate_ = value;
    diskWriteRateIsSet_ = true;
}

bool Session::diskWriteRateIsSet() const
{
    return diskWriteRateIsSet_;
}

void Session::unsetdiskWriteRate()
{
    diskWriteRateIsSet_ = false;
}

}
}
}
}
}


