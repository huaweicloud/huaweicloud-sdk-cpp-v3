

#include "huaweicloud/rds/v3/model/ExecutePrivilegeDatabaseUserRoleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ExecutePrivilegeDatabaseUserRoleRequest::ExecutePrivilegeDatabaseUserRoleRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ExecutePrivilegeDatabaseUserRoleRequest::~ExecutePrivilegeDatabaseUserRoleRequest() = default;

void ExecutePrivilegeDatabaseUserRoleRequest::validate()
{
}

web::json::value ExecutePrivilegeDatabaseUserRoleRequest::toJson() const
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
bool ExecutePrivilegeDatabaseUserRoleRequest::fromJson(const web::json::value& val)
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
            DatabaseUserRoleRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ExecutePrivilegeDatabaseUserRoleRequest::getInstanceId() const
{
    return instanceId_;
}

void ExecutePrivilegeDatabaseUserRoleRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ExecutePrivilegeDatabaseUserRoleRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ExecutePrivilegeDatabaseUserRoleRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

DatabaseUserRoleRequest ExecutePrivilegeDatabaseUserRoleRequest::getBody() const
{
    return body_;
}

void ExecutePrivilegeDatabaseUserRoleRequest::setBody(const DatabaseUserRoleRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ExecutePrivilegeDatabaseUserRoleRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ExecutePrivilegeDatabaseUserRoleRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


