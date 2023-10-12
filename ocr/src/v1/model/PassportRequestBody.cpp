

#include "huaweicloud/ocr/v1/model/PassportRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




PassportRequestBody::PassportRequestBody()
{
    image_ = "";
    imageIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
    countryCode_ = "";
    countryCodeIsSet_ = false;
}

PassportRequestBody::~PassportRequestBody() = default;

void PassportRequestBody::validate()
{
}

web::json::value PassportRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(imageIsSet_) {
        val[utility::conversions::to_string_t("image")] = ModelBase::toJson(image_);
    }
    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }
    if(countryCodeIsSet_) {
        val[utility::conversions::to_string_t("country_code")] = ModelBase::toJson(countryCode_);
    }

    return val;
}
bool PassportRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("country_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("country_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCountryCode(refVal);
        }
    }
    return ok;
}


std::string PassportRequestBody::getImage() const
{
    return image_;
}

void PassportRequestBody::setImage(const std::string& value)
{
    image_ = value;
    imageIsSet_ = true;
}

bool PassportRequestBody::imageIsSet() const
{
    return imageIsSet_;
}

void PassportRequestBody::unsetimage()
{
    imageIsSet_ = false;
}

std::string PassportRequestBody::getUrl() const
{
    return url_;
}

void PassportRequestBody::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool PassportRequestBody::urlIsSet() const
{
    return urlIsSet_;
}

void PassportRequestBody::unseturl()
{
    urlIsSet_ = false;
}

std::string PassportRequestBody::getCountryCode() const
{
    return countryCode_;
}

void PassportRequestBody::setCountryCode(const std::string& value)
{
    countryCode_ = value;
    countryCodeIsSet_ = true;
}

bool PassportRequestBody::countryCodeIsSet() const
{
    return countryCodeIsSet_;
}

void PassportRequestBody::unsetcountryCode()
{
    countryCodeIsSet_ = false;
}

}
}
}
}
}


