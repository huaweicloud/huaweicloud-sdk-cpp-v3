

#include "huaweicloud/ecs/v2/model/UpdateServerInterfaceRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




UpdateServerInterfaceRequest::UpdateServerInterfaceRequest()
{
    serverId_ = "";
    serverIdIsSet_ = false;
    portId_ = "";
    portIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateServerInterfaceRequest::~UpdateServerInterfaceRequest() = default;

void UpdateServerInterfaceRequest::validate()
{
}

web::json::value UpdateServerInterfaceRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serverIdIsSet_) {
        val[utility::conversions::to_string_t("server_id")] = ModelBase::toJson(serverId_);
    }
    if(portIdIsSet_) {
        val[utility::conversions::to_string_t("port_id")] = ModelBase::toJson(portId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateServerInterfaceRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("server_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("port_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPortId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateNicInfoRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateServerInterfaceRequest::getServerId() const
{
    return serverId_;
}

void UpdateServerInterfaceRequest::setServerId(const std::string& value)
{
    serverId_ = value;
    serverIdIsSet_ = true;
}

bool UpdateServerInterfaceRequest::serverIdIsSet() const
{
    return serverIdIsSet_;
}

void UpdateServerInterfaceRequest::unsetserverId()
{
    serverIdIsSet_ = false;
}

std::string UpdateServerInterfaceRequest::getPortId() const
{
    return portId_;
}

void UpdateServerInterfaceRequest::setPortId(const std::string& value)
{
    portId_ = value;
    portIdIsSet_ = true;
}

bool UpdateServerInterfaceRequest::portIdIsSet() const
{
    return portIdIsSet_;
}

void UpdateServerInterfaceRequest::unsetportId()
{
    portIdIsSet_ = false;
}

UpdateNicInfoRequestBody UpdateServerInterfaceRequest::getBody() const
{
    return body_;
}

void UpdateServerInterfaceRequest::setBody(const UpdateNicInfoRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateServerInterfaceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateServerInterfaceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


