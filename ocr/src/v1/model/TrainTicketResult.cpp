

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
    invoiceStyle_ = "";
    invoiceStyleIsSet_ = false;
    issueDate_ = "";
    issueDateIsSet_ = false;
    discountMark_ = "";
    discountMarkIsSet_ = false;
    serialNumber_ = "";
    serialNumberIsSet_ = false;
    taxAmount_ = "";
    taxAmountIsSet_ = false;
    taxRate_ = "";
    taxRateIsSet_ = false;
    airConditioning_ = "";
    airConditioningIsSet_ = false;
    originalInvoiceNumber_ = "";
    originalInvoiceNumberIsSet_ = false;
    unifiedSocialCreditCode_ = "";
    unifiedSocialCreditCodeIsSet_ = false;
    buyerName_ = "";
    buyerNameIsSet_ = false;
    totalAmountExcludingTax_ = "";
    totalAmountExcludingTaxIsSet_ = false;
    invoiceNumber_ = "";
    invoiceNumberIsSet_ = false;
    sealMark_ = false;
    sealMarkIsSet_ = false;
    title_ = "";
    titleIsSet_ = false;
    area_ = "";
    areaIsSet_ = false;
    receiptNumber_ = "";
    receiptNumberIsSet_ = false;
    amountInFigures_ = "";
    amountInFiguresIsSet_ = false;
    amountInWords_ = "";
    amountInWordsIsSet_ = false;
    confidenceIsSet_ = false;
    textLocationIsSet_ = false;
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
    if(invoiceStyleIsSet_) {
        val[utility::conversions::to_string_t("invoice_style")] = ModelBase::toJson(invoiceStyle_);
    }
    if(issueDateIsSet_) {
        val[utility::conversions::to_string_t("issue_date")] = ModelBase::toJson(issueDate_);
    }
    if(discountMarkIsSet_) {
        val[utility::conversions::to_string_t("discount_mark")] = ModelBase::toJson(discountMark_);
    }
    if(serialNumberIsSet_) {
        val[utility::conversions::to_string_t("serial_number")] = ModelBase::toJson(serialNumber_);
    }
    if(taxAmountIsSet_) {
        val[utility::conversions::to_string_t("tax_amount")] = ModelBase::toJson(taxAmount_);
    }
    if(taxRateIsSet_) {
        val[utility::conversions::to_string_t("tax_rate")] = ModelBase::toJson(taxRate_);
    }
    if(airConditioningIsSet_) {
        val[utility::conversions::to_string_t("air_conditioning")] = ModelBase::toJson(airConditioning_);
    }
    if(originalInvoiceNumberIsSet_) {
        val[utility::conversions::to_string_t("original_invoice_number")] = ModelBase::toJson(originalInvoiceNumber_);
    }
    if(unifiedSocialCreditCodeIsSet_) {
        val[utility::conversions::to_string_t("unified_social_credit_code")] = ModelBase::toJson(unifiedSocialCreditCode_);
    }
    if(buyerNameIsSet_) {
        val[utility::conversions::to_string_t("buyer_name")] = ModelBase::toJson(buyerName_);
    }
    if(totalAmountExcludingTaxIsSet_) {
        val[utility::conversions::to_string_t("total_amount_excluding_tax")] = ModelBase::toJson(totalAmountExcludingTax_);
    }
    if(invoiceNumberIsSet_) {
        val[utility::conversions::to_string_t("invoice_number")] = ModelBase::toJson(invoiceNumber_);
    }
    if(sealMarkIsSet_) {
        val[utility::conversions::to_string_t("seal_mark")] = ModelBase::toJson(sealMark_);
    }
    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }
    if(areaIsSet_) {
        val[utility::conversions::to_string_t("area")] = ModelBase::toJson(area_);
    }
    if(receiptNumberIsSet_) {
        val[utility::conversions::to_string_t("receipt_number")] = ModelBase::toJson(receiptNumber_);
    }
    if(amountInFiguresIsSet_) {
        val[utility::conversions::to_string_t("amount_in_figures")] = ModelBase::toJson(amountInFigures_);
    }
    if(amountInWordsIsSet_) {
        val[utility::conversions::to_string_t("amount_in_words")] = ModelBase::toJson(amountInWords_);
    }
    if(confidenceIsSet_) {
        val[utility::conversions::to_string_t("confidence")] = ModelBase::toJson(confidence_);
    }
    if(textLocationIsSet_) {
        val[utility::conversions::to_string_t("text_location")] = ModelBase::toJson(textLocation_);
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
    if(val.has_field(utility::conversions::to_string_t("invoice_style"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("invoice_style"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInvoiceStyle(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issue_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("discount_mark"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("discount_mark"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDiscountMark(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("serial_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("serial_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSerialNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tax_amount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tax_amount"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaxAmount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tax_rate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tax_rate"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaxRate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("air_conditioning"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("air_conditioning"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAirConditioning(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("original_invoice_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("original_invoice_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOriginalInvoiceNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("unified_social_credit_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("unified_social_credit_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUnifiedSocialCreditCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("buyer_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("buyer_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBuyerName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_amount_excluding_tax"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_amount_excluding_tax"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalAmountExcludingTax(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("invoice_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("invoice_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInvoiceNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("seal_mark"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("seal_mark"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSealMark(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("title"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("title"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTitle(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("area"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("area"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setArea(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("receipt_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("receipt_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReceiptNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("amount_in_figures"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("amount_in_figures"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAmountInFigures(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("amount_in_words"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("amount_in_words"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAmountInWords(refVal);
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

std::string TrainTicketResult::getInvoiceStyle() const
{
    return invoiceStyle_;
}

void TrainTicketResult::setInvoiceStyle(const std::string& value)
{
    invoiceStyle_ = value;
    invoiceStyleIsSet_ = true;
}

bool TrainTicketResult::invoiceStyleIsSet() const
{
    return invoiceStyleIsSet_;
}

void TrainTicketResult::unsetinvoiceStyle()
{
    invoiceStyleIsSet_ = false;
}

std::string TrainTicketResult::getIssueDate() const
{
    return issueDate_;
}

void TrainTicketResult::setIssueDate(const std::string& value)
{
    issueDate_ = value;
    issueDateIsSet_ = true;
}

bool TrainTicketResult::issueDateIsSet() const
{
    return issueDateIsSet_;
}

void TrainTicketResult::unsetissueDate()
{
    issueDateIsSet_ = false;
}

std::string TrainTicketResult::getDiscountMark() const
{
    return discountMark_;
}

void TrainTicketResult::setDiscountMark(const std::string& value)
{
    discountMark_ = value;
    discountMarkIsSet_ = true;
}

bool TrainTicketResult::discountMarkIsSet() const
{
    return discountMarkIsSet_;
}

void TrainTicketResult::unsetdiscountMark()
{
    discountMarkIsSet_ = false;
}

std::string TrainTicketResult::getSerialNumber() const
{
    return serialNumber_;
}

void TrainTicketResult::setSerialNumber(const std::string& value)
{
    serialNumber_ = value;
    serialNumberIsSet_ = true;
}

bool TrainTicketResult::serialNumberIsSet() const
{
    return serialNumberIsSet_;
}

void TrainTicketResult::unsetserialNumber()
{
    serialNumberIsSet_ = false;
}

std::string TrainTicketResult::getTaxAmount() const
{
    return taxAmount_;
}

void TrainTicketResult::setTaxAmount(const std::string& value)
{
    taxAmount_ = value;
    taxAmountIsSet_ = true;
}

bool TrainTicketResult::taxAmountIsSet() const
{
    return taxAmountIsSet_;
}

void TrainTicketResult::unsettaxAmount()
{
    taxAmountIsSet_ = false;
}

std::string TrainTicketResult::getTaxRate() const
{
    return taxRate_;
}

void TrainTicketResult::setTaxRate(const std::string& value)
{
    taxRate_ = value;
    taxRateIsSet_ = true;
}

bool TrainTicketResult::taxRateIsSet() const
{
    return taxRateIsSet_;
}

void TrainTicketResult::unsettaxRate()
{
    taxRateIsSet_ = false;
}

std::string TrainTicketResult::getAirConditioning() const
{
    return airConditioning_;
}

void TrainTicketResult::setAirConditioning(const std::string& value)
{
    airConditioning_ = value;
    airConditioningIsSet_ = true;
}

bool TrainTicketResult::airConditioningIsSet() const
{
    return airConditioningIsSet_;
}

void TrainTicketResult::unsetairConditioning()
{
    airConditioningIsSet_ = false;
}

std::string TrainTicketResult::getOriginalInvoiceNumber() const
{
    return originalInvoiceNumber_;
}

void TrainTicketResult::setOriginalInvoiceNumber(const std::string& value)
{
    originalInvoiceNumber_ = value;
    originalInvoiceNumberIsSet_ = true;
}

bool TrainTicketResult::originalInvoiceNumberIsSet() const
{
    return originalInvoiceNumberIsSet_;
}

void TrainTicketResult::unsetoriginalInvoiceNumber()
{
    originalInvoiceNumberIsSet_ = false;
}

std::string TrainTicketResult::getUnifiedSocialCreditCode() const
{
    return unifiedSocialCreditCode_;
}

void TrainTicketResult::setUnifiedSocialCreditCode(const std::string& value)
{
    unifiedSocialCreditCode_ = value;
    unifiedSocialCreditCodeIsSet_ = true;
}

bool TrainTicketResult::unifiedSocialCreditCodeIsSet() const
{
    return unifiedSocialCreditCodeIsSet_;
}

void TrainTicketResult::unsetunifiedSocialCreditCode()
{
    unifiedSocialCreditCodeIsSet_ = false;
}

std::string TrainTicketResult::getBuyerName() const
{
    return buyerName_;
}

void TrainTicketResult::setBuyerName(const std::string& value)
{
    buyerName_ = value;
    buyerNameIsSet_ = true;
}

bool TrainTicketResult::buyerNameIsSet() const
{
    return buyerNameIsSet_;
}

void TrainTicketResult::unsetbuyerName()
{
    buyerNameIsSet_ = false;
}

std::string TrainTicketResult::getTotalAmountExcludingTax() const
{
    return totalAmountExcludingTax_;
}

void TrainTicketResult::setTotalAmountExcludingTax(const std::string& value)
{
    totalAmountExcludingTax_ = value;
    totalAmountExcludingTaxIsSet_ = true;
}

bool TrainTicketResult::totalAmountExcludingTaxIsSet() const
{
    return totalAmountExcludingTaxIsSet_;
}

void TrainTicketResult::unsettotalAmountExcludingTax()
{
    totalAmountExcludingTaxIsSet_ = false;
}

std::string TrainTicketResult::getInvoiceNumber() const
{
    return invoiceNumber_;
}

void TrainTicketResult::setInvoiceNumber(const std::string& value)
{
    invoiceNumber_ = value;
    invoiceNumberIsSet_ = true;
}

bool TrainTicketResult::invoiceNumberIsSet() const
{
    return invoiceNumberIsSet_;
}

void TrainTicketResult::unsetinvoiceNumber()
{
    invoiceNumberIsSet_ = false;
}

bool TrainTicketResult::isSealMark() const
{
    return sealMark_;
}

void TrainTicketResult::setSealMark(bool value)
{
    sealMark_ = value;
    sealMarkIsSet_ = true;
}

bool TrainTicketResult::sealMarkIsSet() const
{
    return sealMarkIsSet_;
}

void TrainTicketResult::unsetsealMark()
{
    sealMarkIsSet_ = false;
}

std::string TrainTicketResult::getTitle() const
{
    return title_;
}

void TrainTicketResult::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool TrainTicketResult::titleIsSet() const
{
    return titleIsSet_;
}

void TrainTicketResult::unsettitle()
{
    titleIsSet_ = false;
}

std::string TrainTicketResult::getArea() const
{
    return area_;
}

void TrainTicketResult::setArea(const std::string& value)
{
    area_ = value;
    areaIsSet_ = true;
}

bool TrainTicketResult::areaIsSet() const
{
    return areaIsSet_;
}

void TrainTicketResult::unsetarea()
{
    areaIsSet_ = false;
}

std::string TrainTicketResult::getReceiptNumber() const
{
    return receiptNumber_;
}

void TrainTicketResult::setReceiptNumber(const std::string& value)
{
    receiptNumber_ = value;
    receiptNumberIsSet_ = true;
}

bool TrainTicketResult::receiptNumberIsSet() const
{
    return receiptNumberIsSet_;
}

void TrainTicketResult::unsetreceiptNumber()
{
    receiptNumberIsSet_ = false;
}

std::string TrainTicketResult::getAmountInFigures() const
{
    return amountInFigures_;
}

void TrainTicketResult::setAmountInFigures(const std::string& value)
{
    amountInFigures_ = value;
    amountInFiguresIsSet_ = true;
}

bool TrainTicketResult::amountInFiguresIsSet() const
{
    return amountInFiguresIsSet_;
}

void TrainTicketResult::unsetamountInFigures()
{
    amountInFiguresIsSet_ = false;
}

std::string TrainTicketResult::getAmountInWords() const
{
    return amountInWords_;
}

void TrainTicketResult::setAmountInWords(const std::string& value)
{
    amountInWords_ = value;
    amountInWordsIsSet_ = true;
}

bool TrainTicketResult::amountInWordsIsSet() const
{
    return amountInWordsIsSet_;
}

void TrainTicketResult::unsetamountInWords()
{
    amountInWordsIsSet_ = false;
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

Object TrainTicketResult::getTextLocation() const
{
    return textLocation_;
}

void TrainTicketResult::setTextLocation(const Object& value)
{
    textLocation_ = value;
    textLocationIsSet_ = true;
}

bool TrainTicketResult::textLocationIsSet() const
{
    return textLocationIsSet_;
}

void TrainTicketResult::unsettextLocation()
{
    textLocationIsSet_ = false;
}

}
}
}
}
}


