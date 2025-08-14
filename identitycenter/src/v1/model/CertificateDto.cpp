

#include "huaweicloud/identitycenter/v1/model/CertificateDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




CertificateDto::CertificateDto()
{
    algorithm_ = "";
    algorithmIsSet_ = false;
    certificate_ = "";
    certificateIsSet_ = false;
    certificateId_ = "";
    certificateIdIsSet_ = false;
    expiryDate_ = 0L;
    expiryDateIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    keySize_ = "";
    keySizeIsSet_ = false;
    issueDate_ = 0L;
    issueDateIsSet_ = false;
}

CertificateDto::~CertificateDto() = default;

void CertificateDto::validate()
{
}

web::json::value CertificateDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(algorithmIsSet_) {
        val[utility::conversions::to_string_t("algorithm")] = ModelBase::toJson(algorithm_);
    }
    if(certificateIsSet_) {
        val[utility::conversions::to_string_t("certificate")] = ModelBase::toJson(certificate_);
    }
    if(certificateIdIsSet_) {
        val[utility::conversions::to_string_t("certificate_id")] = ModelBase::toJson(certificateId_);
    }
    if(expiryDateIsSet_) {
        val[utility::conversions::to_string_t("expiry_date")] = ModelBase::toJson(expiryDate_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(keySizeIsSet_) {
        val[utility::conversions::to_string_t("key_size")] = ModelBase::toJson(keySize_);
    }
    if(issueDateIsSet_) {
        val[utility::conversions::to_string_t("issue_date")] = ModelBase::toJson(issueDate_);
    }

    return val;
}
bool CertificateDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("algorithm"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("algorithm"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlgorithm(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("certificate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("certificate"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCertificate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("certificate_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("certificate_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCertificateId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expiry_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expiry_date"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpiryDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("key_size"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("key_size"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKeySize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("issue_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("issue_date"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIssueDate(refVal);
        }
    }
    return ok;
}


std::string CertificateDto::getAlgorithm() const
{
    return algorithm_;
}

void CertificateDto::setAlgorithm(const std::string& value)
{
    algorithm_ = value;
    algorithmIsSet_ = true;
}

bool CertificateDto::algorithmIsSet() const
{
    return algorithmIsSet_;
}

void CertificateDto::unsetalgorithm()
{
    algorithmIsSet_ = false;
}

std::string CertificateDto::getCertificate() const
{
    return certificate_;
}

void CertificateDto::setCertificate(const std::string& value)
{
    certificate_ = value;
    certificateIsSet_ = true;
}

bool CertificateDto::certificateIsSet() const
{
    return certificateIsSet_;
}

void CertificateDto::unsetcertificate()
{
    certificateIsSet_ = false;
}

std::string CertificateDto::getCertificateId() const
{
    return certificateId_;
}

void CertificateDto::setCertificateId(const std::string& value)
{
    certificateId_ = value;
    certificateIdIsSet_ = true;
}

bool CertificateDto::certificateIdIsSet() const
{
    return certificateIdIsSet_;
}

void CertificateDto::unsetcertificateId()
{
    certificateIdIsSet_ = false;
}

int64_t CertificateDto::getExpiryDate() const
{
    return expiryDate_;
}

void CertificateDto::setExpiryDate(int64_t value)
{
    expiryDate_ = value;
    expiryDateIsSet_ = true;
}

bool CertificateDto::expiryDateIsSet() const
{
    return expiryDateIsSet_;
}

void CertificateDto::unsetexpiryDate()
{
    expiryDateIsSet_ = false;
}

std::string CertificateDto::getStatus() const
{
    return status_;
}

void CertificateDto::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CertificateDto::statusIsSet() const
{
    return statusIsSet_;
}

void CertificateDto::unsetstatus()
{
    statusIsSet_ = false;
}

std::string CertificateDto::getKeySize() const
{
    return keySize_;
}

void CertificateDto::setKeySize(const std::string& value)
{
    keySize_ = value;
    keySizeIsSet_ = true;
}

bool CertificateDto::keySizeIsSet() const
{
    return keySizeIsSet_;
}

void CertificateDto::unsetkeySize()
{
    keySizeIsSet_ = false;
}

int64_t CertificateDto::getIssueDate() const
{
    return issueDate_;
}

void CertificateDto::setIssueDate(int64_t value)
{
    issueDate_ = value;
    issueDateIsSet_ = true;
}

bool CertificateDto::issueDateIsSet() const
{
    return issueDateIsSet_;
}

void CertificateDto::unsetissueDate()
{
    issueDateIsSet_ = false;
}

}
}
}
}
}


