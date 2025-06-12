

#include "huaweicloud/metastudio/v1/model/VoiceCapability.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




VoiceCapability::VoiceCapability()
{
    isSupportPhonemeEn_ = false;
    isSupportPhonemeEnIsSet_ = false;
    isSupportPhoneme_ = false;
    isSupportPhonemeIsSet_ = false;
    isSupportBreakTime_ = false;
    isSupportBreakTimeIsSet_ = false;
    isSupportBreakStrength_ = false;
    isSupportBreakStrengthIsSet_ = false;
    isSupportSpeed_ = false;
    isSupportSpeedIsSet_ = false;
    isSupportProsody_ = false;
    isSupportProsodyIsSet_ = false;
    isSupportSsmlSayAs_ = false;
    isSupportSsmlSayAsIsSet_ = false;
    isSupportSsmlSub_ = false;
    isSupportSsmlSubIsSet_ = false;
    isSupportWord_ = false;
    isSupportWordIsSet_ = false;
    isSupportVoiceCache_ = false;
    isSupportVoiceCacheIsSet_ = false;
    conversionRate_ = 0.0f;
    conversionRateIsSet_ = false;
    conversionRateEn_ = 0.0f;
    conversionRateEnIsSet_ = false;
    isSupportSrt_ = false;
    isSupportSrtIsSet_ = false;
}

VoiceCapability::~VoiceCapability() = default;

void VoiceCapability::validate()
{
}

web::json::value VoiceCapability::toJson() const
{
    web::json::value val = web::json::value::object();

    if(isSupportPhonemeEnIsSet_) {
        val[utility::conversions::to_string_t("is_support_phoneme_en")] = ModelBase::toJson(isSupportPhonemeEn_);
    }
    if(isSupportPhonemeIsSet_) {
        val[utility::conversions::to_string_t("is_support_phoneme")] = ModelBase::toJson(isSupportPhoneme_);
    }
    if(isSupportBreakTimeIsSet_) {
        val[utility::conversions::to_string_t("is_support_break_time")] = ModelBase::toJson(isSupportBreakTime_);
    }
    if(isSupportBreakStrengthIsSet_) {
        val[utility::conversions::to_string_t("is_support_break_strength")] = ModelBase::toJson(isSupportBreakStrength_);
    }
    if(isSupportSpeedIsSet_) {
        val[utility::conversions::to_string_t("is_support_speed")] = ModelBase::toJson(isSupportSpeed_);
    }
    if(isSupportProsodyIsSet_) {
        val[utility::conversions::to_string_t("is_support_prosody")] = ModelBase::toJson(isSupportProsody_);
    }
    if(isSupportSsmlSayAsIsSet_) {
        val[utility::conversions::to_string_t("is_support_ssml_say_as")] = ModelBase::toJson(isSupportSsmlSayAs_);
    }
    if(isSupportSsmlSubIsSet_) {
        val[utility::conversions::to_string_t("is_support_ssml_sub")] = ModelBase::toJson(isSupportSsmlSub_);
    }
    if(isSupportWordIsSet_) {
        val[utility::conversions::to_string_t("is_support_word")] = ModelBase::toJson(isSupportWord_);
    }
    if(isSupportVoiceCacheIsSet_) {
        val[utility::conversions::to_string_t("is_support_voice_cache")] = ModelBase::toJson(isSupportVoiceCache_);
    }
    if(conversionRateIsSet_) {
        val[utility::conversions::to_string_t("conversion_rate")] = ModelBase::toJson(conversionRate_);
    }
    if(conversionRateEnIsSet_) {
        val[utility::conversions::to_string_t("conversion_rate_en")] = ModelBase::toJson(conversionRateEn_);
    }
    if(isSupportSrtIsSet_) {
        val[utility::conversions::to_string_t("is_support_srt")] = ModelBase::toJson(isSupportSrt_);
    }

    return val;
}
bool VoiceCapability::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("is_support_phoneme_en"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_support_phoneme_en"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSupportPhonemeEn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_support_phoneme"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_support_phoneme"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSupportPhoneme(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_support_break_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_support_break_time"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSupportBreakTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_support_break_strength"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_support_break_strength"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSupportBreakStrength(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_support_speed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_support_speed"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSupportSpeed(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_support_prosody"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_support_prosody"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSupportProsody(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_support_ssml_say_as"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_support_ssml_say_as"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSupportSsmlSayAs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_support_ssml_sub"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_support_ssml_sub"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSupportSsmlSub(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_support_word"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_support_word"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSupportWord(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_support_voice_cache"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_support_voice_cache"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSupportVoiceCache(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("conversion_rate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("conversion_rate"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConversionRate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("conversion_rate_en"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("conversion_rate_en"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConversionRateEn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_support_srt"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_support_srt"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSupportSrt(refVal);
        }
    }
    return ok;
}


bool VoiceCapability::isIsSupportPhonemeEn() const
{
    return isSupportPhonemeEn_;
}

void VoiceCapability::setIsSupportPhonemeEn(bool value)
{
    isSupportPhonemeEn_ = value;
    isSupportPhonemeEnIsSet_ = true;
}

bool VoiceCapability::isSupportPhonemeEnIsSet() const
{
    return isSupportPhonemeEnIsSet_;
}

void VoiceCapability::unsetisSupportPhonemeEn()
{
    isSupportPhonemeEnIsSet_ = false;
}

bool VoiceCapability::isIsSupportPhoneme() const
{
    return isSupportPhoneme_;
}

void VoiceCapability::setIsSupportPhoneme(bool value)
{
    isSupportPhoneme_ = value;
    isSupportPhonemeIsSet_ = true;
}

bool VoiceCapability::isSupportPhonemeIsSet() const
{
    return isSupportPhonemeIsSet_;
}

void VoiceCapability::unsetisSupportPhoneme()
{
    isSupportPhonemeIsSet_ = false;
}

bool VoiceCapability::isIsSupportBreakTime() const
{
    return isSupportBreakTime_;
}

void VoiceCapability::setIsSupportBreakTime(bool value)
{
    isSupportBreakTime_ = value;
    isSupportBreakTimeIsSet_ = true;
}

bool VoiceCapability::isSupportBreakTimeIsSet() const
{
    return isSupportBreakTimeIsSet_;
}

void VoiceCapability::unsetisSupportBreakTime()
{
    isSupportBreakTimeIsSet_ = false;
}

bool VoiceCapability::isIsSupportBreakStrength() const
{
    return isSupportBreakStrength_;
}

void VoiceCapability::setIsSupportBreakStrength(bool value)
{
    isSupportBreakStrength_ = value;
    isSupportBreakStrengthIsSet_ = true;
}

bool VoiceCapability::isSupportBreakStrengthIsSet() const
{
    return isSupportBreakStrengthIsSet_;
}

void VoiceCapability::unsetisSupportBreakStrength()
{
    isSupportBreakStrengthIsSet_ = false;
}

bool VoiceCapability::isIsSupportSpeed() const
{
    return isSupportSpeed_;
}

void VoiceCapability::setIsSupportSpeed(bool value)
{
    isSupportSpeed_ = value;
    isSupportSpeedIsSet_ = true;
}

bool VoiceCapability::isSupportSpeedIsSet() const
{
    return isSupportSpeedIsSet_;
}

void VoiceCapability::unsetisSupportSpeed()
{
    isSupportSpeedIsSet_ = false;
}

bool VoiceCapability::isIsSupportProsody() const
{
    return isSupportProsody_;
}

void VoiceCapability::setIsSupportProsody(bool value)
{
    isSupportProsody_ = value;
    isSupportProsodyIsSet_ = true;
}

bool VoiceCapability::isSupportProsodyIsSet() const
{
    return isSupportProsodyIsSet_;
}

void VoiceCapability::unsetisSupportProsody()
{
    isSupportProsodyIsSet_ = false;
}

bool VoiceCapability::isIsSupportSsmlSayAs() const
{
    return isSupportSsmlSayAs_;
}

void VoiceCapability::setIsSupportSsmlSayAs(bool value)
{
    isSupportSsmlSayAs_ = value;
    isSupportSsmlSayAsIsSet_ = true;
}

bool VoiceCapability::isSupportSsmlSayAsIsSet() const
{
    return isSupportSsmlSayAsIsSet_;
}

void VoiceCapability::unsetisSupportSsmlSayAs()
{
    isSupportSsmlSayAsIsSet_ = false;
}

bool VoiceCapability::isIsSupportSsmlSub() const
{
    return isSupportSsmlSub_;
}

void VoiceCapability::setIsSupportSsmlSub(bool value)
{
    isSupportSsmlSub_ = value;
    isSupportSsmlSubIsSet_ = true;
}

bool VoiceCapability::isSupportSsmlSubIsSet() const
{
    return isSupportSsmlSubIsSet_;
}

void VoiceCapability::unsetisSupportSsmlSub()
{
    isSupportSsmlSubIsSet_ = false;
}

bool VoiceCapability::isIsSupportWord() const
{
    return isSupportWord_;
}

void VoiceCapability::setIsSupportWord(bool value)
{
    isSupportWord_ = value;
    isSupportWordIsSet_ = true;
}

bool VoiceCapability::isSupportWordIsSet() const
{
    return isSupportWordIsSet_;
}

void VoiceCapability::unsetisSupportWord()
{
    isSupportWordIsSet_ = false;
}

bool VoiceCapability::isIsSupportVoiceCache() const
{
    return isSupportVoiceCache_;
}

void VoiceCapability::setIsSupportVoiceCache(bool value)
{
    isSupportVoiceCache_ = value;
    isSupportVoiceCacheIsSet_ = true;
}

bool VoiceCapability::isSupportVoiceCacheIsSet() const
{
    return isSupportVoiceCacheIsSet_;
}

void VoiceCapability::unsetisSupportVoiceCache()
{
    isSupportVoiceCacheIsSet_ = false;
}

float VoiceCapability::getConversionRate() const
{
    return conversionRate_;
}

void VoiceCapability::setConversionRate(float value)
{
    conversionRate_ = value;
    conversionRateIsSet_ = true;
}

bool VoiceCapability::conversionRateIsSet() const
{
    return conversionRateIsSet_;
}

void VoiceCapability::unsetconversionRate()
{
    conversionRateIsSet_ = false;
}

float VoiceCapability::getConversionRateEn() const
{
    return conversionRateEn_;
}

void VoiceCapability::setConversionRateEn(float value)
{
    conversionRateEn_ = value;
    conversionRateEnIsSet_ = true;
}

bool VoiceCapability::conversionRateEnIsSet() const
{
    return conversionRateEnIsSet_;
}

void VoiceCapability::unsetconversionRateEn()
{
    conversionRateEnIsSet_ = false;
}

bool VoiceCapability::isIsSupportSrt() const
{
    return isSupportSrt_;
}

void VoiceCapability::setIsSupportSrt(bool value)
{
    isSupportSrt_ = value;
    isSupportSrtIsSet_ = true;
}

bool VoiceCapability::isSupportSrtIsSet() const
{
    return isSupportSrtIsSet_;
}

void VoiceCapability::unsetisSupportSrt()
{
    isSupportSrtIsSet_ = false;
}

}
}
}
}
}


