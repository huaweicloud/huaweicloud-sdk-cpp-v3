

#include "huaweicloud/ocr/v1/model/InsurancePolicyResult.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ocr {
namespace V1 {
namespace Model {




InsurancePolicyResult::InsurancePolicyResult()
{
    bankName_ = "";
    bankNameIsSet_ = false;
    billNumberIsSet_ = false;
    companyIsSet_ = false;
    effectiveDateIsSet_ = false;
    applicantNameIsSet_ = false;
    applicantSexIsSet_ = false;
    applicantBirthdayIsSet_ = false;
    applicantIdTypeIsSet_ = false;
    applicantIdNumberIsSet_ = false;
    insurantListIsSet_ = false;
    beneficiaryListIsSet_ = false;
    insuranceListIsSet_ = false;
}

InsurancePolicyResult::~InsurancePolicyResult() = default;

void InsurancePolicyResult::validate()
{
}

web::json::value InsurancePolicyResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bankNameIsSet_) {
        val[utility::conversions::to_string_t("bank_name")] = ModelBase::toJson(bankName_);
    }
    if(billNumberIsSet_) {
        val[utility::conversions::to_string_t("bill_number")] = ModelBase::toJson(billNumber_);
    }
    if(companyIsSet_) {
        val[utility::conversions::to_string_t("company")] = ModelBase::toJson(company_);
    }
    if(effectiveDateIsSet_) {
        val[utility::conversions::to_string_t("effective_date")] = ModelBase::toJson(effectiveDate_);
    }
    if(applicantNameIsSet_) {
        val[utility::conversions::to_string_t("applicant_name")] = ModelBase::toJson(applicantName_);
    }
    if(applicantSexIsSet_) {
        val[utility::conversions::to_string_t("applicant_sex")] = ModelBase::toJson(applicantSex_);
    }
    if(applicantBirthdayIsSet_) {
        val[utility::conversions::to_string_t("applicant_birthday")] = ModelBase::toJson(applicantBirthday_);
    }
    if(applicantIdTypeIsSet_) {
        val[utility::conversions::to_string_t("applicant_id_type")] = ModelBase::toJson(applicantIdType_);
    }
    if(applicantIdNumberIsSet_) {
        val[utility::conversions::to_string_t("applicant_id_number")] = ModelBase::toJson(applicantIdNumber_);
    }
    if(insurantListIsSet_) {
        val[utility::conversions::to_string_t("insurant_list")] = ModelBase::toJson(insurantList_);
    }
    if(beneficiaryListIsSet_) {
        val[utility::conversions::to_string_t("beneficiary_list")] = ModelBase::toJson(beneficiaryList_);
    }
    if(insuranceListIsSet_) {
        val[utility::conversions::to_string_t("insurance_list")] = ModelBase::toJson(insuranceList_);
    }

    return val;
}

bool InsurancePolicyResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("bank_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bank_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBankName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bill_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bill_number"));
        if(!fieldValue.is_null())
        {
            InsurancePolicyDetail refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBillNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("company"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("company"));
        if(!fieldValue.is_null())
        {
            InsurancePolicyDetail refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCompany(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("effective_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("effective_date"));
        if(!fieldValue.is_null())
        {
            InsurancePolicyDetail refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEffectiveDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("applicant_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("applicant_name"));
        if(!fieldValue.is_null())
        {
            InsurancePolicyDetail refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplicantName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("applicant_sex"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("applicant_sex"));
        if(!fieldValue.is_null())
        {
            InsurancePolicyDetail refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplicantSex(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("applicant_birthday"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("applicant_birthday"));
        if(!fieldValue.is_null())
        {
            InsurancePolicyDetail refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplicantBirthday(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("applicant_id_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("applicant_id_type"));
        if(!fieldValue.is_null())
        {
            InsurancePolicyDetail refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplicantIdType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("applicant_id_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("applicant_id_number"));
        if(!fieldValue.is_null())
        {
            InsurancePolicyDetail refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApplicantIdNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("insurant_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("insurant_list"));
        if(!fieldValue.is_null())
        {
            std::vector<InsurantItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInsurantList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("beneficiary_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("beneficiary_list"));
        if(!fieldValue.is_null())
        {
            std::vector<BeneficiaryItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBeneficiaryList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("insurance_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("insurance_list"));
        if(!fieldValue.is_null())
        {
            std::vector<InsuranceItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInsuranceList(refVal);
        }
    }
    return ok;
}

std::string InsurancePolicyResult::getBankName() const
{
    return bankName_;
}

void InsurancePolicyResult::setBankName(const std::string& value)
{
    bankName_ = value;
    bankNameIsSet_ = true;
}

bool InsurancePolicyResult::bankNameIsSet() const
{
    return bankNameIsSet_;
}

void InsurancePolicyResult::unsetbankName()
{
    bankNameIsSet_ = false;
}

InsurancePolicyDetail InsurancePolicyResult::getBillNumber() const
{
    return billNumber_;
}

void InsurancePolicyResult::setBillNumber(const InsurancePolicyDetail& value)
{
    billNumber_ = value;
    billNumberIsSet_ = true;
}

bool InsurancePolicyResult::billNumberIsSet() const
{
    return billNumberIsSet_;
}

void InsurancePolicyResult::unsetbillNumber()
{
    billNumberIsSet_ = false;
}

InsurancePolicyDetail InsurancePolicyResult::getCompany() const
{
    return company_;
}

void InsurancePolicyResult::setCompany(const InsurancePolicyDetail& value)
{
    company_ = value;
    companyIsSet_ = true;
}

bool InsurancePolicyResult::companyIsSet() const
{
    return companyIsSet_;
}

void InsurancePolicyResult::unsetcompany()
{
    companyIsSet_ = false;
}

InsurancePolicyDetail InsurancePolicyResult::getEffectiveDate() const
{
    return effectiveDate_;
}

void InsurancePolicyResult::setEffectiveDate(const InsurancePolicyDetail& value)
{
    effectiveDate_ = value;
    effectiveDateIsSet_ = true;
}

bool InsurancePolicyResult::effectiveDateIsSet() const
{
    return effectiveDateIsSet_;
}

void InsurancePolicyResult::unseteffectiveDate()
{
    effectiveDateIsSet_ = false;
}

InsurancePolicyDetail InsurancePolicyResult::getApplicantName() const
{
    return applicantName_;
}

void InsurancePolicyResult::setApplicantName(const InsurancePolicyDetail& value)
{
    applicantName_ = value;
    applicantNameIsSet_ = true;
}

bool InsurancePolicyResult::applicantNameIsSet() const
{
    return applicantNameIsSet_;
}

void InsurancePolicyResult::unsetapplicantName()
{
    applicantNameIsSet_ = false;
}

InsurancePolicyDetail InsurancePolicyResult::getApplicantSex() const
{
    return applicantSex_;
}

void InsurancePolicyResult::setApplicantSex(const InsurancePolicyDetail& value)
{
    applicantSex_ = value;
    applicantSexIsSet_ = true;
}

bool InsurancePolicyResult::applicantSexIsSet() const
{
    return applicantSexIsSet_;
}

void InsurancePolicyResult::unsetapplicantSex()
{
    applicantSexIsSet_ = false;
}

InsurancePolicyDetail InsurancePolicyResult::getApplicantBirthday() const
{
    return applicantBirthday_;
}

void InsurancePolicyResult::setApplicantBirthday(const InsurancePolicyDetail& value)
{
    applicantBirthday_ = value;
    applicantBirthdayIsSet_ = true;
}

bool InsurancePolicyResult::applicantBirthdayIsSet() const
{
    return applicantBirthdayIsSet_;
}

void InsurancePolicyResult::unsetapplicantBirthday()
{
    applicantBirthdayIsSet_ = false;
}

InsurancePolicyDetail InsurancePolicyResult::getApplicantIdType() const
{
    return applicantIdType_;
}

void InsurancePolicyResult::setApplicantIdType(const InsurancePolicyDetail& value)
{
    applicantIdType_ = value;
    applicantIdTypeIsSet_ = true;
}

bool InsurancePolicyResult::applicantIdTypeIsSet() const
{
    return applicantIdTypeIsSet_;
}

void InsurancePolicyResult::unsetapplicantIdType()
{
    applicantIdTypeIsSet_ = false;
}

InsurancePolicyDetail InsurancePolicyResult::getApplicantIdNumber() const
{
    return applicantIdNumber_;
}

void InsurancePolicyResult::setApplicantIdNumber(const InsurancePolicyDetail& value)
{
    applicantIdNumber_ = value;
    applicantIdNumberIsSet_ = true;
}

bool InsurancePolicyResult::applicantIdNumberIsSet() const
{
    return applicantIdNumberIsSet_;
}

void InsurancePolicyResult::unsetapplicantIdNumber()
{
    applicantIdNumberIsSet_ = false;
}

std::vector<InsurantItem>& InsurancePolicyResult::getInsurantList()
{
    return insurantList_;
}

void InsurancePolicyResult::setInsurantList(const std::vector<InsurantItem>& value)
{
    insurantList_ = value;
    insurantListIsSet_ = true;
}

bool InsurancePolicyResult::insurantListIsSet() const
{
    return insurantListIsSet_;
}

void InsurancePolicyResult::unsetinsurantList()
{
    insurantListIsSet_ = false;
}

std::vector<BeneficiaryItem>& InsurancePolicyResult::getBeneficiaryList()
{
    return beneficiaryList_;
}

void InsurancePolicyResult::setBeneficiaryList(const std::vector<BeneficiaryItem>& value)
{
    beneficiaryList_ = value;
    beneficiaryListIsSet_ = true;
}

bool InsurancePolicyResult::beneficiaryListIsSet() const
{
    return beneficiaryListIsSet_;
}

void InsurancePolicyResult::unsetbeneficiaryList()
{
    beneficiaryListIsSet_ = false;
}

std::vector<InsuranceItem>& InsurancePolicyResult::getInsuranceList()
{
    return insuranceList_;
}

void InsurancePolicyResult::setInsuranceList(const std::vector<InsuranceItem>& value)
{
    insuranceList_ = value;
    insuranceListIsSet_ = true;
}

bool InsurancePolicyResult::insuranceListIsSet() const
{
    return insuranceListIsSet_;
}

void InsurancePolicyResult::unsetinsuranceList()
{
    insuranceListIsSet_ = false;
}

}
}
}
}
}


