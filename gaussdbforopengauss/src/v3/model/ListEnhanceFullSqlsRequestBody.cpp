

#include "huaweicloud/gaussdbforopengauss/v3/model/ListEnhanceFullSqlsRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListEnhanceFullSqlsRequestBody::ListEnhanceFullSqlsRequestBody()
{
    nodeId_ = "";
    nodeIdIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
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
    multiQueriesIsSet_ = false;
    compareConditionsIsSet_ = false;
}

ListEnhanceFullSqlsRequestBody::~ListEnhanceFullSqlsRequestBody() = default;

void ListEnhanceFullSqlsRequestBody::validate()
{
}

web::json::value ListEnhanceFullSqlsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeIdIsSet_) {
        val[utility::conversions::to_string_t("node_id")] = ModelBase::toJson(nodeId_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
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
    if(multiQueriesIsSet_) {
        val[utility::conversions::to_string_t("multi_queries")] = ModelBase::toJson(multiQueries_);
    }
    if(compareConditionsIsSet_) {
        val[utility::conversions::to_string_t("compare_conditions")] = ModelBase::toJson(compareConditions_);
    }

    return val;
}
bool ListEnhanceFullSqlsRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
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


std::string ListEnhanceFullSqlsRequestBody::getNodeId() const
{
    return nodeId_;
}

void ListEnhanceFullSqlsRequestBody::setNodeId(const std::string& value)
{
    nodeId_ = value;
    nodeIdIsSet_ = true;
}

bool ListEnhanceFullSqlsRequestBody::nodeIdIsSet() const
{
    return nodeIdIsSet_;
}

void ListEnhanceFullSqlsRequestBody::unsetnodeId()
{
    nodeIdIsSet_ = false;
}

int32_t ListEnhanceFullSqlsRequestBody::getLimit() const
{
    return limit_;
}

void ListEnhanceFullSqlsRequestBody::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListEnhanceFullSqlsRequestBody::limitIsSet() const
{
    return limitIsSet_;
}

void ListEnhanceFullSqlsRequestBody::unsetlimit()
{
    limitIsSet_ = false;
}

std::string ListEnhanceFullSqlsRequestBody::getBeginTime() const
{
    return beginTime_;
}

void ListEnhanceFullSqlsRequestBody::setBeginTime(const std::string& value)
{
    beginTime_ = value;
    beginTimeIsSet_ = true;
}

bool ListEnhanceFullSqlsRequestBody::beginTimeIsSet() const
{
    return beginTimeIsSet_;
}

void ListEnhanceFullSqlsRequestBody::unsetbeginTime()
{
    beginTimeIsSet_ = false;
}

std::string ListEnhanceFullSqlsRequestBody::getEndTime() const
{
    return endTime_;
}

void ListEnhanceFullSqlsRequestBody::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListEnhanceFullSqlsRequestBody::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListEnhanceFullSqlsRequestBody::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ListEnhanceFullSqlsRequestBody::getQuery() const
{
    return query_;
}

void ListEnhanceFullSqlsRequestBody::setQuery(const std::string& value)
{
    query_ = value;
    queryIsSet_ = true;
}

bool ListEnhanceFullSqlsRequestBody::queryIsSet() const
{
    return queryIsSet_;
}

void ListEnhanceFullSqlsRequestBody::unsetquery()
{
    queryIsSet_ = false;
}

std::string ListEnhanceFullSqlsRequestBody::getSqlId() const
{
    return sqlId_;
}

void ListEnhanceFullSqlsRequestBody::setSqlId(const std::string& value)
{
    sqlId_ = value;
    sqlIdIsSet_ = true;
}

bool ListEnhanceFullSqlsRequestBody::sqlIdIsSet() const
{
    return sqlIdIsSet_;
}

void ListEnhanceFullSqlsRequestBody::unsetsqlId()
{
    sqlIdIsSet_ = false;
}

std::string ListEnhanceFullSqlsRequestBody::getSqlExecId() const
{
    return sqlExecId_;
}

void ListEnhanceFullSqlsRequestBody::setSqlExecId(const std::string& value)
{
    sqlExecId_ = value;
    sqlExecIdIsSet_ = true;
}

bool ListEnhanceFullSqlsRequestBody::sqlExecIdIsSet() const
{
    return sqlExecIdIsSet_;
}

void ListEnhanceFullSqlsRequestBody::unsetsqlExecId()
{
    sqlExecIdIsSet_ = false;
}

std::string ListEnhanceFullSqlsRequestBody::getTransactionId() const
{
    return transactionId_;
}

void ListEnhanceFullSqlsRequestBody::setTransactionId(const std::string& value)
{
    transactionId_ = value;
    transactionIdIsSet_ = true;
}

bool ListEnhanceFullSqlsRequestBody::transactionIdIsSet() const
{
    return transactionIdIsSet_;
}

void ListEnhanceFullSqlsRequestBody::unsettransactionId()
{
    transactionIdIsSet_ = false;
}

std::string ListEnhanceFullSqlsRequestBody::getTraceId() const
{
    return traceId_;
}

void ListEnhanceFullSqlsRequestBody::setTraceId(const std::string& value)
{
    traceId_ = value;
    traceIdIsSet_ = true;
}

bool ListEnhanceFullSqlsRequestBody::traceIdIsSet() const
{
    return traceIdIsSet_;
}

void ListEnhanceFullSqlsRequestBody::unsettraceId()
{
    traceIdIsSet_ = false;
}

std::string ListEnhanceFullSqlsRequestBody::getDbName() const
{
    return dbName_;
}

void ListEnhanceFullSqlsRequestBody::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool ListEnhanceFullSqlsRequestBody::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void ListEnhanceFullSqlsRequestBody::unsetdbName()
{
    dbNameIsSet_ = false;
}

std::string ListEnhanceFullSqlsRequestBody::getSchemaName() const
{
    return schemaName_;
}

void ListEnhanceFullSqlsRequestBody::setSchemaName(const std::string& value)
{
    schemaName_ = value;
    schemaNameIsSet_ = true;
}

bool ListEnhanceFullSqlsRequestBody::schemaNameIsSet() const
{
    return schemaNameIsSet_;
}

void ListEnhanceFullSqlsRequestBody::unsetschemaName()
{
    schemaNameIsSet_ = false;
}

std::string ListEnhanceFullSqlsRequestBody::getUsername() const
{
    return username_;
}

void ListEnhanceFullSqlsRequestBody::setUsername(const std::string& value)
{
    username_ = value;
    usernameIsSet_ = true;
}

bool ListEnhanceFullSqlsRequestBody::usernameIsSet() const
{
    return usernameIsSet_;
}

void ListEnhanceFullSqlsRequestBody::unsetusername()
{
    usernameIsSet_ = false;
}

std::string ListEnhanceFullSqlsRequestBody::getClientAddr() const
{
    return clientAddr_;
}

void ListEnhanceFullSqlsRequestBody::setClientAddr(const std::string& value)
{
    clientAddr_ = value;
    clientAddrIsSet_ = true;
}

bool ListEnhanceFullSqlsRequestBody::clientAddrIsSet() const
{
    return clientAddrIsSet_;
}

void ListEnhanceFullSqlsRequestBody::unsetclientAddr()
{
    clientAddrIsSet_ = false;
}

std::string ListEnhanceFullSqlsRequestBody::getClientPort() const
{
    return clientPort_;
}

void ListEnhanceFullSqlsRequestBody::setClientPort(const std::string& value)
{
    clientPort_ = value;
    clientPortIsSet_ = true;
}

bool ListEnhanceFullSqlsRequestBody::clientPortIsSet() const
{
    return clientPortIsSet_;
}

void ListEnhanceFullSqlsRequestBody::unsetclientPort()
{
    clientPortIsSet_ = false;
}

std::string ListEnhanceFullSqlsRequestBody::getOrderBy() const
{
    return orderBy_;
}

void ListEnhanceFullSqlsRequestBody::setOrderBy(const std::string& value)
{
    orderBy_ = value;
    orderByIsSet_ = true;
}

bool ListEnhanceFullSqlsRequestBody::orderByIsSet() const
{
    return orderByIsSet_;
}

void ListEnhanceFullSqlsRequestBody::unsetorderBy()
{
    orderByIsSet_ = false;
}

bool ListEnhanceFullSqlsRequestBody::isIsSlowSql() const
{
    return isSlowSql_;
}

void ListEnhanceFullSqlsRequestBody::setIsSlowSql(bool value)
{
    isSlowSql_ = value;
    isSlowSqlIsSet_ = true;
}

bool ListEnhanceFullSqlsRequestBody::isSlowSqlIsSet() const
{
    return isSlowSqlIsSet_;
}

void ListEnhanceFullSqlsRequestBody::unsetisSlowSql()
{
    isSlowSqlIsSet_ = false;
}

std::string ListEnhanceFullSqlsRequestBody::getOrder() const
{
    return order_;
}

void ListEnhanceFullSqlsRequestBody::setOrder(const std::string& value)
{
    order_ = value;
    orderIsSet_ = true;
}

bool ListEnhanceFullSqlsRequestBody::orderIsSet() const
{
    return orderIsSet_;
}

void ListEnhanceFullSqlsRequestBody::unsetorder()
{
    orderIsSet_ = false;
}

std::vector<MultiQueryConditionOption>& ListEnhanceFullSqlsRequestBody::getMultiQueries()
{
    return multiQueries_;
}

void ListEnhanceFullSqlsRequestBody::setMultiQueries(const std::vector<MultiQueryConditionOption>& value)
{
    multiQueries_ = value;
    multiQueriesIsSet_ = true;
}

bool ListEnhanceFullSqlsRequestBody::multiQueriesIsSet() const
{
    return multiQueriesIsSet_;
}

void ListEnhanceFullSqlsRequestBody::unsetmultiQueries()
{
    multiQueriesIsSet_ = false;
}

std::vector<CompareConditionOption>& ListEnhanceFullSqlsRequestBody::getCompareConditions()
{
    return compareConditions_;
}

void ListEnhanceFullSqlsRequestBody::setCompareConditions(const std::vector<CompareConditionOption>& value)
{
    compareConditions_ = value;
    compareConditionsIsSet_ = true;
}

bool ListEnhanceFullSqlsRequestBody::compareConditionsIsSet() const
{
    return compareConditionsIsSet_;
}

void ListEnhanceFullSqlsRequestBody::unsetcompareConditions()
{
    compareConditionsIsSet_ = false;
}

}
}
}
}
}


