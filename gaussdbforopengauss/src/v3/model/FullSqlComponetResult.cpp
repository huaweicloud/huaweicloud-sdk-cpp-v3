

#include "huaweicloud/gaussdbforopengauss/v3/model/FullSqlComponetResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




FullSqlComponetResult::FullSqlComponetResult()
{
    componentId_ = "";
    componentIdIsSet_ = false;
    dbName_ = "";
    dbNameIsSet_ = false;
    schemaName_ = "";
    schemaNameIsSet_ = false;
    originNode_ = "";
    originNodeIsSet_ = false;
    username_ = "";
    usernameIsSet_ = false;
    applicationName_ = "";
    applicationNameIsSet_ = false;
    clientAddr_ = "";
    clientAddrIsSet_ = false;
    clientPort_ = "";
    clientPortIsSet_ = false;
    parentSqlId_ = "";
    parentSqlIdIsSet_ = false;
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
    threadId_ = "";
    threadIdIsSet_ = false;
    sessionId_ = "";
    sessionIdIsSet_ = false;
    beginTime_ = "";
    beginTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    slowQueryThreshold_ = 0L;
    slowQueryThresholdIsSet_ = false;
    nSoftParse_ = 0L;
    nSoftParseIsSet_ = false;
    nHardParse_ = 0L;
    nHardParseIsSet_ = false;
    queryPlan_ = "";
    queryPlanIsSet_ = false;
    nReturnRows_ = 0L;
    nReturnRowsIsSet_ = false;
    nTuplesFetched_ = 0L;
    nTuplesFetchedIsSet_ = false;
    nTuplesReturned_ = 0L;
    nTuplesReturnedIsSet_ = false;
    nTuplesInserted_ = 0L;
    nTuplesInsertedIsSet_ = false;
    nTuplesUpdated_ = 0L;
    nTuplesUpdatedIsSet_ = false;
    nTuplesDeleted_ = 0L;
    nTuplesDeletedIsSet_ = false;
    nBlocksFetched_ = 0L;
    nBlocksFetchedIsSet_ = false;
    nBlocksHit_ = 0L;
    nBlocksHitIsSet_ = false;
    dbTime_ = 0L;
    dbTimeIsSet_ = false;
    cpuTime_ = 0L;
    cpuTimeIsSet_ = false;
    executionTime_ = 0L;
    executionTimeIsSet_ = false;
    parseTime_ = 0L;
    parseTimeIsSet_ = false;
    planTime_ = 0L;
    planTimeIsSet_ = false;
    rewriteTime_ = 0L;
    rewriteTimeIsSet_ = false;
    plExecutionTime_ = 0L;
    plExecutionTimeIsSet_ = false;
    plCompilationTime_ = 0L;
    plCompilationTimeIsSet_ = false;
    dataIoTime_ = 0L;
    dataIoTimeIsSet_ = false;
    lockCount_ = 0L;
    lockCountIsSet_ = false;
    lockTime_ = 0L;
    lockTimeIsSet_ = false;
    lockWaitCount_ = 0L;
    lockWaitCountIsSet_ = false;
    lockWaitTime_ = 0L;
    lockWaitTimeIsSet_ = false;
    details_ = "";
    detailsIsSet_ = false;
    isSlowSql_ = false;
    isSlowSqlIsSet_ = false;
    advise_ = "";
    adviseIsSet_ = false;
    finishStatus_ = "";
    finishStatusIsSet_ = false;
    netSendInfo_ = "";
    netSendInfoIsSet_ = false;
    netRecvInfo_ = "";
    netRecvInfoIsSet_ = false;
    netStreamSendInfo_ = "";
    netStreamSendInfoIsSet_ = false;
    netStreamRecvInfo_ = "";
    netStreamRecvInfoIsSet_ = false;
}

FullSqlComponetResult::~FullSqlComponetResult() = default;

void FullSqlComponetResult::validate()
{
}

web::json::value FullSqlComponetResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(componentIdIsSet_) {
        val[utility::conversions::to_string_t("component_id")] = ModelBase::toJson(componentId_);
    }
    if(dbNameIsSet_) {
        val[utility::conversions::to_string_t("db_name")] = ModelBase::toJson(dbName_);
    }
    if(schemaNameIsSet_) {
        val[utility::conversions::to_string_t("schema_name")] = ModelBase::toJson(schemaName_);
    }
    if(originNodeIsSet_) {
        val[utility::conversions::to_string_t("origin_node")] = ModelBase::toJson(originNode_);
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
    if(parentSqlIdIsSet_) {
        val[utility::conversions::to_string_t("parent_sql_id")] = ModelBase::toJson(parentSqlId_);
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
    if(threadIdIsSet_) {
        val[utility::conversions::to_string_t("thread_id")] = ModelBase::toJson(threadId_);
    }
    if(sessionIdIsSet_) {
        val[utility::conversions::to_string_t("session_id")] = ModelBase::toJson(sessionId_);
    }
    if(beginTimeIsSet_) {
        val[utility::conversions::to_string_t("begin_time")] = ModelBase::toJson(beginTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(slowQueryThresholdIsSet_) {
        val[utility::conversions::to_string_t("slow_query_threshold")] = ModelBase::toJson(slowQueryThreshold_);
    }
    if(nSoftParseIsSet_) {
        val[utility::conversions::to_string_t("n_soft_parse")] = ModelBase::toJson(nSoftParse_);
    }
    if(nHardParseIsSet_) {
        val[utility::conversions::to_string_t("n_hard_parse")] = ModelBase::toJson(nHardParse_);
    }
    if(queryPlanIsSet_) {
        val[utility::conversions::to_string_t("query_plan")] = ModelBase::toJson(queryPlan_);
    }
    if(nReturnRowsIsSet_) {
        val[utility::conversions::to_string_t("n_return_rows")] = ModelBase::toJson(nReturnRows_);
    }
    if(nTuplesFetchedIsSet_) {
        val[utility::conversions::to_string_t("n_tuples_fetched")] = ModelBase::toJson(nTuplesFetched_);
    }
    if(nTuplesReturnedIsSet_) {
        val[utility::conversions::to_string_t("n_tuples_returned")] = ModelBase::toJson(nTuplesReturned_);
    }
    if(nTuplesInsertedIsSet_) {
        val[utility::conversions::to_string_t("n_tuples_inserted")] = ModelBase::toJson(nTuplesInserted_);
    }
    if(nTuplesUpdatedIsSet_) {
        val[utility::conversions::to_string_t("n_tuples_updated")] = ModelBase::toJson(nTuplesUpdated_);
    }
    if(nTuplesDeletedIsSet_) {
        val[utility::conversions::to_string_t("n_tuples_deleted")] = ModelBase::toJson(nTuplesDeleted_);
    }
    if(nBlocksFetchedIsSet_) {
        val[utility::conversions::to_string_t("n_blocks_fetched")] = ModelBase::toJson(nBlocksFetched_);
    }
    if(nBlocksHitIsSet_) {
        val[utility::conversions::to_string_t("n_blocks_hit")] = ModelBase::toJson(nBlocksHit_);
    }
    if(dbTimeIsSet_) {
        val[utility::conversions::to_string_t("db_time")] = ModelBase::toJson(dbTime_);
    }
    if(cpuTimeIsSet_) {
        val[utility::conversions::to_string_t("cpu_time")] = ModelBase::toJson(cpuTime_);
    }
    if(executionTimeIsSet_) {
        val[utility::conversions::to_string_t("execution_time")] = ModelBase::toJson(executionTime_);
    }
    if(parseTimeIsSet_) {
        val[utility::conversions::to_string_t("parse_time")] = ModelBase::toJson(parseTime_);
    }
    if(planTimeIsSet_) {
        val[utility::conversions::to_string_t("plan_time")] = ModelBase::toJson(planTime_);
    }
    if(rewriteTimeIsSet_) {
        val[utility::conversions::to_string_t("rewrite_time")] = ModelBase::toJson(rewriteTime_);
    }
    if(plExecutionTimeIsSet_) {
        val[utility::conversions::to_string_t("pl_execution_time")] = ModelBase::toJson(plExecutionTime_);
    }
    if(plCompilationTimeIsSet_) {
        val[utility::conversions::to_string_t("pl_compilation_time")] = ModelBase::toJson(plCompilationTime_);
    }
    if(dataIoTimeIsSet_) {
        val[utility::conversions::to_string_t("data_io_time")] = ModelBase::toJson(dataIoTime_);
    }
    if(lockCountIsSet_) {
        val[utility::conversions::to_string_t("lock_count")] = ModelBase::toJson(lockCount_);
    }
    if(lockTimeIsSet_) {
        val[utility::conversions::to_string_t("lock_time")] = ModelBase::toJson(lockTime_);
    }
    if(lockWaitCountIsSet_) {
        val[utility::conversions::to_string_t("lock_wait_count")] = ModelBase::toJson(lockWaitCount_);
    }
    if(lockWaitTimeIsSet_) {
        val[utility::conversions::to_string_t("lock_wait_time")] = ModelBase::toJson(lockWaitTime_);
    }
    if(detailsIsSet_) {
        val[utility::conversions::to_string_t("details")] = ModelBase::toJson(details_);
    }
    if(isSlowSqlIsSet_) {
        val[utility::conversions::to_string_t("is_slow_sql")] = ModelBase::toJson(isSlowSql_);
    }
    if(adviseIsSet_) {
        val[utility::conversions::to_string_t("advise")] = ModelBase::toJson(advise_);
    }
    if(finishStatusIsSet_) {
        val[utility::conversions::to_string_t("finish_status")] = ModelBase::toJson(finishStatus_);
    }
    if(netSendInfoIsSet_) {
        val[utility::conversions::to_string_t("net_send_info")] = ModelBase::toJson(netSendInfo_);
    }
    if(netRecvInfoIsSet_) {
        val[utility::conversions::to_string_t("net_recv_info")] = ModelBase::toJson(netRecvInfo_);
    }
    if(netStreamSendInfoIsSet_) {
        val[utility::conversions::to_string_t("net_stream_send_info")] = ModelBase::toJson(netStreamSendInfo_);
    }
    if(netStreamRecvInfoIsSet_) {
        val[utility::conversions::to_string_t("net_stream_recv_info")] = ModelBase::toJson(netStreamRecvInfo_);
    }

    return val;
}
bool FullSqlComponetResult::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("origin_node"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("origin_node"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOriginNode(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("parent_sql_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parent_sql_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParentSqlId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("thread_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("thread_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setThreadId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("slow_query_threshold"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("slow_query_threshold"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSlowQueryThreshold(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("n_soft_parse"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("n_soft_parse"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNSoftParse(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("n_hard_parse"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("n_hard_parse"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNHardParse(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("query_plan"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("query_plan"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQueryPlan(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("n_return_rows"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("n_return_rows"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNReturnRows(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("n_tuples_fetched"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("n_tuples_fetched"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNTuplesFetched(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("n_tuples_returned"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("n_tuples_returned"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNTuplesReturned(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("n_tuples_inserted"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("n_tuples_inserted"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNTuplesInserted(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("n_tuples_updated"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("n_tuples_updated"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNTuplesUpdated(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("n_tuples_deleted"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("n_tuples_deleted"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNTuplesDeleted(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("n_blocks_fetched"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("n_blocks_fetched"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNBlocksFetched(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("n_blocks_hit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("n_blocks_hit"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNBlocksHit(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("execution_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execution_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecutionTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("parse_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("parse_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setParseTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("plan_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("plan_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlanTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rewrite_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rewrite_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRewriteTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pl_execution_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pl_execution_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlExecutionTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pl_compilation_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pl_compilation_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlCompilationTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("lock_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lock_count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLockCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lock_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lock_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLockTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lock_wait_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lock_wait_count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLockWaitCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lock_wait_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lock_wait_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLockWaitTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("details"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("details"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDetails(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("advise"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("advise"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAdvise(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("finish_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("finish_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFinishStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("net_send_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("net_send_info"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNetSendInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("net_recv_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("net_recv_info"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNetRecvInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("net_stream_send_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("net_stream_send_info"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNetStreamSendInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("net_stream_recv_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("net_stream_recv_info"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNetStreamRecvInfo(refVal);
        }
    }
    return ok;
}


std::string FullSqlComponetResult::getComponentId() const
{
    return componentId_;
}

void FullSqlComponetResult::setComponentId(const std::string& value)
{
    componentId_ = value;
    componentIdIsSet_ = true;
}

bool FullSqlComponetResult::componentIdIsSet() const
{
    return componentIdIsSet_;
}

void FullSqlComponetResult::unsetcomponentId()
{
    componentIdIsSet_ = false;
}

std::string FullSqlComponetResult::getDbName() const
{
    return dbName_;
}

void FullSqlComponetResult::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool FullSqlComponetResult::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void FullSqlComponetResult::unsetdbName()
{
    dbNameIsSet_ = false;
}

std::string FullSqlComponetResult::getSchemaName() const
{
    return schemaName_;
}

void FullSqlComponetResult::setSchemaName(const std::string& value)
{
    schemaName_ = value;
    schemaNameIsSet_ = true;
}

bool FullSqlComponetResult::schemaNameIsSet() const
{
    return schemaNameIsSet_;
}

void FullSqlComponetResult::unsetschemaName()
{
    schemaNameIsSet_ = false;
}

std::string FullSqlComponetResult::getOriginNode() const
{
    return originNode_;
}

void FullSqlComponetResult::setOriginNode(const std::string& value)
{
    originNode_ = value;
    originNodeIsSet_ = true;
}

bool FullSqlComponetResult::originNodeIsSet() const
{
    return originNodeIsSet_;
}

void FullSqlComponetResult::unsetoriginNode()
{
    originNodeIsSet_ = false;
}

std::string FullSqlComponetResult::getUsername() const
{
    return username_;
}

void FullSqlComponetResult::setUsername(const std::string& value)
{
    username_ = value;
    usernameIsSet_ = true;
}

bool FullSqlComponetResult::usernameIsSet() const
{
    return usernameIsSet_;
}

void FullSqlComponetResult::unsetusername()
{
    usernameIsSet_ = false;
}

std::string FullSqlComponetResult::getApplicationName() const
{
    return applicationName_;
}

void FullSqlComponetResult::setApplicationName(const std::string& value)
{
    applicationName_ = value;
    applicationNameIsSet_ = true;
}

bool FullSqlComponetResult::applicationNameIsSet() const
{
    return applicationNameIsSet_;
}

void FullSqlComponetResult::unsetapplicationName()
{
    applicationNameIsSet_ = false;
}

std::string FullSqlComponetResult::getClientAddr() const
{
    return clientAddr_;
}

void FullSqlComponetResult::setClientAddr(const std::string& value)
{
    clientAddr_ = value;
    clientAddrIsSet_ = true;
}

bool FullSqlComponetResult::clientAddrIsSet() const
{
    return clientAddrIsSet_;
}

void FullSqlComponetResult::unsetclientAddr()
{
    clientAddrIsSet_ = false;
}

std::string FullSqlComponetResult::getClientPort() const
{
    return clientPort_;
}

void FullSqlComponetResult::setClientPort(const std::string& value)
{
    clientPort_ = value;
    clientPortIsSet_ = true;
}

bool FullSqlComponetResult::clientPortIsSet() const
{
    return clientPortIsSet_;
}

void FullSqlComponetResult::unsetclientPort()
{
    clientPortIsSet_ = false;
}

std::string FullSqlComponetResult::getParentSqlId() const
{
    return parentSqlId_;
}

void FullSqlComponetResult::setParentSqlId(const std::string& value)
{
    parentSqlId_ = value;
    parentSqlIdIsSet_ = true;
}

bool FullSqlComponetResult::parentSqlIdIsSet() const
{
    return parentSqlIdIsSet_;
}

void FullSqlComponetResult::unsetparentSqlId()
{
    parentSqlIdIsSet_ = false;
}

std::string FullSqlComponetResult::getSqlId() const
{
    return sqlId_;
}

void FullSqlComponetResult::setSqlId(const std::string& value)
{
    sqlId_ = value;
    sqlIdIsSet_ = true;
}

bool FullSqlComponetResult::sqlIdIsSet() const
{
    return sqlIdIsSet_;
}

void FullSqlComponetResult::unsetsqlId()
{
    sqlIdIsSet_ = false;
}

std::string FullSqlComponetResult::getSqlExecId() const
{
    return sqlExecId_;
}

void FullSqlComponetResult::setSqlExecId(const std::string& value)
{
    sqlExecId_ = value;
    sqlExecIdIsSet_ = true;
}

bool FullSqlComponetResult::sqlExecIdIsSet() const
{
    return sqlExecIdIsSet_;
}

void FullSqlComponetResult::unsetsqlExecId()
{
    sqlExecIdIsSet_ = false;
}

std::string FullSqlComponetResult::getTransactionId() const
{
    return transactionId_;
}

void FullSqlComponetResult::setTransactionId(const std::string& value)
{
    transactionId_ = value;
    transactionIdIsSet_ = true;
}

bool FullSqlComponetResult::transactionIdIsSet() const
{
    return transactionIdIsSet_;
}

void FullSqlComponetResult::unsettransactionId()
{
    transactionIdIsSet_ = false;
}

std::string FullSqlComponetResult::getTraceId() const
{
    return traceId_;
}

void FullSqlComponetResult::setTraceId(const std::string& value)
{
    traceId_ = value;
    traceIdIsSet_ = true;
}

bool FullSqlComponetResult::traceIdIsSet() const
{
    return traceIdIsSet_;
}

void FullSqlComponetResult::unsettraceId()
{
    traceIdIsSet_ = false;
}

std::string FullSqlComponetResult::getQuery() const
{
    return query_;
}

void FullSqlComponetResult::setQuery(const std::string& value)
{
    query_ = value;
    queryIsSet_ = true;
}

bool FullSqlComponetResult::queryIsSet() const
{
    return queryIsSet_;
}

void FullSqlComponetResult::unsetquery()
{
    queryIsSet_ = false;
}

std::string FullSqlComponetResult::getThreadId() const
{
    return threadId_;
}

void FullSqlComponetResult::setThreadId(const std::string& value)
{
    threadId_ = value;
    threadIdIsSet_ = true;
}

bool FullSqlComponetResult::threadIdIsSet() const
{
    return threadIdIsSet_;
}

void FullSqlComponetResult::unsetthreadId()
{
    threadIdIsSet_ = false;
}

std::string FullSqlComponetResult::getSessionId() const
{
    return sessionId_;
}

void FullSqlComponetResult::setSessionId(const std::string& value)
{
    sessionId_ = value;
    sessionIdIsSet_ = true;
}

bool FullSqlComponetResult::sessionIdIsSet() const
{
    return sessionIdIsSet_;
}

void FullSqlComponetResult::unsetsessionId()
{
    sessionIdIsSet_ = false;
}

std::string FullSqlComponetResult::getBeginTime() const
{
    return beginTime_;
}

void FullSqlComponetResult::setBeginTime(const std::string& value)
{
    beginTime_ = value;
    beginTimeIsSet_ = true;
}

bool FullSqlComponetResult::beginTimeIsSet() const
{
    return beginTimeIsSet_;
}

void FullSqlComponetResult::unsetbeginTime()
{
    beginTimeIsSet_ = false;
}

std::string FullSqlComponetResult::getEndTime() const
{
    return endTime_;
}

void FullSqlComponetResult::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool FullSqlComponetResult::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void FullSqlComponetResult::unsetendTime()
{
    endTimeIsSet_ = false;
}

int64_t FullSqlComponetResult::getSlowQueryThreshold() const
{
    return slowQueryThreshold_;
}

void FullSqlComponetResult::setSlowQueryThreshold(int64_t value)
{
    slowQueryThreshold_ = value;
    slowQueryThresholdIsSet_ = true;
}

bool FullSqlComponetResult::slowQueryThresholdIsSet() const
{
    return slowQueryThresholdIsSet_;
}

void FullSqlComponetResult::unsetslowQueryThreshold()
{
    slowQueryThresholdIsSet_ = false;
}

int64_t FullSqlComponetResult::getNSoftParse() const
{
    return nSoftParse_;
}

void FullSqlComponetResult::setNSoftParse(int64_t value)
{
    nSoftParse_ = value;
    nSoftParseIsSet_ = true;
}

bool FullSqlComponetResult::nSoftParseIsSet() const
{
    return nSoftParseIsSet_;
}

void FullSqlComponetResult::unsetnSoftParse()
{
    nSoftParseIsSet_ = false;
}

int64_t FullSqlComponetResult::getNHardParse() const
{
    return nHardParse_;
}

void FullSqlComponetResult::setNHardParse(int64_t value)
{
    nHardParse_ = value;
    nHardParseIsSet_ = true;
}

bool FullSqlComponetResult::nHardParseIsSet() const
{
    return nHardParseIsSet_;
}

void FullSqlComponetResult::unsetnHardParse()
{
    nHardParseIsSet_ = false;
}

std::string FullSqlComponetResult::getQueryPlan() const
{
    return queryPlan_;
}

void FullSqlComponetResult::setQueryPlan(const std::string& value)
{
    queryPlan_ = value;
    queryPlanIsSet_ = true;
}

bool FullSqlComponetResult::queryPlanIsSet() const
{
    return queryPlanIsSet_;
}

void FullSqlComponetResult::unsetqueryPlan()
{
    queryPlanIsSet_ = false;
}

int64_t FullSqlComponetResult::getNReturnRows() const
{
    return nReturnRows_;
}

void FullSqlComponetResult::setNReturnRows(int64_t value)
{
    nReturnRows_ = value;
    nReturnRowsIsSet_ = true;
}

bool FullSqlComponetResult::nReturnRowsIsSet() const
{
    return nReturnRowsIsSet_;
}

void FullSqlComponetResult::unsetnReturnRows()
{
    nReturnRowsIsSet_ = false;
}

int64_t FullSqlComponetResult::getNTuplesFetched() const
{
    return nTuplesFetched_;
}

void FullSqlComponetResult::setNTuplesFetched(int64_t value)
{
    nTuplesFetched_ = value;
    nTuplesFetchedIsSet_ = true;
}

bool FullSqlComponetResult::nTuplesFetchedIsSet() const
{
    return nTuplesFetchedIsSet_;
}

void FullSqlComponetResult::unsetnTuplesFetched()
{
    nTuplesFetchedIsSet_ = false;
}

int64_t FullSqlComponetResult::getNTuplesReturned() const
{
    return nTuplesReturned_;
}

void FullSqlComponetResult::setNTuplesReturned(int64_t value)
{
    nTuplesReturned_ = value;
    nTuplesReturnedIsSet_ = true;
}

bool FullSqlComponetResult::nTuplesReturnedIsSet() const
{
    return nTuplesReturnedIsSet_;
}

void FullSqlComponetResult::unsetnTuplesReturned()
{
    nTuplesReturnedIsSet_ = false;
}

int64_t FullSqlComponetResult::getNTuplesInserted() const
{
    return nTuplesInserted_;
}

void FullSqlComponetResult::setNTuplesInserted(int64_t value)
{
    nTuplesInserted_ = value;
    nTuplesInsertedIsSet_ = true;
}

bool FullSqlComponetResult::nTuplesInsertedIsSet() const
{
    return nTuplesInsertedIsSet_;
}

void FullSqlComponetResult::unsetnTuplesInserted()
{
    nTuplesInsertedIsSet_ = false;
}

int64_t FullSqlComponetResult::getNTuplesUpdated() const
{
    return nTuplesUpdated_;
}

void FullSqlComponetResult::setNTuplesUpdated(int64_t value)
{
    nTuplesUpdated_ = value;
    nTuplesUpdatedIsSet_ = true;
}

bool FullSqlComponetResult::nTuplesUpdatedIsSet() const
{
    return nTuplesUpdatedIsSet_;
}

void FullSqlComponetResult::unsetnTuplesUpdated()
{
    nTuplesUpdatedIsSet_ = false;
}

int64_t FullSqlComponetResult::getNTuplesDeleted() const
{
    return nTuplesDeleted_;
}

void FullSqlComponetResult::setNTuplesDeleted(int64_t value)
{
    nTuplesDeleted_ = value;
    nTuplesDeletedIsSet_ = true;
}

bool FullSqlComponetResult::nTuplesDeletedIsSet() const
{
    return nTuplesDeletedIsSet_;
}

void FullSqlComponetResult::unsetnTuplesDeleted()
{
    nTuplesDeletedIsSet_ = false;
}

int64_t FullSqlComponetResult::getNBlocksFetched() const
{
    return nBlocksFetched_;
}

void FullSqlComponetResult::setNBlocksFetched(int64_t value)
{
    nBlocksFetched_ = value;
    nBlocksFetchedIsSet_ = true;
}

bool FullSqlComponetResult::nBlocksFetchedIsSet() const
{
    return nBlocksFetchedIsSet_;
}

void FullSqlComponetResult::unsetnBlocksFetched()
{
    nBlocksFetchedIsSet_ = false;
}

int64_t FullSqlComponetResult::getNBlocksHit() const
{
    return nBlocksHit_;
}

void FullSqlComponetResult::setNBlocksHit(int64_t value)
{
    nBlocksHit_ = value;
    nBlocksHitIsSet_ = true;
}

bool FullSqlComponetResult::nBlocksHitIsSet() const
{
    return nBlocksHitIsSet_;
}

void FullSqlComponetResult::unsetnBlocksHit()
{
    nBlocksHitIsSet_ = false;
}

int64_t FullSqlComponetResult::getDbTime() const
{
    return dbTime_;
}

void FullSqlComponetResult::setDbTime(int64_t value)
{
    dbTime_ = value;
    dbTimeIsSet_ = true;
}

bool FullSqlComponetResult::dbTimeIsSet() const
{
    return dbTimeIsSet_;
}

void FullSqlComponetResult::unsetdbTime()
{
    dbTimeIsSet_ = false;
}

int64_t FullSqlComponetResult::getCpuTime() const
{
    return cpuTime_;
}

void FullSqlComponetResult::setCpuTime(int64_t value)
{
    cpuTime_ = value;
    cpuTimeIsSet_ = true;
}

bool FullSqlComponetResult::cpuTimeIsSet() const
{
    return cpuTimeIsSet_;
}

void FullSqlComponetResult::unsetcpuTime()
{
    cpuTimeIsSet_ = false;
}

int64_t FullSqlComponetResult::getExecutionTime() const
{
    return executionTime_;
}

void FullSqlComponetResult::setExecutionTime(int64_t value)
{
    executionTime_ = value;
    executionTimeIsSet_ = true;
}

bool FullSqlComponetResult::executionTimeIsSet() const
{
    return executionTimeIsSet_;
}

void FullSqlComponetResult::unsetexecutionTime()
{
    executionTimeIsSet_ = false;
}

int64_t FullSqlComponetResult::getParseTime() const
{
    return parseTime_;
}

void FullSqlComponetResult::setParseTime(int64_t value)
{
    parseTime_ = value;
    parseTimeIsSet_ = true;
}

bool FullSqlComponetResult::parseTimeIsSet() const
{
    return parseTimeIsSet_;
}

void FullSqlComponetResult::unsetparseTime()
{
    parseTimeIsSet_ = false;
}

int64_t FullSqlComponetResult::getPlanTime() const
{
    return planTime_;
}

void FullSqlComponetResult::setPlanTime(int64_t value)
{
    planTime_ = value;
    planTimeIsSet_ = true;
}

bool FullSqlComponetResult::planTimeIsSet() const
{
    return planTimeIsSet_;
}

void FullSqlComponetResult::unsetplanTime()
{
    planTimeIsSet_ = false;
}

int64_t FullSqlComponetResult::getRewriteTime() const
{
    return rewriteTime_;
}

void FullSqlComponetResult::setRewriteTime(int64_t value)
{
    rewriteTime_ = value;
    rewriteTimeIsSet_ = true;
}

bool FullSqlComponetResult::rewriteTimeIsSet() const
{
    return rewriteTimeIsSet_;
}

void FullSqlComponetResult::unsetrewriteTime()
{
    rewriteTimeIsSet_ = false;
}

int64_t FullSqlComponetResult::getPlExecutionTime() const
{
    return plExecutionTime_;
}

void FullSqlComponetResult::setPlExecutionTime(int64_t value)
{
    plExecutionTime_ = value;
    plExecutionTimeIsSet_ = true;
}

bool FullSqlComponetResult::plExecutionTimeIsSet() const
{
    return plExecutionTimeIsSet_;
}

void FullSqlComponetResult::unsetplExecutionTime()
{
    plExecutionTimeIsSet_ = false;
}

int64_t FullSqlComponetResult::getPlCompilationTime() const
{
    return plCompilationTime_;
}

void FullSqlComponetResult::setPlCompilationTime(int64_t value)
{
    plCompilationTime_ = value;
    plCompilationTimeIsSet_ = true;
}

bool FullSqlComponetResult::plCompilationTimeIsSet() const
{
    return plCompilationTimeIsSet_;
}

void FullSqlComponetResult::unsetplCompilationTime()
{
    plCompilationTimeIsSet_ = false;
}

int64_t FullSqlComponetResult::getDataIoTime() const
{
    return dataIoTime_;
}

void FullSqlComponetResult::setDataIoTime(int64_t value)
{
    dataIoTime_ = value;
    dataIoTimeIsSet_ = true;
}

bool FullSqlComponetResult::dataIoTimeIsSet() const
{
    return dataIoTimeIsSet_;
}

void FullSqlComponetResult::unsetdataIoTime()
{
    dataIoTimeIsSet_ = false;
}

int64_t FullSqlComponetResult::getLockCount() const
{
    return lockCount_;
}

void FullSqlComponetResult::setLockCount(int64_t value)
{
    lockCount_ = value;
    lockCountIsSet_ = true;
}

bool FullSqlComponetResult::lockCountIsSet() const
{
    return lockCountIsSet_;
}

void FullSqlComponetResult::unsetlockCount()
{
    lockCountIsSet_ = false;
}

int64_t FullSqlComponetResult::getLockTime() const
{
    return lockTime_;
}

void FullSqlComponetResult::setLockTime(int64_t value)
{
    lockTime_ = value;
    lockTimeIsSet_ = true;
}

bool FullSqlComponetResult::lockTimeIsSet() const
{
    return lockTimeIsSet_;
}

void FullSqlComponetResult::unsetlockTime()
{
    lockTimeIsSet_ = false;
}

int64_t FullSqlComponetResult::getLockWaitCount() const
{
    return lockWaitCount_;
}

void FullSqlComponetResult::setLockWaitCount(int64_t value)
{
    lockWaitCount_ = value;
    lockWaitCountIsSet_ = true;
}

bool FullSqlComponetResult::lockWaitCountIsSet() const
{
    return lockWaitCountIsSet_;
}

void FullSqlComponetResult::unsetlockWaitCount()
{
    lockWaitCountIsSet_ = false;
}

int64_t FullSqlComponetResult::getLockWaitTime() const
{
    return lockWaitTime_;
}

void FullSqlComponetResult::setLockWaitTime(int64_t value)
{
    lockWaitTime_ = value;
    lockWaitTimeIsSet_ = true;
}

bool FullSqlComponetResult::lockWaitTimeIsSet() const
{
    return lockWaitTimeIsSet_;
}

void FullSqlComponetResult::unsetlockWaitTime()
{
    lockWaitTimeIsSet_ = false;
}

std::string FullSqlComponetResult::getDetails() const
{
    return details_;
}

void FullSqlComponetResult::setDetails(const std::string& value)
{
    details_ = value;
    detailsIsSet_ = true;
}

bool FullSqlComponetResult::detailsIsSet() const
{
    return detailsIsSet_;
}

void FullSqlComponetResult::unsetdetails()
{
    detailsIsSet_ = false;
}

bool FullSqlComponetResult::isIsSlowSql() const
{
    return isSlowSql_;
}

void FullSqlComponetResult::setIsSlowSql(bool value)
{
    isSlowSql_ = value;
    isSlowSqlIsSet_ = true;
}

bool FullSqlComponetResult::isSlowSqlIsSet() const
{
    return isSlowSqlIsSet_;
}

void FullSqlComponetResult::unsetisSlowSql()
{
    isSlowSqlIsSet_ = false;
}

std::string FullSqlComponetResult::getAdvise() const
{
    return advise_;
}

void FullSqlComponetResult::setAdvise(const std::string& value)
{
    advise_ = value;
    adviseIsSet_ = true;
}

bool FullSqlComponetResult::adviseIsSet() const
{
    return adviseIsSet_;
}

void FullSqlComponetResult::unsetadvise()
{
    adviseIsSet_ = false;
}

std::string FullSqlComponetResult::getFinishStatus() const
{
    return finishStatus_;
}

void FullSqlComponetResult::setFinishStatus(const std::string& value)
{
    finishStatus_ = value;
    finishStatusIsSet_ = true;
}

bool FullSqlComponetResult::finishStatusIsSet() const
{
    return finishStatusIsSet_;
}

void FullSqlComponetResult::unsetfinishStatus()
{
    finishStatusIsSet_ = false;
}

std::string FullSqlComponetResult::getNetSendInfo() const
{
    return netSendInfo_;
}

void FullSqlComponetResult::setNetSendInfo(const std::string& value)
{
    netSendInfo_ = value;
    netSendInfoIsSet_ = true;
}

bool FullSqlComponetResult::netSendInfoIsSet() const
{
    return netSendInfoIsSet_;
}

void FullSqlComponetResult::unsetnetSendInfo()
{
    netSendInfoIsSet_ = false;
}

std::string FullSqlComponetResult::getNetRecvInfo() const
{
    return netRecvInfo_;
}

void FullSqlComponetResult::setNetRecvInfo(const std::string& value)
{
    netRecvInfo_ = value;
    netRecvInfoIsSet_ = true;
}

bool FullSqlComponetResult::netRecvInfoIsSet() const
{
    return netRecvInfoIsSet_;
}

void FullSqlComponetResult::unsetnetRecvInfo()
{
    netRecvInfoIsSet_ = false;
}

std::string FullSqlComponetResult::getNetStreamSendInfo() const
{
    return netStreamSendInfo_;
}

void FullSqlComponetResult::setNetStreamSendInfo(const std::string& value)
{
    netStreamSendInfo_ = value;
    netStreamSendInfoIsSet_ = true;
}

bool FullSqlComponetResult::netStreamSendInfoIsSet() const
{
    return netStreamSendInfoIsSet_;
}

void FullSqlComponetResult::unsetnetStreamSendInfo()
{
    netStreamSendInfoIsSet_ = false;
}

std::string FullSqlComponetResult::getNetStreamRecvInfo() const
{
    return netStreamRecvInfo_;
}

void FullSqlComponetResult::setNetStreamRecvInfo(const std::string& value)
{
    netStreamRecvInfo_ = value;
    netStreamRecvInfoIsSet_ = true;
}

bool FullSqlComponetResult::netStreamRecvInfoIsSet() const
{
    return netStreamRecvInfoIsSet_;
}

void FullSqlComponetResult::unsetnetStreamRecvInfo()
{
    netStreamRecvInfoIsSet_ = false;
}

}
}
}
}
}


