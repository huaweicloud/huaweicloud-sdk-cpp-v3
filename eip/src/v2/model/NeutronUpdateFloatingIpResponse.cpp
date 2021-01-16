

#include "huaweicloud/eip/v2/model/NeutronUpdateFloatingIpResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




NeutronUpdateFloatingIpResponse::NeutronUpdateFloatingIpResponse()
{
    floatingipIsSet_ = false;
}

NeutronUpdateFloatingIpResponse::~NeutronUpdateFloatingIpResponse() = default;

void NeutronUpdateFloatingIpResponse::validate()
{
}

web::json::value NeutronUpdateFloatingIpResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(floatingipIsSet_) {
        val[utility::conversions::to_string_t("floatingip")] = ModelBase::toJson(floatingip_);
    }

    return val;
}

bool NeutronUpdateFloatingIpResponse::fromJson(const web::json::value& val)
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


PostAndPutFloatingIpResp NeutronUpdateFloatingIpResponse::getFloatingip() const
{
    return floatingip_;
}

void NeutronUpdateFloatingIpResponse::setFloatingip(const PostAndPutFloatingIpResp& value)
{
    floatingip_ = value;
    floatingipIsSet_ = true;
}

bool NeutronUpdateFloatingIpResponse::floatingipIsSet() const
{
    return floatingipIsSet_;
}

void NeutronUpdateFloatingIpResponse::unsetfloatingip()
{
    floatingipIsSet_ = false;
}

}
}
}
}
}


