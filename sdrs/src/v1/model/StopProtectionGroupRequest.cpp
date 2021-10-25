

#include "huaweicloud/sdrs/v1/model/StopProtectionGroupRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




StopProtectionGroupRequest::StopProtectionGroupRequest()
{
    serverGroupId_ = "";
    serverGroupIdIsSet_ = false;
    bodyIsSet_ = false;
}

StopProtectionGroupRequest::~StopProtectionGroupRequest() = default;

void StopProtectionGroupRequest::validate()
{
}

web::json::value StopProtectionGroupRequest::toJson() const
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

bool StopProtectionGroupRequest::fromJson(const web::json::value& val)
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
            StopProtectionGroupRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string StopProtectionGroupRequest::getServerGroupId() const
{
    return serverGroupId_;
}

void StopProtectionGroupRequest::setServerGroupId(const std::string& value)
{
    serverGroupId_ = value;
    serverGroupIdIsSet_ = true;
}

bool StopProtectionGroupRequest::serverGroupIdIsSet() const
{
    return serverGroupIdIsSet_;
}

void StopProtectionGroupRequest::unsetserverGroupId()
{
    serverGroupIdIsSet_ = false;
}

StopProtectionGroupRequestBody StopProtectionGroupRequest::getBody() const
{
    return body_;
}

void StopProtectionGroupRequest::setBody(const StopProtectionGroupRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool StopProtectionGroupRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void StopProtectionGroupRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


