

#include "huaweicloud/ocr/v1/model/BusinessCardRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




BusinessCardRequestBody::BusinessCardRequestBody()
{
    image_ = "";
    imageIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
    detectDirection_ = false;
    detectDirectionIsSet_ = false;
    returnAdjustedImage_ = false;
    returnAdjustedImageIsSet_ = false;
}

BusinessCardRequestBody::~BusinessCardRequestBody() = default;

void BusinessCardRequestBody::validate()
{
}

web::json::value BusinessCardRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(imageIsSet_) {
        val[utility::conversions::to_string_t("image")] = ModelBase::toJson(image_);
    }
    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }
    if(detectDirectionIsSet_) {
        val[utility::conversions::to_string_t("detect_direction")] = ModelBase::toJson(detectDirection_);
    }
    if(returnAdjustedImageIsSet_) {
        val[utility::conversions::to_string_t("return_adjusted_image")] = ModelBase::toJson(returnAdjustedImage_);
    }

    return val;
}
bool BusinessCardRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("detect_direction"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("detect_direction"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDetectDirection(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("return_adjusted_image"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("return_adjusted_image"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReturnAdjustedImage(refVal);
        }
    }
    return ok;
}


std::string BusinessCardRequestBody::getImage() const
{
    return image_;
}

void BusinessCardRequestBody::setImage(const std::string& value)
{
    image_ = value;
    imageIsSet_ = true;
}

bool BusinessCardRequestBody::imageIsSet() const
{
    return imageIsSet_;
}

void BusinessCardRequestBody::unsetimage()
{
    imageIsSet_ = false;
}

std::string BusinessCardRequestBody::getUrl() const
{
    return url_;
}

void BusinessCardRequestBody::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool BusinessCardRequestBody::urlIsSet() const
{
    return urlIsSet_;
}

void BusinessCardRequestBody::unseturl()
{
    urlIsSet_ = false;
}

bool BusinessCardRequestBody::isDetectDirection() const
{
    return detectDirection_;
}

void BusinessCardRequestBody::setDetectDirection(bool value)
{
    detectDirection_ = value;
    detectDirectionIsSet_ = true;
}

bool BusinessCardRequestBody::detectDirectionIsSet() const
{
    return detectDirectionIsSet_;
}

void BusinessCardRequestBody::unsetdetectDirection()
{
    detectDirectionIsSet_ = false;
}

bool BusinessCardRequestBody::isReturnAdjustedImage() const
{
    return returnAdjustedImage_;
}

void BusinessCardRequestBody::setReturnAdjustedImage(bool value)
{
    returnAdjustedImage_ = value;
    returnAdjustedImageIsSet_ = true;
}

bool BusinessCardRequestBody::returnAdjustedImageIsSet() const
{
    return returnAdjustedImageIsSet_;
}

void BusinessCardRequestBody::unsetreturnAdjustedImage()
{
    returnAdjustedImageIsSet_ = false;
}

}
}
}
}
}


