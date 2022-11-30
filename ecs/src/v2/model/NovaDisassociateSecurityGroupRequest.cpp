

#include "huaweicloud/ecs/v2/model/NovaDisassociateSecurityGroupRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




NovaDisassociateSecurityGroupRequest::NovaDisassociateSecurityGroupRequest()
{
    serverId_ = "";
    serverIdIsSet_ = false;
    bodyIsSet_ = false;
}

NovaDisassociateSecurityGroupRequest::~NovaDisassociateSecurityGroupRequest() = default;

void NovaDisassociateSecurityGroupRequest::validate()
{
}

web::json::value NovaDisassociateSecurityGroupRequest::toJson() const
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

bool NovaDisassociateSecurityGroupRequest::fromJson(const web::json::value& val)
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
            NovaDisassociateSecurityGroupRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string NovaDisassociateSecurityGroupRequest::getServerId() const
{
    return serverId_;
}

void NovaDisassociateSecurityGroupRequest::setServerId(const std::string& value)
{
    serverId_ = value;
    serverIdIsSet_ = true;
}

bool NovaDisassociateSecurityGroupRequest::serverIdIsSet() const
{
    return serverIdIsSet_;
}

void NovaDisassociateSecurityGroupRequest::unsetserverId()
{
    serverIdIsSet_ = false;
}

NovaDisassociateSecurityGroupRequestBody NovaDisassociateSecurityGroupRequest::getBody() const
{
    return body_;
}

void NovaDisassociateSecurityGroupRequest::setBody(const NovaDisassociateSecurityGroupRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool NovaDisassociateSecurityGroupRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void NovaDisassociateSecurityGroupRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


