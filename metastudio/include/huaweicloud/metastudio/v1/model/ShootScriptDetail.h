
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShootScriptDetail_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShootScriptDetail_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/LayerConfig.h>
#include <huaweicloud/metastudio/v1/model/TextConfig.h>
#include <string>
#include <huaweicloud/metastudio/v1/model/AudioDriveActionConfig.h>
#include <huaweicloud/metastudio/v1/model/ShootScript.h>
#include <huaweicloud/metastudio/v1/model/AudioInfo.h>
#include <huaweicloud/metastudio/v1/model/BackgroundConfigInfo.h>
#include <vector>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ShootScriptDetail
    : public ModelBase
{
public:
    ShootScriptDetail();
    virtual ~ShootScriptDetail();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShootScriptDetail members

    /// <summary>
    /// **参数解释**： 脚本类型，即视频制作的驱动方式 **约束限制**： 不涉及 **取值范围** * TEXT: 文本驱动，即通过TTS合成语音 * AUDIO: 语音驱动
    /// </summary>

    std::string getScriptType() const;
    bool scriptTypeIsSet() const;
    void unsetscriptType();
    void setScriptType(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    TextConfig getTextConfig() const;
    bool textConfigIsSet() const;
    void unsettextConfig();
    void setTextConfig(const TextConfig& value);

    /// <summary>
    /// 语音驱动时，音频时长，单位秒。 &gt; * 创建剧本时此参数可以不设置，音频文件上传成功后，通过更新剧本接口设置 &gt; * 查询剧本详情时，返回音频时长，用于预估视频时长
    /// </summary>

    float getAudioDuration() const;
    bool audioDurationIsSet() const;
    void unsetaudioDuration();
    void setAudioDuration(float value);

    /// <summary>
    /// 语音驱动时的动作配置。
    /// </summary>

    std::vector<AudioDriveActionConfig>& getAudioDriveActionConfig();
    bool audioDriveActionConfigIsSet() const;
    void unsetaudioDriveActionConfig();
    void setAudioDriveActionConfig(const std::vector<AudioDriveActionConfig>& value);

    /// <summary>
    /// 语音驱动音频文件外部下载URL。  &gt; * 只支持分身数字人视频制作  &gt; * 需要先申请开通白名单后，才允许通过外部URL的音频文件来驱动分身数字人视频。  &gt; * 音频文件需要存放在华为云OBS
    /// </summary>

    std::string getAudioDriveFileExternalUrl() const;
    bool audioDriveFileExternalUrlIsSet() const;
    void unsetaudioDriveFileExternalUrl();
    void setAudioDriveFileExternalUrl(const std::string& value);

    /// <summary>
    /// 背景配置。
    /// </summary>

    std::vector<BackgroundConfigInfo>& getBackgroundConfig();
    bool backgroundConfigIsSet() const;
    void unsetbackgroundConfig();
    void setBackgroundConfig(const std::vector<BackgroundConfigInfo>& value);

    /// <summary>
    /// 图层配置。
    /// </summary>

    std::vector<LayerConfig>& getLayerConfig();
    bool layerConfigIsSet() const;
    void unsetlayerConfig();
    void setLayerConfig(const std::vector<LayerConfig>& value);

    /// <summary>
    /// 
    /// </summary>

    AudioInfo getAudioConfig() const;
    bool audioConfigIsSet() const;
    void unsetaudioConfig();
    void setAudioConfig(const AudioInfo& value);

    /// <summary>
    /// **参数解释**： 剧本场景缩略图url。 **约束限制**： 不涉及。 **取值范围**： 字符长度1-2048位。 **默认取值**： 不涉及。
    /// </summary>

    std::string getThumbnailUrl() const;
    bool thumbnailUrlIsSet() const;
    void unsetthumbnailUrl();
    void setThumbnailUrl(const std::string& value);


protected:
    std::string scriptType_;
    bool scriptTypeIsSet_;
    TextConfig textConfig_;
    bool textConfigIsSet_;
    float audioDuration_;
    bool audioDurationIsSet_;
    std::vector<AudioDriveActionConfig> audioDriveActionConfig_;
    bool audioDriveActionConfigIsSet_;
    std::string audioDriveFileExternalUrl_;
    bool audioDriveFileExternalUrlIsSet_;
    std::vector<BackgroundConfigInfo> backgroundConfig_;
    bool backgroundConfigIsSet_;
    std::vector<LayerConfig> layerConfig_;
    bool layerConfigIsSet_;
    AudioInfo audioConfig_;
    bool audioConfigIsSet_;
    std::string thumbnailUrl_;
    bool thumbnailUrlIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShootScriptDetail_H_
