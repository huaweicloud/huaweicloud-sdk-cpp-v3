

#include "huaweicloud/vod/v1/model/WatermarkTemplate.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




WatermarkTemplate::WatermarkTemplate()
{
    name_ = "";
    nameIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    status_ = 0L;
    statusIsSet_ = false;
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
    createTime_ = "";
    createTimeIsSet_ = false;
    imageUrl_ = "";
    imageUrlIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    watermarkType_ = "";
    watermarkTypeIsSet_ = false;
    imageProcess_ = "";
    imageProcessIsSet_ = false;
    timelineStart_ = "";
    timelineStartIsSet_ = false;
    timelineDuration_ = "";
    timelineDurationIsSet_ = false;
}

WatermarkTemplate::~WatermarkTemplate() = default;

void WatermarkTemplate::validate()
{
}

web::json::value WatermarkTemplate::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
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
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(imageUrlIsSet_) {
        val[utility::conversions::to_string_t("image_url")] = ModelBase::toJson(imageUrl_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
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
bool WatermarkTemplate::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("image_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImageUrl(refVal);
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


std::string WatermarkTemplate::getName() const
{
    return name_;
}

void WatermarkTemplate::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool WatermarkTemplate::nameIsSet() const
{
    return nameIsSet_;
}

void WatermarkTemplate::unsetname()
{
    nameIsSet_ = false;
}

std::string WatermarkTemplate::getId() const
{
    return id_;
}

void WatermarkTemplate::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool WatermarkTemplate::idIsSet() const
{
    return idIsSet_;
}

void WatermarkTemplate::unsetid()
{
    idIsSet_ = false;
}

int64_t WatermarkTemplate::getStatus() const
{
    return status_;
}

void WatermarkTemplate::setStatus(int64_t value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool WatermarkTemplate::statusIsSet() const
{
    return statusIsSet_;
}

void WatermarkTemplate::unsetstatus()
{
    statusIsSet_ = false;
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

std::string WatermarkTemplate::getPosition() const
{
    return position_;
}

void WatermarkTemplate::setPosition(const std::string& value)
{
    position_ = value;
    positionIsSet_ = true;
}

bool WatermarkTemplate::positionIsSet() const
{
    return positionIsSet_;
}

void WatermarkTemplate::unsetposition()
{
    positionIsSet_ = false;
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

std::string WatermarkTemplate::getCreateTime() const
{
    return createTime_;
}

void WatermarkTemplate::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool WatermarkTemplate::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void WatermarkTemplate::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string WatermarkTemplate::getImageUrl() const
{
    return imageUrl_;
}

void WatermarkTemplate::setImageUrl(const std::string& value)
{
    imageUrl_ = value;
    imageUrlIsSet_ = true;
}

bool WatermarkTemplate::imageUrlIsSet() const
{
    return imageUrlIsSet_;
}

void WatermarkTemplate::unsetimageUrl()
{
    imageUrlIsSet_ = false;
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

std::string WatermarkTemplate::getWatermarkType() const
{
    return watermarkType_;
}

void WatermarkTemplate::setWatermarkType(const std::string& value)
{
    watermarkType_ = value;
    watermarkTypeIsSet_ = true;
}

bool WatermarkTemplate::watermarkTypeIsSet() const
{
    return watermarkTypeIsSet_;
}

void WatermarkTemplate::unsetwatermarkType()
{
    watermarkTypeIsSet_ = false;
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

}
}
}
}
}


