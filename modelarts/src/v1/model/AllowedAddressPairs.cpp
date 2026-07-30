

#include "huaweicloud/modelarts/v1/model/AllowedAddressPairs.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




AllowedAddressPairs::AllowedAddressPairs()
{
    ipAddress_ = "";
    ipAddressIsSet_ = false;
    macAddress_ = "";
    macAddressIsSet_ = false;
}

AllowedAddressPairs::~AllowedAddressPairs() = default;

void AllowedAddressPairs::validate()
{
}

web::json::value AllowedAddressPairs::toJson() const
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
bool AllowedAddressPairs::fromJson(const web::json::value& val)
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


std::string AllowedAddressPairs::getIpAddress() const
{
    return ipAddress_;
}

void AllowedAddressPairs::setIpAddress(const std::string& value)
{
    ipAddress_ = value;
    ipAddressIsSet_ = true;
}

bool AllowedAddressPairs::ipAddressIsSet() const
{
    return ipAddressIsSet_;
}

void AllowedAddressPairs::unsetipAddress()
{
    ipAddressIsSet_ = false;
}

std::string AllowedAddressPairs::getMacAddress() const
{
    return macAddress_;
}

void AllowedAddressPairs::setMacAddress(const std::string& value)
{
    macAddress_ = value;
    macAddressIsSet_ = true;
}

bool AllowedAddressPairs::macAddressIsSet() const
{
    return macAddressIsSet_;
}

void AllowedAddressPairs::unsetmacAddress()
{
    macAddressIsSet_ = false;
}

}
}
}
}
}


