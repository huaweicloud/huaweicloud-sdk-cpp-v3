

#include "huaweicloud/ecs/v2/model/UpdateSerialConsoleOptionsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




UpdateSerialConsoleOptionsRequest::UpdateSerialConsoleOptionsRequest()
{
    serverId_ = "";
    serverIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateSerialConsoleOptionsRequest::~UpdateSerialConsoleOptionsRequest() = default;

void UpdateSerialConsoleOptionsRequest::validate()
{
}

web::json::value UpdateSerialConsoleOptionsRequest::toJson() const
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
bool UpdateSerialConsoleOptionsRequest::fromJson(const web::json::value& val)
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
            UpdateSerialConsoleOptionsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateSerialConsoleOptionsRequest::getServerId() const
{
    return serverId_;
}

void UpdateSerialConsoleOptionsRequest::setServerId(const std::string& value)
{
    serverId_ = value;
    serverIdIsSet_ = true;
}

bool UpdateSerialConsoleOptionsRequest::serverIdIsSet() const
{
    return serverIdIsSet_;
}

void UpdateSerialConsoleOptionsRequest::unsetserverId()
{
    serverIdIsSet_ = false;
}

UpdateSerialConsoleOptionsRequestBody UpdateSerialConsoleOptionsRequest::getBody() const
{
    return body_;
}

void UpdateSerialConsoleOptionsRequest::setBody(const UpdateSerialConsoleOptionsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateSerialConsoleOptionsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateSerialConsoleOptionsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


