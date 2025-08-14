

#include "huaweicloud/identitycenterstore/v1/model/DeleteExternalIdPCertificateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




DeleteExternalIdPCertificateRequest::DeleteExternalIdPCertificateRequest()
{
    identityStoreId_ = "";
    identityStoreIdIsSet_ = false;
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    certificateId_ = "";
    certificateIdIsSet_ = false;
    idpId_ = "";
    idpIdIsSet_ = false;
}

DeleteExternalIdPCertificateRequest::~DeleteExternalIdPCertificateRequest() = default;

void DeleteExternalIdPCertificateRequest::validate()
{
}

web::json::value DeleteExternalIdPCertificateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(identityStoreIdIsSet_) {
        val[utility::conversions::to_string_t("identity_store_id")] = ModelBase::toJson(identityStoreId_);
    }
    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }
    if(certificateIdIsSet_) {
        val[utility::conversions::to_string_t("certificate_id")] = ModelBase::toJson(certificateId_);
    }
    if(idpIdIsSet_) {
        val[utility::conversions::to_string_t("idp_id")] = ModelBase::toJson(idpId_);
    }

    return val;
}
bool DeleteExternalIdPCertificateRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("identity_store_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("identity_store_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdentityStoreId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("X-Security-Token"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Security-Token"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSecurityToken(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("idp_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("idp_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdpId(refVal);
        }
    }
    return ok;
}


std::string DeleteExternalIdPCertificateRequest::getIdentityStoreId() const
{
    return identityStoreId_;
}

void DeleteExternalIdPCertificateRequest::setIdentityStoreId(const std::string& value)
{
    identityStoreId_ = value;
    identityStoreIdIsSet_ = true;
}

bool DeleteExternalIdPCertificateRequest::identityStoreIdIsSet() const
{
    return identityStoreIdIsSet_;
}

void DeleteExternalIdPCertificateRequest::unsetidentityStoreId()
{
    identityStoreIdIsSet_ = false;
}

std::string DeleteExternalIdPCertificateRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void DeleteExternalIdPCertificateRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool DeleteExternalIdPCertificateRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void DeleteExternalIdPCertificateRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string DeleteExternalIdPCertificateRequest::getCertificateId() const
{
    return certificateId_;
}

void DeleteExternalIdPCertificateRequest::setCertificateId(const std::string& value)
{
    certificateId_ = value;
    certificateIdIsSet_ = true;
}

bool DeleteExternalIdPCertificateRequest::certificateIdIsSet() const
{
    return certificateIdIsSet_;
}

void DeleteExternalIdPCertificateRequest::unsetcertificateId()
{
    certificateIdIsSet_ = false;
}

std::string DeleteExternalIdPCertificateRequest::getIdpId() const
{
    return idpId_;
}

void DeleteExternalIdPCertificateRequest::setIdpId(const std::string& value)
{
    idpId_ = value;
    idpIdIsSet_ = true;
}

bool DeleteExternalIdPCertificateRequest::idpIdIsSet() const
{
    return idpIdIsSet_;
}

void DeleteExternalIdPCertificateRequest::unsetidpId()
{
    idpIdIsSet_ = false;
}

}
}
}
}
}


