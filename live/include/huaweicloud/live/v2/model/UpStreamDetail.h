
#ifndef HUAWEICLOUD_SDK_LIVE_V2_MODEL_UpStreamDetail_H_
#define HUAWEICLOUD_SDK_LIVE_V2_MODEL_UpStreamDetail_H_


#include <huaweicloud/live/v2/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_LIVE_V2_EXPORT  UpStreamDetail
    : public ModelBase
{
public:
    UpStreamDetail();
    virtual ~UpStreamDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// UpStreamDetail members

    /// <summary>
    /// 采样时间。日期格式按照ISO8601表示法，并使用UTC时间。 格式为：YYYY-MM-DDThh:mm:ssZ。
    /// </summary>

    std::string getTime() const;
    bool timeIsSet() const;
    void unsettime();
    void setTime(const std::string& value);

    /// <summary>
    /// 帧率，单位为fps
    /// </summary>

    int64_t getFps() const;
    bool fpsIsSet() const;
    void unsetfps();
    void setFps(int64_t value);

    /// <summary>
    /// 码率，单位为Kbps
    /// </summary>

    int64_t getRate() const;
    bool rateIsSet() const;
    void unsetrate();
    void setRate(int64_t value);

    /// <summary>
    /// 时延 单位ms
    /// </summary>

    int64_t getDelay() const;
    bool delayIsSet() const;
    void unsetdelay();
    void setDelay(int64_t value);

    /// <summary>
    /// 最近一次gop的时长 单位ms
    /// </summary>

    int64_t getGopDuration() const;
    bool gopDurationIsSet() const;
    void unsetgopDuration();
    void setGopDuration(int64_t value);

    /// <summary>
    /// 视频DTS 单位ms
    /// </summary>

    int64_t getLastVideoPts() const;
    bool lastVideoPtsIsSet() const;
    void unsetlastVideoPts();
    void setLastVideoPts(int64_t value);

    /// <summary>
    /// 音频DTS 单位ms
    /// </summary>

    int64_t getLastAudioPts() const;
    bool lastAudioPtsIsSet() const;
    void unsetlastAudioPts();
    void setLastAudioPts(int64_t value);

    /// <summary>
    /// 音视频DTS差值 单位ms
    /// </summary>

    int64_t getLastVideoAudioPtsDiff() const;
    bool lastVideoAudioPtsDiffIsSet() const;
    void unsetlastVideoAudioPtsDiff();
    void setLastVideoAudioPtsDiff(int64_t value);


protected:
    std::string time_;
    bool timeIsSet_;
    int64_t fps_;
    bool fpsIsSet_;
    int64_t rate_;
    bool rateIsSet_;
    int64_t delay_;
    bool delayIsSet_;
    int64_t gopDuration_;
    bool gopDurationIsSet_;
    int64_t lastVideoPts_;
    bool lastVideoPtsIsSet_;
    int64_t lastAudioPts_;
    bool lastAudioPtsIsSet_;
    int64_t lastVideoAudioPtsDiff_;
    bool lastVideoAudioPtsDiffIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V2_MODEL_UpStreamDetail_H_
