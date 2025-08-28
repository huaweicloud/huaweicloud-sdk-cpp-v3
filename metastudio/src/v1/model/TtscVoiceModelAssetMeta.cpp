

#include "huaweicloud/metastudio/v1/model/TtscVoiceModelAssetMeta.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




TtscVoiceModelAssetMeta::TtscVoiceModelAssetMeta()
{
    sex_ = "";
    sexIsSet_ = false;
    externalVoiceMetaIsSet_ = false;
    language_ = "";
    languageIsSet_ = false;
    speedRatio_ = 0.0f;
    speedRatioIsSet_ = false;
    volumeRatio_ = 0.0f;
    volumeRatioIsSet_ = false;
}

TtscVoiceModelAssetMeta::~TtscVoiceModelAssetMeta() = default;

void TtscVoiceModelAssetMeta::validate()
{
}

web::json::value TtscVoiceModelAssetMeta::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sexIsSet_) {
        val[utility::conversions::to_string_t("sex")] = ModelBase::toJson(sex_);
    }
    if(externalVoiceMetaIsSet_) {
        val[utility::conversions::to_string_t("external_voice_meta")] = ModelBase::toJson(externalVoiceMeta_);
    }
    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }
    if(speedRatioIsSet_) {
        val[utility::conversions::to_string_t("speed_ratio")] = ModelBase::toJson(speedRatio_);
    }
    if(volumeRatioIsSet_) {
        val[utility::conversions::to_string_t("volume_ratio")] = ModelBase::toJson(volumeRatio_);
    }

    return val;
}
bool TtscVoiceModelAssetMeta::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("sex"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sex"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSex(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("external_voice_meta"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("external_voice_meta"));
        if(!fieldValue.is_null())
        {
            TtscExternalVoiceAssetMeta refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExternalVoiceMeta(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("language"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("language"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLanguage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("speed_ratio"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("speed_ratio"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpeedRatio(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volume_ratio"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volume_ratio"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumeRatio(refVal);
        }
    }
    return ok;
}


std::string TtscVoiceModelAssetMeta::getSex() const
{
    return sex_;
}

void TtscVoiceModelAssetMeta::setSex(const std::string& value)
{
    sex_ = value;
    sexIsSet_ = true;
}

bool TtscVoiceModelAssetMeta::sexIsSet() const
{
    return sexIsSet_;
}

void TtscVoiceModelAssetMeta::unsetsex()
{
    sexIsSet_ = false;
}

TtscExternalVoiceAssetMeta TtscVoiceModelAssetMeta::getExternalVoiceMeta() const
{
    return externalVoiceMeta_;
}

void TtscVoiceModelAssetMeta::setExternalVoiceMeta(const TtscExternalVoiceAssetMeta& value)
{
    externalVoiceMeta_ = value;
    externalVoiceMetaIsSet_ = true;
}

bool TtscVoiceModelAssetMeta::externalVoiceMetaIsSet() const
{
    return externalVoiceMetaIsSet_;
}

void TtscVoiceModelAssetMeta::unsetexternalVoiceMeta()
{
    externalVoiceMetaIsSet_ = false;
}

std::string TtscVoiceModelAssetMeta::getLanguage() const
{
    return language_;
}

void TtscVoiceModelAssetMeta::setLanguage(const std::string& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool TtscVoiceModelAssetMeta::languageIsSet() const
{
    return languageIsSet_;
}

void TtscVoiceModelAssetMeta::unsetlanguage()
{
    languageIsSet_ = false;
}

float TtscVoiceModelAssetMeta::getSpeedRatio() const
{
    return speedRatio_;
}

void TtscVoiceModelAssetMeta::setSpeedRatio(float value)
{
    speedRatio_ = value;
    speedRatioIsSet_ = true;
}

bool TtscVoiceModelAssetMeta::speedRatioIsSet() const
{
    return speedRatioIsSet_;
}

void TtscVoiceModelAssetMeta::unsetspeedRatio()
{
    speedRatioIsSet_ = false;
}

float TtscVoiceModelAssetMeta::getVolumeRatio() const
{
    return volumeRatio_;
}

void TtscVoiceModelAssetMeta::setVolumeRatio(float value)
{
    volumeRatio_ = value;
    volumeRatioIsSet_ = true;
}

bool TtscVoiceModelAssetMeta::volumeRatioIsSet() const
{
    return volumeRatioIsSet_;
}

void TtscVoiceModelAssetMeta::unsetvolumeRatio()
{
    volumeRatioIsSet_ = false;
}

}
}
}
}
}


