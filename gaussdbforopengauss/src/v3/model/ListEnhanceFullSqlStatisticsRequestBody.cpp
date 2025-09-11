

#include "huaweicloud/gaussdbforopengauss/v3/model/ListEnhanceFullSqlStatisticsRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListEnhanceFullSqlStatisticsRequestBody::ListEnhanceFullSqlStatisticsRequestBody()
{
    limit_ = 0;
    limitIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    nodeId_ = "";
    nodeIdIsSet_ = false;
    beginTime_ = "";
    beginTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    query_ = "";
    queryIsSet_ = false;
    sqlId_ = "";
    sqlIdIsSet_ = false;
    sqlExecId_ = "";
    sqlExecIdIsSet_ = false;
    transactionId_ = "";
    transactionIdIsSet_ = false;
    traceId_ = "";
    traceIdIsSet_ = false;
    dbName_ = "";
    dbNameIsSet_ = false;
    schemaName_ = "";
    schemaNameIsSet_ = false;
    username_ = "";
    usernameIsSet_ = false;
    clientAddr_ = "";
    clientAddrIsSet_ = false;
    clientPort_ = "";
    clientPortIsSet_ = false;
    orderBy_ = "";
    orderByIsSet_ = false;
    isSlowSql_ = false;
    isSlowSqlIsSet_ = false;
    order_ = "";
    orderIsSet_ = false;
    applicationName_ = "";
    applicationNameIsSet_ = false;
    componentId_ = "";
    componentIdIsSet_ = false;
    multiQueriesIsSet_ = false;
    compareConditionsIsSet_ = false;
}

ListEnhanceFullSqlStatisticsRequestBody::~ListEnhanceFullSqlStatisticsRequestBody() = default;

void ListEnhanceFullSqlStatisticsRequestBody::validate()
{
}

web::json::value ListEnhanceFullSqlStatisticsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(beginTimeIsSet_) {
        val[utility::conversions::to_string_t("begin_time")] = ModelBase::toJson(beginTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(queryIsSet_) {
        val[utility::conversions::to_string_t("query")] = ModelBase::toJson(query_);
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
    if(dbNameIsSet_) {
        val[utility::conversions::to_string_t("db_name")] = ModelBase::toJson(dbName_);
    }
    if(schemaNameIsSet_) {
        val[utility::conversions::to_string_t("schema_name")] = ModelBase::toJson(schemaName_);
    }
    if(usernameIsSet_) {
        val[utility::conversions::to_string_t("username")] = ModelBase::toJson(username_);
    }
    if(clientAddrIsSet_) {
        val[utility::conversions::to_string_t("client_addr")] = ModelBase::toJson(clientAddr_);
    }
    if(clientPortIsSet_) {
        val[utility::conversions::to_string_t("client_port")] = ModelBase::toJson(clientPort_);
    }
    if(orderByIsSet_) {
        val[utility::conversions::to_string_t("order_by")] = ModelBase::toJson(orderBy_);
    }
    if(isSlowSqlIsSet_) {
        val[utility::conversions::to_string_t("is_slow_sql")] = ModelBase::toJson(isSlowSql_);
    }
    if(orderIsSet_) {
        val[utility::conversions::to_string_t("order")] = ModelBase::toJson(order_);
    }
    if(applicationNameIsSet_) {
        val[utility::conversions::to_string_t("application_name")] = ModelBase::toJson(applicationName_);
    }
    if(componentIdIsSet_) {
        val[utility::conversions::to_string_t("component_id")] = ModelBase::toJson(componentId_);
    }
    if(multiQueriesIsSet_) {
        val[utility::conversions::to_string_t("multi_queries")] = ModelBase::toJson(multiQueries_);
    }
    if(compareConditionsIsSet_) {
        val[utility::conversions::to_string_t("compare_conditions")] = ModelBase::toJson(compareConditions_);
    }

    return val;
}
bool ListEnhanceFullSqlStatisticsRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("query"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("query"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuery(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("order_by"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order_by"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrderBy(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("order"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrder(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("component_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("component_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setComponentId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("multi_queries"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("multi_queries"));
        if(!fieldValue.is_null())
        {
            std::vector<MultiQueryConditionOption> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMultiQueries(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("compare_conditions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("compare_conditions"));
        if(!fieldValue.is_null())
        {
            std::vector<CompareConditionOption> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompareConditions(refVal);
        }
    }
    return ok;
}


int32_t ListEnhanceFullSqlStatisticsRequestBody::getLimit() const
{
    return limit_;
}

void ListEnhanceFullSqlStatisticsRequestBody::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListEnhanceFullSqlStatisticsRequestBody::limitIsSet() const
{
    return limitIsSet_;
}

void ListEnhanceFullSqlStatisticsRequestBody::unsetlimit()
{
    limitIsSet_ = false;
}

int32_t ListEnhanceFullSqlStatisticsRequestBody::getOffset() const
{
    return offset_;
}

void ListEnhanceFullSqlStatisticsRequestBody::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListEnhanceFullSqlStatisticsRequestBody::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListEnhanceFullSqlStatisticsRequestBody::unsetoffset()
{
    offsetIsSet_ = false;
}

std::string ListEnhanceFullSqlStatisticsRequestBody::getNodeId() const
{
    return nodeId_;
}

void ListEnhanceFullSqlStatisticsRequestBody::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool ListEnhanceFullSqlStatisticsRequestBody::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void ListEnhanceFullSqlStatisticsRequestBody::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

std::string ListEnhanceFullSqlStatisticsRequestBody::getBeginTime() const
{
    return beginTime_;
}

void ListEnhanceFullSqlStatisticsRequestBody::setBeginTime(const std::string& value)
{
    beginTime_ = value;
    beginTimeIsSet_ = true;
}

bool ListEnhanceFullSqlStatisticsRequestBody::beginTimeIsSet() const
{
    return beginTimeIsSet_;
}

void ListEnhanceFullSqlStatisticsRequestBody::unsetbeginTime()
{
    beginTimeIsSet_ = false;
}

std::string ListEnhanceFullSqlStatisticsRequestBody::getEndTime() const
{
    return endTime_;
}

void ListEnhanceFullSqlStatisticsRequestBody::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListEnhanceFullSqlStatisticsRequestBody::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListEnhanceFullSqlStatisticsRequestBody::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ListEnhanceFullSqlStatisticsRequestBody::getQuery() const
{
    return query_;
}

void ListEnhanceFullSqlStatisticsRequestBody::setQuery(const std::string& value)
{
    query_ = value;
    queryIsSet_ = true;
}

bool ListEnhanceFullSqlStatisticsRequestBody::queryIsSet() const
{
    return queryIsSet_;
}

void ListEnhanceFullSqlStatisticsRequestBody::unsetquery()
{
    queryIsSet_ = false;
}

std::string ListEnhanceFullSqlStatisticsRequestBody::getSqlId() const
{
    return sqlId_;
}

void ListEnhanceFullSqlStatisticsRequestBody::setSqlId(const std::string& value)
{
    sqlId_ = value;
    sqlIdIsSet_ = true;
}

bool ListEnhanceFullSqlStatisticsRequestBody::sqlIdIsSet() const
{
    return sqlIdIsSet_;
}

void ListEnhanceFullSqlStatisticsRequestBody::unsetsqlId()
{
    sqlIdIsSet_ = false;
}

std::string ListEnhanceFullSqlStatisticsRequestBody::getSqlExecId() const
{
    return sqlExecId_;
}

void ListEnhanceFullSqlStatisticsRequestBody::setSqlExecId(const std::string& value)
{
    sqlExecId_ = value;
    sqlExecIdIsSet_ = true;
}

bool ListEnhanceFullSqlStatisticsRequestBody::sqlExecIdIsSet() const
{
    return sqlExecIdIsSet_;
}

void ListEnhanceFullSqlStatisticsRequestBody::unsetsqlExecId()
{
    sqlExecIdIsSet_ = false;
}

std::string ListEnhanceFullSqlStatisticsRequestBody::getTransactionId() const
{
    return transactionId_;
}

void ListEnhanceFullSqlStatisticsRequestBody::setTransactionId(const std::string& value)
{
    transactionId_ = value;
    transactionIdIsSet_ = true;
}

bool ListEnhanceFullSqlStatisticsRequestBody::transactionIdIsSet() const
{
    return transactionIdIsSet_;
}

void ListEnhanceFullSqlStatisticsRequestBody::unsettransactionId()
{
    transactionIdIsSet_ = false;
}

std::string ListEnhanceFullSqlStatisticsRequestBody::getTraceId() const
{
    return traceId_;
}

void ListEnhanceFullSqlStatisticsRequestBody::setTraceId(const std::string& value)
{
    traceId_ = value;
    traceIdIsSet_ = true;
}

bool ListEnhanceFullSqlStatisticsRequestBody::traceIdIsSet() const
{
    return traceIdIsSet_;
}

void ListEnhanceFullSqlStatisticsRequestBody::unsettraceId()
{
    traceIdIsSet_ = false;
}

std::string ListEnhanceFullSqlStatisticsRequestBody::getDbName() const
{
    return dbName_;
}

void ListEnhanceFullSqlStatisticsRequestBody::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool ListEnhanceFullSqlStatisticsRequestBody::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void ListEnhanceFullSqlStatisticsRequestBody::unsetdbName()
{
    dbNameIsSet_ = false;
}

std::string ListEnhanceFullSqlStatisticsRequestBody::getSchemaName() const
{
    return schemaName_;
}

void ListEnhanceFullSqlStatisticsRequestBody::setSchemaName(const std::string& value)
{
    schemaName_ = value;
    schemaNameIsSet_ = true;
}

bool ListEnhanceFullSqlStatisticsRequestBody::schemaNameIsSet() const
{
    return schemaNameIsSet_;
}

void ListEnhanceFullSqlStatisticsRequestBody::unsetschemaName()
{
    schemaNameIsSet_ = false;
}

std::string ListEnhanceFullSqlStatisticsRequestBody::getUsername() const
{
    return username_;
}

void ListEnhanceFullSqlStatisticsRequestBody::setUsername(const std::string& value)
{
    username_ = value;
    usernameIsSet_ = true;
}

bool ListEnhanceFullSqlStatisticsRequestBody::usernameIsSet() const
{
    return usernameIsSet_;
}

void ListEnhanceFullSqlStatisticsRequestBody::unsetusername()
{
    usernameIsSet_ = false;
}

std::string ListEnhanceFullSqlStatisticsRequestBody::getClientAddr() const
{
    return clientAddr_;
}

void ListEnhanceFullSqlStatisticsRequestBody::setClientAddr(const std::string& value)
{
    clientAddr_ = value;
    clientAddrIsSet_ = true;
}

bool ListEnhanceFullSqlStatisticsRequestBody::clientAddrIsSet() const
{
    return clientAddrIsSet_;
}

void ListEnhanceFullSqlStatisticsRequestBody::unsetclientAddr()
{
    clientAddrIsSet_ = false;
}

std::string ListEnhanceFullSqlStatisticsRequestBody::getClientPort() const
{
    return clientPort_;
}

void ListEnhanceFullSqlStatisticsRequestBody::setClientPort(const std::string& value)
{
    clientPort_ = value;
    clientPortIsSet_ = true;
}

bool ListEnhanceFullSqlStatisticsRequestBody::clientPortIsSet() const
{
    return clientPortIsSet_;
}

void ListEnhanceFullSqlStatisticsRequestBody::unsetclientPort()
{
    clientPortIsSet_ = false;
}

std::string ListEnhanceFullSqlStatisticsRequestBody::getOrderBy() const
{
    return orderBy_;
}

void ListEnhanceFullSqlStatisticsRequestBody::setOrderBy(const std::string& value)
{
    orderBy_ = value;
    orderByIsSet_ = true;
}

bool ListEnhanceFullSqlStatisticsRequestBody::orderByIsSet() const
{
    return orderByIsSet_;
}

void ListEnhanceFullSqlStatisticsRequestBody::unsetorderBy()
{
    orderByIsSet_ = false;
}

bool ListEnhanceFullSqlStatisticsRequestBody::isIsSlowSql() const
{
    return isSlowSql_;
}

void ListEnhanceFullSqlStatisticsRequestBody::setIsSlowSql(bool value)
{
    isSlowSql_ = value;
    isSlowSqlIsSet_ = true;
}

bool ListEnhanceFullSqlStatisticsRequestBody::isSlowSqlIsSet() const
{
    return isSlowSqlIsSet_;
}

void ListEnhanceFullSqlStatisticsRequestBody::unsetisSlowSql()
{
    isSlowSqlIsSet_ = false;
}

std::string ListEnhanceFullSqlStatisticsRequestBody::getOrder() const
{
    return order_;
}

void ListEnhanceFullSqlStatisticsRequestBody::setOrder(const std::string& value)
{
    order_ = value;
    orderIsSet_ = true;
}

bool ListEnhanceFullSqlStatisticsRequestBody::orderIsSet() const
{
    return orderIsSet_;
}

void ListEnhanceFullSqlStatisticsRequestBody::unsetorder()
{
    orderIsSet_ = false;
}

std::string ListEnhanceFullSqlStatisticsRequestBody::getApplicationName() const
{
    return applicationName_;
}

void ListEnhanceFullSqlStatisticsRequestBody::setApplicationName(const std::string& value)
{
    applicationName_ = value;
    applicationNameIsSet_ = true;
}

bool ListEnhanceFullSqlStatisticsRequestBody::applicationNameIsSet() const
{
    return applicationNameIsSet_;
}

void ListEnhanceFullSqlStatisticsRequestBody::unsetapplicationName()
{
    applicationNameIsSet_ = false;
}

std::string ListEnhanceFullSqlStatisticsRequestBody::getComponentId() const
{
    return componentId_;
}

void ListEnhanceFullSqlStatisticsRequestBody::setComponentId(const std::string& value)
{
    componentId_ = value;
    componentIdIsSet_ = true;
}

bool ListEnhanceFullSqlStatisticsRequestBody::componentIdIsSet() const
{
    return componentIdIsSet_;
}

void ListEnhanceFullSqlStatisticsRequestBody::unsetcomponentId()
{
    componentIdIsSet_ = false;
}

std::vector<MultiQueryConditionOption>& ListEnhanceFullSqlStatisticsRequestBody::getMultiQueries()
{
    return multiQueries_;
}

void ListEnhanceFullSqlStatisticsRequestBody::setMultiQueries(const std::vector<MultiQueryConditionOption>& value)
{
    multiQueries_ = value;
    multiQueriesIsSet_ = true;
}

bool ListEnhanceFullSqlStatisticsRequestBody::multiQueriesIsSet() const
{
    return multiQueriesIsSet_;
}

void ListEnhanceFullSqlStatisticsRequestBody::unsetmultiQueries()
{
    multiQueriesIsSet_ = false;
}

std::vector<CompareConditionOption>& ListEnhanceFullSqlStatisticsRequestBody::getCompareConditions()
{
    return compareConditions_;
}

void ListEnhanceFullSqlStatisticsRequestBody::setCompareConditions(const std::vector<CompareConditionOption>& value)
{
    compareConditions_ = value;
    compareConditionsIsSet_ = true;
}

bool ListEnhanceFullSqlStatisticsRequestBody::compareConditionsIsSet() const
{
    return compareConditionsIsSet_;
}

void ListEnhanceFullSqlStatisticsRequestBody::unsetcompareConditions()
{
    compareConditionsIsSet_ = false;
}

}
}
}
}
}


