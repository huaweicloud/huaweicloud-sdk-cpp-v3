

#include "huaweicloud/codeartscheck/v2/model/UpdateIgnorePathRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




UpdateIgnorePathRequest::UpdateIgnorePathRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    taskId_ = "";
    taskIdIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateIgnorePathRequest::~UpdateIgnorePathRequest() = default;

void UpdateIgnorePathRequest::validate()
{
}

web::json::value UpdateIgnorePathRequest::toJson() const
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
bool UpdateIgnorePathRequest::fromJson(const web::json::value& val)
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
            UpdateIgnorePathRequestBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string UpdateIgnorePathRequest::getProjectId() const
{
    return projectId_;
}

void UpdateIgnorePathRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool UpdateIgnorePathRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void UpdateIgnorePathRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string UpdateIgnorePathRequest::getTaskId() const
{
    return taskId_;
}

void UpdateIgnorePathRequest::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool UpdateIgnorePathRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void UpdateIgnorePathRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

UpdateIgnorePathRequestBody UpdateIgnorePathRequest::getBody() const
{
    return body_;
}

void UpdateIgnorePathRequest::setBody(const UpdateIgnorePathRequestBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateIgnorePathRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateIgnorePathRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


