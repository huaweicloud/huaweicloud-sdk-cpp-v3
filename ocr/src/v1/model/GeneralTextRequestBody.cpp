

#include "huaweicloud/ocr/v1/model/GeneralTextRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




GeneralTextRequestBody::GeneralTextRequestBody()
{
    image_ = "";
    imageIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
    detectDirection_ = false;
    detectDirectionIsSet_ = false;
    quickMode_ = false;
    quickModeIsSet_ = false;
    characterMode_ = false;
    characterModeIsSet_ = false;
}

GeneralTextRequestBody::~GeneralTextRequestBody() = default;

void GeneralTextRequestBody::validate()
{
}

web::json::value GeneralTextRequestBody::toJson() const
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
    if(quickModeIsSet_) {
        val[utility::conversions::to_string_t("quick_mode")] = ModelBase::toJson(quickMode_);
    }
    if(characterModeIsSet_) {
        val[utility::conversions::to_string_t("character_mode")] = ModelBase::toJson(characterMode_);
    }

    return val;
}

bool GeneralTextRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("quick_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("quick_mode"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQuickMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("character_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("character_mode"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCharacterMode(refVal);
        }
    }
    return ok;
}


std::string GeneralTextRequestBody::getImage() const
{
    return image_;
}

void GeneralTextRequestBody::setImage(const std::string& value)
{
    image_ = value;
    imageIsSet_ = true;
}

bool GeneralTextRequestBody::imageIsSet() const
{
    return imageIsSet_;
}

void GeneralTextRequestBody::unsetimage()
{
    imageIsSet_ = false;
}

std::string GeneralTextRequestBody::getUrl() const
{
    return url_;
}

void GeneralTextRequestBody::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool GeneralTextRequestBody::urlIsSet() const
{
    return urlIsSet_;
}

void GeneralTextRequestBody::unseturl()
{
    urlIsSet_ = false;
}

bool GeneralTextRequestBody::isDetectDirection() const
{
    return detectDirection_;
}

void GeneralTextRequestBody::setDetectDirection(bool value)
{
    detectDirection_ = value;
    detectDirectionIsSet_ = true;
}

bool GeneralTextRequestBody::detectDirectionIsSet() const
{
    return detectDirectionIsSet_;
}

void GeneralTextRequestBody::unsetdetectDirection()
{
    detectDirectionIsSet_ = false;
}

bool GeneralTextRequestBody::isQuickMode() const
{
    return quickMode_;
}

void GeneralTextRequestBody::setQuickMode(bool value)
{
    quickMode_ = value;
    quickModeIsSet_ = true;
}

bool GeneralTextRequestBody::quickModeIsSet() const
{
    return quickModeIsSet_;
}

void GeneralTextRequestBody::unsetquickMode()
{
    quickModeIsSet_ = false;
}

bool GeneralTextRequestBody::isCharacterMode() const
{
    return characterMode_;
}

void GeneralTextRequestBody::setCharacterMode(bool value)
{
    characterMode_ = value;
    characterModeIsSet_ = true;
}

bool GeneralTextRequestBody::characterModeIsSet() const
{
    return characterModeIsSet_;
}

void GeneralTextRequestBody::unsetcharacterMode()
{
    characterModeIsSet_ = false;
}

}
}
}
}
}


