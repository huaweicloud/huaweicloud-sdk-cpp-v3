

#include "huaweicloud/ecs/v2/model/RegisterServerAutoRecoveryRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




RegisterServerAutoRecoveryRequest::RegisterServerAutoRecoveryRequest()
{
    serverId_ = "";
    serverIdIsSet_ = false;
    bodyIsSet_ = false;
}

RegisterServerAutoRecoveryRequest::~RegisterServerAutoRecoveryRequest() = default;

void RegisterServerAutoRecoveryRequest::validate()
{
}

web::json::value RegisterServerAutoRecoveryRequest::toJson() const
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
bool RegisterServerAutoRecoveryRequest::fromJson(const web::json::value& val)
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
            RegisterServerAutoRecoveryRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string RegisterServerAutoRecoveryRequest::getServerId() const
{
    return serverId_;
}

void RegisterServerAutoRecoveryRequest::setServerId(const std::string& value)
{
    serverId_ = value;
    serverIdIsSet_ = true;
}

bool RegisterServerAutoRecoveryRequest::serverIdIsSet() const
{
    return serverIdIsSet_;
}

void RegisterServerAutoRecoveryRequest::unsetserverId()
{
    serverIdIsSet_ = false;
}

RegisterServerAutoRecoveryRequestBody RegisterServerAutoRecoveryRequest::getBody() const
{
    return body_;
}

void RegisterServerAutoRecoveryRequest::setBody(const RegisterServerAutoRecoveryRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RegisterServerAutoRecoveryRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RegisterServerAutoRecoveryRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


