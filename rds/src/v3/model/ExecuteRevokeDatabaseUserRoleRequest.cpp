

#include "huaweicloud/rds/v3/model/ExecuteRevokeDatabaseUserRoleRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ExecuteRevokeDatabaseUserRoleRequest::ExecuteRevokeDatabaseUserRoleRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    bodyIsSet_ = false;
}

ExecuteRevokeDatabaseUserRoleRequest::~ExecuteRevokeDatabaseUserRoleRequest() = default;

void ExecuteRevokeDatabaseUserRoleRequest::validate()
{
}

web::json::value ExecuteRevokeDatabaseUserRoleRequest::toJson() const
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
bool ExecuteRevokeDatabaseUserRoleRequest::fromJson(const web::json::value& val)
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


std::string ExecuteRevokeDatabaseUserRoleRequest::getInstanceId() const
{
    return instanceId_;
}

void ExecuteRevokeDatabaseUserRoleRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ExecuteRevokeDatabaseUserRoleRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ExecuteRevokeDatabaseUserRoleRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

DatabaseUserRoleRequest ExecuteRevokeDatabaseUserRoleRequest::getBody() const
{
    return body_;
}

void ExecuteRevokeDatabaseUserRoleRequest::setBody(const DatabaseUserRoleRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ExecuteRevokeDatabaseUserRoleRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ExecuteRevokeDatabaseUserRoleRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


