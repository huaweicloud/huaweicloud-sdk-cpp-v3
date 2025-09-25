

#include "huaweicloud/gaussdbforopengauss/v3/model/NodeExecutionInfoResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




NodeExecutionInfoResult::NodeExecutionInfoResult()
{
    componentId_ = "";
    componentIdIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
    transactionId_ = "";
    transactionIdIsSet_ = false;
    sqlId_ = "";
    sqlIdIsSet_ = false;
    sqlExecId_ = "";
    sqlExecIdIsSet_ = false;
    dbName_ = "";
    dbNameIsSet_ = false;
    schemaName_ = "";
    schemaNameIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    finishTime_ = "";
    finishTimeIsSet_ = false;
    allTime_ = 0L;
    allTimeIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    clientAddr_ = "";
    clientAddrIsSet_ = false;
    clientPort_ = 0;
    clientPortIsSet_ = false;
    traceId_ = "";
    traceIdIsSet_ = false;
    applicationName_ = "";
    applicationNameIsSet_ = false;
    sessionId_ = "";
    sessionIdIsSet_ = false;
    isSlowSql_ = false;
    isSlowSqlIsSet_ = false;
    executionTimeDetailsIsSet_ = false;
}

NodeExecutionInfoResult::~NodeExecutionInfoResult() = default;

void NodeExecutionInfoResult::validate()
{
}

web::json::value NodeExecutionInfoResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(componentIdIsSet_) {
        val[utility::conversions::to_string_t("component_id")] = ModelBase::toJson(componentId_);
    }
    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(transactionIdIsSet_) {
        val[utility::conversions::to_string_t("transaction_id")] = ModelBase::toJson(transactionId_);
    }
    if(sqlIdIsSet_) {
        val[utility::conversions::to_string_t("sql_id")] = ModelBase::toJson(sqlId_);
    }
    if(sqlExecIdIsSet_) {
        val[utility::conversions::to_string_t("sql_exec_id")] = ModelBase::toJson(sqlExecId_);
    }
    if(dbNameIsSet_) {
        val[utility::conversions::to_string_t("db_name")] = ModelBase::toJson(dbName_);
    }
    if(schemaNameIsSet_) {
        val[utility::conversions::to_string_t("schema_name")] = ModelBase::toJson(schemaName_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(finishTimeIsSet_) {
        val[utility::conversions::to_string_t("finish_time")] = ModelBase::toJson(finishTime_);
    }
    if(allTimeIsSet_) {
        val[utility::conversions::to_string_t("all_time")] = ModelBase::toJson(allTime_);
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
    if(traceIdIsSet_) {
        val[utility::conversions::to_string_t("trace_id")] = ModelBase::toJson(traceId_);
    }
    if(applicationNameIsSet_) {
        val[utility::conversions::to_string_t("application_name")] = ModelBase::toJson(applicationName_);
    }
    if(sessionIdIsSet_) {
        val[utility::conversions::to_string_t("session_id")] = ModelBase::toJson(sessionId_);
    }
    if(isSlowSqlIsSet_) {
        val[utility::conversions::to_string_t("is_slow_sql")] = ModelBase::toJson(isSlowSql_);
    }
    if(executionTimeDetailsIsSet_) {
        val[utility::conversions::to_string_t("execution_time_details")] = ModelBase::toJson(executionTimeDetails_);
    }

    return val;
}
bool NodeExecutionInfoResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("component_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("component_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setComponentId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("transaction_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("transaction_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTransactionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sql_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sql_exec_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql_exec_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSqlExecId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("schema_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("schema_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSchemaName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("finish_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("finish_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFinishTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("all_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("all_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAllTime(refVal);
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
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClientPort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("trace_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("trace_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTraceId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("session_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("session_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSessionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_slow_sql"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_slow_sql"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSlowSql(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("execution_time_details"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execution_time_details"));
        if(!fieldValue.is_null())
        {
            ExecutionTimeDetailsInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecutionTimeDetails(refVal);
        }
    }
    return ok;
}


std::string NodeExecutionInfoResult::getComponentId() const
{
    return componentId_;
}

void NodeExecutionInfoResult::setComponentId(const std::string& value)
{
    componentId_ = value;
    componentIdIsSet_ = true;
}

bool NodeExecutionInfoResult::componentIdIsSet() const
{
    return componentIdIsSet_;
}

void NodeExecutionInfoResult::unsetcomponentId()
{
    componentIdIsSet_ = false;
}

std::string NodeExecutionInfoResult::getNodeId() const
{
    return nodeId_;
}

void NodeExecutionInfoResult::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool NodeExecutionInfoResult::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void NodeExecutionInfoResult::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string NodeExecutionInfoResult::getTransactionId() const
{
    return transactionId_;
}

void NodeExecutionInfoResult::setTransactionId(const std::string& value)
{
    transactionId_ = value;
    transactionIdIsSet_ = true;
}

bool NodeExecutionInfoResult::transactionIdIsSet() const
{
    return transactionIdIsSet_;
}

void NodeExecutionInfoResult::unsettransactionId()
{
    transactionIdIsSet_ = false;
}

std::string NodeExecutionInfoResult::getSqlId() const
{
    return sqlId_;
}

void NodeExecutionInfoResult::setSqlId(const std::string& value)
{
    sqlId_ = value;
    sqlIdIsSet_ = true;
}

bool NodeExecutionInfoResult::sqlIdIsSet() const
{
    return sqlIdIsSet_;
}

void NodeExecutionInfoResult::unsetsqlId()
{
    sqlIdIsSet_ = false;
}

std::string NodeExecutionInfoResult::getSqlExecId() const
{
    return sqlExecId_;
}

void NodeExecutionInfoResult::setSqlExecId(const std::string& value)
{
    sqlExecId_ = value;
    sqlExecIdIsSet_ = true;
}

bool NodeExecutionInfoResult::sqlExecIdIsSet() const
{
    return sqlExecIdIsSet_;
}

void NodeExecutionInfoResult::unsetsqlExecId()
{
    sqlExecIdIsSet_ = false;
}

std::string NodeExecutionInfoResult::getDbName() const
{
    return dbName_;
}

void NodeExecutionInfoResult::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool NodeExecutionInfoResult::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void NodeExecutionInfoResult::unsetdbName()
{
    dbNameIsSet_ = false;
}

std::string NodeExecutionInfoResult::getSchemaName() const
{
    return schemaName_;
}

void NodeExecutionInfoResult::setSchemaName(const std::string& value)
{
    schemaName_ = value;
    schemaNameIsSet_ = true;
}

bool NodeExecutionInfoResult::schemaNameIsSet() const
{
    return schemaNameIsSet_;
}

void NodeExecutionInfoResult::unsetschemaName()
{
    schemaNameIsSet_ = false;
}

std::string NodeExecutionInfoResult::getStartTime() const
{
    return startTime_;
}

void NodeExecutionInfoResult::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool NodeExecutionInfoResult::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void NodeExecutionInfoResult::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string NodeExecutionInfoResult::getFinishTime() const
{
    return finishTime_;
}

void NodeExecutionInfoResult::setFinishTime(const std::string& value)
{
    finishTime_ = value;
    finishTimeIsSet_ = true;
}

bool NodeExecutionInfoResult::finishTimeIsSet() const
{
    return finishTimeIsSet_;
}

void NodeExecutionInfoResult::unsetfinishTime()
{
    finishTimeIsSet_ = false;
}

int64_t NodeExecutionInfoResult::getAllTime() const
{
    return allTime_;
}

void NodeExecutionInfoResult::setAllTime(int64_t value)
{
    allTime_ = value;
    allTimeIsSet_ = true;
}

bool NodeExecutionInfoResult::allTimeIsSet() const
{
    return allTimeIsSet_;
}

void NodeExecutionInfoResult::unsetallTime()
{
    allTimeIsSet_ = false;
}

std::string NodeExecutionInfoResult::getUserName() const
{
    return userName_;
}

void NodeExecutionInfoResult::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool NodeExecutionInfoResult::userNameIsSet() const
{
    return userNameIsSet_;
}

void NodeExecutionInfoResult::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string NodeExecutionInfoResult::getClientAddr() const
{
    return clientAddr_;
}

void NodeExecutionInfoResult::setClientAddr(const std::string& value)
{
    clientAddr_ = value;
    clientAddrIsSet_ = true;
}

bool NodeExecutionInfoResult::clientAddrIsSet() const
{
    return clientAddrIsSet_;
}

void NodeExecutionInfoResult::unsetclientAddr()
{
    clientAddrIsSet_ = false;
}

int32_t NodeExecutionInfoResult::getClientPort() const
{
    return clientPort_;
}

void NodeExecutionInfoResult::setClientPort(int32_t value)
{
    clientPort_ = value;
    clientPortIsSet_ = true;
}

bool NodeExecutionInfoResult::clientPortIsSet() const
{
    return clientPortIsSet_;
}

void NodeExecutionInfoResult::unsetclientPort()
{
    clientPortIsSet_ = false;
}

std::string NodeExecutionInfoResult::getTraceId() const
{
    return traceId_;
}

void NodeExecutionInfoResult::setTraceId(const std::string& value)
{
    traceId_ = value;
    traceIdIsSet_ = true;
}

bool NodeExecutionInfoResult::traceIdIsSet() const
{
    return traceIdIsSet_;
}

void NodeExecutionInfoResult::unsettraceId()
{
    traceIdIsSet_ = false;
}

std::string NodeExecutionInfoResult::getApplicationName() const
{
    return applicationName_;
}

void NodeExecutionInfoResult::setApplicationName(const std::string& value)
{
    applicationName_ = value;
    applicationNameIsSet_ = true;
}

bool NodeExecutionInfoResult::applicationNameIsSet() const
{
    return applicationNameIsSet_;
}

void NodeExecutionInfoResult::unsetapplicationName()
{
    applicationNameIsSet_ = false;
}

std::string NodeExecutionInfoResult::getSessionId() const
{
    return sessionId_;
}

void NodeExecutionInfoResult::setSessionId(const std::string& value)
{
    sessionId_ = value;
    sessionIdIsSet_ = true;
}

bool NodeExecutionInfoResult::sessionIdIsSet() const
{
    return sessionIdIsSet_;
}

void NodeExecutionInfoResult::unsetsessionId()
{
    sessionIdIsSet_ = false;
}

bool NodeExecutionInfoResult::isIsSlowSql() const
{
    return isSlowSql_;
}

void NodeExecutionInfoResult::setIsSlowSql(bool value)
{
    isSlowSql_ = value;
    isSlowSqlIsSet_ = true;
}

bool NodeExecutionInfoResult::isSlowSqlIsSet() const
{
    return isSlowSqlIsSet_;
}

void NodeExecutionInfoResult::unsetisSlowSql()
{
    isSlowSqlIsSet_ = false;
}

ExecutionTimeDetailsInfo NodeExecutionInfoResult::getExecutionTimeDetails() const
{
    return executionTimeDetails_;
}

void NodeExecutionInfoResult::setExecutionTimeDetails(const ExecutionTimeDetailsInfo& value)
{
    executionTimeDetails_ = value;
    executionTimeDetailsIsSet_ = true;
}

bool NodeExecutionInfoResult::executionTimeDetailsIsSet() const
{
    return executionTimeDetailsIsSet_;
}

void NodeExecutionInfoResult::unsetexecutionTimeDetails()
{
    executionTimeDetailsIsSet_ = false;
}

}
}
}
}
}


