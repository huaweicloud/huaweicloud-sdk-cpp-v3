

#include "huaweicloud/ocr/v1/model/PassengerTravelItemList.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




PassengerTravelItemList::PassengerTravelItemList()
{
    travelerName_ = "";
    travelerNameIsSet_ = false;
    idNumber_ = "";
    idNumberIsSet_ = false;
    travelDate_ = "";
    travelDateIsSet_ = false;
    departureLocation_ = "";
    departureLocationIsSet_ = false;
    arrivalLocation_ = "";
    arrivalLocationIsSet_ = false;
    class_ = "";
    classIsSet_ = false;
    transportationType_ = "";
    transportationTypeIsSet_ = false;
}

PassengerTravelItemList::~PassengerTravelItemList() = default;

void PassengerTravelItemList::validate()
{
}

web::json::value PassengerTravelItemList::toJson() const
{
    web::json::value val = web::json::value::object();

    if(travelerNameIsSet_) {
        val[utility::conversions::to_string_t("traveler_name")] = ModelBase::toJson(travelerName_);
    }
    if(idNumberIsSet_) {
        val[utility::conversions::to_string_t("id_number")] = ModelBase::toJson(idNumber_);
    }
    if(travelDateIsSet_) {
        val[utility::conversions::to_string_t("travel_date")] = ModelBase::toJson(travelDate_);
    }
    if(departureLocationIsSet_) {
        val[utility::conversions::to_string_t("departure_location")] = ModelBase::toJson(departureLocation_);
    }
    if(arrivalLocationIsSet_) {
        val[utility::conversions::to_string_t("arrival_location")] = ModelBase::toJson(arrivalLocation_);
    }
    if(classIsSet_) {
        val[utility::conversions::to_string_t("class")] = ModelBase::toJson(class_);
    }
    if(transportationTypeIsSet_) {
        val[utility::conversions::to_string_t("transportation_type")] = ModelBase::toJson(transportationType_);
    }

    return val;
}
bool PassengerTravelItemList::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("traveler_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("traveler_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTravelerName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("travel_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("travel_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTravelDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("departure_location"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("departure_location"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDepartureLocation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("arrival_location"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("arrival_location"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setArrivalLocation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("class"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("class"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClass(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("transportation_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("transportation_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTransportationType(refVal);
        }
    }
    return ok;
}


std::string PassengerTravelItemList::getTravelerName() const
{
    return travelerName_;
}

void PassengerTravelItemList::setTravelerName(const std::string& value)
{
    travelerName_ = value;
    travelerNameIsSet_ = true;
}

bool PassengerTravelItemList::travelerNameIsSet() const
{
    return travelerNameIsSet_;
}

void PassengerTravelItemList::unsettravelerName()
{
    travelerNameIsSet_ = false;
}

std::string PassengerTravelItemList::getIdNumber() const
{
    return idNumber_;
}

void PassengerTravelItemList::setIdNumber(const std::string& value)
{
    idNumber_ = value;
    idNumberIsSet_ = true;
}

bool PassengerTravelItemList::idNumberIsSet() const
{
    return idNumberIsSet_;
}

void PassengerTravelItemList::unsetidNumber()
{
    idNumberIsSet_ = false;
}

std::string PassengerTravelItemList::getTravelDate() const
{
    return travelDate_;
}

void PassengerTravelItemList::setTravelDate(const std::string& value)
{
    travelDate_ = value;
    travelDateIsSet_ = true;
}

bool PassengerTravelItemList::travelDateIsSet() const
{
    return travelDateIsSet_;
}

void PassengerTravelItemList::unsettravelDate()
{
    travelDateIsSet_ = false;
}

std::string PassengerTravelItemList::getDepartureLocation() const
{
    return departureLocation_;
}

void PassengerTravelItemList::setDepartureLocation(const std::string& value)
{
    departureLocation_ = value;
    departureLocationIsSet_ = true;
}

bool PassengerTravelItemList::departureLocationIsSet() const
{
    return departureLocationIsSet_;
}

void PassengerTravelItemList::unsetdepartureLocation()
{
    departureLocationIsSet_ = false;
}

std::string PassengerTravelItemList::getArrivalLocation() const
{
    return arrivalLocation_;
}

void PassengerTravelItemList::setArrivalLocation(const std::string& value)
{
    arrivalLocation_ = value;
    arrivalLocationIsSet_ = true;
}

bool PassengerTravelItemList::arrivalLocationIsSet() const
{
    return arrivalLocationIsSet_;
}

void PassengerTravelItemList::unsetarrivalLocation()
{
    arrivalLocationIsSet_ = false;
}

std::string PassengerTravelItemList::getClass() const
{
    return class_;
}

void PassengerTravelItemList::setClass(const std::string& value)
{
    class_ = value;
    classIsSet_ = true;
}

bool PassengerTravelItemList::classIsSet() const
{
    return classIsSet_;
}

void PassengerTravelItemList::unsetclass()
{
    classIsSet_ = false;
}

std::string PassengerTravelItemList::getTransportationType() const
{
    return transportationType_;
}

void PassengerTravelItemList::setTransportationType(const std::string& value)
{
    transportationType_ = value;
    transportationTypeIsSet_ = true;
}

bool PassengerTravelItemList::transportationTypeIsSet() const
{
    return transportationTypeIsSet_;
}

void PassengerTravelItemList::unsettransportationType()
{
    transportationTypeIsSet_ = false;
}

}
}
}
}
}


