
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_OnlineInfo_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_OnlineInfo_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  OnlineInfo
    : public ModelBase
{
public:
    OnlineInfo();
    virtual ~OnlineInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// OnlineInfo members

    /// <summary>
    /// 域名
    /// </summary>

    std::string getPublishDomain() const;
    bool publishDomainIsSet() const;
    void unsetpublishDomain();
    void setPublishDomain(const std::string& value);

    /// <summary>
    /// 应用名
    /// </summary>

    std::string getApp() const;
    bool appIsSet() const;
    void unsetapp();
    void setApp(const std::string& value);

    /// <summary>
    /// 流名
    /// </summary>

    std::string getStream() const;
    bool streamIsSet() const;
    void unsetstream();
    void setStream(const std::string& value);

    /// <summary>
    /// 视频编码方式 - H264 - H265 
    /// </summary>

    std::string getVideoCodec() const;
    bool videoCodecIsSet() const;
    void unsetvideoCodec();
    void setVideoCodec(const std::string& value);

    /// <summary>
    /// 音频编码方式 - AAC 
    /// </summary>

    std::string getAudioCodec() const;
    bool audioCodecIsSet() const;
    void unsetaudioCodec();
    void setAudioCodec(const std::string& value);

    /// <summary>
    /// 视频帧率
    /// </summary>

    int64_t getVideoFrameRate() const;
    bool videoFrameRateIsSet() const;
    void unsetvideoFrameRate();
    void setVideoFrameRate(int64_t value);

    /// <summary>
    /// 音频帧率
    /// </summary>

    int64_t getAudioFrameRate() const;
    bool audioFrameRateIsSet() const;
    void unsetaudioFrameRate();
    void setAudioFrameRate(int64_t value);

    /// <summary>
    /// 视频码率
    /// </summary>

    int64_t getVideoBitrate() const;
    bool videoBitrateIsSet() const;
    void unsetvideoBitrate();
    void setVideoBitrate(int64_t value);

    /// <summary>
    /// 音频码率
    /// </summary>

    int64_t getAudioBitrate() const;
    bool audioBitrateIsSet() const;
    void unsetaudioBitrate();
    void setAudioBitrate(int64_t value);

    /// <summary>
    /// 视频分辨率
    /// </summary>

    std::string getResolution() const;
    bool resolutionIsSet() const;
    void unsetresolution();
    void setResolution(const std::string& value);

    /// <summary>
    /// 推流设备的ip
    /// </summary>

    std::string getClientIp() const;
    bool clientIpIsSet() const;
    void unsetclientIp();
    void setClientIp(const std::string& value);

    /// <summary>
    /// 开始推流时刻 UTC格式 2006-01-02T15:04:05Z
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);


protected:
    std::string publishDomain_;
    bool publishDomainIsSet_;
    std::string app_;
    bool appIsSet_;
    std::string stream_;
    bool streamIsSet_;
    std::string videoCodec_;
    bool videoCodecIsSet_;
    std::string audioCodec_;
    bool audioCodecIsSet_;
    int64_t videoFrameRate_;
    bool videoFrameRateIsSet_;
    int64_t audioFrameRate_;
    bool audioFrameRateIsSet_;
    int64_t videoBitrate_;
    bool videoBitrateIsSet_;
    int64_t audioBitrate_;
    bool audioBitrateIsSet_;
    std::string resolution_;
    bool resolutionIsSet_;
    std::string clientIp_;
    bool clientIpIsSet_;
    std::string startTime_;
    bool startTimeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_OnlineInfo_H_
