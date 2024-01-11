

#include "huaweicloud/ecs/v2/model/NovaShowServerInterfaceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




NovaShowServerInterfaceRequest::NovaShowServerInterfaceRequest()
{
    portId_ = "";
    portIdIsSet_ = false;
    serverId_ = "";
    serverIdIsSet_ = false;
}

NovaShowServerInterfaceRequest::~NovaShowServerInterfaceRequest() = default;

void NovaShowServerInterfaceRequest::validate()
{
}

web::json::value NovaShowServerInterfaceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(portIdIsSet_) {
        val[utility::conversions::to_string_t("port_id")] = ModelBase::toJson(portId_);
    }
    if(serverIdIsSet_) {
        val[utility::conversions::to_string_t("server_id")] = ModelBase::toJson(serverId_);
    }

    return val;
}
bool NovaShowServerInterfaceRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("server_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerId(refVal);
        }
    }
    return ok;
}


std::string NovaShowServerInterfaceRequest::getPortId() const
{
    return portId_;
}

void NovaShowServerInterfaceRequest::setPortId(const std::string& value)
{
    portId_ = value;
    portIdIsSet_ = true;
}

bool NovaShowServerInterfaceRequest::portIdIsSet() const
{
    return portIdIsSet_;
}

void NovaShowServerInterfaceRequest::unsetportId()
{
    portIdIsSet_ = false;
}

std::string NovaShowServerInterfaceRequest::getServerId() const
{
    return serverId_;
}

void NovaShowServerInterfaceRequest::setServerId(const std::string& value)
{
    serverId_ = value;
    serverIdIsSet_ = true;
}

bool NovaShowServerInterfaceRequest::serverIdIsSet() const
{
    return serverIdIsSet_;
}

void NovaShowServerInterfaceRequest::unsetserverId()
{
    serverIdIsSet_ = false;
}

}
}
}
}
}


