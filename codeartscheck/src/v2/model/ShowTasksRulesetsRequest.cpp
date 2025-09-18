

#include "huaweicloud/codeartscheck/v2/model/ShowTasksRulesetsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




ShowTasksRulesetsRequest::ShowTasksRulesetsRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    taskId_ = "";
    taskIdIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ShowTasksRulesetsRequest::~ShowTasksRulesetsRequest() = default;

void ShowTasksRulesetsRequest::validate()
{
}

web::json::value ShowTasksRulesetsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ShowTasksRulesetsRequest::fromJson(const web::json::value& val)
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


std::string ShowTasksRulesetsRequest::getProjectId() const
{
    return projectId_;
}

void ShowTasksRulesetsRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowTasksRulesetsRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowTasksRulesetsRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ShowTasksRulesetsRequest::getTaskId() const
{
    return taskId_;
}

void ShowTasksRulesetsRequest::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool ShowTasksRulesetsRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void ShowTasksRulesetsRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

int32_t ShowTasksRulesetsRequest::getOffset() const
{
    return offset_;
}

void ShowTasksRulesetsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowTasksRulesetsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowTasksRulesetsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ShowTasksRulesetsRequest::getLimit() const
{
    return limit_;
}

void ShowTasksRulesetsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowTasksRulesetsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowTasksRulesetsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


