

#include "huaweicloud/codeartsdeploy/v2/model/StopDeployTaskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




StopDeployTaskRequest::StopDeployTaskRequest()
{
    taskId_ = "";
    taskIdIsSet_ = false;
    recordId_ = "";
    recordIdIsSet_ = false;
    body_ = "";
    bodyIsSet_ = false;
}

StopDeployTaskRequest::~StopDeployTaskRequest() = default;

void StopDeployTaskRequest::validate()
{
}

web::json::value StopDeployTaskRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(recordIdIsSet_) {
        val[utility::conversions::to_string_t("record_id")] = ModelBase::toJson(recordId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool StopDeployTaskRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("record_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("record_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRecordId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string StopDeployTaskRequest::getTaskId() const
{
    return taskId_;
}

void StopDeployTaskRequest::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool StopDeployTaskRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void StopDeployTaskRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string StopDeployTaskRequest::getRecordId() const
{
    return recordId_;
}

void StopDeployTaskRequest::setRecordId(const std::string& value)
{
    recordId_ = value;
    recordIdIsSet_ = true;
}

bool StopDeployTaskRequest::recordIdIsSet() const
{
    return recordIdIsSet_;
}

void StopDeployTaskRequest::unsetrecordId()
{
    recordIdIsSet_ = false;
}

std::string StopDeployTaskRequest::getBody() const
{
    return body_;
}

void StopDeployTaskRequest::setBody(const std::string& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool StopDeployTaskRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void StopDeployTaskRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


