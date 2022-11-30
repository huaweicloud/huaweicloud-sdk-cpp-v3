

#include "huaweicloud/ocr/v1/model/QualificationConfidence.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




QualificationConfidence::QualificationConfidence()
{
    idNumber_ = 0.0f;
    idNumberIsSet_ = false;
    assessmentDate_ = 0.0f;
    assessmentDateIsSet_ = false;
    certificateNumber_ = 0.0f;
    certificateNumberIsSet_ = false;
    fileNumber_ = 0.0f;
    fileNumberIsSet_ = false;
    unionCardNumber_ = 0.0f;
    unionCardNumberIsSet_ = false;
    continuingEducationInfo_ = 0.0f;
    continuingEducationInfoIsSet_ = false;
    sex_ = 0.0f;
    sexIsSet_ = false;
    phoneNumber_ = 0.0f;
    phoneNumberIsSet_ = false;
    registrationDate_ = 0.0f;
    registrationDateIsSet_ = false;
    workUnit_ = 0.0f;
    workUnitIsSet_ = false;
    integrityAssessmentInfo_ = 0.0f;
    integrityAssessmentInfoIsSet_ = false;
    nationality_ = 0.0f;
    nationalityIsSet_ = false;
    name_ = 0.0f;
    nameIsSet_ = false;
    address_ = 0.0f;
    addressIsSet_ = false;
    drivingClass_ = 0.0f;
    drivingClassIsSet_ = false;
    issuingAuthority_ = 0.0f;
    issuingAuthorityIsSet_ = false;
    birthDate_ = 0.0f;
    birthDateIsSet_ = false;
    qualificationCategoryListIsSet_ = false;
}

QualificationConfidence::~QualificationConfidence() = default;

void QualificationConfidence::validate()
{
}

web::json::value QualificationConfidence::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idNumberIsSet_) {
        val[utility::conversions::to_string_t("id_number")] = ModelBase::toJson(idNumber_);
    }
    if(assessmentDateIsSet_) {
        val[utility::conversions::to_string_t("assessment_date")] = ModelBase::toJson(assessmentDate_);
    }
    if(certificateNumberIsSet_) {
        val[utility::conversions::to_string_t("certificate_number")] = ModelBase::toJson(certificateNumber_);
    }
    if(fileNumberIsSet_) {
        val[utility::conversions::to_string_t("file_number")] = ModelBase::toJson(fileNumber_);
    }
    if(unionCardNumberIsSet_) {
        val[utility::conversions::to_string_t("union_card_number")] = ModelBase::toJson(unionCardNumber_);
    }
    if(continuingEducationInfoIsSet_) {
        val[utility::conversions::to_string_t("continuing_education_info")] = ModelBase::toJson(continuingEducationInfo_);
    }
    if(sexIsSet_) {
        val[utility::conversions::to_string_t("sex")] = ModelBase::toJson(sex_);
    }
    if(phoneNumberIsSet_) {
        val[utility::conversions::to_string_t("phone_number")] = ModelBase::toJson(phoneNumber_);
    }
    if(registrationDateIsSet_) {
        val[utility::conversions::to_string_t("registration_date")] = ModelBase::toJson(registrationDate_);
    }
    if(workUnitIsSet_) {
        val[utility::conversions::to_string_t("work_unit")] = ModelBase::toJson(workUnit_);
    }
    if(integrityAssessmentInfoIsSet_) {
        val[utility::conversions::to_string_t("integrity_assessment_info")] = ModelBase::toJson(integrityAssessmentInfo_);
    }
    if(nationalityIsSet_) {
        val[utility::conversions::to_string_t("nationality")] = ModelBase::toJson(nationality_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(addressIsSet_) {
        val[utility::conversions::to_string_t("address")] = ModelBase::toJson(address_);
    }
    if(drivingClassIsSet_) {
        val[utility::conversions::to_string_t("driving_class")] = ModelBase::toJson(drivingClass_);
    }
    if(issuingAuthorityIsSet_) {
        val[utility::conversions::to_string_t("issuing_authority")] = ModelBase::toJson(issuingAuthority_);
    }
    if(birthDateIsSet_) {
        val[utility::conversions::to_string_t("birth_date")] = ModelBase::toJson(birthDate_);
    }
    if(qualificationCategoryListIsSet_) {
        val[utility::conversions::to_string_t("qualification_category_list")] = ModelBase::toJson(qualificationCategoryList_);
    }

    return val;
}

bool QualificationConfidence::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id_number"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("assessment_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("assessment_date"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssessmentDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("certificate_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("certificate_number"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCertificateNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("file_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("file_number"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("union_card_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("union_card_number"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUnionCardNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("continuing_education_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("continuing_education_info"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContinuingEducationInfo(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("phone_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("phone_number"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPhoneNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("registration_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("registration_date"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegistrationDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("work_unit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("work_unit"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkUnit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("integrity_assessment_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("integrity_assessment_info"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIntegrityAssessmentInfo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nationality"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nationality"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNationality(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("address"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("driving_class"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("driving_class"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDrivingClass(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("birth_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("birth_date"));
        if(!fieldValue.is_null())
        {
            float refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBirthDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("qualification_category_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("qualification_category_list"));
        if(!fieldValue.is_null())
        {
            std::vector<QualificationCategoryConfidence> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQualificationCategoryList(refVal);
        }
    }
    return ok;
}


float QualificationConfidence::getIdNumber() const
{
    return idNumber_;
}

void QualificationConfidence::setIdNumber(float value)
{
    idNumber_ = value;
    idNumberIsSet_ = true;
}

bool QualificationConfidence::idNumberIsSet() const
{
    return idNumberIsSet_;
}

void QualificationConfidence::unsetidNumber()
{
    idNumberIsSet_ = false;
}

float QualificationConfidence::getAssessmentDate() const
{
    return assessmentDate_;
}

void QualificationConfidence::setAssessmentDate(float value)
{
    assessmentDate_ = value;
    assessmentDateIsSet_ = true;
}

bool QualificationConfidence::assessmentDateIsSet() const
{
    return assessmentDateIsSet_;
}

void QualificationConfidence::unsetassessmentDate()
{
    assessmentDateIsSet_ = false;
}

float QualificationConfidence::getCertificateNumber() const
{
    return certificateNumber_;
}

void QualificationConfidence::setCertificateNumber(float value)
{
    certificateNumber_ = value;
    certificateNumberIsSet_ = true;
}

bool QualificationConfidence::certificateNumberIsSet() const
{
    return certificateNumberIsSet_;
}

void QualificationConfidence::unsetcertificateNumber()
{
    certificateNumberIsSet_ = false;
}

float QualificationConfidence::getFileNumber() const
{
    return fileNumber_;
}

void QualificationConfidence::setFileNumber(float value)
{
    fileNumber_ = value;
    fileNumberIsSet_ = true;
}

bool QualificationConfidence::fileNumberIsSet() const
{
    return fileNumberIsSet_;
}

void QualificationConfidence::unsetfileNumber()
{
    fileNumberIsSet_ = false;
}

float QualificationConfidence::getUnionCardNumber() const
{
    return unionCardNumber_;
}

void QualificationConfidence::setUnionCardNumber(float value)
{
    unionCardNumber_ = value;
    unionCardNumberIsSet_ = true;
}

bool QualificationConfidence::unionCardNumberIsSet() const
{
    return unionCardNumberIsSet_;
}

void QualificationConfidence::unsetunionCardNumber()
{
    unionCardNumberIsSet_ = false;
}

float QualificationConfidence::getContinuingEducationInfo() const
{
    return continuingEducationInfo_;
}

void QualificationConfidence::setContinuingEducationInfo(float value)
{
    continuingEducationInfo_ = value;
    continuingEducationInfoIsSet_ = true;
}

bool QualificationConfidence::continuingEducationInfoIsSet() const
{
    return continuingEducationInfoIsSet_;
}

void QualificationConfidence::unsetcontinuingEducationInfo()
{
    continuingEducationInfoIsSet_ = false;
}

float QualificationConfidence::getSex() const
{
    return sex_;
}

void QualificationConfidence::setSex(float value)
{
    sex_ = value;
    sexIsSet_ = true;
}

bool QualificationConfidence::sexIsSet() const
{
    return sexIsSet_;
}

void QualificationConfidence::unsetsex()
{
    sexIsSet_ = false;
}

float QualificationConfidence::getPhoneNumber() const
{
    return phoneNumber_;
}

void QualificationConfidence::setPhoneNumber(float value)
{
    phoneNumber_ = value;
    phoneNumberIsSet_ = true;
}

bool QualificationConfidence::phoneNumberIsSet() const
{
    return phoneNumberIsSet_;
}

void QualificationConfidence::unsetphoneNumber()
{
    phoneNumberIsSet_ = false;
}

float QualificationConfidence::getRegistrationDate() const
{
    return registrationDate_;
}

void QualificationConfidence::setRegistrationDate(float value)
{
    registrationDate_ = value;
    registrationDateIsSet_ = true;
}

bool QualificationConfidence::registrationDateIsSet() const
{
    return registrationDateIsSet_;
}

void QualificationConfidence::unsetregistrationDate()
{
    registrationDateIsSet_ = false;
}

float QualificationConfidence::getWorkUnit() const
{
    return workUnit_;
}

void QualificationConfidence::setWorkUnit(float value)
{
    workUnit_ = value;
    workUnitIsSet_ = true;
}

bool QualificationConfidence::workUnitIsSet() const
{
    return workUnitIsSet_;
}

void QualificationConfidence::unsetworkUnit()
{
    workUnitIsSet_ = false;
}

float QualificationConfidence::getIntegrityAssessmentInfo() const
{
    return integrityAssessmentInfo_;
}

void QualificationConfidence::setIntegrityAssessmentInfo(float value)
{
    integrityAssessmentInfo_ = value;
    integrityAssessmentInfoIsSet_ = true;
}

bool QualificationConfidence::integrityAssessmentInfoIsSet() const
{
    return integrityAssessmentInfoIsSet_;
}

void QualificationConfidence::unsetintegrityAssessmentInfo()
{
    integrityAssessmentInfoIsSet_ = false;
}

float QualificationConfidence::getNationality() const
{
    return nationality_;
}

void QualificationConfidence::setNationality(float value)
{
    nationality_ = value;
    nationalityIsSet_ = true;
}

bool QualificationConfidence::nationalityIsSet() const
{
    return nationalityIsSet_;
}

void QualificationConfidence::unsetnationality()
{
    nationalityIsSet_ = false;
}

float QualificationConfidence::getName() const
{
    return name_;
}

void QualificationConfidence::setName(float value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool QualificationConfidence::nameIsSet() const
{
    return nameIsSet_;
}

void QualificationConfidence::unsetname()
{
    nameIsSet_ = false;
}

float QualificationConfidence::getAddress() const
{
    return address_;
}

void QualificationConfidence::setAddress(float value)
{
    address_ = value;
    addressIsSet_ = true;
}

bool QualificationConfidence::addressIsSet() const
{
    return addressIsSet_;
}

void QualificationConfidence::unsetaddress()
{
    addressIsSet_ = false;
}

float QualificationConfidence::getDrivingClass() const
{
    return drivingClass_;
}

void QualificationConfidence::setDrivingClass(float value)
{
    drivingClass_ = value;
    drivingClassIsSet_ = true;
}

bool QualificationConfidence::drivingClassIsSet() const
{
    return drivingClassIsSet_;
}

void QualificationConfidence::unsetdrivingClass()
{
    drivingClassIsSet_ = false;
}

float QualificationConfidence::getIssuingAuthority() const
{
    return issuingAuthority_;
}

void QualificationConfidence::setIssuingAuthority(float value)
{
    issuingAuthority_ = value;
    issuingAuthorityIsSet_ = true;
}

bool QualificationConfidence::issuingAuthorityIsSet() const
{
    return issuingAuthorityIsSet_;
}

void QualificationConfidence::unsetissuingAuthority()
{
    issuingAuthorityIsSet_ = false;
}

float QualificationConfidence::getBirthDate() const
{
    return birthDate_;
}

void QualificationConfidence::setBirthDate(float value)
{
    birthDate_ = value;
    birthDateIsSet_ = true;
}

bool QualificationConfidence::birthDateIsSet() const
{
    return birthDateIsSet_;
}

void QualificationConfidence::unsetbirthDate()
{
    birthDateIsSet_ = false;
}

std::vector<QualificationCategoryConfidence>& QualificationConfidence::getQualificationCategoryList()
{
    return qualificationCategoryList_;
}

void QualificationConfidence::setQualificationCategoryList(const std::vector<QualificationCategoryConfidence>& value)
{
    qualificationCategoryList_ = value;
    qualificationCategoryListIsSet_ = true;
}

bool QualificationConfidence::qualificationCategoryListIsSet() const
{
    return qualificationCategoryListIsSet_;
}

void QualificationConfidence::unsetqualificationCategoryList()
{
    qualificationCategoryListIsSet_ = false;
}

}
}
}
}
}


