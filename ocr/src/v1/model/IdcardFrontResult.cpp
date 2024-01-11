

#include "huaweicloud/ocr/v1/model/IdcardFrontResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




IdcardFrontResult::IdcardFrontResult()
{
    name_ = "";
    nameIsSet_ = false;
    sex_ = "";
    sexIsSet_ = false;
    birth_ = "";
    birthIsSet_ = false;
    ethnicity_ = "";
    ethnicityIsSet_ = false;
    address_ = "";
    addressIsSet_ = false;
    number_ = "";
    numberIsSet_ = false;
    verificationResultIsSet_ = false;
    textLocationIsSet_ = false;
    portraitLocationIsSet_ = false;
    detectReproduceResult_ = false;
    detectReproduceResultIsSet_ = false;
    detectCopyResult_ = false;
    detectCopyResultIsSet_ = false;
    detectTamperingResult_ = false;
    detectTamperingResultIsSet_ = false;
    detectBorderIntegrityResult_ = false;
    detectBorderIntegrityResultIsSet_ = false;
    detectBlockingWithinBorderResult_ = false;
    detectBlockingWithinBorderResultIsSet_ = false;
    detectBlurResult_ = false;
    detectBlurResultIsSet_ = false;
    detectInterimResult_ = false;
    detectInterimResultIsSet_ = false;
    detectGlareResult_ = false;
    detectGlareResultIsSet_ = false;
    scoreInfoIsSet_ = false;
}

IdcardFrontResult::~IdcardFrontResult() = default;

void IdcardFrontResult::validate()
{
}

web::json::value IdcardFrontResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(sexIsSet_) {
        val[utility::conversions::to_string_t("sex")] = ModelBase::toJson(sex_);
    }
    if(birthIsSet_) {
        val[utility::conversions::to_string_t("birth")] = ModelBase::toJson(birth_);
    }
    if(ethnicityIsSet_) {
        val[utility::conversions::to_string_t("ethnicity")] = ModelBase::toJson(ethnicity_);
    }
    if(addressIsSet_) {
        val[utility::conversions::to_string_t("address")] = ModelBase::toJson(address_);
    }
    if(numberIsSet_) {
        val[utility::conversions::to_string_t("number")] = ModelBase::toJson(number_);
    }
    if(verificationResultIsSet_) {
        val[utility::conversions::to_string_t("verification_result")] = ModelBase::toJson(verificationResult_);
    }
    if(textLocationIsSet_) {
        val[utility::conversions::to_string_t("text_location")] = ModelBase::toJson(textLocation_);
    }
    if(portraitLocationIsSet_) {
        val[utility::conversions::to_string_t("portrait_location")] = ModelBase::toJson(portraitLocation_);
    }
    if(detectReproduceResultIsSet_) {
        val[utility::conversions::to_string_t("detect_reproduce_result")] = ModelBase::toJson(detectReproduceResult_);
    }
    if(detectCopyResultIsSet_) {
        val[utility::conversions::to_string_t("detect_copy_result")] = ModelBase::toJson(detectCopyResult_);
    }
    if(detectTamperingResultIsSet_) {
        val[utility::conversions::to_string_t("detect_tampering_result")] = ModelBase::toJson(detectTamperingResult_);
    }
    if(detectBorderIntegrityResultIsSet_) {
        val[utility::conversions::to_string_t("detect_border_integrity_result")] = ModelBase::toJson(detectBorderIntegrityResult_);
    }
    if(detectBlockingWithinBorderResultIsSet_) {
        val[utility::conversions::to_string_t("detect_blocking_within_border_result")] = ModelBase::toJson(detectBlockingWithinBorderResult_);
    }
    if(detectBlurResultIsSet_) {
        val[utility::conversions::to_string_t("detect_blur_result")] = ModelBase::toJson(detectBlurResult_);
    }
    if(detectInterimResultIsSet_) {
        val[utility::conversions::to_string_t("detect_interim_result")] = ModelBase::toJson(detectInterimResult_);
    }
    if(detectGlareResultIsSet_) {
        val[utility::conversions::to_string_t("detect_glare_result")] = ModelBase::toJson(detectGlareResult_);
    }
    if(scoreInfoIsSet_) {
        val[utility::conversions::to_string_t("score_info")] = ModelBase::toJson(scoreInfo_);
    }

    return val;
}
bool IdcardFrontResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sex"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sex"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSex(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("birth"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("birth"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBirth(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ethnicity"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ethnicity"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEthnicity(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("verification_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("verification_result"));
        if(!fieldValue.is_null())
        {
            IdcardFrontVerificationResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVerificationResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("text_location"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("text_location"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTextLocation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("portrait_location"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("portrait_location"));
        if(!fieldValue.is_null())
        {
            std::vector<std::vector<int32_t>> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPortraitLocation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("detect_reproduce_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("detect_reproduce_result"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDetectReproduceResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("detect_copy_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("detect_copy_result"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDetectCopyResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("detect_tampering_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("detect_tampering_result"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDetectTamperingResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("detect_border_integrity_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("detect_border_integrity_result"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDetectBorderIntegrityResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("detect_blocking_within_border_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("detect_blocking_within_border_result"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDetectBlockingWithinBorderResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("detect_blur_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("detect_blur_result"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDetectBlurResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("detect_interim_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("detect_interim_result"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDetectInterimResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("detect_glare_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("detect_glare_result"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDetectGlareResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("score_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("score_info"));
        if(!fieldValue.is_null())
        {
            IdcardScoreInfoResult refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScoreInfo(refVal);
        }
    }
    return ok;
}


std::string IdcardFrontResult::getName() const
{
    return name_;
}

void IdcardFrontResult::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool IdcardFrontResult::nameIsSet() const
{
    return nameIsSet_;
}

void IdcardFrontResult::unsetname()
{
    nameIsSet_ = false;
}

std::string IdcardFrontResult::getSex() const
{
    return sex_;
}

void IdcardFrontResult::setSex(const std::string& value)
{
    sex_ = value;
    sexIsSet_ = true;
}

bool IdcardFrontResult::sexIsSet() const
{
    return sexIsSet_;
}

void IdcardFrontResult::unsetsex()
{
    sexIsSet_ = false;
}

std::string IdcardFrontResult::getBirth() const
{
    return birth_;
}

void IdcardFrontResult::setBirth(const std::string& value)
{
    birth_ = value;
    birthIsSet_ = true;
}

bool IdcardFrontResult::birthIsSet() const
{
    return birthIsSet_;
}

void IdcardFrontResult::unsetbirth()
{
    birthIsSet_ = false;
}

std::string IdcardFrontResult::getEthnicity() const
{
    return ethnicity_;
}

void IdcardFrontResult::setEthnicity(const std::string& value)
{
    ethnicity_ = value;
    ethnicityIsSet_ = true;
}

bool IdcardFrontResult::ethnicityIsSet() const
{
    return ethnicityIsSet_;
}

void IdcardFrontResult::unsetethnicity()
{
    ethnicityIsSet_ = false;
}

std::string IdcardFrontResult::getAddress() const
{
    return address_;
}

void IdcardFrontResult::setAddress(const std::string& value)
{
    address_ = value;
    addressIsSet_ = true;
}

bool IdcardFrontResult::addressIsSet() const
{
    return addressIsSet_;
}

void IdcardFrontResult::unsetaddress()
{
    addressIsSet_ = false;
}

std::string IdcardFrontResult::getNumber() const
{
    return number_;
}

void IdcardFrontResult::setNumber(const std::string& value)
{
    number_ = value;
    numberIsSet_ = true;
}

bool IdcardFrontResult::numberIsSet() const
{
    return numberIsSet_;
}

void IdcardFrontResult::unsetnumber()
{
    numberIsSet_ = false;
}

IdcardFrontVerificationResult IdcardFrontResult::getVerificationResult() const
{
    return verificationResult_;
}

void IdcardFrontResult::setVerificationResult(const IdcardFrontVerificationResult& value)
{
    verificationResult_ = value;
    verificationResultIsSet_ = true;
}

bool IdcardFrontResult::verificationResultIsSet() const
{
    return verificationResultIsSet_;
}

void IdcardFrontResult::unsetverificationResult()
{
    verificationResultIsSet_ = false;
}

Object IdcardFrontResult::getTextLocation() const
{
    return textLocation_;
}

void IdcardFrontResult::setTextLocation(const Object& value)
{
    textLocation_ = value;
    textLocationIsSet_ = true;
}

bool IdcardFrontResult::textLocationIsSet() const
{
    return textLocationIsSet_;
}

void IdcardFrontResult::unsettextLocation()
{
    textLocationIsSet_ = false;
}

std::vector<std::vector<int32_t>>& IdcardFrontResult::getPortraitLocation()
{
    return portraitLocation_;
}

void IdcardFrontResult::setPortraitLocation(const std::vector<std::vector<int32_t>>& value)
{
    portraitLocation_ = value;
    portraitLocationIsSet_ = true;
}

bool IdcardFrontResult::portraitLocationIsSet() const
{
    return portraitLocationIsSet_;
}

void IdcardFrontResult::unsetportraitLocation()
{
    portraitLocationIsSet_ = false;
}

bool IdcardFrontResult::isDetectReproduceResult() const
{
    return detectReproduceResult_;
}

void IdcardFrontResult::setDetectReproduceResult(bool value)
{
    detectReproduceResult_ = value;
    detectReproduceResultIsSet_ = true;
}

bool IdcardFrontResult::detectReproduceResultIsSet() const
{
    return detectReproduceResultIsSet_;
}

void IdcardFrontResult::unsetdetectReproduceResult()
{
    detectReproduceResultIsSet_ = false;
}

bool IdcardFrontResult::isDetectCopyResult() const
{
    return detectCopyResult_;
}

void IdcardFrontResult::setDetectCopyResult(bool value)
{
    detectCopyResult_ = value;
    detectCopyResultIsSet_ = true;
}

bool IdcardFrontResult::detectCopyResultIsSet() const
{
    return detectCopyResultIsSet_;
}

void IdcardFrontResult::unsetdetectCopyResult()
{
    detectCopyResultIsSet_ = false;
}

bool IdcardFrontResult::isDetectTamperingResult() const
{
    return detectTamperingResult_;
}

void IdcardFrontResult::setDetectTamperingResult(bool value)
{
    detectTamperingResult_ = value;
    detectTamperingResultIsSet_ = true;
}

bool IdcardFrontResult::detectTamperingResultIsSet() const
{
    return detectTamperingResultIsSet_;
}

void IdcardFrontResult::unsetdetectTamperingResult()
{
    detectTamperingResultIsSet_ = false;
}

bool IdcardFrontResult::isDetectBorderIntegrityResult() const
{
    return detectBorderIntegrityResult_;
}

void IdcardFrontResult::setDetectBorderIntegrityResult(bool value)
{
    detectBorderIntegrityResult_ = value;
    detectBorderIntegrityResultIsSet_ = true;
}

bool IdcardFrontResult::detectBorderIntegrityResultIsSet() const
{
    return detectBorderIntegrityResultIsSet_;
}

void IdcardFrontResult::unsetdetectBorderIntegrityResult()
{
    detectBorderIntegrityResultIsSet_ = false;
}

bool IdcardFrontResult::isDetectBlockingWithinBorderResult() const
{
    return detectBlockingWithinBorderResult_;
}

void IdcardFrontResult::setDetectBlockingWithinBorderResult(bool value)
{
    detectBlockingWithinBorderResult_ = value;
    detectBlockingWithinBorderResultIsSet_ = true;
}

bool IdcardFrontResult::detectBlockingWithinBorderResultIsSet() const
{
    return detectBlockingWithinBorderResultIsSet_;
}

void IdcardFrontResult::unsetdetectBlockingWithinBorderResult()
{
    detectBlockingWithinBorderResultIsSet_ = false;
}

bool IdcardFrontResult::isDetectBlurResult() const
{
    return detectBlurResult_;
}

void IdcardFrontResult::setDetectBlurResult(bool value)
{
    detectBlurResult_ = value;
    detectBlurResultIsSet_ = true;
}

bool IdcardFrontResult::detectBlurResultIsSet() const
{
    return detectBlurResultIsSet_;
}

void IdcardFrontResult::unsetdetectBlurResult()
{
    detectBlurResultIsSet_ = false;
}

bool IdcardFrontResult::isDetectInterimResult() const
{
    return detectInterimResult_;
}

void IdcardFrontResult::setDetectInterimResult(bool value)
{
    detectInterimResult_ = value;
    detectInterimResultIsSet_ = true;
}

bool IdcardFrontResult::detectInterimResultIsSet() const
{
    return detectInterimResultIsSet_;
}

void IdcardFrontResult::unsetdetectInterimResult()
{
    detectInterimResultIsSet_ = false;
}

bool IdcardFrontResult::isDetectGlareResult() const
{
    return detectGlareResult_;
}

void IdcardFrontResult::setDetectGlareResult(bool value)
{
    detectGlareResult_ = value;
    detectGlareResultIsSet_ = true;
}

bool IdcardFrontResult::detectGlareResultIsSet() const
{
    return detectGlareResultIsSet_;
}

void IdcardFrontResult::unsetdetectGlareResult()
{
    detectGlareResultIsSet_ = false;
}

IdcardScoreInfoResult IdcardFrontResult::getScoreInfo() const
{
    return scoreInfo_;
}

void IdcardFrontResult::setScoreInfo(const IdcardScoreInfoResult& value)
{
    scoreInfo_ = value;
    scoreInfoIsSet_ = true;
}

bool IdcardFrontResult::scoreInfoIsSet() const
{
    return scoreInfoIsSet_;
}

void IdcardFrontResult::unsetscoreInfo()
{
    scoreInfoIsSet_ = false;
}

}
}
}
}
}


