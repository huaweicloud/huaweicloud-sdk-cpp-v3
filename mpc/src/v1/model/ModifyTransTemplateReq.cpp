

#include "huaweicloud/mpc/v1/model/ModifyTransTemplateReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




ModifyTransTemplateReq::ModifyTransTemplateReq()
{
    templateId_ = 0L;
    templateIdIsSet_ = false;
    templateName_ = "";
    templateNameIsSet_ = false;
    videoIsSet_ = false;
    audioIsSet_ = false;
    commonIsSet_ = false;
}

ModifyTransTemplateReq::~ModifyTransTemplateReq() = default;

void ModifyTransTemplateReq::validate()
{
}

web::json::value ModifyTransTemplateReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(templateIdIsSet_) {
        val[utility::conversions::to_string_t("template_id")] = ModelBase::toJson(templateId_);
    }
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

bool ModifyTransTemplateReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("template_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_id"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateId(refVal);
        }
    }
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


int64_t ModifyTransTemplateReq::getTemplateId() const
{
    return templateId_;
}

void ModifyTransTemplateReq::setTemplateId(int64_t value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool ModifyTransTemplateReq::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void ModifyTransTemplateReq::unsettemplateId()
{
    templateIdIsSet_ = false;
}

std::string ModifyTransTemplateReq::getTemplateName() const
{
    return templateName_;
}

void ModifyTransTemplateReq::setTemplateName(const std::string& value)
{
    templateName_ = value;
    templateNameIsSet_ = true;
}

bool ModifyTransTemplateReq::templateNameIsSet() const
{
    return templateNameIsSet_;
}

void ModifyTransTemplateReq::unsettemplateName()
{
    templateNameIsSet_ = false;
}

Video ModifyTransTemplateReq::getVideo() const
{
    return video_;
}

void ModifyTransTemplateReq::setVideo(const Video& value)
{
    video_ = value;
    videoIsSet_ = true;
}

bool ModifyTransTemplateReq::videoIsSet() const
{
    return videoIsSet_;
}

void ModifyTransTemplateReq::unsetvideo()
{
    videoIsSet_ = false;
}

Audio ModifyTransTemplateReq::getAudio() const
{
    return audio_;
}

void ModifyTransTemplateReq::setAudio(const Audio& value)
{
    audio_ = value;
    audioIsSet_ = true;
}

bool ModifyTransTemplateReq::audioIsSet() const
{
    return audioIsSet_;
}

void ModifyTransTemplateReq::unsetaudio()
{
    audioIsSet_ = false;
}

Common ModifyTransTemplateReq::getCommon() const
{
    return common_;
}

void ModifyTransTemplateReq::setCommon(const Common& value)
{
    common_ = value;
    commonIsSet_ = true;
}

bool ModifyTransTemplateReq::commonIsSet() const
{
    return commonIsSet_;
}

void ModifyTransTemplateReq::unsetcommon()
{
    commonIsSet_ = false;
}

}
}
}
}
}


