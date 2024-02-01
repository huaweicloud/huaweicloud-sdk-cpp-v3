

#include "huaweicloud/rds/v3/model/UpdateHostPrivilegeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UpdateHostPrivilegeRequest::UpdateHostPrivilegeRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateHostPrivilegeRequest::~UpdateHostPrivilegeRequest() = default;

void UpdateHostPrivilegeRequest::validate()
{
}

web::json::value UpdateHostPrivilegeRequest::toJson() const
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
bool UpdateHostPrivilegeRequest::fromJson(const web::json::value& val)
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
            SetHostPrivilegeRequestV3 refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateHostPrivilegeRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateHostPrivilegeRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateHostPrivilegeRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateHostPrivilegeRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

SetHostPrivilegeRequestV3 UpdateHostPrivilegeRequest::getBody() const
{
    return body_;
}

void UpdateHostPrivilegeRequest::setBody(const SetHostPrivilegeRequestV3& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateHostPrivilegeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateHostPrivilegeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


