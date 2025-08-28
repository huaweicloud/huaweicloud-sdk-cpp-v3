
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_VideoConfig_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_VideoConfig_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/metastudio/v1/model/SubtitleConfig.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 视频输出配置。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  VideoConfig
    : public ModelBase
{
public:
    VideoConfig();
    virtual ~VideoConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// VideoConfig members

    /// <summary>
    /// **参数解释**： 输出视频的剪辑方式。 **约束限制**： 不涉及。 **取值范围**： * RESIZE：视频缩放。 * CROP：视频裁剪。
    /// </summary>

    std::string getClipMode() const;
    bool clipModeIsSet() const;
    void unsetclipMode();
    void setClipMode(const std::string& value);

    /// <summary>
    /// **参数解释**： 视频编码格式及视频文件格式。 **约束限制**： 仅分身数字人视频制作支持VP8和QTRLE编码。QTRLE编码时文本驱动字符数限制小于1500字，音频驱动音频长度小于5分钟。 QTRLE编码需要先申请开通白名单后才能使用  **取值范围**： * H264：h264编码，输出mp4文件。 * VP8：vp8编码，输出webm文件。 * QTRLE：qtrle ，输出mov文件。  **默认取值**： H264
    /// </summary>

    std::string getCodec() const;
    bool codecIsSet() const;
    void unsetcodec();
    void setCodec(const std::string& value);

    /// <summary>
    /// **参数解释**： 输出平均码率。单位：kbps。 **约束限制**： * 分身数字人视频制作采用质量优先，可能会超过设置的码率。 * 分身数字人直播码率范围[1000, 8000]。  **默认取值**： 不涉及
    /// </summary>

    int32_t getBitrate() const;
    bool bitrateIsSet() const;
    void unsetbitrate();
    void setBitrate(int32_t value);

    /// <summary>
    /// **参数解释**： 视频宽度。单位：像素。 **约束限制**： * clip_mode&#x3D;RESIZE时，当前支持1920x1080、1080x1920、1280x720、720x1280、3840x2160、2160x3840六种分辨率。4K分辨率视频需要分身数字人模型支持4K的情况下才能使用。 * clip_mode&#x3D;CROP，裁剪后视频，（dx,dy）为原点，保留视频像宽度为width。 * 分身数字人直播和智能交互目前只支持1080x1920、1920x1080。  **默认取值**： 不涉及
    /// </summary>

    int32_t getWidth() const;
    bool widthIsSet() const;
    void unsetwidth();
    void setWidth(int32_t value);

    /// <summary>
    /// **参数解释**： 视频高度。  单位：像素。 **约束限制**： * clip_mode&#x3D;RESIZE时，当前支持1920x1080、1080x1920、1280x720、720x1280、3840x2160、2160x3840六种分辨率分辨率。 * clip_mode&#x3D;CROP，裁剪后视频，（dx,dy）为原点，保留视频像高度为height。 * 分身数字人直播和智能交互目前只支持1080x1920、1920x1080。  **默认取值**： 不涉及
    /// </summary>

    int32_t getHeight() const;
    bool heightIsSet() const;
    void unsetheight();
    void setHeight(int32_t value);

    /// <summary>
    /// **参数解释**： 帧率。单位：FPS。 **约束限制**： 分身数字人视频固定25FPS。
    /// </summary>

    std::string getFrameRate() const;
    bool frameRateIsSet() const;
    void unsetframeRate();
    void setFrameRate(const std::string& value);

    /// <summary>
    /// **参数解释**： 输出的视频是否带字幕。 **约束限制**： 分身数字人直播暂时不支持字幕。  **取值范围**： * true: 打开字幕 * false: 关闭字幕
    /// </summary>

    bool isIsSubtitleEnable() const;
    bool isSubtitleEnableIsSet() const;
    void unsetisSubtitleEnable();
    void setIsSubtitleEnable(bool value);

    /// <summary>
    /// 
    /// </summary>

    SubtitleConfig getSubtitleConfig() const;
    bool subtitleConfigIsSet() const;
    void unsetsubtitleConfig();
    void setSubtitleConfig(const SubtitleConfig& value);

    /// <summary>
    /// **参数解释**： 裁剪视频左上角像素点横坐标。 &gt; 以模特分辨率为画布大小，比如1920*1080分辨率的模特，dx最小值是0，最大值是1920。  **约束限制**： clip_mode&#x3D; CROP时生效。 **默认取值**： 不涉及
    /// </summary>

    int32_t getDx() const;
    bool dxIsSet() const;
    void unsetdx();
    void setDx(int32_t value);

    /// <summary>
    /// **参数解释**： 裁剪视频左上角像素点纵坐标。 &gt; 以模特分辨率为画布大小，比如1920*1080分辨率的模特，dy最小值是0，最大值是1080  **约束限制**： clip_mode&#x3D; CROP时生效。 **默认取值**： 不涉及
    /// </summary>

    int32_t getDy() const;
    bool dyIsSet() const;
    void unsetdy();
    void setDy(int32_t value);

    /// <summary>
    /// **参数解释**： 视频是否开启超分。 **约束限制**： 仅分身数字人视频制作支持。 **取值范围** * true: 开启 * false: 不开启
    /// </summary>

    bool isIsEnableSuperResolution() const;
    bool isEnableSuperResolutionIsSet() const;
    void unsetisEnableSuperResolution();
    void setIsEnableSuperResolution(bool value);

    /// <summary>
    /// **参数解释**： 视频结束帧是否跟起始帧相同。需要多个数字人视频无缝拼接时设置成true。 **约束限制**： 仅分身数字人视频制作支持，当视频制作时插入动作标签后此设置将失效。 **取值范围** * true: 开启 * false: 不开启
    /// </summary>

    bool isIsEndAtFirstFrame() const;
    bool isEndAtFirstFrameIsSet() const;
    void unsetisEndAtFirstFrame();
    void setIsEndAtFirstFrame(bool value);

    /// <summary>
    /// 视频文件上传的外部URL。  &gt; * 需要先申请开通白名单后，才允许将视频上传到外部URL。
    /// </summary>

    std::string getOutputExternalUrl() const;
    bool outputExternalUrlIsSet() const;
    void unsetoutputExternalUrl();
    void setOutputExternalUrl(const std::string& value);

    /// <summary>
    /// **参数解释**： 是否应用当前租户的读法配置 **约束限制**： 仅分身数字人视频制作支持。 **取值范围** * true: 开启 * false: 不开启
    /// </summary>

    bool isIsVocabularyConfigEnable() const;
    bool isVocabularyConfigEnableIsSet() const;
    void unsetisVocabularyConfigEnable();
    void setIsVocabularyConfigEnable(bool value);


protected:
    std::string clipMode_;
    bool clipModeIsSet_;
    std::string codec_;
    bool codecIsSet_;
    int32_t bitrate_;
    bool bitrateIsSet_;
    int32_t width_;
    bool widthIsSet_;
    int32_t height_;
    bool heightIsSet_;
    std::string frameRate_;
    bool frameRateIsSet_;
    bool isSubtitleEnable_;
    bool isSubtitleEnableIsSet_;
    SubtitleConfig subtitleConfig_;
    bool subtitleConfigIsSet_;
    int32_t dx_;
    bool dxIsSet_;
    int32_t dy_;
    bool dyIsSet_;
    bool isEnableSuperResolution_;
    bool isEnableSuperResolutionIsSet_;
    bool isEndAtFirstFrame_;
    bool isEndAtFirstFrameIsSet_;
    std::string outputExternalUrl_;
    bool outputExternalUrlIsSet_;
    bool isVocabularyConfigEnable_;
    bool isVocabularyConfigEnableIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_VideoConfig_H_
