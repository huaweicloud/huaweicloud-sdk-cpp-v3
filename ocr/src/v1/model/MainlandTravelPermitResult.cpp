

#include "huaweicloud/ocr/v1/model/MainlandTravelPermitResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




MainlandTravelPermitResult::MainlandTravelPermitResult()
{
    name_ = "";
    nameIsSet_ = false;
    nameEn_ = "";
    nameEnIsSet_ = false;
    birthDate_ = "";
    birthDateIsSet_ = false;
    sex_ = "";
    sexIsSet_ = false;
    validPeriod_ = "";
    validPeriodIsSet_ = false;
    issuingAuthority_ = "";
    issuingAuthorityIsSet_ = false;
    number_ = "";
    numberIsSet_ = false;
    issuePlace_ = "";
    issuePlaceIsSet_ = false;
    issueTimes_ = "";
    issueTimesIsSet_ = false;
    idName_ = "";
    idNameIsSet_ = false;
    idNumber_ = "";
    idNumberIsSet_ = false;
    machineCode1_ = "";
    machineCode1IsSet_ = false;
    machineCode2_ = "";
    machineCode2IsSet_ = false;
    machineCode3_ = "";
    machineCode3IsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    side_ = "";
    sideIsSet_ = false;
    portraitImage_ = "";
    portraitImageIsSet_ = false;
    portraitLocationIsSet_ = false;
    confidenceIsSet_ = false;
}

MainlandTravelPermitResult::~MainlandTravelPermitResult() = default;

void MainlandTravelPermitResult::validate()
{
}

web::json::value MainlandTravelPermitResult::toJson() const
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
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(sideIsSet_) {
        val[utility::conversions::to_string_t("side")] = ModelBase::toJson(side_);
    }
    if(portraitImageIsSet_) {
        val[utility::conversions::to_string_t("portrait_image")] = ModelBase::toJson(portraitImage_);
    }
    if(portraitLocationIsSet_) {
        val[utility::conversions::to_string_t("portrait_location")] = ModelBase::toJson(portraitLocation_);
    }
    if(confidenceIsSet_) {
        val[utility::conversions::to_string_t("confidence")] = ModelBase::toJson(confidence_);
    }

    return val;
}
bool MainlandTravelPermitResult::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("name_en"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name_en"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNameEn(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("sex"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sex"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSex(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("valid_period"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("valid_period"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValidPeriod(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issue_place"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_place"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssuePlace(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issue_times"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_times"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueTimes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("confidence"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("confidence"));
        if(!fieldValue.is_null())
        {
            MainlandTravelPermitConfidence refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfidence(refVal);
        }
    }
    return ok;
}


std::string MainlandTravelPermitResult::getName() const
{
    return name_;
}

void MainlandTravelPermitResult::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool MainlandTravelPermitResult::nameIsSet() const
{
    return nameIsSet_;
}

void MainlandTravelPermitResult::unsetname()
{
    nameIsSet_ = false;
}

std::string MainlandTravelPermitResult::getNameEn() const
{
    return nameEn_;
}

void MainlandTravelPermitResult::setNameEn(const std::string& value)
{
    nameEn_ = value;
    nameEnIsSet_ = true;
}

bool MainlandTravelPermitResult::nameEnIsSet() const
{
    return nameEnIsSet_;
}

void MainlandTravelPermitResult::unsetnameEn()
{
    nameEnIsSet_ = false;
}

std::string MainlandTravelPermitResult::getBirthDate() const
{
    return birthDate_;
}

void MainlandTravelPermitResult::setBirthDate(const std::string& value)
{
    birthDate_ = value;
    birthDateIsSet_ = true;
}

bool MainlandTravelPermitResult::birthDateIsSet() const
{
    return birthDateIsSet_;
}

void MainlandTravelPermitResult::unsetbirthDate()
{
    birthDateIsSet_ = false;
}

std::string MainlandTravelPermitResult::getSex() const
{
    return sex_;
}

void MainlandTravelPermitResult::setSex(const std::string& value)
{
    sex_ = value;
    sexIsSet_ = true;
}

bool MainlandTravelPermitResult::sexIsSet() const
{
    return sexIsSet_;
}

void MainlandTravelPermitResult::unsetsex()
{
    sexIsSet_ = false;
}

std::string MainlandTravelPermitResult::getValidPeriod() const
{
    return validPeriod_;
}

void MainlandTravelPermitResult::setValidPeriod(const std::string& value)
{
    validPeriod_ = value;
    validPeriodIsSet_ = true;
}

bool MainlandTravelPermitResult::validPeriodIsSet() const
{
    return validPeriodIsSet_;
}

void MainlandTravelPermitResult::unsetvalidPeriod()
{
    validPeriodIsSet_ = false;
}

std::string MainlandTravelPermitResult::getIssuingAuthority() const
{
    return issuingAuthority_;
}

void MainlandTravelPermitResult::setIssuingAuthority(const std::string& value)
{
    issuingAuthority_ = value;
    issuingAuthorityIsSet_ = true;
}

bool MainlandTravelPermitResult::issuingAuthorityIsSet() const
{
    return issuingAuthorityIsSet_;
}

void MainlandTravelPermitResult::unsetissuingAuthority()
{
    issuingAuthorityIsSet_ = false;
}

std::string MainlandTravelPermitResult::getNumber() const
{
    return number_;
}

void MainlandTravelPermitResult::setNumber(const std::string& value)
{
    number_ = value;
    numberIsSet_ = true;
}

bool MainlandTravelPermitResult::numberIsSet() const
{
    return numberIsSet_;
}

void MainlandTravelPermitResult::unsetnumber()
{
    numberIsSet_ = false;
}

std::string MainlandTravelPermitResult::getIssuePlace() const
{
    return issuePlace_;
}

void MainlandTravelPermitResult::setIssuePlace(const std::string& value)
{
    issuePlace_ = value;
    issuePlaceIsSet_ = true;
}

bool MainlandTravelPermitResult::issuePlaceIsSet() const
{
    return issuePlaceIsSet_;
}

void MainlandTravelPermitResult::unsetissuePlace()
{
    issuePlaceIsSet_ = false;
}

std::string MainlandTravelPermitResult::getIssueTimes() const
{
    return issueTimes_;
}

void MainlandTravelPermitResult::setIssueTimes(const std::string& value)
{
    issueTimes_ = value;
    issueTimesIsSet_ = true;
}

bool MainlandTravelPermitResult::issueTimesIsSet() const
{
    return issueTimesIsSet_;
}

void MainlandTravelPermitResult::unsetissueTimes()
{
    issueTimesIsSet_ = false;
}

std::string MainlandTravelPermitResult::getIdName() const
{
    return idName_;
}

void MainlandTravelPermitResult::setIdName(const std::string& value)
{
    idName_ = value;
    idNameIsSet_ = true;
}

bool MainlandTravelPermitResult::idNameIsSet() const
{
    return idNameIsSet_;
}

void MainlandTravelPermitResult::unsetidName()
{
    idNameIsSet_ = false;
}

std::string MainlandTravelPermitResult::getIdNumber() const
{
    return idNumber_;
}

void MainlandTravelPermitResult::setIdNumber(const std::string& value)
{
    idNumber_ = value;
    idNumberIsSet_ = true;
}

bool MainlandTravelPermitResult::idNumberIsSet() const
{
    return idNumberIsSet_;
}

void MainlandTravelPermitResult::unsetidNumber()
{
    idNumberIsSet_ = false;
}

std::string MainlandTravelPermitResult::getMachineCode1() const
{
    return machineCode1_;
}

void MainlandTravelPermitResult::setMachineCode1(const std::string& value)
{
    machineCode1_ = value;
    machineCode1IsSet_ = true;
}

bool MainlandTravelPermitResult::machineCode1IsSet() const
{
    return machineCode1IsSet_;
}

void MainlandTravelPermitResult::unsetmachineCode1()
{
    machineCode1IsSet_ = false;
}

std::string MainlandTravelPermitResult::getMachineCode2() const
{
    return machineCode2_;
}

void MainlandTravelPermitResult::setMachineCode2(const std::string& value)
{
    machineCode2_ = value;
    machineCode2IsSet_ = true;
}

bool MainlandTravelPermitResult::machineCode2IsSet() const
{
    return machineCode2IsSet_;
}

void MainlandTravelPermitResult::unsetmachineCode2()
{
    machineCode2IsSet_ = false;
}

std::string MainlandTravelPermitResult::getMachineCode3() const
{
    return machineCode3_;
}

void MainlandTravelPermitResult::setMachineCode3(const std::string& value)
{
    machineCode3_ = value;
    machineCode3IsSet_ = true;
}

bool MainlandTravelPermitResult::machineCode3IsSet() const
{
    return machineCode3IsSet_;
}

void MainlandTravelPermitResult::unsetmachineCode3()
{
    machineCode3IsSet_ = false;
}

std::string MainlandTravelPermitResult::getType() const
{
    return type_;
}

void MainlandTravelPermitResult::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool MainlandTravelPermitResult::typeIsSet() const
{
    return typeIsSet_;
}

void MainlandTravelPermitResult::unsettype()
{
    typeIsSet_ = false;
}

std::string MainlandTravelPermitResult::getSide() const
{
    return side_;
}

void MainlandTravelPermitResult::setSide(const std::string& value)
{
    side_ = value;
    sideIsSet_ = true;
}

bool MainlandTravelPermitResult::sideIsSet() const
{
    return sideIsSet_;
}

void MainlandTravelPermitResult::unsetside()
{
    sideIsSet_ = false;
}

std::string MainlandTravelPermitResult::getPortraitImage() const
{
    return portraitImage_;
}

void MainlandTravelPermitResult::setPortraitImage(const std::string& value)
{
    portraitImage_ = value;
    portraitImageIsSet_ = true;
}

bool MainlandTravelPermitResult::portraitImageIsSet() const
{
    return portraitImageIsSet_;
}

void MainlandTravelPermitResult::unsetportraitImage()
{
    portraitImageIsSet_ = false;
}

std::vector<std::vector<int32_t>>& MainlandTravelPermitResult::getPortraitLocation()
{
    return portraitLocation_;
}

void MainlandTravelPermitResult::setPortraitLocation(const std::vector<std::vector<int32_t>>& value)
{
    portraitLocation_ = value;
    portraitLocationIsSet_ = true;
}

bool MainlandTravelPermitResult::portraitLocationIsSet() const
{
    return portraitLocationIsSet_;
}

void MainlandTravelPermitResult::unsetportraitLocation()
{
    portraitLocationIsSet_ = false;
}

MainlandTravelPermitConfidence MainlandTravelPermitResult::getConfidence() const
{
    return confidence_;
}

void MainlandTravelPermitResult::setConfidence(const MainlandTravelPermitConfidence& value)
{
    confidence_ = value;
    confidenceIsSet_ = true;
}

bool MainlandTravelPermitResult::confidenceIsSet() const
{
    return confidenceIsSet_;
}

void MainlandTravelPermitResult::unsetconfidence()
{
    confidenceIsSet_ = false;
}

}
}
}
}
}


