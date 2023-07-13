

#include "huaweicloud/ecs/v2/model/UpdateServerRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




UpdateServerRequest::UpdateServerRequest()
{
    serverId_ = "";
    serverIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateServerRequest::~UpdateServerRequest() = default;

void UpdateServerRequest::validate()
{
}

web::json::value UpdateServerRequest::toJson() const
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

bool UpdateServerRequest::fromJson(const web::json::value& val)
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
            UpdateServerRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string UpdateServerRequest::getServerId() const
{
    return serverId_;
}

void UpdateServerRequest::setServerId(const std::string& value)
{
    serverId_ = value;
    serverIdIsSet_ = true;
}

bool UpdateServerRequest::serverIdIsSet() const
{
    return serverIdIsSet_;
}

void UpdateServerRequest::unsetserverId()
{
    serverIdIsSet_ = false;
}

UpdateServerRequestBody UpdateServerRequest::getBody() const
{
    return body_;
}

void UpdateServerRequest::setBody(const UpdateServerRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateServerRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateServerRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


