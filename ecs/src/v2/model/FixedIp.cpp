

#include "huaweicloud/ecs/v2/model/FixedIp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




FixedIp::FixedIp()
{
    subnetId_ = "";
    subnetIdIsSet_ = false;
    ipAddress_ = "";
    ipAddressIsSet_ = false;
}

FixedIp::~FixedIp() = default;

void FixedIp::validate()
{
}

web::json::value FixedIp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(subnetIdIsSet_) {
        val[utility::conversions::to_string_t("subnet_id")] = ModelBase::toJson(subnetId_);
    }
    if(ipAddressIsSet_) {
        val[utility::conversions::to_string_t("ip_address")] = ModelBase::toJson(ipAddress_);
    }

    return val;
}
bool FixedIp::fromJson(const web::json::value& val)
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


std::string FixedIp::getSubnetId() const
{
    return subnetId_;
}

void FixedIp::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool FixedIp::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void FixedIp::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

std::string FixedIp::getIpAddress() const
{
    return ipAddress_;
}

void FixedIp::setIpAddress(const std::string& value)
{
    ipAddress_ = value;
    ipAddressIsSet_ = true;
}

bool FixedIp::ipAddressIsSet() const
{
    return ipAddressIsSet_;
}

void FixedIp::unsetipAddress()
{
    ipAddressIsSet_ = false;
}

}
}
}
}
}


