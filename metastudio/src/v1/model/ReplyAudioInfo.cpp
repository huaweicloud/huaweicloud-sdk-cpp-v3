

#include "huaweicloud/metastudio/v1/model/ReplyAudioInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Metastudio {
namespace V1 {
namespace Model {




ReplyAudioInfo::ReplyAudioInfo()
{
    audioUrl_ = "";
    audioUrlIsSet_ = false;
    audioName_ = "";
    audioNameIsSet_ = false;
}

ReplyAudioInfo::~ReplyAudioInfo() = default;

void ReplyAudioInfo::validate()
{
}

web::json::value ReplyAudioInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(audioUrlIsSet_) {
        val[utility::conversions::to_string_t("audio_url")] = ModelBase::toJson(audioUrl_);
    }
    if(audioNameIsSet_) {
        val[utility::conversions::to_string_t("audio_name")] = ModelBase::toJson(audioName_);
    }

    return val;
}
bool ReplyAudioInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("audio_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audio_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudioUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("audio_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audio_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudioName(refVal);
        }
    }
    return ok;
}


std::string ReplyAudioInfo::getAudioUrl() const
{
    return audioUrl_;
}

void ReplyAudioInfo::setAudioUrl(const std::string& value)
{
    audioUrl_ = value;
    audioUrlIsSet_ = true;
}

bool ReplyAudioInfo::audioUrlIsSet() const
{
    return audioUrlIsSet_;
}

void ReplyAudioInfo::unsetaudioUrl()
{
    audioUrlIsSet_ = false;
}

std::string ReplyAudioInfo::getAudioName() const
{
    return audioName_;
}

void ReplyAudioInfo::setAudioName(const std::string& value)
{
    audioName_ = value;
    audioNameIsSet_ = true;
}

bool ReplyAudioInfo::audioNameIsSet() const
{
    return audioNameIsSet_;
}

void ReplyAudioInfo::unsetaudioName()
{
    audioNameIsSet_ = false;
}

}
}
}
}
}


