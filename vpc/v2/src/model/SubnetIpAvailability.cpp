

#include "huaweicloud/vpc/model/SubnetIpAvailability.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




SubnetIpAvailability::SubnetIpAvailability()
{
    usedIps_ = 0;
    usedIpsIsSet_ = false;
    subnetId_ = "";
    subnetIdIsSet_ = false;
    subnetName_ = "";
    subnetNameIsSet_ = false;
    ipVersion_ = 0;
    ipVersionIsSet_ = false;
    cidr_ = "";
    cidrIsSet_ = false;
    totalIps_ = 0;
    totalIpsIsSet_ = false;
}

SubnetIpAvailability::~SubnetIpAvailability() = default;

void SubnetIpAvailability::validate()
{
}

web::json::value SubnetIpAvailability::toJson() const
{
    web::json::value val = web::json::value::object();

    if(usedIpsIsSet_) {
        val[utility::conversions::to_string_t("used_ips")] = ModelBase::toJson(usedIps_);
    }
    if(subnetIdIsSet_) {
        val[utility::conversions::to_string_t("subnet_id")] = ModelBase::toJson(subnetId_);
    }
    if(subnetNameIsSet_) {
        val[utility::conversions::to_string_t("subnet_name")] = ModelBase::toJson(subnetName_);
    }
    if(ipVersionIsSet_) {
        val[utility::conversions::to_string_t("ip_version")] = ModelBase::toJson(ipVersion_);
    }
    if(cidrIsSet_) {
        val[utility::conversions::to_string_t("cidr")] = ModelBase::toJson(cidr_);
    }
    if(totalIpsIsSet_) {
        val[utility::conversions::to_string_t("total_ips")] = ModelBase::toJson(totalIps_);
    }

    return val;
}

bool SubnetIpAvailability::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("used_ips"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("used_ips"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsedIps(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("subnet_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subnet_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubnetName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("cidr"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cidr"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCidr(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_ips"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_ips"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalIps(refVal);
        }
    }
    return ok;
}


int32_t SubnetIpAvailability::getUsedIps() const
{
    return usedIps_;
}

void SubnetIpAvailability::setUsedIps(int32_t value)
{
    usedIps_ = value;
    usedIpsIsSet_ = true;
}

bool SubnetIpAvailability::usedIpsIsSet() const
{
    return usedIpsIsSet_;
}

void SubnetIpAvailability::unsetusedIps()
{
    usedIpsIsSet_ = false;
}

std::string SubnetIpAvailability::getSubnetId() const
{
    return subnetId_;
}

void SubnetIpAvailability::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool SubnetIpAvailability::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void SubnetIpAvailability::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

std::string SubnetIpAvailability::getSubnetName() const
{
    return subnetName_;
}

void SubnetIpAvailability::setSubnetName(const std::string& value)
{
    subnetName_ = value;
    subnetNameIsSet_ = true;
}

bool SubnetIpAvailability::subnetNameIsSet() const
{
    return subnetNameIsSet_;
}

void SubnetIpAvailability::unsetsubnetName()
{
    subnetNameIsSet_ = false;
}

int32_t SubnetIpAvailability::getIpVersion() const
{
    return ipVersion_;
}

void SubnetIpAvailability::setIpVersion(int32_t value)
{
    ipVersion_ = value;
    ipVersionIsSet_ = true;
}

bool SubnetIpAvailability::ipVersionIsSet() const
{
    return ipVersionIsSet_;
}

void SubnetIpAvailability::unsetipVersion()
{
    ipVersionIsSet_ = false;
}

std::string SubnetIpAvailability::getCidr() const
{
    return cidr_;
}

void SubnetIpAvailability::setCidr(const std::string& value)
{
    cidr_ = value;
    cidrIsSet_ = true;
}

bool SubnetIpAvailability::cidrIsSet() const
{
    return cidrIsSet_;
}

void SubnetIpAvailability::unsetcidr()
{
    cidrIsSet_ = false;
}

int32_t SubnetIpAvailability::getTotalIps() const
{
    return totalIps_;
}

void SubnetIpAvailability::setTotalIps(int32_t value)
{
    totalIps_ = value;
    totalIpsIsSet_ = true;
}

bool SubnetIpAvailability::totalIpsIsSet() const
{
    return totalIpsIsSet_;
}

void SubnetIpAvailability::unsettotalIps()
{
    totalIpsIsSet_ = false;
}

}
}
}
}
}


