

#include "huaweicloud/eip/v2/model/NeutronListFloatingIpsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




NeutronListFloatingIpsRequest::NeutronListFloatingIpsRequest()
{
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    pageReverse_ = false;
    pageReverseIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    floatingIpAddress_ = "";
    floatingIpAddressIsSet_ = false;
    routerId_ = "";
    routerIdIsSet_ = false;
    portId_ = "";
    portIdIsSet_ = false;
    fixedIpAddress_ = "";
    fixedIpAddressIsSet_ = false;
    tenantId_ = "";
    tenantIdIsSet_ = false;
    floatingNetworkId_ = "";
    floatingNetworkIdIsSet_ = false;
}

NeutronListFloatingIpsRequest::~NeutronListFloatingIpsRequest() = default;

void NeutronListFloatingIpsRequest::validate()
{
}

web::json::value NeutronListFloatingIpsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(markerIsSet_) {
        val[utility::conversions::to_string_t("marker")] = ModelBase::toJson(marker_);
    }
    if(pageReverseIsSet_) {
        val[utility::conversions::to_string_t("page_reverse")] = ModelBase::toJson(pageReverse_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(floatingIpAddressIsSet_) {
        val[utility::conversions::to_string_t("floating_ip_address")] = ModelBase::toJson(floatingIpAddress_);
    }
    if(routerIdIsSet_) {
        val[utility::conversions::to_string_t("router_id")] = ModelBase::toJson(routerId_);
    }
    if(portIdIsSet_) {
        val[utility::conversions::to_string_t("port_id")] = ModelBase::toJson(portId_);
    }
    if(fixedIpAddressIsSet_) {
        val[utility::conversions::to_string_t("fixed_ip_address")] = ModelBase::toJson(fixedIpAddress_);
    }
    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenant_id")] = ModelBase::toJson(tenantId_);
    }
    if(floatingNetworkIdIsSet_) {
        val[utility::conversions::to_string_t("floating_network_id")] = ModelBase::toJson(floatingNetworkId_);
    }

    return val;
}

bool NeutronListFloatingIpsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("page_reverse"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("page_reverse"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageReverse(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("floating_ip_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("floating_ip_address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFloatingIpAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("router_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("router_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRouterId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("port_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPortId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fixed_ip_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fixed_ip_address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFixedIpAddress(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("floating_network_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("floating_network_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFloatingNetworkId(refVal);
        }
    }
    return ok;
}

int32_t NeutronListFloatingIpsRequest::getLimit() const
{
    return limit_;
}

void NeutronListFloatingIpsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool NeutronListFloatingIpsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void NeutronListFloatingIpsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string NeutronListFloatingIpsRequest::getMarker() const
{
    return marker_;
}

void NeutronListFloatingIpsRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool NeutronListFloatingIpsRequest::markerIsSet() const
{
    return markerIsSet_;
}

void NeutronListFloatingIpsRequest::unsetmarker()
{
    markerIsSet_ = false;
}

bool NeutronListFloatingIpsRequest::isPageReverse() const
{
    return pageReverse_;
}

void NeutronListFloatingIpsRequest::setPageReverse(bool value)
{
    pageReverse_ = value;
    pageReverseIsSet_ = true;
}

bool NeutronListFloatingIpsRequest::pageReverseIsSet() const
{
    return pageReverseIsSet_;
}

void NeutronListFloatingIpsRequest::unsetpageReverse()
{
    pageReverseIsSet_ = false;
}

std::string NeutronListFloatingIpsRequest::getId() const
{
    return id_;
}

void NeutronListFloatingIpsRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool NeutronListFloatingIpsRequest::idIsSet() const
{
    return idIsSet_;
}

void NeutronListFloatingIpsRequest::unsetid()
{
    idIsSet_ = false;
}

std::string NeutronListFloatingIpsRequest::getFloatingIpAddress() const
{
    return floatingIpAddress_;
}

void NeutronListFloatingIpsRequest::setFloatingIpAddress(const std::string& value)
{
    floatingIpAddress_ = value;
    floatingIpAddressIsSet_ = true;
}

bool NeutronListFloatingIpsRequest::floatingIpAddressIsSet() const
{
    return floatingIpAddressIsSet_;
}

void NeutronListFloatingIpsRequest::unsetfloatingIpAddress()
{
    floatingIpAddressIsSet_ = false;
}

std::string NeutronListFloatingIpsRequest::getRouterId() const
{
    return routerId_;
}

void NeutronListFloatingIpsRequest::setRouterId(const std::string& value)
{
    routerId_ = value;
    routerIdIsSet_ = true;
}

bool NeutronListFloatingIpsRequest::routerIdIsSet() const
{
    return routerIdIsSet_;
}

void NeutronListFloatingIpsRequest::unsetrouterId()
{
    routerIdIsSet_ = false;
}

std::string NeutronListFloatingIpsRequest::getPortId() const
{
    return portId_;
}

void NeutronListFloatingIpsRequest::setPortId(const std::string& value)
{
    portId_ = value;
    portIdIsSet_ = true;
}

bool NeutronListFloatingIpsRequest::portIdIsSet() const
{
    return portIdIsSet_;
}

void NeutronListFloatingIpsRequest::unsetportId()
{
    portIdIsSet_ = false;
}

std::string NeutronListFloatingIpsRequest::getFixedIpAddress() const
{
    return fixedIpAddress_;
}

void NeutronListFloatingIpsRequest::setFixedIpAddress(const std::string& value)
{
    fixedIpAddress_ = value;
    fixedIpAddressIsSet_ = true;
}

bool NeutronListFloatingIpsRequest::fixedIpAddressIsSet() const
{
    return fixedIpAddressIsSet_;
}

void NeutronListFloatingIpsRequest::unsetfixedIpAddress()
{
    fixedIpAddressIsSet_ = false;
}

std::string NeutronListFloatingIpsRequest::getTenantId() const
{
    return tenantId_;
}

void NeutronListFloatingIpsRequest::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool NeutronListFloatingIpsRequest::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void NeutronListFloatingIpsRequest::unsettenantId()
{
    tenantIdIsSet_ = false;
}

std::string NeutronListFloatingIpsRequest::getFloatingNetworkId() const
{
    return floatingNetworkId_;
}

void NeutronListFloatingIpsRequest::setFloatingNetworkId(const std::string& value)
{
    floatingNetworkId_ = value;
    floatingNetworkIdIsSet_ = true;
}

bool NeutronListFloatingIpsRequest::floatingNetworkIdIsSet() const
{
    return floatingNetworkIdIsSet_;
}

void NeutronListFloatingIpsRequest::unsetfloatingNetworkId()
{
    floatingNetworkIdIsSet_ = false;
}

}
}
}
}
}


