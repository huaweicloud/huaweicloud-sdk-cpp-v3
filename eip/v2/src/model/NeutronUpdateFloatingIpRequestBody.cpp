

#include "huaweicloud/eip/model/NeutronUpdateFloatingIpRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




NeutronUpdateFloatingIpRequestBody::NeutronUpdateFloatingIpRequestBody()
{
    floatingipIsSet_ = false;
}

NeutronUpdateFloatingIpRequestBody::~NeutronUpdateFloatingIpRequestBody() = default;

void NeutronUpdateFloatingIpRequestBody::validate()
{
}

web::json::value NeutronUpdateFloatingIpRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(floatingipIsSet_) {
        val[utility::conversions::to_string_t("floatingip")] = ModelBase::toJson(floatingip_);
    }

    return val;
}

bool NeutronUpdateFloatingIpRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("floatingip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("floatingip"));
        if(!fieldValue.is_null())
        {
            UpdateFloatingIpOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFloatingip(refVal);
        }
    }
    return ok;
}


UpdateFloatingIpOption NeutronUpdateFloatingIpRequestBody::getFloatingip() const
{
    return floatingip_;
}

void NeutronUpdateFloatingIpRequestBody::setFloatingip(const UpdateFloatingIpOption& value)
{
    floatingip_ = value;
    floatingipIsSet_ = true;
}

bool NeutronUpdateFloatingIpRequestBody::floatingipIsSet() const
{
    return floatingipIsSet_;
}

void NeutronUpdateFloatingIpRequestBody::unsetfloatingip()
{
    floatingipIsSet_ = false;
}

}
}
}
}
}


