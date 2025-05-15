

#include "huaweicloud/ocr/v1/model/AutoIdDocClassificationAlarmConfidence.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




AutoIdDocClassificationAlarmConfidence::AutoIdDocClassificationAlarmConfidence()
{
    blurScore_ = 0;
    blurScoreIsSet_ = false;
    glareScore_ = 0;
    glareScoreIsSet_ = false;
    blockingWithinBorderScore_ = 0;
    blockingWithinBorderScoreIsSet_ = false;
    insufficientLightingScore_ = 0;
    insufficientLightingScoreIsSet_ = false;
    copyScore_ = 0;
    copyScoreIsSet_ = false;
    borderIntegrityScore_ = 0;
    borderIntegrityScoreIsSet_ = false;
    reproduceScore_ = 0;
    reproduceScoreIsSet_ = false;
}

AutoIdDocClassificationAlarmConfidence::~AutoIdDocClassificationAlarmConfidence() = default;

void AutoIdDocClassificationAlarmConfidence::validate()
{
}

web::json::value AutoIdDocClassificationAlarmConfidence::toJson() const
{
    web::json::value val = web::json::value::object();

    if(blurScoreIsSet_) {
        val[utility::conversions::to_string_t("blur_score")] = ModelBase::toJson(blurScore_);
    }
    if(glareScoreIsSet_) {
        val[utility::conversions::to_string_t("glare_score")] = ModelBase::toJson(glareScore_);
    }
    if(blockingWithinBorderScoreIsSet_) {
        val[utility::conversions::to_string_t("blocking_within_border_score")] = ModelBase::toJson(blockingWithinBorderScore_);
    }
    if(insufficientLightingScoreIsSet_) {
        val[utility::conversions::to_string_t("insufficient_lighting_score")] = ModelBase::toJson(insufficientLightingScore_);
    }
    if(copyScoreIsSet_) {
        val[utility::conversions::to_string_t("copy_score")] = ModelBase::toJson(copyScore_);
    }
    if(borderIntegrityScoreIsSet_) {
        val[utility::conversions::to_string_t("border_integrity_score")] = ModelBase::toJson(borderIntegrityScore_);
    }
    if(reproduceScoreIsSet_) {
        val[utility::conversions::to_string_t("reproduce_score")] = ModelBase::toJson(reproduceScore_);
    }

    return val;
}
bool AutoIdDocClassificationAlarmConfidence::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("blur_score"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("blur_score"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBlurScore(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("glare_score"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("glare_score"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGlareScore(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("blocking_within_border_score"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("blocking_within_border_score"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBlockingWithinBorderScore(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("insufficient_lighting_score"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("insufficient_lighting_score"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInsufficientLightingScore(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("copy_score"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("copy_score"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCopyScore(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("border_integrity_score"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("border_integrity_score"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBorderIntegrityScore(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reproduce_score"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reproduce_score"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReproduceScore(refVal);
        }
    }
    return ok;
}


int32_t AutoIdDocClassificationAlarmConfidence::getBlurScore() const
{
    return blurScore_;
}

void AutoIdDocClassificationAlarmConfidence::setBlurScore(int32_t value)
{
    blurScore_ = value;
    blurScoreIsSet_ = true;
}

bool AutoIdDocClassificationAlarmConfidence::blurScoreIsSet() const
{
    return blurScoreIsSet_;
}

void AutoIdDocClassificationAlarmConfidence::unsetblurScore()
{
    blurScoreIsSet_ = false;
}

int32_t AutoIdDocClassificationAlarmConfidence::getGlareScore() const
{
    return glareScore_;
}

void AutoIdDocClassificationAlarmConfidence::setGlareScore(int32_t value)
{
    glareScore_ = value;
    glareScoreIsSet_ = true;
}

bool AutoIdDocClassificationAlarmConfidence::glareScoreIsSet() const
{
    return glareScoreIsSet_;
}

void AutoIdDocClassificationAlarmConfidence::unsetglareScore()
{
    glareScoreIsSet_ = false;
}

int32_t AutoIdDocClassificationAlarmConfidence::getBlockingWithinBorderScore() const
{
    return blockingWithinBorderScore_;
}

void AutoIdDocClassificationAlarmConfidence::setBlockingWithinBorderScore(int32_t value)
{
    blockingWithinBorderScore_ = value;
    blockingWithinBorderScoreIsSet_ = true;
}

bool AutoIdDocClassificationAlarmConfidence::blockingWithinBorderScoreIsSet() const
{
    return blockingWithinBorderScoreIsSet_;
}

void AutoIdDocClassificationAlarmConfidence::unsetblockingWithinBorderScore()
{
    blockingWithinBorderScoreIsSet_ = false;
}

int32_t AutoIdDocClassificationAlarmConfidence::getInsufficientLightingScore() const
{
    return insufficientLightingScore_;
}

void AutoIdDocClassificationAlarmConfidence::setInsufficientLightingScore(int32_t value)
{
    insufficientLightingScore_ = value;
    insufficientLightingScoreIsSet_ = true;
}

bool AutoIdDocClassificationAlarmConfidence::insufficientLightingScoreIsSet() const
{
    return insufficientLightingScoreIsSet_;
}

void AutoIdDocClassificationAlarmConfidence::unsetinsufficientLightingScore()
{
    insufficientLightingScoreIsSet_ = false;
}

int32_t AutoIdDocClassificationAlarmConfidence::getCopyScore() const
{
    return copyScore_;
}

void AutoIdDocClassificationAlarmConfidence::setCopyScore(int32_t value)
{
    copyScore_ = value;
    copyScoreIsSet_ = true;
}

bool AutoIdDocClassificationAlarmConfidence::copyScoreIsSet() const
{
    return copyScoreIsSet_;
}

void AutoIdDocClassificationAlarmConfidence::unsetcopyScore()
{
    copyScoreIsSet_ = false;
}

int32_t AutoIdDocClassificationAlarmConfidence::getBorderIntegrityScore() const
{
    return borderIntegrityScore_;
}

void AutoIdDocClassificationAlarmConfidence::setBorderIntegrityScore(int32_t value)
{
    borderIntegrityScore_ = value;
    borderIntegrityScoreIsSet_ = true;
}

bool AutoIdDocClassificationAlarmConfidence::borderIntegrityScoreIsSet() const
{
    return borderIntegrityScoreIsSet_;
}

void AutoIdDocClassificationAlarmConfidence::unsetborderIntegrityScore()
{
    borderIntegrityScoreIsSet_ = false;
}

int32_t AutoIdDocClassificationAlarmConfidence::getReproduceScore() const
{
    return reproduceScore_;
}

void AutoIdDocClassificationAlarmConfidence::setReproduceScore(int32_t value)
{
    reproduceScore_ = value;
    reproduceScoreIsSet_ = true;
}

bool AutoIdDocClassificationAlarmConfidence::reproduceScoreIsSet() const
{
    return reproduceScoreIsSet_;
}

void AutoIdDocClassificationAlarmConfidence::unsetreproduceScore()
{
    reproduceScoreIsSet_ = false;
}

}
}
}
}
}


