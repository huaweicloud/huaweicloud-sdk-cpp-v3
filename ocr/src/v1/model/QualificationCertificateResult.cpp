

#include "huaweicloud/ocr/v1/model/QualificationCertificateResult.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




QualificationCertificateResult::QualificationCertificateResult()
{
    idNumber_ = "";
    idNumberIsSet_ = false;
    assessmentDate_ = "";
    assessmentDateIsSet_ = false;
    certificateNumber_ = "";
    certificateNumberIsSet_ = false;
    fileNumber_ = "";
    fileNumberIsSet_ = false;
    unionCardNumber_ = "";
    unionCardNumberIsSet_ = false;
    continuingEducationInfo_ = "";
    continuingEducationInfoIsSet_ = false;
    sex_ = "";
    sexIsSet_ = false;
    phoneNumber_ = "";
    phoneNumberIsSet_ = false;
    registrationDate_ = "";
    registrationDateIsSet_ = false;
    workUnit_ = "";
    workUnitIsSet_ = false;
    integrityAssessmentInfo_ = "";
    integrityAssessmentInfoIsSet_ = false;
    nationality_ = "";
    nationalityIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    address_ = "";
    addressIsSet_ = false;
    drivingClass_ = "";
    drivingClassIsSet_ = false;
    issuingAuthority_ = "";
    issuingAuthorityIsSet_ = false;
    birthDate_ = "";
    birthDateIsSet_ = false;
    qualificationCategoryListIsSet_ = false;
    confidenceIsSet_ = false;
}

QualificationCertificateResult::~QualificationCertificateResult() = default;

void QualificationCertificateResult::validate()
{
}

web::json::value QualificationCertificateResult::toJson() const
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
    if(confidenceIsSet_) {
        val[utility::conversions::to_string_t("confidence")] = ModelBase::toJson(confidence_);
    }

    return val;
}

bool QualificationCertificateResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("assessment_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("assessment_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssessmentDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("certificate_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("certificate_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCertificateNumber(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("union_card_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("union_card_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUnionCardNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("continuing_education_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("continuing_education_info"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContinuingEducationInfo(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("phone_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("phone_number"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPhoneNumber(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("work_unit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("work_unit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkUnit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("integrity_assessment_info"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("integrity_assessment_info"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIntegrityAssessmentInfo(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("driving_class"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("driving_class"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDrivingClass(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("birth_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("birth_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBirthDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("qualification_category_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("qualification_category_list"));
        if(!fieldValue.is_null())
        {
            std::vector<QualificationCategory> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setQualificationCategoryList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("confidence"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("confidence"));
        if(!fieldValue.is_null())
        {
            QualificationConfidence refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfidence(refVal);
        }
    }
    return ok;
}


std::string QualificationCertificateResult::getIdNumber() const
{
    return idNumber_;
}

void QualificationCertificateResult::setIdNumber(const std::string& value)
{
    idNumber_ = value;
    idNumberIsSet_ = true;
}

bool QualificationCertificateResult::idNumberIsSet() const
{
    return idNumberIsSet_;
}

void QualificationCertificateResult::unsetidNumber()
{
    idNumberIsSet_ = false;
}

std::string QualificationCertificateResult::getAssessmentDate() const
{
    return assessmentDate_;
}

void QualificationCertificateResult::setAssessmentDate(const std::string& value)
{
    assessmentDate_ = value;
    assessmentDateIsSet_ = true;
}

bool QualificationCertificateResult::assessmentDateIsSet() const
{
    return assessmentDateIsSet_;
}

void QualificationCertificateResult::unsetassessmentDate()
{
    assessmentDateIsSet_ = false;
}

std::string QualificationCertificateResult::getCertificateNumber() const
{
    return certificateNumber_;
}

void QualificationCertificateResult::setCertificateNumber(const std::string& value)
{
    certificateNumber_ = value;
    certificateNumberIsSet_ = true;
}

bool QualificationCertificateResult::certificateNumberIsSet() const
{
    return certificateNumberIsSet_;
}

void QualificationCertificateResult::unsetcertificateNumber()
{
    certificateNumberIsSet_ = false;
}

std::string QualificationCertificateResult::getFileNumber() const
{
    return fileNumber_;
}

void QualificationCertificateResult::setFileNumber(const std::string& value)
{
    fileNumber_ = value;
    fileNumberIsSet_ = true;
}

bool QualificationCertificateResult::fileNumberIsSet() const
{
    return fileNumberIsSet_;
}

void QualificationCertificateResult::unsetfileNumber()
{
    fileNumberIsSet_ = false;
}

std::string QualificationCertificateResult::getUnionCardNumber() const
{
    return unionCardNumber_;
}

void QualificationCertificateResult::setUnionCardNumber(const std::string& value)
{
    unionCardNumber_ = value;
    unionCardNumberIsSet_ = true;
}

bool QualificationCertificateResult::unionCardNumberIsSet() const
{
    return unionCardNumberIsSet_;
}

void QualificationCertificateResult::unsetunionCardNumber()
{
    unionCardNumberIsSet_ = false;
}

std::string QualificationCertificateResult::getContinuingEducationInfo() const
{
    return continuingEducationInfo_;
}

void QualificationCertificateResult::setContinuingEducationInfo(const std::string& value)
{
    continuingEducationInfo_ = value;
    continuingEducationInfoIsSet_ = true;
}

bool QualificationCertificateResult::continuingEducationInfoIsSet() const
{
    return continuingEducationInfoIsSet_;
}

void QualificationCertificateResult::unsetcontinuingEducationInfo()
{
    continuingEducationInfoIsSet_ = false;
}

std::string QualificationCertificateResult::getSex() const
{
    return sex_;
}

void QualificationCertificateResult::setSex(const std::string& value)
{
    sex_ = value;
    sexIsSet_ = true;
}

bool QualificationCertificateResult::sexIsSet() const
{
    return sexIsSet_;
}

void QualificationCertificateResult::unsetsex()
{
    sexIsSet_ = false;
}

std::string QualificationCertificateResult::getPhoneNumber() const
{
    return phoneNumber_;
}

void QualificationCertificateResult::setPhoneNumber(const std::string& value)
{
    phoneNumber_ = value;
    phoneNumberIsSet_ = true;
}

bool QualificationCertificateResult::phoneNumberIsSet() const
{
    return phoneNumberIsSet_;
}

void QualificationCertificateResult::unsetphoneNumber()
{
    phoneNumberIsSet_ = false;
}

std::string QualificationCertificateResult::getRegistrationDate() const
{
    return registrationDate_;
}

void QualificationCertificateResult::setRegistrationDate(const std::string& value)
{
    registrationDate_ = value;
    registrationDateIsSet_ = true;
}

bool QualificationCertificateResult::registrationDateIsSet() const
{
    return registrationDateIsSet_;
}

void QualificationCertificateResult::unsetregistrationDate()
{
    registrationDateIsSet_ = false;
}

std::string QualificationCertificateResult::getWorkUnit() const
{
    return workUnit_;
}

void QualificationCertificateResult::setWorkUnit(const std::string& value)
{
    workUnit_ = value;
    workUnitIsSet_ = true;
}

bool QualificationCertificateResult::workUnitIsSet() const
{
    return workUnitIsSet_;
}

void QualificationCertificateResult::unsetworkUnit()
{
    workUnitIsSet_ = false;
}

std::string QualificationCertificateResult::getIntegrityAssessmentInfo() const
{
    return integrityAssessmentInfo_;
}

void QualificationCertificateResult::setIntegrityAssessmentInfo(const std::string& value)
{
    integrityAssessmentInfo_ = value;
    integrityAssessmentInfoIsSet_ = true;
}

bool QualificationCertificateResult::integrityAssessmentInfoIsSet() const
{
    return integrityAssessmentInfoIsSet_;
}

void QualificationCertificateResult::unsetintegrityAssessmentInfo()
{
    integrityAssessmentInfoIsSet_ = false;
}

std::string QualificationCertificateResult::getNationality() const
{
    return nationality_;
}

void QualificationCertificateResult::setNationality(const std::string& value)
{
    nationality_ = value;
    nationalityIsSet_ = true;
}

bool QualificationCertificateResult::nationalityIsSet() const
{
    return nationalityIsSet_;
}

void QualificationCertificateResult::unsetnationality()
{
    nationalityIsSet_ = false;
}

std::string QualificationCertificateResult::getName() const
{
    return name_;
}

void QualificationCertificateResult::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool QualificationCertificateResult::nameIsSet() const
{
    return nameIsSet_;
}

void QualificationCertificateResult::unsetname()
{
    nameIsSet_ = false;
}

std::string QualificationCertificateResult::getAddress() const
{
    return address_;
}

void QualificationCertificateResult::setAddress(const std::string& value)
{
    address_ = value;
    addressIsSet_ = true;
}

bool QualificationCertificateResult::addressIsSet() const
{
    return addressIsSet_;
}

void QualificationCertificateResult::unsetaddress()
{
    addressIsSet_ = false;
}

std::string QualificationCertificateResult::getDrivingClass() const
{
    return drivingClass_;
}

void QualificationCertificateResult::setDrivingClass(const std::string& value)
{
    drivingClass_ = value;
    drivingClassIsSet_ = true;
}

bool QualificationCertificateResult::drivingClassIsSet() const
{
    return drivingClassIsSet_;
}

void QualificationCertificateResult::unsetdrivingClass()
{
    drivingClassIsSet_ = false;
}

std::string QualificationCertificateResult::getIssuingAuthority() const
{
    return issuingAuthority_;
}

void QualificationCertificateResult::setIssuingAuthority(const std::string& value)
{
    issuingAuthority_ = value;
    issuingAuthorityIsSet_ = true;
}

bool QualificationCertificateResult::issuingAuthorityIsSet() const
{
    return issuingAuthorityIsSet_;
}

void QualificationCertificateResult::unsetissuingAuthority()
{
    issuingAuthorityIsSet_ = false;
}

std::string QualificationCertificateResult::getBirthDate() const
{
    return birthDate_;
}

void QualificationCertificateResult::setBirthDate(const std::string& value)
{
    birthDate_ = value;
    birthDateIsSet_ = true;
}

bool QualificationCertificateResult::birthDateIsSet() const
{
    return birthDateIsSet_;
}

void QualificationCertificateResult::unsetbirthDate()
{
    birthDateIsSet_ = false;
}

std::vector<QualificationCategory>& QualificationCertificateResult::getQualificationCategoryList()
{
    return qualificationCategoryList_;
}

void QualificationCertificateResult::setQualificationCategoryList(const std::vector<QualificationCategory>& value)
{
    qualificationCategoryList_ = value;
    qualificationCategoryListIsSet_ = true;
}

bool QualificationCertificateResult::qualificationCategoryListIsSet() const
{
    return qualificationCategoryListIsSet_;
}

void QualificationCertificateResult::unsetqualificationCategoryList()
{
    qualificationCategoryListIsSet_ = false;
}

QualificationConfidence QualificationCertificateResult::getConfidence() const
{
    return confidence_;
}

void QualificationCertificateResult::setConfidence(const QualificationConfidence& value)
{
    confidence_ = value;
    confidenceIsSet_ = true;
}

bool QualificationCertificateResult::confidenceIsSet() const
{
    return confidenceIsSet_;
}

void QualificationCertificateResult::unsetconfidence()
{
    confidenceIsSet_ = false;
}

}
}
}
}
}


