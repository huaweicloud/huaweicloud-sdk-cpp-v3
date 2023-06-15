
#ifndef HUAWEICLOUD_SDK_LIVE_V2_MODEL_StreamPortrait_H_
#define HUAWEICLOUD_SDK_LIVE_V2_MODEL_StreamPortrait_H_

#include <huaweicloud/live/v2/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
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
class HUAWEICLOUD_LIVE_V2_EXPORT  StreamPortrait
    : public ModelBase
{
public:
    StreamPortrait();
    virtual ~StreamPortrait();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// StreamPortrait members

    /// <summary>
    /// 统计日期，日期格式按照ISO8601表示法，格式：YYYYMMDD，如20200904。统计该统计日期00:00-23:59时段的播放画像信息。
    /// </summary>

    std::string getTime() const;
    bool timeIsSet() const;
    void unsettime();
    void setTime(const std::string& value);

    /// <summary>
    /// 累计流量，单位为byte。
    /// </summary>

    int64_t getFlow() const;
    bool flowIsSet() const;
    void unsetflow();
    void setFlow(int64_t value);

    /// <summary>
    /// 累计播放时长,单位为秒。
    /// </summary>

    int64_t getPlayDuration() const;
    bool playDurationIsSet() const;
    void unsetplayDuration();
    void setPlayDuration(int64_t value);

    /// <summary>
    /// 累计请求次数。
    /// </summary>

    int64_t getRequestCount() const;
    bool requestCountIsSet() const;
    void unsetrequestCount();
    void setRequestCount(int64_t value);

    /// <summary>
    /// 累计观看人数,根据IP去重。
    /// </summary>

    int64_t getUserCount() const;
    bool userCountIsSet() const;
    void unsetuserCount();
    void setUserCount(int64_t value);

    /// <summary>
    /// 峰值观看人数,flv/rtmp协议是统计Session会话ID，其它协议统计IP,1分钟的采样数据。
    /// </summary>

    int64_t getPeakUserCount() const;
    bool peakUserCountIsSet() const;
    void unsetpeakUserCount();
    void setPeakUserCount(int64_t value);

    /// <summary>
    /// 峰值带宽，单位bps,5分钟的采样数据。
    /// </summary>

    int64_t getPeakBandwidth() const;
    bool peakBandwidthIsSet() const;
    void unsetpeakBandwidth();
    void setPeakBandwidth(int64_t value);

    /// <summary>
    /// 累计直播(推流)时长,单位为秒。
    /// </summary>

    int64_t getPushDuration() const;
    bool pushDurationIsSet() const;
    void unsetpushDuration();
    void setPushDuration(int64_t value);


protected:
    std::string time_;
    bool timeIsSet_;
    int64_t flow_;
    bool flowIsSet_;
    int64_t playDuration_;
    bool playDurationIsSet_;
    int64_t requestCount_;
    bool requestCountIsSet_;
    int64_t userCount_;
    bool userCountIsSet_;
    int64_t peakUserCount_;
    bool peakUserCountIsSet_;
    int64_t peakBandwidth_;
    bool peakBandwidthIsSet_;
    int64_t pushDuration_;
    bool pushDurationIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V2_MODEL_StreamPortrait_H_
