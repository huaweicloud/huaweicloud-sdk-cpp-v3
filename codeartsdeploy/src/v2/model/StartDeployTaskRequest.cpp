

#include "huaweicloud/codeartsdeploy/v2/model/StartDeployTaskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




StartDeployTaskRequest::StartDeployTaskRequest()
{
    taskId_ = "";
    taskIdIsSet_ = false;
    bodyIsSet_ = false;
}

StartDeployTaskRequest::~StartDeployTaskRequest() = default;

void StartDeployTaskRequest::validate()
{
}

web::json::value StartDeployTaskRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool StartDeployTaskRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
            EnvExecutionBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string StartDeployTaskRequest::getTaskId() const
{
    return taskId_;
}

void StartDeployTaskRequest::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool StartDeployTaskRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void StartDeployTaskRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

EnvExecutionBody StartDeployTaskRequest::getBody() const
{
    return body_;
}

void StartDeployTaskRequest::setBody(const EnvExecutionBody& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool StartDeployTaskRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void StartDeployTaskRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


