

#include "huaweicloud/ecs/v2/model/NovaAttachInterfaceRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




NovaAttachInterfaceRequest::NovaAttachInterfaceRequest()
{
    serverId_ = "";
    serverIdIsSet_ = false;
    bodyIsSet_ = false;
}

NovaAttachInterfaceRequest::~NovaAttachInterfaceRequest() = default;

void NovaAttachInterfaceRequest::validate()
{
}

web::json::value NovaAttachInterfaceRequest::toJson() const
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

bool NovaAttachInterfaceRequest::fromJson(const web::json::value& val)
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
            NovaAttachInterfaceRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string NovaAttachInterfaceRequest::getServerId() const
{
    return serverId_;
}

void NovaAttachInterfaceRequest::setServerId(const std::string& value)
{
    serverId_ = value;
    serverIdIsSet_ = true;
}

bool NovaAttachInterfaceRequest::serverIdIsSet() const
{
    return serverIdIsSet_;
}

void NovaAttachInterfaceRequest::unsetserverId()
{
    serverIdIsSet_ = false;
}

NovaAttachInterfaceRequestBody NovaAttachInterfaceRequest::getBody() const
{
    return body_;
}

void NovaAttachInterfaceRequest::setBody(const NovaAttachInterfaceRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool NovaAttachInterfaceRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void NovaAttachInterfaceRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


