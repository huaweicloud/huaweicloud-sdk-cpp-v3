

#include "huaweicloud/iotda/v5/model/DeviceCertificateSimple.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




DeviceCertificateSimple::DeviceCertificateSimple()
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
}

DeviceCertificateSimple::~DeviceCertificateSimple() = default;

void DeviceCertificateSimple::validate()
{
}

web::json::value DeviceCertificateSimple::toJson() const
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

    return val;
}
bool DeviceCertificateSimple::fromJson(const web::json::value& val)
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
    return ok;
}


std::string DeviceCertificateSimple::getCertificateId() const
{
    return certificateId_;
}

void DeviceCertificateSimple::setCertificateId(const std::string& value)
{
    certificateId_ = value;
    certificateIdIsSet_ = true;
}

bool DeviceCertificateSimple::certificateIdIsSet() const
{
    return certificateIdIsSet_;
}

void DeviceCertificateSimple::unsetcertificateId()
{
    certificateIdIsSet_ = false;
}

std::string DeviceCertificateSimple::getCommonName() const
{
    return commonName_;
}

void DeviceCertificateSimple::setCommonName(const std::string& value)
{
    commonName_ = value;
    commonNameIsSet_ = true;
}

bool DeviceCertificateSimple::commonNameIsSet() const
{
    return commonNameIsSet_;
}

void DeviceCertificateSimple::unsetcommonName()
{
    commonNameIsSet_ = false;
}

std::string DeviceCertificateSimple::getExpiryDate() const
{
    return expiryDate_;
}

void DeviceCertificateSimple::setExpiryDate(const std::string& value)
{
    expiryDate_ = value;
    expiryDateIsSet_ = true;
}

bool DeviceCertificateSimple::expiryDateIsSet() const
{
    return expiryDateIsSet_;
}

void DeviceCertificateSimple::unsetexpiryDate()
{
    expiryDateIsSet_ = false;
}

std::string DeviceCertificateSimple::getFingerprint() const
{
    return fingerprint_;
}

void DeviceCertificateSimple::setFingerprint(const std::string& value)
{
    fingerprint_ = value;
    fingerprintIsSet_ = true;
}

bool DeviceCertificateSimple::fingerprintIsSet() const
{
    return fingerprintIsSet_;
}

void DeviceCertificateSimple::unsetfingerprint()
{
    fingerprintIsSet_ = false;
}

std::string DeviceCertificateSimple::getStatus() const
{
    return status_;
}

void DeviceCertificateSimple::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool DeviceCertificateSimple::statusIsSet() const
{
    return statusIsSet_;
}

void DeviceCertificateSimple::unsetstatus()
{
    statusIsSet_ = false;
}

}
}
}
}
}


