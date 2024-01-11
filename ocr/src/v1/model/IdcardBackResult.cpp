

#include "huaweicloud/ocr/v1/model/IdcardBackResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




IdcardBackResult::IdcardBackResult()
{
    issue_ = "";
    issueIsSet_ = false;
    validFrom_ = "";
    validFromIsSet_ = false;
    validTo_ = "";
    validToIsSet_ = false;
    verificationResultIsSet_ = false;
    textLocationIsSet_ = false;
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

IdcardBackResult::~IdcardBackResult() = default;

void IdcardBackResult::validate()
{
}

web::json::value IdcardBackResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(issueIsSet_) {
        val[utility::conversions::to_string_t("issue")] = ModelBase::toJson(issue_);
    }
    if(validFromIsSet_) {
        val[utility::conversions::to_string_t("valid_from")] = ModelBase::toJson(validFrom_);
    }
    if(validToIsSet_) {
        val[utility::conversions::to_string_t("valid_to")] = ModelBase::toJson(validTo_);
    }
    if(verificationResultIsSet_) {
        val[utility::conversions::to_string_t("verification_result")] = ModelBase::toJson(verificationResult_);
    }
    if(textLocationIsSet_) {
        val[utility::conversions::to_string_t("text_location")] = ModelBase::toJson(textLocation_);
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
bool IdcardBackResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("issue"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("valid_from"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("valid_from"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValidFrom(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("valid_to"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("valid_to"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValidTo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("verification_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("verification_result"));
        if(!fieldValue.is_null())
        {
            IdcardBackVerificationResult refVal;
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


std::string IdcardBackResult::getIssue() const
{
    return issue_;
}

void IdcardBackResult::setIssue(const std::string& value)
{
    issue_ = value;
    issueIsSet_ = true;
}

bool IdcardBackResult::issueIsSet() const
{
    return issueIsSet_;
}

void IdcardBackResult::unsetissue()
{
    issueIsSet_ = false;
}

std::string IdcardBackResult::getValidFrom() const
{
    return validFrom_;
}

void IdcardBackResult::setValidFrom(const std::string& value)
{
    validFrom_ = value;
    validFromIsSet_ = true;
}

bool IdcardBackResult::validFromIsSet() const
{
    return validFromIsSet_;
}

void IdcardBackResult::unsetvalidFrom()
{
    validFromIsSet_ = false;
}

std::string IdcardBackResult::getValidTo() const
{
    return validTo_;
}

void IdcardBackResult::setValidTo(const std::string& value)
{
    validTo_ = value;
    validToIsSet_ = true;
}

bool IdcardBackResult::validToIsSet() const
{
    return validToIsSet_;
}

void IdcardBackResult::unsetvalidTo()
{
    validToIsSet_ = false;
}

IdcardBackVerificationResult IdcardBackResult::getVerificationResult() const
{
    return verificationResult_;
}

void IdcardBackResult::setVerificationResult(const IdcardBackVerificationResult& value)
{
    verificationResult_ = value;
    verificationResultIsSet_ = true;
}

bool IdcardBackResult::verificationResultIsSet() const
{
    return verificationResultIsSet_;
}

void IdcardBackResult::unsetverificationResult()
{
    verificationResultIsSet_ = false;
}

Object IdcardBackResult::getTextLocation() const
{
    return textLocation_;
}

void IdcardBackResult::setTextLocation(const Object& value)
{
    textLocation_ = value;
    textLocationIsSet_ = true;
}

bool IdcardBackResult::textLocationIsSet() const
{
    return textLocationIsSet_;
}

void IdcardBackResult::unsettextLocation()
{
    textLocationIsSet_ = false;
}

bool IdcardBackResult::isDetectReproduceResult() const
{
    return detectReproduceResult_;
}

void IdcardBackResult::setDetectReproduceResult(bool value)
{
    detectReproduceResult_ = value;
    detectReproduceResultIsSet_ = true;
}

bool IdcardBackResult::detectReproduceResultIsSet() const
{
    return detectReproduceResultIsSet_;
}

void IdcardBackResult::unsetdetectReproduceResult()
{
    detectReproduceResultIsSet_ = false;
}

bool IdcardBackResult::isDetectCopyResult() const
{
    return detectCopyResult_;
}

void IdcardBackResult::setDetectCopyResult(bool value)
{
    detectCopyResult_ = value;
    detectCopyResultIsSet_ = true;
}

bool IdcardBackResult::detectCopyResultIsSet() const
{
    return detectCopyResultIsSet_;
}

void IdcardBackResult::unsetdetectCopyResult()
{
    detectCopyResultIsSet_ = false;
}

bool IdcardBackResult::isDetectTamperingResult() const
{
    return detectTamperingResult_;
}

void IdcardBackResult::setDetectTamperingResult(bool value)
{
    detectTamperingResult_ = value;
    detectTamperingResultIsSet_ = true;
}

bool IdcardBackResult::detectTamperingResultIsSet() const
{
    return detectTamperingResultIsSet_;
}

void IdcardBackResult::unsetdetectTamperingResult()
{
    detectTamperingResultIsSet_ = false;
}

bool IdcardBackResult::isDetectBorderIntegrityResult() const
{
    return detectBorderIntegrityResult_;
}

void IdcardBackResult::setDetectBorderIntegrityResult(bool value)
{
    detectBorderIntegrityResult_ = value;
    detectBorderIntegrityResultIsSet_ = true;
}

bool IdcardBackResult::detectBorderIntegrityResultIsSet() const
{
    return detectBorderIntegrityResultIsSet_;
}

void IdcardBackResult::unsetdetectBorderIntegrityResult()
{
    detectBorderIntegrityResultIsSet_ = false;
}

bool IdcardBackResult::isDetectBlockingWithinBorderResult() const
{
    return detectBlockingWithinBorderResult_;
}

void IdcardBackResult::setDetectBlockingWithinBorderResult(bool value)
{
    detectBlockingWithinBorderResult_ = value;
    detectBlockingWithinBorderResultIsSet_ = true;
}

bool IdcardBackResult::detectBlockingWithinBorderResultIsSet() const
{
    return detectBlockingWithinBorderResultIsSet_;
}

void IdcardBackResult::unsetdetectBlockingWithinBorderResult()
{
    detectBlockingWithinBorderResultIsSet_ = false;
}

bool IdcardBackResult::isDetectBlurResult() const
{
    return detectBlurResult_;
}

void IdcardBackResult::setDetectBlurResult(bool value)
{
    detectBlurResult_ = value;
    detectBlurResultIsSet_ = true;
}

bool IdcardBackResult::detectBlurResultIsSet() const
{
    return detectBlurResultIsSet_;
}

void IdcardBackResult::unsetdetectBlurResult()
{
    detectBlurResultIsSet_ = false;
}

bool IdcardBackResult::isDetectInterimResult() const
{
    return detectInterimResult_;
}

void IdcardBackResult::setDetectInterimResult(bool value)
{
    detectInterimResult_ = value;
    detectInterimResultIsSet_ = true;
}

bool IdcardBackResult::detectInterimResultIsSet() const
{
    return detectInterimResultIsSet_;
}

void IdcardBackResult::unsetdetectInterimResult()
{
    detectInterimResultIsSet_ = false;
}

bool IdcardBackResult::isDetectGlareResult() const
{
    return detectGlareResult_;
}

void IdcardBackResult::setDetectGlareResult(bool value)
{
    detectGlareResult_ = value;
    detectGlareResultIsSet_ = true;
}

bool IdcardBackResult::detectGlareResultIsSet() const
{
    return detectGlareResultIsSet_;
}

void IdcardBackResult::unsetdetectGlareResult()
{
    detectGlareResultIsSet_ = false;
}

IdcardScoreInfoResult IdcardBackResult::getScoreInfo() const
{
    return scoreInfo_;
}

void IdcardBackResult::setScoreInfo(const IdcardScoreInfoResult& value)
{
    scoreInfo_ = value;
    scoreInfoIsSet_ = true;
}

bool IdcardBackResult::scoreInfoIsSet() const
{
    return scoreInfoIsSet_;
}

void IdcardBackResult::unsetscoreInfo()
{
    scoreInfoIsSet_ = false;
}

}
}
}
}
}


