
#ifndef HUAWEICLOUD_SDK_LIVE_V2_MODEL_ListSingleStreamDetailResponse_H_
#define HUAWEICLOUD_SDK_LIVE_V2_MODEL_ListSingleStreamDetailResponse_H_

#include <huaweicloud/live/v2/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>
#include <huaweicloud/live/v2/model/StreamDetail.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_LIVE_V2_EXPORT  ListSingleStreamDetailResponse
    : public ModelBase, public HttpResponse
{
public:
    ListSingleStreamDetailResponse();
    virtual ~ListSingleStreamDetailResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// ListSingleStreamDetailResponse members

    /// <summary>
    /// 推流域名
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
    /// 展示流视频帧率情况，帧率单位为fps。  如果出现断流则会出现多个时间段流信息，如： &#x60;&#x60;&#x60; \&quot;video_framerate\&quot;: [     {       \&quot;start_time\&quot;: \&quot;2022-02-04T07:00:00Z\&quot;,       \&quot;end_time\&quot;: \&quot;2022-02-04T07:00:02Z\&quot;,       \&quot;data_list\&quot;: [         21,         22       ]     },     {       \&quot;start_time\&quot;: \&quot;2022-02-04T07:00:05Z\&quot;,       \&quot;end_time\&quot;: \&quot;2022-02-04T07:00:07Z\&quot;,       \&quot;data_list\&quot;: [         13,         34,         21       ]     }   ] 
    /// </summary>

    std::vector<StreamDetail>& getVideoFramerate();
    bool videoFramerateIsSet() const;
    void unsetvideoFramerate();
    void setVideoFramerate(const std::vector<StreamDetail>& value);

    /// <summary>
    /// 展示流视频码率情况，码率单位为Kbps。  如果出现断流则会出现多个时间段流信息，如： &#x60;&#x60;&#x60; \&quot;video_bitrate\&quot;: [     {       \&quot;start_time\&quot;: \&quot;2022-02-04T07:00:00Z\&quot;,       \&quot;end_time\&quot;: \&quot;2022-02-04T07:00:02Z\&quot;,       \&quot;data_list\&quot;: [         1326,         1268,         775       ]     },     {       \&quot;start_time\&quot;: \&quot;2022-02-04T07:00:05Z\&quot;,       \&quot;end_time\&quot;: \&quot;2022-02-04T07:00:07Z\&quot;,       \&quot;data_list\&quot;: [         1021,         2022       ]     }   ] 
    /// </summary>

    std::vector<StreamDetail>& getVideoBitrate();
    bool videoBitrateIsSet() const;
    void unsetvideoBitrate();
    void setVideoBitrate(const std::vector<StreamDetail>& value);

    /// <summary>
    /// 展示流音频帧率情况，帧率单位为fps。  如果出现断流则会出现多个时间段流信息，如： &#x60;&#x60;&#x60; \&quot;audio_framerate\&quot;: [     {       \&quot;start_time\&quot;: \&quot;2022-02-04T07:00:00Z\&quot;,       \&quot;end_time\&quot;: \&quot;2022-02-04T07:00:02Z\&quot;,       \&quot;data_list\&quot;: [         10,         17       ]     },     {       \&quot;start_time\&quot;: \&quot;2022-02-04T07:00:05Z\&quot;,       \&quot;end_time\&quot;: \&quot;2022-02-04T07:00:06Z\&quot;,       \&quot;data_list\&quot;: [         31,         33       ]     }   ] 
    /// </summary>

    std::vector<StreamDetail>& getAudioFramerate();
    bool audioFramerateIsSet() const;
    void unsetaudioFramerate();
    void setAudioFramerate(const std::vector<StreamDetail>& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    std::string publishDomain_;
    bool publishDomainIsSet_;
    std::string app_;
    bool appIsSet_;
    std::string stream_;
    bool streamIsSet_;
    std::vector<StreamDetail> videoFramerate_;
    bool videoFramerateIsSet_;
    std::vector<StreamDetail> videoBitrate_;
    bool videoBitrateIsSet_;
    std::vector<StreamDetail> audioFramerate_;
    bool audioFramerateIsSet_;
    std::string xRequestId_;
    bool xRequestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V2_MODEL_ListSingleStreamDetailResponse_H_
