
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_VideoLayerConfig_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_VideoLayerConfig_H_


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
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  VideoLayerConfig
    : public ModelBase
{
public:
    VideoLayerConfig();
    virtual ~VideoLayerConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// VideoLayerConfig members

    /// <summary>
    /// **参数解释**： 视频文件的URL。 **约束限制**： * 仅直播支持外部URL，其他业务通过资产库查询获取，不支持外部URL。 **取值范围**： 字符长度1-2048位。 **默认取值**： 不涉及。
    /// </summary>

    std::string getVideoUrl() const;
    bool videoUrlIsSet() const;
    void unsetvideoUrl();
    void setVideoUrl(const std::string& value);

    /// <summary>
    /// **参数解释**： 视频封面文件的URL。 **约束限制**： * 仅直播支持外部URL，其他业务通过资产库查询获取，不支持外部URL。 **取值范围**： 字符长度1-2048位。 **默认取值**： 不涉及。
    /// </summary>

    std::string getVideoCoverUrl() const;
    bool videoCoverUrlIsSet() const;
    void unsetvideoCoverUrl();
    void setVideoCoverUrl(const std::string& value);

    /// <summary>
    /// **参数解释**： 循环播放视频次数。  特殊取值： * 0：表示不播放 * -1：表示持续循环播放  **约束限制**： 不涉及。
    /// </summary>

    int32_t getLoopCount() const;
    bool loopCountIsSet() const;
    void unsetloopCount();
    void setLoopCount(int32_t value);

    /// <summary>
    /// **参数解释**： 按照百分比，调整视频素材的音量，取值为0-100。  特殊取值为0，表示不开启声音（默认值）。  **约束限制**： 不涉及。
    /// </summary>

    int32_t getVideoSound() const;
    bool videoSoundIsSet() const;
    void unsetvideoSound();
    void setVideoSound(int32_t value);

    /// <summary>
    /// **参数解释**： 是否播放完整个视频，true表示播放完整个视频，false表示当场景文本/音频结束时，视频也同时不再播放。  特殊取值： 默认值为false  **约束限制**： 不涉及。
    /// </summary>

    bool isIsPlayTheEntireVideo() const;
    bool isPlayTheEntireVideoIsSet() const;
    void unsetisPlayTheEntireVideo();
    void setIsPlayTheEntireVideo(bool value);


protected:
    std::string videoUrl_;
    bool videoUrlIsSet_;
    std::string videoCoverUrl_;
    bool videoCoverUrlIsSet_;
    int32_t loopCount_;
    bool loopCountIsSet_;
    int32_t videoSound_;
    bool videoSoundIsSet_;
    bool isPlayTheEntireVideo_;
    bool isPlayTheEntireVideoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_VideoLayerConfig_H_
