

#include "huaweicloud/eip/v2/model/NeutronShowFloatingIpResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




NeutronShowFloatingIpResponse::NeutronShowFloatingIpResponse()
{
    floatingipIsSet_ = false;
}

NeutronShowFloatingIpResponse::~NeutronShowFloatingIpResponse() = default;

void NeutronShowFloatingIpResponse::validate()
{
}

web::json::value NeutronShowFloatingIpResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(floatingipIsSet_) {
        val[utility::conversions::to_string_t("floatingip")] = ModelBase::toJson(floatingip_);
    }

    return val;
}

bool NeutronShowFloatingIpResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("floatingip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("floatingip"));
        if(!fieldValue.is_null())
        {
            FloatingIpResp refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFloatingip(refVal);
        }
    }
    return ok;
}

FloatingIpResp NeutronShowFloatingIpResponse::getFloatingip() const
{
    return floatingip_;
}

void NeutronShowFloatingIpResponse::setFloatingip(const FloatingIpResp& value)
{
    floatingip_ = value;
    floatingipIsSet_ = true;
}

bool NeutronShowFloatingIpResponse::floatingipIsSet() const
{
    return floatingipIsSet_;
}

void NeutronShowFloatingIpResponse::unsetfloatingip()
{
    floatingipIsSet_ = false;
}

}
}
}
}
}


