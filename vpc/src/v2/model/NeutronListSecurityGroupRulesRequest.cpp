

#include "huaweicloud/vpc/v2/model/NeutronListSecurityGroupRulesRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




NeutronListSecurityGroupRulesRequest::NeutronListSecurityGroupRulesRequest()
{
    limit_ = 0;
    limitIsSet_ = false;
    marker_ = "";
    markerIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    direction_ = "";
    directionIsSet_ = false;
    protocol_ = "";
    protocolIsSet_ = false;
    ethertype_ = "";
    ethertypeIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    remoteIpPrefix_ = "";
    remoteIpPrefixIsSet_ = false;
    remoteGroupId_ = "";
    remoteGroupIdIsSet_ = false;
    securityGroupId_ = "";
    securityGroupIdIsSet_ = false;
    portRangeMax_ = "";
    portRangeMaxIsSet_ = false;
    portRangeMin_ = "";
    portRangeMinIsSet_ = false;
    tenantId_ = "";
    tenantIdIsSet_ = false;
}

NeutronListSecurityGroupRulesRequest::~NeutronListSecurityGroupRulesRequest() = default;

void NeutronListSecurityGroupRulesRequest::validate()
{
}

web::json::value NeutronListSecurityGroupRulesRequest::toJson() const
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
    if(directionIsSet_) {
        val[utility::conversions::to_string_t("direction")] = ModelBase::toJson(direction_);
    }
    if(protocolIsSet_) {
        val[utility::conversions::to_string_t("protocol")] = ModelBase::toJson(protocol_);
    }
    if(ethertypeIsSet_) {
        val[utility::conversions::to_string_t("ethertype")] = ModelBase::toJson(ethertype_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(remoteIpPrefixIsSet_) {
        val[utility::conversions::to_string_t("remote_ip_prefix")] = ModelBase::toJson(remoteIpPrefix_);
    }
    if(remoteGroupIdIsSet_) {
        val[utility::conversions::to_string_t("remote_group_id")] = ModelBase::toJson(remoteGroupId_);
    }
    if(securityGroupIdIsSet_) {
        val[utility::conversions::to_string_t("security_group_id")] = ModelBase::toJson(securityGroupId_);
    }
    if(portRangeMaxIsSet_) {
        val[utility::conversions::to_string_t("port_range_max")] = ModelBase::toJson(portRangeMax_);
    }
    if(portRangeMinIsSet_) {
        val[utility::conversions::to_string_t("port_range_min")] = ModelBase::toJson(portRangeMin_);
    }
    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenant_id")] = ModelBase::toJson(tenantId_);
    }

    return val;
}

bool NeutronListSecurityGroupRulesRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("direction"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("direction"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDirection(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("protocol"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protocol"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtocol(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ethertype"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ethertype"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEthertype(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("remote_ip_prefix"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("remote_ip_prefix"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemoteIpPrefix(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("remote_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("remote_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemoteGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("security_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("port_range_max"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port_range_max"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPortRangeMax(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("port_range_min"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port_range_min"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPortRangeMin(refVal);
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


int32_t NeutronListSecurityGroupRulesRequest::getLimit() const
{
    return limit_;
}

void NeutronListSecurityGroupRulesRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool NeutronListSecurityGroupRulesRequest::limitIsSet() const
{
    return limitIsSet_;
}

void NeutronListSecurityGroupRulesRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string NeutronListSecurityGroupRulesRequest::getMarker() const
{
    return marker_;
}

void NeutronListSecurityGroupRulesRequest::setMarker(const std::string& value)
{
    marker_ = value;
    markerIsSet_ = true;
}

bool NeutronListSecurityGroupRulesRequest::markerIsSet() const
{
    return markerIsSet_;
}

void NeutronListSecurityGroupRulesRequest::unsetmarker()
{
    markerIsSet_ = false;
}

std::string NeutronListSecurityGroupRulesRequest::getId() const
{
    return id_;
}

void NeutronListSecurityGroupRulesRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool NeutronListSecurityGroupRulesRequest::idIsSet() const
{
    return idIsSet_;
}

void NeutronListSecurityGroupRulesRequest::unsetid()
{
    idIsSet_ = false;
}

std::string NeutronListSecurityGroupRulesRequest::getDirection() const
{
    return direction_;
}

void NeutronListSecurityGroupRulesRequest::setDirection(const std::string& value)
{
    direction_ = value;
    directionIsSet_ = true;
}

bool NeutronListSecurityGroupRulesRequest::directionIsSet() const
{
    return directionIsSet_;
}

void NeutronListSecurityGroupRulesRequest::unsetdirection()
{
    directionIsSet_ = false;
}

std::string NeutronListSecurityGroupRulesRequest::getProtocol() const
{
    return protocol_;
}

void NeutronListSecurityGroupRulesRequest::setProtocol(const std::string& value)
{
    protocol_ = value;
    protocolIsSet_ = true;
}

bool NeutronListSecurityGroupRulesRequest::protocolIsSet() const
{
    return protocolIsSet_;
}

void NeutronListSecurityGroupRulesRequest::unsetprotocol()
{
    protocolIsSet_ = false;
}

std::string NeutronListSecurityGroupRulesRequest::getEthertype() const
{
    return ethertype_;
}

void NeutronListSecurityGroupRulesRequest::setEthertype(const std::string& value)
{
    ethertype_ = value;
    ethertypeIsSet_ = true;
}

bool NeutronListSecurityGroupRulesRequest::ethertypeIsSet() const
{
    return ethertypeIsSet_;
}

void NeutronListSecurityGroupRulesRequest::unsetethertype()
{
    ethertypeIsSet_ = false;
}

std::string NeutronListSecurityGroupRulesRequest::getDescription() const
{
    return description_;
}

void NeutronListSecurityGroupRulesRequest::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool NeutronListSecurityGroupRulesRequest::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void NeutronListSecurityGroupRulesRequest::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string NeutronListSecurityGroupRulesRequest::getRemoteIpPrefix() const
{
    return remoteIpPrefix_;
}

void NeutronListSecurityGroupRulesRequest::setRemoteIpPrefix(const std::string& value)
{
    remoteIpPrefix_ = value;
    remoteIpPrefixIsSet_ = true;
}

bool NeutronListSecurityGroupRulesRequest::remoteIpPrefixIsSet() const
{
    return remoteIpPrefixIsSet_;
}

void NeutronListSecurityGroupRulesRequest::unsetremoteIpPrefix()
{
    remoteIpPrefixIsSet_ = false;
}

std::string NeutronListSecurityGroupRulesRequest::getRemoteGroupId() const
{
    return remoteGroupId_;
}

void NeutronListSecurityGroupRulesRequest::setRemoteGroupId(const std::string& value)
{
    remoteGroupId_ = value;
    remoteGroupIdIsSet_ = true;
}

bool NeutronListSecurityGroupRulesRequest::remoteGroupIdIsSet() const
{
    return remoteGroupIdIsSet_;
}

void NeutronListSecurityGroupRulesRequest::unsetremoteGroupId()
{
    remoteGroupIdIsSet_ = false;
}

std::string NeutronListSecurityGroupRulesRequest::getSecurityGroupId() const
{
    return securityGroupId_;
}

void NeutronListSecurityGroupRulesRequest::setSecurityGroupId(const std::string& value)
{
    securityGroupId_ = value;
    securityGroupIdIsSet_ = true;
}

bool NeutronListSecurityGroupRulesRequest::securityGroupIdIsSet() const
{
    return securityGroupIdIsSet_;
}

void NeutronListSecurityGroupRulesRequest::unsetsecurityGroupId()
{
    securityGroupIdIsSet_ = false;
}

std::string NeutronListSecurityGroupRulesRequest::getPortRangeMax() const
{
    return portRangeMax_;
}

void NeutronListSecurityGroupRulesRequest::setPortRangeMax(const std::string& value)
{
    portRangeMax_ = value;
    portRangeMaxIsSet_ = true;
}

bool NeutronListSecurityGroupRulesRequest::portRangeMaxIsSet() const
{
    return portRangeMaxIsSet_;
}

void NeutronListSecurityGroupRulesRequest::unsetportRangeMax()
{
    portRangeMaxIsSet_ = false;
}

std::string NeutronListSecurityGroupRulesRequest::getPortRangeMin() const
{
    return portRangeMin_;
}

void NeutronListSecurityGroupRulesRequest::setPortRangeMin(const std::string& value)
{
    portRangeMin_ = value;
    portRangeMinIsSet_ = true;
}

bool NeutronListSecurityGroupRulesRequest::portRangeMinIsSet() const
{
    return portRangeMinIsSet_;
}

void NeutronListSecurityGroupRulesRequest::unsetportRangeMin()
{
    portRangeMinIsSet_ = false;
}

std::string NeutronListSecurityGroupRulesRequest::getTenantId() const
{
    return tenantId_;
}

void NeutronListSecurityGroupRulesRequest::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool NeutronListSecurityGroupRulesRequest::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void NeutronListSecurityGroupRulesRequest::unsettenantId()
{
    tenantIdIsSet_ = false;
}

}
}
}
}
}


