

#include "huaweicloud/iotda/v5/model/CreateServerCertificateResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




CreateServerCertificateResponse::CreateServerCertificateResponse()
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

CreateServerCertificateResponse::~CreateServerCertificateResponse() = default;

void CreateServerCertificateResponse::validate()
{
}

web::json::value CreateServerCertificateResponse::toJson() const
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
bool CreateServerCertificateResponse::fromJson(const web::json::value& val)
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


std::string CreateServerCertificateResponse::getServerCertificateId() const
{
    return serverCertificateId_;
}

void CreateServerCertificateResponse::setServerCertificateId(const std::string& value)
{
    serverCertificateId_ = value;
    serverCertificateIdIsSet_ = true;
}

bool CreateServerCertificateResponse::serverCertificateIdIsSet() const
{
    return serverCertificateIdIsSet_;
}

void CreateServerCertificateResponse::unsetserverCertificateId()
{
    serverCertificateIdIsSet_ = false;
}

std::string CreateServerCertificateResponse::getCommonName() const
{
    return commonName_;
}

void CreateServerCertificateResponse::setCommonName(const std::string& value)
{
    commonName_ = value;
    commonNameIsSet_ = true;
}

bool CreateServerCertificateResponse::commonNameIsSet() const
{
    return commonNameIsSet_;
}

void CreateServerCertificateResponse::unsetcommonName()
{
    commonNameIsSet_ = false;
}

std::string CreateServerCertificateResponse::getEffectiveDate() const
{
    return effectiveDate_;
}

void CreateServerCertificateResponse::setEffectiveDate(const std::string& value)
{
    effectiveDate_ = value;
    effectiveDateIsSet_ = true;
}

bool CreateServerCertificateResponse::effectiveDateIsSet() const
{
    return effectiveDateIsSet_;
}

void CreateServerCertificateResponse::unseteffectiveDate()
{
    effectiveDateIsSet_ = false;
}

std::string CreateServerCertificateResponse::getExpiryDate() const
{
    return expiryDate_;
}

void CreateServerCertificateResponse::setExpiryDate(const std::string& value)
{
    expiryDate_ = value;
    expiryDateIsSet_ = true;
}

bool CreateServerCertificateResponse::expiryDateIsSet() const
{
    return expiryDateIsSet_;
}

void CreateServerCertificateResponse::unsetexpiryDate()
{
    expiryDateIsSet_ = false;
}

std::string CreateServerCertificateResponse::getCertificateOwner() const
{
    return certificateOwner_;
}

void CreateServerCertificateResponse::setCertificateOwner(const std::string& value)
{
    certificateOwner_ = value;
    certificateOwnerIsSet_ = true;
}

bool CreateServerCertificateResponse::certificateOwnerIsSet() const
{
    return certificateOwnerIsSet_;
}

void CreateServerCertificateResponse::unsetcertificateOwner()
{
    certificateOwnerIsSet_ = false;
}

std::string CreateServerCertificateResponse::getCertificateIssuer() const
{
    return certificateIssuer_;
}

void CreateServerCertificateResponse::setCertificateIssuer(const std::string& value)
{
    certificateIssuer_ = value;
    certificateIssuerIsSet_ = true;
}

bool CreateServerCertificateResponse::certificateIssuerIsSet() const
{
    return certificateIssuerIsSet_;
}

void CreateServerCertificateResponse::unsetcertificateIssuer()
{
    certificateIssuerIsSet_ = false;
}

}
}
}
}
}


