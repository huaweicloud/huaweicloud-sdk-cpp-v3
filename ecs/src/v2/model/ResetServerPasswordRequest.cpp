

#include "huaweicloud/ecs/v2/model/ResetServerPasswordRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ResetServerPasswordRequest::ResetServerPasswordRequest()
{
    serverId_ = "";
    serverIdIsSet_ = false;
    bodyIsSet_ = false;
}

ResetServerPasswordRequest::~ResetServerPasswordRequest() = default;

void ResetServerPasswordRequest::validate()
{
}

web::json::value ResetServerPasswordRequest::toJson() const
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
bool ResetServerPasswordRequest::fromJson(const web::json::value& val)
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
            ResetServerPasswordRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ResetServerPasswordRequest::getServerId() const
{
    return serverId_;
}

void ResetServerPasswordRequest::setServerId(const std::string& value)
{
    serverId_ = value;
    serverIdIsSet_ = true;
}

bool ResetServerPasswordRequest::serverIdIsSet() const
{
    return serverIdIsSet_;
}

void ResetServerPasswordRequest::unsetserverId()
{
    serverIdIsSet_ = false;
}

ResetServerPasswordRequestBody ResetServerPasswordRequest::getBody() const
{
    return body_;
}

void ResetServerPasswordRequest::setBody(const ResetServerPasswordRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ResetServerPasswordRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ResetServerPasswordRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


