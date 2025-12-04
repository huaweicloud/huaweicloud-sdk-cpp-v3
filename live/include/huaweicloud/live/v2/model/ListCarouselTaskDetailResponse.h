
#ifndef HUAWEICLOUD_SDK_LIVE_V2_MODEL_ListCarouselTaskDetailResponse_H_
#define HUAWEICLOUD_SDK_LIVE_V2_MODEL_ListCarouselTaskDetailResponse_H_


#include <huaweicloud/live/v2/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <vector>

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
class HUAWEICLOUD_LIVE_V2_EXPORT  ListCarouselTaskDetailResponse
    : public ModelBase, public HttpResponse
{
public:
    ListCarouselTaskDetailResponse();
    virtual ~ListCarouselTaskDetailResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ListCarouselTaskDetailResponse members

    /// <summary>
    /// 采样开始时间。日期格式按照ISO8601表示法，并使用UTC时间。 格式为：YYYY-MM-DDThh:mm:ssZ。
    /// </summary>

    std::string getStartTime() const;
    bool startTimeIsSet() const;
    void unsetstartTime();
    void setStartTime(const std::string& value);

    /// <summary>
    /// 采样结束时间。日期格式按照ISO8601表示法，并使用UTC时间。 格式为：YYYY-MM-DDThh:mm:ssZ。
    /// </summary>

    std::string getEndTime() const;
    bool endTimeIsSet() const;
    void unsetendTime();
    void setEndTime(const std::string& value);

    /// <summary>
    /// 视频帧率信息列表，单位为fps。
    /// </summary>

    std::vector<int64_t>& getVideoFramerateList();
    bool videoFramerateListIsSet() const;
    void unsetvideoFramerateList();
    void setVideoFramerateList(std::vector<int64_t> value);

    /// <summary>
    /// 视频码率信息列表，单位为kbps。
    /// </summary>

    std::vector<int64_t>& getVideoBitrateList();
    bool videoBitrateListIsSet() const;
    void unsetvideoBitrateList();
    void setVideoBitrateList(std::vector<int64_t> value);

    /// <summary>
    /// 音频帧率信息列表，单位为fps。
    /// </summary>

    std::vector<int64_t>& getAudioFramerateList();
    bool audioFramerateListIsSet() const;
    void unsetaudioFramerateList();
    void setAudioFramerateList(std::vector<int64_t> value);

    /// <summary>
    /// 音频码率信息列表，单位为kbps。
    /// </summary>

    std::vector<int64_t>& getAudioBitrateList();
    bool audioBitrateListIsSet() const;
    void unsetaudioBitrateList();
    void setAudioBitrateList(std::vector<int64_t> value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    std::string startTime_;
    bool startTimeIsSet_;
    std::string endTime_;
    bool endTimeIsSet_;
    std::vector<int64_t> videoFramerateList_;
    bool videoFramerateListIsSet_;
    std::vector<int64_t> videoBitrateList_;
    bool videoBitrateListIsSet_;
    std::vector<int64_t> audioFramerateList_;
    bool audioFramerateListIsSet_;
    std::vector<int64_t> audioBitrateList_;
    bool audioBitrateListIsSet_;
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

#endif // HUAWEICLOUD_SDK_LIVE_V2_MODEL_ListCarouselTaskDetailResponse_H_
