

#include "huaweicloud/sis/v1/model/RegisterVoiceReq_config.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {




RegisterVoiceReq_config::RegisterVoiceReq_config()
{
    voiceName_ = "";
    voiceNameIsSet_ = false;
    language_ = "";
    languageIsSet_ = false;
}

RegisterVoiceReq_config::~RegisterVoiceReq_config() = default;

void RegisterVoiceReq_config::validate()
{
}

web::json::value RegisterVoiceReq_config::toJson() const
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
bool RegisterVoiceReq_config::fromJson(const web::json::value& val)
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


std::string RegisterVoiceReq_config::getVoiceName() const
{
    return voiceName_;
}

void RegisterVoiceReq_config::setVoiceName(const std::string& value)
{
    voiceName_ = value;
    voiceNameIsSet_ = true;
}

bool RegisterVoiceReq_config::voiceNameIsSet() const
{
    return voiceNameIsSet_;
}

void RegisterVoiceReq_config::unsetvoiceName()
{
    voiceNameIsSet_ = false;
}

std::string RegisterVoiceReq_config::getLanguage() const
{
    return language_;
}

void RegisterVoiceReq_config::setLanguage(const std::string& value)
{
    language_ = value;
    languageIsSet_ = true;
}

bool RegisterVoiceReq_config::languageIsSet() const
{
    return languageIsSet_;
}

void RegisterVoiceReq_config::unsetlanguage()
{
    languageIsSet_ = false;
}

}
}
}
}
}


