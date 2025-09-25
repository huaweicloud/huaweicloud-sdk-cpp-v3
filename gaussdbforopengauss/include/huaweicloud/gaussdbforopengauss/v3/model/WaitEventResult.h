
#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_WaitEventResult_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_WaitEventResult_H_


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
class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  WaitEventResult
    : public ModelBase
{
public:
    WaitEventResult();
    virtual ~WaitEventResult();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// WaitEventResult members

    /// <summary>
    /// **参数解释**: 会话ID。 **取值范围**: 不涉及。
    /// </summary>

    std::string getSessionId() const;
    bool sessionIdIsSet() const;
    void unsetsessionId();
    void setSessionId(const std::string& value);

    /// <summary>
    /// **参数解释**: 线程ID。 **取值范围**: 不涉及。
    /// </summary>

    std::string getPid() const;
    bool pidIsSet() const;
    void unsetpid();
    void setPid(const std::string& value);

    /// <summary>
    /// **参数解释**: 等待事件。 参见“开发指南 &gt; 系统表和系统视图 &gt; 系统视图 &gt; 其他系统视图 &gt; PG_THREAD_WAIT_STATUS”中的wait_event字段。 **取值范围**: 不涉及。
    /// </summary>

    std::string getWaitEvent() const;
    bool waitEventIsSet() const;
    void unsetwaitEvent();
    void setWaitEvent(const std::string& value);

    /// <summary>
    /// **参数解释**: 等待状态。 参见“开发指南 &gt; 系统表和系统视图 &gt; 系统视图 &gt; 其他系统视图 &gt; PG_THREAD_WAIT_STATUS”中的等待状态列表。 **取值范围**: 不涉及。
    /// </summary>

    std::string getWaitStatus() const;
    bool waitStatusIsSet() const;
    void unsetwaitStatus();
    void setWaitStatus(const std::string& value);

    /// <summary>
    /// **参数解释**: 数据库名称。 **取值范围**: 不涉及。
    /// </summary>

    std::string getDatabaseName() const;
    bool databaseNameIsSet() const;
    void unsetdatabaseName();
    void setDatabaseName(const std::string& value);

    /// <summary>
    /// **参数解释**: 用户名称。 **取值范围**: 不涉及。
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);

    /// <summary>
    /// **参数解释**: 客户端地址。 **取值范围**: 不涉及。
    /// </summary>

    std::string getClientAddr() const;
    bool clientAddrIsSet() const;
    void unsetclientAddr();
    void setClientAddr(const std::string& value);

    /// <summary>
    /// **参数解释**: 客户端用于与后台通讯的TCP端口号。 **取值范围**: 不涉及。
    /// </summary>

    std::string getClientPort() const;
    bool clientPortIsSet() const;
    void unsetclientPort();
    void setClientPort(const std::string& value);

    /// <summary>
    /// **参数解释**: 会话持续时间，单位：秒。 **取值范围**: 不涉及。
    /// </summary>

    std::string getSessionTime() const;
    bool sessionTimeIsSet() const;
    void unsetsessionTime();
    void setSessionTime(const std::string& value);

    /// <summary>
    /// **参数解释**: 会话开始时间。 **取值范围**: 不涉及。
    /// </summary>

    std::string getXactStart() const;
    bool xactStartIsSet() const;
    void unsetxactStart();
    void setXactStart(const std::string& value);

    /// <summary>
    /// **参数解释**: 事务持续时间，单位秒。 **取值范围**: 不涉及。
    /// </summary>

    std::string getTransactionTime() const;
    bool transactionTimeIsSet() const;
    void unsettransactionTime();
    void setTransactionTime(const std::string& value);

    /// <summary>
    /// **参数解释**: 查询开始时间。 **取值范围**: 不涉及。
    /// </summary>

    std::string getQueryStart() const;
    bool queryStartIsSet() const;
    void unsetqueryStart();
    void setQueryStart(const std::string& value);

    /// <summary>
    /// **参数解释**: 上次状态改变的时间。 **取值范围**: 不涉及。
    /// </summary>

    std::string getStateChange() const;
    bool stateChangeIsSet() const;
    void unsetstateChange();
    void setStateChange(const std::string& value);

    /// <summary>
    /// **参数解释**: 查询持续时间，单位秒。 **取值范围**: 不涉及。
    /// </summary>

    std::string getQueryTime() const;
    bool queryTimeIsSet() const;
    void unsetqueryTime();
    void setQueryTime(const std::string& value);

    /// <summary>
    /// **参数解释**: 会话开始时间。 **取值范围**: 不涉及。
    /// </summary>

    std::string getBackendStart() const;
    bool backendStartIsSet() const;
    void unsetbackendStart();
    void setBackendStart(const std::string& value);

    /// <summary>
    /// **参数解释**: 是否在等待锁。 **取值范围**: 不涉及。
    /// </summary>

    std::string getWaiting() const;
    bool waitingIsSet() const;
    void unsetwaiting();
    void setWaiting(const std::string& value);

    /// <summary>
    /// **参数解释**: （等待获取的）锁模式。 **取值范围**: 不涉及。
    /// </summary>

    std::string getLockmode() const;
    bool lockmodeIsSet() const;
    void unsetlockmode();
    void setLockmode(const std::string& value);

    /// <summary>
    /// **参数解释**: 阻塞会话ID。 **取值范围**: 不涉及。
    /// </summary>

    std::string getBlockSessionid() const;
    bool blockSessionidIsSet() const;
    void unsetblockSessionid();
    void setBlockSessionid(const std::string& value);

    /// <summary>
    /// **参数解释**: 阻塞会话数。 **取值范围**: 不涉及。
    /// </summary>

    std::string getBlockCount() const;
    bool blockCountIsSet() const;
    void unsetblockCount();
    void setBlockCount(const std::string& value);

    /// <summary>
    /// **参数解释**: 归一化SQL ID。 **取值范围**: 不涉及。
    /// </summary>

    std::string getUniqueSqlId() const;
    bool uniqueSqlIdIsSet() const;
    void unsetuniqueSqlId();
    void setUniqueSqlId(const std::string& value);

    /// <summary>
    /// **参数解释**: 查询 ID。 **取值范围**: 不涉及。
    /// </summary>

    std::string getQueryId() const;
    bool queryIdIsSet() const;
    void unsetqueryId();
    void setQueryId(const std::string& value);

    /// <summary>
    /// **参数解释**: SQL文本。 **取值范围**: 不涉及。
    /// </summary>

    std::string getQuery() const;
    bool queryIsSet() const;
    void unsetquery();
    void setQuery(const std::string& value);

    /// <summary>
    /// **参数解释**: 当前事务ID。 **取值范围**: 不涉及。
    /// </summary>

    std::string getCurrentXid() const;
    bool currentXidIsSet() const;
    void unsetcurrentXid();
    void setCurrentXid(const std::string& value);

    /// <summary>
    /// **参数解释**: 顶层事务ID。 **取值范围**: 不涉及。
    /// </summary>

    std::string getTopXid() const;
    bool topXidIsSet() const;
    void unsettopXid();
    void setTopXid(const std::string& value);

    /// <summary>
    /// **参数解释**: 事务当前使用的XLOG量，单位为字节。 **取值范围**: 不涉及。
    /// </summary>

    std::string getXlogQuantity() const;
    bool xlogQuantityIsSet() const;
    void unsetxlogQuantity();
    void setXlogQuantity(const std::string& value);

    /// <summary>
    /// **参数解释**: 该会话当前总体状态。 **取值范围**: -active：后台正在执行一个查询。 -idle：后台正在等待一个新的客户端命令。 -idle in transaction：后台在事务中，但事务中没有语句在执行。 -fastpath function call：后台正在执行一个fast-path函数。 -disabled：如果后台禁用track_activities，则事务显示此状态。
    /// </summary>

    std::string getState() const;
    bool stateIsSet() const;
    void unsetstate();
    void setState(const std::string& value);

    /// <summary>
    /// **参数解释**: 应用名称。 **取值范围**: 不涉及。
    /// </summary>

    std::string getApplicationName() const;
    bool applicationNameIsSet() const;
    void unsetapplicationName();
    void setApplicationName(const std::string& value);

    /// <summary>
    /// **参数解释**: 连接信息。 **取值范围**: 不涉及。
    /// </summary>

    std::string getConnectionInfo() const;
    bool connectionInfoIsSet() const;
    void unsetconnectionInfo();
    void setConnectionInfo(const std::string& value);


protected:
    std::string sessionId_;
    bool sessionIdIsSet_;
    std::string pid_;
    bool pidIsSet_;
    std::string waitEvent_;
    bool waitEventIsSet_;
    std::string waitStatus_;
    bool waitStatusIsSet_;
    std::string databaseName_;
    bool databaseNameIsSet_;
    std::string userName_;
    bool userNameIsSet_;
    std::string clientAddr_;
    bool clientAddrIsSet_;
    std::string clientPort_;
    bool clientPortIsSet_;
    std::string sessionTime_;
    bool sessionTimeIsSet_;
    std::string xactStart_;
    bool xactStartIsSet_;
    std::string transactionTime_;
    bool transactionTimeIsSet_;
    std::string queryStart_;
    bool queryStartIsSet_;
    std::string stateChange_;
    bool stateChangeIsSet_;
    std::string queryTime_;
    bool queryTimeIsSet_;
    std::string backendStart_;
    bool backendStartIsSet_;
    std::string waiting_;
    bool waitingIsSet_;
    std::string lockmode_;
    bool lockmodeIsSet_;
    std::string blockSessionid_;
    bool blockSessionidIsSet_;
    std::string blockCount_;
    bool blockCountIsSet_;
    std::string uniqueSqlId_;
    bool uniqueSqlIdIsSet_;
    std::string queryId_;
    bool queryIdIsSet_;
    std::string query_;
    bool queryIsSet_;
    std::string currentXid_;
    bool currentXidIsSet_;
    std::string topXid_;
    bool topXidIsSet_;
    std::string xlogQuantity_;
    bool xlogQuantityIsSet_;
    std::string state_;
    bool stateIsSet_;
    std::string applicationName_;
    bool applicationNameIsSet_;
    std::string connectionInfo_;
    bool connectionInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_MODEL_WaitEventResult_H_
