

#include "huaweicloud/ocr/v1/model/ColombiaIdCardRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




ColombiaIdCardRequestBody::ColombiaIdCardRequestBody()
{
    image_ = "";
    imageIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
}

ColombiaIdCardRequestBody::~ColombiaIdCardRequestBody() = default;

void ColombiaIdCardRequestBody::validate()
{
}

web::json::value ColombiaIdCardRequestBody::toJson() const
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
bool ColombiaIdCardRequestBody::fromJson(const web::json::value& val)
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


std::string ColombiaIdCardRequestBody::getImage() const
{
    return image_;
}

void ColombiaIdCardRequestBody::setImage(const std::string& value)
{
    image_ = value;
    imageIsSet_ = true;
}

bool ColombiaIdCardRequestBody::imageIsSet() const
{
    return imageIsSet_;
}

void ColombiaIdCardRequestBody::unsetimage()
{
    imageIsSet_ = false;
}

std::string ColombiaIdCardRequestBody::getUrl() const
{
    return url_;
}

void ColombiaIdCardRequestBody::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool ColombiaIdCardRequestBody::urlIsSet() const
{
    return urlIsSet_;
}

void ColombiaIdCardRequestBody::unseturl()
{
    urlIsSet_ = false;
}

}
}
}
}
}


