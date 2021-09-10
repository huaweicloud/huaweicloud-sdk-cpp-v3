

#include "huaweicloud/ocr/v1/model/IdCardRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




IdCardRequestBody::IdCardRequestBody()
{
    image_ = "";
    imageIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
    side_ = "";
    sideIsSet_ = false;
    returnVerification_ = false;
    returnVerificationIsSet_ = false;
}

IdCardRequestBody::~IdCardRequestBody() = default;

void IdCardRequestBody::validate()
{
}

web::json::value IdCardRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(imageIsSet_) {
        val[utility::conversions::to_string_t("image")] = ModelBase::toJson(image_);
    }
    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }
    if(sideIsSet_) {
        val[utility::conversions::to_string_t("side")] = ModelBase::toJson(side_);
    }
    if(returnVerificationIsSet_) {
        val[utility::conversions::to_string_t("return_verification")] = ModelBase::toJson(returnVerification_);
    }

    return val;
}

bool IdCardRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("side"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("side"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSide(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("return_verification"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("return_verification"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReturnVerification(refVal);
        }
    }
    return ok;
}


std::string IdCardRequestBody::getImage() const
{
    return image_;
}

void IdCardRequestBody::setImage(const std::string& value)
{
    image_ = value;
    imageIsSet_ = true;
}

bool IdCardRequestBody::imageIsSet() const
{
    return imageIsSet_;
}

void IdCardRequestBody::unsetimage()
{
    imageIsSet_ = false;
}

std::string IdCardRequestBody::getUrl() const
{
    return url_;
}

void IdCardRequestBody::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool IdCardRequestBody::urlIsSet() const
{
    return urlIsSet_;
}

void IdCardRequestBody::unseturl()
{
    urlIsSet_ = false;
}

std::string IdCardRequestBody::getSide() const
{
    return side_;
}

void IdCardRequestBody::setSide(const std::string& value)
{
    side_ = value;
    sideIsSet_ = true;
}

bool IdCardRequestBody::sideIsSet() const
{
    return sideIsSet_;
}

void IdCardRequestBody::unsetside()
{
    sideIsSet_ = false;
}

bool IdCardRequestBody::isReturnVerification() const
{
    return returnVerification_;
}

void IdCardRequestBody::setReturnVerification(bool value)
{
    returnVerification_ = value;
    returnVerificationIsSet_ = true;
}

bool IdCardRequestBody::returnVerificationIsSet() const
{
    return returnVerificationIsSet_;
}

void IdCardRequestBody::unsetreturnVerification()
{
    returnVerificationIsSet_ = false;
}

}
}
}
}
}


