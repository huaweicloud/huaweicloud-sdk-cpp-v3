

#include "huaweicloud/ocr/v1/model/AcceptanceBillRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




AcceptanceBillRequestBody::AcceptanceBillRequestBody()
{
    image_ = "";
    imageIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
}

AcceptanceBillRequestBody::~AcceptanceBillRequestBody() = default;

void AcceptanceBillRequestBody::validate()
{
}

web::json::value AcceptanceBillRequestBody::toJson() const
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
bool AcceptanceBillRequestBody::fromJson(const web::json::value& val)
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


std::string AcceptanceBillRequestBody::getImage() const
{
    return image_;
}

void AcceptanceBillRequestBody::setImage(const std::string& value)
{
    image_ = value;
    imageIsSet_ = true;
}

bool AcceptanceBillRequestBody::imageIsSet() const
{
    return imageIsSet_;
}

void AcceptanceBillRequestBody::unsetimage()
{
    imageIsSet_ = false;
}

std::string AcceptanceBillRequestBody::getUrl() const
{
    return url_;
}

void AcceptanceBillRequestBody::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool AcceptanceBillRequestBody::urlIsSet() const
{
    return urlIsSet_;
}

void AcceptanceBillRequestBody::unseturl()
{
    urlIsSet_ = false;
}

}
}
}
}
}


