

#include "huaweicloud/ecs/v2/model/RegisterServerMonitorRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




RegisterServerMonitorRequest::RegisterServerMonitorRequest()
{
    serverId_ = "";
    serverIdIsSet_ = false;
    bodyIsSet_ = false;
}

RegisterServerMonitorRequest::~RegisterServerMonitorRequest() = default;

void RegisterServerMonitorRequest::validate()
{
}

web::json::value RegisterServerMonitorRequest::toJson() const
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

bool RegisterServerMonitorRequest::fromJson(const web::json::value& val)
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
            RegisterServerMonitorRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string RegisterServerMonitorRequest::getServerId() const
{
    return serverId_;
}

void RegisterServerMonitorRequest::setServerId(const std::string& value)
{
    serverId_ = value;
    serverIdIsSet_ = true;
}

bool RegisterServerMonitorRequest::serverIdIsSet() const
{
    return serverIdIsSet_;
}

void RegisterServerMonitorRequest::unsetserverId()
{
    serverIdIsSet_ = false;
}

RegisterServerMonitorRequestBody RegisterServerMonitorRequest::getBody() const
{
    return body_;
}

void RegisterServerMonitorRequest::setBody(const RegisterServerMonitorRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RegisterServerMonitorRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RegisterServerMonitorRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


