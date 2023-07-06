

#include "huaweicloud/ocr/v1/model/PassportResult.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




PassportResult::PassportResult()
{
    passportType_ = "";
    passportTypeIsSet_ = false;
    countryCode_ = "";
    countryCodeIsSet_ = false;
    passportNumber_ = "";
    passportNumberIsSet_ = false;
    nationality_ = "";
    nationalityIsSet_ = false;
    surname_ = "";
    surnameIsSet_ = false;
    givenName_ = "";
    givenNameIsSet_ = false;
    sex_ = "";
    sexIsSet_ = false;
    dateOfBirth_ = "";
    dateOfBirthIsSet_ = false;
    dateOfExpiry_ = "";
    dateOfExpiryIsSet_ = false;
    dateOfIssue_ = "";
    dateOfIssueIsSet_ = false;
    placeOfBirth_ = "";
    placeOfBirthIsSet_ = false;
    placeOfIssue_ = "";
    placeOfIssueIsSet_ = false;
    issuingAuthority_ = "";
    issuingAuthorityIsSet_ = false;
    confidenceIsSet_ = false;
    extraInfoIsSet_ = false;
}

PassportResult::~PassportResult() = default;

void PassportResult::validate()
{
}

web::json::value PassportResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(passportTypeIsSet_) {
        val[utility::conversions::to_string_t("passport_type")] = ModelBase::toJson(passportType_);
    }
    if(countryCodeIsSet_) {
        val[utility::conversions::to_string_t("country_code")] = ModelBase::toJson(countryCode_);
    }
    if(passportNumberIsSet_) {
        val[utility::conversions::to_string_t("passport_number")] = ModelBase::toJson(passportNumber_);
    }
    if(nationalityIsSet_) {
        val[utility::conversions::to_string_t("nationality")] = ModelBase::toJson(nationality_);
    }
    if(surnameIsSet_) {
        val[utility::conversions::to_string_t("surname")] = ModelBase::toJson(surname_);
    }
    if(givenNameIsSet_) {
        val[utility::conversions::to_string_t("given_name")] = ModelBase::toJson(givenName_);
    }
    if(sexIsSet_) {
        val[utility::conversions::to_string_t("sex")] = ModelBase::toJson(sex_);
    }
    if(dateOfBirthIsSet_) {
        val[utility::conversions::to_string_t("date_of_birth")] = ModelBase::toJson(dateOfBirth_);
    }
    if(dateOfExpiryIsSet_) {
        val[utility::conversions::to_string_t("date_of_expiry")] = ModelBase::toJson(dateOfExpiry_);
    }
    if(dateOfIssueIsSet_) {
        val[utility::conversions::to_string_t("date_of_issue")] = ModelBase::toJson(dateOfIssue_);
    }
    if(placeOfBirthIsSet_) {
        val[utility::conversions::to_string_t("place_of_birth")] = ModelBase::toJson(placeOfBirth_);
    }
    if(placeOfIssueIsSet_) {
        val[utility::conversions::to_string_t("place_of_issue")] = ModelBase::toJson(placeOfIssue_);
    }
    if(issuingAuthorityIsSet_) {
        val[utility::conversions::to_string_t("issuing_authority")] = ModelBase::toJson(issuingAuthority_);
    }
    if(confidenceIsSet_) {
        val[utility::conversions::to_string_t("confidence")] = ModelBase::toJson(confidence_);
    }
    if(extraInfoIsSet_) {
        val[utility::conversions::to_string_t("extra_info")] = ModelBase::toJson(extraInfo_);
    }

    return val;
}

bool PassportResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("passport_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("passport_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPassportType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("country_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("country_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCountryCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("passport_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("passport_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPassportNumber(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("surname"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("surname"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSurname(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("date_of_birth"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("date_of_birth"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDateOfBirth(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("date_of_expiry"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("date_of_expiry"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDateOfExpiry(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("date_of_issue"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("date_of_issue"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDateOfIssue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("place_of_birth"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("place_of_birth"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlaceOfBirth(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("place_of_issue"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("place_of_issue"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlaceOfIssue(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("confidence"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("confidence"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfidence(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("extra_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extra_info"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtraInfo(refVal);
        }
    }
    return ok;
}

std::string PassportResult::getPassportType() const
{
    return passportType_;
}

void PassportResult::setPassportType(const std::string& value)
{
    passportType_ = value;
    passportTypeIsSet_ = true;
}

bool PassportResult::passportTypeIsSet() const
{
    return passportTypeIsSet_;
}

void PassportResult::unsetpassportType()
{
    passportTypeIsSet_ = false;
}

std::string PassportResult::getCountryCode() const
{
    return countryCode_;
}

void PassportResult::setCountryCode(const std::string& value)
{
    countryCode_ = value;
    countryCodeIsSet_ = true;
}

bool PassportResult::countryCodeIsSet() const
{
    return countryCodeIsSet_;
}

void PassportResult::unsetcountryCode()
{
    countryCodeIsSet_ = false;
}

std::string PassportResult::getPassportNumber() const
{
    return passportNumber_;
}

void PassportResult::setPassportNumber(const std::string& value)
{
    passportNumber_ = value;
    passportNumberIsSet_ = true;
}

bool PassportResult::passportNumberIsSet() const
{
    return passportNumberIsSet_;
}

void PassportResult::unsetpassportNumber()
{
    passportNumberIsSet_ = false;
}

std::string PassportResult::getNationality() const
{
    return nationality_;
}

void PassportResult::setNationality(const std::string& value)
{
    nationality_ = value;
    nationalityIsSet_ = true;
}

bool PassportResult::nationalityIsSet() const
{
    return nationalityIsSet_;
}

void PassportResult::unsetnationality()
{
    nationalityIsSet_ = false;
}

std::string PassportResult::getSurname() const
{
    return surname_;
}

void PassportResult::setSurname(const std::string& value)
{
    surname_ = value;
    surnameIsSet_ = true;
}

bool PassportResult::surnameIsSet() const
{
    return surnameIsSet_;
}

void PassportResult::unsetsurname()
{
    surnameIsSet_ = false;
}

std::string PassportResult::getGivenName() const
{
    return givenName_;
}

void PassportResult::setGivenName(const std::string& value)
{
    givenName_ = value;
    givenNameIsSet_ = true;
}

bool PassportResult::givenNameIsSet() const
{
    return givenNameIsSet_;
}

void PassportResult::unsetgivenName()
{
    givenNameIsSet_ = false;
}

std::string PassportResult::getSex() const
{
    return sex_;
}

void PassportResult::setSex(const std::string& value)
{
    sex_ = value;
    sexIsSet_ = true;
}

bool PassportResult::sexIsSet() const
{
    return sexIsSet_;
}

void PassportResult::unsetsex()
{
    sexIsSet_ = false;
}

std::string PassportResult::getDateOfBirth() const
{
    return dateOfBirth_;
}

void PassportResult::setDateOfBirth(const std::string& value)
{
    dateOfBirth_ = value;
    dateOfBirthIsSet_ = true;
}

bool PassportResult::dateOfBirthIsSet() const
{
    return dateOfBirthIsSet_;
}

void PassportResult::unsetdateOfBirth()
{
    dateOfBirthIsSet_ = false;
}

std::string PassportResult::getDateOfExpiry() const
{
    return dateOfExpiry_;
}

void PassportResult::setDateOfExpiry(const std::string& value)
{
    dateOfExpiry_ = value;
    dateOfExpiryIsSet_ = true;
}

bool PassportResult::dateOfExpiryIsSet() const
{
    return dateOfExpiryIsSet_;
}

void PassportResult::unsetdateOfExpiry()
{
    dateOfExpiryIsSet_ = false;
}

std::string PassportResult::getDateOfIssue() const
{
    return dateOfIssue_;
}

void PassportResult::setDateOfIssue(const std::string& value)
{
    dateOfIssue_ = value;
    dateOfIssueIsSet_ = true;
}

bool PassportResult::dateOfIssueIsSet() const
{
    return dateOfIssueIsSet_;
}

void PassportResult::unsetdateOfIssue()
{
    dateOfIssueIsSet_ = false;
}

std::string PassportResult::getPlaceOfBirth() const
{
    return placeOfBirth_;
}

void PassportResult::setPlaceOfBirth(const std::string& value)
{
    placeOfBirth_ = value;
    placeOfBirthIsSet_ = true;
}

bool PassportResult::placeOfBirthIsSet() const
{
    return placeOfBirthIsSet_;
}

void PassportResult::unsetplaceOfBirth()
{
    placeOfBirthIsSet_ = false;
}

std::string PassportResult::getPlaceOfIssue() const
{
    return placeOfIssue_;
}

void PassportResult::setPlaceOfIssue(const std::string& value)
{
    placeOfIssue_ = value;
    placeOfIssueIsSet_ = true;
}

bool PassportResult::placeOfIssueIsSet() const
{
    return placeOfIssueIsSet_;
}

void PassportResult::unsetplaceOfIssue()
{
    placeOfIssueIsSet_ = false;
}

std::string PassportResult::getIssuingAuthority() const
{
    return issuingAuthority_;
}

void PassportResult::setIssuingAuthority(const std::string& value)
{
    issuingAuthority_ = value;
    issuingAuthorityIsSet_ = true;
}

bool PassportResult::issuingAuthorityIsSet() const
{
    return issuingAuthorityIsSet_;
}

void PassportResult::unsetissuingAuthority()
{
    issuingAuthorityIsSet_ = false;
}

Object PassportResult::getConfidence() const
{
    return confidence_;
}

void PassportResult::setConfidence(const Object& value)
{
    confidence_ = value;
    confidenceIsSet_ = true;
}

bool PassportResult::confidenceIsSet() const
{
    return confidenceIsSet_;
}

void PassportResult::unsetconfidence()
{
    confidenceIsSet_ = false;
}

Object PassportResult::getExtraInfo() const
{
    return extraInfo_;
}

void PassportResult::setExtraInfo(const Object& value)
{
    extraInfo_ = value;
    extraInfoIsSet_ = true;
}

bool PassportResult::extraInfoIsSet() const
{
    return extraInfoIsSet_;
}

void PassportResult::unsetextraInfo()
{
    extraInfoIsSet_ = false;
}

}
}
}
}
}


