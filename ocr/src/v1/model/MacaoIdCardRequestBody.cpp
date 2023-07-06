

#include "huaweicloud/ocr/v1/model/MacaoIdCardRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




MacaoIdCardRequestBody::MacaoIdCardRequestBody()
{
    image_ = "";
    imageIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
    side_ = "";
    sideIsSet_ = false;
    returnPortraitImage_ = false;
    returnPortraitImageIsSet_ = false;
}

MacaoIdCardRequestBody::~MacaoIdCardRequestBody() = default;

void MacaoIdCardRequestBody::validate()
{
}

web::json::value MacaoIdCardRequestBody::toJson() const
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
    if(returnPortraitImageIsSet_) {
        val[utility::conversions::to_string_t("return_portrait_image")] = ModelBase::toJson(returnPortraitImage_);
    }

    return val;
}

bool MacaoIdCardRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("return_portrait_image"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("return_portrait_image"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReturnPortraitImage(refVal);
        }
    }
    return ok;
}

std::string MacaoIdCardRequestBody::getImage() const
{
    return image_;
}

void MacaoIdCardRequestBody::setImage(const std::string& value)
{
    image_ = value;
    imageIsSet_ = true;
}

bool MacaoIdCardRequestBody::imageIsSet() const
{
    return imageIsSet_;
}

void MacaoIdCardRequestBody::unsetimage()
{
    imageIsSet_ = false;
}

std::string MacaoIdCardRequestBody::getUrl() const
{
    return url_;
}

void MacaoIdCardRequestBody::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool MacaoIdCardRequestBody::urlIsSet() const
{
    return urlIsSet_;
}

void MacaoIdCardRequestBody::unseturl()
{
    urlIsSet_ = false;
}

std::string MacaoIdCardRequestBody::getSide() const
{
    return side_;
}

void MacaoIdCardRequestBody::setSide(const std::string& value)
{
    side_ = value;
    sideIsSet_ = true;
}

bool MacaoIdCardRequestBody::sideIsSet() const
{
    return sideIsSet_;
}

void MacaoIdCardRequestBody::unsetside()
{
    sideIsSet_ = false;
}

bool MacaoIdCardRequestBody::isReturnPortraitImage() const
{
    return returnPortraitImage_;
}

void MacaoIdCardRequestBody::setReturnPortraitImage(bool value)
{
    returnPortraitImage_ = value;
    returnPortraitImageIsSet_ = true;
}

bool MacaoIdCardRequestBody::returnPortraitImageIsSet() const
{
    return returnPortraitImageIsSet_;
}

void MacaoIdCardRequestBody::unsetreturnPortraitImage()
{
    returnPortraitImageIsSet_ = false;
}

}
}
}
}
}


