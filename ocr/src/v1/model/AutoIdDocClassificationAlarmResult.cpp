

#include "huaweicloud/ocr/v1/model/AutoIdDocClassificationAlarmResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




AutoIdDocClassificationAlarmResult::AutoIdDocClassificationAlarmResult()
{
    detectBlurResult_ = false;
    detectBlurResultIsSet_ = false;
    detectGlareResult_ = false;
    detectGlareResultIsSet_ = false;
    detectBlockingWithinBorderResult_ = false;
    detectBlockingWithinBorderResultIsSet_ = false;
    detectInsufficientLightingResult_ = false;
    detectInsufficientLightingResultIsSet_ = false;
    detectCopyResult_ = false;
    detectCopyResultIsSet_ = false;
    detectBorderIntegrityResult_ = false;
    detectBorderIntegrityResultIsSet_ = false;
    detectReproduceResult_ = false;
    detectReproduceResultIsSet_ = false;
}

AutoIdDocClassificationAlarmResult::~AutoIdDocClassificationAlarmResult() = default;

void AutoIdDocClassificationAlarmResult::validate()
{
}

web::json::value AutoIdDocClassificationAlarmResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(detectBlurResultIsSet_) {
        val[utility::conversions::to_string_t("detect_blur_result")] = ModelBase::toJson(detectBlurResult_);
    }
    if(detectGlareResultIsSet_) {
        val[utility::conversions::to_string_t("detect_glare_result")] = ModelBase::toJson(detectGlareResult_);
    }
    if(detectBlockingWithinBorderResultIsSet_) {
        val[utility::conversions::to_string_t("detect_blocking_within_border_result")] = ModelBase::toJson(detectBlockingWithinBorderResult_);
    }
    if(detectInsufficientLightingResultIsSet_) {
        val[utility::conversions::to_string_t("detect_insufficient_lighting_result")] = ModelBase::toJson(detectInsufficientLightingResult_);
    }
    if(detectCopyResultIsSet_) {
        val[utility::conversions::to_string_t("detect_copy_result")] = ModelBase::toJson(detectCopyResult_);
    }
    if(detectBorderIntegrityResultIsSet_) {
        val[utility::conversions::to_string_t("detect_border_integrity_result")] = ModelBase::toJson(detectBorderIntegrityResult_);
    }
    if(detectReproduceResultIsSet_) {
        val[utility::conversions::to_string_t("detect_reproduce_result")] = ModelBase::toJson(detectReproduceResult_);
    }

    return val;
}
bool AutoIdDocClassificationAlarmResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("detect_blur_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("detect_blur_result"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDetectBlurResult(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("detect_blocking_within_border_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("detect_blocking_within_border_result"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDetectBlockingWithinBorderResult(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("detect_insufficient_lighting_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("detect_insufficient_lighting_result"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDetectInsufficientLightingResult(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("detect_border_integrity_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("detect_border_integrity_result"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDetectBorderIntegrityResult(refVal);
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
    return ok;
}


bool AutoIdDocClassificationAlarmResult::isDetectBlurResult() const
{
    return detectBlurResult_;
}

void AutoIdDocClassificationAlarmResult::setDetectBlurResult(bool value)
{
    detectBlurResult_ = value;
    detectBlurResultIsSet_ = true;
}

bool AutoIdDocClassificationAlarmResult::detectBlurResultIsSet() const
{
    return detectBlurResultIsSet_;
}

void AutoIdDocClassificationAlarmResult::unsetdetectBlurResult()
{
    detectBlurResultIsSet_ = false;
}

bool AutoIdDocClassificationAlarmResult::isDetectGlareResult() const
{
    return detectGlareResult_;
}

void AutoIdDocClassificationAlarmResult::setDetectGlareResult(bool value)
{
    detectGlareResult_ = value;
    detectGlareResultIsSet_ = true;
}

bool AutoIdDocClassificationAlarmResult::detectGlareResultIsSet() const
{
    return detectGlareResultIsSet_;
}

void AutoIdDocClassificationAlarmResult::unsetdetectGlareResult()
{
    detectGlareResultIsSet_ = false;
}

bool AutoIdDocClassificationAlarmResult::isDetectBlockingWithinBorderResult() const
{
    return detectBlockingWithinBorderResult_;
}

void AutoIdDocClassificationAlarmResult::setDetectBlockingWithinBorderResult(bool value)
{
    detectBlockingWithinBorderResult_ = value;
    detectBlockingWithinBorderResultIsSet_ = true;
}

bool AutoIdDocClassificationAlarmResult::detectBlockingWithinBorderResultIsSet() const
{
    return detectBlockingWithinBorderResultIsSet_;
}

void AutoIdDocClassificationAlarmResult::unsetdetectBlockingWithinBorderResult()
{
    detectBlockingWithinBorderResultIsSet_ = false;
}

bool AutoIdDocClassificationAlarmResult::isDetectInsufficientLightingResult() const
{
    return detectInsufficientLightingResult_;
}

void AutoIdDocClassificationAlarmResult::setDetectInsufficientLightingResult(bool value)
{
    detectInsufficientLightingResult_ = value;
    detectInsufficientLightingResultIsSet_ = true;
}

bool AutoIdDocClassificationAlarmResult::detectInsufficientLightingResultIsSet() const
{
    return detectInsufficientLightingResultIsSet_;
}

void AutoIdDocClassificationAlarmResult::unsetdetectInsufficientLightingResult()
{
    detectInsufficientLightingResultIsSet_ = false;
}

bool AutoIdDocClassificationAlarmResult::isDetectCopyResult() const
{
    return detectCopyResult_;
}

void AutoIdDocClassificationAlarmResult::setDetectCopyResult(bool value)
{
    detectCopyResult_ = value;
    detectCopyResultIsSet_ = true;
}

bool AutoIdDocClassificationAlarmResult::detectCopyResultIsSet() const
{
    return detectCopyResultIsSet_;
}

void AutoIdDocClassificationAlarmResult::unsetdetectCopyResult()
{
    detectCopyResultIsSet_ = false;
}

bool AutoIdDocClassificationAlarmResult::isDetectBorderIntegrityResult() const
{
    return detectBorderIntegrityResult_;
}

void AutoIdDocClassificationAlarmResult::setDetectBorderIntegrityResult(bool value)
{
    detectBorderIntegrityResult_ = value;
    detectBorderIntegrityResultIsSet_ = true;
}

bool AutoIdDocClassificationAlarmResult::detectBorderIntegrityResultIsSet() const
{
    return detectBorderIntegrityResultIsSet_;
}

void AutoIdDocClassificationAlarmResult::unsetdetectBorderIntegrityResult()
{
    detectBorderIntegrityResultIsSet_ = false;
}

bool AutoIdDocClassificationAlarmResult::isDetectReproduceResult() const
{
    return detectReproduceResult_;
}

void AutoIdDocClassificationAlarmResult::setDetectReproduceResult(bool value)
{
    detectReproduceResult_ = value;
    detectReproduceResultIsSet_ = true;
}

bool AutoIdDocClassificationAlarmResult::detectReproduceResultIsSet() const
{
    return detectReproduceResultIsSet_;
}

void AutoIdDocClassificationAlarmResult::unsetdetectReproduceResult()
{
    detectReproduceResultIsSet_ = false;
}

}
}
}
}
}


