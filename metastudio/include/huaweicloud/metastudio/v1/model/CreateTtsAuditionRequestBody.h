
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateTtsAuditionRequestBody_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateTtsAuditionRequestBody_H_


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
/// 文本转语音试听请求。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  CreateTtsAuditionRequestBody
    : public ModelBase
{
public:
    CreateTtsAuditionRequestBody();
    virtual ~CreateTtsAuditionRequestBody();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateTtsAuditionRequestBody members

    /// <summary>
    /// 待合成文本。
    /// </summary>

    std::string getText() const;
    bool textIsSet() const;
    void unsettext();
    void setText(const std::string& value);

    /// <summary>
    /// 发送给tts的待合成文本。
    /// </summary>

    std::string getTtsText() const;
    bool ttsTextIsSet() const;
    void unsetttsText();
    void setTtsText(const std::string& value);

    /// <summary>
    /// 音色ID，获取方式详见[获取音色ID](metastudio_02_0054.xml)。
    /// </summary>

    std::string getEmotion() const;
    bool emotionIsSet() const;
    void unsetemotion();
    void setEmotion(const std::string& value);

    /// <summary>
    /// 语速。 * 当取值为“100”时，表示一个成年人正常的语速，约为250字/分钟。 * 50表示0.5倍语速，100表示正常语速，200表示2倍语速。
    /// </summary>

    int32_t getSpeed() const;
    bool speedIsSet() const;
    void unsetspeed();
    void setSpeed(int32_t value);

    /// <summary>
    /// 音高。
    /// </summary>

    int32_t getPitch() const;
    bool pitchIsSet() const;
    void unsetpitch();
    void setPitch(int32_t value);

    /// <summary>
    /// 音量。
    /// </summary>

    int32_t getVolume() const;
    bool volumeIsSet() const;
    void unsetvolume();
    void setVolume(int32_t value);

    /// <summary>
    /// 业务场景，多个入口调用试听接口时的业务场景
    /// </summary>

    std::string getBusinessType() const;
    bool businessTypeIsSet() const;
    void unsetbusinessType();
    void setBusinessType(const std::string& value);

    /// <summary>
    /// 风格情感
    /// </summary>

    std::string getStyle() const;
    bool styleIsSet() const;
    void unsetstyle();
    void setStyle(const std::string& value);

    /// <summary>
    /// 声道。（单声道|双声道） 默认值1，最小值1，最大值2。
    /// </summary>

    int32_t getChannels() const;
    bool channelsIsSet() const;
    void unsetchannels();
    void setChannels(int32_t value);

    /// <summary>
    /// 是否应用当前租户的读法配置
    /// </summary>

    bool isIsVocabularyConfigEnable() const;
    bool isVocabularyConfigEnableIsSet() const;
    void unsetisVocabularyConfigEnable();
    void setIsVocabularyConfigEnable(bool value);


protected:
    std::string text_;
    bool textIsSet_;
    std::string ttsText_;
    bool ttsTextIsSet_;
    std::string emotion_;
    bool emotionIsSet_;
    int32_t speed_;
    bool speedIsSet_;
    int32_t pitch_;
    bool pitchIsSet_;
    int32_t volume_;
    bool volumeIsSet_;
    std::string businessType_;
    bool businessTypeIsSet_;
    std::string style_;
    bool styleIsSet_;
    int32_t channels_;
    bool channelsIsSet_;
    bool isVocabularyConfigEnable_;
    bool isVocabularyConfigEnableIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateTtsAuditionRequestBody_H_
