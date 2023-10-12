

#include "huaweicloud/ocr/v1/model/VinRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




VinRequestBody::VinRequestBody()
{
    image_ = "";
    imageIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
}

VinRequestBody::~VinRequestBody() = default;

void VinRequestBody::validate()
{
}

web::json::value VinRequestBody::toJson() const
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
bool VinRequestBody::fromJson(const web::json::value& val)
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


std::string VinRequestBody::getImage() const
{
    return image_;
}

void VinRequestBody::setImage(const std::string& value)
{
    image_ = value;
    imageIsSet_ = true;
}

bool VinRequestBody::imageIsSet() const
{
    return imageIsSet_;
}

void VinRequestBody::unsetimage()
{
    imageIsSet_ = false;
}

std::string VinRequestBody::getUrl() const
{
    return url_;
}

void VinRequestBody::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool VinRequestBody::urlIsSet() const
{
    return urlIsSet_;
}

void VinRequestBody::unseturl()
{
    urlIsSet_ = false;
}

}
}
}
}
}


