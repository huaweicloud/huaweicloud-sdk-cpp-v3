
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_InstanceDrInfo_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_InstanceDrInfo_H_


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
/// 
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  InstanceDrInfo
    : public ModelBase
{
public:
    InstanceDrInfo();
    virtual ~InstanceDrInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// InstanceDrInfo members

    /// <summary>
    /// 容灾关系id
    /// </summary>

    std::string getId() const;
    bool idIsSet() const;
    void unsetid();
    void setId(const std::string& value);

    /// <summary>
    /// 容灾搭建状态
    /// </summary>

    std::string getStatus() const;
    bool statusIsSet() const;
    void unsetstatus();
    void setStatus(const std::string& value);

    /// <summary>
    /// 失败消息
    /// </summary>

    std::string getFailedMessage() const;
    bool failedMessageIsSet() const;
    void unsetfailedMessage();
    void setFailedMessage(const std::string& value);

    /// <summary>
    /// 同步状态，取值范围是0或-1，0表示正常，-1表示异常。
    /// </summary>

    std::string getReplicaState() const;
    bool replicaStateIsSet() const;
    void unsetreplicaState();
    void setReplicaState(const std::string& value);

    /// <summary>
    /// 发送延迟大小（MB），即主实例当前wal日志写入位点与灾备实例当前接收wal日志位点的差值。
    /// </summary>

    std::string getWalWriteReceiveDelayInMb() const;
    bool walWriteReceiveDelayInMbIsSet() const;
    void unsetwalWriteReceiveDelayInMb();
    void setWalWriteReceiveDelayInMb(const std::string& value);

    /// <summary>
    /// 端到端延迟大小（MB），即主实例当前wal日志写入位点与灾备实例当前回放wal日志位点的差值。
    /// </summary>

    std::string getWalWriteReplayDelayInMb() const;
    bool walWriteReplayDelayInMbIsSet() const;
    void unsetwalWriteReplayDelayInMb();
    void setWalWriteReplayDelayInMb(const std::string& value);

    /// <summary>
    /// 回放延迟时间（ms），即数据在灾备上回放的延迟时间。
    /// </summary>

    std::string getWalReceiveReplayDelayInMs() const;
    bool walReceiveReplayDelayInMsIsSet() const;
    void unsetwalReceiveReplayDelayInMs();
    void setWalReceiveReplayDelayInMs(const std::string& value);

    /// <summary>
    /// 主实例ID
    /// </summary>

    std::string getMasterInstanceId() const;
    bool masterInstanceIdIsSet() const;
    void unsetmasterInstanceId();
    void setMasterInstanceId(const std::string& value);

    /// <summary>
    /// 主实例所在region
    /// </summary>

    std::string getMasterRegion() const;
    bool masterRegionIsSet() const;
    void unsetmasterRegion();
    void setMasterRegion(const std::string& value);

    /// <summary>
    /// 灾备实例ID
    /// </summary>

    std::string getSlaveInstanceId() const;
    bool slaveInstanceIdIsSet() const;
    void unsetslaveInstanceId();
    void setSlaveInstanceId(const std::string& value);

    /// <summary>
    /// 灾备实例所在region
    /// </summary>

    std::string getSlaveRegion() const;
    bool slaveRegionIsSet() const;
    void unsetslaveRegion();
    void setSlaveRegion(const std::string& value);

    /// <summary>
    /// 搭建流程。master表示配置主实例容灾能力流程。slave表示配置灾备实例容灾能力流程。
    /// </summary>

    std::string getBuildProcess() const;
    bool buildProcessIsSet() const;
    void unsetbuildProcess();
    void setBuildProcess(const std::string& value);

    /// <summary>
    /// 灾备搭建时间
    /// </summary>

    int64_t getTime() const;
    bool timeIsSet() const;
    void unsettime();
    void setTime(int64_t value);


protected:
    std::string id_;
    bool idIsSet_;
    std::string status_;
    bool statusIsSet_;
    std::string failedMessage_;
    bool failedMessageIsSet_;
    std::string replicaState_;
    bool replicaStateIsSet_;
    std::string walWriteReceiveDelayInMb_;
    bool walWriteReceiveDelayInMbIsSet_;
    std::string walWriteReplayDelayInMb_;
    bool walWriteReplayDelayInMbIsSet_;
    std::string walReceiveReplayDelayInMs_;
    bool walReceiveReplayDelayInMsIsSet_;
    std::string masterInstanceId_;
    bool masterInstanceIdIsSet_;
    std::string masterRegion_;
    bool masterRegionIsSet_;
    std::string slaveInstanceId_;
    bool slaveInstanceIdIsSet_;
    std::string slaveRegion_;
    bool slaveRegionIsSet_;
    std::string buildProcess_;
    bool buildProcessIsSet_;
    int64_t time_;
    bool timeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_InstanceDrInfo_H_
