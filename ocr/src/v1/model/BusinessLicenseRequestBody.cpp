

#include "huaweicloud/ocr/v1/model/BusinessLicenseRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




BusinessLicenseRequestBody::BusinessLicenseRequestBody()
{
    image_ = "";
    imageIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
}

BusinessLicenseRequestBody::~BusinessLicenseRequestBody() = default;

void BusinessLicenseRequestBody::validate()
{
}

web::json::value BusinessLicenseRequestBody::toJson() const
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

bool BusinessLicenseRequestBody::fromJson(const web::json::value& val)
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


std::string BusinessLicenseRequestBody::getImage() const
{
    return image_;
}

void BusinessLicenseRequestBody::setImage(const std::string& value)
{
    image_ = value;
    imageIsSet_ = true;
}

bool BusinessLicenseRequestBody::imageIsSet() const
{
    return imageIsSet_;
}

void BusinessLicenseRequestBody::unsetimage()
{
    imageIsSet_ = false;
}

std::string BusinessLicenseRequestBody::getUrl() const
{
    return url_;
}

void BusinessLicenseRequestBody::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool BusinessLicenseRequestBody::urlIsSet() const
{
    return urlIsSet_;
}

void BusinessLicenseRequestBody::unseturl()
{
    urlIsSet_ = false;
}

}
}
}
}
}


