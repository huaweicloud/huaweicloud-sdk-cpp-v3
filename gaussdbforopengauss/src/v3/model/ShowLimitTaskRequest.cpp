

#include "huaweicloud/gaussdbforopengauss/v3/model/ShowLimitTaskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ShowLimitTaskRequest::ShowLimitTaskRequest()
{
    taskId_ = "";
    taskIdIsSet_ = false;
    instanceId_ = "";
    instanceIdIsSet_ = false;
}

ShowLimitTaskRequest::~ShowLimitTaskRequest() = default;

void ShowLimitTaskRequest::validate()
{
}

web::json::value ShowLimitTaskRequest::toJson() const
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
bool ShowLimitTaskRequest::fromJson(const web::json::value& val)
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


std::string ShowLimitTaskRequest::getTaskId() const
{
    return taskId_;
}

void ShowLimitTaskRequest::setTaskId(const std::string& value)
{
    taskId_ = value;
    taskIdIsSet_ = true;
}

bool ShowLimitTaskRequest::taskIdIsSet() const
{
    return taskIdIsSet_;
}

void ShowLimitTaskRequest::unsettaskId()
{
    taskIdIsSet_ = false;
}

std::string ShowLimitTaskRequest::getInstanceId() const
{
    return instanceId_;
}

void ShowLimitTaskRequest::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShowLimitTaskRequest::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShowLimitTaskRequest::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

}
}
}
}
}


