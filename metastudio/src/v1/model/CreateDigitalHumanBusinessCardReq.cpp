

#include "huaweicloud/metastudio/v1/model/CreateDigitalHumanBusinessCardReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CreateDigitalHumanBusinessCardReq::CreateDigitalHumanBusinessCardReq()
{
    businessCardType_ = "";
    businessCardTypeIsSet_ = false;
    cardTempletAssetId_ = "";
    cardTempletAssetIdIsSet_ = false;
    cardTextConfigIsSet_ = false;
    cardImageConfigIsSet_ = false;
    introductionType_ = "";
    introductionTypeIsSet_ = false;
    introductionText_ = "";
    introductionTextIsSet_ = false;
    voiceAssetId_ = "";
    voiceAssetIdIsSet_ = false;
    introductionAudioAssetId_ = "";
    introductionAudioAssetIdIsSet_ = false;
    videoAssetName_ = "";
    videoAssetNameIsSet_ = false;
    gender_ = "";
    genderIsSet_ = false;
    reviewConfigIsSet_ = false;
    callbackConfigIsSet_ = false;
}

CreateDigitalHumanBusinessCardReq::~CreateDigitalHumanBusinessCardReq() = default;

void CreateDigitalHumanBusinessCardReq::validate()
{
}

web::json::value CreateDigitalHumanBusinessCardReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(businessCardTypeIsSet_) {
        val[utility::conversions::to_string_t("business_card_type")] = ModelBase::toJson(businessCardType_);
    }
    if(cardTempletAssetIdIsSet_) {
        val[utility::conversions::to_string_t("card_templet_asset_id")] = ModelBase::toJson(cardTempletAssetId_);
    }
    if(cardTextConfigIsSet_) {
        val[utility::conversions::to_string_t("card_text_config")] = ModelBase::toJson(cardTextConfig_);
    }
    if(cardImageConfigIsSet_) {
        val[utility::conversions::to_string_t("card_image_config")] = ModelBase::toJson(cardImageConfig_);
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
    if(videoAssetNameIsSet_) {
        val[utility::conversions::to_string_t("video_asset_name")] = ModelBase::toJson(videoAssetName_);
    }
    if(genderIsSet_) {
        val[utility::conversions::to_string_t("gender")] = ModelBase::toJson(gender_);
    }
    if(reviewConfigIsSet_) {
        val[utility::conversions::to_string_t("review_config")] = ModelBase::toJson(reviewConfig_);
    }
    if(callbackConfigIsSet_) {
        val[utility::conversions::to_string_t("callback_config")] = ModelBase::toJson(callbackConfig_);
    }

    return val;
}
bool CreateDigitalHumanBusinessCardReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("business_card_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("business_card_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBusinessCardType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("card_image_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("card_image_config"));
        if(!fieldValue.is_null())
        {
            BusinessCardImageConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCardImageConfig(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("video_asset_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("video_asset_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVideoAssetName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("review_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("review_config"));
        if(!fieldValue.is_null())
        {
            ReviewConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReviewConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("callback_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("callback_config"));
        if(!fieldValue.is_null())
        {
            CallBackConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCallbackConfig(refVal);
        }
    }
    return ok;
}


std::string CreateDigitalHumanBusinessCardReq::getBusinessCardType() const
{
    return businessCardType_;
}

void CreateDigitalHumanBusinessCardReq::setBusinessCardType(const std::string& value)
{
    businessCardType_ = value;
    businessCardTypeIsSet_ = true;
}

bool CreateDigitalHumanBusinessCardReq::businessCardTypeIsSet() const
{
    return businessCardTypeIsSet_;
}

void CreateDigitalHumanBusinessCardReq::unsetbusinessCardType()
{
    businessCardTypeIsSet_ = false;
}

std::string CreateDigitalHumanBusinessCardReq::getCardTempletAssetId() const
{
    return cardTempletAssetId_;
}

void CreateDigitalHumanBusinessCardReq::setCardTempletAssetId(const std::string& value)
{
    cardTempletAssetId_ = value;
    cardTempletAssetIdIsSet_ = true;
}

bool CreateDigitalHumanBusinessCardReq::cardTempletAssetIdIsSet() const
{
    return cardTempletAssetIdIsSet_;
}

void CreateDigitalHumanBusinessCardReq::unsetcardTempletAssetId()
{
    cardTempletAssetIdIsSet_ = false;
}

BusinessCardTextConfig CreateDigitalHumanBusinessCardReq::getCardTextConfig() const
{
    return cardTextConfig_;
}

void CreateDigitalHumanBusinessCardReq::setCardTextConfig(const BusinessCardTextConfig& value)
{
    cardTextConfig_ = value;
    cardTextConfigIsSet_ = true;
}

bool CreateDigitalHumanBusinessCardReq::cardTextConfigIsSet() const
{
    return cardTextConfigIsSet_;
}

void CreateDigitalHumanBusinessCardReq::unsetcardTextConfig()
{
    cardTextConfigIsSet_ = false;
}

BusinessCardImageConfig CreateDigitalHumanBusinessCardReq::getCardImageConfig() const
{
    return cardImageConfig_;
}

void CreateDigitalHumanBusinessCardReq::setCardImageConfig(const BusinessCardImageConfig& value)
{
    cardImageConfig_ = value;
    cardImageConfigIsSet_ = true;
}

bool CreateDigitalHumanBusinessCardReq::cardImageConfigIsSet() const
{
    return cardImageConfigIsSet_;
}

void CreateDigitalHumanBusinessCardReq::unsetcardImageConfig()
{
    cardImageConfigIsSet_ = false;
}

std::string CreateDigitalHumanBusinessCardReq::getIntroductionType() const
{
    return introductionType_;
}

void CreateDigitalHumanBusinessCardReq::setIntroductionType(const std::string& value)
{
    introductionType_ = value;
    introductionTypeIsSet_ = true;
}

bool CreateDigitalHumanBusinessCardReq::introductionTypeIsSet() const
{
    return introductionTypeIsSet_;
}

void CreateDigitalHumanBusinessCardReq::unsetintroductionType()
{
    introductionTypeIsSet_ = false;
}

std::string CreateDigitalHumanBusinessCardReq::getIntroductionText() const
{
    return introductionText_;
}

void CreateDigitalHumanBusinessCardReq::setIntroductionText(const std::string& value)
{
    introductionText_ = value;
    introductionTextIsSet_ = true;
}

bool CreateDigitalHumanBusinessCardReq::introductionTextIsSet() const
{
    return introductionTextIsSet_;
}

void CreateDigitalHumanBusinessCardReq::unsetintroductionText()
{
    introductionTextIsSet_ = false;
}

std::string CreateDigitalHumanBusinessCardReq::getVoiceAssetId() const
{
    return voiceAssetId_;
}

void CreateDigitalHumanBusinessCardReq::setVoiceAssetId(const std::string& value)
{
    voiceAssetId_ = value;
    voiceAssetIdIsSet_ = true;
}

bool CreateDigitalHumanBusinessCardReq::voiceAssetIdIsSet() const
{
    return voiceAssetIdIsSet_;
}

void CreateDigitalHumanBusinessCardReq::unsetvoiceAssetId()
{
    voiceAssetIdIsSet_ = false;
}

std::string CreateDigitalHumanBusinessCardReq::getIntroductionAudioAssetId() const
{
    return introductionAudioAssetId_;
}

void CreateDigitalHumanBusinessCardReq::setIntroductionAudioAssetId(const std::string& value)
{
    introductionAudioAssetId_ = value;
    introductionAudioAssetIdIsSet_ = true;
}

bool CreateDigitalHumanBusinessCardReq::introductionAudioAssetIdIsSet() const
{
    return introductionAudioAssetIdIsSet_;
}

void CreateDigitalHumanBusinessCardReq::unsetintroductionAudioAssetId()
{
    introductionAudioAssetIdIsSet_ = false;
}

std::string CreateDigitalHumanBusinessCardReq::getVideoAssetName() const
{
    return videoAssetName_;
}

void CreateDigitalHumanBusinessCardReq::setVideoAssetName(const std::string& value)
{
    videoAssetName_ = value;
    videoAssetNameIsSet_ = true;
}

bool CreateDigitalHumanBusinessCardReq::videoAssetNameIsSet() const
{
    return videoAssetNameIsSet_;
}

void CreateDigitalHumanBusinessCardReq::unsetvideoAssetName()
{
    videoAssetNameIsSet_ = false;
}

std::string CreateDigitalHumanBusinessCardReq::getGender() const
{
    return gender_;
}

void CreateDigitalHumanBusinessCardReq::setGender(const std::string& value)
{
    gender_ = value;
    genderIsSet_ = true;
}

bool CreateDigitalHumanBusinessCardReq::genderIsSet() const
{
    return genderIsSet_;
}

void CreateDigitalHumanBusinessCardReq::unsetgender()
{
    genderIsSet_ = false;
}

ReviewConfig CreateDigitalHumanBusinessCardReq::getReviewConfig() const
{
    return reviewConfig_;
}

void CreateDigitalHumanBusinessCardReq::setReviewConfig(const ReviewConfig& value)
{
    reviewConfig_ = value;
    reviewConfigIsSet_ = true;
}

bool CreateDigitalHumanBusinessCardReq::reviewConfigIsSet() const
{
    return reviewConfigIsSet_;
}

void CreateDigitalHumanBusinessCardReq::unsetreviewConfig()
{
    reviewConfigIsSet_ = false;
}

CallBackConfig CreateDigitalHumanBusinessCardReq::getCallbackConfig() const
{
    return callbackConfig_;
}

void CreateDigitalHumanBusinessCardReq::setCallbackConfig(const CallBackConfig& value)
{
    callbackConfig_ = value;
    callbackConfigIsSet_ = true;
}

bool CreateDigitalHumanBusinessCardReq::callbackConfigIsSet() const
{
    return callbackConfigIsSet_;
}

void CreateDigitalHumanBusinessCardReq::unsetcallbackConfig()
{
    callbackConfigIsSet_ = false;
}

}
}
}
}
}


