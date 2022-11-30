

#include "huaweicloud/ocr/v1/model/InsuranceItem.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




InsuranceItem::InsuranceItem()
{
    insuranceNameIsSet_ = false;
    insurancePeriodIsSet_ = false;
    insuranceAmountIsSet_ = false;
    paymentFrequencyIsSet_ = false;
    paymentPeriodIsSet_ = false;
    paymentAmountIsSet_ = false;
}

InsuranceItem::~InsuranceItem() = default;

void InsuranceItem::validate()
{
}

web::json::value InsuranceItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(insuranceNameIsSet_) {
        val[utility::conversions::to_string_t("insurance_name")] = ModelBase::toJson(insuranceName_);
    }
    if(insurancePeriodIsSet_) {
        val[utility::conversions::to_string_t("insurance_period")] = ModelBase::toJson(insurancePeriod_);
    }
    if(insuranceAmountIsSet_) {
        val[utility::conversions::to_string_t("insurance_amount")] = ModelBase::toJson(insuranceAmount_);
    }
    if(paymentFrequencyIsSet_) {
        val[utility::conversions::to_string_t("payment_frequency")] = ModelBase::toJson(paymentFrequency_);
    }
    if(paymentPeriodIsSet_) {
        val[utility::conversions::to_string_t("payment_period")] = ModelBase::toJson(paymentPeriod_);
    }
    if(paymentAmountIsSet_) {
        val[utility::conversions::to_string_t("payment_amount")] = ModelBase::toJson(paymentAmount_);
    }

    return val;
}

bool InsuranceItem::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("insurance_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("insurance_name"));
        if(!fieldValue.is_null())
        {
            InsurancePolicyDetail refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInsuranceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("insurance_period"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("insurance_period"));
        if(!fieldValue.is_null())
        {
            InsurancePolicyDetail refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInsurancePeriod(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("insurance_amount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("insurance_amount"));
        if(!fieldValue.is_null())
        {
            InsurancePolicyDetail refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInsuranceAmount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("payment_frequency"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("payment_frequency"));
        if(!fieldValue.is_null())
        {
            InsurancePolicyDetail refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPaymentFrequency(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("payment_period"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("payment_period"));
        if(!fieldValue.is_null())
        {
            InsurancePolicyDetail refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPaymentPeriod(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("payment_amount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("payment_amount"));
        if(!fieldValue.is_null())
        {
            InsurancePolicyDetail refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPaymentAmount(refVal);
        }
    }
    return ok;
}


InsurancePolicyDetail InsuranceItem::getInsuranceName() const
{
    return insuranceName_;
}

void InsuranceItem::setInsuranceName(const InsurancePolicyDetail& value)
{
    insuranceName_ = value;
    insuranceNameIsSet_ = true;
}

bool InsuranceItem::insuranceNameIsSet() const
{
    return insuranceNameIsSet_;
}

void InsuranceItem::unsetinsuranceName()
{
    insuranceNameIsSet_ = false;
}

InsurancePolicyDetail InsuranceItem::getInsurancePeriod() const
{
    return insurancePeriod_;
}

void InsuranceItem::setInsurancePeriod(const InsurancePolicyDetail& value)
{
    insurancePeriod_ = value;
    insurancePeriodIsSet_ = true;
}

bool InsuranceItem::insurancePeriodIsSet() const
{
    return insurancePeriodIsSet_;
}

void InsuranceItem::unsetinsurancePeriod()
{
    insurancePeriodIsSet_ = false;
}

InsurancePolicyDetail InsuranceItem::getInsuranceAmount() const
{
    return insuranceAmount_;
}

void InsuranceItem::setInsuranceAmount(const InsurancePolicyDetail& value)
{
    insuranceAmount_ = value;
    insuranceAmountIsSet_ = true;
}

bool InsuranceItem::insuranceAmountIsSet() const
{
    return insuranceAmountIsSet_;
}

void InsuranceItem::unsetinsuranceAmount()
{
    insuranceAmountIsSet_ = false;
}

InsurancePolicyDetail InsuranceItem::getPaymentFrequency() const
{
    return paymentFrequency_;
}

void InsuranceItem::setPaymentFrequency(const InsurancePolicyDetail& value)
{
    paymentFrequency_ = value;
    paymentFrequencyIsSet_ = true;
}

bool InsuranceItem::paymentFrequencyIsSet() const
{
    return paymentFrequencyIsSet_;
}

void InsuranceItem::unsetpaymentFrequency()
{
    paymentFrequencyIsSet_ = false;
}

InsurancePolicyDetail InsuranceItem::getPaymentPeriod() const
{
    return paymentPeriod_;
}

void InsuranceItem::setPaymentPeriod(const InsurancePolicyDetail& value)
{
    paymentPeriod_ = value;
    paymentPeriodIsSet_ = true;
}

bool InsuranceItem::paymentPeriodIsSet() const
{
    return paymentPeriodIsSet_;
}

void InsuranceItem::unsetpaymentPeriod()
{
    paymentPeriodIsSet_ = false;
}

InsurancePolicyDetail InsuranceItem::getPaymentAmount() const
{
    return paymentAmount_;
}

void InsuranceItem::setPaymentAmount(const InsurancePolicyDetail& value)
{
    paymentAmount_ = value;
    paymentAmountIsSet_ = true;
}

bool InsuranceItem::paymentAmountIsSet() const
{
    return paymentAmountIsSet_;
}

void InsuranceItem::unsetpaymentAmount()
{
    paymentAmountIsSet_ = false;
}

}
}
}
}
}


