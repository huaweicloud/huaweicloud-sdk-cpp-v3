

#include "huaweicloud/live/v1/model/CreateWatermarkTemplateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V1 {
namespace Model {




CreateWatermarkTemplateResponse::CreateWatermarkTemplateResponse()
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

CreateWatermarkTemplateResponse::~CreateWatermarkTemplateResponse() = default;

void CreateWatermarkTemplateResponse::validate()
{
}

web::json::value CreateWatermarkTemplateResponse::toJson() const
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
bool CreateWatermarkTemplateResponse::fromJson(const web::json::value& val)
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


std::string CreateWatermarkTemplateResponse::getName() const
{
    return name_;
}

void CreateWatermarkTemplateResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateWatermarkTemplateResponse::nameIsSet() const
{
    return nameIsSet_;
}

void CreateWatermarkTemplateResponse::unsetname()
{
    nameIsSet_ = false;
}

int32_t CreateWatermarkTemplateResponse::getType() const
{
    return type_;
}

void CreateWatermarkTemplateResponse::setType(int32_t value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool CreateWatermarkTemplateResponse::typeIsSet() const
{
    return typeIsSet_;
}

void CreateWatermarkTemplateResponse::unsettype()
{
    typeIsSet_ = false;
}

std::string CreateWatermarkTemplateResponse::getDescription() const
{
    return description_;
}

void CreateWatermarkTemplateResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CreateWatermarkTemplateResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CreateWatermarkTemplateResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string CreateWatermarkTemplateResponse::getPictureUrl() const
{
    return pictureUrl_;
}

void CreateWatermarkTemplateResponse::setPictureUrl(const std::string& value)
{
    pictureUrl_ = value;
    pictureUrlIsSet_ = true;
}

bool CreateWatermarkTemplateResponse::pictureUrlIsSet() const
{
    return pictureUrlIsSet_;
}

void CreateWatermarkTemplateResponse::unsetpictureUrl()
{
    pictureUrlIsSet_ = false;
}

double CreateWatermarkTemplateResponse::getWidth() const
{
    return width_;
}

void CreateWatermarkTemplateResponse::setWidth(double value)
{
    width_ = value;
    widthIsSet_ = true;
}

bool CreateWatermarkTemplateResponse::widthIsSet() const
{
    return widthIsSet_;
}

void CreateWatermarkTemplateResponse::unsetwidth()
{
    widthIsSet_ = false;
}

double CreateWatermarkTemplateResponse::getHeight() const
{
    return height_;
}

void CreateWatermarkTemplateResponse::setHeight(double value)
{
    height_ = value;
    heightIsSet_ = true;
}

bool CreateWatermarkTemplateResponse::heightIsSet() const
{
    return heightIsSet_;
}

void CreateWatermarkTemplateResponse::unsetheight()
{
    heightIsSet_ = false;
}

WatermarkLocation CreateWatermarkTemplateResponse::getLocation() const
{
    return location_;
}

void CreateWatermarkTemplateResponse::setLocation(const WatermarkLocation& value)
{
    location_ = value;
    locationIsSet_ = true;
}

bool CreateWatermarkTemplateResponse::locationIsSet() const
{
    return locationIsSet_;
}

void CreateWatermarkTemplateResponse::unsetlocation()
{
    locationIsSet_ = false;
}

WordWaterMarkInfo CreateWatermarkTemplateResponse::getText() const
{
    return text_;
}

void CreateWatermarkTemplateResponse::setText(const WordWaterMarkInfo& value)
{
    text_ = value;
    textIsSet_ = true;
}

bool CreateWatermarkTemplateResponse::textIsSet() const
{
    return textIsSet_;
}

void CreateWatermarkTemplateResponse::unsettext()
{
    textIsSet_ = false;
}

std::string CreateWatermarkTemplateResponse::getScene() const
{
    return scene_;
}

void CreateWatermarkTemplateResponse::setScene(const std::string& value)
{
    scene_ = value;
    sceneIsSet_ = true;
}

bool CreateWatermarkTemplateResponse::sceneIsSet() const
{
    return sceneIsSet_;
}

void CreateWatermarkTemplateResponse::unsetscene()
{
    sceneIsSet_ = false;
}

std::string CreateWatermarkTemplateResponse::getXRequestId() const
{
    return xRequestId_;
}

void CreateWatermarkTemplateResponse::setXRequestId(const std::string& value)
{
    xRequestId_ = value;
    xRequestIdIsSet_ = true;
}

bool CreateWatermarkTemplateResponse::xRequestIdIsSet() const
{
    return xRequestIdIsSet_;
}

void CreateWatermarkTemplateResponse::unsetxRequestId()
{
    xRequestIdIsSet_ = false;
}

}
}
}
}
}


