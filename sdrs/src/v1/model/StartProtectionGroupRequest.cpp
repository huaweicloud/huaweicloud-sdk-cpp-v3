

#include "huaweicloud/sdrs/v1/model/StartProtectionGroupRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




StartProtectionGroupRequest::StartProtectionGroupRequest()
{
    serverGroupId_ = "";
    serverGroupIdIsSet_ = false;
    bodyIsSet_ = false;
}

StartProtectionGroupRequest::~StartProtectionGroupRequest() = default;

void StartProtectionGroupRequest::validate()
{
}

web::json::value StartProtectionGroupRequest::toJson() const
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

bool StartProtectionGroupRequest::fromJson(const web::json::value& val)
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
            StartProtectionGroupRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string StartProtectionGroupRequest::getServerGroupId() const
{
    return serverGroupId_;
}

void StartProtectionGroupRequest::setServerGroupId(const std::string& value)
{
    serverGroupId_ = value;
    serverGroupIdIsSet_ = true;
}

bool StartProtectionGroupRequest::serverGroupIdIsSet() const
{
    return serverGroupIdIsSet_;
}

void StartProtectionGroupRequest::unsetserverGroupId()
{
    serverGroupIdIsSet_ = false;
}

StartProtectionGroupRequestBody StartProtectionGroupRequest::getBody() const
{
    return body_;
}

void StartProtectionGroupRequest::setBody(const StartProtectionGroupRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool StartProtectionGroupRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void StartProtectionGroupRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


