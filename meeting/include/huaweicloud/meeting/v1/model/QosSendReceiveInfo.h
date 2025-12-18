
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_QosSendReceiveInfo_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_QosSendReceiveInfo_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/meeting/v1/model/QosDataNoThrElement.h>
#include <huaweicloud/meeting/v1/model/QosDataElement.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 会议与会者发送QoS数据。当qosType &#x3D; audio/video/screen 时有效。
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  QosSendReceiveInfo
    : public ModelBase
{
public:
    QosSendReceiveInfo();
    virtual ~QosSendReceiveInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// QosSendReceiveInfo members

    /// <summary>
    /// 码率, 单位kbps，不含阈值告警。当qosType &#x3D; audio/video/screen 时有效。
    /// </summary>

    std::vector<QosDataNoThrElement>& getBitrate();
    bool bitrateIsSet() const;
    void unsetbitrate();
    void setBitrate(const std::vector<QosDataNoThrElement>& value);

    /// <summary>
    /// 时延，单位毫秒, 含阈值告警。当qosType &#x3D; audio/video/screen 时有效。
    /// </summary>

    std::vector<QosDataElement>& getLatency();
    bool latencyIsSet() const;
    void unsetlatency();
    void setLatency(const std::vector<QosDataElement>& value);

    /// <summary>
    /// 抖动, 单位毫秒，含阈值告警。当qosType &#x3D; audio/video/screen 时有效。
    /// </summary>

    std::vector<QosDataElement>& getJitter();
    bool jitterIsSet() const;
    void unsetjitter();
    void setJitter(const std::vector<QosDataElement>& value);

    /// <summary>
    /// 最大丢包率, 单位百分比 含阈值告警。当qosType &#x3D; audio/video/screen 时有效。
    /// </summary>

    std::vector<QosDataElement>& getPacketLossMax();
    bool packetLossMaxIsSet() const;
    void unsetpacketLossMax();
    void setPacketLossMax(const std::vector<QosDataElement>& value);

    /// <summary>
    /// 分辨率, 不含阈值告警。当qosType &#x3D; video/screen 时有效。
    /// </summary>

    std::vector<QosDataNoThrElement>& getResolution();
    bool resolutionIsSet() const;
    void unsetresolution();
    void setResolution(const std::vector<QosDataNoThrElement>& value);

    /// <summary>
    /// 帧率, 单位fps，不含阈值告警。当qosType &#x3D; video/screen 时有效。
    /// </summary>

    std::vector<QosDataNoThrElement>& getFrame();
    bool frameIsSet() const;
    void unsetframe();
    void setFrame(const std::vector<QosDataNoThrElement>& value);


protected:
    std::vector<QosDataNoThrElement> bitrate_;
    bool bitrateIsSet_;
    std::vector<QosDataElement> latency_;
    bool latencyIsSet_;
    std::vector<QosDataElement> jitter_;
    bool jitterIsSet_;
    std::vector<QosDataElement> packetLossMax_;
    bool packetLossMaxIsSet_;
    std::vector<QosDataNoThrElement> resolution_;
    bool resolutionIsSet_;
    std::vector<QosDataNoThrElement> frame_;
    bool frameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_QosSendReceiveInfo_H_
