

#include "huaweicloud/gaussdbforopengauss/v3/model/FullSqlResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




FullSqlResult::FullSqlResult()
{
    id_ = "";
    idIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
    componentId_ = "";
    componentIdIsSet_ = false;
    dbName_ = "";
    dbNameIsSet_ = false;
    schemaName_ = "";
    schemaNameIsSet_ = false;
    username_ = "";
    usernameIsSet_ = false;
    applicationName_ = "";
    applicationNameIsSet_ = false;
    clientAddr_ = "";
    clientAddrIsSet_ = false;
    clientPort_ = "";
    clientPortIsSet_ = false;
    sqlId_ = "";
    sqlIdIsSet_ = false;
    sqlExecId_ = "";
    sqlExecIdIsSet_ = false;
    transactionId_ = "";
    transactionIdIsSet_ = false;
    traceId_ = "";
    traceIdIsSet_ = false;
    query_ = "";
    queryIsSet_ = false;
    sql_ = "";
    sqlIsSet_ = false;
    beginTime_ = "";
    beginTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    allTime_ = 0L;
    allTimeIsSet_ = false;
    dbTime_ = 0L;
    dbTimeIsSet_ = false;
    cpuTime_ = 0L;
    cpuTimeIsSet_ = false;
    dataIoTime_ = 0L;
    dataIoTimeIsSet_ = false;
    executionTime_ = 0L;
    executionTimeIsSet_ = false;
    scanLines_ = 0L;
    scanLinesIsSet_ = false;
    insertRows_ = 0L;
    insertRowsIsSet_ = false;
    updateRows_ = 0L;
    updateRowsIsSet_ = false;
    deleteRows_ = 0L;
    deleteRowsIsSet_ = false;
    isSlowSql_ = false;
    isSlowSqlIsSet_ = false;
    startTimestamp_ = 0L;
    startTimestampIsSet_ = false;
    finishTimestamp_ = 0L;
    finishTimestampIsSet_ = false;
    hitRate_ = 0.0;
    hitRateIsSet_ = false;
}

FullSqlResult::~FullSqlResult() = default;

void FullSqlResult::validate()
{
}

web::json::value FullSqlResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(componentIdIsSet_) {
        val[utility::conversions::to_string_t("component_id")] = ModelBase::toJson(componentId_);
    }
    if(dbNameIsSet_) {
        val[utility::conversions::to_string_t("db_name")] = ModelBase::toJson(dbName_);
    }
    if(schemaNameIsSet_) {
        val[utility::conversions::to_string_t("schema_name")] = ModelBase::toJson(schemaName_);
    }
    if(usernameIsSet_) {
        val[utility::conversions::to_string_t("username")] = ModelBase::toJson(username_);
    }
    if(applicationNameIsSet_) {
        val[utility::conversions::to_string_t("application_name")] = ModelBase::toJson(applicationName_);
    }
    if(clientAddrIsSet_) {
        val[utility::conversions::to_string_t("client_addr")] = ModelBase::toJson(clientAddr_);
    }
    if(clientPortIsSet_) {
        val[utility::conversions::to_string_t("client_port")] = ModelBase::toJson(clientPort_);
    }
    if(sqlIdIsSet_) {
        val[utility::conversions::to_string_t("sql_id")] = ModelBase::toJson(sqlId_);
    }
    if(sqlExecIdIsSet_) {
        val[utility::conversions::to_string_t("sql_exec_id")] = ModelBase::toJson(sqlExecId_);
    }
    if(transactionIdIsSet_) {
        val[utility::conversions::to_string_t("transaction_id")] = ModelBase::toJson(transactionId_);
    }
    if(traceIdIsSet_) {
        val[utility::conversions::to_string_t("trace_id")] = ModelBase::toJson(traceId_);
    }
    if(queryIsSet_) {
        val[utility::conversions::to_string_t("query")] = ModelBase::toJson(query_);
    }
    if(sqlIsSet_) {
        val[utility::conversions::to_string_t("sql")] = ModelBase::toJson(sql_);
    }
    if(beginTimeIsSet_) {
        val[utility::conversions::to_string_t("begin_time")] = ModelBase::toJson(beginTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(allTimeIsSet_) {
        val[utility::conversions::to_string_t("all_time")] = ModelBase::toJson(allTime_);
    }
    if(dbTimeIsSet_) {
        val[utility::conversions::to_string_t("db_time")] = ModelBase::toJson(dbTime_);
    }
    if(cpuTimeIsSet_) {
        val[utility::conversions::to_string_t("cpu_time")] = ModelBase::toJson(cpuTime_);
    }
    if(dataIoTimeIsSet_) {
        val[utility::conversions::to_string_t("data_io_time")] = ModelBase::toJson(dataIoTime_);
    }
    if(executionTimeIsSet_) {
        val[utility::conversions::to_string_t("execution_time")] = ModelBase::toJson(executionTime_);
    }
    if(scanLinesIsSet_) {
        val[utility::conversions::to_string_t("scan_lines")] = ModelBase::toJson(scanLines_);
    }
    if(insertRowsIsSet_) {
        val[utility::conversions::to_string_t("insert_rows")] = ModelBase::toJson(insertRows_);
    }
    if(updateRowsIsSet_) {
        val[utility::conversions::to_string_t("update_rows")] = ModelBase::toJson(updateRows_);
    }
    if(deleteRowsIsSet_) {
        val[utility::conversions::to_string_t("delete_rows")] = ModelBase::toJson(deleteRows_);
    }
    if(isSlowSqlIsSet_) {
        val[utility::conversions::to_string_t("is_slow_sql")] = ModelBase::toJson(isSlowSql_);
    }
    if(startTimestampIsSet_) {
        val[utility::conversions::to_string_t("start_timestamp")] = ModelBase::toJson(startTimestamp_);
    }
    if(finishTimestampIsSet_) {
        val[utility::conversions::to_string_t("finish_timestamp")] = ModelBase::toJson(finishTimestamp_);
    }
    if(hitRateIsSet_) {
        val[utility::conversions::to_string_t("hit_rate")] = ModelBase::toJson(hitRate_);
    }

    return val;
}
bool FullSqlResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("component_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("component_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setComponentId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("username"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("username"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsername(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("transaction_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("transaction_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTransactionId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("query"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("query"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuery(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sql"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sql"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSql(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("begin_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("begin_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBeginTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("all_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("all_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAllTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cpu_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cpu_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCpuTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data_io_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_io_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataIoTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("execution_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execution_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecutionTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("scan_lines"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scan_lines"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScanLines(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("insert_rows"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("insert_rows"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInsertRows(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_rows"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_rows"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateRows(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("delete_rows"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delete_rows"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeleteRows(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("start_timestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_timestamp"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("finish_timestamp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("finish_timestamp"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFinishTimestamp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hit_rate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hit_rate"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHitRate(refVal);
        }
    }
    return ok;
}


std::string FullSqlResult::getId() const
{
    return id_;
}

void FullSqlResult::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool FullSqlResult::idIsSet() const
{
    return idIsSet_;
}

void FullSqlResult::unsetid()
{
    idIsSet_ = false;
}

std::string FullSqlResult::getInstanceId() const
{
    return instanceId_;
}

void FullSqlResult::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool FullSqlResult::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void FullSqlResult::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string FullSqlResult::getNodeId() const
{
    return nodeId_;
}

void FullSqlResult::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool FullSqlResult::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void FullSqlResult::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string FullSqlResult::getComponentId() const
{
    return componentId_;
}

void FullSqlResult::setComponentId(const std::string& value)
{
    componentId_ = value;
    componentIdIsSet_ = true;
}

bool FullSqlResult::componentIdIsSet() const
{
    return componentIdIsSet_;
}

void FullSqlResult::unsetcomponentId()
{
    componentIdIsSet_ = false;
}

std::string FullSqlResult::getDbName() const
{
    return dbName_;
}

void FullSqlResult::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool FullSqlResult::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void FullSqlResult::unsetdbName()
{
    dbNameIsSet_ = false;
}

std::string FullSqlResult::getSchemaName() const
{
    return schemaName_;
}

void FullSqlResult::setSchemaName(const std::string& value)
{
    schemaName_ = value;
    schemaNameIsSet_ = true;
}

bool FullSqlResult::schemaNameIsSet() const
{
    return schemaNameIsSet_;
}

void FullSqlResult::unsetschemaName()
{
    schemaNameIsSet_ = false;
}

std::string FullSqlResult::getUsername() const
{
    return username_;
}

void FullSqlResult::setUsername(const std::string& value)
{
    username_ = value;
    usernameIsSet_ = true;
}

bool FullSqlResult::usernameIsSet() const
{
    return usernameIsSet_;
}

void FullSqlResult::unsetusername()
{
    usernameIsSet_ = false;
}

std::string FullSqlResult::getApplicationName() const
{
    return applicationName_;
}

void FullSqlResult::setApplicationName(const std::string& value)
{
    applicationName_ = value;
    applicationNameIsSet_ = true;
}

bool FullSqlResult::applicationNameIsSet() const
{
    return applicationNameIsSet_;
}

void FullSqlResult::unsetapplicationName()
{
    applicationNameIsSet_ = false;
}

std::string FullSqlResult::getClientAddr() const
{
    return clientAddr_;
}

void FullSqlResult::setClientAddr(const std::string& value)
{
    clientAddr_ = value;
    clientAddrIsSet_ = true;
}

bool FullSqlResult::clientAddrIsSet() const
{
    return clientAddrIsSet_;
}

void FullSqlResult::unsetclientAddr()
{
    clientAddrIsSet_ = false;
}

std::string FullSqlResult::getClientPort() const
{
    return clientPort_;
}

void FullSqlResult::setClientPort(const std::string& value)
{
    clientPort_ = value;
    clientPortIsSet_ = true;
}

bool FullSqlResult::clientPortIsSet() const
{
    return clientPortIsSet_;
}

void FullSqlResult::unsetclientPort()
{
    clientPortIsSet_ = false;
}

std::string FullSqlResult::getSqlId() const
{
    return sqlId_;
}

void FullSqlResult::setSqlId(const std::string& value)
{
    sqlId_ = value;
    sqlIdIsSet_ = true;
}

bool FullSqlResult::sqlIdIsSet() const
{
    return sqlIdIsSet_;
}

void FullSqlResult::unsetsqlId()
{
    sqlIdIsSet_ = false;
}

std::string FullSqlResult::getSqlExecId() const
{
    return sqlExecId_;
}

void FullSqlResult::setSqlExecId(const std::string& value)
{
    sqlExecId_ = value;
    sqlExecIdIsSet_ = true;
}

bool FullSqlResult::sqlExecIdIsSet() const
{
    return sqlExecIdIsSet_;
}

void FullSqlResult::unsetsqlExecId()
{
    sqlExecIdIsSet_ = false;
}

std::string FullSqlResult::getTransactionId() const
{
    return transactionId_;
}

void FullSqlResult::setTransactionId(const std::string& value)
{
    transactionId_ = value;
    transactionIdIsSet_ = true;
}

bool FullSqlResult::transactionIdIsSet() const
{
    return transactionIdIsSet_;
}

void FullSqlResult::unsettransactionId()
{
    transactionIdIsSet_ = false;
}

std::string FullSqlResult::getTraceId() const
{
    return traceId_;
}

void FullSqlResult::setTraceId(const std::string& value)
{
    traceId_ = value;
    traceIdIsSet_ = true;
}

bool FullSqlResult::traceIdIsSet() const
{
    return traceIdIsSet_;
}

void FullSqlResult::unsettraceId()
{
    traceIdIsSet_ = false;
}

std::string FullSqlResult::getQuery() const
{
    return query_;
}

void FullSqlResult::setQuery(const std::string& value)
{
    query_ = value;
    queryIsSet_ = true;
}

bool FullSqlResult::queryIsSet() const
{
    return queryIsSet_;
}

void FullSqlResult::unsetquery()
{
    queryIsSet_ = false;
}

std::string FullSqlResult::getSql() const
{
    return sql_;
}

void FullSqlResult::setSql(const std::string& value)
{
    sql_ = value;
    sqlIsSet_ = true;
}

bool FullSqlResult::sqlIsSet() const
{
    return sqlIsSet_;
}

void FullSqlResult::unsetsql()
{
    sqlIsSet_ = false;
}

std::string FullSqlResult::getBeginTime() const
{
    return beginTime_;
}

void FullSqlResult::setBeginTime(const std::string& value)
{
    beginTime_ = value;
    beginTimeIsSet_ = true;
}

bool FullSqlResult::beginTimeIsSet() const
{
    return beginTimeIsSet_;
}

void FullSqlResult::unsetbeginTime()
{
    beginTimeIsSet_ = false;
}

std::string FullSqlResult::getEndTime() const
{
    return endTime_;
}

void FullSqlResult::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool FullSqlResult::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void FullSqlResult::unsetendTime()
{
    endTimeIsSet_ = false;
}

int64_t FullSqlResult::getAllTime() const
{
    return allTime_;
}

void FullSqlResult::setAllTime(int64_t value)
{
    allTime_ = value;
    allTimeIsSet_ = true;
}

bool FullSqlResult::allTimeIsSet() const
{
    return allTimeIsSet_;
}

void FullSqlResult::unsetallTime()
{
    allTimeIsSet_ = false;
}

int64_t FullSqlResult::getDbTime() const
{
    return dbTime_;
}

void FullSqlResult::setDbTime(int64_t value)
{
    dbTime_ = value;
    dbTimeIsSet_ = true;
}

bool FullSqlResult::dbTimeIsSet() const
{
    return dbTimeIsSet_;
}

void FullSqlResult::unsetdbTime()
{
    dbTimeIsSet_ = false;
}

int64_t FullSqlResult::getCpuTime() const
{
    return cpuTime_;
}

void FullSqlResult::setCpuTime(int64_t value)
{
    cpuTime_ = value;
    cpuTimeIsSet_ = true;
}

bool FullSqlResult::cpuTimeIsSet() const
{
    return cpuTimeIsSet_;
}

void FullSqlResult::unsetcpuTime()
{
    cpuTimeIsSet_ = false;
}

int64_t FullSqlResult::getDataIoTime() const
{
    return dataIoTime_;
}

void FullSqlResult::setDataIoTime(int64_t value)
{
    dataIoTime_ = value;
    dataIoTimeIsSet_ = true;
}

bool FullSqlResult::dataIoTimeIsSet() const
{
    return dataIoTimeIsSet_;
}

void FullSqlResult::unsetdataIoTime()
{
    dataIoTimeIsSet_ = false;
}

int64_t FullSqlResult::getExecutionTime() const
{
    return executionTime_;
}

void FullSqlResult::setExecutionTime(int64_t value)
{
    executionTime_ = value;
    executionTimeIsSet_ = true;
}

bool FullSqlResult::executionTimeIsSet() const
{
    return executionTimeIsSet_;
}

void FullSqlResult::unsetexecutionTime()
{
    executionTimeIsSet_ = false;
}

int64_t FullSqlResult::getScanLines() const
{
    return scanLines_;
}

void FullSqlResult::setScanLines(int64_t value)
{
    scanLines_ = value;
    scanLinesIsSet_ = true;
}

bool FullSqlResult::scanLinesIsSet() const
{
    return scanLinesIsSet_;
}

void FullSqlResult::unsetscanLines()
{
    scanLinesIsSet_ = false;
}

int64_t FullSqlResult::getInsertRows() const
{
    return insertRows_;
}

void FullSqlResult::setInsertRows(int64_t value)
{
    insertRows_ = value;
    insertRowsIsSet_ = true;
}

bool FullSqlResult::insertRowsIsSet() const
{
    return insertRowsIsSet_;
}

void FullSqlResult::unsetinsertRows()
{
    insertRowsIsSet_ = false;
}

int64_t FullSqlResult::getUpdateRows() const
{
    return updateRows_;
}

void FullSqlResult::setUpdateRows(int64_t value)
{
    updateRows_ = value;
    updateRowsIsSet_ = true;
}

bool FullSqlResult::updateRowsIsSet() const
{
    return updateRowsIsSet_;
}

void FullSqlResult::unsetupdateRows()
{
    updateRowsIsSet_ = false;
}

int64_t FullSqlResult::getDeleteRows() const
{
    return deleteRows_;
}

void FullSqlResult::setDeleteRows(int64_t value)
{
    deleteRows_ = value;
    deleteRowsIsSet_ = true;
}

bool FullSqlResult::deleteRowsIsSet() const
{
    return deleteRowsIsSet_;
}

void FullSqlResult::unsetdeleteRows()
{
    deleteRowsIsSet_ = false;
}

bool FullSqlResult::isIsSlowSql() const
{
    return isSlowSql_;
}

void FullSqlResult::setIsSlowSql(bool value)
{
    isSlowSql_ = value;
    isSlowSqlIsSet_ = true;
}

bool FullSqlResult::isSlowSqlIsSet() const
{
    return isSlowSqlIsSet_;
}

void FullSqlResult::unsetisSlowSql()
{
    isSlowSqlIsSet_ = false;
}

int64_t FullSqlResult::getStartTimestamp() const
{
    return startTimestamp_;
}

void FullSqlResult::setStartTimestamp(int64_t value)
{
    startTimestamp_ = value;
    startTimestampIsSet_ = true;
}

bool FullSqlResult::startTimestampIsSet() const
{
    return startTimestampIsSet_;
}

void FullSqlResult::unsetstartTimestamp()
{
    startTimestampIsSet_ = false;
}

int64_t FullSqlResult::getFinishTimestamp() const
{
    return finishTimestamp_;
}

void FullSqlResult::setFinishTimestamp(int64_t value)
{
    finishTimestamp_ = value;
    finishTimestampIsSet_ = true;
}

bool FullSqlResult::finishTimestampIsSet() const
{
    return finishTimestampIsSet_;
}

void FullSqlResult::unsetfinishTimestamp()
{
    finishTimestampIsSet_ = false;
}

double FullSqlResult::getHitRate() const
{
    return hitRate_;
}

void FullSqlResult::setHitRate(double value)
{
    hitRate_ = value;
    hitRateIsSet_ = true;
}

bool FullSqlResult::hitRateIsSet() const
{
    return hitRateIsSet_;
}

void FullSqlResult::unsethitRate()
{
    hitRateIsSet_ = false;
}

}
}
}
}
}


