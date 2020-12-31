

#include "huaweicloud/ecs/model/ShowServerRemoteConsoleRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ShowServerRemoteConsoleRequest::ShowServerRemoteConsoleRequest()
{
    serverId_ = "";
    serverIdIsSet_ = false;
    bodyIsSet_ = false;
}

ShowServerRemoteConsoleRequest::~ShowServerRemoteConsoleRequest() = default;

void ShowServerRemoteConsoleRequest::validate()
{
}

web::json::value ShowServerRemoteConsoleRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serverIdIsSet_) {
        val[utility::conversions::to_string_t("server_id")] = ModelBase::toJson(serverId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool ShowServerRemoteConsoleRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            ShowServerRemoteConsoleRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ShowServerRemoteConsoleRequest::getServerId() const
{
    return serverId_;
}

void ShowServerRemoteConsoleRequest::setServerId(const std::string& value)
{
    serverId_ = value;
    serverIdIsSet_ = true;
}

bool ShowServerRemoteConsoleRequest::serverIdIsSet() const
{
    return serverIdIsSet_;
}

void ShowServerRemoteConsoleRequest::unsetserverId()
{
    serverIdIsSet_ = false;
}

ShowServerRemoteConsoleRequestBody ShowServerRemoteConsoleRequest::getBody() const
{
    return body_;
}

void ShowServerRemoteConsoleRequest::setBody(const ShowServerRemoteConsoleRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ShowServerRemoteConsoleRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ShowServerRemoteConsoleRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


