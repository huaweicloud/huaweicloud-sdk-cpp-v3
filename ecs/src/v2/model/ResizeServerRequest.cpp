

#include "huaweicloud/ecs/v2/model/ResizeServerRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ResizeServerRequest::ResizeServerRequest()
{
    serverId_ = "";
    serverIdIsSet_ = false;
    bodyIsSet_ = false;
}

ResizeServerRequest::~ResizeServerRequest() = default;

void ResizeServerRequest::validate()
{
}

web::json::value ResizeServerRequest::toJson() const
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
bool ResizeServerRequest::fromJson(const web::json::value& val)
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
            ResizeServerRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ResizeServerRequest::getServerId() const
{
    return serverId_;
}

void ResizeServerRequest::setServerId(const std::string& value)
{
    serverId_ = value;
    serverIdIsSet_ = true;
}

bool ResizeServerRequest::serverIdIsSet() const
{
    return serverIdIsSet_;
}

void ResizeServerRequest::unsetserverId()
{
    serverIdIsSet_ = false;
}

ResizeServerRequestBody ResizeServerRequest::getBody() const
{
    return body_;
}

void ResizeServerRequest::setBody(const ResizeServerRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ResizeServerRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ResizeServerRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


