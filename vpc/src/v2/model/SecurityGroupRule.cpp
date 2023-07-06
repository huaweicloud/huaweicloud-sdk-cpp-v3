

#include "huaweicloud/vpc/v2/model/SecurityGroupRule.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




SecurityGroupRule::SecurityGroupRule()
{
    id_ = "";
    idIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    securityGroupId_ = "";
    securityGroupIdIsSet_ = false;
    direction_ = "";
    directionIsSet_ = false;
    ethertype_ = "";
    ethertypeIsSet_ = false;
    protocol_ = "";
    protocolIsSet_ = false;
    portRangeMin_ = 0;
    portRangeMinIsSet_ = false;
    portRangeMax_ = 0;
    portRangeMaxIsSet_ = false;
    remoteIpPrefix_ = "";
    remoteIpPrefixIsSet_ = false;
    remoteGroupId_ = "";
    remoteGroupIdIsSet_ = false;
    remoteAddressGroupId_ = "";
    remoteAddressGroupIdIsSet_ = false;
    tenantId_ = "";
    tenantIdIsSet_ = false;
}

SecurityGroupRule::~SecurityGroupRule() = default;

void SecurityGroupRule::validate()
{
}

web::json::value SecurityGroupRule::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(securityGroupIdIsSet_) {
        val[utility::conversions::to_string_t("security_group_id")] = ModelBase::toJson(securityGroupId_);
    }
    if(directionIsSet_) {
        val[utility::conversions::to_string_t("direction")] = ModelBase::toJson(direction_);
    }
    if(ethertypeIsSet_) {
        val[utility::conversions::to_string_t("ethertype")] = ModelBase::toJson(ethertype_);
    }
    if(protocolIsSet_) {
        val[utility::conversions::to_string_t("protocol")] = ModelBase::toJson(protocol_);
    }
    if(portRangeMinIsSet_) {
        val[utility::conversions::to_string_t("port_range_min")] = ModelBase::toJson(portRangeMin_);
    }
    if(portRangeMaxIsSet_) {
        val[utility::conversions::to_string_t("port_range_max")] = ModelBase::toJson(portRangeMax_);
    }
    if(remoteIpPrefixIsSet_) {
        val[utility::conversions::to_string_t("remote_ip_prefix")] = ModelBase::toJson(remoteIpPrefix_);
    }
    if(remoteGroupIdIsSet_) {
        val[utility::conversions::to_string_t("remote_group_id")] = ModelBase::toJson(remoteGroupId_);
    }
    if(remoteAddressGroupIdIsSet_) {
        val[utility::conversions::to_string_t("remote_address_group_id")] = ModelBase::toJson(remoteAddressGroupId_);
    }
    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenant_id")] = ModelBase::toJson(tenantId_);
    }

    return val;
}

bool SecurityGroupRule::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("security_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityGroupId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("ethertype"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ethertype"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEthertype(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("port_range_min"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port_range_min"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPortRangeMin(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("port_range_max"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port_range_max"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPortRangeMax(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("remote_address_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("remote_address_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemoteAddressGroupId(refVal);
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

std::string SecurityGroupRule::getId() const
{
    return id_;
}

void SecurityGroupRule::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool SecurityGroupRule::idIsSet() const
{
    return idIsSet_;
}

void SecurityGroupRule::unsetid()
{
    idIsSet_ = false;
}

std::string SecurityGroupRule::getDescription() const
{
    return description_;
}

void SecurityGroupRule::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool SecurityGroupRule::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void SecurityGroupRule::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string SecurityGroupRule::getSecurityGroupId() const
{
    return securityGroupId_;
}

void SecurityGroupRule::setSecurityGroupId(const std::string& value)
{
    securityGroupId_ = value;
    securityGroupIdIsSet_ = true;
}

bool SecurityGroupRule::securityGroupIdIsSet() const
{
    return securityGroupIdIsSet_;
}

void SecurityGroupRule::unsetsecurityGroupId()
{
    securityGroupIdIsSet_ = false;
}

std::string SecurityGroupRule::getDirection() const
{
    return direction_;
}

void SecurityGroupRule::setDirection(const std::string& value)
{
    direction_ = value;
    directionIsSet_ = true;
}

bool SecurityGroupRule::directionIsSet() const
{
    return directionIsSet_;
}

void SecurityGroupRule::unsetdirection()
{
    directionIsSet_ = false;
}

std::string SecurityGroupRule::getEthertype() const
{
    return ethertype_;
}

void SecurityGroupRule::setEthertype(const std::string& value)
{
    ethertype_ = value;
    ethertypeIsSet_ = true;
}

bool SecurityGroupRule::ethertypeIsSet() const
{
    return ethertypeIsSet_;
}

void SecurityGroupRule::unsetethertype()
{
    ethertypeIsSet_ = false;
}

std::string SecurityGroupRule::getProtocol() const
{
    return protocol_;
}

void SecurityGroupRule::setProtocol(const std::string& value)
{
    protocol_ = value;
    protocolIsSet_ = true;
}

bool SecurityGroupRule::protocolIsSet() const
{
    return protocolIsSet_;
}

void SecurityGroupRule::unsetprotocol()
{
    protocolIsSet_ = false;
}

int32_t SecurityGroupRule::getPortRangeMin() const
{
    return portRangeMin_;
}

void SecurityGroupRule::setPortRangeMin(int32_t value)
{
    portRangeMin_ = value;
    portRangeMinIsSet_ = true;
}

bool SecurityGroupRule::portRangeMinIsSet() const
{
    return portRangeMinIsSet_;
}

void SecurityGroupRule::unsetportRangeMin()
{
    portRangeMinIsSet_ = false;
}

int32_t SecurityGroupRule::getPortRangeMax() const
{
    return portRangeMax_;
}

void SecurityGroupRule::setPortRangeMax(int32_t value)
{
    portRangeMax_ = value;
    portRangeMaxIsSet_ = true;
}

bool SecurityGroupRule::portRangeMaxIsSet() const
{
    return portRangeMaxIsSet_;
}

void SecurityGroupRule::unsetportRangeMax()
{
    portRangeMaxIsSet_ = false;
}

std::string SecurityGroupRule::getRemoteIpPrefix() const
{
    return remoteIpPrefix_;
}

void SecurityGroupRule::setRemoteIpPrefix(const std::string& value)
{
    remoteIpPrefix_ = value;
    remoteIpPrefixIsSet_ = true;
}

bool SecurityGroupRule::remoteIpPrefixIsSet() const
{
    return remoteIpPrefixIsSet_;
}

void SecurityGroupRule::unsetremoteIpPrefix()
{
    remoteIpPrefixIsSet_ = false;
}

std::string SecurityGroupRule::getRemoteGroupId() const
{
    return remoteGroupId_;
}

void SecurityGroupRule::setRemoteGroupId(const std::string& value)
{
    remoteGroupId_ = value;
    remoteGroupIdIsSet_ = true;
}

bool SecurityGroupRule::remoteGroupIdIsSet() const
{
    return remoteGroupIdIsSet_;
}

void SecurityGroupRule::unsetremoteGroupId()
{
    remoteGroupIdIsSet_ = false;
}

std::string SecurityGroupRule::getRemoteAddressGroupId() const
{
    return remoteAddressGroupId_;
}

void SecurityGroupRule::setRemoteAddressGroupId(const std::string& value)
{
    remoteAddressGroupId_ = value;
    remoteAddressGroupIdIsSet_ = true;
}

bool SecurityGroupRule::remoteAddressGroupIdIsSet() const
{
    return remoteAddressGroupIdIsSet_;
}

void SecurityGroupRule::unsetremoteAddressGroupId()
{
    remoteAddressGroupIdIsSet_ = false;
}

std::string SecurityGroupRule::getTenantId() const
{
    return tenantId_;
}

void SecurityGroupRule::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool SecurityGroupRule::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void SecurityGroupRule::unsettenantId()
{
    tenantIdIsSet_ = false;
}

}
}
}
}
}


