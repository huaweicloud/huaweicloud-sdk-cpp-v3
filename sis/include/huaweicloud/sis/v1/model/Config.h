
#ifndef HUAWEICLOUD_SDK_SIS_V1_MODEL_Config_H_
#define HUAWEICLOUD_SDK_SIS_V1_MODEL_Config_H_


#include <huaweicloud/sis/v1/SisExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_SIS_V1_EXPORT  Config
    : public ModelBase
{
public:
    Config();
    virtual ~Config();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// Config members

    /// <summary>
    /// 支持语音的格式。  audio_format取值范围：  pcm16k16bit  16k16bit单通道录音数据。  pcm8k16bit   8k16bit单通道录音数据。  ulaw16k8bit  16k8bit ulaw 单通道录音数据。  ulaw8k8bit   8k8bit ulaw 单通道录音数据。  alaw16k8bit  16k8bit alaw 单通道录音数据。  alaw8k8bit   8k8bit alaw 单通道录音数据。  mp3  mp3格式音频。目前仅支持单通道的音频。  aac  aac格式音频。目前仅支持单通道的音频。  wav  带wav封装头的格式，从封装头中自动确定格式，目前仅支持8k/16k采样率、单通道、pcm, alaw, ulaw三种编码格式  amr  AMR窄带(8k) 压缩录音数据。  amrwb  AMR 宽带(16k) 压缩录音数据。  auto 由引擎自动判断音频数据的格式并解码，支持自动判断wav，mp3，amr/amrwb，aac，m4a，wma格式
    /// </summary>

    std::string getAudioFormat() const;
    bool audioFormatIsSet() const;
    void unsetaudioFormat();
    void setAudioFormat(const std::string& value);

    /// <summary>
    /// 所使用的模型特征串。通常是 “语种_采样率_领域”的形式。  采样率需要与音频采样率保持一致。  当前支持如下模型特征串：  chinese_16k_general  支持采样率为16k的中文普通话语音识别，同时可识别一些简单的方言。格式仅支持pcm16k16bit、mp3、wav，区域仅支持cn-north-4。  chinese_16k_travel 支持采样率为16k的中文普通话语音识别，采用新一代端到端识别算法，并针对网约车质检场景进行了优化。格式仅支持pcm16k16bit、mp3、wav和aac，区域支持cn-east-3和cn-north-4（强烈推荐使用）。  chinese_8k_common  支持采样率为8k的中文普通话语音识别。  chinese_16k_common  支持采样率为16k的中文普通话语音识别。  sichuan_16k_common  支持采样率为16k的中文普通话与四川话方言识别。区域仅支持cn-north-4。  cantonese_16k_common  支持采样率为16k的粤语方言识别。区域仅支持cn-north-4。  shanghai_16k_common  支持采样率为16k的上海话方言识别，区域仅支持cn-north-4。  english_8k_common  支持采样率为16k的英文识别，区域仅支持cn-east-3，格式仅支持wav。  english_16k_common  支持采样率为16k的英文识别，区域仅支持cn-east-3，格式仅支持wav。
    /// </summary>

    std::string getProperty() const;
    bool propertyIsSet() const;
    void unsetproperty();
    void setProperty(const std::string& value);

    /// <summary>
    /// 表示是否在识别结果中添加标点，取值为“yes”和“no”，缺省为“no”。
    /// </summary>

    std::string getAddPunc() const;
    bool addPuncIsSet() const;
    void unsetaddPunc();
    void setAddPunc(const std::string& value);

    /// <summary>
    /// 热词表id，不使用则不填写。
    /// </summary>

    std::string getVocabularyId() const;
    bool vocabularyIdIsSet() const;
    void unsetvocabularyId();
    void setVocabularyId(const std::string& value);

    /// <summary>
    /// 表示是否将语音中的数字识别为阿拉伯数字，取值为“yes” 和 “no”，缺省为“yes”。
    /// </summary>

    std::string getDigitNorm() const;
    bool digitNormIsSet() const;
    void unsetdigitNorm();
    void setDigitNorm(const std::string& value);

    /// <summary>
    /// 表示是否在识别结果中输出分词结果信息，取值为“yes”和“no”，默认为“no”。
    /// </summary>

    std::string getNeedWordInfo() const;
    bool needWordInfoIsSet() const;
    void unsetneedWordInfo();
    void setNeedWordInfo(const std::string& value);

    /// <summary>
    /// 表示是否开启普英方自动识别，取值为“yes”和“no”，默认为“no”。
    /// </summary>

    std::string getAutoLanguageDetect() const;
    bool autoLanguageDetectIsSet() const;
    void unsetautoLanguageDetect();
    void setAutoLanguageDetect(const std::string& value);


protected:
    std::string audioFormat_;
    bool audioFormatIsSet_;
    std::string property_;
    bool propertyIsSet_;
    std::string addPunc_;
    bool addPuncIsSet_;
    std::string vocabularyId_;
    bool vocabularyIdIsSet_;
    std::string digitNorm_;
    bool digitNormIsSet_;
    std::string needWordInfo_;
    bool needWordInfoIsSet_;
    std::string autoLanguageDetect_;
    bool autoLanguageDetectIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SIS_V1_MODEL_Config_H_
