

#include "huaweicloud/codeartscheck/v2/model/UpdateTaskSettingsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




UpdateTaskSettingsRequest::UpdateTaskSettingsRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    taskId_ = "";
    taskIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateTaskSettingsRequest::~UpdateTaskSettingsRequest() = default;

void UpdateTaskSettingsRequest::validate()
{
}

web::json::value UpdateTaskSettingsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateTaskSettingsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            UpdateTaskSettingsRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateTaskSettingsRequest::getProjectId() const
{
    return projectId_;
}

void UpdateTaskSettingsRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool UpdateTaskSettingsRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void UpdateTaskSettingsRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string UpdateTaskSettingsRequest::getTaskId() const
{
    return taskId_;
}

void UpdateTaskSettingsRequest::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool UpdateTaskSettingsRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void UpdateTaskSettingsRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

UpdateTaskSettingsRequestBody UpdateTaskSettingsRequest::getBody() const
{
    return body_;
}

void UpdateTaskSettingsRequest::setBody(const UpdateTaskSettingsRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateTaskSettingsRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateTaskSettingsRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


