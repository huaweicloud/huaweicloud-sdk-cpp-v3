
#ifndef HUAWEICLOUD_SDK_VOD_V1_MODEL_QualityInfo_H_
#define HUAWEICLOUD_SDK_VOD_V1_MODEL_QualityInfo_H_

#include <huaweicloud/vod/v1/VodExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/vod/v1/model/AudioTemplateInfo.h>
#include <huaweicloud/vod/v1/model/VideoTemplateInfo.h>
#include <string>

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
class HUAWEICLOUD_VOD_V1_EXPORT  QualityInfo
    : public ModelBase
{
public:
    QualityInfo();
    virtual ~QualityInfo();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// QualityInfo members

    /// <summary>
    /// 
    /// </summary>

    VideoTemplateInfo getVideo() const;
    bool videoIsSet() const;
    void unsetvideo();
    void setVideo(const VideoTemplateInfo& value);

    /// <summary>
    /// 
    /// </summary>

    AudioTemplateInfo getAudio() const;
    bool audioIsSet() const;
    void unsetaudio();
    void setAudio(const AudioTemplateInfo& value);

    /// <summary>
    /// 格式。
    /// </summary>

    std::string getFormat() const;
    bool formatIsSet() const;
    void unsetformat();
    void setFormat(const std::string& value);


protected:
    VideoTemplateInfo video_;
    bool videoIsSet_;
    AudioTemplateInfo audio_;
    bool audioIsSet_;
    std::string format_;
    bool formatIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_VOD_V1_MODEL_QualityInfo_H_
