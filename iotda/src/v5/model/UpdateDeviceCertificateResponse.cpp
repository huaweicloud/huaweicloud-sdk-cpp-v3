

#include "huaweicloud/iotda/v5/model/UpdateDeviceCertificateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




UpdateDeviceCertificateResponse::UpdateDeviceCertificateResponse()
{
    certificateId_ = "";
    certificateIdIsSet_ = false;
    commonName_ = "";
    commonNameIsSet_ = false;
    expiryDate_ = "";
    expiryDateIsSet_ = false;
    fingerprint_ = "";
    fingerprintIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    certificatePem_ = "";
    certificatePemIsSet_ = false;
}

UpdateDeviceCertificateResponse::~UpdateDeviceCertificateResponse() = default;

void UpdateDeviceCertificateResponse::validate()
{
}

web::json::value UpdateDeviceCertificateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(certificateIdIsSet_) {
        val[utility::conversions::to_string_t("certificate_id")] = ModelBase::toJson(certificateId_);
    }
    if(commonNameIsSet_) {
        val[utility::conversions::to_string_t("common_name")] = ModelBase::toJson(commonName_);
    }
    if(expiryDateIsSet_) {
        val[utility::conversions::to_string_t("expiry_date")] = ModelBase::toJson(expiryDate_);
    }
    if(fingerprintIsSet_) {
        val[utility::conversions::to_string_t("fingerprint")] = ModelBase::toJson(fingerprint_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(certificatePemIsSet_) {
        val[utility::conversions::to_string_t("certificate_pem")] = ModelBase::toJson(certificatePem_);
    }

    return val;
}
bool UpdateDeviceCertificateResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("certificate_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("certificate_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCertificateId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("common_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("common_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCommonName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("expiry_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("expiry_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExpiryDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fingerprint"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fingerprint"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFingerprint(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("certificate_pem"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("certificate_pem"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCertificatePem(refVal);
        }
    }
    return ok;
}


std::string UpdateDeviceCertificateResponse::getCertificateId() const
{
    return certificateId_;
}

void UpdateDeviceCertificateResponse::setCertificateId(const std::string& value)
{
    certificateId_ = value;
    certificateIdIsSet_ = true;
}

bool UpdateDeviceCertificateResponse::certificateIdIsSet() const
{
    return certificateIdIsSet_;
}

void UpdateDeviceCertificateResponse::unsetcertificateId()
{
    certificateIdIsSet_ = false;
}

std::string UpdateDeviceCertificateResponse::getCommonName() const
{
    return commonName_;
}

void UpdateDeviceCertificateResponse::setCommonName(const std::string& value)
{
    commonName_ = value;
    commonNameIsSet_ = true;
}

bool UpdateDeviceCertificateResponse::commonNameIsSet() const
{
    return commonNameIsSet_;
}

void UpdateDeviceCertificateResponse::unsetcommonName()
{
    commonNameIsSet_ = false;
}

std::string UpdateDeviceCertificateResponse::getExpiryDate() const
{
    return expiryDate_;
}

void UpdateDeviceCertificateResponse::setExpiryDate(const std::string& value)
{
    expiryDate_ = value;
    expiryDateIsSet_ = true;
}

bool UpdateDeviceCertificateResponse::expiryDateIsSet() const
{
    return expiryDateIsSet_;
}

void UpdateDeviceCertificateResponse::unsetexpiryDate()
{
    expiryDateIsSet_ = false;
}

std::string UpdateDeviceCertificateResponse::getFingerprint() const
{
    return fingerprint_;
}

void UpdateDeviceCertificateResponse::setFingerprint(const std::string& value)
{
    fingerprint_ = value;
    fingerprintIsSet_ = true;
}

bool UpdateDeviceCertificateResponse::fingerprintIsSet() const
{
    return fingerprintIsSet_;
}

void UpdateDeviceCertificateResponse::unsetfingerprint()
{
    fingerprintIsSet_ = false;
}

std::string UpdateDeviceCertificateResponse::getStatus() const
{
    return status_;
}

void UpdateDeviceCertificateResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool UpdateDeviceCertificateResponse::statusIsSet() const
{
    return statusIsSet_;
}

void UpdateDeviceCertificateResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string UpdateDeviceCertificateResponse::getCertificatePem() const
{
    return certificatePem_;
}

void UpdateDeviceCertificateResponse::setCertificatePem(const std::string& value)
{
    certificatePem_ = value;
    certificatePemIsSet_ = true;
}

bool UpdateDeviceCertificateResponse::certificatePemIsSet() const
{
    return certificatePemIsSet_;
}

void UpdateDeviceCertificateResponse::unsetcertificatePem()
{
    certificatePemIsSet_ = false;
}

}
}
}
}
}


