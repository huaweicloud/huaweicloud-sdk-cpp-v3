

#include "huaweicloud/identitycenterstore/v1/model/DisableExternalIdPConfigurationForDirectoryRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




DisableExternalIdPConfigurationForDirectoryRequest::DisableExternalIdPConfigurationForDirectoryRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    identityStoreId_ = "";
    identityStoreIdIsSet_ = false;
    idpId_ = "";
    idpIdIsSet_ = false;
}

DisableExternalIdPConfigurationForDirectoryRequest::~DisableExternalIdPConfigurationForDirectoryRequest() = default;

void DisableExternalIdPConfigurationForDirectoryRequest::validate()
{
}

web::json::value DisableExternalIdPConfigurationForDirectoryRequest::toJson() const
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

    return val;
}
bool DisableExternalIdPConfigurationForDirectoryRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string DisableExternalIdPConfigurationForDirectoryRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void DisableExternalIdPConfigurationForDirectoryRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool DisableExternalIdPConfigurationForDirectoryRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void DisableExternalIdPConfigurationForDirectoryRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string DisableExternalIdPConfigurationForDirectoryRequest::getIdentityStoreId() const
{
    return identityStoreId_;
}

void DisableExternalIdPConfigurationForDirectoryRequest::setIdentityStoreId(const std::string& value)
{
    identityStoreId_ = value;
    identityStoreIdIsSet_ = true;
}

bool DisableExternalIdPConfigurationForDirectoryRequest::identityStoreIdIsSet() const
{
    return identityStoreIdIsSet_;
}

void DisableExternalIdPConfigurationForDirectoryRequest::unsetidentityStoreId()
{
    identityStoreIdIsSet_ = false;
}

std::string DisableExternalIdPConfigurationForDirectoryRequest::getIdpId() const
{
    return idpId_;
}

void DisableExternalIdPConfigurationForDirectoryRequest::setIdpId(const std::string& value)
{
    idpId_ = value;
    idpIdIsSet_ = true;
}

bool DisableExternalIdPConfigurationForDirectoryRequest::idpIdIsSet() const
{
    return idpIdIsSet_;
}

void DisableExternalIdPConfigurationForDirectoryRequest::unsetidpId()
{
    idpIdIsSet_ = false;
}

}
}
}
}
}


