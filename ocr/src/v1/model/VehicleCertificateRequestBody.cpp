

#include "huaweicloud/ocr/v1/model/VehicleCertificateRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




VehicleCertificateRequestBody::VehicleCertificateRequestBody()
{
    image_ = "";
    imageIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
    returnTextLocation_ = false;
    returnTextLocationIsSet_ = false;
}

VehicleCertificateRequestBody::~VehicleCertificateRequestBody() = default;

void VehicleCertificateRequestBody::validate()
{
}

web::json::value VehicleCertificateRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(imageIsSet_) {
        val[utility::conversions::to_string_t("image")] = ModelBase::toJson(image_);
    }
    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }
    if(returnTextLocationIsSet_) {
        val[utility::conversions::to_string_t("return_text_location")] = ModelBase::toJson(returnTextLocation_);
    }

    return val;
}
bool VehicleCertificateRequestBody::fromJson(const web::json::value& val)
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


std::string VehicleCertificateRequestBody::getImage() const
{
    return image_;
}

void VehicleCertificateRequestBody::setImage(const std::string& value)
{
    image_ = value;
    imageIsSet_ = true;
}

bool VehicleCertificateRequestBody::imageIsSet() const
{
    return imageIsSet_;
}

void VehicleCertificateRequestBody::unsetimage()
{
    imageIsSet_ = false;
}

std::string VehicleCertificateRequestBody::getUrl() const
{
    return url_;
}

void VehicleCertificateRequestBody::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool VehicleCertificateRequestBody::urlIsSet() const
{
    return urlIsSet_;
}

void VehicleCertificateRequestBody::unseturl()
{
    urlIsSet_ = false;
}

bool VehicleCertificateRequestBody::isReturnTextLocation() const
{
    return returnTextLocation_;
}

void VehicleCertificateRequestBody::setReturnTextLocation(bool value)
{
    returnTextLocation_ = value;
    returnTextLocationIsSet_ = true;
}

bool VehicleCertificateRequestBody::returnTextLocationIsSet() const
{
    return returnTextLocationIsSet_;
}

void VehicleCertificateRequestBody::unsetreturnTextLocation()
{
    returnTextLocationIsSet_ = false;
}

}
}
}
}
}


