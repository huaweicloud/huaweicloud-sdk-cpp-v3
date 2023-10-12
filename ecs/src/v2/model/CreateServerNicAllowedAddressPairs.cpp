

#include "huaweicloud/ecs/v2/model/CreateServerNicAllowedAddressPairs.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




CreateServerNicAllowedAddressPairs::CreateServerNicAllowedAddressPairs()
{
    ipAddress_ = "";
    ipAddressIsSet_ = false;
    macAddress_ = "";
    macAddressIsSet_ = false;
}

CreateServerNicAllowedAddressPairs::~CreateServerNicAllowedAddressPairs() = default;

void CreateServerNicAllowedAddressPairs::validate()
{
}

web::json::value CreateServerNicAllowedAddressPairs::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ipAddressIsSet_) {
        val[utility::conversions::to_string_t("ip_address")] = ModelBase::toJson(ipAddress_);
    }
    if(macAddressIsSet_) {
        val[utility::conversions::to_string_t("mac_address")] = ModelBase::toJson(macAddress_);
    }

    return val;
}
bool CreateServerNicAllowedAddressPairs::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("mac_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mac_address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMacAddress(refVal);
        }
    }
    return ok;
}


std::string CreateServerNicAllowedAddressPairs::getIpAddress() const
{
    return ipAddress_;
}

void CreateServerNicAllowedAddressPairs::setIpAddress(const std::string& value)
{
    ipAddress_ = value;
    ipAddressIsSet_ = true;
}

bool CreateServerNicAllowedAddressPairs::ipAddressIsSet() const
{
    return ipAddressIsSet_;
}

void CreateServerNicAllowedAddressPairs::unsetipAddress()
{
    ipAddressIsSet_ = false;
}

std::string CreateServerNicAllowedAddressPairs::getMacAddress() const
{
    return macAddress_;
}

void CreateServerNicAllowedAddressPairs::setMacAddress(const std::string& value)
{
    macAddress_ = value;
    macAddressIsSet_ = true;
}

bool CreateServerNicAllowedAddressPairs::macAddressIsSet() const
{
    return macAddressIsSet_;
}

void CreateServerNicAllowedAddressPairs::unsetmacAddress()
{
    macAddressIsSet_ = false;
}

}
}
}
}
}


