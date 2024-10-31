

#include "huaweicloud/gaussdbforopengauss/v3/model/DeleteLimitTaskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




DeleteLimitTaskRequest::DeleteLimitTaskRequest()
{
    taskId_ = "";
    taskIdIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

DeleteLimitTaskRequest::~DeleteLimitTaskRequest() = default;

void DeleteLimitTaskRequest::validate()
{
}

web::json::value DeleteLimitTaskRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool DeleteLimitTaskRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
    return ok;
}


std::string DeleteLimitTaskRequest::getTaskId() const
{
    return taskId_;
}

void DeleteLimitTaskRequest::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool DeleteLimitTaskRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void DeleteLimitTaskRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string DeleteLimitTaskRequest::getInstanceId() const
{
    return instanceId_;
}

void DeleteLimitTaskRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool DeleteLimitTaskRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void DeleteLimitTaskRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


