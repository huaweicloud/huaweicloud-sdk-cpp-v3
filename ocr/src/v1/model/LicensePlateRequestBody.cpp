

#include "huaweicloud/ocr/v1/model/LicensePlateRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




LicensePlateRequestBody::LicensePlateRequestBody()
{
    image_ = "";
    imageIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
}

LicensePlateRequestBody::~LicensePlateRequestBody() = default;

void LicensePlateRequestBody::validate()
{
}

web::json::value LicensePlateRequestBody::toJson() const
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
bool LicensePlateRequestBody::fromJson(const web::json::value& val)
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


std::string LicensePlateRequestBody::getImage() const
{
    return image_;
}

void LicensePlateRequestBody::setImage(const std::string& value)
{
    image_ = value;
    imageIsSet_ = true;
}

bool LicensePlateRequestBody::imageIsSet() const
{
    return imageIsSet_;
}

void LicensePlateRequestBody::unsetimage()
{
    imageIsSet_ = false;
}

std::string LicensePlateRequestBody::getUrl() const
{
    return url_;
}

void LicensePlateRequestBody::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool LicensePlateRequestBody::urlIsSet() const
{
    return urlIsSet_;
}

void LicensePlateRequestBody::unseturl()
{
    urlIsSet_ = false;
}

}
}
}
}
}


