

#include "huaweicloud/iotda/v5/model/RetryBatchTaskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




RetryBatchTaskRequest::RetryBatchTaskRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    taskId_ = "";
    taskIdIsSet_ = false;
    bodyIsSet_ = false;
}

RetryBatchTaskRequest::~RetryBatchTaskRequest() = default;

void RetryBatchTaskRequest::validate()
{
}

web::json::value RetryBatchTaskRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool RetryBatchTaskRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("Instance-Id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("Instance-Id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
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
            BatchTargets refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


std::string RetryBatchTaskRequest::getInstanceId() const
{
    return instanceId_;
}

void RetryBatchTaskRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool RetryBatchTaskRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void RetryBatchTaskRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string RetryBatchTaskRequest::getTaskId() const
{
    return taskId_;
}

void RetryBatchTaskRequest::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool RetryBatchTaskRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void RetryBatchTaskRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

BatchTargets RetryBatchTaskRequest::getBody() const
{
    return body_;
}

void RetryBatchTaskRequest::setBody(const BatchTargets& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool RetryBatchTaskRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void RetryBatchTaskRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


