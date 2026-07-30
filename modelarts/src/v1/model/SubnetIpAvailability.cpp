

#include "huaweicloud/modelarts/v1/model/SubnetIpAvailability.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




SubnetIpAvailability::SubnetIpAvailability()
{
    cidr_ = "";
    cidrIsSet_ = false;
    ipVersion_ = 0;
    ipVersionIsSet_ = false;
    usedIps_ = 0;
    usedIpsIsSet_ = false;
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

    if(cidrIsSet_) {
        val[utility::conversions::to_string_t("cidr")] = ModelBase::toJson(cidr_);
    }
    if(ipVersionIsSet_) {
        val[utility::conversions::to_string_t("ipVersion")] = ModelBase::toJson(ipVersion_);
    }
    if(usedIpsIsSet_) {
        val[utility::conversions::to_string_t("usedIps")] = ModelBase::toJson(usedIps_);
    }
    if(totalIpsIsSet_) {
        val[utility::conversions::to_string_t("totalIps")] = ModelBase::toJson(totalIps_);
    }

    return val;
}
bool SubnetIpAvailability::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cidr"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cidr"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCidr(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ipVersion"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ipVersion"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("usedIps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("usedIps"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsedIps(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("totalIps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("totalIps"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalIps(refVal);
        }
    }
    return ok;
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


