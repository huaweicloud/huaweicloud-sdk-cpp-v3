
#ifndef HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowDrReplicaStatusResponse_H_
#define HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowDrReplicaStatusResponse_H_

#include <huaweicloud/rds/v3/RdsExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
/// Response Object
/// </summary>
class HUAWEICLOUD_RDS_V3_EXPORT  ShowDrReplicaStatusResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowDrReplicaStatusResponse();
    virtual ~ShowDrReplicaStatusResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ShowDrReplicaStatusResponse members

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


protected:
    std::string replicaState_;
    bool replicaStateIsSet_;
    std::string walWriteReceiveDelayInMb_;
    bool walWriteReceiveDelayInMbIsSet_;
    std::string walWriteReplayDelayInMb_;
    bool walWriteReplayDelayInMbIsSet_;
    std::string walReceiveReplayDelayInMs_;
    bool walReceiveReplayDelayInMsIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_RDS_V3_MODEL_ShowDrReplicaStatusResponse_H_
