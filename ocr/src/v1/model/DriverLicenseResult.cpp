

#include "huaweicloud/ocr/v1/model/DriverLicenseResult.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




DriverLicenseResult::DriverLicenseResult()
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
    fileNumber_ = "";
    fileNumberIsSet_ = false;
    record_ = "";
    recordIsSet_ = false;
    accumulatedScores_ = "";
    accumulatedScoresIsSet_ = false;
    statusIsSet_ = false;
    generationDate_ = "";
    generationDateIsSet_ = false;
    currentTime_ = "";
    currentTimeIsSet_ = false;
    textLocationIsSet_ = false;
    frontIsSet_ = false;
    backIsSet_ = false;
}

DriverLicenseResult::~DriverLicenseResult() = default;

void DriverLicenseResult::validate()
{
}

web::json::value DriverLicenseResult::toJson() const
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
    if(fileNumberIsSet_) {
        val[utility::conversions::to_string_t("file_number")] = ModelBase::toJson(fileNumber_);
    }
    if(recordIsSet_) {
        val[utility::conversions::to_string_t("record")] = ModelBase::toJson(record_);
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
    if(textLocationIsSet_) {
        val[utility::conversions::to_string_t("text_location")] = ModelBase::toJson(textLocation_);
    }
    if(frontIsSet_) {
        val[utility::conversions::to_string_t("front")] = ModelBase::toJson(front_);
    }
    if(backIsSet_) {
        val[utility::conversions::to_string_t("back")] = ModelBase::toJson(back_);
    }

    return val;
}

bool DriverLicenseResult::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("file_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("record"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("record"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecord(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("text_location"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("text_location"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTextLocation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("front"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("front"));
        if(!fieldValue.is_null())
        {
            DriverLicenseFront refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFront(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("back"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("back"));
        if(!fieldValue.is_null())
        {
            DriverLicenseBack refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBack(refVal);
        }
    }
    return ok;
}

std::string DriverLicenseResult::getType() const
{
    return type_;
}

void DriverLicenseResult::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool DriverLicenseResult::typeIsSet() const
{
    return typeIsSet_;
}

void DriverLicenseResult::unsettype()
{
    typeIsSet_ = false;
}

std::string DriverLicenseResult::getNumber() const
{
    return number_;
}

void DriverLicenseResult::setNumber(const std::string& value)
{
    number_ = value;
    numberIsSet_ = true;
}

bool DriverLicenseResult::numberIsSet() const
{
    return numberIsSet_;
}

void DriverLicenseResult::unsetnumber()
{
    numberIsSet_ = false;
}

std::string DriverLicenseResult::getName() const
{
    return name_;
}

void DriverLicenseResult::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool DriverLicenseResult::nameIsSet() const
{
    return nameIsSet_;
}

void DriverLicenseResult::unsetname()
{
    nameIsSet_ = false;
}

std::string DriverLicenseResult::getSex() const
{
    return sex_;
}

void DriverLicenseResult::setSex(const std::string& value)
{
    sex_ = value;
    sexIsSet_ = true;
}

bool DriverLicenseResult::sexIsSet() const
{
    return sexIsSet_;
}

void DriverLicenseResult::unsetsex()
{
    sexIsSet_ = false;
}

std::string DriverLicenseResult::getNationality() const
{
    return nationality_;
}

void DriverLicenseResult::setNationality(const std::string& value)
{
    nationality_ = value;
    nationalityIsSet_ = true;
}

bool DriverLicenseResult::nationalityIsSet() const
{
    return nationalityIsSet_;
}

void DriverLicenseResult::unsetnationality()
{
    nationalityIsSet_ = false;
}

std::string DriverLicenseResult::getAddress() const
{
    return address_;
}

void DriverLicenseResult::setAddress(const std::string& value)
{
    address_ = value;
    addressIsSet_ = true;
}

bool DriverLicenseResult::addressIsSet() const
{
    return addressIsSet_;
}

void DriverLicenseResult::unsetaddress()
{
    addressIsSet_ = false;
}

std::string DriverLicenseResult::getBirth() const
{
    return birth_;
}

void DriverLicenseResult::setBirth(const std::string& value)
{
    birth_ = value;
    birthIsSet_ = true;
}

bool DriverLicenseResult::birthIsSet() const
{
    return birthIsSet_;
}

void DriverLicenseResult::unsetbirth()
{
    birthIsSet_ = false;
}

std::string DriverLicenseResult::getIssueDate() const
{
    return issueDate_;
}

void DriverLicenseResult::setIssueDate(const std::string& value)
{
    issueDate_ = value;
    issueDateIsSet_ = true;
}

bool DriverLicenseResult::issueDateIsSet() const
{
    return issueDateIsSet_;
}

void DriverLicenseResult::unsetissueDate()
{
    issueDateIsSet_ = false;
}

std::string DriverLicenseResult::getClass() const
{
    return class_;
}

void DriverLicenseResult::setClass(const std::string& value)
{
    class_ = value;
    classIsSet_ = true;
}

bool DriverLicenseResult::classIsSet() const
{
    return classIsSet_;
}

void DriverLicenseResult::unsetclass()
{
    classIsSet_ = false;
}

std::string DriverLicenseResult::getValidFrom() const
{
    return validFrom_;
}

void DriverLicenseResult::setValidFrom(const std::string& value)
{
    validFrom_ = value;
    validFromIsSet_ = true;
}

bool DriverLicenseResult::validFromIsSet() const
{
    return validFromIsSet_;
}

void DriverLicenseResult::unsetvalidFrom()
{
    validFromIsSet_ = false;
}

std::string DriverLicenseResult::getValidTo() const
{
    return validTo_;
}

void DriverLicenseResult::setValidTo(const std::string& value)
{
    validTo_ = value;
    validToIsSet_ = true;
}

bool DriverLicenseResult::validToIsSet() const
{
    return validToIsSet_;
}

void DriverLicenseResult::unsetvalidTo()
{
    validToIsSet_ = false;
}

std::string DriverLicenseResult::getIssuingAuthority() const
{
    return issuingAuthority_;
}

void DriverLicenseResult::setIssuingAuthority(const std::string& value)
{
    issuingAuthority_ = value;
    issuingAuthorityIsSet_ = true;
}

bool DriverLicenseResult::issuingAuthorityIsSet() const
{
    return issuingAuthorityIsSet_;
}

void DriverLicenseResult::unsetissuingAuthority()
{
    issuingAuthorityIsSet_ = false;
}

std::string DriverLicenseResult::getFileNumber() const
{
    return fileNumber_;
}

void DriverLicenseResult::setFileNumber(const std::string& value)
{
    fileNumber_ = value;
    fileNumberIsSet_ = true;
}

bool DriverLicenseResult::fileNumberIsSet() const
{
    return fileNumberIsSet_;
}

void DriverLicenseResult::unsetfileNumber()
{
    fileNumberIsSet_ = false;
}

std::string DriverLicenseResult::getRecord() const
{
    return record_;
}

void DriverLicenseResult::setRecord(const std::string& value)
{
    record_ = value;
    recordIsSet_ = true;
}

bool DriverLicenseResult::recordIsSet() const
{
    return recordIsSet_;
}

void DriverLicenseResult::unsetrecord()
{
    recordIsSet_ = false;
}

std::string DriverLicenseResult::getAccumulatedScores() const
{
    return accumulatedScores_;
}

void DriverLicenseResult::setAccumulatedScores(const std::string& value)
{
    accumulatedScores_ = value;
    accumulatedScoresIsSet_ = true;
}

bool DriverLicenseResult::accumulatedScoresIsSet() const
{
    return accumulatedScoresIsSet_;
}

void DriverLicenseResult::unsetaccumulatedScores()
{
    accumulatedScoresIsSet_ = false;
}

std::vector<std::string>& DriverLicenseResult::getStatus()
{
    return status_;
}

void DriverLicenseResult::setStatus(const std::vector<std::string>& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DriverLicenseResult::statusIsSet() const
{
    return statusIsSet_;
}

void DriverLicenseResult::unsetstatus()
{
    statusIsSet_ = false;
}

std::string DriverLicenseResult::getGenerationDate() const
{
    return generationDate_;
}

void DriverLicenseResult::setGenerationDate(const std::string& value)
{
    generationDate_ = value;
    generationDateIsSet_ = true;
}

bool DriverLicenseResult::generationDateIsSet() const
{
    return generationDateIsSet_;
}

void DriverLicenseResult::unsetgenerationDate()
{
    generationDateIsSet_ = false;
}

std::string DriverLicenseResult::getCurrentTime() const
{
    return currentTime_;
}

void DriverLicenseResult::setCurrentTime(const std::string& value)
{
    currentTime_ = value;
    currentTimeIsSet_ = true;
}

bool DriverLicenseResult::currentTimeIsSet() const
{
    return currentTimeIsSet_;
}

void DriverLicenseResult::unsetcurrentTime()
{
    currentTimeIsSet_ = false;
}

Object DriverLicenseResult::getTextLocation() const
{
    return textLocation_;
}

void DriverLicenseResult::setTextLocation(const Object& value)
{
    textLocation_ = value;
    textLocationIsSet_ = true;
}

bool DriverLicenseResult::textLocationIsSet() const
{
    return textLocationIsSet_;
}

void DriverLicenseResult::unsettextLocation()
{
    textLocationIsSet_ = false;
}

DriverLicenseFront DriverLicenseResult::getFront() const
{
    return front_;
}

void DriverLicenseResult::setFront(const DriverLicenseFront& value)
{
    front_ = value;
    frontIsSet_ = true;
}

bool DriverLicenseResult::frontIsSet() const
{
    return frontIsSet_;
}

void DriverLicenseResult::unsetfront()
{
    frontIsSet_ = false;
}

DriverLicenseBack DriverLicenseResult::getBack() const
{
    return back_;
}

void DriverLicenseResult::setBack(const DriverLicenseBack& value)
{
    back_ = value;
    backIsSet_ = true;
}

bool DriverLicenseResult::backIsSet() const
{
    return backIsSet_;
}

void DriverLicenseResult::unsetback()
{
    backIsSet_ = false;
}

}
}
}
}
}


