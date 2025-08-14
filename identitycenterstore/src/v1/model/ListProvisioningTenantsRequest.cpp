

#include "huaweicloud/identitycenterstore/v1/model/ListProvisioningTenantsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




ListProvisioningTenantsRequest::ListProvisioningTenantsRequest()
{
    identityStoreId_ = "";
    identityStoreIdIsSet_ = false;
    xSecurityToken_ = "";
    xSecurityTokenIsSet_ = false;
}

ListProvisioningTenantsRequest::~ListProvisioningTenantsRequest() = default;

void ListProvisioningTenantsRequest::validate()
{
}

web::json::value ListProvisioningTenantsRequest::toJson() const
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
bool ListProvisioningTenantsRequest::fromJson(const web::json::value& val)
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


std::string ListProvisioningTenantsRequest::getIdentityStoreId() const
{
    return identityStoreId_;
}

void ListProvisioningTenantsRequest::setIdentityStoreId(const std::string& value)
{
    identityStoreId_ = value;
    identityStoreIdIsSet_ = true;
}

bool ListProvisioningTenantsRequest::identityStoreIdIsSet() const
{
    return identityStoreIdIsSet_;
}

void ListProvisioningTenantsRequest::unsetidentityStoreId()
{
    identityStoreIdIsSet_ = false;
}

std::string ListProvisioningTenantsRequest::getXSecurityToken() const
{
    return xSecurityToken_;
}

void ListProvisioningTenantsRequest::setXSecurityToken(const std::string& value)
{
    xSecurityToken_ = value;
    xSecurityTokenIsSet_ = true;
}

bool ListProvisioningTenantsRequest::xSecurityTokenIsSet() const
{
    return xSecurityTokenIsSet_;
}

void ListProvisioningTenantsRequest::unsetxSecurityToken()
{
    xSecurityTokenIsSet_ = false;
}

}
}
}
}
}


