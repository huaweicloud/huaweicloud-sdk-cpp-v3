
#ifndef HUAWEICLOUD_SDK_SIS_V1_MODEL_TranscriberConfig_H_
#define HUAWEICLOUD_SDK_SIS_V1_MODEL_TranscriberConfig_H_

#include <huaweicloud/sis/v1/SisExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/sis/v1/model/AnalysisInfo.h>
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
class HUAWEICLOUD_SIS_V1_EXPORT  TranscriberConfig
    : public ModelBase
{
public:
    TranscriberConfig();
    virtual ~TranscriberConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;

    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;

    /////////////////////////////////////////////
    /// TranscriberConfig members

    /// <summary>
    /// 支持语音的格式。  audioformat取值范围:  auto  自动判断，系统会自动判断并支持WAV（内部支持pcm/ulaw/alaw/adpcm编码格式）、MP3、M4A、ogg-speex、ogg-opus、AMR、wma等格式，相应的文件后缀名为.wav, .mp3, .m4a, .spx, .opus, .amr 和.wma, 不区分大小写。支持双声道的音频。  pcm16k16bit  16k16bit裸音频录音数据。  pcm8k16bit   8k16bit裸音频录音数据。  ulaw16k8bit  16k8bit ulaw 裸音频录音数据。  ulaw8k8bit   8k8bit ulaw 裸音频录音数据。  alaw16k8bit  16k8bit alaw 裸音频录音数据。  alaw8k8bit   8k8bit alaw 裸音频录音数据。  vox8k4bit    8k4bit vox 裸音频录音数据。  v3_8k4bit    8k4bit v3 裸音频录音数据。
    /// </summary>

    std::string getAudioFormat() const;
    bool audioFormatIsSet() const;
    void unsetaudioFormat();
    void setAudioFormat(const std::string& value);

    /// <summary>
    /// 所使用的模型特征串。通常是“语种_采样率_领域”的形式，例如chinese_8k_common。  采样率需要与音频采样率保持一致。  当前支持如下模型特征串：  chinese_16k_media (音视频领域，区域仅支持cn-north-4，cn-east-3)  chinese_8k_common  chinese_16k_conversation  chinese_8k_bank（银行领域，区域仅支持cn-north-4）  chinese_8k_insurance（保险领域，区域仅支持cn-north-4）  sichuan_8k_common （四川话识别，区域支持cn-north-4，cn-east-3） 
    /// </summary>

    std::string getProperty() const;
    bool propertyIsSet() const;
    void unsetproperty();
    void setProperty(const std::string& value);

    /// <summary>
    /// 是否加标点， 可以为 yes, no(缺省)。
    /// </summary>

    std::string getAddPunc() const;
    bool addPuncIsSet() const;
    void unsetaddPunc();
    void setAddPunc(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    AnalysisInfo getNeedAnalysisInfo() const;
    bool needAnalysisInfoIsSet() const;
    void unsetneedAnalysisInfo();
    void setNeedAnalysisInfo(const AnalysisInfo& value);

    /// <summary>
    /// 热词表id，不使用则不填写。
    /// </summary>

    std::string getVocabularyId() const;
    bool vocabularyIdIsSet() const;
    void unsetvocabularyId();
    void setVocabularyId(const std::string& value);

    /// <summary>
    /// 表示是否将语音中的数字识别为阿拉伯数字，取值为yes 、 no，缺省为yes。
    /// </summary>

    std::string getDigitNorm() const;
    bool digitNormIsSet() const;
    void unsetdigitNorm();
    void setDigitNorm(const std::string& value);

    /// <summary>
    /// 用于录音文件识表示回调 url，即用户用于接收识别结果的服务器地址，不支持IP地址方式调用，url长度小于2048字节。服务请求方法为POST。  如果用户使用回调方式获取识别结果，需填写该参数，处理成功后用户服务器需返回状态码“200”。  如果用户使用轮询方式获取识别结果，则无需填写该参数。别结果的回调url，不使用则不填写。
    /// </summary>

    std::string getCallbackUrl() const;
    bool callbackUrlIsSet() const;
    void unsetcallbackUrl();
    void setCallbackUrl(const std::string& value);

    /// <summary>
    /// 表示是否在识别结果中输出分词结果信息，取值为“yes”和“no”，默认为“no”。
    /// </summary>

    std::string getNeedWordInfo() const;
    bool needWordInfoIsSet() const;
    void unsetneedWordInfo();
    void setNeedWordInfo(const std::string& value);


protected:
    std::string audioFormat_;
    bool audioFormatIsSet_;
    std::string property_;
    bool propertyIsSet_;
    std::string addPunc_;
    bool addPuncIsSet_;
    AnalysisInfo needAnalysisInfo_;
    bool needAnalysisInfoIsSet_;
    std::string vocabularyId_;
    bool vocabularyIdIsSet_;
    std::string digitNorm_;
    bool digitNormIsSet_;
    std::string callbackUrl_;
    bool callbackUrlIsSet_;
    std::string needWordInfo_;
    bool needWordInfoIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_SIS_V1_MODEL_TranscriberConfig_H_
