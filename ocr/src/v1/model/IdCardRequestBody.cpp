

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
    returnTextLocation_ = false;
    returnTextLocationIsSet_ = false;
    detectReproduce_ = false;
    detectReproduceIsSet_ = false;
    detectCopy_ = false;
    detectCopyIsSet_ = false;
    returnPortraitLocation_ = false;
    returnPortraitLocationIsSet_ = false;
    returnPortraitImage_ = false;
    returnPortraitImageIsSet_ = false;
    returnAdjustedImage_ = false;
    returnAdjustedImageIsSet_ = false;
    detectTampering_ = false;
    detectTamperingIsSet_ = false;
    detectBorderIntegrity_ = false;
    detectBorderIntegrityIsSet_ = false;
    detectBlockingWithinBorder_ = false;
    detectBlockingWithinBorderIsSet_ = false;
    detectBlur_ = false;
    detectBlurIsSet_ = false;
    detectInterim_ = false;
    detectInterimIsSet_ = false;
    detectGlare_ = false;
    detectGlareIsSet_ = false;
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
    if(returnTextLocationIsSet_) {
        val[utility::conversions::to_string_t("return_text_location")] = ModelBase::toJson(returnTextLocation_);
    }
    if(detectReproduceIsSet_) {
        val[utility::conversions::to_string_t("detect_reproduce")] = ModelBase::toJson(detectReproduce_);
    }
    if(detectCopyIsSet_) {
        val[utility::conversions::to_string_t("detect_copy")] = ModelBase::toJson(detectCopy_);
    }
    if(returnPortraitLocationIsSet_) {
        val[utility::conversions::to_string_t("return_portrait_location")] = ModelBase::toJson(returnPortraitLocation_);
    }
    if(returnPortraitImageIsSet_) {
        val[utility::conversions::to_string_t("return_portrait_image")] = ModelBase::toJson(returnPortraitImage_);
    }
    if(returnAdjustedImageIsSet_) {
        val[utility::conversions::to_string_t("return_adjusted_image")] = ModelBase::toJson(returnAdjustedImage_);
    }
    if(detectTamperingIsSet_) {
        val[utility::conversions::to_string_t("detect_tampering")] = ModelBase::toJson(detectTampering_);
    }
    if(detectBorderIntegrityIsSet_) {
        val[utility::conversions::to_string_t("detect_border_integrity")] = ModelBase::toJson(detectBorderIntegrity_);
    }
    if(detectBlockingWithinBorderIsSet_) {
        val[utility::conversions::to_string_t("detect_blocking_within_border")] = ModelBase::toJson(detectBlockingWithinBorder_);
    }
    if(detectBlurIsSet_) {
        val[utility::conversions::to_string_t("detect_blur")] = ModelBase::toJson(detectBlur_);
    }
    if(detectInterimIsSet_) {
        val[utility::conversions::to_string_t("detect_interim")] = ModelBase::toJson(detectInterim_);
    }
    if(detectGlareIsSet_) {
        val[utility::conversions::to_string_t("detect_glare")] = ModelBase::toJson(detectGlare_);
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
    if(val.has_field(utility::conversions::to_string_t("return_text_location"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("return_text_location"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReturnTextLocation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("detect_reproduce"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("detect_reproduce"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDetectReproduce(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("detect_copy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("detect_copy"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDetectCopy(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("return_portrait_image"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("return_portrait_image"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReturnPortraitImage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("return_adjusted_image"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("return_adjusted_image"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReturnAdjustedImage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("detect_tampering"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("detect_tampering"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDetectTampering(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("detect_border_integrity"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("detect_border_integrity"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDetectBorderIntegrity(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("detect_blocking_within_border"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("detect_blocking_within_border"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDetectBlockingWithinBorder(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("detect_blur"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("detect_blur"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDetectBlur(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("detect_interim"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("detect_interim"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDetectInterim(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("detect_glare"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("detect_glare"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDetectGlare(refVal);
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

bool IdCardRequestBody::isReturnTextLocation() const
{
    return returnTextLocation_;
}

void IdCardRequestBody::setReturnTextLocation(bool value)
{
    returnTextLocation_ = value;
    returnTextLocationIsSet_ = true;
}

bool IdCardRequestBody::returnTextLocationIsSet() const
{
    return returnTextLocationIsSet_;
}

void IdCardRequestBody::unsetreturnTextLocation()
{
    returnTextLocationIsSet_ = false;
}

bool IdCardRequestBody::isDetectReproduce() const
{
    return detectReproduce_;
}

void IdCardRequestBody::setDetectReproduce(bool value)
{
    detectReproduce_ = value;
    detectReproduceIsSet_ = true;
}

bool IdCardRequestBody::detectReproduceIsSet() const
{
    return detectReproduceIsSet_;
}

void IdCardRequestBody::unsetdetectReproduce()
{
    detectReproduceIsSet_ = false;
}

bool IdCardRequestBody::isDetectCopy() const
{
    return detectCopy_;
}

void IdCardRequestBody::setDetectCopy(bool value)
{
    detectCopy_ = value;
    detectCopyIsSet_ = true;
}

bool IdCardRequestBody::detectCopyIsSet() const
{
    return detectCopyIsSet_;
}

void IdCardRequestBody::unsetdetectCopy()
{
    detectCopyIsSet_ = false;
}

bool IdCardRequestBody::isReturnPortraitLocation() const
{
    return returnPortraitLocation_;
}

void IdCardRequestBody::setReturnPortraitLocation(bool value)
{
    returnPortraitLocation_ = value;
    returnPortraitLocationIsSet_ = true;
}

bool IdCardRequestBody::returnPortraitLocationIsSet() const
{
    return returnPortraitLocationIsSet_;
}

void IdCardRequestBody::unsetreturnPortraitLocation()
{
    returnPortraitLocationIsSet_ = false;
}

bool IdCardRequestBody::isReturnPortraitImage() const
{
    return returnPortraitImage_;
}

void IdCardRequestBody::setReturnPortraitImage(bool value)
{
    returnPortraitImage_ = value;
    returnPortraitImageIsSet_ = true;
}

bool IdCardRequestBody::returnPortraitImageIsSet() const
{
    return returnPortraitImageIsSet_;
}

void IdCardRequestBody::unsetreturnPortraitImage()
{
    returnPortraitImageIsSet_ = false;
}

bool IdCardRequestBody::isReturnAdjustedImage() const
{
    return returnAdjustedImage_;
}

void IdCardRequestBody::setReturnAdjustedImage(bool value)
{
    returnAdjustedImage_ = value;
    returnAdjustedImageIsSet_ = true;
}

bool IdCardRequestBody::returnAdjustedImageIsSet() const
{
    return returnAdjustedImageIsSet_;
}

void IdCardRequestBody::unsetreturnAdjustedImage()
{
    returnAdjustedImageIsSet_ = false;
}

bool IdCardRequestBody::isDetectTampering() const
{
    return detectTampering_;
}

void IdCardRequestBody::setDetectTampering(bool value)
{
    detectTampering_ = value;
    detectTamperingIsSet_ = true;
}

bool IdCardRequestBody::detectTamperingIsSet() const
{
    return detectTamperingIsSet_;
}

void IdCardRequestBody::unsetdetectTampering()
{
    detectTamperingIsSet_ = false;
}

bool IdCardRequestBody::isDetectBorderIntegrity() const
{
    return detectBorderIntegrity_;
}

void IdCardRequestBody::setDetectBorderIntegrity(bool value)
{
    detectBorderIntegrity_ = value;
    detectBorderIntegrityIsSet_ = true;
}

bool IdCardRequestBody::detectBorderIntegrityIsSet() const
{
    return detectBorderIntegrityIsSet_;
}

void IdCardRequestBody::unsetdetectBorderIntegrity()
{
    detectBorderIntegrityIsSet_ = false;
}

bool IdCardRequestBody::isDetectBlockingWithinBorder() const
{
    return detectBlockingWithinBorder_;
}

void IdCardRequestBody::setDetectBlockingWithinBorder(bool value)
{
    detectBlockingWithinBorder_ = value;
    detectBlockingWithinBorderIsSet_ = true;
}

bool IdCardRequestBody::detectBlockingWithinBorderIsSet() const
{
    return detectBlockingWithinBorderIsSet_;
}

void IdCardRequestBody::unsetdetectBlockingWithinBorder()
{
    detectBlockingWithinBorderIsSet_ = false;
}

bool IdCardRequestBody::isDetectBlur() const
{
    return detectBlur_;
}

void IdCardRequestBody::setDetectBlur(bool value)
{
    detectBlur_ = value;
    detectBlurIsSet_ = true;
}

bool IdCardRequestBody::detectBlurIsSet() const
{
    return detectBlurIsSet_;
}

void IdCardRequestBody::unsetdetectBlur()
{
    detectBlurIsSet_ = false;
}

bool IdCardRequestBody::isDetectInterim() const
{
    return detectInterim_;
}

void IdCardRequestBody::setDetectInterim(bool value)
{
    detectInterim_ = value;
    detectInterimIsSet_ = true;
}

bool IdCardRequestBody::detectInterimIsSet() const
{
    return detectInterimIsSet_;
}

void IdCardRequestBody::unsetdetectInterim()
{
    detectInterimIsSet_ = false;
}

bool IdCardRequestBody::isDetectGlare() const
{
    return detectGlare_;
}

void IdCardRequestBody::setDetectGlare(bool value)
{
    detectGlare_ = value;
    detectGlareIsSet_ = true;
}

bool IdCardRequestBody::detectGlareIsSet() const
{
    return detectGlareIsSet_;
}

void IdCardRequestBody::unsetdetectGlare()
{
    detectGlareIsSet_ = false;
}

}
}
}
}
}


