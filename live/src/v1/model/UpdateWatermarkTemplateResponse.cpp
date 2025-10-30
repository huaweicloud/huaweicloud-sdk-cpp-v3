

#include "huaweicloud/live/v1/model/UpdateWatermarkTemplateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




UpdateWatermarkTemplateResponse::UpdateWatermarkTemplateResponse()
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

UpdateWatermarkTemplateResponse::~UpdateWatermarkTemplateResponse() = default;

void UpdateWatermarkTemplateResponse::validate()
{
}

web::json::value UpdateWatermarkTemplateResponse::toJson() const
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
bool UpdateWatermarkTemplateResponse::fromJson(const web::json::value& val)
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


std::string UpdateWatermarkTemplateResponse::getName() const
{
    return name_;
}

void UpdateWatermarkTemplateResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateWatermarkTemplateResponse::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateWatermarkTemplateResponse::unsetname()
{
    nameIsSet_ = false;
}

int32_t UpdateWatermarkTemplateResponse::getType() const
{
    return type_;
}

void UpdateWatermarkTemplateResponse::setType(int32_t value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool UpdateWatermarkTemplateResponse::typeIsSet() const
{
    return typeIsSet_;
}

void UpdateWatermarkTemplateResponse::unsettype()
{
    typeIsSet_ = false;
}

std::string UpdateWatermarkTemplateResponse::getDescription() const
{
    return description_;
}

void UpdateWatermarkTemplateResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool UpdateWatermarkTemplateResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void UpdateWatermarkTemplateResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string UpdateWatermarkTemplateResponse::getPictureUrl() const
{
    return pictureUrl_;
}

void UpdateWatermarkTemplateResponse::setPictureUrl(const std::string& value)
{
    pictureUrl_ = value;
    pictureUrlIsSet_ = true;
}

bool UpdateWatermarkTemplateResponse::pictureUrlIsSet() const
{
    return pictureUrlIsSet_;
}

void UpdateWatermarkTemplateResponse::unsetpictureUrl()
{
    pictureUrlIsSet_ = false;
}

double UpdateWatermarkTemplateResponse::getWidth() const
{
    return width_;
}

void UpdateWatermarkTemplateResponse::setWidth(double value)
{
    width_ = value;
    widthIsSet_ = true;
}

bool UpdateWatermarkTemplateResponse::widthIsSet() const
{
    return widthIsSet_;
}

void UpdateWatermarkTemplateResponse::unsetwidth()
{
    widthIsSet_ = false;
}

double UpdateWatermarkTemplateResponse::getHeight() const
{
    return height_;
}

void UpdateWatermarkTemplateResponse::setHeight(double value)
{
    height_ = value;
    heightIsSet_ = true;
}

bool UpdateWatermarkTemplateResponse::heightIsSet() const
{
    return heightIsSet_;
}

void UpdateWatermarkTemplateResponse::unsetheight()
{
    heightIsSet_ = false;
}

WatermarkLocation UpdateWatermarkTemplateResponse::getLocation() const
{
    return location_;
}

void UpdateWatermarkTemplateResponse::setLocation(const WatermarkLocation& value)
{
    location_ = value;
    locationIsSet_ = true;
}

bool UpdateWatermarkTemplateResponse::locationIsSet() const
{
    return locationIsSet_;
}

void UpdateWatermarkTemplateResponse::unsetlocation()
{
    locationIsSet_ = false;
}

WordWaterMarkInfo UpdateWatermarkTemplateResponse::getText() const
{
    return text_;
}

void UpdateWatermarkTemplateResponse::setText(const WordWaterMarkInfo& value)
{
    text_ = value;
    textIsSet_ = true;
}

bool UpdateWatermarkTemplateResponse::textIsSet() const
{
    return textIsSet_;
}

void UpdateWatermarkTemplateResponse::unsettext()
{
    textIsSet_ = false;
}

std::string UpdateWatermarkTemplateResponse::getScene() const
{
    return scene_;
}

void UpdateWatermarkTemplateResponse::setScene(const std::string& value)
{
    scene_ = value;
    sceneIsSet_ = true;
}

bool UpdateWatermarkTemplateResponse::sceneIsSet() const
{
    return sceneIsSet_;
}

void UpdateWatermarkTemplateResponse::unsetscene()
{
    sceneIsSet_ = false;
}

std::string UpdateWatermarkTemplateResponse::getXRequestId() const
{
    return xRequestId_;
}

void UpdateWatermarkTemplateResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool UpdateWatermarkTemplateResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void UpdateWatermarkTemplateResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


