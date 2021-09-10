

#include "huaweicloud/vod/v1/model/CreateWatermarkTemplateReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




CreateWatermarkTemplateReq::CreateWatermarkTemplateReq()
{
    name_ = "";
    nameIsSet_ = false;
    watermarkType_ = "";
    watermarkTypeIsSet_ = false;
    imageProcess_ = "";
    imageProcessIsSet_ = false;
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
    timelineStart_ = "";
    timelineStartIsSet_ = false;
    timelineDuration_ = "";
    timelineDurationIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    md5_ = "";
    md5IsSet_ = false;
}

CreateWatermarkTemplateReq::~CreateWatermarkTemplateReq() = default;

void CreateWatermarkTemplateReq::validate()
{
}

web::json::value CreateWatermarkTemplateReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(watermarkTypeIsSet_) {
        val[utility::conversions::to_string_t("watermark_type")] = ModelBase::toJson(watermarkType_);
    }
    if(imageProcessIsSet_) {
        val[utility::conversions::to_string_t("image_process")] = ModelBase::toJson(imageProcess_);
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
    if(timelineStartIsSet_) {
        val[utility::conversions::to_string_t("timeline_start")] = ModelBase::toJson(timelineStart_);
    }
    if(timelineDurationIsSet_) {
        val[utility::conversions::to_string_t("timeline_duration")] = ModelBase::toJson(timelineDuration_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(md5IsSet_) {
        val[utility::conversions::to_string_t("md5")] = ModelBase::toJson(md5_);
    }

    return val;
}

bool CreateWatermarkTemplateReq::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("md5"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("md5"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMd5(refVal);
        }
    }
    return ok;
}


std::string CreateWatermarkTemplateReq::getName() const
{
    return name_;
}

void CreateWatermarkTemplateReq::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateWatermarkTemplateReq::nameIsSet() const
{
    return nameIsSet_;
}

void CreateWatermarkTemplateReq::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateWatermarkTemplateReq::getWatermarkType() const
{
    return watermarkType_;
}

void CreateWatermarkTemplateReq::setWatermarkType(const std::string& value)
{
    watermarkType_ = value;
    watermarkTypeIsSet_ = true;
}

bool CreateWatermarkTemplateReq::watermarkTypeIsSet() const
{
    return watermarkTypeIsSet_;
}

void CreateWatermarkTemplateReq::unsetwatermarkType()
{
    watermarkTypeIsSet_ = false;
}

std::string CreateWatermarkTemplateReq::getImageProcess() const
{
    return imageProcess_;
}

void CreateWatermarkTemplateReq::setImageProcess(const std::string& value)
{
    imageProcess_ = value;
    imageProcessIsSet_ = true;
}

bool CreateWatermarkTemplateReq::imageProcessIsSet() const
{
    return imageProcessIsSet_;
}

void CreateWatermarkTemplateReq::unsetimageProcess()
{
    imageProcessIsSet_ = false;
}

std::string CreateWatermarkTemplateReq::getDx() const
{
    return dx_;
}

void CreateWatermarkTemplateReq::setDx(const std::string& value)
{
    dx_ = value;
    dxIsSet_ = true;
}

bool CreateWatermarkTemplateReq::dxIsSet() const
{
    return dxIsSet_;
}

void CreateWatermarkTemplateReq::unsetdx()
{
    dxIsSet_ = false;
}

std::string CreateWatermarkTemplateReq::getDy() const
{
    return dy_;
}

void CreateWatermarkTemplateReq::setDy(const std::string& value)
{
    dy_ = value;
    dyIsSet_ = true;
}

bool CreateWatermarkTemplateReq::dyIsSet() const
{
    return dyIsSet_;
}

void CreateWatermarkTemplateReq::unsetdy()
{
    dyIsSet_ = false;
}

std::string CreateWatermarkTemplateReq::getPosition() const
{
    return position_;
}

void CreateWatermarkTemplateReq::setPosition(const std::string& value)
{
    position_ = value;
    positionIsSet_ = true;
}

bool CreateWatermarkTemplateReq::positionIsSet() const
{
    return positionIsSet_;
}

void CreateWatermarkTemplateReq::unsetposition()
{
    positionIsSet_ = false;
}

std::string CreateWatermarkTemplateReq::getWidth() const
{
    return width_;
}

void CreateWatermarkTemplateReq::setWidth(const std::string& value)
{
    width_ = value;
    widthIsSet_ = true;
}

bool CreateWatermarkTemplateReq::widthIsSet() const
{
    return widthIsSet_;
}

void CreateWatermarkTemplateReq::unsetwidth()
{
    widthIsSet_ = false;
}

std::string CreateWatermarkTemplateReq::getHeight() const
{
    return height_;
}

void CreateWatermarkTemplateReq::setHeight(const std::string& value)
{
    height_ = value;
    heightIsSet_ = true;
}

bool CreateWatermarkTemplateReq::heightIsSet() const
{
    return heightIsSet_;
}

void CreateWatermarkTemplateReq::unsetheight()
{
    heightIsSet_ = false;
}

std::string CreateWatermarkTemplateReq::getTimelineStart() const
{
    return timelineStart_;
}

void CreateWatermarkTemplateReq::setTimelineStart(const std::string& value)
{
    timelineStart_ = value;
    timelineStartIsSet_ = true;
}

bool CreateWatermarkTemplateReq::timelineStartIsSet() const
{
    return timelineStartIsSet_;
}

void CreateWatermarkTemplateReq::unsettimelineStart()
{
    timelineStartIsSet_ = false;
}

std::string CreateWatermarkTemplateReq::getTimelineDuration() const
{
    return timelineDuration_;
}

void CreateWatermarkTemplateReq::setTimelineDuration(const std::string& value)
{
    timelineDuration_ = value;
    timelineDurationIsSet_ = true;
}

bool CreateWatermarkTemplateReq::timelineDurationIsSet() const
{
    return timelineDurationIsSet_;
}

void CreateWatermarkTemplateReq::unsettimelineDuration()
{
    timelineDurationIsSet_ = false;
}

std::string CreateWatermarkTemplateReq::getType() const
{
    return type_;
}

void CreateWatermarkTemplateReq::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool CreateWatermarkTemplateReq::typeIsSet() const
{
    return typeIsSet_;
}

void CreateWatermarkTemplateReq::unsettype()
{
    typeIsSet_ = false;
}

std::string CreateWatermarkTemplateReq::getMd5() const
{
    return md5_;
}

void CreateWatermarkTemplateReq::setMd5(const std::string& value)
{
    md5_ = value;
    md5IsSet_ = true;
}

bool CreateWatermarkTemplateReq::md5IsSet() const
{
    return md5IsSet_;
}

void CreateWatermarkTemplateReq::unsetmd5()
{
    md5IsSet_ = false;
}

}
}
}
}
}


