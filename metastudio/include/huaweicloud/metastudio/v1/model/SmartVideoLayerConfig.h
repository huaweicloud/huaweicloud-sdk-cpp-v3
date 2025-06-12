
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SmartVideoLayerConfig_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SmartVideoLayerConfig_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 素材视频图层配置。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  SmartVideoLayerConfig
    : public ModelBase
{
public:
    SmartVideoLayerConfig();
    virtual ~SmartVideoLayerConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SmartVideoLayerConfig members

    /// <summary>
    /// 视频文件的URL。
    /// </summary>

    std::string getVideoUrl() const;
    bool videoUrlIsSet() const;
    void unsetvideoUrl();
    void setVideoUrl(const std::string& value);

    /// <summary>
    /// 视频封面文件的URL。
    /// </summary>

    std::string getVideoCoverUrl() const;
    bool videoCoverUrlIsSet() const;
    void unsetvideoCoverUrl();
    void setVideoCoverUrl(const std::string& value);

    /// <summary>
    /// **参数解释**： 图片显示时长，单位s。  显示时长规则为，若携带reply_texts、reply_audios，则与播放语音内容时长保持一致。若未携带，则与匹配的关键词语音内容时长保持一致。
    /// </summary>

    int32_t getDisplayDuration() const;
    bool displayDurationIsSet() const;
    void unsetdisplayDuration();
    void setDisplayDuration(int32_t value);


protected:
    std::string videoUrl_;
    bool videoUrlIsSet_;
    std::string videoCoverUrl_;
    bool videoCoverUrlIsSet_;
    int32_t displayDuration_;
    bool displayDurationIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SmartVideoLayerConfig_H_
