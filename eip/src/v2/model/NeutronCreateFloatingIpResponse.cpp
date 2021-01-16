

#include "huaweicloud/eip/v2/model/NeutronCreateFloatingIpResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




NeutronCreateFloatingIpResponse::NeutronCreateFloatingIpResponse()
{
    floatingipIsSet_ = false;
}

NeutronCreateFloatingIpResponse::~NeutronCreateFloatingIpResponse() = default;

void NeutronCreateFloatingIpResponse::validate()
{
}

web::json::value NeutronCreateFloatingIpResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(floatingipIsSet_) {
        val[utility::conversions::to_string_t("floatingip")] = ModelBase::toJson(floatingip_);
    }

    return val;
}

bool NeutronCreateFloatingIpResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("floatingip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("floatingip"));
        if(!fieldValue.is_null())
        {
            PostAndPutFloatingIpResp refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFloatingip(refVal);
        }
    }
    return ok;
}


PostAndPutFloatingIpResp NeutronCreateFloatingIpResponse::getFloatingip() const
{
    return floatingip_;
}

void NeutronCreateFloatingIpResponse::setFloatingip(const PostAndPutFloatingIpResp& value)
{
    floatingip_ = value;
    floatingipIsSet_ = true;
}

bool NeutronCreateFloatingIpResponse::floatingipIsSet() const
{
    return floatingipIsSet_;
}

void NeutronCreateFloatingIpResponse::unsetfloatingip()
{
    floatingipIsSet_ = false;
}

}
}
}
}
}


