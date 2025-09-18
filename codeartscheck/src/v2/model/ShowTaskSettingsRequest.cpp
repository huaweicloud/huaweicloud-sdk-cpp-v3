

#include "huaweicloud/codeartscheck/v2/model/ShowTaskSettingsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




ShowTaskSettingsRequest::ShowTaskSettingsRequest()
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

ShowTaskSettingsRequest::~ShowTaskSettingsRequest() = default;

void ShowTaskSettingsRequest::validate()
{
}

web::json::value ShowTaskSettingsRequest::toJson() const
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
bool ShowTaskSettingsRequest::fromJson(const web::json::value& val)
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


std::string ShowTaskSettingsRequest::getProjectId() const
{
    return projectId_;
}

void ShowTaskSettingsRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowTaskSettingsRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowTaskSettingsRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ShowTaskSettingsRequest::getTaskId() const
{
    return taskId_;
}

void ShowTaskSettingsRequest::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool ShowTaskSettingsRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void ShowTaskSettingsRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

int32_t ShowTaskSettingsRequest::getOffset() const
{
    return offset_;
}

void ShowTaskSettingsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ShowTaskSettingsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ShowTaskSettingsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ShowTaskSettingsRequest::getLimit() const
{
    return limit_;
}

void ShowTaskSettingsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ShowTaskSettingsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ShowTaskSettingsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


