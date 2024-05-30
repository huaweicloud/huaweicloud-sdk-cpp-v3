

#include "huaweicloud/ecs/v2/model/ChangeServerNetworkInterfaceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ChangeServerNetworkInterfaceRequest::ChangeServerNetworkInterfaceRequest()
{
    portId_ = "";
    portIdIsSet_ = false;
    serverId_ = "";
    serverIdIsSet_ = false;
    bodyIsSet_ = false;
}

ChangeServerNetworkInterfaceRequest::~ChangeServerNetworkInterfaceRequest() = default;

void ChangeServerNetworkInterfaceRequest::validate()
{
}

web::json::value ChangeServerNetworkInterfaceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(portIdIsSet_) {
        val[utility::conversions::to_string_t("port_id")] = ModelBase::toJson(portId_);
    }
    if(serverIdIsSet_) {
        val[utility::conversions::to_string_t("server_id")] = ModelBase::toJson(serverId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool ChangeServerNetworkInterfaceRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ChangeServerNetworkInterfaceRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ChangeServerNetworkInterfaceRequest::getPortId() const
{
    return portId_;
}

void ChangeServerNetworkInterfaceRequest::setPortId(const std::string& value)
{
    portId_ = value;
    portIdIsSet_ = true;
}

bool ChangeServerNetworkInterfaceRequest::portIdIsSet() const
{
    return portIdIsSet_;
}

void ChangeServerNetworkInterfaceRequest::unsetportId()
{
    portIdIsSet_ = false;
}

std::string ChangeServerNetworkInterfaceRequest::getServerId() const
{
    return serverId_;
}

void ChangeServerNetworkInterfaceRequest::setServerId(const std::string& value)
{
    serverId_ = value;
    serverIdIsSet_ = true;
}

bool ChangeServerNetworkInterfaceRequest::serverIdIsSet() const
{
    return serverIdIsSet_;
}

void ChangeServerNetworkInterfaceRequest::unsetserverId()
{
    serverIdIsSet_ = false;
}

ChangeServerNetworkInterfaceRequestBody ChangeServerNetworkInterfaceRequest::getBody() const
{
    return body_;
}

void ChangeServerNetworkInterfaceRequest::setBody(const ChangeServerNetworkInterfaceRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ChangeServerNetworkInterfaceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ChangeServerNetworkInterfaceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


