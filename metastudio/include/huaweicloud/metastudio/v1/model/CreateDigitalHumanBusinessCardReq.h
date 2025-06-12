
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateDigitalHumanBusinessCardReq_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateDigitalHumanBusinessCardReq_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/BusinessCardImageConfig.h>
#include <huaweicloud/metastudio/v1/model/CallBackConfig.h>
#include <huaweicloud/metastudio/v1/model/BusinessCardTextConfig.h>
#include <string>
#include <huaweicloud/metastudio/v1/model/ReviewConfig.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// 数字人名片制作创建请求。
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  CreateDigitalHumanBusinessCardReq
    : public ModelBase
{
public:
    CreateDigitalHumanBusinessCardReq();
    virtual ~CreateDigitalHumanBusinessCardReq();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// CreateDigitalHumanBusinessCardReq members

    /// <summary>
    /// 数字人名片类型。 * 2D_DIGITAL_HUMAN_CARD：分身数字人名片。
    /// </summary>

    std::string getBusinessCardType() const;
    bool businessCardTypeIsSet() const;
    void unsetbusinessCardType();
    void setBusinessCardType(const std::string& value);

    /// <summary>
    /// 数字人名片模板资产ID，可以从资产库中查询。
    /// </summary>

    std::string getCardTempletAssetId() const;
    bool cardTempletAssetIdIsSet() const;
    void unsetcardTempletAssetId();
    void setCardTempletAssetId(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    BusinessCardTextConfig getCardTextConfig() const;
    bool cardTextConfigIsSet() const;
    void unsetcardTextConfig();
    void setCardTextConfig(const BusinessCardTextConfig& value);

    /// <summary>
    /// 
    /// </summary>

    BusinessCardImageConfig getCardImageConfig() const;
    bool cardImageConfigIsSet() const;
    void unsetcardImageConfig();
    void setCardImageConfig(const BusinessCardImageConfig& value);

    /// <summary>
    /// 自我介绍驱动方式。 * TEXT: 文本驱动，即通过TTS合成语音。文本驱动需要填写introduction_text和voice_asset_id参数。 * AUDIO: 语音驱动，需要在资产库中先上传语音资产。语音驱动需要填写introduction_audio_asset_id参数。
    /// </summary>

    std::string getIntroductionType() const;
    bool introductionTypeIsSet() const;
    void unsetintroductionType();
    void setIntroductionType(const std::string& value);

    /// <summary>
    /// 自我介绍文本，用于驱动数字人口型。
    /// </summary>

    std::string getIntroductionText() const;
    bool introductionTextIsSet() const;
    void unsetintroductionText();
    void setIntroductionText(const std::string& value);

    /// <summary>
    /// 音色资产ID，可以从资产库中查询。
    /// </summary>

    std::string getVoiceAssetId() const;
    bool voiceAssetIdIsSet() const;
    void unsetvoiceAssetId();
    void setVoiceAssetId(const std::string& value);

    /// <summary>
    /// 自我介绍语音资产ID，用于驱动数字人口型。 &gt; * 介绍语音需要作为asset_type&#x3D;AUDIO资产先上传至资产库。 &gt; * 使用时从资产库中查询。
    /// </summary>

    std::string getIntroductionAudioAssetId() const;
    bool introductionAudioAssetIdIsSet() const;
    void unsetintroductionAudioAssetId();
    void setIntroductionAudioAssetId(const std::string& value);

    /// <summary>
    /// 输出名片视频资产名称。默认取card_name的值
    /// </summary>

    std::string getVideoAssetName() const;
    bool videoAssetNameIsSet() const;
    void unsetvideoAssetName();
    void setVideoAssetName(const std::string& value);

    /// <summary>
    /// 性别。 * MALE：男性 * FEMALE：女性
    /// </summary>

    std::string getGender() const;
    bool genderIsSet() const;
    void unsetgender();
    void setGender(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    ReviewConfig getReviewConfig() const;
    bool reviewConfigIsSet() const;
    void unsetreviewConfig();
    void setReviewConfig(const ReviewConfig& value);

    /// <summary>
    /// 
    /// </summary>

    CallBackConfig getCallbackConfig() const;
    bool callbackConfigIsSet() const;
    void unsetcallbackConfig();
    void setCallbackConfig(const CallBackConfig& value);


protected:
    std::string businessCardType_;
    bool businessCardTypeIsSet_;
    std::string cardTempletAssetId_;
    bool cardTempletAssetIdIsSet_;
    BusinessCardTextConfig cardTextConfig_;
    bool cardTextConfigIsSet_;
    BusinessCardImageConfig cardImageConfig_;
    bool cardImageConfigIsSet_;
    std::string introductionType_;
    bool introductionTypeIsSet_;
    std::string introductionText_;
    bool introductionTextIsSet_;
    std::string voiceAssetId_;
    bool voiceAssetIdIsSet_;
    std::string introductionAudioAssetId_;
    bool introductionAudioAssetIdIsSet_;
    std::string videoAssetName_;
    bool videoAssetNameIsSet_;
    std::string gender_;
    bool genderIsSet_;
    ReviewConfig reviewConfig_;
    bool reviewConfigIsSet_;
    CallBackConfig callbackConfig_;
    bool callbackConfigIsSet_;

};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_CreateDigitalHumanBusinessCardReq_H_
