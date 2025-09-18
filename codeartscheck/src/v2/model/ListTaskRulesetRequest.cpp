

#include "huaweicloud/codeartscheck/v2/model/ListTaskRulesetRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




ListTaskRulesetRequest::ListTaskRulesetRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    taskId_ = "";
    taskIdIsSet_ = false;
}

ListTaskRulesetRequest::~ListTaskRulesetRequest() = default;

void ListTaskRulesetRequest::validate()
{
}

web::json::value ListTaskRulesetRequest::toJson() const
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
bool ListTaskRulesetRequest::fromJson(const web::json::value& val)
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


std::string ListTaskRulesetRequest::getProjectId() const
{
    return projectId_;
}

void ListTaskRulesetRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListTaskRulesetRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListTaskRulesetRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ListTaskRulesetRequest::getTaskId() const
{
    return taskId_;
}

void ListTaskRulesetRequest::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool ListTaskRulesetRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void ListTaskRulesetRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

}
}
}
}
}


