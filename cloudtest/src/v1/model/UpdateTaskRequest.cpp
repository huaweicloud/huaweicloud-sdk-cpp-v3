

#include "huaweicloud/cloudtest/v1/model/UpdateTaskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




UpdateTaskRequest::UpdateTaskRequest()
{
    projectUuid_ = "";
    projectUuidIsSet_ = false;
    taskUri_ = "";
    taskUriIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateTaskRequest::~UpdateTaskRequest() = default;

void UpdateTaskRequest::validate()
{
}

web::json::value UpdateTaskRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectUuidIsSet_) {
        val[utility::conversions::to_string_t("project_uuid")] = ModelBase::toJson(projectUuid_);
    }
    if(taskUriIsSet_) {
        val[utility::conversions::to_string_t("task_uri")] = ModelBase::toJson(taskUri_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateTaskRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_uuid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_uuid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectUuid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_uri"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_uri"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskUri(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            TaskInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateTaskRequest::getProjectUuid() const
{
    return projectUuid_;
}

void UpdateTaskRequest::setProjectUuid(const std::string& value)
{
    projectUuid_ = value;
    projectUuidIsSet_ = true;
}

bool UpdateTaskRequest::projectUuidIsSet() const
{
    return projectUuidIsSet_;
}

void UpdateTaskRequest::unsetprojectUuid()
{
    projectUuidIsSet_ = false;
}

std::string UpdateTaskRequest::getTaskUri() const
{
    return taskUri_;
}

void UpdateTaskRequest::setTaskUri(const std::string& value)
{
    taskUri_ = value;
    taskUriIsSet_ = true;
}

bool UpdateTaskRequest::taskUriIsSet() const
{
    return taskUriIsSet_;
}

void UpdateTaskRequest::unsettaskUri()
{
    taskUriIsSet_ = false;
}

TaskInfo UpdateTaskRequest::getBody() const
{
    return body_;
}

void UpdateTaskRequest::setBody(const TaskInfo& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateTaskRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateTaskRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


