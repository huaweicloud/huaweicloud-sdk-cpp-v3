

#include "huaweicloud/ocr/v1/model/TaxiInvoiceResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




TaxiInvoiceResult::TaxiInvoiceResult()
{
    location_ = "";
    locationIsSet_ = false;
    code_ = "";
    codeIsSet_ = false;
    number_ = "";
    numberIsSet_ = false;
    phoneNumber_ = "";
    phoneNumberIsSet_ = false;
    company_ = "";
    companyIsSet_ = false;
    taxiNumber_ = "";
    taxiNumberIsSet_ = false;
    certificateNumber_ = "";
    certificateNumberIsSet_ = false;
    identificationNumber_ = "";
    identificationNumberIsSet_ = false;
    date_ = "";
    dateIsSet_ = false;
    boardingTime_ = "";
    boardingTimeIsSet_ = false;
    alightingTime_ = "";
    alightingTimeIsSet_ = false;
    time_ = "";
    timeIsSet_ = false;
    unitPrice_ = "";
    unitPriceIsSet_ = false;
    distance_ = "";
    distanceIsSet_ = false;
    waitingTime_ = "";
    waitingTimeIsSet_ = false;
    fare_ = "";
    fareIsSet_ = false;
    fuelOilSurcharge_ = "";
    fuelOilSurchargeIsSet_ = false;
    callServiceSurcharge_ = "";
    callServiceSurchargeIsSet_ = false;
    total_ = "";
    totalIsSet_ = false;
    confidenceIsSet_ = false;
    textLocationIsSet_ = false;
}

TaxiInvoiceResult::~TaxiInvoiceResult() = default;

void TaxiInvoiceResult::validate()
{
}

web::json::value TaxiInvoiceResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(locationIsSet_) {
        val[utility::conversions::to_string_t("location")] = ModelBase::toJson(location_);
    }
    if(codeIsSet_) {
        val[utility::conversions::to_string_t("code")] = ModelBase::toJson(code_);
    }
    if(numberIsSet_) {
        val[utility::conversions::to_string_t("number")] = ModelBase::toJson(number_);
    }
    if(phoneNumberIsSet_) {
        val[utility::conversions::to_string_t("phone_number")] = ModelBase::toJson(phoneNumber_);
    }
    if(companyIsSet_) {
        val[utility::conversions::to_string_t("company")] = ModelBase::toJson(company_);
    }
    if(taxiNumberIsSet_) {
        val[utility::conversions::to_string_t("taxi_number")] = ModelBase::toJson(taxiNumber_);
    }
    if(certificateNumberIsSet_) {
        val[utility::conversions::to_string_t("certificate_number")] = ModelBase::toJson(certificateNumber_);
    }
    if(identificationNumberIsSet_) {
        val[utility::conversions::to_string_t("identification_number")] = ModelBase::toJson(identificationNumber_);
    }
    if(dateIsSet_) {
        val[utility::conversions::to_string_t("date")] = ModelBase::toJson(date_);
    }
    if(boardingTimeIsSet_) {
        val[utility::conversions::to_string_t("boarding_time")] = ModelBase::toJson(boardingTime_);
    }
    if(alightingTimeIsSet_) {
        val[utility::conversions::to_string_t("alighting_time")] = ModelBase::toJson(alightingTime_);
    }
    if(timeIsSet_) {
        val[utility::conversions::to_string_t("time")] = ModelBase::toJson(time_);
    }
    if(unitPriceIsSet_) {
        val[utility::conversions::to_string_t("unit_price")] = ModelBase::toJson(unitPrice_);
    }
    if(distanceIsSet_) {
        val[utility::conversions::to_string_t("distance")] = ModelBase::toJson(distance_);
    }
    if(waitingTimeIsSet_) {
        val[utility::conversions::to_string_t("waiting_time")] = ModelBase::toJson(waitingTime_);
    }
    if(fareIsSet_) {
        val[utility::conversions::to_string_t("fare")] = ModelBase::toJson(fare_);
    }
    if(fuelOilSurchargeIsSet_) {
        val[utility::conversions::to_string_t("fuel_oil_surcharge")] = ModelBase::toJson(fuelOilSurcharge_);
    }
    if(callServiceSurchargeIsSet_) {
        val[utility::conversions::to_string_t("call_service_surcharge")] = ModelBase::toJson(callServiceSurcharge_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(confidenceIsSet_) {
        val[utility::conversions::to_string_t("confidence")] = ModelBase::toJson(confidence_);
    }
    if(textLocationIsSet_) {
        val[utility::conversions::to_string_t("text_location")] = ModelBase::toJson(textLocation_);
    }

    return val;
}
bool TaxiInvoiceResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("location"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("location"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLocation(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("phone_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("phone_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPhoneNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("company"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("company"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompany(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("taxi_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("taxi_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaxiNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("certificate_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("certificate_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCertificateNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("identification_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("identification_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdentificationNumber(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("boarding_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("boarding_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBoardingTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alighting_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alighting_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlightingTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("unit_price"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("unit_price"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUnitPrice(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("distance"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("distance"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDistance(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("waiting_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("waiting_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWaitingTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fare"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fare"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFare(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fuel_oil_surcharge"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fuel_oil_surcharge"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFuelOilSurcharge(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("call_service_surcharge"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("call_service_surcharge"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCallServiceSurcharge(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
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


std::string TaxiInvoiceResult::getLocation() const
{
    return location_;
}

void TaxiInvoiceResult::setLocation(const std::string& value)
{
    location_ = value;
    locationIsSet_ = true;
}

bool TaxiInvoiceResult::locationIsSet() const
{
    return locationIsSet_;
}

void TaxiInvoiceResult::unsetlocation()
{
    locationIsSet_ = false;
}

std::string TaxiInvoiceResult::getCode() const
{
    return code_;
}

void TaxiInvoiceResult::setCode(const std::string& value)
{
    code_ = value;
    codeIsSet_ = true;
}

bool TaxiInvoiceResult::codeIsSet() const
{
    return codeIsSet_;
}

void TaxiInvoiceResult::unsetcode()
{
    codeIsSet_ = false;
}

std::string TaxiInvoiceResult::getNumber() const
{
    return number_;
}

void TaxiInvoiceResult::setNumber(const std::string& value)
{
    number_ = value;
    numberIsSet_ = true;
}

bool TaxiInvoiceResult::numberIsSet() const
{
    return numberIsSet_;
}

void TaxiInvoiceResult::unsetnumber()
{
    numberIsSet_ = false;
}

std::string TaxiInvoiceResult::getPhoneNumber() const
{
    return phoneNumber_;
}

void TaxiInvoiceResult::setPhoneNumber(const std::string& value)
{
    phoneNumber_ = value;
    phoneNumberIsSet_ = true;
}

bool TaxiInvoiceResult::phoneNumberIsSet() const
{
    return phoneNumberIsSet_;
}

void TaxiInvoiceResult::unsetphoneNumber()
{
    phoneNumberIsSet_ = false;
}

std::string TaxiInvoiceResult::getCompany() const
{
    return company_;
}

void TaxiInvoiceResult::setCompany(const std::string& value)
{
    company_ = value;
    companyIsSet_ = true;
}

bool TaxiInvoiceResult::companyIsSet() const
{
    return companyIsSet_;
}

void TaxiInvoiceResult::unsetcompany()
{
    companyIsSet_ = false;
}

std::string TaxiInvoiceResult::getTaxiNumber() const
{
    return taxiNumber_;
}

void TaxiInvoiceResult::setTaxiNumber(const std::string& value)
{
    taxiNumber_ = value;
    taxiNumberIsSet_ = true;
}

bool TaxiInvoiceResult::taxiNumberIsSet() const
{
    return taxiNumberIsSet_;
}

void TaxiInvoiceResult::unsettaxiNumber()
{
    taxiNumberIsSet_ = false;
}

std::string TaxiInvoiceResult::getCertificateNumber() const
{
    return certificateNumber_;
}

void TaxiInvoiceResult::setCertificateNumber(const std::string& value)
{
    certificateNumber_ = value;
    certificateNumberIsSet_ = true;
}

bool TaxiInvoiceResult::certificateNumberIsSet() const
{
    return certificateNumberIsSet_;
}

void TaxiInvoiceResult::unsetcertificateNumber()
{
    certificateNumberIsSet_ = false;
}

std::string TaxiInvoiceResult::getIdentificationNumber() const
{
    return identificationNumber_;
}

void TaxiInvoiceResult::setIdentificationNumber(const std::string& value)
{
    identificationNumber_ = value;
    identificationNumberIsSet_ = true;
}

bool TaxiInvoiceResult::identificationNumberIsSet() const
{
    return identificationNumberIsSet_;
}

void TaxiInvoiceResult::unsetidentificationNumber()
{
    identificationNumberIsSet_ = false;
}

std::string TaxiInvoiceResult::getDate() const
{
    return date_;
}

void TaxiInvoiceResult::setDate(const std::string& value)
{
    date_ = value;
    dateIsSet_ = true;
}

bool TaxiInvoiceResult::dateIsSet() const
{
    return dateIsSet_;
}

void TaxiInvoiceResult::unsetdate()
{
    dateIsSet_ = false;
}

std::string TaxiInvoiceResult::getBoardingTime() const
{
    return boardingTime_;
}

void TaxiInvoiceResult::setBoardingTime(const std::string& value)
{
    boardingTime_ = value;
    boardingTimeIsSet_ = true;
}

bool TaxiInvoiceResult::boardingTimeIsSet() const
{
    return boardingTimeIsSet_;
}

void TaxiInvoiceResult::unsetboardingTime()
{
    boardingTimeIsSet_ = false;
}

std::string TaxiInvoiceResult::getAlightingTime() const
{
    return alightingTime_;
}

void TaxiInvoiceResult::setAlightingTime(const std::string& value)
{
    alightingTime_ = value;
    alightingTimeIsSet_ = true;
}

bool TaxiInvoiceResult::alightingTimeIsSet() const
{
    return alightingTimeIsSet_;
}

void TaxiInvoiceResult::unsetalightingTime()
{
    alightingTimeIsSet_ = false;
}

std::string TaxiInvoiceResult::getTime() const
{
    return time_;
}

void TaxiInvoiceResult::setTime(const std::string& value)
{
    time_ = value;
    timeIsSet_ = true;
}

bool TaxiInvoiceResult::timeIsSet() const
{
    return timeIsSet_;
}

void TaxiInvoiceResult::unsettime()
{
    timeIsSet_ = false;
}

std::string TaxiInvoiceResult::getUnitPrice() const
{
    return unitPrice_;
}

void TaxiInvoiceResult::setUnitPrice(const std::string& value)
{
    unitPrice_ = value;
    unitPriceIsSet_ = true;
}

bool TaxiInvoiceResult::unitPriceIsSet() const
{
    return unitPriceIsSet_;
}

void TaxiInvoiceResult::unsetunitPrice()
{
    unitPriceIsSet_ = false;
}

std::string TaxiInvoiceResult::getDistance() const
{
    return distance_;
}

void TaxiInvoiceResult::setDistance(const std::string& value)
{
    distance_ = value;
    distanceIsSet_ = true;
}

bool TaxiInvoiceResult::distanceIsSet() const
{
    return distanceIsSet_;
}

void TaxiInvoiceResult::unsetdistance()
{
    distanceIsSet_ = false;
}

std::string TaxiInvoiceResult::getWaitingTime() const
{
    return waitingTime_;
}

void TaxiInvoiceResult::setWaitingTime(const std::string& value)
{
    waitingTime_ = value;
    waitingTimeIsSet_ = true;
}

bool TaxiInvoiceResult::waitingTimeIsSet() const
{
    return waitingTimeIsSet_;
}

void TaxiInvoiceResult::unsetwaitingTime()
{
    waitingTimeIsSet_ = false;
}

std::string TaxiInvoiceResult::getFare() const
{
    return fare_;
}

void TaxiInvoiceResult::setFare(const std::string& value)
{
    fare_ = value;
    fareIsSet_ = true;
}

bool TaxiInvoiceResult::fareIsSet() const
{
    return fareIsSet_;
}

void TaxiInvoiceResult::unsetfare()
{
    fareIsSet_ = false;
}

std::string TaxiInvoiceResult::getFuelOilSurcharge() const
{
    return fuelOilSurcharge_;
}

void TaxiInvoiceResult::setFuelOilSurcharge(const std::string& value)
{
    fuelOilSurcharge_ = value;
    fuelOilSurchargeIsSet_ = true;
}

bool TaxiInvoiceResult::fuelOilSurchargeIsSet() const
{
    return fuelOilSurchargeIsSet_;
}

void TaxiInvoiceResult::unsetfuelOilSurcharge()
{
    fuelOilSurchargeIsSet_ = false;
}

std::string TaxiInvoiceResult::getCallServiceSurcharge() const
{
    return callServiceSurcharge_;
}

void TaxiInvoiceResult::setCallServiceSurcharge(const std::string& value)
{
    callServiceSurcharge_ = value;
    callServiceSurchargeIsSet_ = true;
}

bool TaxiInvoiceResult::callServiceSurchargeIsSet() const
{
    return callServiceSurchargeIsSet_;
}

void TaxiInvoiceResult::unsetcallServiceSurcharge()
{
    callServiceSurchargeIsSet_ = false;
}

std::string TaxiInvoiceResult::getTotal() const
{
    return total_;
}

void TaxiInvoiceResult::setTotal(const std::string& value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool TaxiInvoiceResult::totalIsSet() const
{
    return totalIsSet_;
}

void TaxiInvoiceResult::unsettotal()
{
    totalIsSet_ = false;
}

Object TaxiInvoiceResult::getConfidence() const
{
    return confidence_;
}

void TaxiInvoiceResult::setConfidence(const Object& value)
{
    confidence_ = value;
    confidenceIsSet_ = true;
}

bool TaxiInvoiceResult::confidenceIsSet() const
{
    return confidenceIsSet_;
}

void TaxiInvoiceResult::unsetconfidence()
{
    confidenceIsSet_ = false;
}

Object TaxiInvoiceResult::getTextLocation() const
{
    return textLocation_;
}

void TaxiInvoiceResult::setTextLocation(const Object& value)
{
    textLocation_ = value;
    textLocationIsSet_ = true;
}

bool TaxiInvoiceResult::textLocationIsSet() const
{
    return textLocationIsSet_;
}

void TaxiInvoiceResult::unsettextLocation()
{
    textLocationIsSet_ = false;
}

}
}
}
}
}


