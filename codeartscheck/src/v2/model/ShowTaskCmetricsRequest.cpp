

#include "huaweicloud/codeartscheck/v2/model/ShowTaskCmetricsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




ShowTaskCmetricsRequest::ShowTaskCmetricsRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    taskId_ = "";
    taskIdIsSet_ = false;
}

ShowTaskCmetricsRequest::~ShowTaskCmetricsRequest() = default;

void ShowTaskCmetricsRequest::validate()
{
}

web::json::value ShowTaskCmetricsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }

    return val;
}
bool ShowTaskCmetricsRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ShowTaskCmetricsRequest::getProjectId() const
{
    return projectId_;
}

void ShowTaskCmetricsRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowTaskCmetricsRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowTaskCmetricsRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ShowTaskCmetricsRequest::getTaskId() const
{
    return taskId_;
}

void ShowTaskCmetricsRequest::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool ShowTaskCmetricsRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void ShowTaskCmetricsRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

}
}
}
}
}


