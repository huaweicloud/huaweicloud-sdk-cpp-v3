

#include "huaweicloud/vpc/v2/model/NeutronListSubnetsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronListSubnetsRequest::NeutronListSubnetsRequest()
{
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    cidr_ = "";
    cidrIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    enableDhcp_ = false;
    enableDhcpIsSet_ = false;
    networkId_ = "";
    networkIdIsSet_ = false;
    ipVersion_ = 0;
    ipVersionIsSet_ = false;
    gatewayIp_ = "";
    gatewayIpIsSet_ = false;
    tenantId_ = "";
    tenantIdIsSet_ = false;
}

NeutronListSubnetsRequest::~NeutronListSubnetsRequest() = default;

void NeutronListSubnetsRequest::validate()
{
}

web::json::value NeutronListSubnetsRequest::toJson() const
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
    if(cidrIsSet_) {
        val[utility::conversions::to_string_t("cidr")] = ModelBase::toJson(cidr_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(enableDhcpIsSet_) {
        val[utility::conversions::to_string_t("enable_dhcp")] = ModelBase::toJson(enableDhcp_);
    }
    if(networkIdIsSet_) {
        val[utility::conversions::to_string_t("network_id")] = ModelBase::toJson(networkId_);
    }
    if(ipVersionIsSet_) {
        val[utility::conversions::to_string_t("ip_version")] = ModelBase::toJson(ipVersion_);
    }
    if(gatewayIpIsSet_) {
        val[utility::conversions::to_string_t("gateway_ip")] = ModelBase::toJson(gatewayIp_);
    }
    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenant_id")] = ModelBase::toJson(tenantId_);
    }

    return val;
}

bool NeutronListSubnetsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("cidr"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cidr"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCidr(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("enable_dhcp"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_dhcp"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableDhcp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("network_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("network_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNetworkId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ip_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_version"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("gateway_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gateway_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGatewayIp(refVal);
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

int32_t NeutronListSubnetsRequest::getLimit() const
{
    return limit_;
}

void NeutronListSubnetsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool NeutronListSubnetsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void NeutronListSubnetsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string NeutronListSubnetsRequest::getMarker() const
{
    return marker_;
}

void NeutronListSubnetsRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool NeutronListSubnetsRequest::markerIsSet() const
{
    return markerIsSet_;
}

void NeutronListSubnetsRequest::unsetmarker()
{
    markerIsSet_ = false;
}

std::string NeutronListSubnetsRequest::getId() const
{
    return id_;
}

void NeutronListSubnetsRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool NeutronListSubnetsRequest::idIsSet() const
{
    return idIsSet_;
}

void NeutronListSubnetsRequest::unsetid()
{
    idIsSet_ = false;
}

std::string NeutronListSubnetsRequest::getCidr() const
{
    return cidr_;
}

void NeutronListSubnetsRequest::setCidr(const std::string& value)
{
    cidr_ = value;
    cidrIsSet_ = true;
}

bool NeutronListSubnetsRequest::cidrIsSet() const
{
    return cidrIsSet_;
}

void NeutronListSubnetsRequest::unsetcidr()
{
    cidrIsSet_ = false;
}

std::string NeutronListSubnetsRequest::getName() const
{
    return name_;
}

void NeutronListSubnetsRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool NeutronListSubnetsRequest::nameIsSet() const
{
    return nameIsSet_;
}

void NeutronListSubnetsRequest::unsetname()
{
    nameIsSet_ = false;
}

bool NeutronListSubnetsRequest::isEnableDhcp() const
{
    return enableDhcp_;
}

void NeutronListSubnetsRequest::setEnableDhcp(bool value)
{
    enableDhcp_ = value;
    enableDhcpIsSet_ = true;
}

bool NeutronListSubnetsRequest::enableDhcpIsSet() const
{
    return enableDhcpIsSet_;
}

void NeutronListSubnetsRequest::unsetenableDhcp()
{
    enableDhcpIsSet_ = false;
}

std::string NeutronListSubnetsRequest::getNetworkId() const
{
    return networkId_;
}

void NeutronListSubnetsRequest::setNetworkId(const std::string& value)
{
    networkId_ = value;
    networkIdIsSet_ = true;
}

bool NeutronListSubnetsRequest::networkIdIsSet() const
{
    return networkIdIsSet_;
}

void NeutronListSubnetsRequest::unsetnetworkId()
{
    networkIdIsSet_ = false;
}

int32_t NeutronListSubnetsRequest::getIpVersion() const
{
    return ipVersion_;
}

void NeutronListSubnetsRequest::setIpVersion(int32_t value)
{
    ipVersion_ = value;
    ipVersionIsSet_ = true;
}

bool NeutronListSubnetsRequest::ipVersionIsSet() const
{
    return ipVersionIsSet_;
}

void NeutronListSubnetsRequest::unsetipVersion()
{
    ipVersionIsSet_ = false;
}

std::string NeutronListSubnetsRequest::getGatewayIp() const
{
    return gatewayIp_;
}

void NeutronListSubnetsRequest::setGatewayIp(const std::string& value)
{
    gatewayIp_ = value;
    gatewayIpIsSet_ = true;
}

bool NeutronListSubnetsRequest::gatewayIpIsSet() const
{
    return gatewayIpIsSet_;
}

void NeutronListSubnetsRequest::unsetgatewayIp()
{
    gatewayIpIsSet_ = false;
}

std::string NeutronListSubnetsRequest::getTenantId() const
{
    return tenantId_;
}

void NeutronListSubnetsRequest::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool NeutronListSubnetsRequest::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void NeutronListSubnetsRequest::unsettenantId()
{
    tenantIdIsSet_ = false;
}

}
}
}
}
}


