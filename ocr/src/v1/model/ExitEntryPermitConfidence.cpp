

#include "huaweicloud/ocr/v1/model/ExitEntryPermitConfidence.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




ExitEntryPermitConfidence::ExitEntryPermitConfidence()
{
    name_ = 0.0f;
    nameIsSet_ = false;
    nameEn_ = 0.0f;
    nameEnIsSet_ = false;
    birthDate_ = 0.0f;
    birthDateIsSet_ = false;
    sex_ = 0.0f;
    sexIsSet_ = false;
    number_ = 0.0f;
    numberIsSet_ = false;
    validPeriod_ = 0.0f;
    validPeriodIsSet_ = false;
    issuingAuthority_ = 0.0f;
    issuingAuthorityIsSet_ = false;
    issuePlace_ = 0.0f;
    issuePlaceIsSet_ = false;
    machineCode_ = 0.0f;
    machineCodeIsSet_ = false;
    type_ = 0.0f;
    typeIsSet_ = false;
    side_ = 0.0f;
    sideIsSet_ = false;
    endorsementInfoHkIsSet_ = false;
    endorsementInfoMoIsSet_ = false;
    endorsementInfoTwIsSet_ = false;
}

ExitEntryPermitConfidence::~ExitEntryPermitConfidence() = default;

void ExitEntryPermitConfidence::validate()
{
}

web::json::value ExitEntryPermitConfidence::toJson() const
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
    if(numberIsSet_) {
        val[utility::conversions::to_string_t("number")] = ModelBase::toJson(number_);
    }
    if(validPeriodIsSet_) {
        val[utility::conversions::to_string_t("valid_period")] = ModelBase::toJson(validPeriod_);
    }
    if(issuingAuthorityIsSet_) {
        val[utility::conversions::to_string_t("issuing_authority")] = ModelBase::toJson(issuingAuthority_);
    }
    if(issuePlaceIsSet_) {
        val[utility::conversions::to_string_t("issue_place")] = ModelBase::toJson(issuePlace_);
    }
    if(machineCodeIsSet_) {
        val[utility::conversions::to_string_t("machine_code")] = ModelBase::toJson(machineCode_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(sideIsSet_) {
        val[utility::conversions::to_string_t("side")] = ModelBase::toJson(side_);
    }
    if(endorsementInfoHkIsSet_) {
        val[utility::conversions::to_string_t("endorsement_info_hk")] = ModelBase::toJson(endorsementInfoHk_);
    }
    if(endorsementInfoMoIsSet_) {
        val[utility::conversions::to_string_t("endorsement_info_mo")] = ModelBase::toJson(endorsementInfoMo_);
    }
    if(endorsementInfoTwIsSet_) {
        val[utility::conversions::to_string_t("endorsement_info_tw")] = ModelBase::toJson(endorsementInfoTw_);
    }

    return val;
}

bool ExitEntryPermitConfidence::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("number"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNumber(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("issue_place"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_place"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssuePlace(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("machine_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("machine_code"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMachineCode(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("endorsement_info_hk"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endorsement_info_hk"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndorsementInfoHk(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("endorsement_info_mo"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endorsement_info_mo"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndorsementInfoMo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("endorsement_info_tw"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endorsement_info_tw"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndorsementInfoTw(refVal);
        }
    }
    return ok;
}


float ExitEntryPermitConfidence::getName() const
{
    return name_;
}

void ExitEntryPermitConfidence::setName(float value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ExitEntryPermitConfidence::nameIsSet() const
{
    return nameIsSet_;
}

void ExitEntryPermitConfidence::unsetname()
{
    nameIsSet_ = false;
}

float ExitEntryPermitConfidence::getNameEn() const
{
    return nameEn_;
}

void ExitEntryPermitConfidence::setNameEn(float value)
{
    nameEn_ = value;
    nameEnIsSet_ = true;
}

bool ExitEntryPermitConfidence::nameEnIsSet() const
{
    return nameEnIsSet_;
}

void ExitEntryPermitConfidence::unsetnameEn()
{
    nameEnIsSet_ = false;
}

float ExitEntryPermitConfidence::getBirthDate() const
{
    return birthDate_;
}

void ExitEntryPermitConfidence::setBirthDate(float value)
{
    birthDate_ = value;
    birthDateIsSet_ = true;
}

bool ExitEntryPermitConfidence::birthDateIsSet() const
{
    return birthDateIsSet_;
}

void ExitEntryPermitConfidence::unsetbirthDate()
{
    birthDateIsSet_ = false;
}

float ExitEntryPermitConfidence::getSex() const
{
    return sex_;
}

void ExitEntryPermitConfidence::setSex(float value)
{
    sex_ = value;
    sexIsSet_ = true;
}

bool ExitEntryPermitConfidence::sexIsSet() const
{
    return sexIsSet_;
}

void ExitEntryPermitConfidence::unsetsex()
{
    sexIsSet_ = false;
}

float ExitEntryPermitConfidence::getNumber() const
{
    return number_;
}

void ExitEntryPermitConfidence::setNumber(float value)
{
    number_ = value;
    numberIsSet_ = true;
}

bool ExitEntryPermitConfidence::numberIsSet() const
{
    return numberIsSet_;
}

void ExitEntryPermitConfidence::unsetnumber()
{
    numberIsSet_ = false;
}

float ExitEntryPermitConfidence::getValidPeriod() const
{
    return validPeriod_;
}

void ExitEntryPermitConfidence::setValidPeriod(float value)
{
    validPeriod_ = value;
    validPeriodIsSet_ = true;
}

bool ExitEntryPermitConfidence::validPeriodIsSet() const
{
    return validPeriodIsSet_;
}

void ExitEntryPermitConfidence::unsetvalidPeriod()
{
    validPeriodIsSet_ = false;
}

float ExitEntryPermitConfidence::getIssuingAuthority() const
{
    return issuingAuthority_;
}

void ExitEntryPermitConfidence::setIssuingAuthority(float value)
{
    issuingAuthority_ = value;
    issuingAuthorityIsSet_ = true;
}

bool ExitEntryPermitConfidence::issuingAuthorityIsSet() const
{
    return issuingAuthorityIsSet_;
}

void ExitEntryPermitConfidence::unsetissuingAuthority()
{
    issuingAuthorityIsSet_ = false;
}

float ExitEntryPermitConfidence::getIssuePlace() const
{
    return issuePlace_;
}

void ExitEntryPermitConfidence::setIssuePlace(float value)
{
    issuePlace_ = value;
    issuePlaceIsSet_ = true;
}

bool ExitEntryPermitConfidence::issuePlaceIsSet() const
{
    return issuePlaceIsSet_;
}

void ExitEntryPermitConfidence::unsetissuePlace()
{
    issuePlaceIsSet_ = false;
}

float ExitEntryPermitConfidence::getMachineCode() const
{
    return machineCode_;
}

void ExitEntryPermitConfidence::setMachineCode(float value)
{
    machineCode_ = value;
    machineCodeIsSet_ = true;
}

bool ExitEntryPermitConfidence::machineCodeIsSet() const
{
    return machineCodeIsSet_;
}

void ExitEntryPermitConfidence::unsetmachineCode()
{
    machineCodeIsSet_ = false;
}

float ExitEntryPermitConfidence::getType() const
{
    return type_;
}

void ExitEntryPermitConfidence::setType(float value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ExitEntryPermitConfidence::typeIsSet() const
{
    return typeIsSet_;
}

void ExitEntryPermitConfidence::unsettype()
{
    typeIsSet_ = false;
}

float ExitEntryPermitConfidence::getSide() const
{
    return side_;
}

void ExitEntryPermitConfidence::setSide(float value)
{
    side_ = value;
    sideIsSet_ = true;
}

bool ExitEntryPermitConfidence::sideIsSet() const
{
    return sideIsSet_;
}

void ExitEntryPermitConfidence::unsetside()
{
    sideIsSet_ = false;
}

Object ExitEntryPermitConfidence::getEndorsementInfoHk() const
{
    return endorsementInfoHk_;
}

void ExitEntryPermitConfidence::setEndorsementInfoHk(const Object& value)
{
    endorsementInfoHk_ = value;
    endorsementInfoHkIsSet_ = true;
}

bool ExitEntryPermitConfidence::endorsementInfoHkIsSet() const
{
    return endorsementInfoHkIsSet_;
}

void ExitEntryPermitConfidence::unsetendorsementInfoHk()
{
    endorsementInfoHkIsSet_ = false;
}

Object ExitEntryPermitConfidence::getEndorsementInfoMo() const
{
    return endorsementInfoMo_;
}

void ExitEntryPermitConfidence::setEndorsementInfoMo(const Object& value)
{
    endorsementInfoMo_ = value;
    endorsementInfoMoIsSet_ = true;
}

bool ExitEntryPermitConfidence::endorsementInfoMoIsSet() const
{
    return endorsementInfoMoIsSet_;
}

void ExitEntryPermitConfidence::unsetendorsementInfoMo()
{
    endorsementInfoMoIsSet_ = false;
}

Object ExitEntryPermitConfidence::getEndorsementInfoTw() const
{
    return endorsementInfoTw_;
}

void ExitEntryPermitConfidence::setEndorsementInfoTw(const Object& value)
{
    endorsementInfoTw_ = value;
    endorsementInfoTwIsSet_ = true;
}

bool ExitEntryPermitConfidence::endorsementInfoTwIsSet() const
{
    return endorsementInfoTwIsSet_;
}

void ExitEntryPermitConfidence::unsetendorsementInfoTw()
{
    endorsementInfoTwIsSet_ = false;
}

}
}
}
}
}


