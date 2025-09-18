

#include "huaweicloud/codeartscheck/v2/model/ShowTaskPathTreeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




ShowTaskPathTreeRequest::ShowTaskPathTreeRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    taskId_ = "";
    taskIdIsSet_ = false;
    currentPath_ = "";
    currentPathIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ShowTaskPathTreeRequest::~ShowTaskPathTreeRequest() = default;

void ShowTaskPathTreeRequest::validate()
{
}

web::json::value ShowTaskPathTreeRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(currentPathIsSet_) {
        val[utility::conversions::to_string_t("current_path")] = ModelBase::toJson(currentPath_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ShowTaskPathTreeRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("current_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("current_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCurrentPath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    return ok;
}


std::string ShowTaskPathTreeRequest::getProjectId() const
{
    return projectId_;
}

void ShowTaskPathTreeRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowTaskPathTreeRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowTaskPathTreeRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ShowTaskPathTreeRequest::getTaskId() const
{
    return taskId_;
}

void ShowTaskPathTreeRequest::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool ShowTaskPathTreeRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void ShowTaskPathTreeRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string ShowTaskPathTreeRequest::getCurrentPath() const
{
    return currentPath_;
}

void ShowTaskPathTreeRequest::setCurrentPath(const std::string& value)
{
    currentPath_ = value;
    currentPathIsSet_ = true;
}

bool ShowTaskPathTreeRequest::currentPathIsSet() const
{
    return currentPathIsSet_;
}

void ShowTaskPathTreeRequest::unsetcurrentPath()
{
    currentPathIsSet_ = false;
}

int32_t ShowTaskPathTreeRequest::getOffset() const
{
    return offset_;
}

void ShowTaskPathTreeRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowTaskPathTreeRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowTaskPathTreeRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ShowTaskPathTreeRequest::getLimit() const
{
    return limit_;
}

void ShowTaskPathTreeRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowTaskPathTreeRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowTaskPathTreeRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


