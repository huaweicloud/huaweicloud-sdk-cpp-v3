

#include "huaweicloud/rds/v3/model/UpdateDbUserPrivilegeRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UpdateDbUserPrivilegeRequest::UpdateDbUserPrivilegeRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateDbUserPrivilegeRequest::~UpdateDbUserPrivilegeRequest() = default;

void UpdateDbUserPrivilegeRequest::validate()
{
}

web::json::value UpdateDbUserPrivilegeRequest::toJson() const
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

bool UpdateDbUserPrivilegeRequest::fromJson(const web::json::value& val)
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
            DbUserPrivilegeRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}

std::string UpdateDbUserPrivilegeRequest::getInstanceId() const
{
    return instanceId_;
}

void UpdateDbUserPrivilegeRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool UpdateDbUserPrivilegeRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void UpdateDbUserPrivilegeRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

DbUserPrivilegeRequest UpdateDbUserPrivilegeRequest::getBody() const
{
    return body_;
}

void UpdateDbUserPrivilegeRequest::setBody(const DbUserPrivilegeRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateDbUserPrivilegeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateDbUserPrivilegeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


