

#include "huaweicloud/identitycenterstore/v1/model/EnableExternalIdPConfigurationForDirectoryRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




EnableExternalIdPConfigurationForDirectoryRequest::EnableExternalIdPConfigurationForDirectoryRequest()
{
    identityStoreId_ = "";
    identityStoreIdIsSet_ = false;
    idpId_ = "";
    idpIdIsSet_ = false;
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
}

EnableExternalIdPConfigurationForDirectoryRequest::~EnableExternalIdPConfigurationForDirectoryRequest() = default;

void EnableExternalIdPConfigurationForDirectoryRequest::validate()
{
}

web::json::value EnableExternalIdPConfigurationForDirectoryRequest::toJson() const
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

    return val;
}
bool EnableExternalIdPConfigurationForDirectoryRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string EnableExternalIdPConfigurationForDirectoryRequest::getIdentityStoreId() const
{
    return identityStoreId_;
}

void EnableExternalIdPConfigurationForDirectoryRequest::setIdentityStoreId(const std::string& value)
{
    identityStoreId_ = value;
    identityStoreIdIsSet_ = true;
}

bool EnableExternalIdPConfigurationForDirectoryRequest::identityStoreIdIsSet() const
{
    return identityStoreIdIsSet_;
}

void EnableExternalIdPConfigurationForDirectoryRequest::unsetidentityStoreId()
{
    identityStoreIdIsSet_ = false;
}

std::string EnableExternalIdPConfigurationForDirectoryRequest::getIdpId() const
{
    return idpId_;
}

void EnableExternalIdPConfigurationForDirectoryRequest::setIdpId(const std::string& value)
{
    idpId_ = value;
    idpIdIsSet_ = true;
}

bool EnableExternalIdPConfigurationForDirectoryRequest::idpIdIsSet() const
{
    return idpIdIsSet_;
}

void EnableExternalIdPConfigurationForDirectoryRequest::unsetidpId()
{
    idpIdIsSet_ = false;
}

std::string EnableExternalIdPConfigurationForDirectoryRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void EnableExternalIdPConfigurationForDirectoryRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool EnableExternalIdPConfigurationForDirectoryRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void EnableExternalIdPConfigurationForDirectoryRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

}
}
}
}
}


