

#include "huaweicloud/ocr/v1/model/InsurancePolicyRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




InsurancePolicyRequestBody::InsurancePolicyRequestBody()
{
    image_ = "";
    imageIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
    detectDirection_ = false;
    detectDirectionIsSet_ = false;
}

InsurancePolicyRequestBody::~InsurancePolicyRequestBody() = default;

void InsurancePolicyRequestBody::validate()
{
}

web::json::value InsurancePolicyRequestBody::toJson() const
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

bool InsurancePolicyRequestBody::fromJson(const web::json::value& val)
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

std::string InsurancePolicyRequestBody::getImage() const
{
    return image_;
}

void InsurancePolicyRequestBody::setImage(const std::string& value)
{
    image_ = value;
    imageIsSet_ = true;
}

bool InsurancePolicyRequestBody::imageIsSet() const
{
    return imageIsSet_;
}

void InsurancePolicyRequestBody::unsetimage()
{
    imageIsSet_ = false;
}

std::string InsurancePolicyRequestBody::getUrl() const
{
    return url_;
}

void InsurancePolicyRequestBody::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool InsurancePolicyRequestBody::urlIsSet() const
{
    return urlIsSet_;
}

void InsurancePolicyRequestBody::unseturl()
{
    urlIsSet_ = false;
}

bool InsurancePolicyRequestBody::isDetectDirection() const
{
    return detectDirection_;
}

void InsurancePolicyRequestBody::setDetectDirection(bool value)
{
    detectDirection_ = value;
    detectDirectionIsSet_ = true;
}

bool InsurancePolicyRequestBody::detectDirectionIsSet() const
{
    return detectDirectionIsSet_;
}

void InsurancePolicyRequestBody::unsetdetectDirection()
{
    detectDirectionIsSet_ = false;
}

}
}
}
}
}


