

#include "huaweicloud/ocr/v1/model/CambodianIdCardScoreInformationResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




CambodianIdCardScoreInformationResult::CambodianIdCardScoreInformationResult()
{
    idcardTypeScore_ = 0;
    idcardTypeScoreIsSet_ = false;
    borderIntegrityScore_ = 0;
    borderIntegrityScoreIsSet_ = false;
    blockingWithinBorderScore_ = 0;
    blockingWithinBorderScoreIsSet_ = false;
    blurScore_ = 0;
    blurScoreIsSet_ = false;
    glareScore_ = 0;
    glareScoreIsSet_ = false;
    tamperingScore_ = 0;
    tamperingScoreIsSet_ = false;
}

CambodianIdCardScoreInformationResult::~CambodianIdCardScoreInformationResult() = default;

void CambodianIdCardScoreInformationResult::validate()
{
}

web::json::value CambodianIdCardScoreInformationResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idcardTypeScoreIsSet_) {
        val[utility::conversions::to_string_t("idcard_type_score")] = ModelBase::toJson(idcardTypeScore_);
    }
    if(borderIntegrityScoreIsSet_) {
        val[utility::conversions::to_string_t("border_integrity_score")] = ModelBase::toJson(borderIntegrityScore_);
    }
    if(blockingWithinBorderScoreIsSet_) {
        val[utility::conversions::to_string_t("blocking_within_border_score")] = ModelBase::toJson(blockingWithinBorderScore_);
    }
    if(blurScoreIsSet_) {
        val[utility::conversions::to_string_t("blur_score")] = ModelBase::toJson(blurScore_);
    }
    if(glareScoreIsSet_) {
        val[utility::conversions::to_string_t("glare_score")] = ModelBase::toJson(glareScore_);
    }
    if(tamperingScoreIsSet_) {
        val[utility::conversions::to_string_t("tampering_score")] = ModelBase::toJson(tamperingScore_);
    }

    return val;
}
bool CambodianIdCardScoreInformationResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("idcard_type_score"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("idcard_type_score"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdcardTypeScore(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("blocking_within_border_score"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("blocking_within_border_score"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBlockingWithinBorderScore(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("tampering_score"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tampering_score"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTamperingScore(refVal);
        }
    }
    return ok;
}


int32_t CambodianIdCardScoreInformationResult::getIdcardTypeScore() const
{
    return idcardTypeScore_;
}

void CambodianIdCardScoreInformationResult::setIdcardTypeScore(int32_t value)
{
    idcardTypeScore_ = value;
    idcardTypeScoreIsSet_ = true;
}

bool CambodianIdCardScoreInformationResult::idcardTypeScoreIsSet() const
{
    return idcardTypeScoreIsSet_;
}

void CambodianIdCardScoreInformationResult::unsetidcardTypeScore()
{
    idcardTypeScoreIsSet_ = false;
}

int32_t CambodianIdCardScoreInformationResult::getBorderIntegrityScore() const
{
    return borderIntegrityScore_;
}

void CambodianIdCardScoreInformationResult::setBorderIntegrityScore(int32_t value)
{
    borderIntegrityScore_ = value;
    borderIntegrityScoreIsSet_ = true;
}

bool CambodianIdCardScoreInformationResult::borderIntegrityScoreIsSet() const
{
    return borderIntegrityScoreIsSet_;
}

void CambodianIdCardScoreInformationResult::unsetborderIntegrityScore()
{
    borderIntegrityScoreIsSet_ = false;
}

int32_t CambodianIdCardScoreInformationResult::getBlockingWithinBorderScore() const
{
    return blockingWithinBorderScore_;
}

void CambodianIdCardScoreInformationResult::setBlockingWithinBorderScore(int32_t value)
{
    blockingWithinBorderScore_ = value;
    blockingWithinBorderScoreIsSet_ = true;
}

bool CambodianIdCardScoreInformationResult::blockingWithinBorderScoreIsSet() const
{
    return blockingWithinBorderScoreIsSet_;
}

void CambodianIdCardScoreInformationResult::unsetblockingWithinBorderScore()
{
    blockingWithinBorderScoreIsSet_ = false;
}

int32_t CambodianIdCardScoreInformationResult::getBlurScore() const
{
    return blurScore_;
}

void CambodianIdCardScoreInformationResult::setBlurScore(int32_t value)
{
    blurScore_ = value;
    blurScoreIsSet_ = true;
}

bool CambodianIdCardScoreInformationResult::blurScoreIsSet() const
{
    return blurScoreIsSet_;
}

void CambodianIdCardScoreInformationResult::unsetblurScore()
{
    blurScoreIsSet_ = false;
}

int32_t CambodianIdCardScoreInformationResult::getGlareScore() const
{
    return glareScore_;
}

void CambodianIdCardScoreInformationResult::setGlareScore(int32_t value)
{
    glareScore_ = value;
    glareScoreIsSet_ = true;
}

bool CambodianIdCardScoreInformationResult::glareScoreIsSet() const
{
    return glareScoreIsSet_;
}

void CambodianIdCardScoreInformationResult::unsetglareScore()
{
    glareScoreIsSet_ = false;
}

int32_t CambodianIdCardScoreInformationResult::getTamperingScore() const
{
    return tamperingScore_;
}

void CambodianIdCardScoreInformationResult::setTamperingScore(int32_t value)
{
    tamperingScore_ = value;
    tamperingScoreIsSet_ = true;
}

bool CambodianIdCardScoreInformationResult::tamperingScoreIsSet() const
{
    return tamperingScoreIsSet_;
}

void CambodianIdCardScoreInformationResult::unsettamperingScore()
{
    tamperingScoreIsSet_ = false;
}

}
}
}
}
}


