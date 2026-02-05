

#include "huaweicloud/sis/v1/model/VoiceList_result_voices.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {




VoiceList_result_voices::VoiceList_result_voices()
{
    voiceName_ = "";
    voiceNameIsSet_ = false;
    language_ = "";
    languageIsSet_ = false;
}

VoiceList_result_voices::~VoiceList_result_voices() = default;

void VoiceList_result_voices::validate()
{
}

web::json::value VoiceList_result_voices::toJson() const
{
    web::json::value val = web::json::value::object();

    if(voiceNameIsSet_) {
        val[utility::conversions::to_string_t("voice_name")] = ModelBase::toJson(voiceName_);
    }
    if(languageIsSet_) {
        val[utility::conversions::to_string_t("language")] = ModelBase::toJson(language_);
    }

    return val;
}
bool VoiceList_result_voices::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("voice_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("voice_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVoiceName(refVal);
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
    return ok;
}


std::string VoiceList_result_voices::getVoiceName() const
{
    return voiceName_;
}

void VoiceList_result_voices::setVoiceName(const std::string& value)
{
    voiceName_ = value;
    voiceNameIsSet_ = true;
}

bool VoiceList_result_voices::voiceNameIsSet() const
{
    return voiceNameIsSet_;
}

void VoiceList_result_voices::unsetvoiceName()
{
    voiceNameIsSet_ = false;
}

std::string VoiceList_result_voices::getLanguage() const
{
    return language_;
}

void VoiceList_result_voices::setLanguage(const std::string& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool VoiceList_result_voices::languageIsSet() const
{
    return languageIsSet_;
}

void VoiceList_result_voices::unsetlanguage()
{
    languageIsSet_ = false;
}

}
}
}
}
}


