

#include "huaweicloud/ocr/v1/model/FlightItineraryResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




FlightItineraryResult::FlightItineraryResult()
{
    serialNumber_ = "";
    serialNumberIsSet_ = false;
    passengerName_ = "";
    passengerNameIsSet_ = false;
    idNumber_ = "";
    idNumberIsSet_ = false;
    endorsementsRestrictions_ = "";
    endorsementsRestrictionsIsSet_ = false;
    orderNumber_ = "";
    orderNumberIsSet_ = false;
    fare_ = "";
    fareIsSet_ = false;
    caacDevelopmentFund_ = "";
    caacDevelopmentFundIsSet_ = false;
    fuelSurcharge_ = "";
    fuelSurchargeIsSet_ = false;
    otherTaxes_ = "";
    otherTaxesIsSet_ = false;
    total_ = "";
    totalIsSet_ = false;
    eTicketNumber_ = "";
    eTicketNumberIsSet_ = false;
    checkCode_ = "";
    checkCodeIsSet_ = false;
    referenceInformation_ = "";
    referenceInformationIsSet_ = false;
    insurance_ = "";
    insuranceIsSet_ = false;
    agentCode_ = "";
    agentCodeIsSet_ = false;
    issueOrganization_ = "";
    issueOrganizationIsSet_ = false;
    issueDate_ = "";
    issueDateIsSet_ = false;
    tax_ = "";
    taxIsSet_ = false;
    taxRate_ = "";
    taxRateIsSet_ = false;
    buyerName_ = "";
    buyerNameIsSet_ = false;
    buyerId_ = "";
    buyerIdIsSet_ = false;
    number_ = "";
    numberIsSet_ = false;
    internationalFlag_ = "";
    internationalFlagIsSet_ = false;
    issueStatus_ = "";
    issueStatusIsSet_ = false;
    itineraryListIsSet_ = false;
    confidenceIsSet_ = false;
}

FlightItineraryResult::~FlightItineraryResult() = default;

void FlightItineraryResult::validate()
{
}

web::json::value FlightItineraryResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serialNumberIsSet_) {
        val[utility::conversions::to_string_t("serial_number")] = ModelBase::toJson(serialNumber_);
    }
    if(passengerNameIsSet_) {
        val[utility::conversions::to_string_t("passenger_name")] = ModelBase::toJson(passengerName_);
    }
    if(idNumberIsSet_) {
        val[utility::conversions::to_string_t("id_number")] = ModelBase::toJson(idNumber_);
    }
    if(endorsementsRestrictionsIsSet_) {
        val[utility::conversions::to_string_t("endorsements_restrictions")] = ModelBase::toJson(endorsementsRestrictions_);
    }
    if(orderNumberIsSet_) {
        val[utility::conversions::to_string_t("order_number")] = ModelBase::toJson(orderNumber_);
    }
    if(fareIsSet_) {
        val[utility::conversions::to_string_t("fare")] = ModelBase::toJson(fare_);
    }
    if(caacDevelopmentFundIsSet_) {
        val[utility::conversions::to_string_t("caac_development_fund")] = ModelBase::toJson(caacDevelopmentFund_);
    }
    if(fuelSurchargeIsSet_) {
        val[utility::conversions::to_string_t("fuel_surcharge")] = ModelBase::toJson(fuelSurcharge_);
    }
    if(otherTaxesIsSet_) {
        val[utility::conversions::to_string_t("other_taxes")] = ModelBase::toJson(otherTaxes_);
    }
    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(eTicketNumberIsSet_) {
        val[utility::conversions::to_string_t("e_ticket_number")] = ModelBase::toJson(eTicketNumber_);
    }
    if(checkCodeIsSet_) {
        val[utility::conversions::to_string_t("check_code")] = ModelBase::toJson(checkCode_);
    }
    if(referenceInformationIsSet_) {
        val[utility::conversions::to_string_t("reference_information")] = ModelBase::toJson(referenceInformation_);
    }
    if(insuranceIsSet_) {
        val[utility::conversions::to_string_t("insurance")] = ModelBase::toJson(insurance_);
    }
    if(agentCodeIsSet_) {
        val[utility::conversions::to_string_t("agent_code")] = ModelBase::toJson(agentCode_);
    }
    if(issueOrganizationIsSet_) {
        val[utility::conversions::to_string_t("issue_organization")] = ModelBase::toJson(issueOrganization_);
    }
    if(issueDateIsSet_) {
        val[utility::conversions::to_string_t("issue_date")] = ModelBase::toJson(issueDate_);
    }
    if(taxIsSet_) {
        val[utility::conversions::to_string_t("tax")] = ModelBase::toJson(tax_);
    }
    if(taxRateIsSet_) {
        val[utility::conversions::to_string_t("tax_rate")] = ModelBase::toJson(taxRate_);
    }
    if(buyerNameIsSet_) {
        val[utility::conversions::to_string_t("buyer_name")] = ModelBase::toJson(buyerName_);
    }
    if(buyerIdIsSet_) {
        val[utility::conversions::to_string_t("buyer_id")] = ModelBase::toJson(buyerId_);
    }
    if(numberIsSet_) {
        val[utility::conversions::to_string_t("number")] = ModelBase::toJson(number_);
    }
    if(internationalFlagIsSet_) {
        val[utility::conversions::to_string_t("international_flag")] = ModelBase::toJson(internationalFlag_);
    }
    if(issueStatusIsSet_) {
        val[utility::conversions::to_string_t("issue_status")] = ModelBase::toJson(issueStatus_);
    }
    if(itineraryListIsSet_) {
        val[utility::conversions::to_string_t("itinerary_list")] = ModelBase::toJson(itineraryList_);
    }
    if(confidenceIsSet_) {
        val[utility::conversions::to_string_t("confidence")] = ModelBase::toJson(confidence_);
    }

    return val;
}
bool FlightItineraryResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("serial_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("serial_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSerialNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("passenger_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("passenger_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPassengerName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("endorsements_restrictions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endorsements_restrictions"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndorsementsRestrictions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("order_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrderNumber(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("caac_development_fund"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("caac_development_fund"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCaacDevelopmentFund(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fuel_surcharge"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fuel_surcharge"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFuelSurcharge(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("other_taxes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("other_taxes"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOtherTaxes(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("e_ticket_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("e_ticket_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setETicketNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("check_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("check_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCheckCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reference_information"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reference_information"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReferenceInformation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("insurance"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("insurance"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInsurance(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("agent_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agent_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAgentCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issue_organization"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_organization"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueOrganization(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("tax"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tax"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTax(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("buyer_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("buyer_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBuyerName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("buyer_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("buyer_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBuyerId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("international_flag"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("international_flag"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInternationalFlag(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issue_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("itinerary_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("itinerary_list"));
        if(!fieldValue.is_null())
        {
            std::vector<ItineraryList> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setItineraryList(refVal);
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


std::string FlightItineraryResult::getSerialNumber() const
{
    return serialNumber_;
}

void FlightItineraryResult::setSerialNumber(const std::string& value)
{
    serialNumber_ = value;
    serialNumberIsSet_ = true;
}

bool FlightItineraryResult::serialNumberIsSet() const
{
    return serialNumberIsSet_;
}

void FlightItineraryResult::unsetserialNumber()
{
    serialNumberIsSet_ = false;
}

std::string FlightItineraryResult::getPassengerName() const
{
    return passengerName_;
}

void FlightItineraryResult::setPassengerName(const std::string& value)
{
    passengerName_ = value;
    passengerNameIsSet_ = true;
}

bool FlightItineraryResult::passengerNameIsSet() const
{
    return passengerNameIsSet_;
}

void FlightItineraryResult::unsetpassengerName()
{
    passengerNameIsSet_ = false;
}

std::string FlightItineraryResult::getIdNumber() const
{
    return idNumber_;
}

void FlightItineraryResult::setIdNumber(const std::string& value)
{
    idNumber_ = value;
    idNumberIsSet_ = true;
}

bool FlightItineraryResult::idNumberIsSet() const
{
    return idNumberIsSet_;
}

void FlightItineraryResult::unsetidNumber()
{
    idNumberIsSet_ = false;
}

std::string FlightItineraryResult::getEndorsementsRestrictions() const
{
    return endorsementsRestrictions_;
}

void FlightItineraryResult::setEndorsementsRestrictions(const std::string& value)
{
    endorsementsRestrictions_ = value;
    endorsementsRestrictionsIsSet_ = true;
}

bool FlightItineraryResult::endorsementsRestrictionsIsSet() const
{
    return endorsementsRestrictionsIsSet_;
}

void FlightItineraryResult::unsetendorsementsRestrictions()
{
    endorsementsRestrictionsIsSet_ = false;
}

std::string FlightItineraryResult::getOrderNumber() const
{
    return orderNumber_;
}

void FlightItineraryResult::setOrderNumber(const std::string& value)
{
    orderNumber_ = value;
    orderNumberIsSet_ = true;
}

bool FlightItineraryResult::orderNumberIsSet() const
{
    return orderNumberIsSet_;
}

void FlightItineraryResult::unsetorderNumber()
{
    orderNumberIsSet_ = false;
}

std::string FlightItineraryResult::getFare() const
{
    return fare_;
}

void FlightItineraryResult::setFare(const std::string& value)
{
    fare_ = value;
    fareIsSet_ = true;
}

bool FlightItineraryResult::fareIsSet() const
{
    return fareIsSet_;
}

void FlightItineraryResult::unsetfare()
{
    fareIsSet_ = false;
}

std::string FlightItineraryResult::getCaacDevelopmentFund() const
{
    return caacDevelopmentFund_;
}

void FlightItineraryResult::setCaacDevelopmentFund(const std::string& value)
{
    caacDevelopmentFund_ = value;
    caacDevelopmentFundIsSet_ = true;
}

bool FlightItineraryResult::caacDevelopmentFundIsSet() const
{
    return caacDevelopmentFundIsSet_;
}

void FlightItineraryResult::unsetcaacDevelopmentFund()
{
    caacDevelopmentFundIsSet_ = false;
}

std::string FlightItineraryResult::getFuelSurcharge() const
{
    return fuelSurcharge_;
}

void FlightItineraryResult::setFuelSurcharge(const std::string& value)
{
    fuelSurcharge_ = value;
    fuelSurchargeIsSet_ = true;
}

bool FlightItineraryResult::fuelSurchargeIsSet() const
{
    return fuelSurchargeIsSet_;
}

void FlightItineraryResult::unsetfuelSurcharge()
{
    fuelSurchargeIsSet_ = false;
}

std::string FlightItineraryResult::getOtherTaxes() const
{
    return otherTaxes_;
}

void FlightItineraryResult::setOtherTaxes(const std::string& value)
{
    otherTaxes_ = value;
    otherTaxesIsSet_ = true;
}

bool FlightItineraryResult::otherTaxesIsSet() const
{
    return otherTaxesIsSet_;
}

void FlightItineraryResult::unsetotherTaxes()
{
    otherTaxesIsSet_ = false;
}

std::string FlightItineraryResult::getTotal() const
{
    return total_;
}

void FlightItineraryResult::setTotal(const std::string& value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool FlightItineraryResult::totalIsSet() const
{
    return totalIsSet_;
}

void FlightItineraryResult::unsettotal()
{
    totalIsSet_ = false;
}

std::string FlightItineraryResult::getETicketNumber() const
{
    return eTicketNumber_;
}

void FlightItineraryResult::setETicketNumber(const std::string& value)
{
    eTicketNumber_ = value;
    eTicketNumberIsSet_ = true;
}

bool FlightItineraryResult::eTicketNumberIsSet() const
{
    return eTicketNumberIsSet_;
}

void FlightItineraryResult::unseteTicketNumber()
{
    eTicketNumberIsSet_ = false;
}

std::string FlightItineraryResult::getCheckCode() const
{
    return checkCode_;
}

void FlightItineraryResult::setCheckCode(const std::string& value)
{
    checkCode_ = value;
    checkCodeIsSet_ = true;
}

bool FlightItineraryResult::checkCodeIsSet() const
{
    return checkCodeIsSet_;
}

void FlightItineraryResult::unsetcheckCode()
{
    checkCodeIsSet_ = false;
}

std::string FlightItineraryResult::getReferenceInformation() const
{
    return referenceInformation_;
}

void FlightItineraryResult::setReferenceInformation(const std::string& value)
{
    referenceInformation_ = value;
    referenceInformationIsSet_ = true;
}

bool FlightItineraryResult::referenceInformationIsSet() const
{
    return referenceInformationIsSet_;
}

void FlightItineraryResult::unsetreferenceInformation()
{
    referenceInformationIsSet_ = false;
}

std::string FlightItineraryResult::getInsurance() const
{
    return insurance_;
}

void FlightItineraryResult::setInsurance(const std::string& value)
{
    insurance_ = value;
    insuranceIsSet_ = true;
}

bool FlightItineraryResult::insuranceIsSet() const
{
    return insuranceIsSet_;
}

void FlightItineraryResult::unsetinsurance()
{
    insuranceIsSet_ = false;
}

std::string FlightItineraryResult::getAgentCode() const
{
    return agentCode_;
}

void FlightItineraryResult::setAgentCode(const std::string& value)
{
    agentCode_ = value;
    agentCodeIsSet_ = true;
}

bool FlightItineraryResult::agentCodeIsSet() const
{
    return agentCodeIsSet_;
}

void FlightItineraryResult::unsetagentCode()
{
    agentCodeIsSet_ = false;
}

std::string FlightItineraryResult::getIssueOrganization() const
{
    return issueOrganization_;
}

void FlightItineraryResult::setIssueOrganization(const std::string& value)
{
    issueOrganization_ = value;
    issueOrganizationIsSet_ = true;
}

bool FlightItineraryResult::issueOrganizationIsSet() const
{
    return issueOrganizationIsSet_;
}

void FlightItineraryResult::unsetissueOrganization()
{
    issueOrganizationIsSet_ = false;
}

std::string FlightItineraryResult::getIssueDate() const
{
    return issueDate_;
}

void FlightItineraryResult::setIssueDate(const std::string& value)
{
    issueDate_ = value;
    issueDateIsSet_ = true;
}

bool FlightItineraryResult::issueDateIsSet() const
{
    return issueDateIsSet_;
}

void FlightItineraryResult::unsetissueDate()
{
    issueDateIsSet_ = false;
}

std::string FlightItineraryResult::getTax() const
{
    return tax_;
}

void FlightItineraryResult::setTax(const std::string& value)
{
    tax_ = value;
    taxIsSet_ = true;
}

bool FlightItineraryResult::taxIsSet() const
{
    return taxIsSet_;
}

void FlightItineraryResult::unsettax()
{
    taxIsSet_ = false;
}

std::string FlightItineraryResult::getTaxRate() const
{
    return taxRate_;
}

void FlightItineraryResult::setTaxRate(const std::string& value)
{
    taxRate_ = value;
    taxRateIsSet_ = true;
}

bool FlightItineraryResult::taxRateIsSet() const
{
    return taxRateIsSet_;
}

void FlightItineraryResult::unsettaxRate()
{
    taxRateIsSet_ = false;
}

std::string FlightItineraryResult::getBuyerName() const
{
    return buyerName_;
}

void FlightItineraryResult::setBuyerName(const std::string& value)
{
    buyerName_ = value;
    buyerNameIsSet_ = true;
}

bool FlightItineraryResult::buyerNameIsSet() const
{
    return buyerNameIsSet_;
}

void FlightItineraryResult::unsetbuyerName()
{
    buyerNameIsSet_ = false;
}

std::string FlightItineraryResult::getBuyerId() const
{
    return buyerId_;
}

void FlightItineraryResult::setBuyerId(const std::string& value)
{
    buyerId_ = value;
    buyerIdIsSet_ = true;
}

bool FlightItineraryResult::buyerIdIsSet() const
{
    return buyerIdIsSet_;
}

void FlightItineraryResult::unsetbuyerId()
{
    buyerIdIsSet_ = false;
}

std::string FlightItineraryResult::getNumber() const
{
    return number_;
}

void FlightItineraryResult::setNumber(const std::string& value)
{
    number_ = value;
    numberIsSet_ = true;
}

bool FlightItineraryResult::numberIsSet() const
{
    return numberIsSet_;
}

void FlightItineraryResult::unsetnumber()
{
    numberIsSet_ = false;
}

std::string FlightItineraryResult::getInternationalFlag() const
{
    return internationalFlag_;
}

void FlightItineraryResult::setInternationalFlag(const std::string& value)
{
    internationalFlag_ = value;
    internationalFlagIsSet_ = true;
}

bool FlightItineraryResult::internationalFlagIsSet() const
{
    return internationalFlagIsSet_;
}

void FlightItineraryResult::unsetinternationalFlag()
{
    internationalFlagIsSet_ = false;
}

std::string FlightItineraryResult::getIssueStatus() const
{
    return issueStatus_;
}

void FlightItineraryResult::setIssueStatus(const std::string& value)
{
    issueStatus_ = value;
    issueStatusIsSet_ = true;
}

bool FlightItineraryResult::issueStatusIsSet() const
{
    return issueStatusIsSet_;
}

void FlightItineraryResult::unsetissueStatus()
{
    issueStatusIsSet_ = false;
}

std::vector<ItineraryList>& FlightItineraryResult::getItineraryList()
{
    return itineraryList_;
}

void FlightItineraryResult::setItineraryList(const std::vector<ItineraryList>& value)
{
    itineraryList_ = value;
    itineraryListIsSet_ = true;
}

bool FlightItineraryResult::itineraryListIsSet() const
{
    return itineraryListIsSet_;
}

void FlightItineraryResult::unsetitineraryList()
{
    itineraryListIsSet_ = false;
}

Object FlightItineraryResult::getConfidence() const
{
    return confidence_;
}

void FlightItineraryResult::setConfidence(const Object& value)
{
    confidence_ = value;
    confidenceIsSet_ = true;
}

bool FlightItineraryResult::confidenceIsSet() const
{
    return confidenceIsSet_;
}

void FlightItineraryResult::unsetconfidence()
{
    confidenceIsSet_ = false;
}

}
}
}
}
}


