

#include "huaweicloud/ocr/v1/model/PeruIdCardResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




PeruIdCardResult::PeruIdCardResult()
{
    cuiNumber_ = "";
    cuiNumberIsSet_ = false;
    firstSurname_ = "";
    firstSurnameIsSet_ = false;
    secondSurname_ = "";
    secondSurnameIsSet_ = false;
    givenName_ = "";
    givenNameIsSet_ = false;
    sex_ = "";
    sexIsSet_ = false;
    maritalStatus_ = "";
    maritalStatusIsSet_ = false;
    birthDate_ = "";
    birthDateIsSet_ = false;
    nationality_ = "";
    nationalityIsSet_ = false;
    issueDate_ = "";
    issueDateIsSet_ = false;
    expiryDate_ = "";
    expiryDateIsSet_ = false;
    birthPlace_ = "";
    birthPlaceIsSet_ = false;
    votingGroup_ = "";
    votingGroupIsSet_ = false;
    organDonation_ = "";
    organDonationIsSet_ = false;
    registrationDate_ = "";
    registrationDateIsSet_ = false;
    portraitImage_ = "";
    portraitImageIsSet_ = false;
    portraitLocationIsSet_ = false;
    address_ = "";
    addressIsSet_ = false;
    department_ = "";
    departmentIsSet_ = false;
    province_ = "";
    provinceIsSet_ = false;
    district_ = "";
    districtIsSet_ = false;
    remarks_ = "";
    remarksIsSet_ = false;
    machineCode1_ = "";
    machineCode1IsSet_ = false;
    machineCode2_ = "";
    machineCode2IsSet_ = false;
    machineCode3_ = "";
    machineCode3IsSet_ = false;
    duplicate_ = false;
    duplicateIsSet_ = false;
    confidenceIsSet_ = false;
}

PeruIdCardResult::~PeruIdCardResult() = default;

void PeruIdCardResult::validate()
{
}

web::json::value PeruIdCardResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(cuiNumberIsSet_) {
        val[utility::conversions::to_string_t("cui_number")] = ModelBase::toJson(cuiNumber_);
    }
    if(firstSurnameIsSet_) {
        val[utility::conversions::to_string_t("first_surname")] = ModelBase::toJson(firstSurname_);
    }
    if(secondSurnameIsSet_) {
        val[utility::conversions::to_string_t("second_surname")] = ModelBase::toJson(secondSurname_);
    }
    if(givenNameIsSet_) {
        val[utility::conversions::to_string_t("given_name")] = ModelBase::toJson(givenName_);
    }
    if(sexIsSet_) {
        val[utility::conversions::to_string_t("sex")] = ModelBase::toJson(sex_);
    }
    if(maritalStatusIsSet_) {
        val[utility::conversions::to_string_t("marital_status")] = ModelBase::toJson(maritalStatus_);
    }
    if(birthDateIsSet_) {
        val[utility::conversions::to_string_t("birth_date")] = ModelBase::toJson(birthDate_);
    }
    if(nationalityIsSet_) {
        val[utility::conversions::to_string_t("nationality")] = ModelBase::toJson(nationality_);
    }
    if(issueDateIsSet_) {
        val[utility::conversions::to_string_t("issue_date")] = ModelBase::toJson(issueDate_);
    }
    if(expiryDateIsSet_) {
        val[utility::conversions::to_string_t("expiry_date")] = ModelBase::toJson(expiryDate_);
    }
    if(birthPlaceIsSet_) {
        val[utility::conversions::to_string_t("birth_place")] = ModelBase::toJson(birthPlace_);
    }
    if(votingGroupIsSet_) {
        val[utility::conversions::to_string_t("voting_group")] = ModelBase::toJson(votingGroup_);
    }
    if(organDonationIsSet_) {
        val[utility::conversions::to_string_t("organ_donation")] = ModelBase::toJson(organDonation_);
    }
    if(registrationDateIsSet_) {
        val[utility::conversions::to_string_t("registration_date")] = ModelBase::toJson(registrationDate_);
    }
    if(portraitImageIsSet_) {
        val[utility::conversions::to_string_t("portrait_image")] = ModelBase::toJson(portraitImage_);
    }
    if(portraitLocationIsSet_) {
        val[utility::conversions::to_string_t("portrait_location")] = ModelBase::toJson(portraitLocation_);
    }
    if(addressIsSet_) {
        val[utility::conversions::to_string_t("address")] = ModelBase::toJson(address_);
    }
    if(departmentIsSet_) {
        val[utility::conversions::to_string_t("department")] = ModelBase::toJson(department_);
    }
    if(provinceIsSet_) {
        val[utility::conversions::to_string_t("province")] = ModelBase::toJson(province_);
    }
    if(districtIsSet_) {
        val[utility::conversions::to_string_t("district")] = ModelBase::toJson(district_);
    }
    if(remarksIsSet_) {
        val[utility::conversions::to_string_t("remarks")] = ModelBase::toJson(remarks_);
    }
    if(machineCode1IsSet_) {
        val[utility::conversions::to_string_t("machine_code1")] = ModelBase::toJson(machineCode1_);
    }
    if(machineCode2IsSet_) {
        val[utility::conversions::to_string_t("machine_code2")] = ModelBase::toJson(machineCode2_);
    }
    if(machineCode3IsSet_) {
        val[utility::conversions::to_string_t("machine_code3")] = ModelBase::toJson(machineCode3_);
    }
    if(duplicateIsSet_) {
        val[utility::conversions::to_string_t("duplicate")] = ModelBase::toJson(duplicate_);
    }
    if(confidenceIsSet_) {
        val[utility::conversions::to_string_t("confidence")] = ModelBase::toJson(confidence_);
    }

    return val;
}
bool PeruIdCardResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cui_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cui_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCuiNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("first_surname"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("first_surname"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFirstSurname(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("second_surname"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("second_surname"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecondSurname(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("given_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("given_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGivenName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("marital_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("marital_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaritalStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("nationality"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nationality"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNationality(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("birth_place"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("birth_place"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBirthPlace(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("voting_group"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("voting_group"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVotingGroup(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("organ_donation"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("organ_donation"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrganDonation(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("portrait_image"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("portrait_image"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPortraitImage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("portrait_location"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("portrait_location"));
        if(!fieldValue.is_null())
        {
            std::vector<std::vector<int32_t>> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPortraitLocation(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("department"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("department"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDepartment(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("province"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("province"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProvince(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("district"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("district"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDistrict(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("remarks"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("remarks"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemarks(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("machine_code1"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("machine_code1"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMachineCode1(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("machine_code2"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("machine_code2"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMachineCode2(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("machine_code3"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("machine_code3"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMachineCode3(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("duplicate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("duplicate"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDuplicate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("confidence"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("confidence"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, float> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfidence(refVal);
        }
    }
    return ok;
}


std::string PeruIdCardResult::getCuiNumber() const
{
    return cuiNumber_;
}

void PeruIdCardResult::setCuiNumber(const std::string& value)
{
    cuiNumber_ = value;
    cuiNumberIsSet_ = true;
}

bool PeruIdCardResult::cuiNumberIsSet() const
{
    return cuiNumberIsSet_;
}

void PeruIdCardResult::unsetcuiNumber()
{
    cuiNumberIsSet_ = false;
}

std::string PeruIdCardResult::getFirstSurname() const
{
    return firstSurname_;
}

void PeruIdCardResult::setFirstSurname(const std::string& value)
{
    firstSurname_ = value;
    firstSurnameIsSet_ = true;
}

bool PeruIdCardResult::firstSurnameIsSet() const
{
    return firstSurnameIsSet_;
}

void PeruIdCardResult::unsetfirstSurname()
{
    firstSurnameIsSet_ = false;
}

std::string PeruIdCardResult::getSecondSurname() const
{
    return secondSurname_;
}

void PeruIdCardResult::setSecondSurname(const std::string& value)
{
    secondSurname_ = value;
    secondSurnameIsSet_ = true;
}

bool PeruIdCardResult::secondSurnameIsSet() const
{
    return secondSurnameIsSet_;
}

void PeruIdCardResult::unsetsecondSurname()
{
    secondSurnameIsSet_ = false;
}

std::string PeruIdCardResult::getGivenName() const
{
    return givenName_;
}

void PeruIdCardResult::setGivenName(const std::string& value)
{
    givenName_ = value;
    givenNameIsSet_ = true;
}

bool PeruIdCardResult::givenNameIsSet() const
{
    return givenNameIsSet_;
}

void PeruIdCardResult::unsetgivenName()
{
    givenNameIsSet_ = false;
}

std::string PeruIdCardResult::getSex() const
{
    return sex_;
}

void PeruIdCardResult::setSex(const std::string& value)
{
    sex_ = value;
    sexIsSet_ = true;
}

bool PeruIdCardResult::sexIsSet() const
{
    return sexIsSet_;
}

void PeruIdCardResult::unsetsex()
{
    sexIsSet_ = false;
}

std::string PeruIdCardResult::getMaritalStatus() const
{
    return maritalStatus_;
}

void PeruIdCardResult::setMaritalStatus(const std::string& value)
{
    maritalStatus_ = value;
    maritalStatusIsSet_ = true;
}

bool PeruIdCardResult::maritalStatusIsSet() const
{
    return maritalStatusIsSet_;
}

void PeruIdCardResult::unsetmaritalStatus()
{
    maritalStatusIsSet_ = false;
}

std::string PeruIdCardResult::getBirthDate() const
{
    return birthDate_;
}

void PeruIdCardResult::setBirthDate(const std::string& value)
{
    birthDate_ = value;
    birthDateIsSet_ = true;
}

bool PeruIdCardResult::birthDateIsSet() const
{
    return birthDateIsSet_;
}

void PeruIdCardResult::unsetbirthDate()
{
    birthDateIsSet_ = false;
}

std::string PeruIdCardResult::getNationality() const
{
    return nationality_;
}

void PeruIdCardResult::setNationality(const std::string& value)
{
    nationality_ = value;
    nationalityIsSet_ = true;
}

bool PeruIdCardResult::nationalityIsSet() const
{
    return nationalityIsSet_;
}

void PeruIdCardResult::unsetnationality()
{
    nationalityIsSet_ = false;
}

std::string PeruIdCardResult::getIssueDate() const
{
    return issueDate_;
}

void PeruIdCardResult::setIssueDate(const std::string& value)
{
    issueDate_ = value;
    issueDateIsSet_ = true;
}

bool PeruIdCardResult::issueDateIsSet() const
{
    return issueDateIsSet_;
}

void PeruIdCardResult::unsetissueDate()
{
    issueDateIsSet_ = false;
}

std::string PeruIdCardResult::getExpiryDate() const
{
    return expiryDate_;
}

void PeruIdCardResult::setExpiryDate(const std::string& value)
{
    expiryDate_ = value;
    expiryDateIsSet_ = true;
}

bool PeruIdCardResult::expiryDateIsSet() const
{
    return expiryDateIsSet_;
}

void PeruIdCardResult::unsetexpiryDate()
{
    expiryDateIsSet_ = false;
}

std::string PeruIdCardResult::getBirthPlace() const
{
    return birthPlace_;
}

void PeruIdCardResult::setBirthPlace(const std::string& value)
{
    birthPlace_ = value;
    birthPlaceIsSet_ = true;
}

bool PeruIdCardResult::birthPlaceIsSet() const
{
    return birthPlaceIsSet_;
}

void PeruIdCardResult::unsetbirthPlace()
{
    birthPlaceIsSet_ = false;
}

std::string PeruIdCardResult::getVotingGroup() const
{
    return votingGroup_;
}

void PeruIdCardResult::setVotingGroup(const std::string& value)
{
    votingGroup_ = value;
    votingGroupIsSet_ = true;
}

bool PeruIdCardResult::votingGroupIsSet() const
{
    return votingGroupIsSet_;
}

void PeruIdCardResult::unsetvotingGroup()
{
    votingGroupIsSet_ = false;
}

std::string PeruIdCardResult::getOrganDonation() const
{
    return organDonation_;
}

void PeruIdCardResult::setOrganDonation(const std::string& value)
{
    organDonation_ = value;
    organDonationIsSet_ = true;
}

bool PeruIdCardResult::organDonationIsSet() const
{
    return organDonationIsSet_;
}

void PeruIdCardResult::unsetorganDonation()
{
    organDonationIsSet_ = false;
}

std::string PeruIdCardResult::getRegistrationDate() const
{
    return registrationDate_;
}

void PeruIdCardResult::setRegistrationDate(const std::string& value)
{
    registrationDate_ = value;
    registrationDateIsSet_ = true;
}

bool PeruIdCardResult::registrationDateIsSet() const
{
    return registrationDateIsSet_;
}

void PeruIdCardResult::unsetregistrationDate()
{
    registrationDateIsSet_ = false;
}

std::string PeruIdCardResult::getPortraitImage() const
{
    return portraitImage_;
}

void PeruIdCardResult::setPortraitImage(const std::string& value)
{
    portraitImage_ = value;
    portraitImageIsSet_ = true;
}

bool PeruIdCardResult::portraitImageIsSet() const
{
    return portraitImageIsSet_;
}

void PeruIdCardResult::unsetportraitImage()
{
    portraitImageIsSet_ = false;
}

std::vector<std::vector<int32_t>>& PeruIdCardResult::getPortraitLocation()
{
    return portraitLocation_;
}

void PeruIdCardResult::setPortraitLocation(const std::vector<std::vector<int32_t>>& value)
{
    portraitLocation_ = value;
    portraitLocationIsSet_ = true;
}

bool PeruIdCardResult::portraitLocationIsSet() const
{
    return portraitLocationIsSet_;
}

void PeruIdCardResult::unsetportraitLocation()
{
    portraitLocationIsSet_ = false;
}

std::string PeruIdCardResult::getAddress() const
{
    return address_;
}

void PeruIdCardResult::setAddress(const std::string& value)
{
    address_ = value;
    addressIsSet_ = true;
}

bool PeruIdCardResult::addressIsSet() const
{
    return addressIsSet_;
}

void PeruIdCardResult::unsetaddress()
{
    addressIsSet_ = false;
}

std::string PeruIdCardResult::getDepartment() const
{
    return department_;
}

void PeruIdCardResult::setDepartment(const std::string& value)
{
    department_ = value;
    departmentIsSet_ = true;
}

bool PeruIdCardResult::departmentIsSet() const
{
    return departmentIsSet_;
}

void PeruIdCardResult::unsetdepartment()
{
    departmentIsSet_ = false;
}

std::string PeruIdCardResult::getProvince() const
{
    return province_;
}

void PeruIdCardResult::setProvince(const std::string& value)
{
    province_ = value;
    provinceIsSet_ = true;
}

bool PeruIdCardResult::provinceIsSet() const
{
    return provinceIsSet_;
}

void PeruIdCardResult::unsetprovince()
{
    provinceIsSet_ = false;
}

std::string PeruIdCardResult::getDistrict() const
{
    return district_;
}

void PeruIdCardResult::setDistrict(const std::string& value)
{
    district_ = value;
    districtIsSet_ = true;
}

bool PeruIdCardResult::districtIsSet() const
{
    return districtIsSet_;
}

void PeruIdCardResult::unsetdistrict()
{
    districtIsSet_ = false;
}

std::string PeruIdCardResult::getRemarks() const
{
    return remarks_;
}

void PeruIdCardResult::setRemarks(const std::string& value)
{
    remarks_ = value;
    remarksIsSet_ = true;
}

bool PeruIdCardResult::remarksIsSet() const
{
    return remarksIsSet_;
}

void PeruIdCardResult::unsetremarks()
{
    remarksIsSet_ = false;
}

std::string PeruIdCardResult::getMachineCode1() const
{
    return machineCode1_;
}

void PeruIdCardResult::setMachineCode1(const std::string& value)
{
    machineCode1_ = value;
    machineCode1IsSet_ = true;
}

bool PeruIdCardResult::machineCode1IsSet() const
{
    return machineCode1IsSet_;
}

void PeruIdCardResult::unsetmachineCode1()
{
    machineCode1IsSet_ = false;
}

std::string PeruIdCardResult::getMachineCode2() const
{
    return machineCode2_;
}

void PeruIdCardResult::setMachineCode2(const std::string& value)
{
    machineCode2_ = value;
    machineCode2IsSet_ = true;
}

bool PeruIdCardResult::machineCode2IsSet() const
{
    return machineCode2IsSet_;
}

void PeruIdCardResult::unsetmachineCode2()
{
    machineCode2IsSet_ = false;
}

std::string PeruIdCardResult::getMachineCode3() const
{
    return machineCode3_;
}

void PeruIdCardResult::setMachineCode3(const std::string& value)
{
    machineCode3_ = value;
    machineCode3IsSet_ = true;
}

bool PeruIdCardResult::machineCode3IsSet() const
{
    return machineCode3IsSet_;
}

void PeruIdCardResult::unsetmachineCode3()
{
    machineCode3IsSet_ = false;
}

bool PeruIdCardResult::isDuplicate() const
{
    return duplicate_;
}

void PeruIdCardResult::setDuplicate(bool value)
{
    duplicate_ = value;
    duplicateIsSet_ = true;
}

bool PeruIdCardResult::duplicateIsSet() const
{
    return duplicateIsSet_;
}

void PeruIdCardResult::unsetduplicate()
{
    duplicateIsSet_ = false;
}

std::map<std::string, float>& PeruIdCardResult::getConfidence()
{
    return confidence_;
}

void PeruIdCardResult::setConfidence(std::map<std::string, float> value)
{
    confidence_ = value;
    confidenceIsSet_ = true;
}

bool PeruIdCardResult::confidenceIsSet() const
{
    return confidenceIsSet_;
}

void PeruIdCardResult::unsetconfidence()
{
    confidenceIsSet_ = false;
}

}
}
}
}
}


