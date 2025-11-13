

#include "huaweicloud/ecs/v2/model/BatchDeleteServerGroupMemberRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




BatchDeleteServerGroupMemberRequest::BatchDeleteServerGroupMemberRequest()
{
    serverGroupId_ = "";
    serverGroupIdIsSet_ = false;
    bodyIsSet_ = false;
}

BatchDeleteServerGroupMemberRequest::~BatchDeleteServerGroupMemberRequest() = default;

void BatchDeleteServerGroupMemberRequest::validate()
{
}

web::json::value BatchDeleteServerGroupMemberRequest::toJson() const
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
bool BatchDeleteServerGroupMemberRequest::fromJson(const web::json::value& val)
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
            BatchDeleteServerGroupMemberReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string BatchDeleteServerGroupMemberRequest::getServerGroupId() const
{
    return serverGroupId_;
}

void BatchDeleteServerGroupMemberRequest::setServerGroupId(const std::string& value)
{
    serverGroupId_ = value;
    serverGroupIdIsSet_ = true;
}

bool BatchDeleteServerGroupMemberRequest::serverGroupIdIsSet() const
{
    return serverGroupIdIsSet_;
}

void BatchDeleteServerGroupMemberRequest::unsetserverGroupId()
{
    serverGroupIdIsSet_ = false;
}

BatchDeleteServerGroupMemberReq BatchDeleteServerGroupMemberRequest::getBody() const
{
    return body_;
}

void BatchDeleteServerGroupMemberRequest::setBody(const BatchDeleteServerGroupMemberReq& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool BatchDeleteServerGroupMemberRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void BatchDeleteServerGroupMemberRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


