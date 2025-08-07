

#include "huaweicloud/rds/v3/model/ListScheduleTasksResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListScheduleTasksResponse::ListScheduleTasksResponse()
{
    scheduleTasksIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListScheduleTasksResponse::~ListScheduleTasksResponse() = default;

void ListScheduleTasksResponse::validate()
{
}

web::json::value ListScheduleTasksResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(scheduleTasksIsSet_) {
        val[utility::conversions::to_string_t("schedule_tasks")] = ModelBase::toJson(scheduleTasks_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}
bool ListScheduleTasksResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("schedule_tasks"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("schedule_tasks"));
        if(!fieldValue.is_null())
        {
            std::vector<ScheduleTaskInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScheduleTasks(refVal);
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


std::vector<ScheduleTaskInfo>& ListScheduleTasksResponse::getScheduleTasks()
{
    return scheduleTasks_;
}

void ListScheduleTasksResponse::setScheduleTasks(const std::vector<ScheduleTaskInfo>& value)
{
    scheduleTasks_ = value;
    scheduleTasksIsSet_ = true;
}

bool ListScheduleTasksResponse::scheduleTasksIsSet() const
{
    return scheduleTasksIsSet_;
}

void ListScheduleTasksResponse::unsetscheduleTasks()
{
    scheduleTasksIsSet_ = false;
}

int32_t ListScheduleTasksResponse::getTotalCount() const
{
    return totalCount_;
}

void ListScheduleTasksResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListScheduleTasksResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListScheduleTasksResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


