

#include "huaweicloud/identitycenterstore/v1/model/CreateProvisioningTenantRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




CreateProvisioningTenantRequest::CreateProvisioningTenantRequest()
{
    identityStoreId_ = "";
    identityStoreIdIsSet_ = false;
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
}

CreateProvisioningTenantRequest::~CreateProvisioningTenantRequest() = default;

void CreateProvisioningTenantRequest::validate()
{
}

web::json::value CreateProvisioningTenantRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(identityStoreIdIsSet_) {
        val[utility::conversions::to_string_t("identity_store_id")] = ModelBase::toJson(identityStoreId_);
    }
    if(xSecurityTokenIsSet_) {
        val[utility::conversions::to_string_t("X-Security-Token")] = ModelBase::toJson(xSecurityToken_);
    }

    return val;
}
bool CreateProvisioningTenantRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string CreateProvisioningTenantRequest::getIdentityStoreId() const
{
    return identityStoreId_;
}

void CreateProvisioningTenantRequest::setIdentityStoreId(const std::string& value)
{
    identityStoreId_ = value;
    identityStoreIdIsSet_ = true;
}

bool CreateProvisioningTenantRequest::identityStoreIdIsSet() const
{
    return identityStoreIdIsSet_;
}

void CreateProvisioningTenantRequest::unsetidentityStoreId()
{
    identityStoreIdIsSet_ = false;
}

std::string CreateProvisioningTenantRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void CreateProvisioningTenantRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool CreateProvisioningTenantRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void CreateProvisioningTenantRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

}
}
}
}
}


