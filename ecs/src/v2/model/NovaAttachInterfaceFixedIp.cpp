

#include "huaweicloud/ecs/v2/model/NovaAttachInterfaceFixedIp.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




NovaAttachInterfaceFixedIp::NovaAttachInterfaceFixedIp()
{
    ipAddress_ = "";
    ipAddressIsSet_ = false;
}

NovaAttachInterfaceFixedIp::~NovaAttachInterfaceFixedIp() = default;

void NovaAttachInterfaceFixedIp::validate()
{
}

web::json::value NovaAttachInterfaceFixedIp::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ipAddressIsSet_) {
        val[utility::conversions::to_string_t("ip_address")] = ModelBase::toJson(ipAddress_);
    }

    return val;
}

bool NovaAttachInterfaceFixedIp::fromJson(const web::json::value& val)
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
    return ok;
}


std::string NovaAttachInterfaceFixedIp::getIpAddress() const
{
    return ipAddress_;
}

void NovaAttachInterfaceFixedIp::setIpAddress(const std::string& value)
{
    ipAddress_ = value;
    ipAddressIsSet_ = true;
}

bool NovaAttachInterfaceFixedIp::ipAddressIsSet() const
{
    return ipAddressIsSet_;
}

void NovaAttachInterfaceFixedIp::unsetipAddress()
{
    ipAddressIsSet_ = false;
}

}
}
}
}
}


