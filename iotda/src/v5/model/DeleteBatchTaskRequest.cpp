

#include "huaweicloud/iotda/v5/model/DeleteBatchTaskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




DeleteBatchTaskRequest::DeleteBatchTaskRequest()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    taskId_ = "";
    taskIdIsSet_ = false;
}

DeleteBatchTaskRequest::~DeleteBatchTaskRequest() = default;

void DeleteBatchTaskRequest::validate()
{
}

web::json::value DeleteBatchTaskRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("Instance-Id")] = ModelBase::toJson(instanceId_);
    }
    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }

    return val;
}
bool DeleteBatchTaskRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string DeleteBatchTaskRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteBatchTaskRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteBatchTaskRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteBatchTaskRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string DeleteBatchTaskRequest::getTaskId() const
{
    return taskId_;
}

void DeleteBatchTaskRequest::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool DeleteBatchTaskRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void DeleteBatchTaskRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

}
}
}
}
}


