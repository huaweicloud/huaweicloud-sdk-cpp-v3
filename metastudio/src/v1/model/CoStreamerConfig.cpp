

#include "huaweicloud/metastudio/v1/model/CoStreamerConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




CoStreamerConfig::CoStreamerConfig()
{
    voiceConfigIsSet_ = false;
    streamerAction_ = "";
    streamerActionIsSet_ = false;
}

CoStreamerConfig::~CoStreamerConfig() = default;

void CoStreamerConfig::validate()
{
}

web::json::value CoStreamerConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(voiceConfigIsSet_) {
        val[utility::conversions::to_string_t("voice_config")] = ModelBase::toJson(voiceConfig_);
    }
    if(streamerActionIsSet_) {
        val[utility::conversions::to_string_t("streamer_action")] = ModelBase::toJson(streamerAction_);
    }

    return val;
}
bool CoStreamerConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("voice_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("voice_config"));
        if(!fieldValue.is_null())
        {
            VoiceConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVoiceConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("streamer_action"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("streamer_action"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStreamerAction(refVal);
        }
    }
    return ok;
}


VoiceConfig CoStreamerConfig::getVoiceConfig() const
{
    return voiceConfig_;
}

void CoStreamerConfig::setVoiceConfig(const VoiceConfig& value)
{
    voiceConfig_ = value;
    voiceConfigIsSet_ = true;
}

bool CoStreamerConfig::voiceConfigIsSet() const
{
    return voiceConfigIsSet_;
}

void CoStreamerConfig::unsetvoiceConfig()
{
    voiceConfigIsSet_ = false;
}

std::string CoStreamerConfig::getStreamerAction() const
{
    return streamerAction_;
}

void CoStreamerConfig::setStreamerAction(const std::string& value)
{
    streamerAction_ = value;
    streamerActionIsSet_ = true;
}

bool CoStreamerConfig::streamerActionIsSet() const
{
    return streamerActionIsSet_;
}

void CoStreamerConfig::unsetstreamerAction()
{
    streamerActionIsSet_ = false;
}

}
}
}
}
}


