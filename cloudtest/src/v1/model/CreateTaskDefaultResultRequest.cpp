

#include "huaweicloud/cloudtest/v1/model/CreateTaskDefaultResultRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




CreateTaskDefaultResultRequest::CreateTaskDefaultResultRequest()
{
    projectId_ = "";
    projectIdIsSet_ = false;
    taskUri_ = "";
    taskUriIsSet_ = false;
    bodyIsSet_ = false;
}

CreateTaskDefaultResultRequest::~CreateTaskDefaultResultRequest() = default;

void CreateTaskDefaultResultRequest::validate()
{
}

web::json::value CreateTaskDefaultResultRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(taskUriIsSet_) {
        val[utility::conversions::to_string_t("task_uri")] = ModelBase::toJson(taskUri_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool CreateTaskDefaultResultRequest::fromJson(const web::json::value& val)
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
            InitExecuteTaskInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string CreateTaskDefaultResultRequest::getProjectId() const
{
    return projectId_;
}

void CreateTaskDefaultResultRequest::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool CreateTaskDefaultResultRequest::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void CreateTaskDefaultResultRequest::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string CreateTaskDefaultResultRequest::getTaskUri() const
{
    return taskUri_;
}

void CreateTaskDefaultResultRequest::setTaskUri(const std::string& value)
{
    taskUri_ = value;
    taskUriIsSet_ = true;
}

bool CreateTaskDefaultResultRequest::taskUriIsSet() const
{
    return taskUriIsSet_;
}

void CreateTaskDefaultResultRequest::unsettaskUri()
{
    taskUriIsSet_ = false;
}

InitExecuteTaskInfo CreateTaskDefaultResultRequest::getBody() const
{
    return body_;
}

void CreateTaskDefaultResultRequest::setBody(const InitExecuteTaskInfo& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool CreateTaskDefaultResultRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void CreateTaskDefaultResultRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


