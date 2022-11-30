

#include "huaweicloud/ocr/v1/model/ThailandLicensePlateRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




ThailandLicensePlateRequestBody::ThailandLicensePlateRequestBody()
{
    image_ = "";
    imageIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
}

ThailandLicensePlateRequestBody::~ThailandLicensePlateRequestBody() = default;

void ThailandLicensePlateRequestBody::validate()
{
}

web::json::value ThailandLicensePlateRequestBody::toJson() const
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

bool ThailandLicensePlateRequestBody::fromJson(const web::json::value& val)
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


std::string ThailandLicensePlateRequestBody::getImage() const
{
    return image_;
}

void ThailandLicensePlateRequestBody::setImage(const std::string& value)
{
    image_ = value;
    imageIsSet_ = true;
}

bool ThailandLicensePlateRequestBody::imageIsSet() const
{
    return imageIsSet_;
}

void ThailandLicensePlateRequestBody::unsetimage()
{
    imageIsSet_ = false;
}

std::string ThailandLicensePlateRequestBody::getUrl() const
{
    return url_;
}

void ThailandLicensePlateRequestBody::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool ThailandLicensePlateRequestBody::urlIsSet() const
{
    return urlIsSet_;
}

void ThailandLicensePlateRequestBody::unseturl()
{
    urlIsSet_ = false;
}

}
}
}
}
}


