

#include "huaweicloud/cfw/v1/model/SubnetInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cfw {
namespace V1 {
namespace Model {




SubnetInfo::SubnetInfo()
{
    availabilityZone_ = "";
    availabilityZoneIsSet_ = false;
    cidr_ = "";
    cidrIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    gatewayIp_ = "";
    gatewayIpIsSet_ = false;
    vpcId_ = "";
    vpcIdIsSet_ = false;
    ipv6Enable_ = false;
    ipv6EnableIsSet_ = false;
}

SubnetInfo::~SubnetInfo() = default;

void SubnetInfo::validate()
{
}

web::json::value SubnetInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(availabilityZoneIsSet_) {
        val[utility::conversions::to_string_t("availability_zone")] = ModelBase::toJson(availabilityZone_);
    }
    if(cidrIsSet_) {
        val[utility::conversions::to_string_t("cidr")] = ModelBase::toJson(cidr_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(gatewayIpIsSet_) {
        val[utility::conversions::to_string_t("gateway_ip")] = ModelBase::toJson(gatewayIp_);
    }
    if(vpcIdIsSet_) {
        val[utility::conversions::to_string_t("vpc_id")] = ModelBase::toJson(vpcId_);
    }
    if(ipv6EnableIsSet_) {
        val[utility::conversions::to_string_t("ipv6_enable")] = ModelBase::toJson(ipv6Enable_);
    }

    return val;
}
bool SubnetInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("availability_zone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("availability_zone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvailabilityZone(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("vpc_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vpc_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVpcId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ipv6_enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ipv6_enable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpv6Enable(refVal);
        }
    }
    return ok;
}


std::string SubnetInfo::getAvailabilityZone() const
{
    return availabilityZone_;
}

void SubnetInfo::setAvailabilityZone(const std::string& value)
{
    availabilityZone_ = value;
    availabilityZoneIsSet_ = true;
}

bool SubnetInfo::availabilityZoneIsSet() const
{
    return availabilityZoneIsSet_;
}

void SubnetInfo::unsetavailabilityZone()
{
    availabilityZoneIsSet_ = false;
}

std::string SubnetInfo::getCidr() const
{
    return cidr_;
}

void SubnetInfo::setCidr(const std::string& value)
{
    cidr_ = value;
    cidrIsSet_ = true;
}

bool SubnetInfo::cidrIsSet() const
{
    return cidrIsSet_;
}

void SubnetInfo::unsetcidr()
{
    cidrIsSet_ = false;
}

std::string SubnetInfo::getName() const
{
    return name_;
}

void SubnetInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool SubnetInfo::nameIsSet() const
{
    return nameIsSet_;
}

void SubnetInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string SubnetInfo::getId() const
{
    return id_;
}

void SubnetInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool SubnetInfo::idIsSet() const
{
    return idIsSet_;
}

void SubnetInfo::unsetid()
{
    idIsSet_ = false;
}

std::string SubnetInfo::getGatewayIp() const
{
    return gatewayIp_;
}

void SubnetInfo::setGatewayIp(const std::string& value)
{
    gatewayIp_ = value;
    gatewayIpIsSet_ = true;
}

bool SubnetInfo::gatewayIpIsSet() const
{
    return gatewayIpIsSet_;
}

void SubnetInfo::unsetgatewayIp()
{
    gatewayIpIsSet_ = false;
}

std::string SubnetInfo::getVpcId() const
{
    return vpcId_;
}

void SubnetInfo::setVpcId(const std::string& value)
{
    vpcId_ = value;
    vpcIdIsSet_ = true;
}

bool SubnetInfo::vpcIdIsSet() const
{
    return vpcIdIsSet_;
}

void SubnetInfo::unsetvpcId()
{
    vpcIdIsSet_ = false;
}

bool SubnetInfo::isIpv6Enable() const
{
    return ipv6Enable_;
}

void SubnetInfo::setIpv6Enable(bool value)
{
    ipv6Enable_ = value;
    ipv6EnableIsSet_ = true;
}

bool SubnetInfo::ipv6EnableIsSet() const
{
    return ipv6EnableIsSet_;
}

void SubnetInfo::unsetipv6Enable()
{
    ipv6EnableIsSet_ = false;
}

}
}
}
}
}


