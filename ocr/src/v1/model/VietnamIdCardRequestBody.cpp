

#include "huaweicloud/ocr/v1/model/VietnamIdCardRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




VietnamIdCardRequestBody::VietnamIdCardRequestBody()
{
    image_ = "";
    imageIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
    side_ = "";
    sideIsSet_ = false;
    returnPortraitImage_ = false;
    returnPortraitImageIsSet_ = false;
    returnPortraitLocation_ = false;
    returnPortraitLocationIsSet_ = false;
    returnIdcardType_ = false;
    returnIdcardTypeIsSet_ = false;
    returnTextLocation_ = false;
    returnTextLocationIsSet_ = false;
}

VietnamIdCardRequestBody::~VietnamIdCardRequestBody() = default;

void VietnamIdCardRequestBody::validate()
{
}

web::json::value VietnamIdCardRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(imageIsSet_) {
        val[utility::conversions::to_string_t("image")] = ModelBase::toJson(image_);
    }
    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }
    if(sideIsSet_) {
        val[utility::conversions::to_string_t("side")] = ModelBase::toJson(side_);
    }
    if(returnPortraitImageIsSet_) {
        val[utility::conversions::to_string_t("return_portrait_image")] = ModelBase::toJson(returnPortraitImage_);
    }
    if(returnPortraitLocationIsSet_) {
        val[utility::conversions::to_string_t("return_portrait_location")] = ModelBase::toJson(returnPortraitLocation_);
    }
    if(returnIdcardTypeIsSet_) {
        val[utility::conversions::to_string_t("return_idcard_type")] = ModelBase::toJson(returnIdcardType_);
    }
    if(returnTextLocationIsSet_) {
        val[utility::conversions::to_string_t("return_text_location")] = ModelBase::toJson(returnTextLocation_);
    }

    return val;
}

bool VietnamIdCardRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("side"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("side"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSide(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("return_idcard_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("return_idcard_type"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReturnIdcardType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("return_text_location"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("return_text_location"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReturnTextLocation(refVal);
        }
    }
    return ok;
}

std::string VietnamIdCardRequestBody::getImage() const
{
    return image_;
}

void VietnamIdCardRequestBody::setImage(const std::string& value)
{
    image_ = value;
    imageIsSet_ = true;
}

bool VietnamIdCardRequestBody::imageIsSet() const
{
    return imageIsSet_;
}

void VietnamIdCardRequestBody::unsetimage()
{
    imageIsSet_ = false;
}

std::string VietnamIdCardRequestBody::getUrl() const
{
    return url_;
}

void VietnamIdCardRequestBody::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool VietnamIdCardRequestBody::urlIsSet() const
{
    return urlIsSet_;
}

void VietnamIdCardRequestBody::unseturl()
{
    urlIsSet_ = false;
}

std::string VietnamIdCardRequestBody::getSide() const
{
    return side_;
}

void VietnamIdCardRequestBody::setSide(const std::string& value)
{
    side_ = value;
    sideIsSet_ = true;
}

bool VietnamIdCardRequestBody::sideIsSet() const
{
    return sideIsSet_;
}

void VietnamIdCardRequestBody::unsetside()
{
    sideIsSet_ = false;
}

bool VietnamIdCardRequestBody::isReturnPortraitImage() const
{
    return returnPortraitImage_;
}

void VietnamIdCardRequestBody::setReturnPortraitImage(bool value)
{
    returnPortraitImage_ = value;
    returnPortraitImageIsSet_ = true;
}

bool VietnamIdCardRequestBody::returnPortraitImageIsSet() const
{
    return returnPortraitImageIsSet_;
}

void VietnamIdCardRequestBody::unsetreturnPortraitImage()
{
    returnPortraitImageIsSet_ = false;
}

bool VietnamIdCardRequestBody::isReturnPortraitLocation() const
{
    return returnPortraitLocation_;
}

void VietnamIdCardRequestBody::setReturnPortraitLocation(bool value)
{
    returnPortraitLocation_ = value;
    returnPortraitLocationIsSet_ = true;
}

bool VietnamIdCardRequestBody::returnPortraitLocationIsSet() const
{
    return returnPortraitLocationIsSet_;
}

void VietnamIdCardRequestBody::unsetreturnPortraitLocation()
{
    returnPortraitLocationIsSet_ = false;
}

bool VietnamIdCardRequestBody::isReturnIdcardType() const
{
    return returnIdcardType_;
}

void VietnamIdCardRequestBody::setReturnIdcardType(bool value)
{
    returnIdcardType_ = value;
    returnIdcardTypeIsSet_ = true;
}

bool VietnamIdCardRequestBody::returnIdcardTypeIsSet() const
{
    return returnIdcardTypeIsSet_;
}

void VietnamIdCardRequestBody::unsetreturnIdcardType()
{
    returnIdcardTypeIsSet_ = false;
}

bool VietnamIdCardRequestBody::isReturnTextLocation() const
{
    return returnTextLocation_;
}

void VietnamIdCardRequestBody::setReturnTextLocation(bool value)
{
    returnTextLocation_ = value;
    returnTextLocationIsSet_ = true;
}

bool VietnamIdCardRequestBody::returnTextLocationIsSet() const
{
    return returnTextLocationIsSet_;
}

void VietnamIdCardRequestBody::unsetreturnTextLocation()
{
    returnTextLocationIsSet_ = false;
}

}
}
}
}
}


