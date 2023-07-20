

#include "huaweicloud/gaussdbfornosql/v3/model/UpdateSecurityGroupRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




UpdateSecurityGroupRequest::UpdateSecurityGroupRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateSecurityGroupRequest::~UpdateSecurityGroupRequest() = default;

void UpdateSecurityGroupRequest::validate()
{
}

web::json::value UpdateSecurityGroupRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}

bool UpdateSecurityGroupRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateSecurityGroupRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string UpdateSecurityGroupRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateSecurityGroupRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateSecurityGroupRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateSecurityGroupRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

UpdateSecurityGroupRequestBody UpdateSecurityGroupRequest::getBody() const
{
    return body_;
}

void UpdateSecurityGroupRequest::setBody(const UpdateSecurityGroupRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateSecurityGroupRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateSecurityGroupRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


