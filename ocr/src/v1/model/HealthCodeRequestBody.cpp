

#include "huaweicloud/ocr/v1/model/HealthCodeRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




HealthCodeRequestBody::HealthCodeRequestBody()
{
    image_ = "";
    imageIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
    detectDirection_ = false;
    detectDirectionIsSet_ = false;
}

HealthCodeRequestBody::~HealthCodeRequestBody() = default;

void HealthCodeRequestBody::validate()
{
}

web::json::value HealthCodeRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(imageIsSet_) {
        val[utility::conversions::to_string_t("image")] = ModelBase::toJson(image_);
    }
    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }
    if(detectDirectionIsSet_) {
        val[utility::conversions::to_string_t("detect_direction")] = ModelBase::toJson(detectDirection_);
    }

    return val;
}

bool HealthCodeRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("detect_direction"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("detect_direction"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDetectDirection(refVal);
        }
    }
    return ok;
}


std::string HealthCodeRequestBody::getImage() const
{
    return image_;
}

void HealthCodeRequestBody::setImage(const std::string& value)
{
    image_ = value;
    imageIsSet_ = true;
}

bool HealthCodeRequestBody::imageIsSet() const
{
    return imageIsSet_;
}

void HealthCodeRequestBody::unsetimage()
{
    imageIsSet_ = false;
}

std::string HealthCodeRequestBody::getUrl() const
{
    return url_;
}

void HealthCodeRequestBody::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool HealthCodeRequestBody::urlIsSet() const
{
    return urlIsSet_;
}

void HealthCodeRequestBody::unseturl()
{
    urlIsSet_ = false;
}

bool HealthCodeRequestBody::isDetectDirection() const
{
    return detectDirection_;
}

void HealthCodeRequestBody::setDetectDirection(bool value)
{
    detectDirection_ = value;
    detectDirectionIsSet_ = true;
}

bool HealthCodeRequestBody::detectDirectionIsSet() const
{
    return detectDirectionIsSet_;
}

void HealthCodeRequestBody::unsetdetectDirection()
{
    detectDirectionIsSet_ = false;
}

}
}
}
}
}


