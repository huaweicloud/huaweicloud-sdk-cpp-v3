

#include "huaweicloud/ecs/v2/model/AddServerGroupMemberRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




AddServerGroupMemberRequest::AddServerGroupMemberRequest()
{
    serverGroupId_ = "";
    serverGroupIdIsSet_ = false;
    bodyIsSet_ = false;
}

AddServerGroupMemberRequest::~AddServerGroupMemberRequest() = default;

void AddServerGroupMemberRequest::validate()
{
}

web::json::value AddServerGroupMemberRequest::toJson() const
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
bool AddServerGroupMemberRequest::fromJson(const web::json::value& val)
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
            AddServerGroupMemberRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string AddServerGroupMemberRequest::getServerGroupId() const
{
    return serverGroupId_;
}

void AddServerGroupMemberRequest::setServerGroupId(const std::string& value)
{
    serverGroupId_ = value;
    serverGroupIdIsSet_ = true;
}

bool AddServerGroupMemberRequest::serverGroupIdIsSet() const
{
    return serverGroupIdIsSet_;
}

void AddServerGroupMemberRequest::unsetserverGroupId()
{
    serverGroupIdIsSet_ = false;
}

AddServerGroupMemberRequestBody AddServerGroupMemberRequest::getBody() const
{
    return body_;
}

void AddServerGroupMemberRequest::setBody(const AddServerGroupMemberRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddServerGroupMemberRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddServerGroupMemberRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


