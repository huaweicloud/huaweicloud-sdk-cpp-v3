

#include "huaweicloud/iotda/v5/model/ShowServerCertificateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ShowServerCertificateResponse::ShowServerCertificateResponse()
{
    serverCertificateId_ = "";
    serverCertificateIdIsSet_ = false;
    commonName_ = "";
    commonNameIsSet_ = false;
    certificatePem_ = "";
    certificatePemIsSet_ = false;
    effectiveDate_ = "";
    effectiveDateIsSet_ = false;
    expiryDate_ = "";
    expiryDateIsSet_ = false;
    certificateOwner_ = "";
    certificateOwnerIsSet_ = false;
    certificateIssuer_ = "";
    certificateIssuerIsSet_ = false;
}

ShowServerCertificateResponse::~ShowServerCertificateResponse() = default;

void ShowServerCertificateResponse::validate()
{
}

web::json::value ShowServerCertificateResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serverCertificateIdIsSet_) {
        val[utility::conversions::to_string_t("server_certificate_id")] = ModelBase::toJson(serverCertificateId_);
    }
    if(commonNameIsSet_) {
        val[utility::conversions::to_string_t("common_name")] = ModelBase::toJson(commonName_);
    }
    if(certificatePemIsSet_) {
        val[utility::conversions::to_string_t("certificate_pem")] = ModelBase::toJson(certificatePem_);
    }
    if(effectiveDateIsSet_) {
        val[utility::conversions::to_string_t("effective_date")] = ModelBase::toJson(effectiveDate_);
    }
    if(expiryDateIsSet_) {
        val[utility::conversions::to_string_t("expiry_date")] = ModelBase::toJson(expiryDate_);
    }
    if(certificateOwnerIsSet_) {
        val[utility::conversions::to_string_t("certificate_owner")] = ModelBase::toJson(certificateOwner_);
    }
    if(certificateIssuerIsSet_) {
        val[utility::conversions::to_string_t("certificate_issuer")] = ModelBase::toJson(certificateIssuer_);
    }

    return val;
}
bool ShowServerCertificateResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("server_certificate_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_certificate_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerCertificateId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("certificate_pem"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("certificate_pem"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCertificatePem(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("effective_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("effective_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEffectiveDate(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("certificate_owner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("certificate_owner"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCertificateOwner(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("certificate_issuer"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("certificate_issuer"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCertificateIssuer(refVal);
        }
    }
    return ok;
}


std::string ShowServerCertificateResponse::getServerCertificateId() const
{
    return serverCertificateId_;
}

void ShowServerCertificateResponse::setServerCertificateId(const std::string& value)
{
    serverCertificateId_ = value;
    serverCertificateIdIsSet_ = true;
}

bool ShowServerCertificateResponse::serverCertificateIdIsSet() const
{
    return serverCertificateIdIsSet_;
}

void ShowServerCertificateResponse::unsetserverCertificateId()
{
    serverCertificateIdIsSet_ = false;
}

std::string ShowServerCertificateResponse::getCommonName() const
{
    return commonName_;
}

void ShowServerCertificateResponse::setCommonName(const std::string& value)
{
    commonName_ = value;
    commonNameIsSet_ = true;
}

bool ShowServerCertificateResponse::commonNameIsSet() const
{
    return commonNameIsSet_;
}

void ShowServerCertificateResponse::unsetcommonName()
{
    commonNameIsSet_ = false;
}

std::string ShowServerCertificateResponse::getCertificatePem() const
{
    return certificatePem_;
}

void ShowServerCertificateResponse::setCertificatePem(const std::string& value)
{
    certificatePem_ = value;
    certificatePemIsSet_ = true;
}

bool ShowServerCertificateResponse::certificatePemIsSet() const
{
    return certificatePemIsSet_;
}

void ShowServerCertificateResponse::unsetcertificatePem()
{
    certificatePemIsSet_ = false;
}

std::string ShowServerCertificateResponse::getEffectiveDate() const
{
    return effectiveDate_;
}

void ShowServerCertificateResponse::setEffectiveDate(const std::string& value)
{
    effectiveDate_ = value;
    effectiveDateIsSet_ = true;
}

bool ShowServerCertificateResponse::effectiveDateIsSet() const
{
    return effectiveDateIsSet_;
}

void ShowServerCertificateResponse::unseteffectiveDate()
{
    effectiveDateIsSet_ = false;
}

std::string ShowServerCertificateResponse::getExpiryDate() const
{
    return expiryDate_;
}

void ShowServerCertificateResponse::setExpiryDate(const std::string& value)
{
    expiryDate_ = value;
    expiryDateIsSet_ = true;
}

bool ShowServerCertificateResponse::expiryDateIsSet() const
{
    return expiryDateIsSet_;
}

void ShowServerCertificateResponse::unsetexpiryDate()
{
    expiryDateIsSet_ = false;
}

std::string ShowServerCertificateResponse::getCertificateOwner() const
{
    return certificateOwner_;
}

void ShowServerCertificateResponse::setCertificateOwner(const std::string& value)
{
    certificateOwner_ = value;
    certificateOwnerIsSet_ = true;
}

bool ShowServerCertificateResponse::certificateOwnerIsSet() const
{
    return certificateOwnerIsSet_;
}

void ShowServerCertificateResponse::unsetcertificateOwner()
{
    certificateOwnerIsSet_ = false;
}

std::string ShowServerCertificateResponse::getCertificateIssuer() const
{
    return certificateIssuer_;
}

void ShowServerCertificateResponse::setCertificateIssuer(const std::string& value)
{
    certificateIssuer_ = value;
    certificateIssuerIsSet_ = true;
}

bool ShowServerCertificateResponse::certificateIssuerIsSet() const
{
    return certificateIssuerIsSet_;
}

void ShowServerCertificateResponse::unsetcertificateIssuer()
{
    certificateIssuerIsSet_ = false;
}

}
}
}
}
}


