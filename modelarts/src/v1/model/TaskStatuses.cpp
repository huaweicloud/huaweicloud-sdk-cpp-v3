

#include "huaweicloud/modelarts/v1/model/TaskStatuses.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




TaskStatuses::TaskStatuses()
{
    task_ = "";
    taskIsSet_ = false;
    exitCode_ = 0;
    exitCodeIsSet_ = false;
    message_ = "";
    messageIsSet_ = false;
}

TaskStatuses::~TaskStatuses() = default;

void TaskStatuses::validate()
{
}

web::json::value TaskStatuses::toJson() const
{
    web::json::value val = web::json::value::object();

    if(taskIsSet_) {
        val[utility::conversions::to_string_t("task")] = ModelBase::toJson(task_);
    }
    if(exitCodeIsSet_) {
        val[utility::conversions::to_string_t("exit_code")] = ModelBase::toJson(exitCode_);
    }
    if(messageIsSet_) {
        val[utility::conversions::to_string_t("message")] = ModelBase::toJson(message_);
    }

    return val;
}
bool TaskStatuses::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("task"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTask(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("exit_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("exit_code"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExitCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("message"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("message"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMessage(refVal);
        }
    }
    return ok;
}


std::string TaskStatuses::getTask() const
{
    return task_;
}

void TaskStatuses::setTask(const std::string& value)
{
    task_ = value;
    taskIsSet_ = true;
}

bool TaskStatuses::taskIsSet() const
{
    return taskIsSet_;
}

void TaskStatuses::unsettask()
{
    taskIsSet_ = false;
}

int32_t TaskStatuses::getExitCode() const
{
    return exitCode_;
}

void TaskStatuses::setExitCode(int32_t value)
{
    exitCode_ = value;
    exitCodeIsSet_ = true;
}

bool TaskStatuses::exitCodeIsSet() const
{
    return exitCodeIsSet_;
}

void TaskStatuses::unsetexitCode()
{
    exitCodeIsSet_ = false;
}

std::string TaskStatuses::getMessage() const
{
    return message_;
}

void TaskStatuses::setMessage(const std::string& value)
{
    message_ = value;
    messageIsSet_ = true;
}

bool TaskStatuses::messageIsSet() const
{
    return messageIsSet_;
}

void TaskStatuses::unsetmessage()
{
    messageIsSet_ = false;
}

}
}
}
}
}


