

#include "huaweicloud/gaussdbforopengauss/v3/model/WaitEventResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




WaitEventResult::WaitEventResult()
{
    sessionId_ = "";
    sessionIdIsSet_ = false;
    pid_ = "";
    pidIsSet_ = false;
    waitEvent_ = "";
    waitEventIsSet_ = false;
    waitStatus_ = "";
    waitStatusIsSet_ = false;
    databaseName_ = "";
    databaseNameIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    clientAddr_ = "";
    clientAddrIsSet_ = false;
    clientPort_ = "";
    clientPortIsSet_ = false;
    sessionTime_ = "";
    sessionTimeIsSet_ = false;
    xactStart_ = "";
    xactStartIsSet_ = false;
    transactionTime_ = "";
    transactionTimeIsSet_ = false;
    queryStart_ = "";
    queryStartIsSet_ = false;
    stateChange_ = "";
    stateChangeIsSet_ = false;
    queryTime_ = "";
    queryTimeIsSet_ = false;
    backendStart_ = "";
    backendStartIsSet_ = false;
    waiting_ = "";
    waitingIsSet_ = false;
    lockmode_ = "";
    lockmodeIsSet_ = false;
    blockSessionid_ = "";
    blockSessionidIsSet_ = false;
    blockCount_ = "";
    blockCountIsSet_ = false;
    uniqueSqlId_ = "";
    uniqueSqlIdIsSet_ = false;
    queryId_ = "";
    queryIdIsSet_ = false;
    query_ = "";
    queryIsSet_ = false;
    currentXid_ = "";
    currentXidIsSet_ = false;
    topXid_ = "";
    topXidIsSet_ = false;
    xlogQuantity_ = "";
    xlogQuantityIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    applicationName_ = "";
    applicationNameIsSet_ = false;
    connectionInfo_ = "";
    connectionInfoIsSet_ = false;
}

WaitEventResult::~WaitEventResult() = default;

void WaitEventResult::validate()
{
}

web::json::value WaitEventResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sessionIdIsSet_) {
        val[utility::conversions::to_string_t("session_id")] = ModelBase::toJson(sessionId_);
    }
    if(pidIsSet_) {
        val[utility::conversions::to_string_t("pid")] = ModelBase::toJson(pid_);
    }
    if(waitEventIsSet_) {
        val[utility::conversions::to_string_t("wait_event")] = ModelBase::toJson(waitEvent_);
    }
    if(waitStatusIsSet_) {
        val[utility::conversions::to_string_t("wait_status")] = ModelBase::toJson(waitStatus_);
    }
    if(databaseNameIsSet_) {
        val[utility::conversions::to_string_t("database_name")] = ModelBase::toJson(databaseName_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(clientAddrIsSet_) {
        val[utility::conversions::to_string_t("client_addr")] = ModelBase::toJson(clientAddr_);
    }
    if(clientPortIsSet_) {
        val[utility::conversions::to_string_t("client_port")] = ModelBase::toJson(clientPort_);
    }
    if(sessionTimeIsSet_) {
        val[utility::conversions::to_string_t("session_time")] = ModelBase::toJson(sessionTime_);
    }
    if(xactStartIsSet_) {
        val[utility::conversions::to_string_t("xact_start")] = ModelBase::toJson(xactStart_);
    }
    if(transactionTimeIsSet_) {
        val[utility::conversions::to_string_t("transaction_time")] = ModelBase::toJson(transactionTime_);
    }
    if(queryStartIsSet_) {
        val[utility::conversions::to_string_t("query_start")] = ModelBase::toJson(queryStart_);
    }
    if(stateChangeIsSet_) {
        val[utility::conversions::to_string_t("state_change")] = ModelBase::toJson(stateChange_);
    }
    if(queryTimeIsSet_) {
        val[utility::conversions::to_string_t("query_time")] = ModelBase::toJson(queryTime_);
    }
    if(backendStartIsSet_) {
        val[utility::conversions::to_string_t("backend_start")] = ModelBase::toJson(backendStart_);
    }
    if(waitingIsSet_) {
        val[utility::conversions::to_string_t("waiting")] = ModelBase::toJson(waiting_);
    }
    if(lockmodeIsSet_) {
        val[utility::conversions::to_string_t("lockmode")] = ModelBase::toJson(lockmode_);
    }
    if(blockSessionidIsSet_) {
        val[utility::conversions::to_string_t("block_sessionid")] = ModelBase::toJson(blockSessionid_);
    }
    if(blockCountIsSet_) {
        val[utility::conversions::to_string_t("block_count")] = ModelBase::toJson(blockCount_);
    }
    if(uniqueSqlIdIsSet_) {
        val[utility::conversions::to_string_t("unique_sql_id")] = ModelBase::toJson(uniqueSqlId_);
    }
    if(queryIdIsSet_) {
        val[utility::conversions::to_string_t("query_id")] = ModelBase::toJson(queryId_);
    }
    if(queryIsSet_) {
        val[utility::conversions::to_string_t("query")] = ModelBase::toJson(query_);
    }
    if(currentXidIsSet_) {
        val[utility::conversions::to_string_t("current_xid")] = ModelBase::toJson(currentXid_);
    }
    if(topXidIsSet_) {
        val[utility::conversions::to_string_t("top_xid")] = ModelBase::toJson(topXid_);
    }
    if(xlogQuantityIsSet_) {
        val[utility::conversions::to_string_t("xlog_quantity")] = ModelBase::toJson(xlogQuantity_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(applicationNameIsSet_) {
        val[utility::conversions::to_string_t("application_name")] = ModelBase::toJson(applicationName_);
    }
    if(connectionInfoIsSet_) {
        val[utility::conversions::to_string_t("connection_info")] = ModelBase::toJson(connectionInfo_);
    }

    return val;
}
bool WaitEventResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("session_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("session_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSessionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("wait_event"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("wait_event"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWaitEvent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("wait_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("wait_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWaitStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("client_addr"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("client_addr"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClientAddr(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("client_port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("client_port"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClientPort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("session_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("session_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSessionTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("xact_start"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("xact_start"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXactStart(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("transaction_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("transaction_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTransactionTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("query_start"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("query_start"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQueryStart(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("state_change"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state_change"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStateChange(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("query_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("query_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQueryTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("backend_start"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("backend_start"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackendStart(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("waiting"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("waiting"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWaiting(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lockmode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lockmode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLockmode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("block_sessionid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("block_sessionid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBlockSessionid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("block_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("block_count"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBlockCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("unique_sql_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("unique_sql_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUniqueSqlId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("query"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("query"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuery(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("current_xid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("current_xid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCurrentXid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("top_xid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("top_xid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTopXid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("xlog_quantity"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("xlog_quantity"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXlogQuantity(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("application_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("application_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplicationName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("connection_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("connection_info"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConnectionInfo(refVal);
        }
    }
    return ok;
}


std::string WaitEventResult::getSessionId() const
{
    return sessionId_;
}

void WaitEventResult::setSessionId(const std::string& value)
{
    sessionId_ = value;
    sessionIdIsSet_ = true;
}

bool WaitEventResult::sessionIdIsSet() const
{
    return sessionIdIsSet_;
}

void WaitEventResult::unsetsessionId()
{
    sessionIdIsSet_ = false;
}

std::string WaitEventResult::getPid() const
{
    return pid_;
}

void WaitEventResult::setPid(const std::string& value)
{
    pid_ = value;
    pidIsSet_ = true;
}

bool WaitEventResult::pidIsSet() const
{
    return pidIsSet_;
}

void WaitEventResult::unsetpid()
{
    pidIsSet_ = false;
}

std::string WaitEventResult::getWaitEvent() const
{
    return waitEvent_;
}

void WaitEventResult::setWaitEvent(const std::string& value)
{
    waitEvent_ = value;
    waitEventIsSet_ = true;
}

bool WaitEventResult::waitEventIsSet() const
{
    return waitEventIsSet_;
}

void WaitEventResult::unsetwaitEvent()
{
    waitEventIsSet_ = false;
}

std::string WaitEventResult::getWaitStatus() const
{
    return waitStatus_;
}

void WaitEventResult::setWaitStatus(const std::string& value)
{
    waitStatus_ = value;
    waitStatusIsSet_ = true;
}

bool WaitEventResult::waitStatusIsSet() const
{
    return waitStatusIsSet_;
}

void WaitEventResult::unsetwaitStatus()
{
    waitStatusIsSet_ = false;
}

std::string WaitEventResult::getDatabaseName() const
{
    return databaseName_;
}

void WaitEventResult::setDatabaseName(const std::string& value)
{
    databaseName_ = value;
    databaseNameIsSet_ = true;
}

bool WaitEventResult::databaseNameIsSet() const
{
    return databaseNameIsSet_;
}

void WaitEventResult::unsetdatabaseName()
{
    databaseNameIsSet_ = false;
}

std::string WaitEventResult::getUserName() const
{
    return userName_;
}

void WaitEventResult::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool WaitEventResult::userNameIsSet() const
{
    return userNameIsSet_;
}

void WaitEventResult::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string WaitEventResult::getClientAddr() const
{
    return clientAddr_;
}

void WaitEventResult::setClientAddr(const std::string& value)
{
    clientAddr_ = value;
    clientAddrIsSet_ = true;
}

bool WaitEventResult::clientAddrIsSet() const
{
    return clientAddrIsSet_;
}

void WaitEventResult::unsetclientAddr()
{
    clientAddrIsSet_ = false;
}

std::string WaitEventResult::getClientPort() const
{
    return clientPort_;
}

void WaitEventResult::setClientPort(const std::string& value)
{
    clientPort_ = value;
    clientPortIsSet_ = true;
}

bool WaitEventResult::clientPortIsSet() const
{
    return clientPortIsSet_;
}

void WaitEventResult::unsetclientPort()
{
    clientPortIsSet_ = false;
}

std::string WaitEventResult::getSessionTime() const
{
    return sessionTime_;
}

void WaitEventResult::setSessionTime(const std::string& value)
{
    sessionTime_ = value;
    sessionTimeIsSet_ = true;
}

bool WaitEventResult::sessionTimeIsSet() const
{
    return sessionTimeIsSet_;
}

void WaitEventResult::unsetsessionTime()
{
    sessionTimeIsSet_ = false;
}

std::string WaitEventResult::getXactStart() const
{
    return xactStart_;
}

void WaitEventResult::setXactStart(const std::string& value)
{
    xactStart_ = value;
    xactStartIsSet_ = true;
}

bool WaitEventResult::xactStartIsSet() const
{
    return xactStartIsSet_;
}

void WaitEventResult::unsetxactStart()
{
    xactStartIsSet_ = false;
}

std::string WaitEventResult::getTransactionTime() const
{
    return transactionTime_;
}

void WaitEventResult::setTransactionTime(const std::string& value)
{
    transactionTime_ = value;
    transactionTimeIsSet_ = true;
}

bool WaitEventResult::transactionTimeIsSet() const
{
    return transactionTimeIsSet_;
}

void WaitEventResult::unsettransactionTime()
{
    transactionTimeIsSet_ = false;
}

std::string WaitEventResult::getQueryStart() const
{
    return queryStart_;
}

void WaitEventResult::setQueryStart(const std::string& value)
{
    queryStart_ = value;
    queryStartIsSet_ = true;
}

bool WaitEventResult::queryStartIsSet() const
{
    return queryStartIsSet_;
}

void WaitEventResult::unsetqueryStart()
{
    queryStartIsSet_ = false;
}

std::string WaitEventResult::getStateChange() const
{
    return stateChange_;
}

void WaitEventResult::setStateChange(const std::string& value)
{
    stateChange_ = value;
    stateChangeIsSet_ = true;
}

bool WaitEventResult::stateChangeIsSet() const
{
    return stateChangeIsSet_;
}

void WaitEventResult::unsetstateChange()
{
    stateChangeIsSet_ = false;
}

std::string WaitEventResult::getQueryTime() const
{
    return queryTime_;
}

void WaitEventResult::setQueryTime(const std::string& value)
{
    queryTime_ = value;
    queryTimeIsSet_ = true;
}

bool WaitEventResult::queryTimeIsSet() const
{
    return queryTimeIsSet_;
}

void WaitEventResult::unsetqueryTime()
{
    queryTimeIsSet_ = false;
}

std::string WaitEventResult::getBackendStart() const
{
    return backendStart_;
}

void WaitEventResult::setBackendStart(const std::string& value)
{
    backendStart_ = value;
    backendStartIsSet_ = true;
}

bool WaitEventResult::backendStartIsSet() const
{
    return backendStartIsSet_;
}

void WaitEventResult::unsetbackendStart()
{
    backendStartIsSet_ = false;
}

std::string WaitEventResult::getWaiting() const
{
    return waiting_;
}

void WaitEventResult::setWaiting(const std::string& value)
{
    waiting_ = value;
    waitingIsSet_ = true;
}

bool WaitEventResult::waitingIsSet() const
{
    return waitingIsSet_;
}

void WaitEventResult::unsetwaiting()
{
    waitingIsSet_ = false;
}

std::string WaitEventResult::getLockmode() const
{
    return lockmode_;
}

void WaitEventResult::setLockmode(const std::string& value)
{
    lockmode_ = value;
    lockmodeIsSet_ = true;
}

bool WaitEventResult::lockmodeIsSet() const
{
    return lockmodeIsSet_;
}

void WaitEventResult::unsetlockmode()
{
    lockmodeIsSet_ = false;
}

std::string WaitEventResult::getBlockSessionid() const
{
    return blockSessionid_;
}

void WaitEventResult::setBlockSessionid(const std::string& value)
{
    blockSessionid_ = value;
    blockSessionidIsSet_ = true;
}

bool WaitEventResult::blockSessionidIsSet() const
{
    return blockSessionidIsSet_;
}

void WaitEventResult::unsetblockSessionid()
{
    blockSessionidIsSet_ = false;
}

std::string WaitEventResult::getBlockCount() const
{
    return blockCount_;
}

void WaitEventResult::setBlockCount(const std::string& value)
{
    blockCount_ = value;
    blockCountIsSet_ = true;
}

bool WaitEventResult::blockCountIsSet() const
{
    return blockCountIsSet_;
}

void WaitEventResult::unsetblockCount()
{
    blockCountIsSet_ = false;
}

std::string WaitEventResult::getUniqueSqlId() const
{
    return uniqueSqlId_;
}

void WaitEventResult::setUniqueSqlId(const std::string& value)
{
    uniqueSqlId_ = value;
    uniqueSqlIdIsSet_ = true;
}

bool WaitEventResult::uniqueSqlIdIsSet() const
{
    return uniqueSqlIdIsSet_;
}

void WaitEventResult::unsetuniqueSqlId()
{
    uniqueSqlIdIsSet_ = false;
}

std::string WaitEventResult::getQueryId() const
{
    return queryId_;
}

void WaitEventResult::setQueryId(const std::string& value)
{
    queryId_ = value;
    queryIdIsSet_ = true;
}

bool WaitEventResult::queryIdIsSet() const
{
    return queryIdIsSet_;
}

void WaitEventResult::unsetqueryId()
{
    queryIdIsSet_ = false;
}

std::string WaitEventResult::getQuery() const
{
    return query_;
}

void WaitEventResult::setQuery(const std::string& value)
{
    query_ = value;
    queryIsSet_ = true;
}

bool WaitEventResult::queryIsSet() const
{
    return queryIsSet_;
}

void WaitEventResult::unsetquery()
{
    queryIsSet_ = false;
}

std::string WaitEventResult::getCurrentXid() const
{
    return currentXid_;
}

void WaitEventResult::setCurrentXid(const std::string& value)
{
    currentXid_ = value;
    currentXidIsSet_ = true;
}

bool WaitEventResult::currentXidIsSet() const
{
    return currentXidIsSet_;
}

void WaitEventResult::unsetcurrentXid()
{
    currentXidIsSet_ = false;
}

std::string WaitEventResult::getTopXid() const
{
    return topXid_;
}

void WaitEventResult::setTopXid(const std::string& value)
{
    topXid_ = value;
    topXidIsSet_ = true;
}

bool WaitEventResult::topXidIsSet() const
{
    return topXidIsSet_;
}

void WaitEventResult::unsettopXid()
{
    topXidIsSet_ = false;
}

std::string WaitEventResult::getXlogQuantity() const
{
    return xlogQuantity_;
}

void WaitEventResult::setXlogQuantity(const std::string& value)
{
    xlogQuantity_ = value;
    xlogQuantityIsSet_ = true;
}

bool WaitEventResult::xlogQuantityIsSet() const
{
    return xlogQuantityIsSet_;
}

void WaitEventResult::unsetxlogQuantity()
{
    xlogQuantityIsSet_ = false;
}

std::string WaitEventResult::getState() const
{
    return state_;
}

void WaitEventResult::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool WaitEventResult::stateIsSet() const
{
    return stateIsSet_;
}

void WaitEventResult::unsetstate()
{
    stateIsSet_ = false;
}

std::string WaitEventResult::getApplicationName() const
{
    return applicationName_;
}

void WaitEventResult::setApplicationName(const std::string& value)
{
    applicationName_ = value;
    applicationNameIsSet_ = true;
}

bool WaitEventResult::applicationNameIsSet() const
{
    return applicationNameIsSet_;
}

void WaitEventResult::unsetapplicationName()
{
    applicationNameIsSet_ = false;
}

std::string WaitEventResult::getConnectionInfo() const
{
    return connectionInfo_;
}

void WaitEventResult::setConnectionInfo(const std::string& value)
{
    connectionInfo_ = value;
    connectionInfoIsSet_ = true;
}

bool WaitEventResult::connectionInfoIsSet() const
{
    return connectionInfoIsSet_;
}

void WaitEventResult::unsetconnectionInfo()
{
    connectionInfoIsSet_ = false;
}

}
}
}
}
}


