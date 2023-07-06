

#include "huaweicloud/vpc/v2/model/AllowedAddressPair.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




AllowedAddressPair::AllowedAddressPair()
{
    ipAddress_ = "";
    ipAddressIsSet_ = false;
    macAddress_ = "";
    macAddressIsSet_ = false;
}

AllowedAddressPair::~AllowedAddressPair() = default;

void AllowedAddressPair::validate()
{
}

web::json::value AllowedAddressPair::toJson() const
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

bool AllowedAddressPair::fromJson(const web::json::value& val)
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

std::string AllowedAddressPair::getIpAddress() const
{
    return ipAddress_;
}

void AllowedAddressPair::setIpAddress(const std::string& value)
{
    ipAddress_ = value;
    ipAddressIsSet_ = true;
}

bool AllowedAddressPair::ipAddressIsSet() const
{
    return ipAddressIsSet_;
}

void AllowedAddressPair::unsetipAddress()
{
    ipAddressIsSet_ = false;
}

std::string AllowedAddressPair::getMacAddress() const
{
    return macAddress_;
}

void AllowedAddressPair::setMacAddress(const std::string& value)
{
    macAddress_ = value;
    macAddressIsSet_ = true;
}

bool AllowedAddressPair::macAddressIsSet() const
{
    return macAddressIsSet_;
}

void AllowedAddressPair::unsetmacAddress()
{
    macAddressIsSet_ = false;
}

}
}
}
}
}


