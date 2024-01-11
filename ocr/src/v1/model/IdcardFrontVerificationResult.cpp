

#include "huaweicloud/ocr/v1/model/IdcardFrontVerificationResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




IdcardFrontVerificationResult::IdcardFrontVerificationResult()
{
    validNumber_ = false;
    validNumberIsSet_ = false;
    validBirth_ = false;
    validBirthIsSet_ = false;
    validSex_ = false;
    validSexIsSet_ = false;
}

IdcardFrontVerificationResult::~IdcardFrontVerificationResult() = default;

void IdcardFrontVerificationResult::validate()
{
}

web::json::value IdcardFrontVerificationResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(validNumberIsSet_) {
        val[utility::conversions::to_string_t("valid_number")] = ModelBase::toJson(validNumber_);
    }
    if(validBirthIsSet_) {
        val[utility::conversions::to_string_t("valid_birth")] = ModelBase::toJson(validBirth_);
    }
    if(validSexIsSet_) {
        val[utility::conversions::to_string_t("valid_sex")] = ModelBase::toJson(validSex_);
    }

    return val;
}
bool IdcardFrontVerificationResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("valid_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("valid_number"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValidNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("valid_birth"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("valid_birth"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValidBirth(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("valid_sex"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("valid_sex"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValidSex(refVal);
        }
    }
    return ok;
}


bool IdcardFrontVerificationResult::isValidNumber() const
{
    return validNumber_;
}

void IdcardFrontVerificationResult::setValidNumber(bool value)
{
    validNumber_ = value;
    validNumberIsSet_ = true;
}

bool IdcardFrontVerificationResult::validNumberIsSet() const
{
    return validNumberIsSet_;
}

void IdcardFrontVerificationResult::unsetvalidNumber()
{
    validNumberIsSet_ = false;
}

bool IdcardFrontVerificationResult::isValidBirth() const
{
    return validBirth_;
}

void IdcardFrontVerificationResult::setValidBirth(bool value)
{
    validBirth_ = value;
    validBirthIsSet_ = true;
}

bool IdcardFrontVerificationResult::validBirthIsSet() const
{
    return validBirthIsSet_;
}

void IdcardFrontVerificationResult::unsetvalidBirth()
{
    validBirthIsSet_ = false;
}

bool IdcardFrontVerificationResult::isValidSex() const
{
    return validSex_;
}

void IdcardFrontVerificationResult::setValidSex(bool value)
{
    validSex_ = value;
    validSexIsSet_ = true;
}

bool IdcardFrontVerificationResult::validSexIsSet() const
{
    return validSexIsSet_;
}

void IdcardFrontVerificationResult::unsetvalidSex()
{
    validSexIsSet_ = false;
}

}
}
}
}
}


