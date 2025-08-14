

#include "huaweicloud/identitycenterstore/v1/model/UpdateExternalIdPConfigurationForDirectoryRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




UpdateExternalIdPConfigurationForDirectoryRequest::UpdateExternalIdPConfigurationForDirectoryRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    identityStoreId_ = "";
    identityStoreIdIsSet_ = false;
    idpId_ = "";
    idpIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateExternalIdPConfigurationForDirectoryRequest::~UpdateExternalIdPConfigurationForDirectoryRequest() = default;

void UpdateExternalIdPConfigurationForDirectoryRequest::validate()
{
}

web::json::value UpdateExternalIdPConfigurationForDirectoryRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }
    if(identityStoreIdIsSet_) {
        val[utility::conversions::to_string_t("identity_store_id")] = ModelBase::toJson(identityStoreId_);
    }
    if(idpIdIsSet_) {
        val[utility::conversions::to_string_t("idp_id")] = ModelBase::toJson(idpId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateExternalIdPConfigurationForDirectoryRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Security-Token"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Security-Token"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSecurityToken(refVal);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateExternalIdPConfigurationForDirectoryReqBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateExternalIdPConfigurationForDirectoryRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void UpdateExternalIdPConfigurationForDirectoryRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool UpdateExternalIdPConfigurationForDirectoryRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void UpdateExternalIdPConfigurationForDirectoryRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string UpdateExternalIdPConfigurationForDirectoryRequest::getIdentityStoreId() const
{
    return identityStoreId_;
}

void UpdateExternalIdPConfigurationForDirectoryRequest::setIdentityStoreId(const std::string& value)
{
    identityStoreId_ = value;
    identityStoreIdIsSet_ = true;
}

bool UpdateExternalIdPConfigurationForDirectoryRequest::identityStoreIdIsSet() const
{
    return identityStoreIdIsSet_;
}

void UpdateExternalIdPConfigurationForDirectoryRequest::unsetidentityStoreId()
{
    identityStoreIdIsSet_ = false;
}

std::string UpdateExternalIdPConfigurationForDirectoryRequest::getIdpId() const
{
    return idpId_;
}

void UpdateExternalIdPConfigurationForDirectoryRequest::setIdpId(const std::string& value)
{
    idpId_ = value;
    idpIdIsSet_ = true;
}

bool UpdateExternalIdPConfigurationForDirectoryRequest::idpIdIsSet() const
{
    return idpIdIsSet_;
}

void UpdateExternalIdPConfigurationForDirectoryRequest::unsetidpId()
{
    idpIdIsSet_ = false;
}

UpdateExternalIdPConfigurationForDirectoryReqBody UpdateExternalIdPConfigurationForDirectoryRequest::getBody() const
{
    return body_;
}

void UpdateExternalIdPConfigurationForDirectoryRequest::setBody(const UpdateExternalIdPConfigurationForDirectoryReqBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateExternalIdPConfigurationForDirectoryRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateExternalIdPConfigurationForDirectoryRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


