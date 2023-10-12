

#include "huaweicloud/ocr/v1/model/CambodianIdCardRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




CambodianIdCardRequestBody::CambodianIdCardRequestBody()
{
    image_ = "";
    imageIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
    returnPortraitImage_ = false;
    returnPortraitImageIsSet_ = false;
    returnPortraitLocation_ = false;
    returnPortraitLocationIsSet_ = false;
    returnIdcardType_ = false;
    returnIdcardTypeIsSet_ = false;
}

CambodianIdCardRequestBody::~CambodianIdCardRequestBody() = default;

void CambodianIdCardRequestBody::validate()
{
}

web::json::value CambodianIdCardRequestBody::toJson() const
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
    if(returnIdcardTypeIsSet_) {
        val[utility::conversions::to_string_t("return_idcard_type")] = ModelBase::toJson(returnIdcardType_);
    }

    return val;
}
bool CambodianIdCardRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("return_idcard_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("return_idcard_type"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReturnIdcardType(refVal);
        }
    }
    return ok;
}


std::string CambodianIdCardRequestBody::getImage() const
{
    return image_;
}

void CambodianIdCardRequestBody::setImage(const std::string& value)
{
    image_ = value;
    imageIsSet_ = true;
}

bool CambodianIdCardRequestBody::imageIsSet() const
{
    return imageIsSet_;
}

void CambodianIdCardRequestBody::unsetimage()
{
    imageIsSet_ = false;
}

std::string CambodianIdCardRequestBody::getUrl() const
{
    return url_;
}

void CambodianIdCardRequestBody::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool CambodianIdCardRequestBody::urlIsSet() const
{
    return urlIsSet_;
}

void CambodianIdCardRequestBody::unseturl()
{
    urlIsSet_ = false;
}

bool CambodianIdCardRequestBody::isReturnPortraitImage() const
{
    return returnPortraitImage_;
}

void CambodianIdCardRequestBody::setReturnPortraitImage(bool value)
{
    returnPortraitImage_ = value;
    returnPortraitImageIsSet_ = true;
}

bool CambodianIdCardRequestBody::returnPortraitImageIsSet() const
{
    return returnPortraitImageIsSet_;
}

void CambodianIdCardRequestBody::unsetreturnPortraitImage()
{
    returnPortraitImageIsSet_ = false;
}

bool CambodianIdCardRequestBody::isReturnPortraitLocation() const
{
    return returnPortraitLocation_;
}

void CambodianIdCardRequestBody::setReturnPortraitLocation(bool value)
{
    returnPortraitLocation_ = value;
    returnPortraitLocationIsSet_ = true;
}

bool CambodianIdCardRequestBody::returnPortraitLocationIsSet() const
{
    return returnPortraitLocationIsSet_;
}

void CambodianIdCardRequestBody::unsetreturnPortraitLocation()
{
    returnPortraitLocationIsSet_ = false;
}

bool CambodianIdCardRequestBody::isReturnIdcardType() const
{
    return returnIdcardType_;
}

void CambodianIdCardRequestBody::setReturnIdcardType(bool value)
{
    returnIdcardType_ = value;
    returnIdcardTypeIsSet_ = true;
}

bool CambodianIdCardRequestBody::returnIdcardTypeIsSet() const
{
    return returnIdcardTypeIsSet_;
}

void CambodianIdCardRequestBody::unsetreturnIdcardType()
{
    returnIdcardTypeIsSet_ = false;
}

}
}
}
}
}


