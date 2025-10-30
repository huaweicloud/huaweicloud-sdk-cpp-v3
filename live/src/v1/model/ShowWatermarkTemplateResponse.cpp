

#include "huaweicloud/live/v1/model/ShowWatermarkTemplateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




ShowWatermarkTemplateResponse::ShowWatermarkTemplateResponse()
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
    xRequestId_ = "";
    xRequestIdIsSet_ = false;
}

ShowWatermarkTemplateResponse::~ShowWatermarkTemplateResponse() = default;

void ShowWatermarkTemplateResponse::validate()
{
}

web::json::value ShowWatermarkTemplateResponse::toJson() const
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
    if(xRequestIdIsSet_) {
        val[utility::conversions::to_string_t("X-request-id")] = ModelBase::toJson(xRequestId_);
    }

    return val;
}
bool ShowWatermarkTemplateResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("X-request-id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-request-id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXRequestId(refVal);
        }
    }
    return ok;
}


std::string ShowWatermarkTemplateResponse::getName() const
{
    return name_;
}

void ShowWatermarkTemplateResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowWatermarkTemplateResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ShowWatermarkTemplateResponse::unsetname()
{
    nameIsSet_ = false;
}

int32_t ShowWatermarkTemplateResponse::getType() const
{
    return type_;
}

void ShowWatermarkTemplateResponse::setType(int32_t value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ShowWatermarkTemplateResponse::typeIsSet() const
{
    return typeIsSet_;
}

void ShowWatermarkTemplateResponse::unsettype()
{
    typeIsSet_ = false;
}

std::string ShowWatermarkTemplateResponse::getDescription() const
{
    return description_;
}

void ShowWatermarkTemplateResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ShowWatermarkTemplateResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ShowWatermarkTemplateResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ShowWatermarkTemplateResponse::getPictureUrl() const
{
    return pictureUrl_;
}

void ShowWatermarkTemplateResponse::setPictureUrl(const std::string& value)
{
    pictureUrl_ = value;
    pictureUrlIsSet_ = true;
}

bool ShowWatermarkTemplateResponse::pictureUrlIsSet() const
{
    return pictureUrlIsSet_;
}

void ShowWatermarkTemplateResponse::unsetpictureUrl()
{
    pictureUrlIsSet_ = false;
}

double ShowWatermarkTemplateResponse::getWidth() const
{
    return width_;
}

void ShowWatermarkTemplateResponse::setWidth(double value)
{
    width_ = value;
    widthIsSet_ = true;
}

bool ShowWatermarkTemplateResponse::widthIsSet() const
{
    return widthIsSet_;
}

void ShowWatermarkTemplateResponse::unsetwidth()
{
    widthIsSet_ = false;
}

double ShowWatermarkTemplateResponse::getHeight() const
{
    return height_;
}

void ShowWatermarkTemplateResponse::setHeight(double value)
{
    height_ = value;
    heightIsSet_ = true;
}

bool ShowWatermarkTemplateResponse::heightIsSet() const
{
    return heightIsSet_;
}

void ShowWatermarkTemplateResponse::unsetheight()
{
    heightIsSet_ = false;
}

WatermarkLocation ShowWatermarkTemplateResponse::getLocation() const
{
    return location_;
}

void ShowWatermarkTemplateResponse::setLocation(const WatermarkLocation& value)
{
    location_ = value;
    locationIsSet_ = true;
}

bool ShowWatermarkTemplateResponse::locationIsSet() const
{
    return locationIsSet_;
}

void ShowWatermarkTemplateResponse::unsetlocation()
{
    locationIsSet_ = false;
}

WordWaterMarkInfo ShowWatermarkTemplateResponse::getText() const
{
    return text_;
}

void ShowWatermarkTemplateResponse::setText(const WordWaterMarkInfo& value)
{
    text_ = value;
    textIsSet_ = true;
}

bool ShowWatermarkTemplateResponse::textIsSet() const
{
    return textIsSet_;
}

void ShowWatermarkTemplateResponse::unsettext()
{
    textIsSet_ = false;
}

std::string ShowWatermarkTemplateResponse::getScene() const
{
    return scene_;
}

void ShowWatermarkTemplateResponse::setScene(const std::string& value)
{
    scene_ = value;
    sceneIsSet_ = true;
}

bool ShowWatermarkTemplateResponse::sceneIsSet() const
{
    return sceneIsSet_;
}

void ShowWatermarkTemplateResponse::unsetscene()
{
    sceneIsSet_ = false;
}

std::string ShowWatermarkTemplateResponse::getXRequestId() const
{
    return xRequestId_;
}

void ShowWatermarkTemplateResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool ShowWatermarkTemplateResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void ShowWatermarkTemplateResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


