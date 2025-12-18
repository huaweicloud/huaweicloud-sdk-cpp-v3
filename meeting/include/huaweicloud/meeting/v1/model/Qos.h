
#ifndef HUAWEICLOUD_SDK_MEETING_V1_MODEL_Qos_H_
#define HUAWEICLOUD_SDK_MEETING_V1_MODEL_Qos_H_


#include <huaweicloud/meeting/v1/MeetingExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 网络质量对象，音频不涉及分辨率和帧率（注：所有媒体流的数据均为服务器视角，Portal展示时需要转换为端侧视角）
/// </summary>
class HUAWEICLOUD_MEETING_V1_EXPORT  Qos
    : public ModelBase
{
public:
    Qos();
    virtual ~Qos();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Qos members

    /// <summary>
    /// 网络质量评级
    /// </summary>

    std::string getNetworkQuality() const;
    bool networkQualityIsSet() const;
    void unsetnetworkQuality();
    void setNetworkQuality(const std::string& value);

    /// <summary>
    /// 编解码类型
    /// </summary>

    std::string getCodecType() const;
    bool codecTypeIsSet() const;
    void unsetcodecType();
    void setCodecType(const std::string& value);

    /// <summary>
    /// 带宽(kbit/s)
    /// </summary>

    int32_t getBandWidth() const;
    bool bandWidthIsSet() const;
    void unsetbandWidth();
    void setBandWidth(int32_t value);

    /// <summary>
    /// 丢包率（千分数）
    /// </summary>

    int32_t getLostPacketRate() const;
    bool lostPacketRateIsSet() const;
    void unsetlostPacketRate();
    void setLostPacketRate(int32_t value);

    /// <summary>
    /// 时延(ms)
    /// </summary>

    int32_t getDelay() const;
    bool delayIsSet() const;
    void unsetdelay();
    void setDelay(int32_t value);

    /// <summary>
    /// 抖动(ms)
    /// </summary>

    int32_t getJitter() const;
    bool jitterIsSet() const;
    void unsetjitter();
    void setJitter(int32_t value);

    /// <summary>
    /// 分辨率:高
    /// </summary>

    int32_t getResolutionHeight() const;
    bool resolutionHeightIsSet() const;
    void unsetresolutionHeight();
    void setResolutionHeight(int32_t value);

    /// <summary>
    /// 分辨率：宽
    /// </summary>

    int32_t getResolutionWidth() const;
    bool resolutionWidthIsSet() const;
    void unsetresolutionWidth();
    void setResolutionWidth(int32_t value);

    /// <summary>
    /// 帧率
    /// </summary>

    int32_t getFrameRate() const;
    bool frameRateIsSet() const;
    void unsetframeRate();
    void setFrameRate(int32_t value);

    /// <summary>
    /// 该媒体流编码会场ID，仅服务器向端侧发送方向涉及(视频)，如路径A--&gt;服务器--&gt;B，即B观看A，该媒体流的codec_user_id为A
    /// </summary>

    std::string getCodecUserId() const;
    bool codecUserIdIsSet() const;
    void unsetcodecUserId();
    void setCodecUserId(const std::string& value);


protected:
    std::string networkQuality_;
    bool networkQualityIsSet_;
    std::string codecType_;
    bool codecTypeIsSet_;
    int32_t bandWidth_;
    bool bandWidthIsSet_;
    int32_t lostPacketRate_;
    bool lostPacketRateIsSet_;
    int32_t delay_;
    bool delayIsSet_;
    int32_t jitter_;
    bool jitterIsSet_;
    int32_t resolutionHeight_;
    bool resolutionHeightIsSet_;
    int32_t resolutionWidth_;
    bool resolutionWidthIsSet_;
    int32_t frameRate_;
    bool frameRateIsSet_;
    std::string codecUserId_;
    bool codecUserIdIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_MEETING_V1_MODEL_Qos_H_
