

#include "huaweicloud/identitycenterstore/v1/model/DeleteExternalIdPConfigurationForDirectoryRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




DeleteExternalIdPConfigurationForDirectoryRequest::DeleteExternalIdPConfigurationForDirectoryRequest()
{
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    identityStoreId_ = "";
    identityStoreIdIsSet_ = false;
    idpId_ = "";
    idpIdIsSet_ = false;
}

DeleteExternalIdPConfigurationForDirectoryRequest::~DeleteExternalIdPConfigurationForDirectoryRequest() = default;

void DeleteExternalIdPConfigurationForDirectoryRequest::validate()
{
}

web::json::value DeleteExternalIdPConfigurationForDirectoryRequest::toJson() const
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
bool DeleteExternalIdPConfigurationForDirectoryRequest::fromJson(const web::json::value& val)
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


std::string DeleteExternalIdPConfigurationForDirectoryRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void DeleteExternalIdPConfigurationForDirectoryRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool DeleteExternalIdPConfigurationForDirectoryRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void DeleteExternalIdPConfigurationForDirectoryRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string DeleteExternalIdPConfigurationForDirectoryRequest::getIdentityStoreId() const
{
    return identityStoreId_;
}

void DeleteExternalIdPConfigurationForDirectoryRequest::setIdentityStoreId(const std::string& value)
{
    identityStoreId_ = value;
    identityStoreIdIsSet_ = true;
}

bool DeleteExternalIdPConfigurationForDirectoryRequest::identityStoreIdIsSet() const
{
    return identityStoreIdIsSet_;
}

void DeleteExternalIdPConfigurationForDirectoryRequest::unsetidentityStoreId()
{
    identityStoreIdIsSet_ = false;
}

std::string DeleteExternalIdPConfigurationForDirectoryRequest::getIdpId() const
{
    return idpId_;
}

void DeleteExternalIdPConfigurationForDirectoryRequest::setIdpId(const std::string& value)
{
    idpId_ = value;
    idpIdIsSet_ = true;
}

bool DeleteExternalIdPConfigurationForDirectoryRequest::idpIdIsSet() const
{
    return idpIdIsSet_;
}

void DeleteExternalIdPConfigurationForDirectoryRequest::unsetidpId()
{
    idpIdIsSet_ = false;
}

}
}
}
}
}


