

#include "huaweicloud/mpc/v1/model/WatermarkTemplate.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




WatermarkTemplate::WatermarkTemplate()
{
    dx_ = "";
    dxIsSet_ = false;
    dy_ = "";
    dyIsSet_ = false;
    referpos_ = "";
    referposIsSet_ = false;
    timelineStart_ = "";
    timelineStartIsSet_ = false;
    timelineDuration_ = "";
    timelineDurationIsSet_ = false;
    imageProcess_ = "";
    imageProcessIsSet_ = false;
    width_ = "";
    widthIsSet_ = false;
    height_ = "";
    heightIsSet_ = false;
    base_ = "";
    baseIsSet_ = false;
    templateId_ = 0;
    templateIdIsSet_ = false;
    templateName_ = "";
    templateNameIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
}

WatermarkTemplate::~WatermarkTemplate() = default;

void WatermarkTemplate::validate()
{
}

web::json::value WatermarkTemplate::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dxIsSet_) {
        val[utility::conversions::to_string_t("dx")] = ModelBase::toJson(dx_);
    }
    if(dyIsSet_) {
        val[utility::conversions::to_string_t("dy")] = ModelBase::toJson(dy_);
    }
    if(referposIsSet_) {
        val[utility::conversions::to_string_t("referpos")] = ModelBase::toJson(referpos_);
    }
    if(timelineStartIsSet_) {
        val[utility::conversions::to_string_t("timeline_start")] = ModelBase::toJson(timelineStart_);
    }
    if(timelineDurationIsSet_) {
        val[utility::conversions::to_string_t("timeline_duration")] = ModelBase::toJson(timelineDuration_);
    }
    if(imageProcessIsSet_) {
        val[utility::conversions::to_string_t("image_process")] = ModelBase::toJson(imageProcess_);
    }
    if(widthIsSet_) {
        val[utility::conversions::to_string_t("width")] = ModelBase::toJson(width_);
    }
    if(heightIsSet_) {
        val[utility::conversions::to_string_t("height")] = ModelBase::toJson(height_);
    }
    if(baseIsSet_) {
        val[utility::conversions::to_string_t("base")] = ModelBase::toJson(base_);
    }
    if(templateIdIsSet_) {
        val[utility::conversions::to_string_t("template_id")] = ModelBase::toJson(templateId_);
    }
    if(templateNameIsSet_) {
        val[utility::conversions::to_string_t("template_name")] = ModelBase::toJson(templateName_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }

    return val;
}
bool WatermarkTemplate::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("dx"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dx"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDx(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("referpos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("referpos"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReferpos(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("timeline_start"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("timeline_start"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimelineStart(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("timeline_duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("timeline_duration"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimelineDuration(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("image_process"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_process"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageProcess(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("width"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("width"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWidth(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("height"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("height"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHeight(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("base"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("base"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBase(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("template_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("template_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    return ok;
}


std::string WatermarkTemplate::getDx() const
{
    return dx_;
}

void WatermarkTemplate::setDx(const std::string& value)
{
    dx_ = value;
    dxIsSet_ = true;
}

bool WatermarkTemplate::dxIsSet() const
{
    return dxIsSet_;
}

void WatermarkTemplate::unsetdx()
{
    dxIsSet_ = false;
}

std::string WatermarkTemplate::getDy() const
{
    return dy_;
}

void WatermarkTemplate::setDy(const std::string& value)
{
    dy_ = value;
    dyIsSet_ = true;
}

bool WatermarkTemplate::dyIsSet() const
{
    return dyIsSet_;
}

void WatermarkTemplate::unsetdy()
{
    dyIsSet_ = false;
}

std::string WatermarkTemplate::getReferpos() const
{
    return referpos_;
}

void WatermarkTemplate::setReferpos(const std::string& value)
{
    referpos_ = value;
    referposIsSet_ = true;
}

bool WatermarkTemplate::referposIsSet() const
{
    return referposIsSet_;
}

void WatermarkTemplate::unsetreferpos()
{
    referposIsSet_ = false;
}

std::string WatermarkTemplate::getTimelineStart() const
{
    return timelineStart_;
}

void WatermarkTemplate::setTimelineStart(const std::string& value)
{
    timelineStart_ = value;
    timelineStartIsSet_ = true;
}

bool WatermarkTemplate::timelineStartIsSet() const
{
    return timelineStartIsSet_;
}

void WatermarkTemplate::unsettimelineStart()
{
    timelineStartIsSet_ = false;
}

std::string WatermarkTemplate::getTimelineDuration() const
{
    return timelineDuration_;
}

void WatermarkTemplate::setTimelineDuration(const std::string& value)
{
    timelineDuration_ = value;
    timelineDurationIsSet_ = true;
}

bool WatermarkTemplate::timelineDurationIsSet() const
{
    return timelineDurationIsSet_;
}

void WatermarkTemplate::unsettimelineDuration()
{
    timelineDurationIsSet_ = false;
}

std::string WatermarkTemplate::getImageProcess() const
{
    return imageProcess_;
}

void WatermarkTemplate::setImageProcess(const std::string& value)
{
    imageProcess_ = value;
    imageProcessIsSet_ = true;
}

bool WatermarkTemplate::imageProcessIsSet() const
{
    return imageProcessIsSet_;
}

void WatermarkTemplate::unsetimageProcess()
{
    imageProcessIsSet_ = false;
}

std::string WatermarkTemplate::getWidth() const
{
    return width_;
}

void WatermarkTemplate::setWidth(const std::string& value)
{
    width_ = value;
    widthIsSet_ = true;
}

bool WatermarkTemplate::widthIsSet() const
{
    return widthIsSet_;
}

void WatermarkTemplate::unsetwidth()
{
    widthIsSet_ = false;
}

std::string WatermarkTemplate::getHeight() const
{
    return height_;
}

void WatermarkTemplate::setHeight(const std::string& value)
{
    height_ = value;
    heightIsSet_ = true;
}

bool WatermarkTemplate::heightIsSet() const
{
    return heightIsSet_;
}

void WatermarkTemplate::unsetheight()
{
    heightIsSet_ = false;
}

std::string WatermarkTemplate::getBase() const
{
    return base_;
}

void WatermarkTemplate::setBase(const std::string& value)
{
    base_ = value;
    baseIsSet_ = true;
}

bool WatermarkTemplate::baseIsSet() const
{
    return baseIsSet_;
}

void WatermarkTemplate::unsetbase()
{
    baseIsSet_ = false;
}

int32_t WatermarkTemplate::getTemplateId() const
{
    return templateId_;
}

void WatermarkTemplate::setTemplateId(int32_t value)
{
    templateId_ = value;
    templateIdIsSet_ = true;
}

bool WatermarkTemplate::templateIdIsSet() const
{
    return templateIdIsSet_;
}

void WatermarkTemplate::unsettemplateId()
{
    templateIdIsSet_ = false;
}

std::string WatermarkTemplate::getTemplateName() const
{
    return templateName_;
}

void WatermarkTemplate::setTemplateName(const std::string& value)
{
    templateName_ = value;
    templateNameIsSet_ = true;
}

bool WatermarkTemplate::templateNameIsSet() const
{
    return templateNameIsSet_;
}

void WatermarkTemplate::unsettemplateName()
{
    templateNameIsSet_ = false;
}

std::string WatermarkTemplate::getType() const
{
    return type_;
}

void WatermarkTemplate::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool WatermarkTemplate::typeIsSet() const
{
    return typeIsSet_;
}

void WatermarkTemplate::unsettype()
{
    typeIsSet_ = false;
}

}
}
}
}
}


