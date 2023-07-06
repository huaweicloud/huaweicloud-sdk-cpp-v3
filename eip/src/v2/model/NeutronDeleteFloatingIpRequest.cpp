

#include "huaweicloud/eip/v2/model/NeutronDeleteFloatingIpRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




NeutronDeleteFloatingIpRequest::NeutronDeleteFloatingIpRequest()
{
    floatingipId_ = "";
    floatingipIdIsSet_ = false;
}

NeutronDeleteFloatingIpRequest::~NeutronDeleteFloatingIpRequest() = default;

void NeutronDeleteFloatingIpRequest::validate()
{
}

web::json::value NeutronDeleteFloatingIpRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(floatingipIdIsSet_) {
        val[utility::conversions::to_string_t("floatingip_id")] = ModelBase::toJson(floatingipId_);
    }

    return val;
}

bool NeutronDeleteFloatingIpRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("floatingip_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("floatingip_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFloatingipId(refVal);
        }
    }
    return ok;
}

std::string NeutronDeleteFloatingIpRequest::getFloatingipId() const
{
    return floatingipId_;
}

void NeutronDeleteFloatingIpRequest::setFloatingipId(const std::string& value)
{
    floatingipId_ = value;
    floatingipIdIsSet_ = true;
}

bool NeutronDeleteFloatingIpRequest::floatingipIdIsSet() const
{
    return floatingipIdIsSet_;
}

void NeutronDeleteFloatingIpRequest::unsetfloatingipId()
{
    floatingipIdIsSet_ = false;
}

}
}
}
}
}


