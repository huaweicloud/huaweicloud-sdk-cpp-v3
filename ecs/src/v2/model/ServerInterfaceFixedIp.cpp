

#include "huaweicloud/ecs/v2/model/ServerInterfaceFixedIp.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ServerInterfaceFixedIp::ServerInterfaceFixedIp()
{
    ipAddress_ = "";
    ipAddressIsSet_ = false;
    subnetId_ = "";
    subnetIdIsSet_ = false;
}

ServerInterfaceFixedIp::~ServerInterfaceFixedIp() = default;

void ServerInterfaceFixedIp::validate()
{
}

web::json::value ServerInterfaceFixedIp::toJson() const
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
bool ServerInterfaceFixedIp::fromJson(const web::json::value& val)
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


std::string ServerInterfaceFixedIp::getIpAddress() const
{
    return ipAddress_;
}

void ServerInterfaceFixedIp::setIpAddress(const std::string& value)
{
    ipAddress_ = value;
    ipAddressIsSet_ = true;
}

bool ServerInterfaceFixedIp::ipAddressIsSet() const
{
    return ipAddressIsSet_;
}

void ServerInterfaceFixedIp::unsetipAddress()
{
    ipAddressIsSet_ = false;
}

std::string ServerInterfaceFixedIp::getSubnetId() const
{
    return subnetId_;
}

void ServerInterfaceFixedIp::setSubnetId(const std::string& value)
{
    subnetId_ = value;
    subnetIdIsSet_ = true;
}

bool ServerInterfaceFixedIp::subnetIdIsSet() const
{
    return subnetIdIsSet_;
}

void ServerInterfaceFixedIp::unsetsubnetId()
{
    subnetIdIsSet_ = false;
}

}
}
}
}
}


