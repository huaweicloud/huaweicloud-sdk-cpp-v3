

#include "huaweicloud/gaussdbforopengauss/v3/model/RealTimeSessionResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




RealTimeSessionResult::RealTimeSessionResult()
{
    sessionId_ = "";
    sessionIdIsSet_ = false;
    pid_ = "";
    pidIsSet_ = false;
    uniqueSqlId_ = "";
    uniqueSqlIdIsSet_ = false;
    databaseName_ = "";
    databaseNameIsSet_ = false;
    clientIp_ = "";
    clientIpIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    wait_ = "";
    waitIsSet_ = false;
    blockSession_ = "";
    blockSessionIsSet_ = false;
    waitEvent_ = "";
    waitEventIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    queryRuntime_ = "";
    queryRuntimeIsSet_ = false;
    query_ = "";
    queryIsSet_ = false;
    backEndStart_ = 0;
    backEndStartIsSet_ = false;
    transactionStart_ = 0;
    transactionStartIsSet_ = false;
    queryStart_ = 0;
    queryStartIsSet_ = false;
    applicationName_ = "";
    applicationNameIsSet_ = false;
    execTime_ = "";
    execTimeIsSet_ = false;
    transNum_ = "";
    transNumIsSet_ = false;
    rollbackNum_ = "";
    rollbackNumIsSet_ = false;
    sqlNum_ = "";
    sqlNumIsSet_ = false;
}

RealTimeSessionResult::~RealTimeSessionResult() = default;

void RealTimeSessionResult::validate()
{
}

web::json::value RealTimeSessionResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sessionIdIsSet_) {
        val[utility::conversions::to_string_t("session_id")] = ModelBase::toJson(sessionId_);
    }
    if(pidIsSet_) {
        val[utility::conversions::to_string_t("pid")] = ModelBase::toJson(pid_);
    }
    if(uniqueSqlIdIsSet_) {
        val[utility::conversions::to_string_t("unique_sql_id")] = ModelBase::toJson(uniqueSqlId_);
    }
    if(databaseNameIsSet_) {
        val[utility::conversions::to_string_t("database_name")] = ModelBase::toJson(databaseName_);
    }
    if(clientIpIsSet_) {
        val[utility::conversions::to_string_t("client_ip")] = ModelBase::toJson(clientIp_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(waitIsSet_) {
        val[utility::conversions::to_string_t("wait")] = ModelBase::toJson(wait_);
    }
    if(blockSessionIsSet_) {
        val[utility::conversions::to_string_t("block_session")] = ModelBase::toJson(blockSession_);
    }
    if(waitEventIsSet_) {
        val[utility::conversions::to_string_t("wait_event")] = ModelBase::toJson(waitEvent_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(queryRuntimeIsSet_) {
        val[utility::conversions::to_string_t("query_runtime")] = ModelBase::toJson(queryRuntime_);
    }
    if(queryIsSet_) {
        val[utility::conversions::to_string_t("query")] = ModelBase::toJson(query_);
    }
    if(backEndStartIsSet_) {
        val[utility::conversions::to_string_t("back_end_start")] = ModelBase::toJson(backEndStart_);
    }
    if(transactionStartIsSet_) {
        val[utility::conversions::to_string_t("transaction_start")] = ModelBase::toJson(transactionStart_);
    }
    if(queryStartIsSet_) {
        val[utility::conversions::to_string_t("query_start")] = ModelBase::toJson(queryStart_);
    }
    if(applicationNameIsSet_) {
        val[utility::conversions::to_string_t("application_name")] = ModelBase::toJson(applicationName_);
    }
    if(execTimeIsSet_) {
        val[utility::conversions::to_string_t("exec_time")] = ModelBase::toJson(execTime_);
    }
    if(transNumIsSet_) {
        val[utility::conversions::to_string_t("trans_num")] = ModelBase::toJson(transNum_);
    }
    if(rollbackNumIsSet_) {
        val[utility::conversions::to_string_t("rollback_num")] = ModelBase::toJson(rollbackNum_);
    }
    if(sqlNumIsSet_) {
        val[utility::conversions::to_string_t("sql_num")] = ModelBase::toJson(sqlNum_);
    }

    return val;
}
bool RealTimeSessionResult::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("unique_sql_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("unique_sql_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUniqueSqlId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("client_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("client_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClientIp(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("wait"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("wait"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWait(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("block_session"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("block_session"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBlockSession(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("query_runtime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("query_runtime"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQueryRuntime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("back_end_start"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("back_end_start"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBackEndStart(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("transaction_start"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("transaction_start"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTransactionStart(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("query_start"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("query_start"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQueryStart(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("exec_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("exec_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("trans_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trans_num"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTransNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rollback_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rollback_num"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRollbackNum(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sql_num"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_num"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlNum(refVal);
        }
    }
    return ok;
}


std::string RealTimeSessionResult::getSessionId() const
{
    return sessionId_;
}

void RealTimeSessionResult::setSessionId(const std::string& value)
{
    sessionId_ = value;
    sessionIdIsSet_ = true;
}

bool RealTimeSessionResult::sessionIdIsSet() const
{
    return sessionIdIsSet_;
}

void RealTimeSessionResult::unsetsessionId()
{
    sessionIdIsSet_ = false;
}

std::string RealTimeSessionResult::getPid() const
{
    return pid_;
}

void RealTimeSessionResult::setPid(const std::string& value)
{
    pid_ = value;
    pidIsSet_ = true;
}

bool RealTimeSessionResult::pidIsSet() const
{
    return pidIsSet_;
}

void RealTimeSessionResult::unsetpid()
{
    pidIsSet_ = false;
}

std::string RealTimeSessionResult::getUniqueSqlId() const
{
    return uniqueSqlId_;
}

void RealTimeSessionResult::setUniqueSqlId(const std::string& value)
{
    uniqueSqlId_ = value;
    uniqueSqlIdIsSet_ = true;
}

bool RealTimeSessionResult::uniqueSqlIdIsSet() const
{
    return uniqueSqlIdIsSet_;
}

void RealTimeSessionResult::unsetuniqueSqlId()
{
    uniqueSqlIdIsSet_ = false;
}

std::string RealTimeSessionResult::getDatabaseName() const
{
    return databaseName_;
}

void RealTimeSessionResult::setDatabaseName(const std::string& value)
{
    databaseName_ = value;
    databaseNameIsSet_ = true;
}

bool RealTimeSessionResult::databaseNameIsSet() const
{
    return databaseNameIsSet_;
}

void RealTimeSessionResult::unsetdatabaseName()
{
    databaseNameIsSet_ = false;
}

std::string RealTimeSessionResult::getClientIp() const
{
    return clientIp_;
}

void RealTimeSessionResult::setClientIp(const std::string& value)
{
    clientIp_ = value;
    clientIpIsSet_ = true;
}

bool RealTimeSessionResult::clientIpIsSet() const
{
    return clientIpIsSet_;
}

void RealTimeSessionResult::unsetclientIp()
{
    clientIpIsSet_ = false;
}

std::string RealTimeSessionResult::getUserName() const
{
    return userName_;
}

void RealTimeSessionResult::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool RealTimeSessionResult::userNameIsSet() const
{
    return userNameIsSet_;
}

void RealTimeSessionResult::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string RealTimeSessionResult::getWait() const
{
    return wait_;
}

void RealTimeSessionResult::setWait(const std::string& value)
{
    wait_ = value;
    waitIsSet_ = true;
}

bool RealTimeSessionResult::waitIsSet() const
{
    return waitIsSet_;
}

void RealTimeSessionResult::unsetwait()
{
    waitIsSet_ = false;
}

std::string RealTimeSessionResult::getBlockSession() const
{
    return blockSession_;
}

void RealTimeSessionResult::setBlockSession(const std::string& value)
{
    blockSession_ = value;
    blockSessionIsSet_ = true;
}

bool RealTimeSessionResult::blockSessionIsSet() const
{
    return blockSessionIsSet_;
}

void RealTimeSessionResult::unsetblockSession()
{
    blockSessionIsSet_ = false;
}

std::string RealTimeSessionResult::getWaitEvent() const
{
    return waitEvent_;
}

void RealTimeSessionResult::setWaitEvent(const std::string& value)
{
    waitEvent_ = value;
    waitEventIsSet_ = true;
}

bool RealTimeSessionResult::waitEventIsSet() const
{
    return waitEventIsSet_;
}

void RealTimeSessionResult::unsetwaitEvent()
{
    waitEventIsSet_ = false;
}

std::string RealTimeSessionResult::getState() const
{
    return state_;
}

void RealTimeSessionResult::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool RealTimeSessionResult::stateIsSet() const
{
    return stateIsSet_;
}

void RealTimeSessionResult::unsetstate()
{
    stateIsSet_ = false;
}

std::string RealTimeSessionResult::getQueryRuntime() const
{
    return queryRuntime_;
}

void RealTimeSessionResult::setQueryRuntime(const std::string& value)
{
    queryRuntime_ = value;
    queryRuntimeIsSet_ = true;
}

bool RealTimeSessionResult::queryRuntimeIsSet() const
{
    return queryRuntimeIsSet_;
}

void RealTimeSessionResult::unsetqueryRuntime()
{
    queryRuntimeIsSet_ = false;
}

std::string RealTimeSessionResult::getQuery() const
{
    return query_;
}

void RealTimeSessionResult::setQuery(const std::string& value)
{
    query_ = value;
    queryIsSet_ = true;
}

bool RealTimeSessionResult::queryIsSet() const
{
    return queryIsSet_;
}

void RealTimeSessionResult::unsetquery()
{
    queryIsSet_ = false;
}

int32_t RealTimeSessionResult::getBackEndStart() const
{
    return backEndStart_;
}

void RealTimeSessionResult::setBackEndStart(int32_t value)
{
    backEndStart_ = value;
    backEndStartIsSet_ = true;
}

bool RealTimeSessionResult::backEndStartIsSet() const
{
    return backEndStartIsSet_;
}

void RealTimeSessionResult::unsetbackEndStart()
{
    backEndStartIsSet_ = false;
}

int32_t RealTimeSessionResult::getTransactionStart() const
{
    return transactionStart_;
}

void RealTimeSessionResult::setTransactionStart(int32_t value)
{
    transactionStart_ = value;
    transactionStartIsSet_ = true;
}

bool RealTimeSessionResult::transactionStartIsSet() const
{
    return transactionStartIsSet_;
}

void RealTimeSessionResult::unsettransactionStart()
{
    transactionStartIsSet_ = false;
}

int32_t RealTimeSessionResult::getQueryStart() const
{
    return queryStart_;
}

void RealTimeSessionResult::setQueryStart(int32_t value)
{
    queryStart_ = value;
    queryStartIsSet_ = true;
}

bool RealTimeSessionResult::queryStartIsSet() const
{
    return queryStartIsSet_;
}

void RealTimeSessionResult::unsetqueryStart()
{
    queryStartIsSet_ = false;
}

std::string RealTimeSessionResult::getApplicationName() const
{
    return applicationName_;
}

void RealTimeSessionResult::setApplicationName(const std::string& value)
{
    applicationName_ = value;
    applicationNameIsSet_ = true;
}

bool RealTimeSessionResult::applicationNameIsSet() const
{
    return applicationNameIsSet_;
}

void RealTimeSessionResult::unsetapplicationName()
{
    applicationNameIsSet_ = false;
}

std::string RealTimeSessionResult::getExecTime() const
{
    return execTime_;
}

void RealTimeSessionResult::setExecTime(const std::string& value)
{
    execTime_ = value;
    execTimeIsSet_ = true;
}

bool RealTimeSessionResult::execTimeIsSet() const
{
    return execTimeIsSet_;
}

void RealTimeSessionResult::unsetexecTime()
{
    execTimeIsSet_ = false;
}

std::string RealTimeSessionResult::getTransNum() const
{
    return transNum_;
}

void RealTimeSessionResult::setTransNum(const std::string& value)
{
    transNum_ = value;
    transNumIsSet_ = true;
}

bool RealTimeSessionResult::transNumIsSet() const
{
    return transNumIsSet_;
}

void RealTimeSessionResult::unsettransNum()
{
    transNumIsSet_ = false;
}

std::string RealTimeSessionResult::getRollbackNum() const
{
    return rollbackNum_;
}

void RealTimeSessionResult::setRollbackNum(const std::string& value)
{
    rollbackNum_ = value;
    rollbackNumIsSet_ = true;
}

bool RealTimeSessionResult::rollbackNumIsSet() const
{
    return rollbackNumIsSet_;
}

void RealTimeSessionResult::unsetrollbackNum()
{
    rollbackNumIsSet_ = false;
}

std::string RealTimeSessionResult::getSqlNum() const
{
    return sqlNum_;
}

void RealTimeSessionResult::setSqlNum(const std::string& value)
{
    sqlNum_ = value;
    sqlNumIsSet_ = true;
}

bool RealTimeSessionResult::sqlNumIsSet() const
{
    return sqlNumIsSet_;
}

void RealTimeSessionResult::unsetsqlNum()
{
    sqlNumIsSet_ = false;
}

}
}
}
}
}


