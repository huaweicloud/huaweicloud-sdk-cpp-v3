

#include "huaweicloud/ecs/v2/model/NovaServerInterfaceFixedIp.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




NovaServerInterfaceFixedIp::NovaServerInterfaceFixedIp()
{
    ipAddress_ = "";
    ipAddressIsSet_ = false;
    subnetId_ = "";
    subnetIdIsSet_ = false;
}

NovaServerInterfaceFixedIp::~NovaServerInterfaceFixedIp() = default;

void NovaServerInterfaceFixedIp::validate()
{
}

web::json::value NovaServerInterfaceFixedIp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ipAddressIsSet_) {
        val[utility::conversions::to_string_t("ip_address")] = ModelBase::toJson(ipAddress_);
    }
    if(subnetIdIsSet_) {
        val[utility::conversions::to_string_t("subnet_id")] = ModelBase::toJson(subnetId_);
    }

    return val;
}

bool NovaServerInterfaceFixedIp::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ip_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip_address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpAddress(refVal);
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
    return ok;
}


std::string NovaServerInterfaceFixedIp::getIpAddress() const
{
    return ipAddress_;
}

void NovaServerInterfaceFixedIp::setIpAddress(const std::string& value)
{
    ipAddress_ = value;
    ipAddressIsSet_ = true;
}

bool NovaServerInterfaceFixedIp::ipAddressIsSet() const
{
    return ipAddressIsSet_;
}

void NovaServerInterfaceFixedIp::unsetipAddress()
{
    ipAddressIsSet_ = false;
}

std::string NovaServerInterfaceFixedIp::getSubnetId() const
{
    return subnetId_;
}

void NovaServerInterfaceFixedIp::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool NovaServerInterfaceFixedIp::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void NovaServerInterfaceFixedIp::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

}
}
}
}
}


