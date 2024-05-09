

#include "huaweicloud/ecs/v2/model/ChangeVpcNicBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ChangeVpcNicBody::ChangeVpcNicBody()
{
    portId_ = "";
    portIdIsSet_ = false;
    subnetId_ = "";
    subnetIdIsSet_ = false;
    securityGroupsIsSet_ = false;
    ipAddress_ = "";
    ipAddressIsSet_ = false;
}

ChangeVpcNicBody::~ChangeVpcNicBody() = default;

void ChangeVpcNicBody::validate()
{
}

web::json::value ChangeVpcNicBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(portIdIsSet_) {
        val[utility::conversions::to_string_t("port_id")] = ModelBase::toJson(portId_);
    }
    if(subnetIdIsSet_) {
        val[utility::conversions::to_string_t("subnet_id")] = ModelBase::toJson(subnetId_);
    }
    if(securityGroupsIsSet_) {
        val[utility::conversions::to_string_t("security_groups")] = ModelBase::toJson(securityGroups_);
    }
    if(ipAddressIsSet_) {
        val[utility::conversions::to_string_t("ip_address")] = ModelBase::toJson(ipAddress_);
    }

    return val;
}
bool ChangeVpcNicBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("port_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPortId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subnet_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subnet_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubnetId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("security_groups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_groups"));
        if(!fieldValue.is_null())
        {
            ChangeVpcSecurityGroups refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityGroups(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ip_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpAddress(refVal);
        }
    }
    return ok;
}


std::string ChangeVpcNicBody::getPortId() const
{
    return portId_;
}

void ChangeVpcNicBody::setPortId(const std::string& value)
{
    portId_ = value;
    portIdIsSet_ = true;
}

bool ChangeVpcNicBody::portIdIsSet() const
{
    return portIdIsSet_;
}

void ChangeVpcNicBody::unsetportId()
{
    portIdIsSet_ = false;
}

std::string ChangeVpcNicBody::getSubnetId() const
{
    return subnetId_;
}

void ChangeVpcNicBody::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool ChangeVpcNicBody::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void ChangeVpcNicBody::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

ChangeVpcSecurityGroups ChangeVpcNicBody::getSecurityGroups() const
{
    return securityGroups_;
}

void ChangeVpcNicBody::setSecurityGroups(const ChangeVpcSecurityGroups& value)
{
    securityGroups_ = value;
    securityGroupsIsSet_ = true;
}

bool ChangeVpcNicBody::securityGroupsIsSet() const
{
    return securityGroupsIsSet_;
}

void ChangeVpcNicBody::unsetsecurityGroups()
{
    securityGroupsIsSet_ = false;
}

std::string ChangeVpcNicBody::getIpAddress() const
{
    return ipAddress_;
}

void ChangeVpcNicBody::setIpAddress(const std::string& value)
{
    ipAddress_ = value;
    ipAddressIsSet_ = true;
}

bool ChangeVpcNicBody::ipAddressIsSet() const
{
    return ipAddressIsSet_;
}

void ChangeVpcNicBody::unsetipAddress()
{
    ipAddressIsSet_ = false;
}

}
}
}
}
}


