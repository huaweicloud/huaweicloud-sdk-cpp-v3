

#include "huaweicloud/sdrs/v1/model/UpdateProtectionGroupNameRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




UpdateProtectionGroupNameRequest::UpdateProtectionGroupNameRequest()
{
    serverGroupId_ = "";
    serverGroupIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateProtectionGroupNameRequest::~UpdateProtectionGroupNameRequest() = default;

void UpdateProtectionGroupNameRequest::validate()
{
}

web::json::value UpdateProtectionGroupNameRequest::toJson() const
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

bool UpdateProtectionGroupNameRequest::fromJson(const web::json::value& val)
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
            UpdateProtectionGroupNameRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateProtectionGroupNameRequest::getServerGroupId() const
{
    return serverGroupId_;
}

void UpdateProtectionGroupNameRequest::setServerGroupId(const std::string& value)
{
    serverGroupId_ = value;
    serverGroupIdIsSet_ = true;
}

bool UpdateProtectionGroupNameRequest::serverGroupIdIsSet() const
{
    return serverGroupIdIsSet_;
}

void UpdateProtectionGroupNameRequest::unsetserverGroupId()
{
    serverGroupIdIsSet_ = false;
}

UpdateProtectionGroupNameRequestBody UpdateProtectionGroupNameRequest::getBody() const
{
    return body_;
}

void UpdateProtectionGroupNameRequest::setBody(const UpdateProtectionGroupNameRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateProtectionGroupNameRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateProtectionGroupNameRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


