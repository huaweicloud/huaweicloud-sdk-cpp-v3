

#include "huaweicloud/codeartscheck/v2/model/ShowTasklogRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




ShowTasklogRequest::ShowTasklogRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    taskId_ = "";
    taskIdIsSet_ = false;
    executeId_ = "";
    executeIdIsSet_ = false;
}

ShowTasklogRequest::~ShowTasklogRequest() = default;

void ShowTasklogRequest::validate()
{
}

web::json::value ShowTasklogRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(executeIdIsSet_) {
        val[utility::conversions::to_string_t("execute_id")] = ModelBase::toJson(executeId_);
    }

    return val;
}
bool ShowTasklogRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("execute_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execute_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecuteId(refVal);
        }
    }
    return ok;
}


std::string ShowTasklogRequest::getProjectId() const
{
    return projectId_;
}

void ShowTasklogRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowTasklogRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowTasklogRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ShowTasklogRequest::getTaskId() const
{
    return taskId_;
}

void ShowTasklogRequest::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool ShowTasklogRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void ShowTasklogRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string ShowTasklogRequest::getExecuteId() const
{
    return executeId_;
}

void ShowTasklogRequest::setExecuteId(const std::string& value)
{
    executeId_ = value;
    executeIdIsSet_ = true;
}

bool ShowTasklogRequest::executeIdIsSet() const
{
    return executeIdIsSet_;
}

void ShowTasklogRequest::unsetexecuteId()
{
    executeIdIsSet_ = false;
}

}
}
}
}
}


