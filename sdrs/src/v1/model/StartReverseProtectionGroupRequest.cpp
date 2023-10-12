

#include "huaweicloud/sdrs/v1/model/StartReverseProtectionGroupRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




StartReverseProtectionGroupRequest::StartReverseProtectionGroupRequest()
{
    serverGroupId_ = "";
    serverGroupIdIsSet_ = false;
    bodyIsSet_ = false;
}

StartReverseProtectionGroupRequest::~StartReverseProtectionGroupRequest() = default;

void StartReverseProtectionGroupRequest::validate()
{
}

web::json::value StartReverseProtectionGroupRequest::toJson() const
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
bool StartReverseProtectionGroupRequest::fromJson(const web::json::value& val)
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
            ReverseProtectionGroupRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string StartReverseProtectionGroupRequest::getServerGroupId() const
{
    return serverGroupId_;
}

void StartReverseProtectionGroupRequest::setServerGroupId(const std::string& value)
{
    serverGroupId_ = value;
    serverGroupIdIsSet_ = true;
}

bool StartReverseProtectionGroupRequest::serverGroupIdIsSet() const
{
    return serverGroupIdIsSet_;
}

void StartReverseProtectionGroupRequest::unsetserverGroupId()
{
    serverGroupIdIsSet_ = false;
}

ReverseProtectionGroupRequestBody StartReverseProtectionGroupRequest::getBody() const
{
    return body_;
}

void StartReverseProtectionGroupRequest::setBody(const ReverseProtectionGroupRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool StartReverseProtectionGroupRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void StartReverseProtectionGroupRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


