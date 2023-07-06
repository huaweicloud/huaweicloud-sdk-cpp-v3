

#include "huaweicloud/ocr/v1/model/MainlandTravelPermitConfidence.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




MainlandTravelPermitConfidence::MainlandTravelPermitConfidence()
{
    name_ = 0.0f;
    nameIsSet_ = false;
    nameEn_ = 0.0f;
    nameEnIsSet_ = false;
    birthDate_ = 0.0f;
    birthDateIsSet_ = false;
    sex_ = 0.0f;
    sexIsSet_ = false;
    validPeriod_ = 0.0f;
    validPeriodIsSet_ = false;
    issuingAuthority_ = 0.0f;
    issuingAuthorityIsSet_ = false;
    number_ = 0.0f;
    numberIsSet_ = false;
    issuePlace_ = 0.0f;
    issuePlaceIsSet_ = false;
    issueTimes_ = 0.0f;
    issueTimesIsSet_ = false;
    type_ = 0.0f;
    typeIsSet_ = false;
    side_ = 0.0f;
    sideIsSet_ = false;
    idName_ = 0.0f;
    idNameIsSet_ = false;
    idNumber_ = 0.0f;
    idNumberIsSet_ = false;
    machineCode1_ = 0.0f;
    machineCode1IsSet_ = false;
    machineCode2_ = 0.0f;
    machineCode2IsSet_ = false;
    machineCode3_ = 0.0f;
    machineCode3IsSet_ = false;
}

MainlandTravelPermitConfidence::~MainlandTravelPermitConfidence() = default;

void MainlandTravelPermitConfidence::validate()
{
}

web::json::value MainlandTravelPermitConfidence::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(nameEnIsSet_) {
        val[utility::conversions::to_string_t("name_en")] = ModelBase::toJson(nameEn_);
    }
    if(birthDateIsSet_) {
        val[utility::conversions::to_string_t("birth_date")] = ModelBase::toJson(birthDate_);
    }
    if(sexIsSet_) {
        val[utility::conversions::to_string_t("sex")] = ModelBase::toJson(sex_);
    }
    if(validPeriodIsSet_) {
        val[utility::conversions::to_string_t("valid_period")] = ModelBase::toJson(validPeriod_);
    }
    if(issuingAuthorityIsSet_) {
        val[utility::conversions::to_string_t("issuing_authority")] = ModelBase::toJson(issuingAuthority_);
    }
    if(numberIsSet_) {
        val[utility::conversions::to_string_t("number")] = ModelBase::toJson(number_);
    }
    if(issuePlaceIsSet_) {
        val[utility::conversions::to_string_t("issue_place")] = ModelBase::toJson(issuePlace_);
    }
    if(issueTimesIsSet_) {
        val[utility::conversions::to_string_t("issue_times")] = ModelBase::toJson(issueTimes_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(sideIsSet_) {
        val[utility::conversions::to_string_t("side")] = ModelBase::toJson(side_);
    }
    if(idNameIsSet_) {
        val[utility::conversions::to_string_t("id_name")] = ModelBase::toJson(idName_);
    }
    if(idNumberIsSet_) {
        val[utility::conversions::to_string_t("id_number")] = ModelBase::toJson(idNumber_);
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

    return val;
}

bool MainlandTravelPermitConfidence::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name_en"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name_en"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNameEn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("birth_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("birth_date"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBirthDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sex"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sex"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSex(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("valid_period"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("valid_period"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValidPeriod(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issuing_authority"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issuing_authority"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssuingAuthority(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("number"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issue_place"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_place"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssuePlace(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issue_times"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_times"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueTimes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("side"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("side"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSide(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id_name"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id_number"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("machine_code1"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("machine_code1"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMachineCode1(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("machine_code2"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("machine_code2"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMachineCode2(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("machine_code3"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("machine_code3"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMachineCode3(refVal);
        }
    }
    return ok;
}

float MainlandTravelPermitConfidence::getName() const
{
    return name_;
}

void MainlandTravelPermitConfidence::setName(float value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool MainlandTravelPermitConfidence::nameIsSet() const
{
    return nameIsSet_;
}

void MainlandTravelPermitConfidence::unsetname()
{
    nameIsSet_ = false;
}

float MainlandTravelPermitConfidence::getNameEn() const
{
    return nameEn_;
}

void MainlandTravelPermitConfidence::setNameEn(float value)
{
    nameEn_ = value;
    nameEnIsSet_ = true;
}

bool MainlandTravelPermitConfidence::nameEnIsSet() const
{
    return nameEnIsSet_;
}

void MainlandTravelPermitConfidence::unsetnameEn()
{
    nameEnIsSet_ = false;
}

float MainlandTravelPermitConfidence::getBirthDate() const
{
    return birthDate_;
}

void MainlandTravelPermitConfidence::setBirthDate(float value)
{
    birthDate_ = value;
    birthDateIsSet_ = true;
}

bool MainlandTravelPermitConfidence::birthDateIsSet() const
{
    return birthDateIsSet_;
}

void MainlandTravelPermitConfidence::unsetbirthDate()
{
    birthDateIsSet_ = false;
}

float MainlandTravelPermitConfidence::getSex() const
{
    return sex_;
}

void MainlandTravelPermitConfidence::setSex(float value)
{
    sex_ = value;
    sexIsSet_ = true;
}

bool MainlandTravelPermitConfidence::sexIsSet() const
{
    return sexIsSet_;
}

void MainlandTravelPermitConfidence::unsetsex()
{
    sexIsSet_ = false;
}

float MainlandTravelPermitConfidence::getValidPeriod() const
{
    return validPeriod_;
}

void MainlandTravelPermitConfidence::setValidPeriod(float value)
{
    validPeriod_ = value;
    validPeriodIsSet_ = true;
}

bool MainlandTravelPermitConfidence::validPeriodIsSet() const
{
    return validPeriodIsSet_;
}

void MainlandTravelPermitConfidence::unsetvalidPeriod()
{
    validPeriodIsSet_ = false;
}

float MainlandTravelPermitConfidence::getIssuingAuthority() const
{
    return issuingAuthority_;
}

void MainlandTravelPermitConfidence::setIssuingAuthority(float value)
{
    issuingAuthority_ = value;
    issuingAuthorityIsSet_ = true;
}

bool MainlandTravelPermitConfidence::issuingAuthorityIsSet() const
{
    return issuingAuthorityIsSet_;
}

void MainlandTravelPermitConfidence::unsetissuingAuthority()
{
    issuingAuthorityIsSet_ = false;
}

float MainlandTravelPermitConfidence::getNumber() const
{
    return number_;
}

void MainlandTravelPermitConfidence::setNumber(float value)
{
    number_ = value;
    numberIsSet_ = true;
}

bool MainlandTravelPermitConfidence::numberIsSet() const
{
    return numberIsSet_;
}

void MainlandTravelPermitConfidence::unsetnumber()
{
    numberIsSet_ = false;
}

float MainlandTravelPermitConfidence::getIssuePlace() const
{
    return issuePlace_;
}

void MainlandTravelPermitConfidence::setIssuePlace(float value)
{
    issuePlace_ = value;
    issuePlaceIsSet_ = true;
}

bool MainlandTravelPermitConfidence::issuePlaceIsSet() const
{
    return issuePlaceIsSet_;
}

void MainlandTravelPermitConfidence::unsetissuePlace()
{
    issuePlaceIsSet_ = false;
}

float MainlandTravelPermitConfidence::getIssueTimes() const
{
    return issueTimes_;
}

void MainlandTravelPermitConfidence::setIssueTimes(float value)
{
    issueTimes_ = value;
    issueTimesIsSet_ = true;
}

bool MainlandTravelPermitConfidence::issueTimesIsSet() const
{
    return issueTimesIsSet_;
}

void MainlandTravelPermitConfidence::unsetissueTimes()
{
    issueTimesIsSet_ = false;
}

float MainlandTravelPermitConfidence::getType() const
{
    return type_;
}

void MainlandTravelPermitConfidence::setType(float value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool MainlandTravelPermitConfidence::typeIsSet() const
{
    return typeIsSet_;
}

void MainlandTravelPermitConfidence::unsettype()
{
    typeIsSet_ = false;
}

float MainlandTravelPermitConfidence::getSide() const
{
    return side_;
}

void MainlandTravelPermitConfidence::setSide(float value)
{
    side_ = value;
    sideIsSet_ = true;
}

bool MainlandTravelPermitConfidence::sideIsSet() const
{
    return sideIsSet_;
}

void MainlandTravelPermitConfidence::unsetside()
{
    sideIsSet_ = false;
}

float MainlandTravelPermitConfidence::getIdName() const
{
    return idName_;
}

void MainlandTravelPermitConfidence::setIdName(float value)
{
    idName_ = value;
    idNameIsSet_ = true;
}

bool MainlandTravelPermitConfidence::idNameIsSet() const
{
    return idNameIsSet_;
}

void MainlandTravelPermitConfidence::unsetidName()
{
    idNameIsSet_ = false;
}

float MainlandTravelPermitConfidence::getIdNumber() const
{
    return idNumber_;
}

void MainlandTravelPermitConfidence::setIdNumber(float value)
{
    idNumber_ = value;
    idNumberIsSet_ = true;
}

bool MainlandTravelPermitConfidence::idNumberIsSet() const
{
    return idNumberIsSet_;
}

void MainlandTravelPermitConfidence::unsetidNumber()
{
    idNumberIsSet_ = false;
}

float MainlandTravelPermitConfidence::getMachineCode1() const
{
    return machineCode1_;
}

void MainlandTravelPermitConfidence::setMachineCode1(float value)
{
    machineCode1_ = value;
    machineCode1IsSet_ = true;
}

bool MainlandTravelPermitConfidence::machineCode1IsSet() const
{
    return machineCode1IsSet_;
}

void MainlandTravelPermitConfidence::unsetmachineCode1()
{
    machineCode1IsSet_ = false;
}

float MainlandTravelPermitConfidence::getMachineCode2() const
{
    return machineCode2_;
}

void MainlandTravelPermitConfidence::setMachineCode2(float value)
{
    machineCode2_ = value;
    machineCode2IsSet_ = true;
}

bool MainlandTravelPermitConfidence::machineCode2IsSet() const
{
    return machineCode2IsSet_;
}

void MainlandTravelPermitConfidence::unsetmachineCode2()
{
    machineCode2IsSet_ = false;
}

float MainlandTravelPermitConfidence::getMachineCode3() const
{
    return machineCode3_;
}

void MainlandTravelPermitConfidence::setMachineCode3(float value)
{
    machineCode3_ = value;
    machineCode3IsSet_ = true;
}

bool MainlandTravelPermitConfidence::machineCode3IsSet() const
{
    return machineCode3IsSet_;
}

void MainlandTravelPermitConfidence::unsetmachineCode3()
{
    machineCode3IsSet_ = false;
}

}
}
}
}
}


