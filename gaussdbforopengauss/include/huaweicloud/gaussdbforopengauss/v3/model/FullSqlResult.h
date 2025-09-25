
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_FullSqlResult_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_FullSqlResult_H_


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
/// **参数解释**: 全量SQL。
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  FullSqlResult
    : public ModelBase
{
public:
    FullSqlResult();
    virtual ~FullSqlResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// FullSqlResult members

    /// <summary>
    /// **参数解释**: SQL记录唯一键ID。 **取值范围**: 不涉及。
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// **参数解释**: 实例ID。 **取值范围**: 不涉及。
    /// </summary>

    std::string getInstanceId() const;
    bool instanceIdIsSet() const;
    void unsetinstanceId();
    void setInstanceId(const std::string& value);

    /// <summary>
    /// **参数解释**: 节点ID。 **取值范围**: 不涉及。
    /// </summary>

    std::string getNodeId() const;
    bool nodeIdIsSet() const;
    void unsetnodeId();
    void setNodeId(const std::string& value);

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
    /// **参数解释**: 用户名称。 **取值范围**: 不涉及。
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
    /// **参数解释**: 解析后的原始SQL文本。 **取值范围**: 开启track_stmt_parameter参数后，会把SQL文本中的变量替换成真实值，展示原始的SQL。对于track_stmt_parameter参数关闭时采集的SQL文本，无法获取到SQL参数变量的值，展示的内容为空。
    /// </summary>

    std::string getSql() const;
    bool sqlIsSet() const;
    void unsetsql();
    void setSql(const std::string& value);

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
    /// **参数解释**: 执行总时间（单位：微秒）。 **取值范围**: 不涉及。
    /// </summary>

    int64_t getAllTime() const;
    bool allTimeIsSet() const;
    void unsetallTime();
    void setAllTime(int64_t value);

    /// <summary>
    /// **参数解释**: 有效DB时间（单位：微秒）。 **取值范围**: 不涉及。
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
    /// **参数解释**: IO时间（单位：微秒）。 **取值范围**: 不涉及。
    /// </summary>

    int64_t getDataIoTime() const;
    bool dataIoTimeIsSet() const;
    void unsetdataIoTime();
    void setDataIoTime(int64_t value);

    /// <summary>
    /// **参数解释**: 执行器内执行时间（单位：微秒）。 **取值范围**: 不涉及。
    /// </summary>

    int64_t getExecutionTime() const;
    bool executionTimeIsSet() const;
    void unsetexecutionTime();
    void setExecutionTime(int64_t value);

    /// <summary>
    /// **参数解释**: 扫描行。 **取值范围**: 不涉及。
    /// </summary>

    int64_t getScanLines() const;
    bool scanLinesIsSet() const;
    void unsetscanLines();
    void setScanLines(int64_t value);

    /// <summary>
    /// **参数解释**: 插入行。 **取值范围**: 不涉及。
    /// </summary>

    int64_t getInsertRows() const;
    bool insertRowsIsSet() const;
    void unsetinsertRows();
    void setInsertRows(int64_t value);

    /// <summary>
    /// **参数解释**: 更新行。 **取值范围**: 不涉及。
    /// </summary>

    int64_t getUpdateRows() const;
    bool updateRowsIsSet() const;
    void unsetupdateRows();
    void setUpdateRows(int64_t value);

    /// <summary>
    /// **参数解释**: 删除行。 **取值范围**: 不涉及。
    /// </summary>

    int64_t getDeleteRows() const;
    bool deleteRowsIsSet() const;
    void unsetdeleteRows();
    void setDeleteRows(int64_t value);

    /// <summary>
    /// **参数解释**: 是否慢SQL。 **取值范围**: 不涉及。
    /// </summary>

    bool isIsSlowSql() const;
    bool isSlowSqlIsSet() const;
    void unsetisSlowSql();
    void setIsSlowSql(bool value);

    /// <summary>
    /// **参数解释**: SQL开始时间。格式为13位标准时间戳，如1754647168354。 **取值范围**: 不涉及。
    /// </summary>

    int64_t getStartTimestamp() const;
    bool startTimestampIsSet() const;
    void unsetstartTimestamp();
    void setStartTimestamp(int64_t value);

    /// <summary>
    /// **参数解释**: SQL结束时间，格式为13位标准时间戳，如1754647168355。 **取值范围**: 不涉及。
    /// </summary>

    int64_t getFinishTimestamp() const;
    bool finishTimestampIsSet() const;
    void unsetfinishTimestamp();
    void setFinishTimestamp(int64_t value);

    /// <summary>
    /// **参数解释**: SQL命中率。 计划即将下线，请勿使用。 **取值范围**: 不涉及。
    /// </summary>

    double getHitRate() const;
    bool hitRateIsSet() const;
    void unsethitRate();
    void setHitRate(double value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string instanceId_;
    bool instanceIdIsSet_;
    std::string nodeId_;
    bool nodeIdIsSet_;
    std::string componentId_;
    bool componentIdIsSet_;
    std::string dbName_;
    bool dbNameIsSet_;
    std::string schemaName_;
    bool schemaNameIsSet_;
    std::string username_;
    bool usernameIsSet_;
    std::string applicationName_;
    bool applicationNameIsSet_;
    std::string clientAddr_;
    bool clientAddrIsSet_;
    std::string clientPort_;
    bool clientPortIsSet_;
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
    std::string sql_;
    bool sqlIsSet_;
    std::string beginTime_;
    bool beginTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    int64_t allTime_;
    bool allTimeIsSet_;
    int64_t dbTime_;
    bool dbTimeIsSet_;
    int64_t cpuTime_;
    bool cpuTimeIsSet_;
    int64_t dataIoTime_;
    bool dataIoTimeIsSet_;
    int64_t executionTime_;
    bool executionTimeIsSet_;
    int64_t scanLines_;
    bool scanLinesIsSet_;
    int64_t insertRows_;
    bool insertRowsIsSet_;
    int64_t updateRows_;
    bool updateRowsIsSet_;
    int64_t deleteRows_;
    bool deleteRowsIsSet_;
    bool isSlowSql_;
    bool isSlowSqlIsSet_;
    int64_t startTimestamp_;
    bool startTimestampIsSet_;
    int64_t finishTimestamp_;
    bool finishTimestampIsSet_;
    double hitRate_;
    bool hitRateIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_FullSqlResult_H_
