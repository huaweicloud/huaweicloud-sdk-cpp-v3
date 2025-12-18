
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowQosThresholdResponse_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowQosThresholdResponse_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/meeting/v1/model/PacketThresholdData.h>
#include <huaweicloud/meeting/v1/model/CPUThresholdData.h>
#include <huaweicloud/meeting/v1/model/ThresholdData.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  ShowQosThresholdResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowQosThresholdResponse();
    virtual ~ShowQosThresholdResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowQosThresholdResponse members

    /// <summary>
    /// 
    /// </summary>

    ThresholdData getLatency() const;
    bool latencyIsSet() const;
    void unsetlatency();
    void setLatency(const ThresholdData& value);

    /// <summary>
    /// 
    /// </summary>

    ThresholdData getJitter() const;
    bool jitterIsSet() const;
    void unsetjitter();
    void setJitter(const ThresholdData& value);

    /// <summary>
    /// 
    /// </summary>

    PacketThresholdData getPacketLoss() const;
    bool packetLossIsSet() const;
    void unsetpacketLoss();
    void setPacketLoss(const PacketThresholdData& value);

    /// <summary>
    /// 
    /// </summary>

    CPUThresholdData getClientCpuMax() const;
    bool clientCpuMaxIsSet() const;
    void unsetclientCpuMax();
    void setClientCpuMax(const CPUThresholdData& value);

    /// <summary>
    /// 
    /// </summary>

    CPUThresholdData getSystemCpuMax() const;
    bool systemCpuMaxIsSet() const;
    void unsetsystemCpuMax();
    void setSystemCpuMax(const CPUThresholdData& value);


protected:
    ThresholdData latency_;
    bool latencyIsSet_;
    ThresholdData jitter_;
    bool jitterIsSet_;
    PacketThresholdData packetLoss_;
    bool packetLossIsSet_;
    CPUThresholdData clientCpuMax_;
    bool clientCpuMaxIsSet_;
    CPUThresholdData systemCpuMax_;
    bool systemCpuMaxIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_ShowQosThresholdResponse_H_
