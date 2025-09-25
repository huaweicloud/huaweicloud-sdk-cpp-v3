
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_NodeExecutionInfoResult_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_NodeExecutionInfoResult_H_


#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/gaussdbforopengauss/v3/model/ExecutionTimeDetailsInfo.h>
#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// SQL链路节点执行信息
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  NodeExecutionInfoResult
    : public ModelBase
{
public:
    NodeExecutionInfoResult();
    virtual ~NodeExecutionInfoResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// NodeExecutionInfoResult members

    /// <summary>
    /// **参数解释**: 组件ID。 **取值范围**: 不涉及。
    /// </summary>

    std::string getComponentId() const;
    bool componentIdIsSet() const;
    void unsetcomponentId();
    void setComponentId(const std::string& value);

    /// <summary>
    /// **参数解释**: 节点ID。 **取值范围**: 不涉及。
    /// </summary>

    std::string getNodeId() const;
    bool nodeIdIsSet() const;
    void unsetnodeId();
    void setNodeId(const std::string& value);

    /// <summary>
    /// **参数解释**: 事务ID。 **取值范围**: 不涉及。
    /// </summary>

    std::string getTransactionId() const;
    bool transactionIdIsSet() const;
    void unsettransactionId();
    void setTransactionId(const std::string& value);

    /// <summary>
    /// **参数解释**: 归一化SQL ID。 **取值范围**: 不涉及。
    /// </summary>

    std::string getSqlId() const;
    bool sqlIdIsSet() const;
    void unsetsqlId();
    void setSqlId(const std::string& value);

    /// <summary>
    /// **参数解释**: 唯一SQL ID。 **取值范围**: 不涉及。
    /// </summary>

    std::string getSqlExecId() const;
    bool sqlExecIdIsSet() const;
    void unsetsqlExecId();
    void setSqlExecId(const std::string& value);

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
    /// **参数解释**: 语句启动的时间，格式为“yyyy-mm-ddThh:mm: ssssssZ”。 其中，T指某个时间的开始；Z指时区偏移量，例如北京时间偏移显示为+0800。 **取值范围**: 不涉及。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// **参数解释**: 语句结束的时间，格式为“yyyy-mm-ddThh:mm: ssssssZ”。 其中，T指某个时间的开始；Z指时区偏移量，例如北京时间偏移显示为+0800。 **取值范围**: 不涉及。
    /// </summary>

    std::string getFinishTime() const;
    bool finishTimeIsSet() const;
    void unsetfinishTime();
    void setFinishTime(const std::string& value);

    /// <summary>
    /// **参数解释**: 执行总耗时（单位：微秒）。 **取值范围**: 不涉及。
    /// </summary>

    int64_t getAllTime() const;
    bool allTimeIsSet() const;
    void unsetallTime();
    void setAllTime(int64_t value);

    /// <summary>
    /// **参数解释**: 用户名。 **取值范围**: 不涉及。
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);

    /// <summary>
    /// **参数解释**: 用户发起的请求的客户端地址。 **取值范围**: 不涉及。
    /// </summary>

    std::string getClientAddr() const;
    bool clientAddrIsSet() const;
    void unsetclientAddr();
    void setClientAddr(const std::string& value);

    /// <summary>
    /// **参数解释**: 用户发起的请求的客户端端口。 **取值范围**: 不涉及。
    /// </summary>

    int32_t getClientPort() const;
    bool clientPortIsSet() const;
    void unsetclientPort();
    void setClientPort(int32_t value);

    /// <summary>
    /// **参数解释**: 驱动传入的trace id，与应用的一次请求相关联。 **取值范围**: 不涉及。
    /// </summary>

    std::string getTraceId() const;
    bool traceIdIsSet() const;
    void unsettraceId();
    void setTraceId(const std::string& value);

    /// <summary>
    /// **参数解释**: 用户发起的请求的应用程序名称。 **取值范围**: 不涉及。
    /// </summary>

    std::string getApplicationName() const;
    bool applicationNameIsSet() const;
    void unsetapplicationName();
    void setApplicationName(const std::string& value);

    /// <summary>
    /// **参数解释**: 用户session id。 **取值范围**: 不涉及。
    /// </summary>

    std::string getSessionId() const;
    bool sessionIdIsSet() const;
    void unsetsessionId();
    void setSessionId(const std::string& value);

    /// <summary>
    /// **参数解释**: 该SQL是否为slow SQL。 **取值范围**: 不涉及。
    /// </summary>

    bool isIsSlowSql() const;
    bool isSlowSqlIsSet() const;
    void unsetisSlowSql();
    void setIsSlowSql(bool value);

    /// <summary>
    /// 
    /// </summary>

    ExecutionTimeDetailsInfo getExecutionTimeDetails() const;
    bool executionTimeDetailsIsSet() const;
    void unsetexecutionTimeDetails();
    void setExecutionTimeDetails(const ExecutionTimeDetailsInfo& value);


protected:
    std::string componentId_;
    bool componentIdIsSet_;
    std::string nodeId_;
    bool nodeIdIsSet_;
    std::string transactionId_;
    bool transactionIdIsSet_;
    std::string sqlId_;
    bool sqlIdIsSet_;
    std::string sqlExecId_;
    bool sqlExecIdIsSet_;
    std::string dbName_;
    bool dbNameIsSet_;
    std::string schemaName_;
    bool schemaNameIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;
    std::string finishTime_;
    bool finishTimeIsSet_;
    int64_t allTime_;
    bool allTimeIsSet_;
    std::string userName_;
    bool userNameIsSet_;
    std::string clientAddr_;
    bool clientAddrIsSet_;
    int32_t clientPort_;
    bool clientPortIsSet_;
    std::string traceId_;
    bool traceIdIsSet_;
    std::string applicationName_;
    bool applicationNameIsSet_;
    std::string sessionId_;
    bool sessionIdIsSet_;
    bool isSlowSql_;
    bool isSlowSqlIsSet_;
    ExecutionTimeDetailsInfo executionTimeDetails_;
    bool executionTimeDetailsIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_NodeExecutionInfoResult_H_
