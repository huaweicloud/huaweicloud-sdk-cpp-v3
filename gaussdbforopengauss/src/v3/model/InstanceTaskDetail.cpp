

#include "huaweicloud/gaussdbforopengauss/v3/model/InstanceTaskDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




InstanceTaskDetail::InstanceTaskDetail()
{
    taskId_ = "";
    taskIdIsSet_ = false;
    taskName_ = "";
    taskNameIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

InstanceTaskDetail::~InstanceTaskDetail() = default;

void InstanceTaskDetail::validate()
{
}

web::json::value InstanceTaskDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIdIsSet_) {
        val[utility::conversions::to_string_t("task_id")] = ModelBase::toJson(taskId_);
    }
    if(taskNameIsSet_) {
        val[utility::conversions::to_string_t("task_name")] = ModelBase::toJson(taskName_);
    }
    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }

    return val;
}
bool InstanceTaskDetail::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("task_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskName(refVal);
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


std::string InstanceTaskDetail::getTaskId() const
{
    return taskId_;
}

void InstanceTaskDetail::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool InstanceTaskDetail::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void InstanceTaskDetail::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string InstanceTaskDetail::getTaskName() const
{
    return taskName_;
}

void InstanceTaskDetail::setTaskName(const std::string& value)
{
    taskName_ = value;
    taskNameIsSet_ = true;
}

bool InstanceTaskDetail::taskNameIsSet() const
{
    return taskNameIsSet_;
}

void InstanceTaskDetail::unsettaskName()
{
    taskNameIsSet_ = false;
}

std::string InstanceTaskDetail::getInstanceId() const
{
    return instanceId_;
}

void InstanceTaskDetail::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool InstanceTaskDetail::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void InstanceTaskDetail::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


