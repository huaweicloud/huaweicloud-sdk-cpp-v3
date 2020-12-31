

#include "huaweicloud/ecs/model/BatchAddServerNicOption.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




BatchAddServerNicOption::BatchAddServerNicOption()
{
    subnetId_ = "";
    subnetIdIsSet_ = false;
    securityGroupsIsSet_ = false;
    ipAddress_ = "";
    ipAddressIsSet_ = false;
    ipv6Enable_ = false;
    ipv6EnableIsSet_ = false;
    ipv6BandwidthIsSet_ = false;
}

BatchAddServerNicOption::~BatchAddServerNicOption() = default;

void BatchAddServerNicOption::validate()
{
}

web::json::value BatchAddServerNicOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(subnetIdIsSet_) {
        val[utility::conversions::to_string_t("subnet_id")] = ModelBase::toJson(subnetId_);
    }
    if(securityGroupsIsSet_) {
        val[utility::conversions::to_string_t("security_groups")] = ModelBase::toJson(securityGroups_);
    }
    if(ipAddressIsSet_) {
        val[utility::conversions::to_string_t("ip_address")] = ModelBase::toJson(ipAddress_);
    }
    if(ipv6EnableIsSet_) {
        val[utility::conversions::to_string_t("ipv6_enable")] = ModelBase::toJson(ipv6Enable_);
    }
    if(ipv6BandwidthIsSet_) {
        val[utility::conversions::to_string_t("ipv6_bandwidth")] = ModelBase::toJson(ipv6Bandwidth_);
    }

    return val;
}

bool BatchAddServerNicOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
            std::vector<ServerNicSecurityGroup> refVal;
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
    if(val.has_field(utility::conversions::to_string_t("ipv6_enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ipv6_enable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpv6Enable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ipv6_bandwidth"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ipv6_bandwidth"));
        if(!fieldValue.is_null())
        {
            Ipv6Bandwidth refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpv6Bandwidth(refVal);
        }
    }
    return ok;
}


std::string BatchAddServerNicOption::getSubnetId() const
{
    return subnetId_;
}

void BatchAddServerNicOption::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool BatchAddServerNicOption::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void BatchAddServerNicOption::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

std::vector<ServerNicSecurityGroup>& BatchAddServerNicOption::getSecurityGroups()
{
    return securityGroups_;
}

void BatchAddServerNicOption::setSecurityGroups(const std::vector<ServerNicSecurityGroup>& value)
{
    securityGroups_ = value;
    securityGroupsIsSet_ = true;
}

bool BatchAddServerNicOption::securityGroupsIsSet() const
{
    return securityGroupsIsSet_;
}

void BatchAddServerNicOption::unsetsecurityGroups()
{
    securityGroupsIsSet_ = false;
}

std::string BatchAddServerNicOption::getIpAddress() const
{
    return ipAddress_;
}

void BatchAddServerNicOption::setIpAddress(const std::string& value)
{
    ipAddress_ = value;
    ipAddressIsSet_ = true;
}

bool BatchAddServerNicOption::ipAddressIsSet() const
{
    return ipAddressIsSet_;
}

void BatchAddServerNicOption::unsetipAddress()
{
    ipAddressIsSet_ = false;
}

bool BatchAddServerNicOption::isIpv6Enable() const
{
    return ipv6Enable_;
}

void BatchAddServerNicOption::setIpv6Enable(bool value)
{
    ipv6Enable_ = value;
    ipv6EnableIsSet_ = true;
}

bool BatchAddServerNicOption::ipv6EnableIsSet() const
{
    return ipv6EnableIsSet_;
}

void BatchAddServerNicOption::unsetipv6Enable()
{
    ipv6EnableIsSet_ = false;
}

Ipv6Bandwidth BatchAddServerNicOption::getIpv6Bandwidth() const
{
    return ipv6Bandwidth_;
}

void BatchAddServerNicOption::setIpv6Bandwidth(const Ipv6Bandwidth& value)
{
    ipv6Bandwidth_ = value;
    ipv6BandwidthIsSet_ = true;
}

bool BatchAddServerNicOption::ipv6BandwidthIsSet() const
{
    return ipv6BandwidthIsSet_;
}

void BatchAddServerNicOption::unsetipv6Bandwidth()
{
    ipv6BandwidthIsSet_ = false;
}

}
}
}
}
}


