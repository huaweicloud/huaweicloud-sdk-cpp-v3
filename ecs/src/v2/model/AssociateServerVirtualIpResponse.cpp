

#include "huaweicloud/ecs/v2/model/AssociateServerVirtualIpResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




AssociateServerVirtualIpResponse::AssociateServerVirtualIpResponse()
{
    portId_ = "";
    portIdIsSet_ = false;
}

AssociateServerVirtualIpResponse::~AssociateServerVirtualIpResponse() = default;

void AssociateServerVirtualIpResponse::validate()
{
}

web::json::value AssociateServerVirtualIpResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(portIdIsSet_) {
        val[utility::conversions::to_string_t("port_id")] = ModelBase::toJson(portId_);
    }

    return val;
}

bool AssociateServerVirtualIpResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("port_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPortId(refVal);
        }
    }
    return ok;
}

std::string AssociateServerVirtualIpResponse::getPortId() const
{
    return portId_;
}

void AssociateServerVirtualIpResponse::setPortId(const std::string& value)
{
    portId_ = value;
    portIdIsSet_ = true;
}

bool AssociateServerVirtualIpResponse::portIdIsSet() const
{
    return portIdIsSet_;
}

void AssociateServerVirtualIpResponse::unsetportId()
{
    portIdIsSet_ = false;
}

}
}
}
}
}


