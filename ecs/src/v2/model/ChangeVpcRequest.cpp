

#include "huaweicloud/ecs/v2/model/ChangeVpcRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




ChangeVpcRequest::ChangeVpcRequest()
{
    serverId_ = "";
    serverIdIsSet_ = false;
    bodyIsSet_ = false;
}

ChangeVpcRequest::~ChangeVpcRequest() = default;

void ChangeVpcRequest::validate()
{
}

web::json::value ChangeVpcRequest::toJson() const
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
bool ChangeVpcRequest::fromJson(const web::json::value& val)
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
            ChangeVpcRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ChangeVpcRequest::getServerId() const
{
    return serverId_;
}

void ChangeVpcRequest::setServerId(const std::string& value)
{
    serverId_ = value;
    serverIdIsSet_ = true;
}

bool ChangeVpcRequest::serverIdIsSet() const
{
    return serverIdIsSet_;
}

void ChangeVpcRequest::unsetserverId()
{
    serverIdIsSet_ = false;
}

ChangeVpcRequestBody ChangeVpcRequest::getBody() const
{
    return body_;
}

void ChangeVpcRequest::setBody(const ChangeVpcRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ChangeVpcRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ChangeVpcRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


