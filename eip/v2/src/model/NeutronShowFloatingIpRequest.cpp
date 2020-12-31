

#include "huaweicloud/eip/model/NeutronShowFloatingIpRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Eip {
namespace V2 {
namespace Model {




NeutronShowFloatingIpRequest::NeutronShowFloatingIpRequest()
{
    floatingipId_ = "";
    floatingipIdIsSet_ = false;
}

NeutronShowFloatingIpRequest::~NeutronShowFloatingIpRequest() = default;

void NeutronShowFloatingIpRequest::validate()
{
}

web::json::value NeutronShowFloatingIpRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(floatingipIdIsSet_) {
        val[utility::conversions::to_string_t("floatingip_id")] = ModelBase::toJson(floatingipId_);
    }

    return val;
}

bool NeutronShowFloatingIpRequest::fromJson(const web::json::value& val)
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


std::string NeutronShowFloatingIpRequest::getFloatingipId() const
{
    return floatingipId_;
}

void NeutronShowFloatingIpRequest::setFloatingipId(const std::string& value)
{
    floatingipId_ = value;
    floatingipIdIsSet_ = true;
}

bool NeutronShowFloatingIpRequest::floatingipIdIsSet() const
{
    return floatingipIdIsSet_;
}

void NeutronShowFloatingIpRequest::unsetfloatingipId()
{
    floatingipIdIsSet_ = false;
}

}
}
}
}
}


