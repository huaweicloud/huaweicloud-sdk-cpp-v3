

#include "huaweicloud/cloudtest/v1/model/SetTaskResultRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




SetTaskResultRequest::SetTaskResultRequest()
{
    projectUuid_ = "";
    projectUuidIsSet_ = false;
    taskUri_ = "";
    taskUriIsSet_ = false;
    bodyIsSet_ = false;
}

SetTaskResultRequest::~SetTaskResultRequest() = default;

void SetTaskResultRequest::validate()
{
}

web::json::value SetTaskResultRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(projectUuidIsSet_) {
        val[utility::conversions::to_string_t("project_uuid")] = ModelBase::toJson(projectUuid_);
    }
    if(taskUriIsSet_) {
        val[utility::conversions::to_string_t("task_uri")] = ModelBase::toJson(taskUri_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool SetTaskResultRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("project_uuid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_uuid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectUuid(refVal);
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
            ExecuteTaskInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string SetTaskResultRequest::getProjectUuid() const
{
    return projectUuid_;
}

void SetTaskResultRequest::setProjectUuid(const std::string& value)
{
    projectUuid_ = value;
    projectUuidIsSet_ = true;
}

bool SetTaskResultRequest::projectUuidIsSet() const
{
    return projectUuidIsSet_;
}

void SetTaskResultRequest::unsetprojectUuid()
{
    projectUuidIsSet_ = false;
}

std::string SetTaskResultRequest::getTaskUri() const
{
    return taskUri_;
}

void SetTaskResultRequest::setTaskUri(const std::string& value)
{
    taskUri_ = value;
    taskUriIsSet_ = true;
}

bool SetTaskResultRequest::taskUriIsSet() const
{
    return taskUriIsSet_;
}

void SetTaskResultRequest::unsettaskUri()
{
    taskUriIsSet_ = false;
}

ExecuteTaskInfo SetTaskResultRequest::getBody() const
{
    return body_;
}

void SetTaskResultRequest::setBody(const ExecuteTaskInfo& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool SetTaskResultRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void SetTaskResultRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


