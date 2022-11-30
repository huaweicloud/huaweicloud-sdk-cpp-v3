

#include "huaweicloud/ocr/v1/model/IdcardVerificationResult.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




IdcardVerificationResult::IdcardVerificationResult()
{
    validNumber_ = false;
    validNumberIsSet_ = false;
    validBirth_ = false;
    validBirthIsSet_ = false;
    validSex_ = false;
    validSexIsSet_ = false;
    validDate_ = false;
    validDateIsSet_ = false;
}

IdcardVerificationResult::~IdcardVerificationResult() = default;

void IdcardVerificationResult::validate()
{
}

web::json::value IdcardVerificationResult::toJson() const
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
    if(validDateIsSet_) {
        val[utility::conversions::to_string_t("valid_date")] = ModelBase::toJson(validDate_);
    }

    return val;
}

bool IdcardVerificationResult::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("valid_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("valid_date"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValidDate(refVal);
        }
    }
    return ok;
}


bool IdcardVerificationResult::isValidNumber() const
{
    return validNumber_;
}

void IdcardVerificationResult::setValidNumber(bool value)
{
    validNumber_ = value;
    validNumberIsSet_ = true;
}

bool IdcardVerificationResult::validNumberIsSet() const
{
    return validNumberIsSet_;
}

void IdcardVerificationResult::unsetvalidNumber()
{
    validNumberIsSet_ = false;
}

bool IdcardVerificationResult::isValidBirth() const
{
    return validBirth_;
}

void IdcardVerificationResult::setValidBirth(bool value)
{
    validBirth_ = value;
    validBirthIsSet_ = true;
}

bool IdcardVerificationResult::validBirthIsSet() const
{
    return validBirthIsSet_;
}

void IdcardVerificationResult::unsetvalidBirth()
{
    validBirthIsSet_ = false;
}

bool IdcardVerificationResult::isValidSex() const
{
    return validSex_;
}

void IdcardVerificationResult::setValidSex(bool value)
{
    validSex_ = value;
    validSexIsSet_ = true;
}

bool IdcardVerificationResult::validSexIsSet() const
{
    return validSexIsSet_;
}

void IdcardVerificationResult::unsetvalidSex()
{
    validSexIsSet_ = false;
}

bool IdcardVerificationResult::isValidDate() const
{
    return validDate_;
}

void IdcardVerificationResult::setValidDate(bool value)
{
    validDate_ = value;
    validDateIsSet_ = true;
}

bool IdcardVerificationResult::validDateIsSet() const
{
    return validDateIsSet_;
}

void IdcardVerificationResult::unsetvalidDate()
{
    validDateIsSet_ = false;
}

}
}
}
}
}


