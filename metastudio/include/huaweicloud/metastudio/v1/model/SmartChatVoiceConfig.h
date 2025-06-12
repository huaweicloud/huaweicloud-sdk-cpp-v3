
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SmartChatVoiceConfig_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SmartChatVoiceConfig_H_


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
/// 语音配置参数
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  SmartChatVoiceConfig
    : public ModelBase
{
public:
    SmartChatVoiceConfig();
    virtual ~SmartChatVoiceConfig();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// SmartChatVoiceConfig members

    /// <summary>
    /// 语音合成特征字符串
    /// </summary>

    std::string getVoiceAssetId() const;
    bool voiceAssetIdIsSet() const;
    void unsetvoiceAssetId();
    void setVoiceAssetId(const std::string& value);

    /// <summary>
    /// 语速。默认值100，最小值50，最大值200。 &gt; 当取值为“100”时，表示一个成年人正常的语速，约为250字/分钟。
    /// </summary>

    int32_t getSpeed() const;
    bool speedIsSet() const;
    void unsetspeed();
    void setSpeed(int32_t value);

    /// <summary>
    /// 音高。默认值100，最小值50，最大值200。
    /// </summary>

    int32_t getPitch() const;
    bool pitchIsSet() const;
    void unsetpitch();
    void setPitch(int32_t value);

    /// <summary>
    /// 音量。默认值140，最小值90，最大值240。
    /// </summary>

    int32_t getVolume() const;
    bool volumeIsSet() const;
    void unsetvolume();
    void setVolume(int32_t value);

    /// <summary>
    /// 第三方TTS供应商类型。 * XIMALAYA：喜马拉雅TTS * HUAWEI_EI：EI TTS * MOBVOI：出门问问TTS
    /// </summary>

    std::string getProvider() const;
    bool providerIsSet() const;
    void unsetprovider();
    void setProvider(const std::string& value);

    /// <summary>
    /// 语言类型。默认值CN。 * CN：中文。 * EN：英文。 * ESP：西班牙语（仅海外站点支持） * por：葡萄牙语（仅海外站点支持） * Arabic：阿拉伯语（仅海外站点支持） * Thai：泰语（仅海外站点支持）
    /// </summary>

    std::string getLanguage() const;
    bool languageIsSet() const;
    void unsetlanguage();
    void setLanguage(const std::string& value);

    /// <summary>
    /// 语言描述。
    /// </summary>

    std::string getLanguageDesc() const;
    bool languageDescIsSet() const;
    void unsetlanguageDesc();
    void setLanguageDesc(const std::string& value);


protected:
    std::string voiceAssetId_;
    bool voiceAssetIdIsSet_;
    int32_t speed_;
    bool speedIsSet_;
    int32_t pitch_;
    bool pitchIsSet_;
    int32_t volume_;
    bool volumeIsSet_;
    std::string provider_;
    bool providerIsSet_;
    std::string language_;
    bool languageIsSet_;
    std::string languageDesc_;
    bool languageDescIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_SmartChatVoiceConfig_H_
