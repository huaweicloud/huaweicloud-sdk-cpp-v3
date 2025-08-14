

#include "huaweicloud/identitycenterstore/v1/model/ListProvisioningTenantsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




ListProvisioningTenantsResponse::ListProvisioningTenantsResponse()
{
    provisioningTenantsIsSet_ = false;
}

ListProvisioningTenantsResponse::~ListProvisioningTenantsResponse() = default;

void ListProvisioningTenantsResponse::validate()
{
}

web::json::value ListProvisioningTenantsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(provisioningTenantsIsSet_) {
        val[utility::conversions::to_string_t("provisioning_tenants")] = ModelBase::toJson(provisioningTenants_);
    }

    return val;
}
bool ListProvisioningTenantsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("provisioning_tenants"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("provisioning_tenants"));
        if(!fieldValue.is_null())
        {
            std::vector<ProvisioningTenant> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProvisioningTenants(refVal);
        }
    }
    return ok;
}


std::vector<ProvisioningTenant>& ListProvisioningTenantsResponse::getProvisioningTenants()
{
    return provisioningTenants_;
}

void ListProvisioningTenantsResponse::setProvisioningTenants(const std::vector<ProvisioningTenant>& value)
{
    provisioningTenants_ = value;
    provisioningTenantsIsSet_ = true;
}

bool ListProvisioningTenantsResponse::provisioningTenantsIsSet() const
{
    return provisioningTenantsIsSet_;
}

void ListProvisioningTenantsResponse::unsetprovisioningTenants()
{
    provisioningTenantsIsSet_ = false;
}

}
}
}
}
}


