

#include "huaweicloud/ocr/v1/model/ColombiaIdCardResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




ColombiaIdCardResult::ColombiaIdCardResult()
{
    side_ = "";
    sideIsSet_ = false;
    number_ = "";
    numberIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    lastName_ = "";
    lastNameIsSet_ = false;
    birthDate_ = "";
    birthDateIsSet_ = false;
    birthPlace_ = "";
    birthPlaceIsSet_ = false;
    gender_ = "";
    genderIsSet_ = false;
    bloodType_ = "";
    bloodTypeIsSet_ = false;
    issueDate_ = "";
    issueDateIsSet_ = false;
    issueAuthority_ = "";
    issueAuthorityIsSet_ = false;
    height_ = "";
    heightIsSet_ = false;
    citizenCode1_ = "";
    citizenCode1IsSet_ = false;
    citizenCode2_ = "";
    citizenCode2IsSet_ = false;
    citizenCode3_ = "";
    citizenCode3IsSet_ = false;
    confidenceIsSet_ = false;
}

ColombiaIdCardResult::~ColombiaIdCardResult() = default;

void ColombiaIdCardResult::validate()
{
}

web::json::value ColombiaIdCardResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sideIsSet_) {
        val[utility::conversions::to_string_t("side")] = ModelBase::toJson(side_);
    }
    if(numberIsSet_) {
        val[utility::conversions::to_string_t("number")] = ModelBase::toJson(number_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(lastNameIsSet_) {
        val[utility::conversions::to_string_t("last_name")] = ModelBase::toJson(lastName_);
    }
    if(birthDateIsSet_) {
        val[utility::conversions::to_string_t("birth_date")] = ModelBase::toJson(birthDate_);
    }
    if(birthPlaceIsSet_) {
        val[utility::conversions::to_string_t("birth_place")] = ModelBase::toJson(birthPlace_);
    }
    if(genderIsSet_) {
        val[utility::conversions::to_string_t("gender")] = ModelBase::toJson(gender_);
    }
    if(bloodTypeIsSet_) {
        val[utility::conversions::to_string_t("blood_type")] = ModelBase::toJson(bloodType_);
    }
    if(issueDateIsSet_) {
        val[utility::conversions::to_string_t("issue_date")] = ModelBase::toJson(issueDate_);
    }
    if(issueAuthorityIsSet_) {
        val[utility::conversions::to_string_t("issue_authority")] = ModelBase::toJson(issueAuthority_);
    }
    if(heightIsSet_) {
        val[utility::conversions::to_string_t("height")] = ModelBase::toJson(height_);
    }
    if(citizenCode1IsSet_) {
        val[utility::conversions::to_string_t("citizen_code1")] = ModelBase::toJson(citizenCode1_);
    }
    if(citizenCode2IsSet_) {
        val[utility::conversions::to_string_t("citizen_code2")] = ModelBase::toJson(citizenCode2_);
    }
    if(citizenCode3IsSet_) {
        val[utility::conversions::to_string_t("citizen_code3")] = ModelBase::toJson(citizenCode3_);
    }
    if(confidenceIsSet_) {
        val[utility::conversions::to_string_t("confidence")] = ModelBase::toJson(confidence_);
    }

    return val;
}
bool ColombiaIdCardResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("side"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("side"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSide(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("birth_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("birth_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBirthDate(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("gender"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gender"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGender(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("issue_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issue_authority"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_authority"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueAuthority(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("citizen_code1"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("citizen_code1"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCitizenCode1(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("citizen_code2"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("citizen_code2"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCitizenCode2(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("citizen_code3"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("citizen_code3"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCitizenCode3(refVal);
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


std::string ColombiaIdCardResult::getSide() const
{
    return side_;
}

void ColombiaIdCardResult::setSide(const std::string& value)
{
    side_ = value;
    sideIsSet_ = true;
}

bool ColombiaIdCardResult::sideIsSet() const
{
    return sideIsSet_;
}

void ColombiaIdCardResult::unsetside()
{
    sideIsSet_ = false;
}

std::string ColombiaIdCardResult::getNumber() const
{
    return number_;
}

void ColombiaIdCardResult::setNumber(const std::string& value)
{
    number_ = value;
    numberIsSet_ = true;
}

bool ColombiaIdCardResult::numberIsSet() const
{
    return numberIsSet_;
}

void ColombiaIdCardResult::unsetnumber()
{
    numberIsSet_ = false;
}

std::string ColombiaIdCardResult::getName() const
{
    return name_;
}

void ColombiaIdCardResult::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ColombiaIdCardResult::nameIsSet() const
{
    return nameIsSet_;
}

void ColombiaIdCardResult::unsetname()
{
    nameIsSet_ = false;
}

std::string ColombiaIdCardResult::getLastName() const
{
    return lastName_;
}

void ColombiaIdCardResult::setLastName(const std::string& value)
{
    lastName_ = value;
    lastNameIsSet_ = true;
}

bool ColombiaIdCardResult::lastNameIsSet() const
{
    return lastNameIsSet_;
}

void ColombiaIdCardResult::unsetlastName()
{
    lastNameIsSet_ = false;
}

std::string ColombiaIdCardResult::getBirthDate() const
{
    return birthDate_;
}

void ColombiaIdCardResult::setBirthDate(const std::string& value)
{
    birthDate_ = value;
    birthDateIsSet_ = true;
}

bool ColombiaIdCardResult::birthDateIsSet() const
{
    return birthDateIsSet_;
}

void ColombiaIdCardResult::unsetbirthDate()
{
    birthDateIsSet_ = false;
}

std::string ColombiaIdCardResult::getBirthPlace() const
{
    return birthPlace_;
}

void ColombiaIdCardResult::setBirthPlace(const std::string& value)
{
    birthPlace_ = value;
    birthPlaceIsSet_ = true;
}

bool ColombiaIdCardResult::birthPlaceIsSet() const
{
    return birthPlaceIsSet_;
}

void ColombiaIdCardResult::unsetbirthPlace()
{
    birthPlaceIsSet_ = false;
}

std::string ColombiaIdCardResult::getGender() const
{
    return gender_;
}

void ColombiaIdCardResult::setGender(const std::string& value)
{
    gender_ = value;
    genderIsSet_ = true;
}

bool ColombiaIdCardResult::genderIsSet() const
{
    return genderIsSet_;
}

void ColombiaIdCardResult::unsetgender()
{
    genderIsSet_ = false;
}

std::string ColombiaIdCardResult::getBloodType() const
{
    return bloodType_;
}

void ColombiaIdCardResult::setBloodType(const std::string& value)
{
    bloodType_ = value;
    bloodTypeIsSet_ = true;
}

bool ColombiaIdCardResult::bloodTypeIsSet() const
{
    return bloodTypeIsSet_;
}

void ColombiaIdCardResult::unsetbloodType()
{
    bloodTypeIsSet_ = false;
}

std::string ColombiaIdCardResult::getIssueDate() const
{
    return issueDate_;
}

void ColombiaIdCardResult::setIssueDate(const std::string& value)
{
    issueDate_ = value;
    issueDateIsSet_ = true;
}

bool ColombiaIdCardResult::issueDateIsSet() const
{
    return issueDateIsSet_;
}

void ColombiaIdCardResult::unsetissueDate()
{
    issueDateIsSet_ = false;
}

std::string ColombiaIdCardResult::getIssueAuthority() const
{
    return issueAuthority_;
}

void ColombiaIdCardResult::setIssueAuthority(const std::string& value)
{
    issueAuthority_ = value;
    issueAuthorityIsSet_ = true;
}

bool ColombiaIdCardResult::issueAuthorityIsSet() const
{
    return issueAuthorityIsSet_;
}

void ColombiaIdCardResult::unsetissueAuthority()
{
    issueAuthorityIsSet_ = false;
}

std::string ColombiaIdCardResult::getHeight() const
{
    return height_;
}

void ColombiaIdCardResult::setHeight(const std::string& value)
{
    height_ = value;
    heightIsSet_ = true;
}

bool ColombiaIdCardResult::heightIsSet() const
{
    return heightIsSet_;
}

void ColombiaIdCardResult::unsetheight()
{
    heightIsSet_ = false;
}

std::string ColombiaIdCardResult::getCitizenCode1() const
{
    return citizenCode1_;
}

void ColombiaIdCardResult::setCitizenCode1(const std::string& value)
{
    citizenCode1_ = value;
    citizenCode1IsSet_ = true;
}

bool ColombiaIdCardResult::citizenCode1IsSet() const
{
    return citizenCode1IsSet_;
}

void ColombiaIdCardResult::unsetcitizenCode1()
{
    citizenCode1IsSet_ = false;
}

std::string ColombiaIdCardResult::getCitizenCode2() const
{
    return citizenCode2_;
}

void ColombiaIdCardResult::setCitizenCode2(const std::string& value)
{
    citizenCode2_ = value;
    citizenCode2IsSet_ = true;
}

bool ColombiaIdCardResult::citizenCode2IsSet() const
{
    return citizenCode2IsSet_;
}

void ColombiaIdCardResult::unsetcitizenCode2()
{
    citizenCode2IsSet_ = false;
}

std::string ColombiaIdCardResult::getCitizenCode3() const
{
    return citizenCode3_;
}

void ColombiaIdCardResult::setCitizenCode3(const std::string& value)
{
    citizenCode3_ = value;
    citizenCode3IsSet_ = true;
}

bool ColombiaIdCardResult::citizenCode3IsSet() const
{
    return citizenCode3IsSet_;
}

void ColombiaIdCardResult::unsetcitizenCode3()
{
    citizenCode3IsSet_ = false;
}

std::map<std::string, float>& ColombiaIdCardResult::getConfidence()
{
    return confidence_;
}

void ColombiaIdCardResult::setConfidence(std::map<std::string, float> value)
{
    confidence_ = value;
    confidenceIsSet_ = true;
}

bool ColombiaIdCardResult::confidenceIsSet() const
{
    return confidenceIsSet_;
}

void ColombiaIdCardResult::unsetconfidence()
{
    confidenceIsSet_ = false;
}

}
}
}
}
}


