

#include "huaweicloud/ocr/v1/model/BusinessLicenseResult.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




BusinessLicenseResult::BusinessLicenseResult()
{
    registrationNumber_ = "";
    registrationNumberIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    address_ = "";
    addressIsSet_ = false;
    legalRepresentative_ = "";
    legalRepresentativeIsSet_ = false;
    registeredCapital_ = "";
    registeredCapitalIsSet_ = false;
    foundDate_ = "";
    foundDateIsSet_ = false;
    businessTerm_ = "";
    businessTermIsSet_ = false;
    businessScope_ = "";
    businessScopeIsSet_ = false;
    issueDate_ = "";
    issueDateIsSet_ = false;
    confidenceIsSet_ = false;
}

BusinessLicenseResult::~BusinessLicenseResult() = default;

void BusinessLicenseResult::validate()
{
}

web::json::value BusinessLicenseResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(registrationNumberIsSet_) {
        val[utility::conversions::to_string_t("registration_number")] = ModelBase::toJson(registrationNumber_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(addressIsSet_) {
        val[utility::conversions::to_string_t("address")] = ModelBase::toJson(address_);
    }
    if(legalRepresentativeIsSet_) {
        val[utility::conversions::to_string_t("legal_representative")] = ModelBase::toJson(legalRepresentative_);
    }
    if(registeredCapitalIsSet_) {
        val[utility::conversions::to_string_t("registered_capital")] = ModelBase::toJson(registeredCapital_);
    }
    if(foundDateIsSet_) {
        val[utility::conversions::to_string_t("found_date")] = ModelBase::toJson(foundDate_);
    }
    if(businessTermIsSet_) {
        val[utility::conversions::to_string_t("business_term")] = ModelBase::toJson(businessTerm_);
    }
    if(businessScopeIsSet_) {
        val[utility::conversions::to_string_t("business_scope")] = ModelBase::toJson(businessScope_);
    }
    if(issueDateIsSet_) {
        val[utility::conversions::to_string_t("issue_date")] = ModelBase::toJson(issueDate_);
    }
    if(confidenceIsSet_) {
        val[utility::conversions::to_string_t("confidence")] = ModelBase::toJson(confidence_);
    }

    return val;
}

bool BusinessLicenseResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("registration_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("registration_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegistrationNumber(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("legal_representative"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("legal_representative"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLegalRepresentative(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("registered_capital"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("registered_capital"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegisteredCapital(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("found_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("found_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFoundDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("business_term"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("business_term"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBusinessTerm(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("business_scope"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("business_scope"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBusinessScope(refVal);
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

std::string BusinessLicenseResult::getRegistrationNumber() const
{
    return registrationNumber_;
}

void BusinessLicenseResult::setRegistrationNumber(const std::string& value)
{
    registrationNumber_ = value;
    registrationNumberIsSet_ = true;
}

bool BusinessLicenseResult::registrationNumberIsSet() const
{
    return registrationNumberIsSet_;
}

void BusinessLicenseResult::unsetregistrationNumber()
{
    registrationNumberIsSet_ = false;
}

std::string BusinessLicenseResult::getName() const
{
    return name_;
}

void BusinessLicenseResult::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool BusinessLicenseResult::nameIsSet() const
{
    return nameIsSet_;
}

void BusinessLicenseResult::unsetname()
{
    nameIsSet_ = false;
}

std::string BusinessLicenseResult::getType() const
{
    return type_;
}

void BusinessLicenseResult::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool BusinessLicenseResult::typeIsSet() const
{
    return typeIsSet_;
}

void BusinessLicenseResult::unsettype()
{
    typeIsSet_ = false;
}

std::string BusinessLicenseResult::getAddress() const
{
    return address_;
}

void BusinessLicenseResult::setAddress(const std::string& value)
{
    address_ = value;
    addressIsSet_ = true;
}

bool BusinessLicenseResult::addressIsSet() const
{
    return addressIsSet_;
}

void BusinessLicenseResult::unsetaddress()
{
    addressIsSet_ = false;
}

std::string BusinessLicenseResult::getLegalRepresentative() const
{
    return legalRepresentative_;
}

void BusinessLicenseResult::setLegalRepresentative(const std::string& value)
{
    legalRepresentative_ = value;
    legalRepresentativeIsSet_ = true;
}

bool BusinessLicenseResult::legalRepresentativeIsSet() const
{
    return legalRepresentativeIsSet_;
}

void BusinessLicenseResult::unsetlegalRepresentative()
{
    legalRepresentativeIsSet_ = false;
}

std::string BusinessLicenseResult::getRegisteredCapital() const
{
    return registeredCapital_;
}

void BusinessLicenseResult::setRegisteredCapital(const std::string& value)
{
    registeredCapital_ = value;
    registeredCapitalIsSet_ = true;
}

bool BusinessLicenseResult::registeredCapitalIsSet() const
{
    return registeredCapitalIsSet_;
}

void BusinessLicenseResult::unsetregisteredCapital()
{
    registeredCapitalIsSet_ = false;
}

std::string BusinessLicenseResult::getFoundDate() const
{
    return foundDate_;
}

void BusinessLicenseResult::setFoundDate(const std::string& value)
{
    foundDate_ = value;
    foundDateIsSet_ = true;
}

bool BusinessLicenseResult::foundDateIsSet() const
{
    return foundDateIsSet_;
}

void BusinessLicenseResult::unsetfoundDate()
{
    foundDateIsSet_ = false;
}

std::string BusinessLicenseResult::getBusinessTerm() const
{
    return businessTerm_;
}

void BusinessLicenseResult::setBusinessTerm(const std::string& value)
{
    businessTerm_ = value;
    businessTermIsSet_ = true;
}

bool BusinessLicenseResult::businessTermIsSet() const
{
    return businessTermIsSet_;
}

void BusinessLicenseResult::unsetbusinessTerm()
{
    businessTermIsSet_ = false;
}

std::string BusinessLicenseResult::getBusinessScope() const
{
    return businessScope_;
}

void BusinessLicenseResult::setBusinessScope(const std::string& value)
{
    businessScope_ = value;
    businessScopeIsSet_ = true;
}

bool BusinessLicenseResult::businessScopeIsSet() const
{
    return businessScopeIsSet_;
}

void BusinessLicenseResult::unsetbusinessScope()
{
    businessScopeIsSet_ = false;
}

std::string BusinessLicenseResult::getIssueDate() const
{
    return issueDate_;
}

void BusinessLicenseResult::setIssueDate(const std::string& value)
{
    issueDate_ = value;
    issueDateIsSet_ = true;
}

bool BusinessLicenseResult::issueDateIsSet() const
{
    return issueDateIsSet_;
}

void BusinessLicenseResult::unsetissueDate()
{
    issueDateIsSet_ = false;
}

Object BusinessLicenseResult::getConfidence() const
{
    return confidence_;
}

void BusinessLicenseResult::setConfidence(const Object& value)
{
    confidence_ = value;
    confidenceIsSet_ = true;
}

bool BusinessLicenseResult::confidenceIsSet() const
{
    return confidenceIsSet_;
}

void BusinessLicenseResult::unsetconfidence()
{
    confidenceIsSet_ = false;
}

}
}
}
}
}


