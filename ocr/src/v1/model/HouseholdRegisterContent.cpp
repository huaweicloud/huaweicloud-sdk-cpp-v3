

#include "huaweicloud/ocr/v1/model/HouseholdRegisterContent.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




HouseholdRegisterContent::HouseholdRegisterContent()
{
    name_ = "";
    nameIsSet_ = false;
    householderRelationship_ = "";
    householderRelationshipIsSet_ = false;
    formerName_ = "";
    formerNameIsSet_ = false;
    sex_ = "";
    sexIsSet_ = false;
    birthplace_ = "";
    birthplaceIsSet_ = false;
    ethnicity_ = "";
    ethnicityIsSet_ = false;
    originPlace_ = "";
    originPlaceIsSet_ = false;
    birthDate_ = "";
    birthDateIsSet_ = false;
    otherAddress_ = "";
    otherAddressIsSet_ = false;
    religiousBelief_ = "";
    religiousBeliefIsSet_ = false;
    idCardNumber_ = "";
    idCardNumberIsSet_ = false;
    height_ = "";
    heightIsSet_ = false;
    bloodType_ = "";
    bloodTypeIsSet_ = false;
    education_ = "";
    educationIsSet_ = false;
    maritalStatus_ = "";
    maritalStatusIsSet_ = false;
    militaryServiceStatus_ = "";
    militaryServiceStatusIsSet_ = false;
    workPlace_ = "";
    workPlaceIsSet_ = false;
    occupation_ = "";
    occupationIsSet_ = false;
    migratedToCity_ = "";
    migratedToCityIsSet_ = false;
    migratedToAddress_ = "";
    migratedToAddressIsSet_ = false;
    registrarSignatureSeal_ = "";
    registrarSignatureSealIsSet_ = false;
    registrationDate_ = "";
    registrationDateIsSet_ = false;
    householdType_ = "";
    householdTypeIsSet_ = false;
    householdNumber_ = "";
    householdNumberIsSet_ = false;
    householderName_ = "";
    householderNameIsSet_ = false;
    community_ = "";
    communityIsSet_ = false;
    address_ = "";
    addressIsSet_ = false;
    issueDate_ = "";
    issueDateIsSet_ = false;
    policeStation_ = "";
    policeStationIsSet_ = false;
}

HouseholdRegisterContent::~HouseholdRegisterContent() = default;

void HouseholdRegisterContent::validate()
{
}

web::json::value HouseholdRegisterContent::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(householderRelationshipIsSet_) {
        val[utility::conversions::to_string_t("householder_relationship")] = ModelBase::toJson(householderRelationship_);
    }
    if(formerNameIsSet_) {
        val[utility::conversions::to_string_t("former_name")] = ModelBase::toJson(formerName_);
    }
    if(sexIsSet_) {
        val[utility::conversions::to_string_t("sex")] = ModelBase::toJson(sex_);
    }
    if(birthplaceIsSet_) {
        val[utility::conversions::to_string_t("birthplace")] = ModelBase::toJson(birthplace_);
    }
    if(ethnicityIsSet_) {
        val[utility::conversions::to_string_t("ethnicity")] = ModelBase::toJson(ethnicity_);
    }
    if(originPlaceIsSet_) {
        val[utility::conversions::to_string_t("origin_place")] = ModelBase::toJson(originPlace_);
    }
    if(birthDateIsSet_) {
        val[utility::conversions::to_string_t("birth_date")] = ModelBase::toJson(birthDate_);
    }
    if(otherAddressIsSet_) {
        val[utility::conversions::to_string_t("other_address")] = ModelBase::toJson(otherAddress_);
    }
    if(religiousBeliefIsSet_) {
        val[utility::conversions::to_string_t("religious_belief")] = ModelBase::toJson(religiousBelief_);
    }
    if(idCardNumberIsSet_) {
        val[utility::conversions::to_string_t("id_card_number")] = ModelBase::toJson(idCardNumber_);
    }
    if(heightIsSet_) {
        val[utility::conversions::to_string_t("height")] = ModelBase::toJson(height_);
    }
    if(bloodTypeIsSet_) {
        val[utility::conversions::to_string_t("blood_type")] = ModelBase::toJson(bloodType_);
    }
    if(educationIsSet_) {
        val[utility::conversions::to_string_t("education")] = ModelBase::toJson(education_);
    }
    if(maritalStatusIsSet_) {
        val[utility::conversions::to_string_t("marital_status")] = ModelBase::toJson(maritalStatus_);
    }
    if(militaryServiceStatusIsSet_) {
        val[utility::conversions::to_string_t("military_service_status")] = ModelBase::toJson(militaryServiceStatus_);
    }
    if(workPlaceIsSet_) {
        val[utility::conversions::to_string_t("work_place")] = ModelBase::toJson(workPlace_);
    }
    if(occupationIsSet_) {
        val[utility::conversions::to_string_t("occupation")] = ModelBase::toJson(occupation_);
    }
    if(migratedToCityIsSet_) {
        val[utility::conversions::to_string_t("migrated_to_city")] = ModelBase::toJson(migratedToCity_);
    }
    if(migratedToAddressIsSet_) {
        val[utility::conversions::to_string_t("migrated_to_address")] = ModelBase::toJson(migratedToAddress_);
    }
    if(registrarSignatureSealIsSet_) {
        val[utility::conversions::to_string_t("registrar_signature_seal")] = ModelBase::toJson(registrarSignatureSeal_);
    }
    if(registrationDateIsSet_) {
        val[utility::conversions::to_string_t("registration_date")] = ModelBase::toJson(registrationDate_);
    }
    if(householdTypeIsSet_) {
        val[utility::conversions::to_string_t("household_type")] = ModelBase::toJson(householdType_);
    }
    if(householdNumberIsSet_) {
        val[utility::conversions::to_string_t("household_number")] = ModelBase::toJson(householdNumber_);
    }
    if(householderNameIsSet_) {
        val[utility::conversions::to_string_t("householder_name")] = ModelBase::toJson(householderName_);
    }
    if(communityIsSet_) {
        val[utility::conversions::to_string_t("community")] = ModelBase::toJson(community_);
    }
    if(addressIsSet_) {
        val[utility::conversions::to_string_t("address")] = ModelBase::toJson(address_);
    }
    if(issueDateIsSet_) {
        val[utility::conversions::to_string_t("issue_date")] = ModelBase::toJson(issueDate_);
    }
    if(policeStationIsSet_) {
        val[utility::conversions::to_string_t("police_station")] = ModelBase::toJson(policeStation_);
    }

    return val;
}
bool HouseholdRegisterContent::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("householder_relationship"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("householder_relationship"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHouseholderRelationship(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("former_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("former_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFormerName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("birthplace"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("birthplace"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBirthplace(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ethnicity"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ethnicity"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEthnicity(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("origin_place"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("origin_place"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOriginPlace(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("other_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("other_address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOtherAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("religious_belief"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("religious_belief"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReligiousBelief(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id_card_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id_card_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdCardNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("height"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("height"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHeight(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("blood_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("blood_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBloodType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("education"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("education"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEducation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("marital_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("marital_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaritalStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("military_service_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("military_service_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMilitaryServiceStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("work_place"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("work_place"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkPlace(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("occupation"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("occupation"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOccupation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("migrated_to_city"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("migrated_to_city"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMigratedToCity(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("migrated_to_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("migrated_to_address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMigratedToAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("registrar_signature_seal"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("registrar_signature_seal"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegistrarSignatureSeal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("registration_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("registration_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegistrationDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("household_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("household_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHouseholdType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("household_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("household_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHouseholdNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("householder_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("householder_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHouseholderName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("community"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("community"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommunity(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("issue_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("police_station"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("police_station"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPoliceStation(refVal);
        }
    }
    return ok;
}


std::string HouseholdRegisterContent::getName() const
{
    return name_;
}

void HouseholdRegisterContent::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool HouseholdRegisterContent::nameIsSet() const
{
    return nameIsSet_;
}

void HouseholdRegisterContent::unsetname()
{
    nameIsSet_ = false;
}

std::string HouseholdRegisterContent::getHouseholderRelationship() const
{
    return householderRelationship_;
}

void HouseholdRegisterContent::setHouseholderRelationship(const std::string& value)
{
    householderRelationship_ = value;
    householderRelationshipIsSet_ = true;
}

bool HouseholdRegisterContent::householderRelationshipIsSet() const
{
    return householderRelationshipIsSet_;
}

void HouseholdRegisterContent::unsethouseholderRelationship()
{
    householderRelationshipIsSet_ = false;
}

std::string HouseholdRegisterContent::getFormerName() const
{
    return formerName_;
}

void HouseholdRegisterContent::setFormerName(const std::string& value)
{
    formerName_ = value;
    formerNameIsSet_ = true;
}

bool HouseholdRegisterContent::formerNameIsSet() const
{
    return formerNameIsSet_;
}

void HouseholdRegisterContent::unsetformerName()
{
    formerNameIsSet_ = false;
}

std::string HouseholdRegisterContent::getSex() const
{
    return sex_;
}

void HouseholdRegisterContent::setSex(const std::string& value)
{
    sex_ = value;
    sexIsSet_ = true;
}

bool HouseholdRegisterContent::sexIsSet() const
{
    return sexIsSet_;
}

void HouseholdRegisterContent::unsetsex()
{
    sexIsSet_ = false;
}

std::string HouseholdRegisterContent::getBirthplace() const
{
    return birthplace_;
}

void HouseholdRegisterContent::setBirthplace(const std::string& value)
{
    birthplace_ = value;
    birthplaceIsSet_ = true;
}

bool HouseholdRegisterContent::birthplaceIsSet() const
{
    return birthplaceIsSet_;
}

void HouseholdRegisterContent::unsetbirthplace()
{
    birthplaceIsSet_ = false;
}

std::string HouseholdRegisterContent::getEthnicity() const
{
    return ethnicity_;
}

void HouseholdRegisterContent::setEthnicity(const std::string& value)
{
    ethnicity_ = value;
    ethnicityIsSet_ = true;
}

bool HouseholdRegisterContent::ethnicityIsSet() const
{
    return ethnicityIsSet_;
}

void HouseholdRegisterContent::unsetethnicity()
{
    ethnicityIsSet_ = false;
}

std::string HouseholdRegisterContent::getOriginPlace() const
{
    return originPlace_;
}

void HouseholdRegisterContent::setOriginPlace(const std::string& value)
{
    originPlace_ = value;
    originPlaceIsSet_ = true;
}

bool HouseholdRegisterContent::originPlaceIsSet() const
{
    return originPlaceIsSet_;
}

void HouseholdRegisterContent::unsetoriginPlace()
{
    originPlaceIsSet_ = false;
}

std::string HouseholdRegisterContent::getBirthDate() const
{
    return birthDate_;
}

void HouseholdRegisterContent::setBirthDate(const std::string& value)
{
    birthDate_ = value;
    birthDateIsSet_ = true;
}

bool HouseholdRegisterContent::birthDateIsSet() const
{
    return birthDateIsSet_;
}

void HouseholdRegisterContent::unsetbirthDate()
{
    birthDateIsSet_ = false;
}

std::string HouseholdRegisterContent::getOtherAddress() const
{
    return otherAddress_;
}

void HouseholdRegisterContent::setOtherAddress(const std::string& value)
{
    otherAddress_ = value;
    otherAddressIsSet_ = true;
}

bool HouseholdRegisterContent::otherAddressIsSet() const
{
    return otherAddressIsSet_;
}

void HouseholdRegisterContent::unsetotherAddress()
{
    otherAddressIsSet_ = false;
}

std::string HouseholdRegisterContent::getReligiousBelief() const
{
    return religiousBelief_;
}

void HouseholdRegisterContent::setReligiousBelief(const std::string& value)
{
    religiousBelief_ = value;
    religiousBeliefIsSet_ = true;
}

bool HouseholdRegisterContent::religiousBeliefIsSet() const
{
    return religiousBeliefIsSet_;
}

void HouseholdRegisterContent::unsetreligiousBelief()
{
    religiousBeliefIsSet_ = false;
}

std::string HouseholdRegisterContent::getIdCardNumber() const
{
    return idCardNumber_;
}

void HouseholdRegisterContent::setIdCardNumber(const std::string& value)
{
    idCardNumber_ = value;
    idCardNumberIsSet_ = true;
}

bool HouseholdRegisterContent::idCardNumberIsSet() const
{
    return idCardNumberIsSet_;
}

void HouseholdRegisterContent::unsetidCardNumber()
{
    idCardNumberIsSet_ = false;
}

std::string HouseholdRegisterContent::getHeight() const
{
    return height_;
}

void HouseholdRegisterContent::setHeight(const std::string& value)
{
    height_ = value;
    heightIsSet_ = true;
}

bool HouseholdRegisterContent::heightIsSet() const
{
    return heightIsSet_;
}

void HouseholdRegisterContent::unsetheight()
{
    heightIsSet_ = false;
}

std::string HouseholdRegisterContent::getBloodType() const
{
    return bloodType_;
}

void HouseholdRegisterContent::setBloodType(const std::string& value)
{
    bloodType_ = value;
    bloodTypeIsSet_ = true;
}

bool HouseholdRegisterContent::bloodTypeIsSet() const
{
    return bloodTypeIsSet_;
}

void HouseholdRegisterContent::unsetbloodType()
{
    bloodTypeIsSet_ = false;
}

std::string HouseholdRegisterContent::getEducation() const
{
    return education_;
}

void HouseholdRegisterContent::setEducation(const std::string& value)
{
    education_ = value;
    educationIsSet_ = true;
}

bool HouseholdRegisterContent::educationIsSet() const
{
    return educationIsSet_;
}

void HouseholdRegisterContent::unseteducation()
{
    educationIsSet_ = false;
}

std::string HouseholdRegisterContent::getMaritalStatus() const
{
    return maritalStatus_;
}

void HouseholdRegisterContent::setMaritalStatus(const std::string& value)
{
    maritalStatus_ = value;
    maritalStatusIsSet_ = true;
}

bool HouseholdRegisterContent::maritalStatusIsSet() const
{
    return maritalStatusIsSet_;
}

void HouseholdRegisterContent::unsetmaritalStatus()
{
    maritalStatusIsSet_ = false;
}

std::string HouseholdRegisterContent::getMilitaryServiceStatus() const
{
    return militaryServiceStatus_;
}

void HouseholdRegisterContent::setMilitaryServiceStatus(const std::string& value)
{
    militaryServiceStatus_ = value;
    militaryServiceStatusIsSet_ = true;
}

bool HouseholdRegisterContent::militaryServiceStatusIsSet() const
{
    return militaryServiceStatusIsSet_;
}

void HouseholdRegisterContent::unsetmilitaryServiceStatus()
{
    militaryServiceStatusIsSet_ = false;
}

std::string HouseholdRegisterContent::getWorkPlace() const
{
    return workPlace_;
}

void HouseholdRegisterContent::setWorkPlace(const std::string& value)
{
    workPlace_ = value;
    workPlaceIsSet_ = true;
}

bool HouseholdRegisterContent::workPlaceIsSet() const
{
    return workPlaceIsSet_;
}

void HouseholdRegisterContent::unsetworkPlace()
{
    workPlaceIsSet_ = false;
}

std::string HouseholdRegisterContent::getOccupation() const
{
    return occupation_;
}

void HouseholdRegisterContent::setOccupation(const std::string& value)
{
    occupation_ = value;
    occupationIsSet_ = true;
}

bool HouseholdRegisterContent::occupationIsSet() const
{
    return occupationIsSet_;
}

void HouseholdRegisterContent::unsetoccupation()
{
    occupationIsSet_ = false;
}

std::string HouseholdRegisterContent::getMigratedToCity() const
{
    return migratedToCity_;
}

void HouseholdRegisterContent::setMigratedToCity(const std::string& value)
{
    migratedToCity_ = value;
    migratedToCityIsSet_ = true;
}

bool HouseholdRegisterContent::migratedToCityIsSet() const
{
    return migratedToCityIsSet_;
}

void HouseholdRegisterContent::unsetmigratedToCity()
{
    migratedToCityIsSet_ = false;
}

std::string HouseholdRegisterContent::getMigratedToAddress() const
{
    return migratedToAddress_;
}

void HouseholdRegisterContent::setMigratedToAddress(const std::string& value)
{
    migratedToAddress_ = value;
    migratedToAddressIsSet_ = true;
}

bool HouseholdRegisterContent::migratedToAddressIsSet() const
{
    return migratedToAddressIsSet_;
}

void HouseholdRegisterContent::unsetmigratedToAddress()
{
    migratedToAddressIsSet_ = false;
}

std::string HouseholdRegisterContent::getRegistrarSignatureSeal() const
{
    return registrarSignatureSeal_;
}

void HouseholdRegisterContent::setRegistrarSignatureSeal(const std::string& value)
{
    registrarSignatureSeal_ = value;
    registrarSignatureSealIsSet_ = true;
}

bool HouseholdRegisterContent::registrarSignatureSealIsSet() const
{
    return registrarSignatureSealIsSet_;
}

void HouseholdRegisterContent::unsetregistrarSignatureSeal()
{
    registrarSignatureSealIsSet_ = false;
}

std::string HouseholdRegisterContent::getRegistrationDate() const
{
    return registrationDate_;
}

void HouseholdRegisterContent::setRegistrationDate(const std::string& value)
{
    registrationDate_ = value;
    registrationDateIsSet_ = true;
}

bool HouseholdRegisterContent::registrationDateIsSet() const
{
    return registrationDateIsSet_;
}

void HouseholdRegisterContent::unsetregistrationDate()
{
    registrationDateIsSet_ = false;
}

std::string HouseholdRegisterContent::getHouseholdType() const
{
    return householdType_;
}

void HouseholdRegisterContent::setHouseholdType(const std::string& value)
{
    householdType_ = value;
    householdTypeIsSet_ = true;
}

bool HouseholdRegisterContent::householdTypeIsSet() const
{
    return householdTypeIsSet_;
}

void HouseholdRegisterContent::unsethouseholdType()
{
    householdTypeIsSet_ = false;
}

std::string HouseholdRegisterContent::getHouseholdNumber() const
{
    return householdNumber_;
}

void HouseholdRegisterContent::setHouseholdNumber(const std::string& value)
{
    householdNumber_ = value;
    householdNumberIsSet_ = true;
}

bool HouseholdRegisterContent::householdNumberIsSet() const
{
    return householdNumberIsSet_;
}

void HouseholdRegisterContent::unsethouseholdNumber()
{
    householdNumberIsSet_ = false;
}

std::string HouseholdRegisterContent::getHouseholderName() const
{
    return householderName_;
}

void HouseholdRegisterContent::setHouseholderName(const std::string& value)
{
    householderName_ = value;
    householderNameIsSet_ = true;
}

bool HouseholdRegisterContent::householderNameIsSet() const
{
    return householderNameIsSet_;
}

void HouseholdRegisterContent::unsethouseholderName()
{
    householderNameIsSet_ = false;
}

std::string HouseholdRegisterContent::getCommunity() const
{
    return community_;
}

void HouseholdRegisterContent::setCommunity(const std::string& value)
{
    community_ = value;
    communityIsSet_ = true;
}

bool HouseholdRegisterContent::communityIsSet() const
{
    return communityIsSet_;
}

void HouseholdRegisterContent::unsetcommunity()
{
    communityIsSet_ = false;
}

std::string HouseholdRegisterContent::getAddress() const
{
    return address_;
}

void HouseholdRegisterContent::setAddress(const std::string& value)
{
    address_ = value;
    addressIsSet_ = true;
}

bool HouseholdRegisterContent::addressIsSet() const
{
    return addressIsSet_;
}

void HouseholdRegisterContent::unsetaddress()
{
    addressIsSet_ = false;
}

std::string HouseholdRegisterContent::getIssueDate() const
{
    return issueDate_;
}

void HouseholdRegisterContent::setIssueDate(const std::string& value)
{
    issueDate_ = value;
    issueDateIsSet_ = true;
}

bool HouseholdRegisterContent::issueDateIsSet() const
{
    return issueDateIsSet_;
}

void HouseholdRegisterContent::unsetissueDate()
{
    issueDateIsSet_ = false;
}

std::string HouseholdRegisterContent::getPoliceStation() const
{
    return policeStation_;
}

void HouseholdRegisterContent::setPoliceStation(const std::string& value)
{
    policeStation_ = value;
    policeStationIsSet_ = true;
}

bool HouseholdRegisterContent::policeStationIsSet() const
{
    return policeStationIsSet_;
}

void HouseholdRegisterContent::unsetpoliceStation()
{
    policeStationIsSet_ = false;
}

}
}
}
}
}


