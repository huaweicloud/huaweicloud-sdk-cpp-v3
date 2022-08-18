
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_QualityInfoList_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_QualityInfoList_H_

#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vod/v1/model/AudioInfo.h>
#include <huaweicloud/vod/v1/model/VideoInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;

/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_VOD_V1_EXPORT  QualityInfoList
    : public ModelBase
{
public:
    QualityInfoList();
    virtual ~QualityInfoList();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// QualityInfoList members

    /// <summary>
    /// 
    /// </summary>

    VideoInfo getVideo() const;
    bool videoIsSet() const;
    void unsetvideo();
    void setVideo(const VideoInfo& value);

    /// <summary>
    /// 
    /// </summary>

    AudioInfo getAudio() const;
    bool audioIsSet() const;
    void unsetaudio();
    void setAudio(const AudioInfo& value);


protected:
    VideoInfo video_;
    bool videoIsSet_;
    AudioInfo audio_;
    bool audioIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_QualityInfoList_H_
