
#ifndef HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowDigitalHumanBusinessCardResponse_H_
#define HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowDigitalHumanBusinessCardResponse_H_


#include <huaweicloud/metastudio/v1/MetaStudioExport.h>

#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Utils.h>
#include <huaweicloud/core/http/HttpResponse.h>

#include <huaweicloud/metastudio/v1/model/BusinessCardImageUrl.h>
#include <huaweicloud/metastudio/v1/model/BusinessCardTextConfig.h>
#include <string>
#include <huaweicloud/metastudio/v1/model/DigitalHumanBusinessCardJobInfo.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {

using namespace HuaweiCloud::Sdk::Core::Utils;
using namespace HuaweiCloud::Sdk::Core::Http;
/// <summary>
/// Response Object
/// </summary>
class HUAWEICLOUD_METASTUDIO_V1_EXPORT  ShowDigitalHumanBusinessCardResponse
    : public ModelBase, public HttpResponse
{
public:
    ShowDigitalHumanBusinessCardResponse();
    virtual ~ShowDigitalHumanBusinessCardResponse();

    /////////////////////////////////////////////
    /// ModelBase overrides

    void validate() override;
    web::json::value toJson() const override;
    bool fromJson(const web::json::value& json) override;
    /////////////////////////////////////////////
    /// ShowDigitalHumanBusinessCardResponse members

    /// <summary>
    /// 
    /// </summary>

    DigitalHumanBusinessCardJobInfo getJobInfo() const;
    bool jobInfoIsSet() const;
    void unsetjobInfo();
    void setJobInfo(const DigitalHumanBusinessCardJobInfo& value);

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

    BusinessCardImageUrl getCardImageUrl() const;
    bool cardImageUrlIsSet() const;
    void unsetcardImageUrl();
    void setCardImageUrl(const BusinessCardImageUrl& value);

    /// <summary>
    /// 自我介绍驱动方式。 * TEXT: 文本驱动，即通过TTS合成语音 * AUDIO: 语音驱动，需要在资产库中先上传语音资产
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
    /// 性别。 * MALE：男性 * FEMALE：女性
    /// </summary>

    std::string getGender() const;
    bool genderIsSet() const;
    void unsetgender();
    void setGender(const std::string& value);

    /// <summary>
    /// 
    /// </summary>

    std::string getXRequestId() const;
    bool xRequestIdIsSet() const;
    void unsetxRequestId();
    void setXRequestId(const std::string& value);


protected:
    DigitalHumanBusinessCardJobInfo jobInfo_;
    bool jobInfoIsSet_;
    std::string cardTempletAssetId_;
    bool cardTempletAssetIdIsSet_;
    BusinessCardTextConfig cardTextConfig_;
    bool cardTextConfigIsSet_;
    BusinessCardImageUrl cardImageUrl_;
    bool cardImageUrlIsSet_;
    std::string introductionType_;
    bool introductionTypeIsSet_;
    std::string introductionText_;
    bool introductionTextIsSet_;
    std::string voiceAssetId_;
    bool voiceAssetIdIsSet_;
    std::string introductionAudioAssetId_;
    bool introductionAudioAssetIdIsSet_;
    std::string gender_;
    bool genderIsSet_;
    std::string xRequestId_;
    bool xRequestIdIsSet_;

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};


}
}
}
}
}

#endif // HUAWEICLOUD_SDK_METASTUDIO_V1_MODEL_ShowDigitalHumanBusinessCardResponse_H_
