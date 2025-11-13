

#include "huaweicloud/ecs/v2/model/BatchAddServerGroupMemberRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




BatchAddServerGroupMemberRequest::BatchAddServerGroupMemberRequest()
{
    serverGroupId_ = "";
    serverGroupIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchAddServerGroupMemberRequest::~BatchAddServerGroupMemberRequest() = default;

void BatchAddServerGroupMemberRequest::validate()
{
}

web::json::value BatchAddServerGroupMemberRequest::toJson() const
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
bool BatchAddServerGroupMemberRequest::fromJson(const web::json::value& val)
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
            BatchAddServerGroupMemberReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchAddServerGroupMemberRequest::getServerGroupId() const
{
    return serverGroupId_;
}

void BatchAddServerGroupMemberRequest::setServerGroupId(const std::string& value)
{
    serverGroupId_ = value;
    serverGroupIdIsSet_ = true;
}

bool BatchAddServerGroupMemberRequest::serverGroupIdIsSet() const
{
    return serverGroupIdIsSet_;
}

void BatchAddServerGroupMemberRequest::unsetserverGroupId()
{
    serverGroupIdIsSet_ = false;
}

BatchAddServerGroupMemberReq BatchAddServerGroupMemberRequest::getBody() const
{
    return body_;
}

void BatchAddServerGroupMemberRequest::setBody(const BatchAddServerGroupMemberReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchAddServerGroupMemberRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchAddServerGroupMemberRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


