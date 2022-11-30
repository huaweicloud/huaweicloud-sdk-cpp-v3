

#include "huaweicloud/ocr/v1/model/DriverLicenseRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




DriverLicenseRequestBody::DriverLicenseRequestBody()
{
    image_ = "";
    imageIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
    side_ = "";
    sideIsSet_ = false;
    returnIssuingAuthority_ = false;
    returnIssuingAuthorityIsSet_ = false;
    returnTextLocation_ = false;
    returnTextLocationIsSet_ = false;
}

DriverLicenseRequestBody::~DriverLicenseRequestBody() = default;

void DriverLicenseRequestBody::validate()
{
}

web::json::value DriverLicenseRequestBody::toJson() const
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
    if(returnIssuingAuthorityIsSet_) {
        val[utility::conversions::to_string_t("return_issuing_authority")] = ModelBase::toJson(returnIssuingAuthority_);
    }
    if(returnTextLocationIsSet_) {
        val[utility::conversions::to_string_t("return_text_location")] = ModelBase::toJson(returnTextLocation_);
    }

    return val;
}

bool DriverLicenseRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("return_issuing_authority"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("return_issuing_authority"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReturnIssuingAuthority(refVal);
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


std::string DriverLicenseRequestBody::getImage() const
{
    return image_;
}

void DriverLicenseRequestBody::setImage(const std::string& value)
{
    image_ = value;
    imageIsSet_ = true;
}

bool DriverLicenseRequestBody::imageIsSet() const
{
    return imageIsSet_;
}

void DriverLicenseRequestBody::unsetimage()
{
    imageIsSet_ = false;
}

std::string DriverLicenseRequestBody::getUrl() const
{
    return url_;
}

void DriverLicenseRequestBody::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool DriverLicenseRequestBody::urlIsSet() const
{
    return urlIsSet_;
}

void DriverLicenseRequestBody::unseturl()
{
    urlIsSet_ = false;
}

std::string DriverLicenseRequestBody::getSide() const
{
    return side_;
}

void DriverLicenseRequestBody::setSide(const std::string& value)
{
    side_ = value;
    sideIsSet_ = true;
}

bool DriverLicenseRequestBody::sideIsSet() const
{
    return sideIsSet_;
}

void DriverLicenseRequestBody::unsetside()
{
    sideIsSet_ = false;
}

bool DriverLicenseRequestBody::isReturnIssuingAuthority() const
{
    return returnIssuingAuthority_;
}

void DriverLicenseRequestBody::setReturnIssuingAuthority(bool value)
{
    returnIssuingAuthority_ = value;
    returnIssuingAuthorityIsSet_ = true;
}

bool DriverLicenseRequestBody::returnIssuingAuthorityIsSet() const
{
    return returnIssuingAuthorityIsSet_;
}

void DriverLicenseRequestBody::unsetreturnIssuingAuthority()
{
    returnIssuingAuthorityIsSet_ = false;
}

bool DriverLicenseRequestBody::isReturnTextLocation() const
{
    return returnTextLocation_;
}

void DriverLicenseRequestBody::setReturnTextLocation(bool value)
{
    returnTextLocation_ = value;
    returnTextLocationIsSet_ = true;
}

bool DriverLicenseRequestBody::returnTextLocationIsSet() const
{
    return returnTextLocationIsSet_;
}

void DriverLicenseRequestBody::unsetreturnTextLocation()
{
    returnTextLocationIsSet_ = false;
}

}
}
}
}
}


