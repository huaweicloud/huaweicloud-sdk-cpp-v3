

#include "huaweicloud/iotda/v5/model/ServerCertificateDTO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ServerCertificateDTO::ServerCertificateDTO()
{
    serverCertificateId_ = "";
    serverCertificateIdIsSet_ = false;
    commonName_ = "";
    commonNameIsSet_ = false;
    effectiveDate_ = "";
    effectiveDateIsSet_ = false;
    expiryDate_ = "";
    expiryDateIsSet_ = false;
    certificateOwner_ = "";
    certificateOwnerIsSet_ = false;
    certificateIssuer_ = "";
    certificateIssuerIsSet_ = false;
}

ServerCertificateDTO::~ServerCertificateDTO() = default;

void ServerCertificateDTO::validate()
{
}

web::json::value ServerCertificateDTO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serverCertificateIdIsSet_) {
        val[utility::conversions::to_string_t("server_certificate_id")] = ModelBase::toJson(serverCertificateId_);
    }
    if(commonNameIsSet_) {
        val[utility::conversions::to_string_t("common_name")] = ModelBase::toJson(commonName_);
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
bool ServerCertificateDTO::fromJson(const web::json::value& val)
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


std::string ServerCertificateDTO::getServerCertificateId() const
{
    return serverCertificateId_;
}

void ServerCertificateDTO::setServerCertificateId(const std::string& value)
{
    serverCertificateId_ = value;
    serverCertificateIdIsSet_ = true;
}

bool ServerCertificateDTO::serverCertificateIdIsSet() const
{
    return serverCertificateIdIsSet_;
}

void ServerCertificateDTO::unsetserverCertificateId()
{
    serverCertificateIdIsSet_ = false;
}

std::string ServerCertificateDTO::getCommonName() const
{
    return commonName_;
}

void ServerCertificateDTO::setCommonName(const std::string& value)
{
    commonName_ = value;
    commonNameIsSet_ = true;
}

bool ServerCertificateDTO::commonNameIsSet() const
{
    return commonNameIsSet_;
}

void ServerCertificateDTO::unsetcommonName()
{
    commonNameIsSet_ = false;
}

std::string ServerCertificateDTO::getEffectiveDate() const
{
    return effectiveDate_;
}

void ServerCertificateDTO::setEffectiveDate(const std::string& value)
{
    effectiveDate_ = value;
    effectiveDateIsSet_ = true;
}

bool ServerCertificateDTO::effectiveDateIsSet() const
{
    return effectiveDateIsSet_;
}

void ServerCertificateDTO::unseteffectiveDate()
{
    effectiveDateIsSet_ = false;
}

std::string ServerCertificateDTO::getExpiryDate() const
{
    return expiryDate_;
}

void ServerCertificateDTO::setExpiryDate(const std::string& value)
{
    expiryDate_ = value;
    expiryDateIsSet_ = true;
}

bool ServerCertificateDTO::expiryDateIsSet() const
{
    return expiryDateIsSet_;
}

void ServerCertificateDTO::unsetexpiryDate()
{
    expiryDateIsSet_ = false;
}

std::string ServerCertificateDTO::getCertificateOwner() const
{
    return certificateOwner_;
}

void ServerCertificateDTO::setCertificateOwner(const std::string& value)
{
    certificateOwner_ = value;
    certificateOwnerIsSet_ = true;
}

bool ServerCertificateDTO::certificateOwnerIsSet() const
{
    return certificateOwnerIsSet_;
}

void ServerCertificateDTO::unsetcertificateOwner()
{
    certificateOwnerIsSet_ = false;
}

std::string ServerCertificateDTO::getCertificateIssuer() const
{
    return certificateIssuer_;
}

void ServerCertificateDTO::setCertificateIssuer(const std::string& value)
{
    certificateIssuer_ = value;
    certificateIssuerIsSet_ = true;
}

bool ServerCertificateDTO::certificateIssuerIsSet() const
{
    return certificateIssuerIsSet_;
}

void ServerCertificateDTO::unsetcertificateIssuer()
{
    certificateIssuerIsSet_ = false;
}

}
}
}
}
}


