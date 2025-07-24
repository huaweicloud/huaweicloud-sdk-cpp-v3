

#include "huaweicloud/cloudtest/v1/model/TaskListVo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {
namespace Model {




TaskListVo::TaskListVo()
{
    tasksIsSet_ = false;
    runningCount_ = 0;
    runningCountIsSet_ = false;
}

TaskListVo::~TaskListVo() = default;

void TaskListVo::validate()
{
}

web::json::value TaskListVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tasksIsSet_) {
        val[utility::conversions::to_string_t("tasks")] = ModelBase::toJson(tasks_);
    }
    if(runningCountIsSet_) {
        val[utility::conversions::to_string_t("running_count")] = ModelBase::toJson(runningCount_);
    }

    return val;
}
bool TaskListVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tasks"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tasks"));
        if(!fieldValue.is_null())
        {
            std::vector<TaskVo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTasks(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("running_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("running_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRunningCount(refVal);
        }
    }
    return ok;
}


std::vector<TaskVo>& TaskListVo::getTasks()
{
    return tasks_;
}

void TaskListVo::setTasks(const std::vector<TaskVo>& value)
{
    tasks_ = value;
    tasksIsSet_ = true;
}

bool TaskListVo::tasksIsSet() const
{
    return tasksIsSet_;
}

void TaskListVo::unsettasks()
{
    tasksIsSet_ = false;
}

int32_t TaskListVo::getRunningCount() const
{
    return runningCount_;
}

void TaskListVo::setRunningCount(int32_t value)
{
    runningCount_ = value;
    runningCountIsSet_ = true;
}

bool TaskListVo::runningCountIsSet() const
{
    return runningCountIsSet_;
}

void TaskListVo::unsetrunningCount()
{
    runningCountIsSet_ = false;
}

}
}
}
}
}


