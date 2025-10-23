
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_FullSqlComponetResult_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_FullSqlComponetResult_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 全量SQL组件信息
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  FullSqlComponetResult
    : public ModelBase
{
public:
    FullSqlComponetResult();
    virtual ~FullSqlComponetResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FullSqlComponetResult members

    /// <summary>
    /// **参数解释**: 组件ID。 **取值范围**: 不涉及。
    /// </summary>

    std::string getComponentId() const;
    bool componentIdIsSet() const;
    void unsetcomponentId();
    void setComponentId(const std::string& value);

    /// <summary>
    /// **参数解释**: 数据库名称。 **取值范围**: 不涉及。
    /// </summary>

    std::string getDbName() const;
    bool dbNameIsSet() const;
    void unsetdbName();
    void setDbName(const std::string& value);

    /// <summary>
    /// **参数解释**: schema名称。 **取值范围**: 不涉及。
    /// </summary>

    std::string getSchemaName() const;
    bool schemaNameIsSet() const;
    void unsetschemaName();
    void setSchemaName(const std::string& value);

    /// <summary>
    /// **参数解释**: 原始节点。 **取值范围**: 不涉及。
    /// </summary>

    std::string getOriginNode() const;
    bool originNodeIsSet() const;
    void unsetoriginNode();
    void setOriginNode(const std::string& value);

    /// <summary>
    /// **参数解释**: 用户名。 **取值范围**: 不涉及。
    /// </summary>

    std::string getUsername() const;
    bool usernameIsSet() const;
    void unsetusername();
    void setUsername(const std::string& value);

    /// <summary>
    /// **参数解释**: 用户发起的请求的应用程序名称。 **取值范围**: 不涉及。
    /// </summary>

    std::string getApplicationName() const;
    bool applicationNameIsSet() const;
    void unsetapplicationName();
    void setApplicationName(const std::string& value);

    /// <summary>
    /// **参数解释**: 用户发起的请求的客户端地址。 **取值范围**: 不涉及。
    /// </summary>

    std::string getClientAddr() const;
    bool clientAddrIsSet() const;
    void unsetclientAddr();
    void setClientAddr(const std::string& value);

    /// <summary>
    /// **参数解释**: 用户发起请求的客户端端口。 **取值范围**: 不涉及。
    /// </summary>

    std::string getClientPort() const;
    bool clientPortIsSet() const;
    void unsetclientPort();
    void setClientPort(const std::string& value);

    /// <summary>
    /// **参数解释**: 当前语句的外层SQL的归一化SQL ID。 **取值范围**: 不涉及。
    /// </summary>

    std::string getParentSqlId() const;
    bool parentSqlIdIsSet() const;
    void unsetparentSqlId();
    void setParentSqlId(const std::string& value);

    /// <summary>
    /// **参数解释**: 归一化SQL ID，对应内核字段：unique_sql_id。 **取值范围**: 不涉及。
    /// </summary>

    std::string getSqlId() const;
    bool sqlIdIsSet() const;
    void unsetsqlId();
    void setSqlId(const std::string& value);

    /// <summary>
    /// **参数解释**: 唯一SQL ID，对应内核字段：debug_query_id。 **取值范围**: 不涉及。
    /// </summary>

    std::string getSqlExecId() const;
    bool sqlExecIdIsSet() const;
    void unsetsqlExecId();
    void setSqlExecId(const std::string& value);

    /// <summary>
    /// **参数解释**: 事务ID，对应内核字段：debug_query_id。 **取值范围**: 不涉及。
    /// </summary>

    std::string getTransactionId() const;
    bool transactionIdIsSet() const;
    void unsettransactionId();
    void setTransactionId(const std::string& value);

    /// <summary>
    /// **参数解释**: 链路ID。 **取值范围**: 不涉及。
    /// </summary>

    std::string getTraceId() const;
    bool traceIdIsSet() const;
    void unsettraceId();
    void setTraceId(const std::string& value);

    /// <summary>
    /// **参数解释**: 归一化SQL。 **取值范围**: 不涉及。
    /// </summary>

    std::string getQuery() const;
    bool queryIsSet() const;
    void unsetquery();
    void setQuery(const std::string& value);

    /// <summary>
    /// **参数解释**: 线程ID。 **取值范围**: 不涉及。
    /// </summary>

    std::string getThreadId() const;
    bool threadIdIsSet() const;
    void unsetthreadId();
    void setThreadId(const std::string& value);

    /// <summary>
    /// **参数解释**: 会话ID。 **取值范围**: 不涉及。
    /// </summary>

    std::string getSessionId() const;
    bool sessionIdIsSet() const;
    void unsetsessionId();
    void setSessionId(const std::string& value);

    /// <summary>
    /// **参数解释**: 开始时间，格式为“yyyy-mm-ddThh:mm:ss.SSSSSZ”。 **取值范围**: 不涉及。
    /// </summary>

    std::string getBeginTime() const;
    bool beginTimeIsSet() const;
    void unsetbeginTime();
    void setBeginTime(const std::string& value);

    /// <summary>
    /// **参数解释**: 结束时间，格式为“yyyy-mm-ddThh:mm:ss.SSSSSZ”。 **取值范围**: 不涉及。
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// **参数解释**: 慢SQL阈值。 **取值范围**: 不涉及。
    /// </summary>

    int64_t getSlowQueryThreshold() const;
    bool slowQueryThresholdIsSet() const;
    void unsetslowQueryThreshold();
    void setSlowQueryThreshold(int64_t value);

    /// <summary>
    /// **参数解释**: 软解析次数。 **取值范围**: 不涉及。
    /// </summary>

    int64_t getNSoftParse() const;
    bool nSoftParseIsSet() const;
    void unsetnSoftParse();
    void setNSoftParse(int64_t value);

    /// <summary>
    /// **参数解释**: 硬解析次数。 **取值范围**: 不涉及。
    /// </summary>

    int64_t getNHardParse() const;
    bool nHardParseIsSet() const;
    void unsetnHardParse();
    void setNHardParse(int64_t value);

    /// <summary>
    /// **参数解释**: 执行计划。 **取值范围**: 不涉及。
    /// </summary>

    std::string getQueryPlan() const;
    bool queryPlanIsSet() const;
    void unsetqueryPlan();
    void setQueryPlan(const std::string& value);

    /// <summary>
    /// **参数解释**: SELECT语句的返回结果集行数。 **取值范围**: 不涉及。
    /// </summary>

    int64_t getNReturnRows() const;
    bool nReturnRowsIsSet() const;
    void unsetnReturnRows();
    void setNReturnRows(int64_t value);

    /// <summary>
    /// **参数解释**: 随机扫描行。 **取值范围**: 不涉及。
    /// </summary>

    int64_t getNTuplesFetched() const;
    bool nTuplesFetchedIsSet() const;
    void unsetnTuplesFetched();
    void setNTuplesFetched(int64_t value);

    /// <summary>
    /// **参数解释**: 顺序扫描行。 **取值范围**: 不涉及。
    /// </summary>

    int64_t getNTuplesReturned() const;
    bool nTuplesReturnedIsSet() const;
    void unsetnTuplesReturned();
    void setNTuplesReturned(int64_t value);

    /// <summary>
    /// **参数解释**: 插入行。 **取值范围**: 不涉及。
    /// </summary>

    int64_t getNTuplesInserted() const;
    bool nTuplesInsertedIsSet() const;
    void unsetnTuplesInserted();
    void setNTuplesInserted(int64_t value);

    /// <summary>
    /// **参数解释**: 更新行。 **取值范围**: 不涉及。
    /// </summary>

    int64_t getNTuplesUpdated() const;
    bool nTuplesUpdatedIsSet() const;
    void unsetnTuplesUpdated();
    void setNTuplesUpdated(int64_t value);

    /// <summary>
    /// **参数解释**: 删除行。 **取值范围**: 不涉及。
    /// </summary>

    int64_t getNTuplesDeleted() const;
    bool nTuplesDeletedIsSet() const;
    void unsetnTuplesDeleted();
    void setNTuplesDeleted(int64_t value);

    /// <summary>
    /// **参数解释**: buffer的块访问次数。 **取值范围**: 不涉及。\&quot;\&quot;
    /// </summary>

    int64_t getNBlocksFetched() const;
    bool nBlocksFetchedIsSet() const;
    void unsetnBlocksFetched();
    void setNBlocksFetched(int64_t value);

    /// <summary>
    /// **参数解释**: buffer的块命中次数。 **取值范围**: 不涉及。
    /// </summary>

    int64_t getNBlocksHit() const;
    bool nBlocksHitIsSet() const;
    void unsetnBlocksHit();
    void setNBlocksHit(int64_t value);

    /// <summary>
    /// **参数解释**: 有效DB时间花费。 **取值范围**: 不涉及。
    /// </summary>

    int64_t getDbTime() const;
    bool dbTimeIsSet() const;
    void unsetdbTime();
    void setDbTime(int64_t value);

    /// <summary>
    /// **参数解释**: CPU时间（单位：微秒）。 **取值范围**: 不涉及。
    /// </summary>

    int64_t getCpuTime() const;
    bool cpuTimeIsSet() const;
    void unsetcpuTime();
    void setCpuTime(int64_t value);

    /// <summary>
    /// **参数解释**: 执行器内执行时间（单位：微秒）。 **取值范围**: 不涉及。
    /// </summary>

    int64_t getExecutionTime() const;
    bool executionTimeIsSet() const;
    void unsetexecutionTime();
    void setExecutionTime(int64_t value);

    /// <summary>
    /// **参数解释**: SQL解析时间（单位：微秒）。 **取值范围**: 不涉及。
    /// </summary>

    int64_t getParseTime() const;
    bool parseTimeIsSet() const;
    void unsetparseTime();
    void setParseTime(int64_t value);

    /// <summary>
    /// **参数解释**: 执行器内执行时间（单位：微秒）。 **取值范围**: 不涉及。
    /// </summary>

    int64_t getPlanTime() const;
    bool planTimeIsSet() const;
    void unsetplanTime();
    void setPlanTime(int64_t value);

    /// <summary>
    /// **参数解释**: SQL重写时间（单位：微秒）。 **取值范围**: 不涉及。
    /// </summary>

    int64_t getRewriteTime() const;
    bool rewriteTimeIsSet() const;
    void unsetrewriteTime();
    void setRewriteTime(int64_t value);

    /// <summary>
    /// **参数解释**: plpgsql上的执行时间（单位：微秒）。 **取值范围**: 不涉及。
    /// </summary>

    int64_t getPlExecutionTime() const;
    bool plExecutionTimeIsSet() const;
    void unsetplExecutionTime();
    void setPlExecutionTime(int64_t value);

    /// <summary>
    /// **参数解释**: plpgsql上的编译时间（单位：微秒）。 **取值范围**: 不涉及。
    /// </summary>

    int64_t getPlCompilationTime() const;
    bool plCompilationTimeIsSet() const;
    void unsetplCompilationTime();
    void setPlCompilationTime(int64_t value);

    /// <summary>
    /// **参数解释**: IO时间（单位：微秒）。 **取值范围**: 不涉及。
    /// </summary>

    int64_t getDataIoTime() const;
    bool dataIoTimeIsSet() const;
    void unsetdataIoTime();
    void setDataIoTime(int64_t value);

    /// <summary>
    /// **参数解释**: 加锁次数。 **取值范围**: 不涉及。
    /// </summary>

    int64_t getLockCount() const;
    bool lockCountIsSet() const;
    void unsetlockCount();
    void setLockCount(int64_t value);

    /// <summary>
    /// **参数解释**: 加锁耗时。 **取值范围**: 不涉及。
    /// </summary>

    int64_t getLockTime() const;
    bool lockTimeIsSet() const;
    void unsetlockTime();
    void setLockTime(int64_t value);

    /// <summary>
    /// **参数解释**: 加锁等待次数。 **取值范围**: 不涉及。
    /// </summary>

    int64_t getLockWaitCount() const;
    bool lockWaitCountIsSet() const;
    void unsetlockWaitCount();
    void setLockWaitCount(int64_t value);

    /// <summary>
    /// **参数解释**: 加锁等待时间。 **取值范围**: 不涉及。
    /// </summary>

    int64_t getLockWaitTime() const;
    bool lockWaitTimeIsSet() const;
    void unsetlockWaitTime();
    void setLockWaitTime(int64_t value);

    /// <summary>
    /// **参数解释**: 详细列表。 **取值范围**: 不涉及。
    /// </summary>

    std::string getDetails() const;
    bool detailsIsSet() const;
    void unsetdetails();
    void setDetails(const std::string& value);

    /// <summary>
    /// **参数解释**: 是否慢SQL。 **取值范围**: 不涉及。
    /// </summary>

    bool isIsSlowSql() const;
    bool isSlowSqlIsSet() const;
    void unsetisSlowSql();
    void setIsSlowSql(bool value);

    /// <summary>
    /// **参数解释**: 可能导致该SQL为慢SQL的风险信息。 **取值范围**: 不涉及。
    /// </summary>

    std::string getAdvise() const;
    bool adviseIsSet() const;
    void unsetadvise();
    void setAdvise(const std::string& value);

    /// <summary>
    /// **参数解释**: 语句完成状态。 **取值范围**: 不涉及。
    /// </summary>

    std::string getFinishStatus() const;
    bool finishStatusIsSet() const;
    void unsetfinishStatus();
    void setFinishStatus(const std::string& value);

    /// <summary>
    /// **参数解释**: 通过物理连接发送消息的网络状态。 **取值范围**: 不涉及。
    /// </summary>

    std::string getNetSendInfo() const;
    bool netSendInfoIsSet() const;
    void unsetnetSendInfo();
    void setNetSendInfo(const std::string& value);

    /// <summary>
    /// **参数解释**: 通过物理连接接收消息的网络状态。 **取值范围**: 不涉及。
    /// </summary>

    std::string getNetRecvInfo() const;
    bool netRecvInfoIsSet() const;
    void unsetnetRecvInfo();
    void setNetRecvInfo(const std::string& value);

    /// <summary>
    /// **参数解释**: 通过逻辑连接发送消息的网络状态。 **取值范围**: 不涉及。
    /// </summary>

    std::string getNetStreamSendInfo() const;
    bool netStreamSendInfoIsSet() const;
    void unsetnetStreamSendInfo();
    void setNetStreamSendInfo(const std::string& value);

    /// <summary>
    /// **参数解释**: 通过逻辑连接接收消息的网络状态。 **取值范围**: 不涉及。
    /// </summary>

    std::string getNetStreamRecvInfo() const;
    bool netStreamRecvInfoIsSet() const;
    void unsetnetStreamRecvInfo();
    void setNetStreamRecvInfo(const std::string& value);


protected:
    std::string componentId_;
    bool componentIdIsSet_;
    std::string dbName_;
    bool dbNameIsSet_;
    std::string schemaName_;
    bool schemaNameIsSet_;
    std::string originNode_;
    bool originNodeIsSet_;
    std::string username_;
    bool usernameIsSet_;
    std::string applicationName_;
    bool applicationNameIsSet_;
    std::string clientAddr_;
    bool clientAddrIsSet_;
    std::string clientPort_;
    bool clientPortIsSet_;
    std::string parentSqlId_;
    bool parentSqlIdIsSet_;
    std::string sqlId_;
    bool sqlIdIsSet_;
    std::string sqlExecId_;
    bool sqlExecIdIsSet_;
    std::string transactionId_;
    bool transactionIdIsSet_;
    std::string traceId_;
    bool traceIdIsSet_;
    std::string query_;
    bool queryIsSet_;
    std::string threadId_;
    bool threadIdIsSet_;
    std::string sessionId_;
    bool sessionIdIsSet_;
    std::string beginTime_;
    bool beginTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    int64_t slowQueryThreshold_;
    bool slowQueryThresholdIsSet_;
    int64_t nSoftParse_;
    bool nSoftParseIsSet_;
    int64_t nHardParse_;
    bool nHardParseIsSet_;
    std::string queryPlan_;
    bool queryPlanIsSet_;
    int64_t nReturnRows_;
    bool nReturnRowsIsSet_;
    int64_t nTuplesFetched_;
    bool nTuplesFetchedIsSet_;
    int64_t nTuplesReturned_;
    bool nTuplesReturnedIsSet_;
    int64_t nTuplesInserted_;
    bool nTuplesInsertedIsSet_;
    int64_t nTuplesUpdated_;
    bool nTuplesUpdatedIsSet_;
    int64_t nTuplesDeleted_;
    bool nTuplesDeletedIsSet_;
    int64_t nBlocksFetched_;
    bool nBlocksFetchedIsSet_;
    int64_t nBlocksHit_;
    bool nBlocksHitIsSet_;
    int64_t dbTime_;
    bool dbTimeIsSet_;
    int64_t cpuTime_;
    bool cpuTimeIsSet_;
    int64_t executionTime_;
    bool executionTimeIsSet_;
    int64_t parseTime_;
    bool parseTimeIsSet_;
    int64_t planTime_;
    bool planTimeIsSet_;
    int64_t rewriteTime_;
    bool rewriteTimeIsSet_;
    int64_t plExecutionTime_;
    bool plExecutionTimeIsSet_;
    int64_t plCompilationTime_;
    bool plCompilationTimeIsSet_;
    int64_t dataIoTime_;
    bool dataIoTimeIsSet_;
    int64_t lockCount_;
    bool lockCountIsSet_;
    int64_t lockTime_;
    bool lockTimeIsSet_;
    int64_t lockWaitCount_;
    bool lockWaitCountIsSet_;
    int64_t lockWaitTime_;
    bool lockWaitTimeIsSet_;
    std::string details_;
    bool detailsIsSet_;
    bool isSlowSql_;
    bool isSlowSqlIsSet_;
    std::string advise_;
    bool adviseIsSet_;
    std::string finishStatus_;
    bool finishStatusIsSet_;
    std::string netSendInfo_;
    bool netSendInfoIsSet_;
    std::string netRecvInfo_;
    bool netRecvInfoIsSet_;
    std::string netStreamSendInfo_;
    bool netStreamSendInfoIsSet_;
    std::string netStreamRecvInfo_;
    bool netStreamRecvInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_FullSqlComponetResult_H_
