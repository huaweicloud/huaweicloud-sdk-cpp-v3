

#include "huaweicloud/ocr/v1/model/TransportationLicenseRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




TransportationLicenseRequestBody::TransportationLicenseRequestBody()
{
    image_ = "";
    imageIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
}

TransportationLicenseRequestBody::~TransportationLicenseRequestBody() = default;

void TransportationLicenseRequestBody::validate()
{
}

web::json::value TransportationLicenseRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(imageIsSet_) {
        val[utility::conversions::to_string_t("image")] = ModelBase::toJson(image_);
    }
    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }

    return val;
}

bool TransportationLicenseRequestBody::fromJson(const web::json::value& val)
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
    return ok;
}


std::string TransportationLicenseRequestBody::getImage() const
{
    return image_;
}

void TransportationLicenseRequestBody::setImage(const std::string& value)
{
    image_ = value;
    imageIsSet_ = true;
}

bool TransportationLicenseRequestBody::imageIsSet() const
{
    return imageIsSet_;
}

void TransportationLicenseRequestBody::unsetimage()
{
    imageIsSet_ = false;
}

std::string TransportationLicenseRequestBody::getUrl() const
{
    return url_;
}

void TransportationLicenseRequestBody::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool TransportationLicenseRequestBody::urlIsSet() const
{
    return urlIsSet_;
}

void TransportationLicenseRequestBody::unseturl()
{
    urlIsSet_ = false;
}

}
}
}
}
}


