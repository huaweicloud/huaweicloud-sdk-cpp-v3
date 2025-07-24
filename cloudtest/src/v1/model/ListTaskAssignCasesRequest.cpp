

#include "huaweicloud/cloudtest/v1/model/ListTaskAssignCasesRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




ListTaskAssignCasesRequest::ListTaskAssignCasesRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    taskId_ = "";
    taskIdIsSet_ = false;
    bodyIsSet_ = false;
}

ListTaskAssignCasesRequest::~ListTaskAssignCasesRequest() = default;

void ListTaskAssignCasesRequest::validate()
{
}

web::json::value ListTaskAssignCasesRequest::toJson() const
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
bool ListTaskAssignCasesRequest::fromJson(const web::json::value& val)
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
            QueryTaskAssignCasesInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string ListTaskAssignCasesRequest::getProjectId() const
{
    return projectId_;
}

void ListTaskAssignCasesRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ListTaskAssignCasesRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ListTaskAssignCasesRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ListTaskAssignCasesRequest::getTaskId() const
{
    return taskId_;
}

void ListTaskAssignCasesRequest::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool ListTaskAssignCasesRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void ListTaskAssignCasesRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

QueryTaskAssignCasesInfo ListTaskAssignCasesRequest::getBody() const
{
    return body_;
}

void ListTaskAssignCasesRequest::setBody(const QueryTaskAssignCasesInfo& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ListTaskAssignCasesRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ListTaskAssignCasesRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


