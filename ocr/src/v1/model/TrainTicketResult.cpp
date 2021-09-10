

#include "huaweicloud/ocr/v1/model/TrainTicketResult.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




TrainTicketResult::TrainTicketResult()
{
    ticketId_ = "";
    ticketIdIsSet_ = false;
    checkPort_ = "";
    checkPortIsSet_ = false;
    trainNumber_ = "";
    trainNumberIsSet_ = false;
    departureStation_ = "";
    departureStationIsSet_ = false;
    destinationStation_ = "";
    destinationStationIsSet_ = false;
    departureStationEn_ = "";
    departureStationEnIsSet_ = false;
    destinationStationEn_ = "";
    destinationStationEnIsSet_ = false;
    departureTime_ = "";
    departureTimeIsSet_ = false;
    seatNumber_ = "";
    seatNumberIsSet_ = false;
    ticketPrice_ = "";
    ticketPriceIsSet_ = false;
    saleMethod_ = "";
    saleMethodIsSet_ = false;
    seatCategory_ = "";
    seatCategoryIsSet_ = false;
    ticketChanging_ = "";
    ticketChangingIsSet_ = false;
    idNumber_ = "";
    idNumberIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    logId_ = "";
    logIdIsSet_ = false;
    saleLocation_ = "";
    saleLocationIsSet_ = false;
    confidenceIsSet_ = false;
}

TrainTicketResult::~TrainTicketResult() = default;

void TrainTicketResult::validate()
{
}

web::json::value TrainTicketResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ticketIdIsSet_) {
        val[utility::conversions::to_string_t("ticket_id")] = ModelBase::toJson(ticketId_);
    }
    if(checkPortIsSet_) {
        val[utility::conversions::to_string_t("check_port")] = ModelBase::toJson(checkPort_);
    }
    if(trainNumberIsSet_) {
        val[utility::conversions::to_string_t("train_number")] = ModelBase::toJson(trainNumber_);
    }
    if(departureStationIsSet_) {
        val[utility::conversions::to_string_t("departure_station")] = ModelBase::toJson(departureStation_);
    }
    if(destinationStationIsSet_) {
        val[utility::conversions::to_string_t("destination_station")] = ModelBase::toJson(destinationStation_);
    }
    if(departureStationEnIsSet_) {
        val[utility::conversions::to_string_t("departure_station_en")] = ModelBase::toJson(departureStationEn_);
    }
    if(destinationStationEnIsSet_) {
        val[utility::conversions::to_string_t("destination_station_en")] = ModelBase::toJson(destinationStationEn_);
    }
    if(departureTimeIsSet_) {
        val[utility::conversions::to_string_t("departure_time")] = ModelBase::toJson(departureTime_);
    }
    if(seatNumberIsSet_) {
        val[utility::conversions::to_string_t("seat_number")] = ModelBase::toJson(seatNumber_);
    }
    if(ticketPriceIsSet_) {
        val[utility::conversions::to_string_t("ticket_price")] = ModelBase::toJson(ticketPrice_);
    }
    if(saleMethodIsSet_) {
        val[utility::conversions::to_string_t("sale_method")] = ModelBase::toJson(saleMethod_);
    }
    if(seatCategoryIsSet_) {
        val[utility::conversions::to_string_t("seat_category")] = ModelBase::toJson(seatCategory_);
    }
    if(ticketChangingIsSet_) {
        val[utility::conversions::to_string_t("ticket_changing")] = ModelBase::toJson(ticketChanging_);
    }
    if(idNumberIsSet_) {
        val[utility::conversions::to_string_t("id_number")] = ModelBase::toJson(idNumber_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(logIdIsSet_) {
        val[utility::conversions::to_string_t("log_id")] = ModelBase::toJson(logId_);
    }
    if(saleLocationIsSet_) {
        val[utility::conversions::to_string_t("sale_location")] = ModelBase::toJson(saleLocation_);
    }
    if(confidenceIsSet_) {
        val[utility::conversions::to_string_t("confidence")] = ModelBase::toJson(confidence_);
    }

    return val;
}

bool TrainTicketResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ticket_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ticket_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTicketId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("check_port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("check_port"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCheckPort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("train_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("train_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrainNumber(refVal);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t("departure_station_en"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("departure_station_en"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDepartureStationEn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("destination_station_en"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("destination_station_en"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDestinationStationEn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("departure_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("departure_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDepartureTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("seat_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("seat_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSeatNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ticket_price"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ticket_price"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTicketPrice(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sale_method"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sale_method"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSaleMethod(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("seat_category"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("seat_category"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSeatCategory(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ticket_changing"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ticket_changing"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTicketChanging(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sale_location"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sale_location"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSaleLocation(refVal);
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


std::string TrainTicketResult::getTicketId() const
{
    return ticketId_;
}

void TrainTicketResult::setTicketId(const std::string& value)
{
    ticketId_ = value;
    ticketIdIsSet_ = true;
}

bool TrainTicketResult::ticketIdIsSet() const
{
    return ticketIdIsSet_;
}

void TrainTicketResult::unsetticketId()
{
    ticketIdIsSet_ = false;
}

std::string TrainTicketResult::getCheckPort() const
{
    return checkPort_;
}

void TrainTicketResult::setCheckPort(const std::string& value)
{
    checkPort_ = value;
    checkPortIsSet_ = true;
}

bool TrainTicketResult::checkPortIsSet() const
{
    return checkPortIsSet_;
}

void TrainTicketResult::unsetcheckPort()
{
    checkPortIsSet_ = false;
}

std::string TrainTicketResult::getTrainNumber() const
{
    return trainNumber_;
}

void TrainTicketResult::setTrainNumber(const std::string& value)
{
    trainNumber_ = value;
    trainNumberIsSet_ = true;
}

bool TrainTicketResult::trainNumberIsSet() const
{
    return trainNumberIsSet_;
}

void TrainTicketResult::unsettrainNumber()
{
    trainNumberIsSet_ = false;
}

std::string TrainTicketResult::getDepartureStation() const
{
    return departureStation_;
}

void TrainTicketResult::setDepartureStation(const std::string& value)
{
    departureStation_ = value;
    departureStationIsSet_ = true;
}

bool TrainTicketResult::departureStationIsSet() const
{
    return departureStationIsSet_;
}

void TrainTicketResult::unsetdepartureStation()
{
    departureStationIsSet_ = false;
}

std::string TrainTicketResult::getDestinationStation() const
{
    return destinationStation_;
}

void TrainTicketResult::setDestinationStation(const std::string& value)
{
    destinationStation_ = value;
    destinationStationIsSet_ = true;
}

bool TrainTicketResult::destinationStationIsSet() const
{
    return destinationStationIsSet_;
}

void TrainTicketResult::unsetdestinationStation()
{
    destinationStationIsSet_ = false;
}

std::string TrainTicketResult::getDepartureStationEn() const
{
    return departureStationEn_;
}

void TrainTicketResult::setDepartureStationEn(const std::string& value)
{
    departureStationEn_ = value;
    departureStationEnIsSet_ = true;
}

bool TrainTicketResult::departureStationEnIsSet() const
{
    return departureStationEnIsSet_;
}

void TrainTicketResult::unsetdepartureStationEn()
{
    departureStationEnIsSet_ = false;
}

std::string TrainTicketResult::getDestinationStationEn() const
{
    return destinationStationEn_;
}

void TrainTicketResult::setDestinationStationEn(const std::string& value)
{
    destinationStationEn_ = value;
    destinationStationEnIsSet_ = true;
}

bool TrainTicketResult::destinationStationEnIsSet() const
{
    return destinationStationEnIsSet_;
}

void TrainTicketResult::unsetdestinationStationEn()
{
    destinationStationEnIsSet_ = false;
}

std::string TrainTicketResult::getDepartureTime() const
{
    return departureTime_;
}

void TrainTicketResult::setDepartureTime(const std::string& value)
{
    departureTime_ = value;
    departureTimeIsSet_ = true;
}

bool TrainTicketResult::departureTimeIsSet() const
{
    return departureTimeIsSet_;
}

void TrainTicketResult::unsetdepartureTime()
{
    departureTimeIsSet_ = false;
}

std::string TrainTicketResult::getSeatNumber() const
{
    return seatNumber_;
}

void TrainTicketResult::setSeatNumber(const std::string& value)
{
    seatNumber_ = value;
    seatNumberIsSet_ = true;
}

bool TrainTicketResult::seatNumberIsSet() const
{
    return seatNumberIsSet_;
}

void TrainTicketResult::unsetseatNumber()
{
    seatNumberIsSet_ = false;
}

std::string TrainTicketResult::getTicketPrice() const
{
    return ticketPrice_;
}

void TrainTicketResult::setTicketPrice(const std::string& value)
{
    ticketPrice_ = value;
    ticketPriceIsSet_ = true;
}

bool TrainTicketResult::ticketPriceIsSet() const
{
    return ticketPriceIsSet_;
}

void TrainTicketResult::unsetticketPrice()
{
    ticketPriceIsSet_ = false;
}

std::string TrainTicketResult::getSaleMethod() const
{
    return saleMethod_;
}

void TrainTicketResult::setSaleMethod(const std::string& value)
{
    saleMethod_ = value;
    saleMethodIsSet_ = true;
}

bool TrainTicketResult::saleMethodIsSet() const
{
    return saleMethodIsSet_;
}

void TrainTicketResult::unsetsaleMethod()
{
    saleMethodIsSet_ = false;
}

std::string TrainTicketResult::getSeatCategory() const
{
    return seatCategory_;
}

void TrainTicketResult::setSeatCategory(const std::string& value)
{
    seatCategory_ = value;
    seatCategoryIsSet_ = true;
}

bool TrainTicketResult::seatCategoryIsSet() const
{
    return seatCategoryIsSet_;
}

void TrainTicketResult::unsetseatCategory()
{
    seatCategoryIsSet_ = false;
}

std::string TrainTicketResult::getTicketChanging() const
{
    return ticketChanging_;
}

void TrainTicketResult::setTicketChanging(const std::string& value)
{
    ticketChanging_ = value;
    ticketChangingIsSet_ = true;
}

bool TrainTicketResult::ticketChangingIsSet() const
{
    return ticketChangingIsSet_;
}

void TrainTicketResult::unsetticketChanging()
{
    ticketChangingIsSet_ = false;
}

std::string TrainTicketResult::getIdNumber() const
{
    return idNumber_;
}

void TrainTicketResult::setIdNumber(const std::string& value)
{
    idNumber_ = value;
    idNumberIsSet_ = true;
}

bool TrainTicketResult::idNumberIsSet() const
{
    return idNumberIsSet_;
}

void TrainTicketResult::unsetidNumber()
{
    idNumberIsSet_ = false;
}

std::string TrainTicketResult::getName() const
{
    return name_;
}

void TrainTicketResult::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool TrainTicketResult::nameIsSet() const
{
    return nameIsSet_;
}

void TrainTicketResult::unsetname()
{
    nameIsSet_ = false;
}

std::string TrainTicketResult::getLogId() const
{
    return logId_;
}

void TrainTicketResult::setLogId(const std::string& value)
{
    logId_ = value;
    logIdIsSet_ = true;
}

bool TrainTicketResult::logIdIsSet() const
{
    return logIdIsSet_;
}

void TrainTicketResult::unsetlogId()
{
    logIdIsSet_ = false;
}

std::string TrainTicketResult::getSaleLocation() const
{
    return saleLocation_;
}

void TrainTicketResult::setSaleLocation(const std::string& value)
{
    saleLocation_ = value;
    saleLocationIsSet_ = true;
}

bool TrainTicketResult::saleLocationIsSet() const
{
    return saleLocationIsSet_;
}

void TrainTicketResult::unsetsaleLocation()
{
    saleLocationIsSet_ = false;
}

Object TrainTicketResult::getConfidence() const
{
    return confidence_;
}

void TrainTicketResult::setConfidence(const Object& value)
{
    confidence_ = value;
    confidenceIsSet_ = true;
}

bool TrainTicketResult::confidenceIsSet() const
{
    return confidenceIsSet_;
}

void TrainTicketResult::unsetconfidence()
{
    confidenceIsSet_ = false;
}

}
}
}
}
}


