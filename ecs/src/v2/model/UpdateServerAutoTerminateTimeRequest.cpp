

#include "huaweicloud/ecs/v2/model/UpdateServerAutoTerminateTimeRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




UpdateServerAutoTerminateTimeRequest::UpdateServerAutoTerminateTimeRequest()
{
    serverId_ = "";
    serverIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateServerAutoTerminateTimeRequest::~UpdateServerAutoTerminateTimeRequest() = default;

void UpdateServerAutoTerminateTimeRequest::validate()
{
}

web::json::value UpdateServerAutoTerminateTimeRequest::toJson() const
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

bool UpdateServerAutoTerminateTimeRequest::fromJson(const web::json::value& val)
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
            UpdateServerAutoTerminateTimeRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string UpdateServerAutoTerminateTimeRequest::getServerId() const
{
    return serverId_;
}

void UpdateServerAutoTerminateTimeRequest::setServerId(const std::string& value)
{
    serverId_ = value;
    serverIdIsSet_ = true;
}

bool UpdateServerAutoTerminateTimeRequest::serverIdIsSet() const
{
    return serverIdIsSet_;
}

void UpdateServerAutoTerminateTimeRequest::unsetserverId()
{
    serverIdIsSet_ = false;
}

UpdateServerAutoTerminateTimeRequestBody UpdateServerAutoTerminateTimeRequest::getBody() const
{
    return body_;
}

void UpdateServerAutoTerminateTimeRequest::setBody(const UpdateServerAutoTerminateTimeRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateServerAutoTerminateTimeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateServerAutoTerminateTimeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


