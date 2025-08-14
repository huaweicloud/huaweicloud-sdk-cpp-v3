

#include "huaweicloud/identitycenterstore/v1/model/ProvisioningTenant.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenterstore {
namespace V1 {
namespace Model {




ProvisioningTenant::ProvisioningTenant()
{
    creationTime_ = 0.0;
    creationTimeIsSet_ = false;
    scimEndpoint_ = "";
    scimEndpointIsSet_ = false;
    tenantId_ = "";
    tenantIdIsSet_ = false;
}

ProvisioningTenant::~ProvisioningTenant() = default;

void ProvisioningTenant::validate()
{
}

web::json::value ProvisioningTenant::toJson() const
{
    web::json::value val = web::json::value::object();

    if(creationTimeIsSet_) {
        val[utility::conversions::to_string_t("creation_time")] = ModelBase::toJson(creationTime_);
    }
    if(scimEndpointIsSet_) {
        val[utility::conversions::to_string_t("scim_endpoint")] = ModelBase::toJson(scimEndpoint_);
    }
    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenant_id")] = ModelBase::toJson(tenantId_);
    }

    return val;
}
bool ProvisioningTenant::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("creation_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creation_time"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreationTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("scim_endpoint"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("scim_endpoint"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScimEndpoint(refVal);
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


double ProvisioningTenant::getCreationTime() const
{
    return creationTime_;
}

void ProvisioningTenant::setCreationTime(double value)
{
    creationTime_ = value;
    creationTimeIsSet_ = true;
}

bool ProvisioningTenant::creationTimeIsSet() const
{
    return creationTimeIsSet_;
}

void ProvisioningTenant::unsetcreationTime()
{
    creationTimeIsSet_ = false;
}

std::string ProvisioningTenant::getScimEndpoint() const
{
    return scimEndpoint_;
}

void ProvisioningTenant::setScimEndpoint(const std::string& value)
{
    scimEndpoint_ = value;
    scimEndpointIsSet_ = true;
}

bool ProvisioningTenant::scimEndpointIsSet() const
{
    return scimEndpointIsSet_;
}

void ProvisioningTenant::unsetscimEndpoint()
{
    scimEndpointIsSet_ = false;
}

std::string ProvisioningTenant::getTenantId() const
{
    return tenantId_;
}

void ProvisioningTenant::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool ProvisioningTenant::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void ProvisioningTenant::unsettenantId()
{
    tenantIdIsSet_ = false;
}

}
}
}
}
}


