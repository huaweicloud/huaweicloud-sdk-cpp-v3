

#include "huaweicloud/metastudio/v1/model/VoiceModelAssetMeta.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




VoiceModelAssetMeta::VoiceModelAssetMeta()
{
    order_ = 0;
    orderIsSet_ = false;
    modelType_ = "";
    modelTypeIsSet_ = false;
    sex_ = "";
    sexIsSet_ = false;
    language_ = "";
    languageIsSet_ = false;
    languagesIsSet_ = false;
    speedRatio_ = 0.0f;
    speedRatioIsSet_ = false;
    volumeRatio_ = 0.0f;
    volumeRatioIsSet_ = false;
    isRealtimeVoice_ = false;
    isRealtimeVoiceIsSet_ = false;
    style_ = "";
    styleIsSet_ = false;
    voiceCapabilityIsSet_ = false;
    externalVoiceMetaIsSet_ = false;
    isSupportVcProcess_ = false;
    isSupportVcProcessIsSet_ = false;
    isSupportThaiAutoSplit_ = false;
    isSupportThaiAutoSplitIsSet_ = false;
    isFlexus_ = false;
    isFlexusIsSet_ = false;
    isEnhanceRhythm_ = false;
    isEnhanceRhythmIsSet_ = false;
    age_ = "";
    ageIsSet_ = false;
}

VoiceModelAssetMeta::~VoiceModelAssetMeta() = default;

void VoiceModelAssetMeta::validate()
{
}

web::json::value VoiceModelAssetMeta::toJson() const
{
    web::json::value val = web::json::value::object();

    if(orderIsSet_) {
        val[utility::conversions::to_string_t("order")] = ModelBase::toJson(order_);
    }
    if(modelTypeIsSet_) {
        val[utility::conversions::to_string_t("model_type")] = ModelBase::toJson(modelType_);
    }
    if(sexIsSet_) {
        val[utility::conversions::to_string_t("sex")] = ModelBase::toJson(sex_);
    }
    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }
    if(languagesIsSet_) {
        val[utility::conversions::to_string_t("languages")] = ModelBase::toJson(languages_);
    }
    if(speedRatioIsSet_) {
        val[utility::conversions::to_string_t("speed_ratio")] = ModelBase::toJson(speedRatio_);
    }
    if(volumeRatioIsSet_) {
        val[utility::conversions::to_string_t("volume_ratio")] = ModelBase::toJson(volumeRatio_);
    }
    if(isRealtimeVoiceIsSet_) {
        val[utility::conversions::to_string_t("is_realtime_voice")] = ModelBase::toJson(isRealtimeVoice_);
    }
    if(styleIsSet_) {
        val[utility::conversions::to_string_t("style")] = ModelBase::toJson(style_);
    }
    if(voiceCapabilityIsSet_) {
        val[utility::conversions::to_string_t("voice_capability")] = ModelBase::toJson(voiceCapability_);
    }
    if(externalVoiceMetaIsSet_) {
        val[utility::conversions::to_string_t("external_voice_meta")] = ModelBase::toJson(externalVoiceMeta_);
    }
    if(isSupportVcProcessIsSet_) {
        val[utility::conversions::to_string_t("is_support_vc_process")] = ModelBase::toJson(isSupportVcProcess_);
    }
    if(isSupportThaiAutoSplitIsSet_) {
        val[utility::conversions::to_string_t("is_support_thai_auto_split")] = ModelBase::toJson(isSupportThaiAutoSplit_);
    }
    if(isFlexusIsSet_) {
        val[utility::conversions::to_string_t("is_flexus")] = ModelBase::toJson(isFlexus_);
    }
    if(isEnhanceRhythmIsSet_) {
        val[utility::conversions::to_string_t("is_enhance_rhythm")] = ModelBase::toJson(isEnhanceRhythm_);
    }
    if(ageIsSet_) {
        val[utility::conversions::to_string_t("age")] = ModelBase::toJson(age_);
    }

    return val;
}
bool VoiceModelAssetMeta::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("order"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrder(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("model_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("model_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModelType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sex"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sex"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSex(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("languages"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("languages"));
        if(!fieldValue.is_null())
        {
            std::vector<VoiceLanguage> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLanguages(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("is_realtime_voice"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_realtime_voice"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsRealtimeVoice(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("style"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("style"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStyle(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("voice_capability"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("voice_capability"));
        if(!fieldValue.is_null())
        {
            VoiceCapability refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVoiceCapability(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("external_voice_meta"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("external_voice_meta"));
        if(!fieldValue.is_null())
        {
            ExternalVoiceAssetMeta refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExternalVoiceMeta(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_support_vc_process"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_support_vc_process"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSupportVcProcess(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_support_thai_auto_split"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_support_thai_auto_split"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSupportThaiAutoSplit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_flexus"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_flexus"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsFlexus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_enhance_rhythm"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_enhance_rhythm"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsEnhanceRhythm(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("age"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("age"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAge(refVal);
        }
    }
    return ok;
}


int32_t VoiceModelAssetMeta::getOrder() const
{
    return order_;
}

void VoiceModelAssetMeta::setOrder(int32_t value)
{
    order_ = value;
    orderIsSet_ = true;
}

bool VoiceModelAssetMeta::orderIsSet() const
{
    return orderIsSet_;
}

void VoiceModelAssetMeta::unsetorder()
{
    orderIsSet_ = false;
}

std::string VoiceModelAssetMeta::getModelType() const
{
    return modelType_;
}

void VoiceModelAssetMeta::setModelType(const std::string& value)
{
    modelType_ = value;
    modelTypeIsSet_ = true;
}

bool VoiceModelAssetMeta::modelTypeIsSet() const
{
    return modelTypeIsSet_;
}

void VoiceModelAssetMeta::unsetmodelType()
{
    modelTypeIsSet_ = false;
}

std::string VoiceModelAssetMeta::getSex() const
{
    return sex_;
}

void VoiceModelAssetMeta::setSex(const std::string& value)
{
    sex_ = value;
    sexIsSet_ = true;
}

bool VoiceModelAssetMeta::sexIsSet() const
{
    return sexIsSet_;
}

void VoiceModelAssetMeta::unsetsex()
{
    sexIsSet_ = false;
}

std::string VoiceModelAssetMeta::getLanguage() const
{
    return language_;
}

void VoiceModelAssetMeta::setLanguage(const std::string& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool VoiceModelAssetMeta::languageIsSet() const
{
    return languageIsSet_;
}

void VoiceModelAssetMeta::unsetlanguage()
{
    languageIsSet_ = false;
}

std::vector<VoiceLanguage>& VoiceModelAssetMeta::getLanguages()
{
    return languages_;
}

void VoiceModelAssetMeta::setLanguages(const std::vector<VoiceLanguage>& value)
{
    languages_ = value;
    languagesIsSet_ = true;
}

bool VoiceModelAssetMeta::languagesIsSet() const
{
    return languagesIsSet_;
}

void VoiceModelAssetMeta::unsetlanguages()
{
    languagesIsSet_ = false;
}

float VoiceModelAssetMeta::getSpeedRatio() const
{
    return speedRatio_;
}

void VoiceModelAssetMeta::setSpeedRatio(float value)
{
    speedRatio_ = value;
    speedRatioIsSet_ = true;
}

bool VoiceModelAssetMeta::speedRatioIsSet() const
{
    return speedRatioIsSet_;
}

void VoiceModelAssetMeta::unsetspeedRatio()
{
    speedRatioIsSet_ = false;
}

float VoiceModelAssetMeta::getVolumeRatio() const
{
    return volumeRatio_;
}

void VoiceModelAssetMeta::setVolumeRatio(float value)
{
    volumeRatio_ = value;
    volumeRatioIsSet_ = true;
}

bool VoiceModelAssetMeta::volumeRatioIsSet() const
{
    return volumeRatioIsSet_;
}

void VoiceModelAssetMeta::unsetvolumeRatio()
{
    volumeRatioIsSet_ = false;
}

bool VoiceModelAssetMeta::isIsRealtimeVoice() const
{
    return isRealtimeVoice_;
}

void VoiceModelAssetMeta::setIsRealtimeVoice(bool value)
{
    isRealtimeVoice_ = value;
    isRealtimeVoiceIsSet_ = true;
}

bool VoiceModelAssetMeta::isRealtimeVoiceIsSet() const
{
    return isRealtimeVoiceIsSet_;
}

void VoiceModelAssetMeta::unsetisRealtimeVoice()
{
    isRealtimeVoiceIsSet_ = false;
}

std::string VoiceModelAssetMeta::getStyle() const
{
    return style_;
}

void VoiceModelAssetMeta::setStyle(const std::string& value)
{
    style_ = value;
    styleIsSet_ = true;
}

bool VoiceModelAssetMeta::styleIsSet() const
{
    return styleIsSet_;
}

void VoiceModelAssetMeta::unsetstyle()
{
    styleIsSet_ = false;
}

VoiceCapability VoiceModelAssetMeta::getVoiceCapability() const
{
    return voiceCapability_;
}

void VoiceModelAssetMeta::setVoiceCapability(const VoiceCapability& value)
{
    voiceCapability_ = value;
    voiceCapabilityIsSet_ = true;
}

bool VoiceModelAssetMeta::voiceCapabilityIsSet() const
{
    return voiceCapabilityIsSet_;
}

void VoiceModelAssetMeta::unsetvoiceCapability()
{
    voiceCapabilityIsSet_ = false;
}

ExternalVoiceAssetMeta VoiceModelAssetMeta::getExternalVoiceMeta() const
{
    return externalVoiceMeta_;
}

void VoiceModelAssetMeta::setExternalVoiceMeta(const ExternalVoiceAssetMeta& value)
{
    externalVoiceMeta_ = value;
    externalVoiceMetaIsSet_ = true;
}

bool VoiceModelAssetMeta::externalVoiceMetaIsSet() const
{
    return externalVoiceMetaIsSet_;
}

void VoiceModelAssetMeta::unsetexternalVoiceMeta()
{
    externalVoiceMetaIsSet_ = false;
}

bool VoiceModelAssetMeta::isIsSupportVcProcess() const
{
    return isSupportVcProcess_;
}

void VoiceModelAssetMeta::setIsSupportVcProcess(bool value)
{
    isSupportVcProcess_ = value;
    isSupportVcProcessIsSet_ = true;
}

bool VoiceModelAssetMeta::isSupportVcProcessIsSet() const
{
    return isSupportVcProcessIsSet_;
}

void VoiceModelAssetMeta::unsetisSupportVcProcess()
{
    isSupportVcProcessIsSet_ = false;
}

bool VoiceModelAssetMeta::isIsSupportThaiAutoSplit() const
{
    return isSupportThaiAutoSplit_;
}

void VoiceModelAssetMeta::setIsSupportThaiAutoSplit(bool value)
{
    isSupportThaiAutoSplit_ = value;
    isSupportThaiAutoSplitIsSet_ = true;
}

bool VoiceModelAssetMeta::isSupportThaiAutoSplitIsSet() const
{
    return isSupportThaiAutoSplitIsSet_;
}

void VoiceModelAssetMeta::unsetisSupportThaiAutoSplit()
{
    isSupportThaiAutoSplitIsSet_ = false;
}

bool VoiceModelAssetMeta::isIsFlexus() const
{
    return isFlexus_;
}

void VoiceModelAssetMeta::setIsFlexus(bool value)
{
    isFlexus_ = value;
    isFlexusIsSet_ = true;
}

bool VoiceModelAssetMeta::isFlexusIsSet() const
{
    return isFlexusIsSet_;
}

void VoiceModelAssetMeta::unsetisFlexus()
{
    isFlexusIsSet_ = false;
}

bool VoiceModelAssetMeta::isIsEnhanceRhythm() const
{
    return isEnhanceRhythm_;
}

void VoiceModelAssetMeta::setIsEnhanceRhythm(bool value)
{
    isEnhanceRhythm_ = value;
    isEnhanceRhythmIsSet_ = true;
}

bool VoiceModelAssetMeta::isEnhanceRhythmIsSet() const
{
    return isEnhanceRhythmIsSet_;
}

void VoiceModelAssetMeta::unsetisEnhanceRhythm()
{
    isEnhanceRhythmIsSet_ = false;
}

std::string VoiceModelAssetMeta::getAge() const
{
    return age_;
}

void VoiceModelAssetMeta::setAge(const std::string& value)
{
    age_ = value;
    ageIsSet_ = true;
}

bool VoiceModelAssetMeta::ageIsSet() const
{
    return ageIsSet_;
}

void VoiceModelAssetMeta::unsetage()
{
    ageIsSet_ = false;
}

}
}
}
}
}


