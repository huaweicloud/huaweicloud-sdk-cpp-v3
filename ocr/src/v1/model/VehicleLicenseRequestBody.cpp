

#include "huaweicloud/ocr/v1/model/VehicleLicenseRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




VehicleLicenseRequestBody::VehicleLicenseRequestBody()
{
    image_ = "";
    imageIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
    side_ = "";
    sideIsSet_ = false;
    returnIssuingAuthority_ = false;
    returnIssuingAuthorityIsSet_ = false;
}

VehicleLicenseRequestBody::~VehicleLicenseRequestBody() = default;

void VehicleLicenseRequestBody::validate()
{
}

web::json::value VehicleLicenseRequestBody::toJson() const
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

    return val;
}

bool VehicleLicenseRequestBody::fromJson(const web::json::value& val)
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
    return ok;
}


std::string VehicleLicenseRequestBody::getImage() const
{
    return image_;
}

void VehicleLicenseRequestBody::setImage(const std::string& value)
{
    image_ = value;
    imageIsSet_ = true;
}

bool VehicleLicenseRequestBody::imageIsSet() const
{
    return imageIsSet_;
}

void VehicleLicenseRequestBody::unsetimage()
{
    imageIsSet_ = false;
}

std::string VehicleLicenseRequestBody::getUrl() const
{
    return url_;
}

void VehicleLicenseRequestBody::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool VehicleLicenseRequestBody::urlIsSet() const
{
    return urlIsSet_;
}

void VehicleLicenseRequestBody::unseturl()
{
    urlIsSet_ = false;
}

std::string VehicleLicenseRequestBody::getSide() const
{
    return side_;
}

void VehicleLicenseRequestBody::setSide(const std::string& value)
{
    side_ = value;
    sideIsSet_ = true;
}

bool VehicleLicenseRequestBody::sideIsSet() const
{
    return sideIsSet_;
}

void VehicleLicenseRequestBody::unsetside()
{
    sideIsSet_ = false;
}

bool VehicleLicenseRequestBody::isReturnIssuingAuthority() const
{
    return returnIssuingAuthority_;
}

void VehicleLicenseRequestBody::setReturnIssuingAuthority(bool value)
{
    returnIssuingAuthority_ = value;
    returnIssuingAuthorityIsSet_ = true;
}

bool VehicleLicenseRequestBody::returnIssuingAuthorityIsSet() const
{
    return returnIssuingAuthorityIsSet_;
}

void VehicleLicenseRequestBody::unsetreturnIssuingAuthority()
{
    returnIssuingAuthorityIsSet_ = false;
}

}
}
}
}
}


