

#include "huaweicloud/ocr/v1/model/TollInvoiceResult.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




TollInvoiceResult::TollInvoiceResult()
{
    code_ = "";
    codeIsSet_ = false;
    number_ = "";
    numberIsSet_ = false;
    entry_ = "";
    entryIsSet_ = false;
    exit_ = "";
    exitIsSet_ = false;
    amount_ = "";
    amountIsSet_ = false;
    cashier_ = "";
    cashierIsSet_ = false;
    vehicleType_ = "";
    vehicleTypeIsSet_ = false;
    date_ = "";
    dateIsSet_ = false;
    time_ = "";
    timeIsSet_ = false;
    confidenceIsSet_ = false;
    textLocationIsSet_ = false;
}

TollInvoiceResult::~TollInvoiceResult() = default;

void TollInvoiceResult::validate()
{
}

web::json::value TollInvoiceResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }
    if(numberIsSet_) {
        val[utility::conversions::to_string_t("number")] = ModelBase::toJson(number_);
    }
    if(entryIsSet_) {
        val[utility::conversions::to_string_t("entry")] = ModelBase::toJson(entry_);
    }
    if(exitIsSet_) {
        val[utility::conversions::to_string_t("exit")] = ModelBase::toJson(exit_);
    }
    if(amountIsSet_) {
        val[utility::conversions::to_string_t("amount")] = ModelBase::toJson(amount_);
    }
    if(cashierIsSet_) {
        val[utility::conversions::to_string_t("cashier")] = ModelBase::toJson(cashier_);
    }
    if(vehicleTypeIsSet_) {
        val[utility::conversions::to_string_t("vehicle_type")] = ModelBase::toJson(vehicleType_);
    }
    if(dateIsSet_) {
        val[utility::conversions::to_string_t("date")] = ModelBase::toJson(date_);
    }
    if(timeIsSet_) {
        val[utility::conversions::to_string_t("time")] = ModelBase::toJson(time_);
    }
    if(confidenceIsSet_) {
        val[utility::conversions::to_string_t("confidence")] = ModelBase::toJson(confidence_);
    }
    if(textLocationIsSet_) {
        val[utility::conversions::to_string_t("text_location")] = ModelBase::toJson(textLocation_);
    }

    return val;
}

bool TollInvoiceResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("entry"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("entry"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEntry(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("exit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("exit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExit(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("cashier"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cashier"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCashier(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vehicle_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vehicle_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVehicleType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("text_location"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("text_location"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTextLocation(refVal);
        }
    }
    return ok;
}


std::string TollInvoiceResult::getCode() const
{
    return code_;
}

void TollInvoiceResult::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool TollInvoiceResult::codeIsSet() const
{
    return codeIsSet_;
}

void TollInvoiceResult::unsetcode()
{
    codeIsSet_ = false;
}

std::string TollInvoiceResult::getNumber() const
{
    return number_;
}

void TollInvoiceResult::setNumber(const std::string& value)
{
    number_ = value;
    numberIsSet_ = true;
}

bool TollInvoiceResult::numberIsSet() const
{
    return numberIsSet_;
}

void TollInvoiceResult::unsetnumber()
{
    numberIsSet_ = false;
}

std::string TollInvoiceResult::getEntry() const
{
    return entry_;
}

void TollInvoiceResult::setEntry(const std::string& value)
{
    entry_ = value;
    entryIsSet_ = true;
}

bool TollInvoiceResult::entryIsSet() const
{
    return entryIsSet_;
}

void TollInvoiceResult::unsetentry()
{
    entryIsSet_ = false;
}

std::string TollInvoiceResult::getExit() const
{
    return exit_;
}

void TollInvoiceResult::setExit(const std::string& value)
{
    exit_ = value;
    exitIsSet_ = true;
}

bool TollInvoiceResult::exitIsSet() const
{
    return exitIsSet_;
}

void TollInvoiceResult::unsetexit()
{
    exitIsSet_ = false;
}

std::string TollInvoiceResult::getAmount() const
{
    return amount_;
}

void TollInvoiceResult::setAmount(const std::string& value)
{
    amount_ = value;
    amountIsSet_ = true;
}

bool TollInvoiceResult::amountIsSet() const
{
    return amountIsSet_;
}

void TollInvoiceResult::unsetamount()
{
    amountIsSet_ = false;
}

std::string TollInvoiceResult::getCashier() const
{
    return cashier_;
}

void TollInvoiceResult::setCashier(const std::string& value)
{
    cashier_ = value;
    cashierIsSet_ = true;
}

bool TollInvoiceResult::cashierIsSet() const
{
    return cashierIsSet_;
}

void TollInvoiceResult::unsetcashier()
{
    cashierIsSet_ = false;
}

std::string TollInvoiceResult::getVehicleType() const
{
    return vehicleType_;
}

void TollInvoiceResult::setVehicleType(const std::string& value)
{
    vehicleType_ = value;
    vehicleTypeIsSet_ = true;
}

bool TollInvoiceResult::vehicleTypeIsSet() const
{
    return vehicleTypeIsSet_;
}

void TollInvoiceResult::unsetvehicleType()
{
    vehicleTypeIsSet_ = false;
}

std::string TollInvoiceResult::getDate() const
{
    return date_;
}

void TollInvoiceResult::setDate(const std::string& value)
{
    date_ = value;
    dateIsSet_ = true;
}

bool TollInvoiceResult::dateIsSet() const
{
    return dateIsSet_;
}

void TollInvoiceResult::unsetdate()
{
    dateIsSet_ = false;
}

std::string TollInvoiceResult::getTime() const
{
    return time_;
}

void TollInvoiceResult::setTime(const std::string& value)
{
    time_ = value;
    timeIsSet_ = true;
}

bool TollInvoiceResult::timeIsSet() const
{
    return timeIsSet_;
}

void TollInvoiceResult::unsettime()
{
    timeIsSet_ = false;
}

Object TollInvoiceResult::getConfidence() const
{
    return confidence_;
}

void TollInvoiceResult::setConfidence(const Object& value)
{
    confidence_ = value;
    confidenceIsSet_ = true;
}

bool TollInvoiceResult::confidenceIsSet() const
{
    return confidenceIsSet_;
}

void TollInvoiceResult::unsetconfidence()
{
    confidenceIsSet_ = false;
}

Object TollInvoiceResult::getTextLocation() const
{
    return textLocation_;
}

void TollInvoiceResult::setTextLocation(const Object& value)
{
    textLocation_ = value;
    textLocationIsSet_ = true;
}

bool TollInvoiceResult::textLocationIsSet() const
{
    return textLocationIsSet_;
}

void TollInvoiceResult::unsettextLocation()
{
    textLocationIsSet_ = false;
}

}
}
}
}
}


