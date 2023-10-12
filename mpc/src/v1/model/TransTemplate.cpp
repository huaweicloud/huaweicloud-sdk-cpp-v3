

#include "huaweicloud/mpc/v1/model/TransTemplate.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




TransTemplate::TransTemplate()
{
    templateName_ = "";
    templateNameIsSet_ = false;
    videoIsSet_ = false;
    audioIsSet_ = false;
    commonIsSet_ = false;
}

TransTemplate::~TransTemplate() = default;

void TransTemplate::validate()
{
}

web::json::value TransTemplate::toJson() const
{
    web::json::value val = web::json::value::object();

    if(templateNameIsSet_) {
        val[utility::conversions::to_string_t("template_name")] = ModelBase::toJson(templateName_);
    }
    if(videoIsSet_) {
        val[utility::conversions::to_string_t("video")] = ModelBase::toJson(video_);
    }
    if(audioIsSet_) {
        val[utility::conversions::to_string_t("audio")] = ModelBase::toJson(audio_);
    }
    if(commonIsSet_) {
        val[utility::conversions::to_string_t("common")] = ModelBase::toJson(common_);
    }

    return val;
}
bool TransTemplate::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("template_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("video"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("video"));
        if(!fieldValue.is_null())
        {
            Video refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVideo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("audio"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("audio"));
        if(!fieldValue.is_null())
        {
            Audio refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAudio(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("common"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("common"));
        if(!fieldValue.is_null())
        {
            Common refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommon(refVal);
        }
    }
    return ok;
}


std::string TransTemplate::getTemplateName() const
{
    return templateName_;
}

void TransTemplate::setTemplateName(const std::string& value)
{
    templateName_ = value;
    templateNameIsSet_ = true;
}

bool TransTemplate::templateNameIsSet() const
{
    return templateNameIsSet_;
}

void TransTemplate::unsettemplateName()
{
    templateNameIsSet_ = false;
}

Video TransTemplate::getVideo() const
{
    return video_;
}

void TransTemplate::setVideo(const Video& value)
{
    video_ = value;
    videoIsSet_ = true;
}

bool TransTemplate::videoIsSet() const
{
    return videoIsSet_;
}

void TransTemplate::unsetvideo()
{
    videoIsSet_ = false;
}

Audio TransTemplate::getAudio() const
{
    return audio_;
}

void TransTemplate::setAudio(const Audio& value)
{
    audio_ = value;
    audioIsSet_ = true;
}

bool TransTemplate::audioIsSet() const
{
    return audioIsSet_;
}

void TransTemplate::unsetaudio()
{
    audioIsSet_ = false;
}

Common TransTemplate::getCommon() const
{
    return common_;
}

void TransTemplate::setCommon(const Common& value)
{
    common_ = value;
    commonIsSet_ = true;
}

bool TransTemplate::commonIsSet() const
{
    return commonIsSet_;
}

void TransTemplate::unsetcommon()
{
    commonIsSet_ = false;
}

}
}
}
}
}


