

#include "huaweicloud/eip/v2/model/NeutronCreateFloatingIpRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




NeutronCreateFloatingIpRequestBody::NeutronCreateFloatingIpRequestBody()
{
    floatingipIsSet_ = false;
}

NeutronCreateFloatingIpRequestBody::~NeutronCreateFloatingIpRequestBody() = default;

void NeutronCreateFloatingIpRequestBody::validate()
{
}

web::json::value NeutronCreateFloatingIpRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(floatingipIsSet_) {
        val[utility::conversions::to_string_t("floatingip")] = ModelBase::toJson(floatingip_);
    }

    return val;
}
bool NeutronCreateFloatingIpRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("floatingip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("floatingip"));
        if(!fieldValue.is_null())
        {
            CreateFloatingIpOption refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFloatingip(refVal);
        }
    }
    return ok;
}


CreateFloatingIpOption NeutronCreateFloatingIpRequestBody::getFloatingip() const
{
    return floatingip_;
}

void NeutronCreateFloatingIpRequestBody::setFloatingip(const CreateFloatingIpOption& value)
{
    floatingip_ = value;
    floatingipIsSet_ = true;
}

bool NeutronCreateFloatingIpRequestBody::floatingipIsSet() const
{
    return floatingipIsSet_;
}

void NeutronCreateFloatingIpRequestBody::unsetfloatingip()
{
    floatingipIsSet_ = false;
}

}
}
}
}
}


