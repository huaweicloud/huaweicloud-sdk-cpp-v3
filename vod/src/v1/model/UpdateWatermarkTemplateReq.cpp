

#include "huaweicloud/vod/v1/model/UpdateWatermarkTemplateReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




UpdateWatermarkTemplateReq::UpdateWatermarkTemplateReq()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    dx_ = "";
    dxIsSet_ = false;
    dy_ = "";
    dyIsSet_ = false;
    position_ = "";
    positionIsSet_ = false;
    width_ = "";
    widthIsSet_ = false;
    height_ = "";
    heightIsSet_ = false;
    watermarkType_ = "";
    watermarkTypeIsSet_ = false;
    imageProcess_ = "";
    imageProcessIsSet_ = false;
    timelineStart_ = "";
    timelineStartIsSet_ = false;
    timelineDuration_ = "";
    timelineDurationIsSet_ = false;
}

UpdateWatermarkTemplateReq::~UpdateWatermarkTemplateReq() = default;

void UpdateWatermarkTemplateReq::validate()
{
}

web::json::value UpdateWatermarkTemplateReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(dxIsSet_) {
        val[utility::conversions::to_string_t("dx")] = ModelBase::toJson(dx_);
    }
    if(dyIsSet_) {
        val[utility::conversions::to_string_t("dy")] = ModelBase::toJson(dy_);
    }
    if(positionIsSet_) {
        val[utility::conversions::to_string_t("position")] = ModelBase::toJson(position_);
    }
    if(widthIsSet_) {
        val[utility::conversions::to_string_t("width")] = ModelBase::toJson(width_);
    }
    if(heightIsSet_) {
        val[utility::conversions::to_string_t("height")] = ModelBase::toJson(height_);
    }
    if(watermarkTypeIsSet_) {
        val[utility::conversions::to_string_t("watermark_type")] = ModelBase::toJson(watermarkType_);
    }
    if(imageProcessIsSet_) {
        val[utility::conversions::to_string_t("image_process")] = ModelBase::toJson(imageProcess_);
    }
    if(timelineStartIsSet_) {
        val[utility::conversions::to_string_t("timeline_start")] = ModelBase::toJson(timelineStart_);
    }
    if(timelineDurationIsSet_) {
        val[utility::conversions::to_string_t("timeline_duration")] = ModelBase::toJson(timelineDuration_);
    }

    return val;
}

bool UpdateWatermarkTemplateReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t("position"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("position"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPosition(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("watermark_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("watermark_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWatermarkType(refVal);
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
    return ok;
}


std::string UpdateWatermarkTemplateReq::getId() const
{
    return id_;
}

void UpdateWatermarkTemplateReq::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdateWatermarkTemplateReq::idIsSet() const
{
    return idIsSet_;
}

void UpdateWatermarkTemplateReq::unsetid()
{
    idIsSet_ = false;
}

std::string UpdateWatermarkTemplateReq::getName() const
{
    return name_;
}

void UpdateWatermarkTemplateReq::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateWatermarkTemplateReq::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateWatermarkTemplateReq::unsetname()
{
    nameIsSet_ = false;
}

std::string UpdateWatermarkTemplateReq::getDx() const
{
    return dx_;
}

void UpdateWatermarkTemplateReq::setDx(const std::string& value)
{
    dx_ = value;
    dxIsSet_ = true;
}

bool UpdateWatermarkTemplateReq::dxIsSet() const
{
    return dxIsSet_;
}

void UpdateWatermarkTemplateReq::unsetdx()
{
    dxIsSet_ = false;
}

std::string UpdateWatermarkTemplateReq::getDy() const
{
    return dy_;
}

void UpdateWatermarkTemplateReq::setDy(const std::string& value)
{
    dy_ = value;
    dyIsSet_ = true;
}

bool UpdateWatermarkTemplateReq::dyIsSet() const
{
    return dyIsSet_;
}

void UpdateWatermarkTemplateReq::unsetdy()
{
    dyIsSet_ = false;
}

std::string UpdateWatermarkTemplateReq::getPosition() const
{
    return position_;
}

void UpdateWatermarkTemplateReq::setPosition(const std::string& value)
{
    position_ = value;
    positionIsSet_ = true;
}

bool UpdateWatermarkTemplateReq::positionIsSet() const
{
    return positionIsSet_;
}

void UpdateWatermarkTemplateReq::unsetposition()
{
    positionIsSet_ = false;
}

std::string UpdateWatermarkTemplateReq::getWidth() const
{
    return width_;
}

void UpdateWatermarkTemplateReq::setWidth(const std::string& value)
{
    width_ = value;
    widthIsSet_ = true;
}

bool UpdateWatermarkTemplateReq::widthIsSet() const
{
    return widthIsSet_;
}

void UpdateWatermarkTemplateReq::unsetwidth()
{
    widthIsSet_ = false;
}

std::string UpdateWatermarkTemplateReq::getHeight() const
{
    return height_;
}

void UpdateWatermarkTemplateReq::setHeight(const std::string& value)
{
    height_ = value;
    heightIsSet_ = true;
}

bool UpdateWatermarkTemplateReq::heightIsSet() const
{
    return heightIsSet_;
}

void UpdateWatermarkTemplateReq::unsetheight()
{
    heightIsSet_ = false;
}

std::string UpdateWatermarkTemplateReq::getWatermarkType() const
{
    return watermarkType_;
}

void UpdateWatermarkTemplateReq::setWatermarkType(const std::string& value)
{
    watermarkType_ = value;
    watermarkTypeIsSet_ = true;
}

bool UpdateWatermarkTemplateReq::watermarkTypeIsSet() const
{
    return watermarkTypeIsSet_;
}

void UpdateWatermarkTemplateReq::unsetwatermarkType()
{
    watermarkTypeIsSet_ = false;
}

std::string UpdateWatermarkTemplateReq::getImageProcess() const
{
    return imageProcess_;
}

void UpdateWatermarkTemplateReq::setImageProcess(const std::string& value)
{
    imageProcess_ = value;
    imageProcessIsSet_ = true;
}

bool UpdateWatermarkTemplateReq::imageProcessIsSet() const
{
    return imageProcessIsSet_;
}

void UpdateWatermarkTemplateReq::unsetimageProcess()
{
    imageProcessIsSet_ = false;
}

std::string UpdateWatermarkTemplateReq::getTimelineStart() const
{
    return timelineStart_;
}

void UpdateWatermarkTemplateReq::setTimelineStart(const std::string& value)
{
    timelineStart_ = value;
    timelineStartIsSet_ = true;
}

bool UpdateWatermarkTemplateReq::timelineStartIsSet() const
{
    return timelineStartIsSet_;
}

void UpdateWatermarkTemplateReq::unsettimelineStart()
{
    timelineStartIsSet_ = false;
}

std::string UpdateWatermarkTemplateReq::getTimelineDuration() const
{
    return timelineDuration_;
}

void UpdateWatermarkTemplateReq::setTimelineDuration(const std::string& value)
{
    timelineDuration_ = value;
    timelineDurationIsSet_ = true;
}

bool UpdateWatermarkTemplateReq::timelineDurationIsSet() const
{
    return timelineDurationIsSet_;
}

void UpdateWatermarkTemplateReq::unsettimelineDuration()
{
    timelineDurationIsSet_ = false;
}

}
}
}
}
}


