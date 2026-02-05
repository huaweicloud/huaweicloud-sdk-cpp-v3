

#include "huaweicloud/sis/v1/model/RegisterVoiceResponseBody_result.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {




RegisterVoiceResponseBody_result::RegisterVoiceResponseBody_result()
{
    voiceName_ = "";
    voiceNameIsSet_ = false;
}

RegisterVoiceResponseBody_result::~RegisterVoiceResponseBody_result() = default;

void RegisterVoiceResponseBody_result::validate()
{
}

web::json::value RegisterVoiceResponseBody_result::toJson() const
{
    web::json::value val = web::json::value::object();

    if(voiceNameIsSet_) {
        val[utility::conversions::to_string_t("voice_name")] = ModelBase::toJson(voiceName_);
    }

    return val;
}
bool RegisterVoiceResponseBody_result::fromJson(const web::json::value& val)
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
    return ok;
}


std::string RegisterVoiceResponseBody_result::getVoiceName() const
{
    return voiceName_;
}

void RegisterVoiceResponseBody_result::setVoiceName(const std::string& value)
{
    voiceName_ = value;
    voiceNameIsSet_ = true;
}

bool RegisterVoiceResponseBody_result::voiceNameIsSet() const
{
    return voiceNameIsSet_;
}

void RegisterVoiceResponseBody_result::unsetvoiceName()
{
    voiceNameIsSet_ = false;
}

}
}
}
}
}


