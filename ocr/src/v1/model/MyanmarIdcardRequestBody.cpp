

#include "huaweicloud/ocr/v1/model/MyanmarIdcardRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




MyanmarIdcardRequestBody::MyanmarIdcardRequestBody()
{
    image_ = "";
    imageIsSet_ = false;
    url_ = "";
    urlIsSet_ = false;
    convertUnicode_ = false;
    convertUnicodeIsSet_ = false;
    returnConfidence_ = false;
    returnConfidenceIsSet_ = false;
    returnPortraitImage_ = false;
    returnPortraitImageIsSet_ = false;
    returnPortraitLocation_ = false;
    returnPortraitLocationIsSet_ = false;
    returnIdcardType_ = false;
    returnIdcardTypeIsSet_ = false;
    returnTranslation_ = false;
    returnTranslationIsSet_ = false;
}

MyanmarIdcardRequestBody::~MyanmarIdcardRequestBody() = default;

void MyanmarIdcardRequestBody::validate()
{
}

web::json::value MyanmarIdcardRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(imageIsSet_) {
        val[utility::conversions::to_string_t("image")] = ModelBase::toJson(image_);
    }
    if(urlIsSet_) {
        val[utility::conversions::to_string_t("url")] = ModelBase::toJson(url_);
    }
    if(convertUnicodeIsSet_) {
        val[utility::conversions::to_string_t("convert_unicode")] = ModelBase::toJson(convertUnicode_);
    }
    if(returnConfidenceIsSet_) {
        val[utility::conversions::to_string_t("return_confidence")] = ModelBase::toJson(returnConfidence_);
    }
    if(returnPortraitImageIsSet_) {
        val[utility::conversions::to_string_t("return_portrait_image")] = ModelBase::toJson(returnPortraitImage_);
    }
    if(returnPortraitLocationIsSet_) {
        val[utility::conversions::to_string_t("return_portrait_location")] = ModelBase::toJson(returnPortraitLocation_);
    }
    if(returnIdcardTypeIsSet_) {
        val[utility::conversions::to_string_t("return_idcard_type")] = ModelBase::toJson(returnIdcardType_);
    }
    if(returnTranslationIsSet_) {
        val[utility::conversions::to_string_t("return_translation")] = ModelBase::toJson(returnTranslation_);
    }

    return val;
}
bool MyanmarIdcardRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("convert_unicode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("convert_unicode"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConvertUnicode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("return_confidence"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("return_confidence"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReturnConfidence(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("return_portrait_location"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("return_portrait_location"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReturnPortraitLocation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("return_idcard_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("return_idcard_type"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReturnIdcardType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("return_translation"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("return_translation"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReturnTranslation(refVal);
        }
    }
    return ok;
}


std::string MyanmarIdcardRequestBody::getImage() const
{
    return image_;
}

void MyanmarIdcardRequestBody::setImage(const std::string& value)
{
    image_ = value;
    imageIsSet_ = true;
}

bool MyanmarIdcardRequestBody::imageIsSet() const
{
    return imageIsSet_;
}

void MyanmarIdcardRequestBody::unsetimage()
{
    imageIsSet_ = false;
}

std::string MyanmarIdcardRequestBody::getUrl() const
{
    return url_;
}

void MyanmarIdcardRequestBody::setUrl(const std::string& value)
{
    url_ = value;
    urlIsSet_ = true;
}

bool MyanmarIdcardRequestBody::urlIsSet() const
{
    return urlIsSet_;
}

void MyanmarIdcardRequestBody::unseturl()
{
    urlIsSet_ = false;
}

bool MyanmarIdcardRequestBody::isConvertUnicode() const
{
    return convertUnicode_;
}

void MyanmarIdcardRequestBody::setConvertUnicode(bool value)
{
    convertUnicode_ = value;
    convertUnicodeIsSet_ = true;
}

bool MyanmarIdcardRequestBody::convertUnicodeIsSet() const
{
    return convertUnicodeIsSet_;
}

void MyanmarIdcardRequestBody::unsetconvertUnicode()
{
    convertUnicodeIsSet_ = false;
}

bool MyanmarIdcardRequestBody::isReturnConfidence() const
{
    return returnConfidence_;
}

void MyanmarIdcardRequestBody::setReturnConfidence(bool value)
{
    returnConfidence_ = value;
    returnConfidenceIsSet_ = true;
}

bool MyanmarIdcardRequestBody::returnConfidenceIsSet() const
{
    return returnConfidenceIsSet_;
}

void MyanmarIdcardRequestBody::unsetreturnConfidence()
{
    returnConfidenceIsSet_ = false;
}

bool MyanmarIdcardRequestBody::isReturnPortraitImage() const
{
    return returnPortraitImage_;
}

void MyanmarIdcardRequestBody::setReturnPortraitImage(bool value)
{
    returnPortraitImage_ = value;
    returnPortraitImageIsSet_ = true;
}

bool MyanmarIdcardRequestBody::returnPortraitImageIsSet() const
{
    return returnPortraitImageIsSet_;
}

void MyanmarIdcardRequestBody::unsetreturnPortraitImage()
{
    returnPortraitImageIsSet_ = false;
}

bool MyanmarIdcardRequestBody::isReturnPortraitLocation() const
{
    return returnPortraitLocation_;
}

void MyanmarIdcardRequestBody::setReturnPortraitLocation(bool value)
{
    returnPortraitLocation_ = value;
    returnPortraitLocationIsSet_ = true;
}

bool MyanmarIdcardRequestBody::returnPortraitLocationIsSet() const
{
    return returnPortraitLocationIsSet_;
}

void MyanmarIdcardRequestBody::unsetreturnPortraitLocation()
{
    returnPortraitLocationIsSet_ = false;
}

bool MyanmarIdcardRequestBody::isReturnIdcardType() const
{
    return returnIdcardType_;
}

void MyanmarIdcardRequestBody::setReturnIdcardType(bool value)
{
    returnIdcardType_ = value;
    returnIdcardTypeIsSet_ = true;
}

bool MyanmarIdcardRequestBody::returnIdcardTypeIsSet() const
{
    return returnIdcardTypeIsSet_;
}

void MyanmarIdcardRequestBody::unsetreturnIdcardType()
{
    returnIdcardTypeIsSet_ = false;
}

bool MyanmarIdcardRequestBody::isReturnTranslation() const
{
    return returnTranslation_;
}

void MyanmarIdcardRequestBody::setReturnTranslation(bool value)
{
    returnTranslation_ = value;
    returnTranslationIsSet_ = true;
}

bool MyanmarIdcardRequestBody::returnTranslationIsSet() const
{
    return returnTranslationIsSet_;
}

void MyanmarIdcardRequestBody::unsetreturnTranslation()
{
    returnTranslationIsSet_ = false;
}

}
}
}
}
}


