

#include "huaweicloud/identitycenterstore/v1/model/ImportExternalIdPCertificateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




ImportExternalIdPCertificateRequest::ImportExternalIdPCertificateRequest()
{
    identityStoreId_ = "";
    identityStoreIdIsSet_ = false;
    idpId_ = "";
    idpIdIsSet_ = false;
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    bodyIsSet_ = false;
}

ImportExternalIdPCertificateRequest::~ImportExternalIdPCertificateRequest() = default;

void ImportExternalIdPCertificateRequest::validate()
{
}

web::json::value ImportExternalIdPCertificateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(identityStoreIdIsSet_) {
        val[utility::conversions::to_string_t("identity_store_id")] = ModelBase::toJson(identityStoreId_);
    }
    if(idpIdIsSet_) {
        val[utility::conversions::to_string_t("idp_id")] = ModelBase::toJson(idpId_);
    }
    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ImportExternalIdPCertificateRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("idp_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("idp_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIdpId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ImportExternalIdPCertificateReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ImportExternalIdPCertificateRequest::getIdentityStoreId() const
{
    return identityStoreId_;
}

void ImportExternalIdPCertificateRequest::setIdentityStoreId(const std::string& value)
{
    identityStoreId_ = value;
    identityStoreIdIsSet_ = true;
}

bool ImportExternalIdPCertificateRequest::identityStoreIdIsSet() const
{
    return identityStoreIdIsSet_;
}

void ImportExternalIdPCertificateRequest::unsetidentityStoreId()
{
    identityStoreIdIsSet_ = false;
}

std::string ImportExternalIdPCertificateRequest::getIdpId() const
{
    return idpId_;
}

void ImportExternalIdPCertificateRequest::setIdpId(const std::string& value)
{
    idpId_ = value;
    idpIdIsSet_ = true;
}

bool ImportExternalIdPCertificateRequest::idpIdIsSet() const
{
    return idpIdIsSet_;
}

void ImportExternalIdPCertificateRequest::unsetidpId()
{
    idpIdIsSet_ = false;
}

std::string ImportExternalIdPCertificateRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void ImportExternalIdPCertificateRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool ImportExternalIdPCertificateRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void ImportExternalIdPCertificateRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

ImportExternalIdPCertificateReqBody ImportExternalIdPCertificateRequest::getBody() const
{
    return body_;
}

void ImportExternalIdPCertificateRequest::setBody(const ImportExternalIdPCertificateReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ImportExternalIdPCertificateRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ImportExternalIdPCertificateRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


