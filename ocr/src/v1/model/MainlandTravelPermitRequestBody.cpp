

#include "huaweicloud/ocr/v1/model/MainlandTravelPermitRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




MainlandTravelPermitRequestBody::MainlandTravelPermitRequestBody()
{
    image_ = "";
    imageIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
    returnPortraitImage_ = false;
    returnPortraitImageIsSet_ = false;
    returnPortraitLocation_ = false;
    returnPortraitLocationIsSet_ = false;
}

MainlandTravelPermitRequestBody::~MainlandTravelPermitRequestBody() = default;

void MainlandTravelPermitRequestBody::validate()
{
}

web::json::value MainlandTravelPermitRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(imageIsSet_) {
        val[utility::conversions::to_string_t("image")] = ModelBase::toJson(image_);
    }
    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }
    if(returnPortraitImageIsSet_) {
        val[utility::conversions::to_string_t("return_portrait_image")] = ModelBase::toJson(returnPortraitImage_);
    }
    if(returnPortraitLocationIsSet_) {
        val[utility::conversions::to_string_t("return_portrait_location")] = ModelBase::toJson(returnPortraitLocation_);
    }

    return val;
}

bool MainlandTravelPermitRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("image"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("image"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("return_portrait_image"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("return_portrait_image"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReturnPortraitImage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("return_portrait_location"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("return_portrait_location"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReturnPortraitLocation(refVal);
        }
    }
    return ok;
}


std::string MainlandTravelPermitRequestBody::getImage() const
{
    return image_;
}

void MainlandTravelPermitRequestBody::setImage(const std::string& value)
{
    image_ = value;
    imageIsSet_ = true;
}

bool MainlandTravelPermitRequestBody::imageIsSet() const
{
    return imageIsSet_;
}

void MainlandTravelPermitRequestBody::unsetimage()
{
    imageIsSet_ = false;
}

std::string MainlandTravelPermitRequestBody::getUrl() const
{
    return url_;
}

void MainlandTravelPermitRequestBody::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool MainlandTravelPermitRequestBody::urlIsSet() const
{
    return urlIsSet_;
}

void MainlandTravelPermitRequestBody::unseturl()
{
    urlIsSet_ = false;
}

bool MainlandTravelPermitRequestBody::isReturnPortraitImage() const
{
    return returnPortraitImage_;
}

void MainlandTravelPermitRequestBody::setReturnPortraitImage(bool value)
{
    returnPortraitImage_ = value;
    returnPortraitImageIsSet_ = true;
}

bool MainlandTravelPermitRequestBody::returnPortraitImageIsSet() const
{
    return returnPortraitImageIsSet_;
}

void MainlandTravelPermitRequestBody::unsetreturnPortraitImage()
{
    returnPortraitImageIsSet_ = false;
}

bool MainlandTravelPermitRequestBody::isReturnPortraitLocation() const
{
    return returnPortraitLocation_;
}

void MainlandTravelPermitRequestBody::setReturnPortraitLocation(bool value)
{
    returnPortraitLocation_ = value;
    returnPortraitLocationIsSet_ = true;
}

bool MainlandTravelPermitRequestBody::returnPortraitLocationIsSet() const
{
    return returnPortraitLocationIsSet_;
}

void MainlandTravelPermitRequestBody::unsetreturnPortraitLocation()
{
    returnPortraitLocationIsSet_ = false;
}

}
}
}
}
}


