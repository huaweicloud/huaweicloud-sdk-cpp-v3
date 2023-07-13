

#include "huaweicloud/ocr/v1/model/ItineraryList.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




ItineraryList::ItineraryList()
{
    departureStation_ = "";
    departureStationIsSet_ = false;
    destinationStation_ = "";
    destinationStationIsSet_ = false;
    carrier_ = "";
    carrierIsSet_ = false;
    flight_ = "";
    flightIsSet_ = false;
    cabinClass_ = "";
    cabinClassIsSet_ = false;
    date_ = "";
    dateIsSet_ = false;
    time_ = "";
    timeIsSet_ = false;
    fareBasis_ = "";
    fareBasisIsSet_ = false;
    effectiveDate_ = "";
    effectiveDateIsSet_ = false;
    expiryDate_ = "";
    expiryDateIsSet_ = false;
    baggageAllowance_ = "";
    baggageAllowanceIsSet_ = false;
}

ItineraryList::~ItineraryList() = default;

void ItineraryList::validate()
{
}

web::json::value ItineraryList::toJson() const
{
    web::json::value val = web::json::value::object();

    if(departureStationIsSet_) {
        val[utility::conversions::to_string_t("departure_station")] = ModelBase::toJson(departureStation_);
    }
    if(destinationStationIsSet_) {
        val[utility::conversions::to_string_t("destination_station")] = ModelBase::toJson(destinationStation_);
    }
    if(carrierIsSet_) {
        val[utility::conversions::to_string_t("carrier")] = ModelBase::toJson(carrier_);
    }
    if(flightIsSet_) {
        val[utility::conversions::to_string_t("flight")] = ModelBase::toJson(flight_);
    }
    if(cabinClassIsSet_) {
        val[utility::conversions::to_string_t("cabin_class")] = ModelBase::toJson(cabinClass_);
    }
    if(dateIsSet_) {
        val[utility::conversions::to_string_t("date")] = ModelBase::toJson(date_);
    }
    if(timeIsSet_) {
        val[utility::conversions::to_string_t("time")] = ModelBase::toJson(time_);
    }
    if(fareBasisIsSet_) {
        val[utility::conversions::to_string_t("fare_basis")] = ModelBase::toJson(fareBasis_);
    }
    if(effectiveDateIsSet_) {
        val[utility::conversions::to_string_t("effective_date")] = ModelBase::toJson(effectiveDate_);
    }
    if(expiryDateIsSet_) {
        val[utility::conversions::to_string_t("expiry_date")] = ModelBase::toJson(expiryDate_);
    }
    if(baggageAllowanceIsSet_) {
        val[utility::conversions::to_string_t("baggage_allowance")] = ModelBase::toJson(baggageAllowance_);
    }

    return val;
}

bool ItineraryList::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("departure_station"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("departure_station"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDepartureStation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("destination_station"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("destination_station"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDestinationStation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("carrier"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("carrier"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCarrier(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flight"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flight"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlight(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cabin_class"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cabin_class"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCabinClass(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("fare_basis"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fare_basis"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFareBasis(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("effective_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("effective_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEffectiveDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expiry_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expiry_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpiryDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("baggage_allowance"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("baggage_allowance"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBaggageAllowance(refVal);
        }
    }
    return ok;
}

std::string ItineraryList::getDepartureStation() const
{
    return departureStation_;
}

void ItineraryList::setDepartureStation(const std::string& value)
{
    departureStation_ = value;
    departureStationIsSet_ = true;
}

bool ItineraryList::departureStationIsSet() const
{
    return departureStationIsSet_;
}

void ItineraryList::unsetdepartureStation()
{
    departureStationIsSet_ = false;
}

std::string ItineraryList::getDestinationStation() const
{
    return destinationStation_;
}

void ItineraryList::setDestinationStation(const std::string& value)
{
    destinationStation_ = value;
    destinationStationIsSet_ = true;
}

bool ItineraryList::destinationStationIsSet() const
{
    return destinationStationIsSet_;
}

void ItineraryList::unsetdestinationStation()
{
    destinationStationIsSet_ = false;
}

std::string ItineraryList::getCarrier() const
{
    return carrier_;
}

void ItineraryList::setCarrier(const std::string& value)
{
    carrier_ = value;
    carrierIsSet_ = true;
}

bool ItineraryList::carrierIsSet() const
{
    return carrierIsSet_;
}

void ItineraryList::unsetcarrier()
{
    carrierIsSet_ = false;
}

std::string ItineraryList::getFlight() const
{
    return flight_;
}

void ItineraryList::setFlight(const std::string& value)
{
    flight_ = value;
    flightIsSet_ = true;
}

bool ItineraryList::flightIsSet() const
{
    return flightIsSet_;
}

void ItineraryList::unsetflight()
{
    flightIsSet_ = false;
}

std::string ItineraryList::getCabinClass() const
{
    return cabinClass_;
}

void ItineraryList::setCabinClass(const std::string& value)
{
    cabinClass_ = value;
    cabinClassIsSet_ = true;
}

bool ItineraryList::cabinClassIsSet() const
{
    return cabinClassIsSet_;
}

void ItineraryList::unsetcabinClass()
{
    cabinClassIsSet_ = false;
}

std::string ItineraryList::getDate() const
{
    return date_;
}

void ItineraryList::setDate(const std::string& value)
{
    date_ = value;
    dateIsSet_ = true;
}

bool ItineraryList::dateIsSet() const
{
    return dateIsSet_;
}

void ItineraryList::unsetdate()
{
    dateIsSet_ = false;
}

std::string ItineraryList::getTime() const
{
    return time_;
}

void ItineraryList::setTime(const std::string& value)
{
    time_ = value;
    timeIsSet_ = true;
}

bool ItineraryList::timeIsSet() const
{
    return timeIsSet_;
}

void ItineraryList::unsettime()
{
    timeIsSet_ = false;
}

std::string ItineraryList::getFareBasis() const
{
    return fareBasis_;
}

void ItineraryList::setFareBasis(const std::string& value)
{
    fareBasis_ = value;
    fareBasisIsSet_ = true;
}

bool ItineraryList::fareBasisIsSet() const
{
    return fareBasisIsSet_;
}

void ItineraryList::unsetfareBasis()
{
    fareBasisIsSet_ = false;
}

std::string ItineraryList::getEffectiveDate() const
{
    return effectiveDate_;
}

void ItineraryList::setEffectiveDate(const std::string& value)
{
    effectiveDate_ = value;
    effectiveDateIsSet_ = true;
}

bool ItineraryList::effectiveDateIsSet() const
{
    return effectiveDateIsSet_;
}

void ItineraryList::unseteffectiveDate()
{
    effectiveDateIsSet_ = false;
}

std::string ItineraryList::getExpiryDate() const
{
    return expiryDate_;
}

void ItineraryList::setExpiryDate(const std::string& value)
{
    expiryDate_ = value;
    expiryDateIsSet_ = true;
}

bool ItineraryList::expiryDateIsSet() const
{
    return expiryDateIsSet_;
}

void ItineraryList::unsetexpiryDate()
{
    expiryDateIsSet_ = false;
}

std::string ItineraryList::getBaggageAllowance() const
{
    return baggageAllowance_;
}

void ItineraryList::setBaggageAllowance(const std::string& value)
{
    baggageAllowance_ = value;
    baggageAllowanceIsSet_ = true;
}

bool ItineraryList::baggageAllowanceIsSet() const
{
    return baggageAllowanceIsSet_;
}

void ItineraryList::unsetbaggageAllowance()
{
    baggageAllowanceIsSet_ = false;
}

}
}
}
}
}


