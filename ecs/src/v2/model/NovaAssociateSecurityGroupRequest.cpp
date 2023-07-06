

#include "huaweicloud/ecs/v2/model/NovaAssociateSecurityGroupRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




NovaAssociateSecurityGroupRequest::NovaAssociateSecurityGroupRequest()
{
    serverId_ = "";
    serverIdIsSet_ = false;
    bodyIsSet_ = false;
}

NovaAssociateSecurityGroupRequest::~NovaAssociateSecurityGroupRequest() = default;

void NovaAssociateSecurityGroupRequest::validate()
{
}

web::json::value NovaAssociateSecurityGroupRequest::toJson() const
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

bool NovaAssociateSecurityGroupRequest::fromJson(const web::json::value& val)
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
            NovaAssociateSecurityGroupRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string NovaAssociateSecurityGroupRequest::getServerId() const
{
    return serverId_;
}

void NovaAssociateSecurityGroupRequest::setServerId(const std::string& value)
{
    serverId_ = value;
    serverIdIsSet_ = true;
}

bool NovaAssociateSecurityGroupRequest::serverIdIsSet() const
{
    return serverIdIsSet_;
}

void NovaAssociateSecurityGroupRequest::unsetserverId()
{
    serverIdIsSet_ = false;
}

NovaAssociateSecurityGroupRequestBody NovaAssociateSecurityGroupRequest::getBody() const
{
    return body_;
}

void NovaAssociateSecurityGroupRequest::setBody(const NovaAssociateSecurityGroupRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool NovaAssociateSecurityGroupRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void NovaAssociateSecurityGroupRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


