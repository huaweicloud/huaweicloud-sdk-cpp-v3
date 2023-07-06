

#include "huaweicloud/ocr/v1/model/IdDocumentItem.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




IdDocumentItem::IdDocumentItem()
{
    countryRegion_ = "";
    countryRegionIsSet_ = false;
    idType_ = "";
    idTypeIsSet_ = false;
    side_ = "";
    sideIsSet_ = false;
    firstName_ = "";
    firstNameIsSet_ = false;
    lastName_ = "";
    lastNameIsSet_ = false;
    sex_ = "";
    sexIsSet_ = false;
    nationality_ = "";
    nationalityIsSet_ = false;
    birthDate_ = "";
    birthDateIsSet_ = false;
    issueDate_ = "";
    issueDateIsSet_ = false;
    expiryDate_ = "";
    expiryDateIsSet_ = false;
    documentNumber_ = "";
    documentNumberIsSet_ = false;
    address_ = "";
    addressIsSet_ = false;
    issuingAuthority_ = "";
    issuingAuthorityIsSet_ = false;
    portraitImage_ = "";
    portraitImageIsSet_ = false;
    confidenceIsSet_ = false;
}

IdDocumentItem::~IdDocumentItem() = default;

void IdDocumentItem::validate()
{
}

web::json::value IdDocumentItem::toJson() const
{
    web::json::value val = web::json::value::object();

    if(countryRegionIsSet_) {
        val[utility::conversions::to_string_t("country_region")] = ModelBase::toJson(countryRegion_);
    }
    if(idTypeIsSet_) {
        val[utility::conversions::to_string_t("id_type")] = ModelBase::toJson(idType_);
    }
    if(sideIsSet_) {
        val[utility::conversions::to_string_t("side")] = ModelBase::toJson(side_);
    }
    if(firstNameIsSet_) {
        val[utility::conversions::to_string_t("first_name")] = ModelBase::toJson(firstName_);
    }
    if(lastNameIsSet_) {
        val[utility::conversions::to_string_t("last_name")] = ModelBase::toJson(lastName_);
    }
    if(sexIsSet_) {
        val[utility::conversions::to_string_t("sex")] = ModelBase::toJson(sex_);
    }
    if(nationalityIsSet_) {
        val[utility::conversions::to_string_t("nationality")] = ModelBase::toJson(nationality_);
    }
    if(birthDateIsSet_) {
        val[utility::conversions::to_string_t("birth_date")] = ModelBase::toJson(birthDate_);
    }
    if(issueDateIsSet_) {
        val[utility::conversions::to_string_t("issue_date")] = ModelBase::toJson(issueDate_);
    }
    if(expiryDateIsSet_) {
        val[utility::conversions::to_string_t("expiry_date")] = ModelBase::toJson(expiryDate_);
    }
    if(documentNumberIsSet_) {
        val[utility::conversions::to_string_t("document_number")] = ModelBase::toJson(documentNumber_);
    }
    if(addressIsSet_) {
        val[utility::conversions::to_string_t("address")] = ModelBase::toJson(address_);
    }
    if(issuingAuthorityIsSet_) {
        val[utility::conversions::to_string_t("issuing_authority")] = ModelBase::toJson(issuingAuthority_);
    }
    if(portraitImageIsSet_) {
        val[utility::conversions::to_string_t("portrait_image")] = ModelBase::toJson(portraitImage_);
    }
    if(confidenceIsSet_) {
        val[utility::conversions::to_string_t("confidence")] = ModelBase::toJson(confidence_);
    }

    return val;
}

bool IdDocumentItem::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("country_region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("country_region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCountryRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("side"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("side"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSide(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("first_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("first_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFirstName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sex"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sex"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSex(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nationality"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nationality"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNationality(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("birth_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("birth_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBirthDate(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("expiry_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expiry_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpiryDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("document_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("document_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDocumentNumber(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("issuing_authority"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issuing_authority"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssuingAuthority(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("portrait_image"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("portrait_image"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPortraitImage(refVal);
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

std::string IdDocumentItem::getCountryRegion() const
{
    return countryRegion_;
}

void IdDocumentItem::setCountryRegion(const std::string& value)
{
    countryRegion_ = value;
    countryRegionIsSet_ = true;
}

bool IdDocumentItem::countryRegionIsSet() const
{
    return countryRegionIsSet_;
}

void IdDocumentItem::unsetcountryRegion()
{
    countryRegionIsSet_ = false;
}

std::string IdDocumentItem::getIdType() const
{
    return idType_;
}

void IdDocumentItem::setIdType(const std::string& value)
{
    idType_ = value;
    idTypeIsSet_ = true;
}

bool IdDocumentItem::idTypeIsSet() const
{
    return idTypeIsSet_;
}

void IdDocumentItem::unsetidType()
{
    idTypeIsSet_ = false;
}

std::string IdDocumentItem::getSide() const
{
    return side_;
}

void IdDocumentItem::setSide(const std::string& value)
{
    side_ = value;
    sideIsSet_ = true;
}

bool IdDocumentItem::sideIsSet() const
{
    return sideIsSet_;
}

void IdDocumentItem::unsetside()
{
    sideIsSet_ = false;
}

std::string IdDocumentItem::getFirstName() const
{
    return firstName_;
}

void IdDocumentItem::setFirstName(const std::string& value)
{
    firstName_ = value;
    firstNameIsSet_ = true;
}

bool IdDocumentItem::firstNameIsSet() const
{
    return firstNameIsSet_;
}

void IdDocumentItem::unsetfirstName()
{
    firstNameIsSet_ = false;
}

std::string IdDocumentItem::getLastName() const
{
    return lastName_;
}

void IdDocumentItem::setLastName(const std::string& value)
{
    lastName_ = value;
    lastNameIsSet_ = true;
}

bool IdDocumentItem::lastNameIsSet() const
{
    return lastNameIsSet_;
}

void IdDocumentItem::unsetlastName()
{
    lastNameIsSet_ = false;
}

std::string IdDocumentItem::getSex() const
{
    return sex_;
}

void IdDocumentItem::setSex(const std::string& value)
{
    sex_ = value;
    sexIsSet_ = true;
}

bool IdDocumentItem::sexIsSet() const
{
    return sexIsSet_;
}

void IdDocumentItem::unsetsex()
{
    sexIsSet_ = false;
}

std::string IdDocumentItem::getNationality() const
{
    return nationality_;
}

void IdDocumentItem::setNationality(const std::string& value)
{
    nationality_ = value;
    nationalityIsSet_ = true;
}

bool IdDocumentItem::nationalityIsSet() const
{
    return nationalityIsSet_;
}

void IdDocumentItem::unsetnationality()
{
    nationalityIsSet_ = false;
}

std::string IdDocumentItem::getBirthDate() const
{
    return birthDate_;
}

void IdDocumentItem::setBirthDate(const std::string& value)
{
    birthDate_ = value;
    birthDateIsSet_ = true;
}

bool IdDocumentItem::birthDateIsSet() const
{
    return birthDateIsSet_;
}

void IdDocumentItem::unsetbirthDate()
{
    birthDateIsSet_ = false;
}

std::string IdDocumentItem::getIssueDate() const
{
    return issueDate_;
}

void IdDocumentItem::setIssueDate(const std::string& value)
{
    issueDate_ = value;
    issueDateIsSet_ = true;
}

bool IdDocumentItem::issueDateIsSet() const
{
    return issueDateIsSet_;
}

void IdDocumentItem::unsetissueDate()
{
    issueDateIsSet_ = false;
}

std::string IdDocumentItem::getExpiryDate() const
{
    return expiryDate_;
}

void IdDocumentItem::setExpiryDate(const std::string& value)
{
    expiryDate_ = value;
    expiryDateIsSet_ = true;
}

bool IdDocumentItem::expiryDateIsSet() const
{
    return expiryDateIsSet_;
}

void IdDocumentItem::unsetexpiryDate()
{
    expiryDateIsSet_ = false;
}

std::string IdDocumentItem::getDocumentNumber() const
{
    return documentNumber_;
}

void IdDocumentItem::setDocumentNumber(const std::string& value)
{
    documentNumber_ = value;
    documentNumberIsSet_ = true;
}

bool IdDocumentItem::documentNumberIsSet() const
{
    return documentNumberIsSet_;
}

void IdDocumentItem::unsetdocumentNumber()
{
    documentNumberIsSet_ = false;
}

std::string IdDocumentItem::getAddress() const
{
    return address_;
}

void IdDocumentItem::setAddress(const std::string& value)
{
    address_ = value;
    addressIsSet_ = true;
}

bool IdDocumentItem::addressIsSet() const
{
    return addressIsSet_;
}

void IdDocumentItem::unsetaddress()
{
    addressIsSet_ = false;
}

std::string IdDocumentItem::getIssuingAuthority() const
{
    return issuingAuthority_;
}

void IdDocumentItem::setIssuingAuthority(const std::string& value)
{
    issuingAuthority_ = value;
    issuingAuthorityIsSet_ = true;
}

bool IdDocumentItem::issuingAuthorityIsSet() const
{
    return issuingAuthorityIsSet_;
}

void IdDocumentItem::unsetissuingAuthority()
{
    issuingAuthorityIsSet_ = false;
}

std::string IdDocumentItem::getPortraitImage() const
{
    return portraitImage_;
}

void IdDocumentItem::setPortraitImage(const std::string& value)
{
    portraitImage_ = value;
    portraitImageIsSet_ = true;
}

bool IdDocumentItem::portraitImageIsSet() const
{
    return portraitImageIsSet_;
}

void IdDocumentItem::unsetportraitImage()
{
    portraitImageIsSet_ = false;
}

Object IdDocumentItem::getConfidence() const
{
    return confidence_;
}

void IdDocumentItem::setConfidence(const Object& value)
{
    confidence_ = value;
    confidenceIsSet_ = true;
}

bool IdDocumentItem::confidenceIsSet() const
{
    return confidenceIsSet_;
}

void IdDocumentItem::unsetconfidence()
{
    confidenceIsSet_ = false;
}

}
}
}
}
}


