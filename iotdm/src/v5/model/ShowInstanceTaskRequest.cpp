

#include "huaweicloud/iotdm/v5/model/ShowInstanceTaskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotdm {
namespace V5 {
namespace Model {




ShowInstanceTaskRequest::ShowInstanceTaskRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    taskId_ = "";
    taskIdIsSet_ = false;
}

ShowInstanceTaskRequest::~ShowInstanceTaskRequest() = default;

void ShowInstanceTaskRequest::validate()
{
}

web::json::value ShowInstanceTaskRequest::toJson() const
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
bool ShowInstanceTaskRequest::fromJson(const web::json::value& val)
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


std::string ShowInstanceTaskRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowInstanceTaskRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowInstanceTaskRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowInstanceTaskRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShowInstanceTaskRequest::getTaskId() const
{
    return taskId_;
}

void ShowInstanceTaskRequest::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool ShowInstanceTaskRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void ShowInstanceTaskRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

}
}
}
}
}


