

#include "huaweicloud/vpc/v2/model/NeutronListNetworksRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronListNetworksRequest::NeutronListNetworksRequest()
{
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    shared_ = false;
    sharedIsSet_ = false;
    routerexternal_ = false;
    routerexternalIsSet_ = false;
    adminStateUp_ = false;
    adminStateUpIsSet_ = false;
    providernetworkType_ = "";
    providernetworkTypeIsSet_ = false;
    tenantId_ = "";
    tenantIdIsSet_ = false;
}

NeutronListNetworksRequest::~NeutronListNetworksRequest() = default;

void NeutronListNetworksRequest::validate()
{
}

web::json::value NeutronListNetworksRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(sharedIsSet_) {
        val[utility::conversions::to_string_t("shared")] = ModelBase::toJson(shared_);
    }
    if(routerexternalIsSet_) {
        val[utility::conversions::to_string_t("router:external")] = ModelBase::toJson(routerexternal_);
    }
    if(adminStateUpIsSet_) {
        val[utility::conversions::to_string_t("admin_state_up")] = ModelBase::toJson(adminStateUp_);
    }
    if(providernetworkTypeIsSet_) {
        val[utility::conversions::to_string_t("provider:network_type")] = ModelBase::toJson(providernetworkType_);
    }
    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenant_id")] = ModelBase::toJson(tenantId_);
    }

    return val;
}
bool NeutronListNetworksRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("marker"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("marker"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMarker(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("shared"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("shared"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setShared(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("router:external"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("router:external"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRouterexternal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("admin_state_up"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("admin_state_up"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAdminStateUp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("provider:network_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("provider:network_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProvidernetworkType(refVal);
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


int32_t NeutronListNetworksRequest::getLimit() const
{
    return limit_;
}

void NeutronListNetworksRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool NeutronListNetworksRequest::limitIsSet() const
{
    return limitIsSet_;
}

void NeutronListNetworksRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string NeutronListNetworksRequest::getMarker() const
{
    return marker_;
}

void NeutronListNetworksRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool NeutronListNetworksRequest::markerIsSet() const
{
    return markerIsSet_;
}

void NeutronListNetworksRequest::unsetmarker()
{
    markerIsSet_ = false;
}

std::string NeutronListNetworksRequest::getId() const
{
    return id_;
}

void NeutronListNetworksRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool NeutronListNetworksRequest::idIsSet() const
{
    return idIsSet_;
}

void NeutronListNetworksRequest::unsetid()
{
    idIsSet_ = false;
}

std::string NeutronListNetworksRequest::getName() const
{
    return name_;
}

void NeutronListNetworksRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool NeutronListNetworksRequest::nameIsSet() const
{
    return nameIsSet_;
}

void NeutronListNetworksRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string NeutronListNetworksRequest::getStatus() const
{
    return status_;
}

void NeutronListNetworksRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool NeutronListNetworksRequest::statusIsSet() const
{
    return statusIsSet_;
}

void NeutronListNetworksRequest::unsetstatus()
{
    statusIsSet_ = false;
}

bool NeutronListNetworksRequest::isShared() const
{
    return shared_;
}

void NeutronListNetworksRequest::setShared(bool value)
{
    shared_ = value;
    sharedIsSet_ = true;
}

bool NeutronListNetworksRequest::sharedIsSet() const
{
    return sharedIsSet_;
}

void NeutronListNetworksRequest::unsetshared()
{
    sharedIsSet_ = false;
}

bool NeutronListNetworksRequest::isRouterexternal() const
{
    return routerexternal_;
}

void NeutronListNetworksRequest::setRouterexternal(bool value)
{
    routerexternal_ = value;
    routerexternalIsSet_ = true;
}

bool NeutronListNetworksRequest::routerexternalIsSet() const
{
    return routerexternalIsSet_;
}

void NeutronListNetworksRequest::unsetrouterexternal()
{
    routerexternalIsSet_ = false;
}

bool NeutronListNetworksRequest::isAdminStateUp() const
{
    return adminStateUp_;
}

void NeutronListNetworksRequest::setAdminStateUp(bool value)
{
    adminStateUp_ = value;
    adminStateUpIsSet_ = true;
}

bool NeutronListNetworksRequest::adminStateUpIsSet() const
{
    return adminStateUpIsSet_;
}

void NeutronListNetworksRequest::unsetadminStateUp()
{
    adminStateUpIsSet_ = false;
}

std::string NeutronListNetworksRequest::getProvidernetworkType() const
{
    return providernetworkType_;
}

void NeutronListNetworksRequest::setProvidernetworkType(const std::string& value)
{
    providernetworkType_ = value;
    providernetworkTypeIsSet_ = true;
}

bool NeutronListNetworksRequest::providernetworkTypeIsSet() const
{
    return providernetworkTypeIsSet_;
}

void NeutronListNetworksRequest::unsetprovidernetworkType()
{
    providernetworkTypeIsSet_ = false;
}

std::string NeutronListNetworksRequest::getTenantId() const
{
    return tenantId_;
}

void NeutronListNetworksRequest::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool NeutronListNetworksRequest::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void NeutronListNetworksRequest::unsettenantId()
{
    tenantIdIsSet_ = false;
}

}
}
}
}
}


