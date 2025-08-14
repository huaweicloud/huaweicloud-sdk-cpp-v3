

#include "huaweicloud/identitycenterstore/v1/model/DeleteProvisioningTenantRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




DeleteProvisioningTenantRequest::DeleteProvisioningTenantRequest()
{
    identityStoreId_ = "";
    identityStoreIdIsSet_ = false;
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
    tenantId_ = "";
    tenantIdIsSet_ = false;
}

DeleteProvisioningTenantRequest::~DeleteProvisioningTenantRequest() = default;

void DeleteProvisioningTenantRequest::validate()
{
}

web::json::value DeleteProvisioningTenantRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(identityStoreIdIsSet_) {
        val[utility::conversions::to_string_t("identity_store_id")] = ModelBase::toJson(identityStoreId_);
    }
    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }
    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenant_id")] = ModelBase::toJson(tenantId_);
    }

    return val;
}
bool DeleteProvisioningTenantRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("tenant_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tenant_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTenantId(refVal);
        }
    }
    return ok;
}


std::string DeleteProvisioningTenantRequest::getIdentityStoreId() const
{
    return identityStoreId_;
}

void DeleteProvisioningTenantRequest::setIdentityStoreId(const std::string& value)
{
    identityStoreId_ = value;
    identityStoreIdIsSet_ = true;
}

bool DeleteProvisioningTenantRequest::identityStoreIdIsSet() const
{
    return identityStoreIdIsSet_;
}

void DeleteProvisioningTenantRequest::unsetidentityStoreId()
{
    identityStoreIdIsSet_ = false;
}

std::string DeleteProvisioningTenantRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void DeleteProvisioningTenantRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool DeleteProvisioningTenantRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void DeleteProvisioningTenantRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

std::string DeleteProvisioningTenantRequest::getTenantId() const
{
    return tenantId_;
}

void DeleteProvisioningTenantRequest::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool DeleteProvisioningTenantRequest::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void DeleteProvisioningTenantRequest::unsettenantId()
{
    tenantIdIsSet_ = false;
}

}
}
}
}
}


