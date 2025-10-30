

#include "huaweicloud/live/v1/model/WatermarkTemplate.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




WatermarkTemplate::WatermarkTemplate()
{
    name_ = "";
    nameIsSet_ = false;
    type_ = 0;
    typeIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    pictureUrl_ = "";
    pictureUrlIsSet_ = false;
    width_ = 0.0;
    widthIsSet_ = false;
    height_ = 0.0;
    heightIsSet_ = false;
    locationIsSet_ = false;
    textIsSet_ = false;
    scene_ = "";
    sceneIsSet_ = false;
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
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(pictureUrlIsSet_) {
        val[utility::conversions::to_string_t("picture_url")] = ModelBase::toJson(pictureUrl_);
    }
    if(widthIsSet_) {
        val[utility::conversions::to_string_t("width")] = ModelBase::toJson(width_);
    }
    if(heightIsSet_) {
        val[utility::conversions::to_string_t("height")] = ModelBase::toJson(height_);
    }
    if(locationIsSet_) {
        val[utility::conversions::to_string_t("location")] = ModelBase::toJson(location_);
    }
    if(textIsSet_) {
        val[utility::conversions::to_string_t("text")] = ModelBase::toJson(text_);
    }
    if(sceneIsSet_) {
        val[utility::conversions::to_string_t("scene")] = ModelBase::toJson(scene_);
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("picture_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("picture_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPictureUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("width"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("width"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWidth(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("height"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("height"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHeight(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("location"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("location"));
        if(!fieldValue.is_null())
        {
            WatermarkLocation refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLocation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("text"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("text"));
        if(!fieldValue.is_null())
        {
            WordWaterMarkInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setText(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("scene"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scene"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScene(refVal);
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

int32_t WatermarkTemplate::getType() const
{
    return type_;
}

void WatermarkTemplate::setType(int32_t value)
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

std::string WatermarkTemplate::getDescription() const
{
    return description_;
}

void WatermarkTemplate::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool WatermarkTemplate::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void WatermarkTemplate::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string WatermarkTemplate::getPictureUrl() const
{
    return pictureUrl_;
}

void WatermarkTemplate::setPictureUrl(const std::string& value)
{
    pictureUrl_ = value;
    pictureUrlIsSet_ = true;
}

bool WatermarkTemplate::pictureUrlIsSet() const
{
    return pictureUrlIsSet_;
}

void WatermarkTemplate::unsetpictureUrl()
{
    pictureUrlIsSet_ = false;
}

double WatermarkTemplate::getWidth() const
{
    return width_;
}

void WatermarkTemplate::setWidth(double value)
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

double WatermarkTemplate::getHeight() const
{
    return height_;
}

void WatermarkTemplate::setHeight(double value)
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

WatermarkLocation WatermarkTemplate::getLocation() const
{
    return location_;
}

void WatermarkTemplate::setLocation(const WatermarkLocation& value)
{
    location_ = value;
    locationIsSet_ = true;
}

bool WatermarkTemplate::locationIsSet() const
{
    return locationIsSet_;
}

void WatermarkTemplate::unsetlocation()
{
    locationIsSet_ = false;
}

WordWaterMarkInfo WatermarkTemplate::getText() const
{
    return text_;
}

void WatermarkTemplate::setText(const WordWaterMarkInfo& value)
{
    text_ = value;
    textIsSet_ = true;
}

bool WatermarkTemplate::textIsSet() const
{
    return textIsSet_;
}

void WatermarkTemplate::unsettext()
{
    textIsSet_ = false;
}

std::string WatermarkTemplate::getScene() const
{
    return scene_;
}

void WatermarkTemplate::setScene(const std::string& value)
{
    scene_ = value;
    sceneIsSet_ = true;
}

bool WatermarkTemplate::sceneIsSet() const
{
    return sceneIsSet_;
}

void WatermarkTemplate::unsetscene()
{
    sceneIsSet_ = false;
}

}
}
}
}
}


