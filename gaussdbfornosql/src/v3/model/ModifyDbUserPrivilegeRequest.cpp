

#include "huaweicloud/gaussdbfornosql/v3/model/ModifyDbUserPrivilegeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ModifyDbUserPrivilegeRequest::ModifyDbUserPrivilegeRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ModifyDbUserPrivilegeRequest::~ModifyDbUserPrivilegeRequest() = default;

void ModifyDbUserPrivilegeRequest::validate()
{
}

web::json::value ModifyDbUserPrivilegeRequest::toJson() const
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
bool ModifyDbUserPrivilegeRequest::fromJson(const web::json::value& val)
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
            RedisModifyDBUserPrivilegeRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ModifyDbUserPrivilegeRequest::getInstanceId() const
{
    return instanceId_;
}

void ModifyDbUserPrivilegeRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ModifyDbUserPrivilegeRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ModifyDbUserPrivilegeRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

RedisModifyDBUserPrivilegeRequest ModifyDbUserPrivilegeRequest::getBody() const
{
    return body_;
}

void ModifyDbUserPrivilegeRequest::setBody(const RedisModifyDBUserPrivilegeRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ModifyDbUserPrivilegeRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ModifyDbUserPrivilegeRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


