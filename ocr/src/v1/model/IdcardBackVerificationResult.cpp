

#include "huaweicloud/ocr/v1/model/IdcardBackVerificationResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




IdcardBackVerificationResult::IdcardBackVerificationResult()
{
    validDate_ = false;
    validDateIsSet_ = false;
    validValidityPeriod_ = false;
    validValidityPeriodIsSet_ = false;
}

IdcardBackVerificationResult::~IdcardBackVerificationResult() = default;

void IdcardBackVerificationResult::validate()
{
}

web::json::value IdcardBackVerificationResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(validDateIsSet_) {
        val[utility::conversions::to_string_t("valid_date")] = ModelBase::toJson(validDate_);
    }
    if(validValidityPeriodIsSet_) {
        val[utility::conversions::to_string_t("valid_validity_period")] = ModelBase::toJson(validValidityPeriod_);
    }

    return val;
}
bool IdcardBackVerificationResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("valid_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("valid_date"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValidDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("valid_validity_period"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("valid_validity_period"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValidValidityPeriod(refVal);
        }
    }
    return ok;
}


bool IdcardBackVerificationResult::isValidDate() const
{
    return validDate_;
}

void IdcardBackVerificationResult::setValidDate(bool value)
{
    validDate_ = value;
    validDateIsSet_ = true;
}

bool IdcardBackVerificationResult::validDateIsSet() const
{
    return validDateIsSet_;
}

void IdcardBackVerificationResult::unsetvalidDate()
{
    validDateIsSet_ = false;
}

bool IdcardBackVerificationResult::isValidValidityPeriod() const
{
    return validValidityPeriod_;
}

void IdcardBackVerificationResult::setValidValidityPeriod(bool value)
{
    validValidityPeriod_ = value;
    validValidityPeriodIsSet_ = true;
}

bool IdcardBackVerificationResult::validValidityPeriodIsSet() const
{
    return validValidityPeriodIsSet_;
}

void IdcardBackVerificationResult::unsetvalidValidityPeriod()
{
    validValidityPeriodIsSet_ = false;
}

}
}
}
}
}


