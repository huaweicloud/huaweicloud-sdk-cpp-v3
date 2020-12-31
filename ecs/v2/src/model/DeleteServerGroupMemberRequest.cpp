

#include "huaweicloud/ecs/model/DeleteServerGroupMemberRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




DeleteServerGroupMemberRequest::DeleteServerGroupMemberRequest()
{
    serverGroupId_ = "";
    serverGroupIdIsSet_ = false;
    bodyIsSet_ = false;
}

DeleteServerGroupMemberRequest::~DeleteServerGroupMemberRequest() = default;

void DeleteServerGroupMemberRequest::validate()
{
}

web::json::value DeleteServerGroupMemberRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serverGroupIdIsSet_) {
        val[utility::conversions::to_string_t("server_group_id")] = ModelBase::toJson(serverGroupId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool DeleteServerGroupMemberRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("server_group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            DeleteServerGroupMemberRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string DeleteServerGroupMemberRequest::getServerGroupId() const
{
    return serverGroupId_;
}

void DeleteServerGroupMemberRequest::setServerGroupId(const std::string& value)
{
    serverGroupId_ = value;
    serverGroupIdIsSet_ = true;
}

bool DeleteServerGroupMemberRequest::serverGroupIdIsSet() const
{
    return serverGroupIdIsSet_;
}

void DeleteServerGroupMemberRequest::unsetserverGroupId()
{
    serverGroupIdIsSet_ = false;
}

DeleteServerGroupMemberRequestBody DeleteServerGroupMemberRequest::getBody() const
{
    return body_;
}

void DeleteServerGroupMemberRequest::setBody(const DeleteServerGroupMemberRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool DeleteServerGroupMemberRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void DeleteServerGroupMemberRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


