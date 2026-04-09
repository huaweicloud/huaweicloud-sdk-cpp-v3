

#include "huaweicloud/iotda/v5/model/ConfirmBatchTaskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




ConfirmBatchTaskRequest::ConfirmBatchTaskRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    taskId_ = "";
    taskIdIsSet_ = false;
    bodyIsSet_ = false;
}

ConfirmBatchTaskRequest::~ConfirmBatchTaskRequest() = default;

void ConfirmBatchTaskRequest::validate()
{
}

web::json::value ConfirmBatchTaskRequest::toJson() const
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
bool ConfirmBatchTaskRequest::fromJson(const web::json::value& val)
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


std::string ConfirmBatchTaskRequest::getInstanceId() const
{
    return instanceId_;
}

void ConfirmBatchTaskRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ConfirmBatchTaskRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ConfirmBatchTaskRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ConfirmBatchTaskRequest::getTaskId() const
{
    return taskId_;
}

void ConfirmBatchTaskRequest::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool ConfirmBatchTaskRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void ConfirmBatchTaskRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

BatchTargets ConfirmBatchTaskRequest::getBody() const
{
    return body_;
}

void ConfirmBatchTaskRequest::setBody(const BatchTargets& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool ConfirmBatchTaskRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void ConfirmBatchTaskRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


