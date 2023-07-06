

#include "huaweicloud/cdn/v1/model/ShowHistoryTasksResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Cdn {
namespace V1 {
namespace Model {




ShowHistoryTasksResponse::ShowHistoryTasksResponse()
{
    total_ = 0;
    totalIsSet_ = false;
    tasksIsSet_ = false;
}

ShowHistoryTasksResponse::~ShowHistoryTasksResponse() = default;

void ShowHistoryTasksResponse::validate()
{
}

web::json::value ShowHistoryTasksResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalIsSet_) {
        val[utility::conversions::to_string_t("total")] = ModelBase::toJson(total_);
    }
    if(tasksIsSet_) {
        val[utility::conversions::to_string_t("tasks")] = ModelBase::toJson(tasks_);
    }

    return val;
}

bool ShowHistoryTasksResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotal(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tasks"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tasks"));
        if(!fieldValue.is_null())
        {
            std::vector<TasksObject> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTasks(refVal);
        }
    }
    return ok;
}

int32_t ShowHistoryTasksResponse::getTotal() const
{
    return total_;
}

void ShowHistoryTasksResponse::setTotal(int32_t value)
{
    total_ = value;
    totalIsSet_ = true;
}

bool ShowHistoryTasksResponse::totalIsSet() const
{
    return totalIsSet_;
}

void ShowHistoryTasksResponse::unsettotal()
{
    totalIsSet_ = false;
}

std::vector<TasksObject>& ShowHistoryTasksResponse::getTasks()
{
    return tasks_;
}

void ShowHistoryTasksResponse::setTasks(const std::vector<TasksObject>& value)
{
    tasks_ = value;
    tasksIsSet_ = true;
}

bool ShowHistoryTasksResponse::tasksIsSet() const
{
    return tasksIsSet_;
}

void ShowHistoryTasksResponse::unsettasks()
{
    tasksIsSet_ = false;
}

}
}
}
}
}


