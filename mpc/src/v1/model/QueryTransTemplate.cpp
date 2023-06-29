

#include "huaweicloud/mpc/v1/model/QueryTransTemplate.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




QueryTransTemplate::QueryTransTemplate()
{
    templateName_ = "";
    templateNameIsSet_ = false;
    videoIsSet_ = false;
    audioIsSet_ = false;
    commonIsSet_ = false;
}

QueryTransTemplate::~QueryTransTemplate() = default;

void QueryTransTemplate::validate()
{
}

web::json::value QueryTransTemplate::toJson() const
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

bool QueryTransTemplate::fromJson(const web::json::value& val)
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


std::string QueryTransTemplate::getTemplateName() const
{
    return templateName_;
}

void QueryTransTemplate::setTemplateName(const std::string& value)
{
    templateName_ = value;
    templateNameIsSet_ = true;
}

bool QueryTransTemplate::templateNameIsSet() const
{
    return templateNameIsSet_;
}

void QueryTransTemplate::unsettemplateName()
{
    templateNameIsSet_ = false;
}

Video QueryTransTemplate::getVideo() const
{
    return video_;
}

void QueryTransTemplate::setVideo(const Video& value)
{
    video_ = value;
    videoIsSet_ = true;
}

bool QueryTransTemplate::videoIsSet() const
{
    return videoIsSet_;
}

void QueryTransTemplate::unsetvideo()
{
    videoIsSet_ = false;
}

Audio QueryTransTemplate::getAudio() const
{
    return audio_;
}

void QueryTransTemplate::setAudio(const Audio& value)
{
    audio_ = value;
    audioIsSet_ = true;
}

bool QueryTransTemplate::audioIsSet() const
{
    return audioIsSet_;
}

void QueryTransTemplate::unsetaudio()
{
    audioIsSet_ = false;
}

Common QueryTransTemplate::getCommon() const
{
    return common_;
}

void QueryTransTemplate::setCommon(const Common& value)
{
    common_ = value;
    commonIsSet_ = true;
}

bool QueryTransTemplate::commonIsSet() const
{
    return commonIsSet_;
}

void QueryTransTemplate::unsetcommon()
{
    commonIsSet_ = false;
}

}
}
}
}
}


