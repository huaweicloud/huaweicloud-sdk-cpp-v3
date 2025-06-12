
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_VideoAssetMeta_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_VideoAssetMeta_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>
#include <huaweicloud/metastudio/v1/model/ErrorResponse.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 视频元数据，自动提取获得。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  VideoAssetMeta
    : public ModelBase
{
public:
    VideoAssetMeta();
    virtual ~VideoAssetMeta();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// VideoAssetMeta members

    /// <summary>
    /// **参数解释**： 视频编码格式。 **约束限制**： 用户无需填写，系统自行提取。 **取值范围**： 字符长度0-32位。 **默认取值**： 不涉及
    /// </summary>

    std::string getVideoCodec() const;
    bool videoCodecIsSet() const;
    void unsetvideoCodec();
    void setVideoCodec(const std::string& value);

    /// <summary>
    /// **参数解释**： 视频画面宽度。 **约束限制**： 用户无需填写，系统自行提取。 **默认取值**： 不涉及
    /// </summary>

    int32_t getWidth() const;
    bool widthIsSet() const;
    void unsetwidth();
    void setWidth(int32_t value);

    /// <summary>
    /// **参数解释**： 视频画面高度。 **约束限制**： 用户无需填写，系统自行提取。 **默认取值**： 不涉及
    /// </summary>

    int32_t getHeight() const;
    bool heightIsSet() const;
    void unsetheight();
    void setHeight(int32_t value);

    /// <summary>
    /// **参数解释**： 视频帧率。 **约束限制**： 用户无需填写，系统自行提取。 **取值范围**： 字符长度0-32位。 **默认取值**： 不涉及
    /// </summary>

    std::string getFrameRate() const;
    bool frameRateIsSet() const;
    void unsetframeRate();
    void setFrameRate(const std::string& value);

    /// <summary>
    /// **参数解释**： 视频平均码率,单位kbps。 **约束限制**： 用户无需填写，系统自行提取。 **默认取值**： 不涉及
    /// </summary>

    int32_t getVideoBitRate() const;
    bool videoBitRateIsSet() const;
    void unsetvideoBitRate();
    void setVideoBitRate(int32_t value);

    /// <summary>
    /// **参数解释**： 时长,单位秒。 **约束限制**： 用户无需填写，系统自行提取。 **默认取值**： 不涉及
    /// </summary>

    int32_t getDuration() const;
    bool durationIsSet() const;
    void unsetduration();
    void setDuration(int32_t value);

    /// <summary>
    /// **参数解释**： 音频编码格式。 **约束限制**： 用户无需填写，系统自行提取。 **取值范围**： 字符长度0-32位。 **默认取值**： 不涉及
    /// </summary>

    std::string getAudioCodec() const;
    bool audioCodecIsSet() const;
    void unsetaudioCodec();
    void setAudioCodec(const std::string& value);

    /// <summary>
    /// **参数解释**： 音频平均码率,单位kbps。 **约束限制**： 用户无需填写，系统自行提取。 **默认取值**： 不涉及
    /// </summary>

    int32_t getAudioBitRate() const;
    bool audioBitRateIsSet() const;
    void unsetaudioBitRate();
    void setAudioBitRate(int32_t value);

    /// <summary>
    /// **参数解释**： 音频声道数。 **约束限制**： 用户无需填写，系统自行提取。 **默认取值**： 不涉及
    /// </summary>

    int32_t getAudioChannels() const;
    bool audioChannelsIsSet() const;
    void unsetaudioChannels();
    void setAudioChannels(int32_t value);

    /// <summary>
    /// **参数解释**： 采样率,HZ。 **约束限制**： 用户无需填写，系统自行提取。 **默认取值**： 不涉及
    /// </summary>

    int32_t getSample() const;
    bool sampleIsSet() const;
    void unsetsample();
    void setSample(int32_t value);

    /// <summary>
    /// **参数解释**： 横向画面或纵向画面。 **约束限制**： 用户无需填写，系统自行提取。 **取值范围**： * Horizontal：横向 * Vertical：纵向  **默认取值**： 不涉及
    /// </summary>

    std::string getMode() const;
    bool modeIsSet() const;
    void unsetmode();
    void setMode(const std::string& value);

    /// <summary>
    /// **参数解释**： 视频转码状态。 **约束限制**： 用户无需填写，系统自行填写。 **取值范围**： * WAITING：等待 * TRANSCODING：转码中 * FAILED：失败 * SUCCEEDED：成功  **默认取值**： 不涉及
    /// </summary>

    std::string getVideoTranscodingStatus() const;
    bool videoTranscodingStatusIsSet() const;
    void unsetvideoTranscodingStatus();
    void setVideoTranscodingStatus(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ErrorResponse getErrorInfo() const;
    bool errorInfoIsSet() const;
    void unseterrorInfo();
    void setErrorInfo(const ErrorResponse& value);


protected:
    std::string videoCodec_;
    bool videoCodecIsSet_;
    int32_t width_;
    bool widthIsSet_;
    int32_t height_;
    bool heightIsSet_;
    std::string frameRate_;
    bool frameRateIsSet_;
    int32_t videoBitRate_;
    bool videoBitRateIsSet_;
    int32_t duration_;
    bool durationIsSet_;
    std::string audioCodec_;
    bool audioCodecIsSet_;
    int32_t audioBitRate_;
    bool audioBitRateIsSet_;
    int32_t audioChannels_;
    bool audioChannelsIsSet_;
    int32_t sample_;
    bool sampleIsSet_;
    std::string mode_;
    bool modeIsSet_;
    std::string videoTranscodingStatus_;
    bool videoTranscodingStatusIsSet_;
    ErrorResponse errorInfo_;
    bool errorInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_VideoAssetMeta_H_
