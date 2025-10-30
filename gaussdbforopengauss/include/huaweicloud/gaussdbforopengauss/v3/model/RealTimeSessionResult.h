
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_RealTimeSessionResult_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_RealTimeSessionResult_H_


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
/// 
/// </summary>
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  RealTimeSessionResult
    : public ModelBase
{
public:
    RealTimeSessionResult();
    virtual ~RealTimeSessionResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// RealTimeSessionResult members

    /// <summary>
    /// **参数解释**： 会话ID。 **取值范围**： 不涉及。
    /// </summary>

    std::string getSessionId() const;
    bool sessionIdIsSet() const;
    void unsetsessionId();
    void setSessionId(const std::string& value);

    /// <summary>
    /// **参数解释**： 线程ID。 **取值范围**： 不涉及。
    /// </summary>

    std::string getPid() const;
    bool pidIsSet() const;
    void unsetpid();
    void setPid(const std::string& value);

    /// <summary>
    /// **参数解释**： SQL ID。 **取值范围**： 不涉及。
    /// </summary>

    std::string getUniqueSqlId() const;
    bool uniqueSqlIdIsSet() const;
    void unsetuniqueSqlId();
    void setUniqueSqlId(const std::string& value);

    /// <summary>
    /// **参数解释**： 数据库名称。 **取值范围**： 不涉及。
    /// </summary>

    std::string getDatabaseName() const;
    bool databaseNameIsSet() const;
    void unsetdatabaseName();
    void setDatabaseName(const std::string& value);

    /// <summary>
    /// **参数解释**： 客户端IP。 **取值范围**： 不涉及。
    /// </summary>

    std::string getClientIp() const;
    bool clientIpIsSet() const;
    void unsetclientIp();
    void setClientIp(const std::string& value);

    /// <summary>
    /// **参数解释**： 用户名称。 **取值范围**： 不涉及。
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);

    /// <summary>
    /// **参数解释**： 是否等待。 **取值范围**： 不涉及。
    /// </summary>

    std::string getWait() const;
    bool waitIsSet() const;
    void unsetwait();
    void setWait(const std::string& value);

    /// <summary>
    /// **参数解释**： 阻塞会话。 **取值范围**： 不涉及。
    /// </summary>

    std::string getBlockSession() const;
    bool blockSessionIsSet() const;
    void unsetblockSession();
    void setBlockSession(const std::string& value);

    /// <summary>
    /// **参数解释**： 等待事件。 **取值范围**： 不涉及。
    /// </summary>

    std::string getWaitEvent() const;
    bool waitEventIsSet() const;
    void unsetwaitEvent();
    void setWaitEvent(const std::string& value);

    /// <summary>
    /// **参数解释**： 状态。 **取值范围**： 不涉及。
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);

    /// <summary>
    /// **参数解释**： 语句执行时长。 **取值范围**： 不涉及。
    /// </summary>

    std::string getQueryRuntime() const;
    bool queryRuntimeIsSet() const;
    void unsetqueryRuntime();
    void setQueryRuntime(const std::string& value);

    /// <summary>
    /// **参数解释**： SQL文本。 **取值范围**： 不涉及。
    /// </summary>

    std::string getQuery() const;
    bool queryIsSet() const;
    void unsetquery();
    void setQuery(const std::string& value);

    /// <summary>
    /// **参数解释**： 会话开始时间。 **取值范围**： 不涉及。
    /// </summary>

    int32_t getBackEndStart() const;
    bool backEndStartIsSet() const;
    void unsetbackEndStart();
    void setBackEndStart(int32_t value);

    /// <summary>
    /// **参数解释**： 事务开始时间。 **取值范围**： 不涉及。
    /// </summary>

    int32_t getTransactionStart() const;
    bool transactionStartIsSet() const;
    void unsettransactionStart();
    void setTransactionStart(int32_t value);

    /// <summary>
    /// **参数解释**： 语句开始时间。 **取值范围**： 不涉及。
    /// </summary>

    int32_t getQueryStart() const;
    bool queryStartIsSet() const;
    void unsetqueryStart();
    void setQueryStart(int32_t value);

    /// <summary>
    /// **参数解释**： 应用名称。 **取值范围**： 不涉及。
    /// </summary>

    std::string getApplicationName() const;
    bool applicationNameIsSet() const;
    void unsetapplicationName();
    void setApplicationName(const std::string& value);

    /// <summary>
    /// **参数解释**： 会话执行时长（单位：秒）。 **取值范围**： 不涉及。
    /// </summary>

    std::string getExecTime() const;
    bool execTimeIsSet() const;
    void unsetexecTime();
    void setExecTime(const std::string& value);

    /// <summary>
    /// **参数解释**： 会话建立事务的数量。 **取值范围**： 不涉及。
    /// </summary>

    std::string getTransNum() const;
    bool transNumIsSet() const;
    void unsettransNum();
    void setTransNum(const std::string& value);

    /// <summary>
    /// **参数解释**： 会话中事务回滚的次数。 **取值范围**： 不涉及。
    /// </summary>

    std::string getRollbackNum() const;
    bool rollbackNumIsSet() const;
    void unsetrollbackNum();
    void setRollbackNum(const std::string& value);

    /// <summary>
    /// **参数解释**： 会话执行的sql数。 **取值范围**： 不涉及。
    /// </summary>

    std::string getSqlNum() const;
    bool sqlNumIsSet() const;
    void unsetsqlNum();
    void setSqlNum(const std::string& value);

    /// <summary>
    /// **参数解释**： 客户端用于与后台通讯的TCP端口号，如果使用Unix套接字，则为-1。 **取值范围**： 不涉及。
    /// </summary>

    std::string getClientPort() const;
    bool clientPortIsSet() const;
    void unsetclientPort();
    void setClientPort(const std::string& value);

    /// <summary>
    /// **参数解释**： 会话执行的sql数。 **取值范围**： 不涉及。
    /// </summary>

    std::string getQueryId() const;
    bool queryIdIsSet() const;
    void unsetqueryId();
    void setQueryId(const std::string& value);

    /// <summary>
    /// **参数解释**： 当前用户上一次执行的事务持续时间。 **取值范围**： 不涉及。
    /// </summary>

    std::string getTransactionTimeCost() const;
    bool transactionTimeCostIsSet() const;
    void unsettransactionTimeCost();
    void setTransactionTimeCost(const std::string& value);

    /// <summary>
    /// **参数解释**： 驱动传入的trace id，用于标识应用的一次请求。 **取值范围**： 不涉及。
    /// </summary>

    std::string getTraceId() const;
    bool traceIdIsSet() const;
    void unsettraceId();
    void setTraceId(const std::string& value);

    /// <summary>
    /// **参数解释**： 当前用户上次执行的全局会话ID。 **取值范围**： 不涉及。
    /// </summary>

    std::string getGlobalSessionId() const;
    bool globalSessionIdIsSet() const;
    void unsetglobalSessionId();
    void setGlobalSessionId(const std::string& value);

    /// <summary>
    /// **参数解释**： 当前用户上次执行的顶层事务ID。 **取值范围**： 不涉及。
    /// </summary>

    std::string getTopTransactionId() const;
    bool topTransactionIdIsSet() const;
    void unsettopTransactionId();
    void setTopTransactionId(const std::string& value);

    /// <summary>
    /// **参数解释**： 当前用户上次执行的事务ID。 **取值范围**： 不涉及。
    /// </summary>

    std::string getCurrentTransactionId() const;
    bool currentTransactionIdIsSet() const;
    void unsetcurrentTransactionId();
    void setCurrentTransactionId(const std::string& value);

    /// <summary>
    /// **参数解释**： 当前用户上次执行的事务使用的XLOG量，易读格式。 **取值范围**： 不涉及。
    /// </summary>

    std::string getXlogQuantityPretty() const;
    bool xlogQuantityPrettyIsSet() const;
    void unsetxlogQuantityPretty();
    void setXlogQuantityPretty(const std::string& value);

    /// <summary>
    /// **参数解释**： 实例线程等待状态。 **取值范围**： 不涉及。
    /// </summary>

    std::string getWaitStatus() const;
    bool waitStatusIsSet() const;
    void unsetwaitStatus();
    void setWaitStatus(const std::string& value);

    /// <summary>
    /// **参数解释**： 实例线程的轻量级线程号。 **取值范围**： 不涉及。
    /// </summary>

    std::string getLwtId() const;
    bool lwtIdIsSet() const;
    void unsetlwtId();
    void setLwtId(const std::string& value);

    /// <summary>
    /// **参数解释**： 实例线程名。 **取值范围**： 不涉及。
    /// </summary>

    std::string getThreadName() const;
    bool threadNameIsSet() const;
    void unsetthreadName();
    void setThreadName(const std::string& value);

    /// <summary>
    /// **参数解释**： 实例等锁模式。 **取值范围**： 不涉及。
    /// </summary>

    std::string getLockMode() const;
    bool lockModeIsSet() const;
    void unsetlockMode();
    void setLockMode(const std::string& value);

    /// <summary>
    /// **参数解释**： 实例父会话ID。 **取值范围**： 不涉及。
    /// </summary>

    std::string getParentSessionId() const;
    bool parentSessionIdIsSet() const;
    void unsetparentSessionId();
    void setParentSessionId(const std::string& value);

    /// <summary>
    /// **参数解释**： 实例并行线程的ID。 **取值范围**： 不涉及。
    /// </summary>

    std::string getSmpId() const;
    bool smpIdIsSet() const;
    void unsetsmpId();
    void setSmpId(const std::string& value);

    /// <summary>
    /// **参数解释**： 实例线程正等待获取的锁的信息。 **取值范围**： 不涉及。
    /// </summary>

    std::string getLockTag() const;
    bool lockTagIsSet() const;
    void unsetlockTag();
    void setLockTag(const std::string& value);

    /// <summary>
    /// **参数解释**： 组件名称。 **取值范围**： 不涉及。
    /// </summary>

    std::string getComponentName() const;
    bool componentNameIsSet() const;
    void unsetcomponentName();
    void setComponentName(const std::string& value);


protected:
    std::string sessionId_;
    bool sessionIdIsSet_;
    std::string pid_;
    bool pidIsSet_;
    std::string uniqueSqlId_;
    bool uniqueSqlIdIsSet_;
    std::string databaseName_;
    bool databaseNameIsSet_;
    std::string clientIp_;
    bool clientIpIsSet_;
    std::string userName_;
    bool userNameIsSet_;
    std::string wait_;
    bool waitIsSet_;
    std::string blockSession_;
    bool blockSessionIsSet_;
    std::string waitEvent_;
    bool waitEventIsSet_;
    std::string state_;
    bool stateIsSet_;
    std::string queryRuntime_;
    bool queryRuntimeIsSet_;
    std::string query_;
    bool queryIsSet_;
    int32_t backEndStart_;
    bool backEndStartIsSet_;
    int32_t transactionStart_;
    bool transactionStartIsSet_;
    int32_t queryStart_;
    bool queryStartIsSet_;
    std::string applicationName_;
    bool applicationNameIsSet_;
    std::string execTime_;
    bool execTimeIsSet_;
    std::string transNum_;
    bool transNumIsSet_;
    std::string rollbackNum_;
    bool rollbackNumIsSet_;
    std::string sqlNum_;
    bool sqlNumIsSet_;
    std::string clientPort_;
    bool clientPortIsSet_;
    std::string queryId_;
    bool queryIdIsSet_;
    std::string transactionTimeCost_;
    bool transactionTimeCostIsSet_;
    std::string traceId_;
    bool traceIdIsSet_;
    std::string globalSessionId_;
    bool globalSessionIdIsSet_;
    std::string topTransactionId_;
    bool topTransactionIdIsSet_;
    std::string currentTransactionId_;
    bool currentTransactionIdIsSet_;
    std::string xlogQuantityPretty_;
    bool xlogQuantityPrettyIsSet_;
    std::string waitStatus_;
    bool waitStatusIsSet_;
    std::string lwtId_;
    bool lwtIdIsSet_;
    std::string threadName_;
    bool threadNameIsSet_;
    std::string lockMode_;
    bool lockModeIsSet_;
    std::string parentSessionId_;
    bool parentSessionIdIsSet_;
    std::string smpId_;
    bool smpIdIsSet_;
    std::string lockTag_;
    bool lockTagIsSet_;
    std::string componentName_;
    bool componentNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_RealTimeSessionResult_H_
