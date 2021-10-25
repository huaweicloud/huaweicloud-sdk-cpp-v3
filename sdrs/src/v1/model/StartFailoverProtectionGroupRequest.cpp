

#include "huaweicloud/sdrs/v1/model/StartFailoverProtectionGroupRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




StartFailoverProtectionGroupRequest::StartFailoverProtectionGroupRequest()
{
    serverGroupId_ = "";
    serverGroupIdIsSet_ = false;
    bodyIsSet_ = false;
}

StartFailoverProtectionGroupRequest::~StartFailoverProtectionGroupRequest() = default;

void StartFailoverProtectionGroupRequest::validate()
{
}

web::json::value StartFailoverProtectionGroupRequest::toJson() const
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

bool StartFailoverProtectionGroupRequest::fromJson(const web::json::value& val)
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
            FailoverProtectionGroupRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string StartFailoverProtectionGroupRequest::getServerGroupId() const
{
    return serverGroupId_;
}

void StartFailoverProtectionGroupRequest::setServerGroupId(const std::string& value)
{
    serverGroupId_ = value;
    serverGroupIdIsSet_ = true;
}

bool StartFailoverProtectionGroupRequest::serverGroupIdIsSet() const
{
    return serverGroupIdIsSet_;
}

void StartFailoverProtectionGroupRequest::unsetserverGroupId()
{
    serverGroupIdIsSet_ = false;
}

FailoverProtectionGroupRequestBody StartFailoverProtectionGroupRequest::getBody() const
{
    return body_;
}

void StartFailoverProtectionGroupRequest::setBody(const FailoverProtectionGroupRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool StartFailoverProtectionGroupRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void StartFailoverProtectionGroupRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


