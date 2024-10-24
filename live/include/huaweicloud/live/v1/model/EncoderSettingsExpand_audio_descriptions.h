
#ifndef HUAWEICLOUD_SDK_LIVE_V1_MODEL_EncoderSettingsExpand_audio_descriptions_H_
#define HUAWEICLOUD_SDK_LIVE_V1_MODEL_EncoderSettingsExpand_audio_descriptions_H_


#include <huaweicloud/live/v1/LiveExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <string>

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 
/// </summary>
class HUAWEICLOUD_LIVE_V1_EXPORT  EncoderSettingsExpand_audio_descriptions
    : public ModelBase
{
public:
    EncoderSettingsExpand_audio_descriptions();
    virtual ~EncoderSettingsExpand_audio_descriptions();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// EncoderSettingsExpand_audio_descriptions members

    /// <summary>
    /// 音频输出配置的名称。仅支持大小写字母，数字，中划线（-），下划线（_）。  同一个频道不同的音频输出配置名称，不允许重复。
    /// </summary>

    std::string getName() const;
    bool nameIsSet() const;
    void unsetname();
    void setName(const std::string& value);

    /// <summary>
    /// 音频选择器名称
    /// </summary>

    std::string getAudioSelectorName() const;
    bool audioSelectorNameIsSet() const;
    void unsetaudioSelectorName();
    void setAudioSelectorName(const std::string& value);

    /// <summary>
    /// 语言代码控制。这里的设置不会修改音频实际的语言，只会修改音频对外展示的语言。  包含如下选项： - FOLLOW_INPUT：如果所选音频选择器对应的输出音频有语言，则与其保持一致，否则会以这里配置的语言代码和流名称进行兜底。推荐当前选项，为默认值。 - USE_CONFIGURED：用户根据实际情况自定义输出音频的语言和流名称。
    /// </summary>

    std::string getLanguageCodeControl() const;
    bool languageCodeControlIsSet() const;
    void unsetlanguageCodeControl();
    void setLanguageCodeControl(const std::string& value);

    /// <summary>
    /// 语言代码，输入2或3个小写字母。
    /// </summary>

    std::string getLanguageCode() const;
    bool languageCodeIsSet() const;
    void unsetlanguageCode();
    void setLanguageCode(const std::string& value);

    /// <summary>
    /// 流名称
    /// </summary>

    std::string getStreamName() const;
    bool streamNameIsSet() const;
    void unsetstreamName();
    void setStreamName(const std::string& value);


protected:
    std::string name_;
    bool nameIsSet_;
    std::string audioSelectorName_;
    bool audioSelectorNameIsSet_;
    std::string languageCodeControl_;
    bool languageCodeControlIsSet_;
    std::string languageCode_;
    bool languageCodeIsSet_;
    std::string streamName_;
    bool streamNameIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_LIVE_V1_MODEL_EncoderSettingsExpand_audio_descriptions_H_
