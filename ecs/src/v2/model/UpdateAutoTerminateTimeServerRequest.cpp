

#include "huaweicloud/ecs/v2/model/UpdateAutoTerminateTimeServerRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




UpdateAutoTerminateTimeServerRequest::UpdateAutoTerminateTimeServerRequest()
{
    serverId_ = "";
    serverIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateAutoTerminateTimeServerRequest::~UpdateAutoTerminateTimeServerRequest() = default;

void UpdateAutoTerminateTimeServerRequest::validate()
{
}

web::json::value UpdateAutoTerminateTimeServerRequest::toJson() const
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

bool UpdateAutoTerminateTimeServerRequest::fromJson(const web::json::value& val)
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
            UpdateAutoTerminateTimeServerRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateAutoTerminateTimeServerRequest::getServerId() const
{
    return serverId_;
}

void UpdateAutoTerminateTimeServerRequest::setServerId(const std::string& value)
{
    serverId_ = value;
    serverIdIsSet_ = true;
}

bool UpdateAutoTerminateTimeServerRequest::serverIdIsSet() const
{
    return serverIdIsSet_;
}

void UpdateAutoTerminateTimeServerRequest::unsetserverId()
{
    serverIdIsSet_ = false;
}

UpdateAutoTerminateTimeServerRequestBody UpdateAutoTerminateTimeServerRequest::getBody() const
{
    return body_;
}

void UpdateAutoTerminateTimeServerRequest::setBody(const UpdateAutoTerminateTimeServerRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateAutoTerminateTimeServerRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateAutoTerminateTimeServerRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


