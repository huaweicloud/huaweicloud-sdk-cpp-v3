

#include "huaweicloud/ocr/v1/model/ChileIdCardRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




ChileIdCardRequestBody::ChileIdCardRequestBody()
{
    image_ = "";
    imageIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
}

ChileIdCardRequestBody::~ChileIdCardRequestBody() = default;

void ChileIdCardRequestBody::validate()
{
}

web::json::value ChileIdCardRequestBody::toJson() const
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

bool ChileIdCardRequestBody::fromJson(const web::json::value& val)
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


std::string ChileIdCardRequestBody::getImage() const
{
    return image_;
}

void ChileIdCardRequestBody::setImage(const std::string& value)
{
    image_ = value;
    imageIsSet_ = true;
}

bool ChileIdCardRequestBody::imageIsSet() const
{
    return imageIsSet_;
}

void ChileIdCardRequestBody::unsetimage()
{
    imageIsSet_ = false;
}

std::string ChileIdCardRequestBody::getUrl() const
{
    return url_;
}

void ChileIdCardRequestBody::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool ChileIdCardRequestBody::urlIsSet() const
{
    return urlIsSet_;
}

void ChileIdCardRequestBody::unseturl()
{
    urlIsSet_ = false;
}

}
}
}
}
}


