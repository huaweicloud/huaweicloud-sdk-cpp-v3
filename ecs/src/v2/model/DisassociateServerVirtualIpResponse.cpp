

#include "huaweicloud/ecs/v2/model/DisassociateServerVirtualIpResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




DisassociateServerVirtualIpResponse::DisassociateServerVirtualIpResponse()
{
    portId_ = "";
    portIdIsSet_ = false;
}

DisassociateServerVirtualIpResponse::~DisassociateServerVirtualIpResponse() = default;

void DisassociateServerVirtualIpResponse::validate()
{
}

web::json::value DisassociateServerVirtualIpResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(portIdIsSet_) {
        val[utility::conversions::to_string_t("port_id")] = ModelBase::toJson(portId_);
    }

    return val;
}

bool DisassociateServerVirtualIpResponse::fromJson(const web::json::value& val)
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

std::string DisassociateServerVirtualIpResponse::getPortId() const
{
    return portId_;
}

void DisassociateServerVirtualIpResponse::setPortId(const std::string& value)
{
    portId_ = value;
    portIdIsSet_ = true;
}

bool DisassociateServerVirtualIpResponse::portIdIsSet() const
{
    return portIdIsSet_;
}

void DisassociateServerVirtualIpResponse::unsetportId()
{
    portIdIsSet_ = false;
}

}
}
}
}
}


