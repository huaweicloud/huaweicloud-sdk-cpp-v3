
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_SetQosThresholdReq_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_SetQosThresholdReq_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/meeting/v1/model/SetPacketThresholdData.h>
#include <huaweicloud/meeting/v1/model/SetThresholdData.h>
#include <huaweicloud/meeting/v1/model/SetCPUThresholdData.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 设置企业用户指定类型的阈值的请求体。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  SetQosThresholdReq
    : public ModelBase
{
public:
    SetQosThresholdReq();
    virtual ~SetQosThresholdReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SetQosThresholdReq members

    /// <summary>
    /// 
    /// </summary>

    SetThresholdData getLatency() const;
    bool latencyIsSet() const;
    void unsetlatency();
    void setLatency(const SetThresholdData& value);

    /// <summary>
    /// 
    /// </summary>

    SetThresholdData getJitter() const;
    bool jitterIsSet() const;
    void unsetjitter();
    void setJitter(const SetThresholdData& value);

    /// <summary>
    /// 
    /// </summary>

    SetPacketThresholdData getPacketLoss() const;
    bool packetLossIsSet() const;
    void unsetpacketLoss();
    void setPacketLoss(const SetPacketThresholdData& value);

    /// <summary>
    /// 
    /// </summary>

    SetCPUThresholdData getClientCpuMax() const;
    bool clientCpuMaxIsSet() const;
    void unsetclientCpuMax();
    void setClientCpuMax(const SetCPUThresholdData& value);

    /// <summary>
    /// 
    /// </summary>

    SetCPUThresholdData getSystemCpuMax() const;
    bool systemCpuMaxIsSet() const;
    void unsetsystemCpuMax();
    void setSystemCpuMax(const SetCPUThresholdData& value);


protected:
    SetThresholdData latency_;
    bool latencyIsSet_;
    SetThresholdData jitter_;
    bool jitterIsSet_;
    SetPacketThresholdData packetLoss_;
    bool packetLossIsSet_;
    SetCPUThresholdData clientCpuMax_;
    bool clientCpuMaxIsSet_;
    SetCPUThresholdData systemCpuMax_;
    bool systemCpuMaxIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_SetQosThresholdReq_H_
