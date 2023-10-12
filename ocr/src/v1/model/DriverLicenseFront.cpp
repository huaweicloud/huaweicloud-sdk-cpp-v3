

#include "huaweicloud/ocr/v1/model/DriverLicenseFront.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




DriverLicenseFront::DriverLicenseFront()
{
    type_ = "";
    typeIsSet_ = false;
    number_ = "";
    numberIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    sex_ = "";
    sexIsSet_ = false;
    nationality_ = "";
    nationalityIsSet_ = false;
    address_ = "";
    addressIsSet_ = false;
    birth_ = "";
    birthIsSet_ = false;
    issueDate_ = "";
    issueDateIsSet_ = false;
    class_ = "";
    classIsSet_ = false;
    validFrom_ = "";
    validFromIsSet_ = false;
    validTo_ = "";
    validToIsSet_ = false;
    issuingAuthority_ = "";
    issuingAuthorityIsSet_ = false;
    accumulatedScores_ = "";
    accumulatedScoresIsSet_ = false;
    statusIsSet_ = false;
    generationDate_ = "";
    generationDateIsSet_ = false;
    currentTime_ = "";
    currentTimeIsSet_ = false;
    fileNumber_ = "";
    fileNumberIsSet_ = false;
    textLocationIsSet_ = false;
}

DriverLicenseFront::~DriverLicenseFront() = default;

void DriverLicenseFront::validate()
{
}

web::json::value DriverLicenseFront::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(numberIsSet_) {
        val[utility::conversions::to_string_t("number")] = ModelBase::toJson(number_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(sexIsSet_) {
        val[utility::conversions::to_string_t("sex")] = ModelBase::toJson(sex_);
    }
    if(nationalityIsSet_) {
        val[utility::conversions::to_string_t("nationality")] = ModelBase::toJson(nationality_);
    }
    if(addressIsSet_) {
        val[utility::conversions::to_string_t("address")] = ModelBase::toJson(address_);
    }
    if(birthIsSet_) {
        val[utility::conversions::to_string_t("birth")] = ModelBase::toJson(birth_);
    }
    if(issueDateIsSet_) {
        val[utility::conversions::to_string_t("issue_date")] = ModelBase::toJson(issueDate_);
    }
    if(classIsSet_) {
        val[utility::conversions::to_string_t("class")] = ModelBase::toJson(class_);
    }
    if(validFromIsSet_) {
        val[utility::conversions::to_string_t("valid_from")] = ModelBase::toJson(validFrom_);
    }
    if(validToIsSet_) {
        val[utility::conversions::to_string_t("valid_to")] = ModelBase::toJson(validTo_);
    }
    if(issuingAuthorityIsSet_) {
        val[utility::conversions::to_string_t("issuing_authority")] = ModelBase::toJson(issuingAuthority_);
    }
    if(accumulatedScoresIsSet_) {
        val[utility::conversions::to_string_t("accumulated_scores")] = ModelBase::toJson(accumulatedScores_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(generationDateIsSet_) {
        val[utility::conversions::to_string_t("generation_date")] = ModelBase::toJson(generationDate_);
    }
    if(currentTimeIsSet_) {
        val[utility::conversions::to_string_t("current_time")] = ModelBase::toJson(currentTime_);
    }
    if(fileNumberIsSet_) {
        val[utility::conversions::to_string_t("file_number")] = ModelBase::toJson(fileNumber_);
    }
    if(textLocationIsSet_) {
        val[utility::conversions::to_string_t("text_location")] = ModelBase::toJson(textLocation_);
    }

    return val;
}
bool DriverLicenseFront::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("birth"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("birth"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBirth(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("class"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("class"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClass(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("valid_from"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("valid_from"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValidFrom(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("valid_to"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("valid_to"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValidTo(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("accumulated_scores"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("accumulated_scores"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAccumulatedScores(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("generation_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("generation_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGenerationDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("current_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("current_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCurrentTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("file_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileNumber(refVal);
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


std::string DriverLicenseFront::getType() const
{
    return type_;
}

void DriverLicenseFront::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool DriverLicenseFront::typeIsSet() const
{
    return typeIsSet_;
}

void DriverLicenseFront::unsettype()
{
    typeIsSet_ = false;
}

std::string DriverLicenseFront::getNumber() const
{
    return number_;
}

void DriverLicenseFront::setNumber(const std::string& value)
{
    number_ = value;
    numberIsSet_ = true;
}

bool DriverLicenseFront::numberIsSet() const
{
    return numberIsSet_;
}

void DriverLicenseFront::unsetnumber()
{
    numberIsSet_ = false;
}

std::string DriverLicenseFront::getName() const
{
    return name_;
}

void DriverLicenseFront::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool DriverLicenseFront::nameIsSet() const
{
    return nameIsSet_;
}

void DriverLicenseFront::unsetname()
{
    nameIsSet_ = false;
}

std::string DriverLicenseFront::getSex() const
{
    return sex_;
}

void DriverLicenseFront::setSex(const std::string& value)
{
    sex_ = value;
    sexIsSet_ = true;
}

bool DriverLicenseFront::sexIsSet() const
{
    return sexIsSet_;
}

void DriverLicenseFront::unsetsex()
{
    sexIsSet_ = false;
}

std::string DriverLicenseFront::getNationality() const
{
    return nationality_;
}

void DriverLicenseFront::setNationality(const std::string& value)
{
    nationality_ = value;
    nationalityIsSet_ = true;
}

bool DriverLicenseFront::nationalityIsSet() const
{
    return nationalityIsSet_;
}

void DriverLicenseFront::unsetnationality()
{
    nationalityIsSet_ = false;
}

std::string DriverLicenseFront::getAddress() const
{
    return address_;
}

void DriverLicenseFront::setAddress(const std::string& value)
{
    address_ = value;
    addressIsSet_ = true;
}

bool DriverLicenseFront::addressIsSet() const
{
    return addressIsSet_;
}

void DriverLicenseFront::unsetaddress()
{
    addressIsSet_ = false;
}

std::string DriverLicenseFront::getBirth() const
{
    return birth_;
}

void DriverLicenseFront::setBirth(const std::string& value)
{
    birth_ = value;
    birthIsSet_ = true;
}

bool DriverLicenseFront::birthIsSet() const
{
    return birthIsSet_;
}

void DriverLicenseFront::unsetbirth()
{
    birthIsSet_ = false;
}

std::string DriverLicenseFront::getIssueDate() const
{
    return issueDate_;
}

void DriverLicenseFront::setIssueDate(const std::string& value)
{
    issueDate_ = value;
    issueDateIsSet_ = true;
}

bool DriverLicenseFront::issueDateIsSet() const
{
    return issueDateIsSet_;
}

void DriverLicenseFront::unsetissueDate()
{
    issueDateIsSet_ = false;
}

std::string DriverLicenseFront::getClass() const
{
    return class_;
}

void DriverLicenseFront::setClass(const std::string& value)
{
    class_ = value;
    classIsSet_ = true;
}

bool DriverLicenseFront::classIsSet() const
{
    return classIsSet_;
}

void DriverLicenseFront::unsetclass()
{
    classIsSet_ = false;
}

std::string DriverLicenseFront::getValidFrom() const
{
    return validFrom_;
}

void DriverLicenseFront::setValidFrom(const std::string& value)
{
    validFrom_ = value;
    validFromIsSet_ = true;
}

bool DriverLicenseFront::validFromIsSet() const
{
    return validFromIsSet_;
}

void DriverLicenseFront::unsetvalidFrom()
{
    validFromIsSet_ = false;
}

std::string DriverLicenseFront::getValidTo() const
{
    return validTo_;
}

void DriverLicenseFront::setValidTo(const std::string& value)
{
    validTo_ = value;
    validToIsSet_ = true;
}

bool DriverLicenseFront::validToIsSet() const
{
    return validToIsSet_;
}

void DriverLicenseFront::unsetvalidTo()
{
    validToIsSet_ = false;
}

std::string DriverLicenseFront::getIssuingAuthority() const
{
    return issuingAuthority_;
}

void DriverLicenseFront::setIssuingAuthority(const std::string& value)
{
    issuingAuthority_ = value;
    issuingAuthorityIsSet_ = true;
}

bool DriverLicenseFront::issuingAuthorityIsSet() const
{
    return issuingAuthorityIsSet_;
}

void DriverLicenseFront::unsetissuingAuthority()
{
    issuingAuthorityIsSet_ = false;
}

std::string DriverLicenseFront::getAccumulatedScores() const
{
    return accumulatedScores_;
}

void DriverLicenseFront::setAccumulatedScores(const std::string& value)
{
    accumulatedScores_ = value;
    accumulatedScoresIsSet_ = true;
}

bool DriverLicenseFront::accumulatedScoresIsSet() const
{
    return accumulatedScoresIsSet_;
}

void DriverLicenseFront::unsetaccumulatedScores()
{
    accumulatedScoresIsSet_ = false;
}

std::vector<std::string>& DriverLicenseFront::getStatus()
{
    return status_;
}

void DriverLicenseFront::setStatus(const std::vector<std::string>& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DriverLicenseFront::statusIsSet() const
{
    return statusIsSet_;
}

void DriverLicenseFront::unsetstatus()
{
    statusIsSet_ = false;
}

std::string DriverLicenseFront::getGenerationDate() const
{
    return generationDate_;
}

void DriverLicenseFront::setGenerationDate(const std::string& value)
{
    generationDate_ = value;
    generationDateIsSet_ = true;
}

bool DriverLicenseFront::generationDateIsSet() const
{
    return generationDateIsSet_;
}

void DriverLicenseFront::unsetgenerationDate()
{
    generationDateIsSet_ = false;
}

std::string DriverLicenseFront::getCurrentTime() const
{
    return currentTime_;
}

void DriverLicenseFront::setCurrentTime(const std::string& value)
{
    currentTime_ = value;
    currentTimeIsSet_ = true;
}

bool DriverLicenseFront::currentTimeIsSet() const
{
    return currentTimeIsSet_;
}

void DriverLicenseFront::unsetcurrentTime()
{
    currentTimeIsSet_ = false;
}

std::string DriverLicenseFront::getFileNumber() const
{
    return fileNumber_;
}

void DriverLicenseFront::setFileNumber(const std::string& value)
{
    fileNumber_ = value;
    fileNumberIsSet_ = true;
}

bool DriverLicenseFront::fileNumberIsSet() const
{
    return fileNumberIsSet_;
}

void DriverLicenseFront::unsetfileNumber()
{
    fileNumberIsSet_ = false;
}

Object DriverLicenseFront::getTextLocation() const
{
    return textLocation_;
}

void DriverLicenseFront::setTextLocation(const Object& value)
{
    textLocation_ = value;
    textLocationIsSet_ = true;
}

bool DriverLicenseFront::textLocationIsSet() const
{
    return textLocationIsSet_;
}

void DriverLicenseFront::unsettextLocation()
{
    textLocationIsSet_ = false;
}

}
}
}
}
}


