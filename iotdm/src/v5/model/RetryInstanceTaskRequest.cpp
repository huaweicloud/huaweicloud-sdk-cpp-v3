

#include "huaweicloud/iotdm/v5/model/RetryInstanceTaskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotdm {
namespace V5 {
namespace Model {




RetryInstanceTaskRequest::RetryInstanceTaskRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    taskId_ = "";
    taskIdIsSet_ = false;
}

RetryInstanceTaskRequest::~RetryInstanceTaskRequest() = default;

void RetryInstanceTaskRequest::validate()
{
}

web::json::value RetryInstanceTaskRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }

    return val;
}
bool RetryInstanceTaskRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
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
    return ok;
}


std::string RetryInstanceTaskRequest::getInstanceId() const
{
    return instanceId_;
}

void RetryInstanceTaskRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool RetryInstanceTaskRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void RetryInstanceTaskRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string RetryInstanceTaskRequest::getTaskId() const
{
    return taskId_;
}

void RetryInstanceTaskRequest::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool RetryInstanceTaskRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void RetryInstanceTaskRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

}
}
}
}
}


