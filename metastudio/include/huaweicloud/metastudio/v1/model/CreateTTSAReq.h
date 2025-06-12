
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateTTSAReq_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateTTSAReq_H_


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
/// 
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  CreateTTSAReq
    : public ModelBase
{
public:
    CreateTTSAReq();
    virtual ~CreateTTSAReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateTTSAReq members

    /// <summary>
    /// 音色模型ID。需要使用MetaStudio的数字资产管理相关接口从资产库查出。
    /// </summary>

    std::string getVoiceAssetId() const;
    bool voiceAssetIdIsSet() const;
    void unsetvoiceAssetId();
    void setVoiceAssetId(const std::string& value);

    /// <summary>
    /// 脚本类型，即视频制作的驱动方式。默认TEXT * TEXT: 文本驱动，即通过TTS合成语音 * AUDIO: 语音驱动
    /// </summary>

    std::string getScriptType() const;
    bool scriptTypeIsSet() const;
    void unsetscriptType();
    void setScriptType(const std::string& value);

    /// <summary>
    /// HTML格式的台词，可包含动作。最多2048个字符。 &gt; * HTML格式举例：\\&lt;speak&gt;大家好&lt;insert-action id&#x3D;\\\&quot;14cc7bbcde4982aab82f9d9af9e0f743\\\&quot;/&gt;，非常高兴给大家介绍MetaStudio。\\&lt;/speak&gt; &gt; * insert-action id通过查询资产列表接口获取，查询时asset_type&#x3D;ANIMATION &gt; * 多音字标签：\\&lt;phoneme ph&#x3D;\\\&quot;拼音\\\&quot;&gt;汉字\\&lt;/phoneme&gt;，南京\\&lt;phoneme ph&#x3D;\\\&quot;shi4 zhang3\\\&quot;&gt;市长\\&lt;/phoneme&gt;江大桥。 &gt; * 停顿标签：\\&lt;break/&gt;，中方一贯主张\\&lt;break/&gt;维护国家主权平等，不干涉他国内政\\&lt;break time&#x3D;\\\&quot;300ms\\\&quot;/&gt;是联合国宪章\\&lt;break time&#x3D;\\\&quot;500ms\\\&quot;/&gt;最重要的原则。
    /// </summary>

    std::string getText() const;
    bool textIsSet() const;
    void unsettext();
    void setText(const std::string& value);

    /// <summary>
    /// 语音驱动音频文件下载URL。
    /// </summary>

    std::string getAudioFileDownloadUrl() const;
    bool audioFileDownloadUrlIsSet() const;
    void unsetaudioFileDownloadUrl();
    void setAudioFileDownloadUrl(const std::string& value);

    /// <summary>
    /// 语速。  取值范围[50,200]   默认值：100
    /// </summary>

    int32_t getSpeed() const;
    bool speedIsSet() const;
    void unsetspeed();
    void setSpeed(int32_t value);

    /// <summary>
    /// 基频。  取值范围[50,200]  默认值：100
    /// </summary>

    int32_t getPitch() const;
    bool pitchIsSet() const;
    void unsetpitch();
    void setPitch(int32_t value);

    /// <summary>
    /// 音量。  取值范围[90,240]   默认值：100
    /// </summary>

    int32_t getVolume() const;
    bool volumeIsSet() const;
    void unsetvolume();
    void setVolume(int32_t value);

    /// <summary>
    /// 情感标签。 * ANGER：愤怒 * HAPPY：开心 * SAD：悲伤 * CALM：平静
    /// </summary>

    std::string getEmotion() const;
    bool emotionIsSet() const;
    void unsetemotion();
    void setEmotion(const std::string& value);

    /// <summary>
    /// 风格化ID。需要调用数字人风格管理相关接口，从系统中查得。
    /// </summary>

    std::string getStyleId() const;
    bool styleIdIsSet() const;
    void unsetstyleId();
    void setStyleId(const std::string& value);

    /// <summary>
    /// 人位置及相机位置。由如下4组浮点数组成的字符：人位置的X/Y/Z值，人角度的Pitch/Yaw/Roll值；相机位置的X/Y/Z值，相机角度的Pitch/Yaw/Roll值。
    /// </summary>

    std::string getCameraPosition() const;
    bool cameraPositionIsSet() const;
    void unsetcameraPosition();
    void setCameraPosition(const std::string& value);

    /// <summary>
    /// 任务类型。 * REAL_JOB：实时任务。如数字人交互。 * UNREAL_JOB：非实时任务。如数字人视频制作
    /// </summary>

    std::string getJobType() const;
    bool jobTypeIsSet() const;
    void unsetjobType();
    void setJobType(const std::string& value);


protected:
    std::string voiceAssetId_;
    bool voiceAssetIdIsSet_;
    std::string scriptType_;
    bool scriptTypeIsSet_;
    std::string text_;
    bool textIsSet_;
    std::string audioFileDownloadUrl_;
    bool audioFileDownloadUrlIsSet_;
    int32_t speed_;
    bool speedIsSet_;
    int32_t pitch_;
    bool pitchIsSet_;
    int32_t volume_;
    bool volumeIsSet_;
    std::string emotion_;
    bool emotionIsSet_;
    std::string styleId_;
    bool styleIdIsSet_;
    std::string cameraPosition_;
    bool cameraPositionIsSet_;
    std::string jobType_;
    bool jobTypeIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateTTSAReq_H_
