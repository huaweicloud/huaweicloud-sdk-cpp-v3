

#include "huaweicloud/vod/v1/model/WorkflowTask.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




WorkflowTask::WorkflowTask()
{
    inputIsSet_ = false;
    taskResultIsSet_ = false;
}

WorkflowTask::~WorkflowTask() = default;

void WorkflowTask::validate()
{
}

web::json::value WorkflowTask::toJson() const
{
    web::json::value val = web::json::value::object();

    if(inputIsSet_) {
        val[utility::conversions::to_string_t("input")] = ModelBase::toJson(input_);
    }
    if(taskResultIsSet_) {
        val[utility::conversions::to_string_t("task_result")] = ModelBase::toJson(taskResult_);
    }

    return val;
}
bool WorkflowTask::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("input"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("input"));
        if(!fieldValue.is_null())
        {
            ObsInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInput(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_result"));
        if(!fieldValue.is_null())
        {
            std::vector<ObjectTaskResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskResult(refVal);
        }
    }
    return ok;
}


ObsInfo WorkflowTask::getInput() const
{
    return input_;
}

void WorkflowTask::setInput(const ObsInfo& value)
{
    input_ = value;
    inputIsSet_ = true;
}

bool WorkflowTask::inputIsSet() const
{
    return inputIsSet_;
}

void WorkflowTask::unsetinput()
{
    inputIsSet_ = false;
}

std::vector<ObjectTaskResult>& WorkflowTask::getTaskResult()
{
    return taskResult_;
}

void WorkflowTask::setTaskResult(const std::vector<ObjectTaskResult>& value)
{
    taskResult_ = value;
    taskResultIsSet_ = true;
}

bool WorkflowTask::taskResultIsSet() const
{
    return taskResultIsSet_;
}

void WorkflowTask::unsettaskResult()
{
    taskResultIsSet_ = false;
}

}
}
}
}
}


