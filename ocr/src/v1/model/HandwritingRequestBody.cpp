

#include "huaweicloud/ocr/v1/model/HandwritingRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




HandwritingRequestBody::HandwritingRequestBody()
{
    image_ = "";
    imageIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
    quickMode_ = false;
    quickModeIsSet_ = false;
    charSet_ = "";
    charSetIsSet_ = false;
    detectDirection_ = false;
    detectDirectionIsSet_ = false;
}

HandwritingRequestBody::~HandwritingRequestBody() = default;

void HandwritingRequestBody::validate()
{
}

web::json::value HandwritingRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(imageIsSet_) {
        val[utility::conversions::to_string_t("image")] = ModelBase::toJson(image_);
    }
    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }
    if(quickModeIsSet_) {
        val[utility::conversions::to_string_t("quick_mode")] = ModelBase::toJson(quickMode_);
    }
    if(charSetIsSet_) {
        val[utility::conversions::to_string_t("char_set")] = ModelBase::toJson(charSet_);
    }
    if(detectDirectionIsSet_) {
        val[utility::conversions::to_string_t("detect_direction")] = ModelBase::toJson(detectDirection_);
    }

    return val;
}

bool HandwritingRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("quick_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quick_mode"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuickMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("char_set"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("char_set"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCharSet(refVal);
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

std::string HandwritingRequestBody::getImage() const
{
    return image_;
}

void HandwritingRequestBody::setImage(const std::string& value)
{
    image_ = value;
    imageIsSet_ = true;
}

bool HandwritingRequestBody::imageIsSet() const
{
    return imageIsSet_;
}

void HandwritingRequestBody::unsetimage()
{
    imageIsSet_ = false;
}

std::string HandwritingRequestBody::getUrl() const
{
    return url_;
}

void HandwritingRequestBody::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool HandwritingRequestBody::urlIsSet() const
{
    return urlIsSet_;
}

void HandwritingRequestBody::unseturl()
{
    urlIsSet_ = false;
}

bool HandwritingRequestBody::isQuickMode() const
{
    return quickMode_;
}

void HandwritingRequestBody::setQuickMode(bool value)
{
    quickMode_ = value;
    quickModeIsSet_ = true;
}

bool HandwritingRequestBody::quickModeIsSet() const
{
    return quickModeIsSet_;
}

void HandwritingRequestBody::unsetquickMode()
{
    quickModeIsSet_ = false;
}

std::string HandwritingRequestBody::getCharSet() const
{
    return charSet_;
}

void HandwritingRequestBody::setCharSet(const std::string& value)
{
    charSet_ = value;
    charSetIsSet_ = true;
}

bool HandwritingRequestBody::charSetIsSet() const
{
    return charSetIsSet_;
}

void HandwritingRequestBody::unsetcharSet()
{
    charSetIsSet_ = false;
}

bool HandwritingRequestBody::isDetectDirection() const
{
    return detectDirection_;
}

void HandwritingRequestBody::setDetectDirection(bool value)
{
    detectDirection_ = value;
    detectDirectionIsSet_ = true;
}

bool HandwritingRequestBody::detectDirectionIsSet() const
{
    return detectDirectionIsSet_;
}

void HandwritingRequestBody::unsetdetectDirection()
{
    detectDirectionIsSet_ = false;
}

}
}
}
}
}


