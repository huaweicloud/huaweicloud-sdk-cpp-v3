
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_Session_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_Session_H_


#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 会话信息
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  Session
    : public ModelBase
{
public:
    Session();
    virtual ~Session();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Session members

    /// <summary>
    /// 采样时间
    /// </summary>

    std::string getSampleTime() const;
    bool sampleTimeIsSet() const;
    void unsetsampleTime();
    void setSampleTime(const std::string& value);

    /// <summary>
    /// 阻塞进程ID
    /// </summary>

    std::string getBlockedProcessId() const;
    bool blockedProcessIdIsSet() const;
    void unsetblockedProcessId();
    void setBlockedProcessId(const std::string& value);

    /// <summary>
    /// 数据库OID
    /// </summary>

    int32_t getDatabaseOid() const;
    bool databaseOidIsSet() const;
    void unsetdatabaseOid();
    void setDatabaseOid(int32_t value);

    /// <summary>
    /// 数据库名
    /// </summary>

    std::string getDatabaseName() const;
    bool databaseNameIsSet() const;
    void unsetdatabaseName();
    void setDatabaseName(const std::string& value);

    /// <summary>
    /// 会话ID
    /// </summary>

    int32_t getSessionId() const;
    bool sessionIdIsSet() const;
    void unsetsessionId();
    void setSessionId(int32_t value);

    /// <summary>
    /// 并行会话ID
    /// </summary>

    int32_t getParallelLeaderId() const;
    bool parallelLeaderIdIsSet() const;
    void unsetparallelLeaderId();
    void setParallelLeaderId(int32_t value);

    /// <summary>
    /// 后端用户OID
    /// </summary>

    int32_t getBackendUserOid() const;
    bool backendUserOidIsSet() const;
    void unsetbackendUserOid();
    void setBackendUserOid(int32_t value);

    /// <summary>
    /// 用户名
    /// </summary>

    std::string getUserName() const;
    bool userNameIsSet() const;
    void unsetuserName();
    void setUserName(const std::string& value);

    /// <summary>
    /// 应用名
    /// </summary>

    std::string getAppName() const;
    bool appNameIsSet() const;
    void unsetappName();
    void setAppName(const std::string& value);

    /// <summary>
    /// 客户端地址
    /// </summary>

    std::string getClientIpAddress() const;
    bool clientIpAddressIsSet() const;
    void unsetclientIpAddress();
    void setClientIpAddress(const std::string& value);

    /// <summary>
    /// 客户端名称
    /// </summary>

    std::string getClientHostName() const;
    bool clientHostNameIsSet() const;
    void unsetclientHostName();
    void setClientHostName(const std::string& value);

    /// <summary>
    /// 客户端端口
    /// </summary>

    int32_t getClientPort() const;
    bool clientPortIsSet() const;
    void unsetclientPort();
    void setClientPort(int32_t value);

    /// <summary>
    /// 会话建立时间
    /// </summary>

    std::string getSessionStartTime() const;
    bool sessionStartTimeIsSet() const;
    void unsetsessionStartTime();
    void setSessionStartTime(const std::string& value);

    /// <summary>
    /// 事务启动时间
    /// </summary>

    std::string getTransactionStartTime() const;
    bool transactionStartTimeIsSet() const;
    void unsettransactionStartTime();
    void setTransactionStartTime(const std::string& value);

    /// <summary>
    /// 事务执行时间(s)
    /// </summary>

    int32_t getTransactionExecutionTime() const;
    bool transactionExecutionTimeIsSet() const;
    void unsettransactionExecutionTime();
    void setTransactionExecutionTime(int32_t value);

    /// <summary>
    /// 查询开始时间
    /// </summary>

    std::string getQueryStartTime() const;
    bool queryStartTimeIsSet() const;
    void unsetqueryStartTime();
    void setQueryStartTime(const std::string& value);

    /// <summary>
    /// state改变时间
    /// </summary>

    std::string getStateChangeTime() const;
    bool stateChangeTimeIsSet() const;
    void unsetstateChangeTime();
    void setStateChangeTime(const std::string& value);

    /// <summary>
    /// 等待事件类型
    /// </summary>

    std::string getWaitEventType() const;
    bool waitEventTypeIsSet() const;
    void unsetwaitEventType();
    void setWaitEventType(const std::string& value);

    /// <summary>
    /// 等待事件名称
    /// </summary>

    std::string getWaitEventName() const;
    bool waitEventNameIsSet() const;
    void unsetwaitEventName();
    void setWaitEventName(const std::string& value);

    /// <summary>
    /// 会话状态
    /// </summary>

    std::string getSessionStatus() const;
    bool sessionStatusIsSet() const;
    void unsetsessionStatus();
    void setSessionStatus(const std::string& value);

    /// <summary>
    /// Backend XID
    /// </summary>

    int32_t getBackendXid() const;
    bool backendXidIsSet() const;
    void unsetbackendXid();
    void setBackendXid(int32_t value);

    /// <summary>
    /// Backend Xmin
    /// </summary>

    int32_t getBackendXmin() const;
    bool backendXminIsSet() const;
    void unsetbackendXmin();
    void setBackendXmin(int32_t value);

    /// <summary>
    /// Query ID
    /// </summary>

    std::string getQueryId() const;
    bool queryIdIsSet() const;
    void unsetqueryId();
    void setQueryId(const std::string& value);

    /// <summary>
    /// SQL语句
    /// </summary>

    std::string getSqlStatement() const;
    bool sqlStatementIsSet() const;
    void unsetsqlStatement();
    void setSqlStatement(const std::string& value);

    /// <summary>
    /// 进程类型
    /// </summary>

    std::string getProcessType() const;
    bool processTypeIsSet() const;
    void unsetprocessType();
    void setProcessType(const std::string& value);

    /// <summary>
    /// 内存占比(%)
    /// </summary>

    float getMemoryUsage() const;
    bool memoryUsageIsSet() const;
    void unsetmemoryUsage();
    void setMemoryUsage(float value);

    /// <summary>
    /// 进程状态
    /// </summary>

    std::string getProcessStatus() const;
    bool processStatusIsSet() const;
    void unsetprocessStatus();
    void setProcessStatus(const std::string& value);

    /// <summary>
    /// 3秒内平均CPU占用率(%)
    /// </summary>

    float getCpuUsage() const;
    bool cpuUsageIsSet() const;
    void unsetcpuUsage();
    void setCpuUsage(float value);

    /// <summary>
    /// I/O等待时间(s)
    /// </summary>

    float getIoWaitStatus() const;
    bool ioWaitStatusIsSet() const;
    void unsetioWaitStatus();
    void setIoWaitStatus(float value);

    /// <summary>
    /// 磁盘读速率(MB/s)
    /// </summary>

    float getDiskReadRate() const;
    bool diskReadRateIsSet() const;
    void unsetdiskReadRate();
    void setDiskReadRate(float value);

    /// <summary>
    /// 磁盘写速率(MB/s)
    /// </summary>

    float getDiskWriteRate() const;
    bool diskWriteRateIsSet() const;
    void unsetdiskWriteRate();
    void setDiskWriteRate(float value);


protected:
    std::string sampleTime_;
    bool sampleTimeIsSet_;
    std::string blockedProcessId_;
    bool blockedProcessIdIsSet_;
    int32_t databaseOid_;
    bool databaseOidIsSet_;
    std::string databaseName_;
    bool databaseNameIsSet_;
    int32_t sessionId_;
    bool sessionIdIsSet_;
    int32_t parallelLeaderId_;
    bool parallelLeaderIdIsSet_;
    int32_t backendUserOid_;
    bool backendUserOidIsSet_;
    std::string userName_;
    bool userNameIsSet_;
    std::string appName_;
    bool appNameIsSet_;
    std::string clientIpAddress_;
    bool clientIpAddressIsSet_;
    std::string clientHostName_;
    bool clientHostNameIsSet_;
    int32_t clientPort_;
    bool clientPortIsSet_;
    std::string sessionStartTime_;
    bool sessionStartTimeIsSet_;
    std::string transactionStartTime_;
    bool transactionStartTimeIsSet_;
    int32_t transactionExecutionTime_;
    bool transactionExecutionTimeIsSet_;
    std::string queryStartTime_;
    bool queryStartTimeIsSet_;
    std::string stateChangeTime_;
    bool stateChangeTimeIsSet_;
    std::string waitEventType_;
    bool waitEventTypeIsSet_;
    std::string waitEventName_;
    bool waitEventNameIsSet_;
    std::string sessionStatus_;
    bool sessionStatusIsSet_;
    int32_t backendXid_;
    bool backendXidIsSet_;
    int32_t backendXmin_;
    bool backendXminIsSet_;
    std::string queryId_;
    bool queryIdIsSet_;
    std::string sqlStatement_;
    bool sqlStatementIsSet_;
    std::string processType_;
    bool processTypeIsSet_;
    float memoryUsage_;
    bool memoryUsageIsSet_;
    std::string processStatus_;
    bool processStatusIsSet_;
    float cpuUsage_;
    bool cpuUsageIsSet_;
    float ioWaitStatus_;
    bool ioWaitStatusIsSet_;
    float diskReadRate_;
    bool diskReadRateIsSet_;
    float diskWriteRate_;
    bool diskWriteRateIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_Session_H_
