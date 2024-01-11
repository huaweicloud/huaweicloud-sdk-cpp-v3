

#include "huaweicloud/ocr/v1/model/IdcardScoreInfoResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




IdcardScoreInfoResult::IdcardScoreInfoResult()
{
    tamperingScore_ = 0;
    tamperingScoreIsSet_ = false;
    interimScore_ = 0;
    interimScoreIsSet_ = false;
    reproduceScore_ = 0;
    reproduceScoreIsSet_ = false;
    copyScore_ = 0;
    copyScoreIsSet_ = false;
    borderIntegrityScore_ = 0;
    borderIntegrityScoreIsSet_ = false;
    blurScore_ = 0;
    blurScoreIsSet_ = false;
    glareScore_ = 0;
    glareScoreIsSet_ = false;
    blockingWithinBorderScore_ = 0;
    blockingWithinBorderScoreIsSet_ = false;
}

IdcardScoreInfoResult::~IdcardScoreInfoResult() = default;

void IdcardScoreInfoResult::validate()
{
}

web::json::value IdcardScoreInfoResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tamperingScoreIsSet_) {
        val[utility::conversions::to_string_t("tampering_score")] = ModelBase::toJson(tamperingScore_);
    }
    if(interimScoreIsSet_) {
        val[utility::conversions::to_string_t("interim_score")] = ModelBase::toJson(interimScore_);
    }
    if(reproduceScoreIsSet_) {
        val[utility::conversions::to_string_t("reproduce_score")] = ModelBase::toJson(reproduceScore_);
    }
    if(copyScoreIsSet_) {
        val[utility::conversions::to_string_t("copy_score")] = ModelBase::toJson(copyScore_);
    }
    if(borderIntegrityScoreIsSet_) {
        val[utility::conversions::to_string_t("border_integrity_score")] = ModelBase::toJson(borderIntegrityScore_);
    }
    if(blurScoreIsSet_) {
        val[utility::conversions::to_string_t("blur_score")] = ModelBase::toJson(blurScore_);
    }
    if(glareScoreIsSet_) {
        val[utility::conversions::to_string_t("glare_score")] = ModelBase::toJson(glareScore_);
    }
    if(blockingWithinBorderScoreIsSet_) {
        val[utility::conversions::to_string_t("blocking_within_border_score")] = ModelBase::toJson(blockingWithinBorderScore_);
    }

    return val;
}
bool IdcardScoreInfoResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tampering_score"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tampering_score"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTamperingScore(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("interim_score"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("interim_score"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInterimScore(refVal);
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
    return ok;
}


int32_t IdcardScoreInfoResult::getTamperingScore() const
{
    return tamperingScore_;
}

void IdcardScoreInfoResult::setTamperingScore(int32_t value)
{
    tamperingScore_ = value;
    tamperingScoreIsSet_ = true;
}

bool IdcardScoreInfoResult::tamperingScoreIsSet() const
{
    return tamperingScoreIsSet_;
}

void IdcardScoreInfoResult::unsettamperingScore()
{
    tamperingScoreIsSet_ = false;
}

int32_t IdcardScoreInfoResult::getInterimScore() const
{
    return interimScore_;
}

void IdcardScoreInfoResult::setInterimScore(int32_t value)
{
    interimScore_ = value;
    interimScoreIsSet_ = true;
}

bool IdcardScoreInfoResult::interimScoreIsSet() const
{
    return interimScoreIsSet_;
}

void IdcardScoreInfoResult::unsetinterimScore()
{
    interimScoreIsSet_ = false;
}

int32_t IdcardScoreInfoResult::getReproduceScore() const
{
    return reproduceScore_;
}

void IdcardScoreInfoResult::setReproduceScore(int32_t value)
{
    reproduceScore_ = value;
    reproduceScoreIsSet_ = true;
}

bool IdcardScoreInfoResult::reproduceScoreIsSet() const
{
    return reproduceScoreIsSet_;
}

void IdcardScoreInfoResult::unsetreproduceScore()
{
    reproduceScoreIsSet_ = false;
}

int32_t IdcardScoreInfoResult::getCopyScore() const
{
    return copyScore_;
}

void IdcardScoreInfoResult::setCopyScore(int32_t value)
{
    copyScore_ = value;
    copyScoreIsSet_ = true;
}

bool IdcardScoreInfoResult::copyScoreIsSet() const
{
    return copyScoreIsSet_;
}

void IdcardScoreInfoResult::unsetcopyScore()
{
    copyScoreIsSet_ = false;
}

int32_t IdcardScoreInfoResult::getBorderIntegrityScore() const
{
    return borderIntegrityScore_;
}

void IdcardScoreInfoResult::setBorderIntegrityScore(int32_t value)
{
    borderIntegrityScore_ = value;
    borderIntegrityScoreIsSet_ = true;
}

bool IdcardScoreInfoResult::borderIntegrityScoreIsSet() const
{
    return borderIntegrityScoreIsSet_;
}

void IdcardScoreInfoResult::unsetborderIntegrityScore()
{
    borderIntegrityScoreIsSet_ = false;
}

int32_t IdcardScoreInfoResult::getBlurScore() const
{
    return blurScore_;
}

void IdcardScoreInfoResult::setBlurScore(int32_t value)
{
    blurScore_ = value;
    blurScoreIsSet_ = true;
}

bool IdcardScoreInfoResult::blurScoreIsSet() const
{
    return blurScoreIsSet_;
}

void IdcardScoreInfoResult::unsetblurScore()
{
    blurScoreIsSet_ = false;
}

int32_t IdcardScoreInfoResult::getGlareScore() const
{
    return glareScore_;
}

void IdcardScoreInfoResult::setGlareScore(int32_t value)
{
    glareScore_ = value;
    glareScoreIsSet_ = true;
}

bool IdcardScoreInfoResult::glareScoreIsSet() const
{
    return glareScoreIsSet_;
}

void IdcardScoreInfoResult::unsetglareScore()
{
    glareScoreIsSet_ = false;
}

int32_t IdcardScoreInfoResult::getBlockingWithinBorderScore() const
{
    return blockingWithinBorderScore_;
}

void IdcardScoreInfoResult::setBlockingWithinBorderScore(int32_t value)
{
    blockingWithinBorderScore_ = value;
    blockingWithinBorderScoreIsSet_ = true;
}

bool IdcardScoreInfoResult::blockingWithinBorderScoreIsSet() const
{
    return blockingWithinBorderScoreIsSet_;
}

void IdcardScoreInfoResult::unsetblockingWithinBorderScore()
{
    blockingWithinBorderScoreIsSet_ = false;
}

}
}
}
}
}


