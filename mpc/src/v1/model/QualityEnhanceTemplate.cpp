

#include "huaweicloud/mpc/v1/model/QualityEnhanceTemplate.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




QualityEnhanceTemplate::QualityEnhanceTemplate()
{
    templateName_ = "";
    templateNameIsSet_ = false;
    templateDescription_ = "";
    templateDescriptionIsSet_ = false;
    videoIsSet_ = false;
}

QualityEnhanceTemplate::~QualityEnhanceTemplate() = default;

void QualityEnhanceTemplate::validate()
{
}

web::json::value QualityEnhanceTemplate::toJson() const
{
    web::json::value val = web::json::value::object();

    if(templateNameIsSet_) {
        val[utility::conversions::to_string_t("template_name")] = ModelBase::toJson(templateName_);
    }
    if(templateDescriptionIsSet_) {
        val[utility::conversions::to_string_t("template_description")] = ModelBase::toJson(templateDescription_);
    }
    if(videoIsSet_) {
        val[utility::conversions::to_string_t("video")] = ModelBase::toJson(video_);
    }

    return val;
}

bool QualityEnhanceTemplate::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("template_description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTemplateDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("video"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("video"));
        if(!fieldValue.is_null())
        {
            QualityEnhanceVideo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVideo(refVal);
        }
    }
    return ok;
}

std::string QualityEnhanceTemplate::getTemplateName() const
{
    return templateName_;
}

void QualityEnhanceTemplate::setTemplateName(const std::string& value)
{
    templateName_ = value;
    templateNameIsSet_ = true;
}

bool QualityEnhanceTemplate::templateNameIsSet() const
{
    return templateNameIsSet_;
}

void QualityEnhanceTemplate::unsettemplateName()
{
    templateNameIsSet_ = false;
}

std::string QualityEnhanceTemplate::getTemplateDescription() const
{
    return templateDescription_;
}

void QualityEnhanceTemplate::setTemplateDescription(const std::string& value)
{
    templateDescription_ = value;
    templateDescriptionIsSet_ = true;
}

bool QualityEnhanceTemplate::templateDescriptionIsSet() const
{
    return templateDescriptionIsSet_;
}

void QualityEnhanceTemplate::unsettemplateDescription()
{
    templateDescriptionIsSet_ = false;
}

QualityEnhanceVideo QualityEnhanceTemplate::getVideo() const
{
    return video_;
}

void QualityEnhanceTemplate::setVideo(const QualityEnhanceVideo& value)
{
    video_ = value;
    videoIsSet_ = true;
}

bool QualityEnhanceTemplate::videoIsSet() const
{
    return videoIsSet_;
}

void QualityEnhanceTemplate::unsetvideo()
{
    videoIsSet_ = false;
}

}
}
}
}
}


