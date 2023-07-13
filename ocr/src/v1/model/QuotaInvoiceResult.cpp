

#include "huaweicloud/ocr/v1/model/QuotaInvoiceResult.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




QuotaInvoiceResult::QuotaInvoiceResult()
{
    number_ = "";
    numberIsSet_ = false;
    code_ = "";
    codeIsSet_ = false;
    location_ = "";
    locationIsSet_ = false;
    amount_ = "";
    amountIsSet_ = false;
    confidenceIsSet_ = false;
}

QuotaInvoiceResult::~QuotaInvoiceResult() = default;

void QuotaInvoiceResult::validate()
{
}

web::json::value QuotaInvoiceResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(numberIsSet_) {
        val[utility::conversions::to_string_t("number")] = ModelBase::toJson(number_);
    }
    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }
    if(locationIsSet_) {
        val[utility::conversions::to_string_t("location")] = ModelBase::toJson(location_);
    }
    if(amountIsSet_) {
        val[utility::conversions::to_string_t("amount")] = ModelBase::toJson(amount_);
    }
    if(confidenceIsSet_) {
        val[utility::conversions::to_string_t("confidence")] = ModelBase::toJson(confidence_);
    }

    return val;
}

bool QuotaInvoiceResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("location"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("location"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLocation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("amount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("amount"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAmount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("confidence"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("confidence"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfidence(refVal);
        }
    }
    return ok;
}

std::string QuotaInvoiceResult::getNumber() const
{
    return number_;
}

void QuotaInvoiceResult::setNumber(const std::string& value)
{
    number_ = value;
    numberIsSet_ = true;
}

bool QuotaInvoiceResult::numberIsSet() const
{
    return numberIsSet_;
}

void QuotaInvoiceResult::unsetnumber()
{
    numberIsSet_ = false;
}

std::string QuotaInvoiceResult::getCode() const
{
    return code_;
}

void QuotaInvoiceResult::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool QuotaInvoiceResult::codeIsSet() const
{
    return codeIsSet_;
}

void QuotaInvoiceResult::unsetcode()
{
    codeIsSet_ = false;
}

std::string QuotaInvoiceResult::getLocation() const
{
    return location_;
}

void QuotaInvoiceResult::setLocation(const std::string& value)
{
    location_ = value;
    locationIsSet_ = true;
}

bool QuotaInvoiceResult::locationIsSet() const
{
    return locationIsSet_;
}

void QuotaInvoiceResult::unsetlocation()
{
    locationIsSet_ = false;
}

std::string QuotaInvoiceResult::getAmount() const
{
    return amount_;
}

void QuotaInvoiceResult::setAmount(const std::string& value)
{
    amount_ = value;
    amountIsSet_ = true;
}

bool QuotaInvoiceResult::amountIsSet() const
{
    return amountIsSet_;
}

void QuotaInvoiceResult::unsetamount()
{
    amountIsSet_ = false;
}

Object QuotaInvoiceResult::getConfidence() const
{
    return confidence_;
}

void QuotaInvoiceResult::setConfidence(const Object& value)
{
    confidence_ = value;
    confidenceIsSet_ = true;
}

bool QuotaInvoiceResult::confidenceIsSet() const
{
    return confidenceIsSet_;
}

void QuotaInvoiceResult::unsetconfidence()
{
    confidenceIsSet_ = false;
}

}
}
}
}
}


