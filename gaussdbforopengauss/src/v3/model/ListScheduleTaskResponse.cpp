

#include "huaweicloud/gaussdbforopengauss/v3/model/ListScheduleTaskResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ListScheduleTaskResponse::ListScheduleTaskResponse()
{
    tasksIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListScheduleTaskResponse::~ListScheduleTaskResponse() = default;

void ListScheduleTaskResponse::validate()
{
}

web::json::value ListScheduleTaskResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(tasksIsSet_) {
        val[utility::conversions::to_string_t("tasks")] = ModelBase::toJson(tasks_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}
bool ListScheduleTaskResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("tasks"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tasks"));
        if(!fieldValue.is_null())
        {
            std::vector<ScheduleTaskDetail> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTasks(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    return ok;
}


std::vector<ScheduleTaskDetail>& ListScheduleTaskResponse::getTasks()
{
    return tasks_;
}

void ListScheduleTaskResponse::setTasks(const std::vector<ScheduleTaskDetail>& value)
{
    tasks_ = value;
    tasksIsSet_ = true;
}

bool ListScheduleTaskResponse::tasksIsSet() const
{
    return tasksIsSet_;
}

void ListScheduleTaskResponse::unsettasks()
{
    tasksIsSet_ = false;
}

int32_t ListScheduleTaskResponse::getTotalCount() const
{
    return totalCount_;
}

void ListScheduleTaskResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListScheduleTaskResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListScheduleTaskResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


