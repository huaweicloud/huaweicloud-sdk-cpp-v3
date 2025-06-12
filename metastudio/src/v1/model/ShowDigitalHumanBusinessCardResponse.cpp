

#include "huaweicloud/metastudio/v1/model/ShowDigitalHumanBusinessCardResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ShowDigitalHumanBusinessCardResponse::ShowDigitalHumanBusinessCardResponse()
{
    jobInfoIsSet_ = false;
    cardTempletAssetId_ = "";
    cardTempletAssetIdIsSet_ = false;
    cardTextConfigIsSet_ = false;
    cardImageUrlIsSet_ = false;
    introductionType_ = "";
    introductionTypeIsSet_ = false;
    introductionText_ = "";
    introductionTextIsSet_ = false;
    voiceAssetId_ = "";
    voiceAssetIdIsSet_ = false;
    introductionAudioAssetId_ = "";
    introductionAudioAssetIdIsSet_ = false;
    gender_ = "";
    genderIsSet_ = false;
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ShowDigitalHumanBusinessCardResponse::~ShowDigitalHumanBusinessCardResponse() = default;

void ShowDigitalHumanBusinessCardResponse::validate()
{
}

web::json::value ShowDigitalHumanBusinessCardResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobInfoIsSet_) {
        val[utility::conversions::to_string_t("job_info")] = ModelBase::toJson(jobInfo_);
    }
    if(cardTempletAssetIdIsSet_) {
        val[utility::conversions::to_string_t("card_templet_asset_id")] = ModelBase::toJson(cardTempletAssetId_);
    }
    if(cardTextConfigIsSet_) {
        val[utility::conversions::to_string_t("card_text_config")] = ModelBase::toJson(cardTextConfig_);
    }
    if(cardImageUrlIsSet_) {
        val[utility::conversions::to_string_t("card_image_url")] = ModelBase::toJson(cardImageUrl_);
    }
    if(introductionTypeIsSet_) {
        val[utility::conversions::to_string_t("introduction_type")] = ModelBase::toJson(introductionType_);
    }
    if(introductionTextIsSet_) {
        val[utility::conversions::to_string_t("introduction_text")] = ModelBase::toJson(introductionText_);
    }
    if(voiceAssetIdIsSet_) {
        val[utility::conversions::to_string_t("voice_asset_id")] = ModelBase::toJson(voiceAssetId_);
    }
    if(introductionAudioAssetIdIsSet_) {
        val[utility::conversions::to_string_t("introduction_audio_asset_id")] = ModelBase::toJson(introductionAudioAssetId_);
    }
    if(genderIsSet_) {
        val[utility::conversions::to_string_t("gender")] = ModelBase::toJson(gender_);
    }
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-Request-Id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ShowDigitalHumanBusinessCardResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_info"));
        if(!fieldValue.is_null())
        {
            DigitalHumanBusinessCardJobInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("card_templet_asset_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("card_templet_asset_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCardTempletAssetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("card_text_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("card_text_config"));
        if(!fieldValue.is_null())
        {
            BusinessCardTextConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCardTextConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("card_image_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("card_image_url"));
        if(!fieldValue.is_null())
        {
            BusinessCardImageUrl refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCardImageUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("introduction_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("introduction_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIntroductionType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("introduction_text"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("introduction_text"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIntroductionText(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("voice_asset_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("voice_asset_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVoiceAssetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("introduction_audio_asset_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("introduction_audio_asset_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIntroductionAudioAssetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("gender"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gender"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGender(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Request-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Request-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


DigitalHumanBusinessCardJobInfo ShowDigitalHumanBusinessCardResponse::getJobInfo() const
{
    return jobInfo_;
}

void ShowDigitalHumanBusinessCardResponse::setJobInfo(const DigitalHumanBusinessCardJobInfo& value)
{
    jobInfo_ = value;
    jobInfoIsSet_ = true;
}

bool ShowDigitalHumanBusinessCardResponse::jobInfoIsSet() const
{
    return jobInfoIsSet_;
}

void ShowDigitalHumanBusinessCardResponse::unsetjobInfo()
{
    jobInfoIsSet_ = false;
}

std::string ShowDigitalHumanBusinessCardResponse::getCardTempletAssetId() const
{
    return cardTempletAssetId_;
}

void ShowDigitalHumanBusinessCardResponse::setCardTempletAssetId(const std::string& value)
{
    cardTempletAssetId_ = value;
    cardTempletAssetIdIsSet_ = true;
}

bool ShowDigitalHumanBusinessCardResponse::cardTempletAssetIdIsSet() const
{
    return cardTempletAssetIdIsSet_;
}

void ShowDigitalHumanBusinessCardResponse::unsetcardTempletAssetId()
{
    cardTempletAssetIdIsSet_ = false;
}

BusinessCardTextConfig ShowDigitalHumanBusinessCardResponse::getCardTextConfig() const
{
    return cardTextConfig_;
}

void ShowDigitalHumanBusinessCardResponse::setCardTextConfig(const BusinessCardTextConfig& value)
{
    cardTextConfig_ = value;
    cardTextConfigIsSet_ = true;
}

bool ShowDigitalHumanBusinessCardResponse::cardTextConfigIsSet() const
{
    return cardTextConfigIsSet_;
}

void ShowDigitalHumanBusinessCardResponse::unsetcardTextConfig()
{
    cardTextConfigIsSet_ = false;
}

BusinessCardImageUrl ShowDigitalHumanBusinessCardResponse::getCardImageUrl() const
{
    return cardImageUrl_;
}

void ShowDigitalHumanBusinessCardResponse::setCardImageUrl(const BusinessCardImageUrl& value)
{
    cardImageUrl_ = value;
    cardImageUrlIsSet_ = true;
}

bool ShowDigitalHumanBusinessCardResponse::cardImageUrlIsSet() const
{
    return cardImageUrlIsSet_;
}

void ShowDigitalHumanBusinessCardResponse::unsetcardImageUrl()
{
    cardImageUrlIsSet_ = false;
}

std::string ShowDigitalHumanBusinessCardResponse::getIntroductionType() const
{
    return introductionType_;
}

void ShowDigitalHumanBusinessCardResponse::setIntroductionType(const std::string& value)
{
    introductionType_ = value;
    introductionTypeIsSet_ = true;
}

bool ShowDigitalHumanBusinessCardResponse::introductionTypeIsSet() const
{
    return introductionTypeIsSet_;
}

void ShowDigitalHumanBusinessCardResponse::unsetintroductionType()
{
    introductionTypeIsSet_ = false;
}

std::string ShowDigitalHumanBusinessCardResponse::getIntroductionText() const
{
    return introductionText_;
}

void ShowDigitalHumanBusinessCardResponse::setIntroductionText(const std::string& value)
{
    introductionText_ = value;
    introductionTextIsSet_ = true;
}

bool ShowDigitalHumanBusinessCardResponse::introductionTextIsSet() const
{
    return introductionTextIsSet_;
}

void ShowDigitalHumanBusinessCardResponse::unsetintroductionText()
{
    introductionTextIsSet_ = false;
}

std::string ShowDigitalHumanBusinessCardResponse::getVoiceAssetId() const
{
    return voiceAssetId_;
}

void ShowDigitalHumanBusinessCardResponse::setVoiceAssetId(const std::string& value)
{
    voiceAssetId_ = value;
    voiceAssetIdIsSet_ = true;
}

bool ShowDigitalHumanBusinessCardResponse::voiceAssetIdIsSet() const
{
    return voiceAssetIdIsSet_;
}

void ShowDigitalHumanBusinessCardResponse::unsetvoiceAssetId()
{
    voiceAssetIdIsSet_ = false;
}

std::string ShowDigitalHumanBusinessCardResponse::getIntroductionAudioAssetId() const
{
    return introductionAudioAssetId_;
}

void ShowDigitalHumanBusinessCardResponse::setIntroductionAudioAssetId(const std::string& value)
{
    introductionAudioAssetId_ = value;
    introductionAudioAssetIdIsSet_ = true;
}

bool ShowDigitalHumanBusinessCardResponse::introductionAudioAssetIdIsSet() const
{
    return introductionAudioAssetIdIsSet_;
}

void ShowDigitalHumanBusinessCardResponse::unsetintroductionAudioAssetId()
{
    introductionAudioAssetIdIsSet_ = false;
}

std::string ShowDigitalHumanBusinessCardResponse::getGender() const
{
    return gender_;
}

void ShowDigitalHumanBusinessCardResponse::setGender(const std::string& value)
{
    gender_ = value;
    genderIsSet_ = true;
}

bool ShowDigitalHumanBusinessCardResponse::genderIsSet() const
{
    return genderIsSet_;
}

void ShowDigitalHumanBusinessCardResponse::unsetgender()
{
    genderIsSet_ = false;
}

std::string ShowDigitalHumanBusinessCardResponse::getXRequestId() const
{
    return xRequestId_;
}

void ShowDigitalHumanBusinessCardResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowDigitalHumanBusinessCardResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowDigitalHumanBusinessCardResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


