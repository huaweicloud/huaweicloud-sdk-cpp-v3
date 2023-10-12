

#include "huaweicloud/gaussdb/v3/model/ListScheduleJobsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListScheduleJobsResponse::ListScheduleJobsResponse()
{
    schedulesIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListScheduleJobsResponse::~ListScheduleJobsResponse() = default;

void ListScheduleJobsResponse::validate()
{
}

web::json::value ListScheduleJobsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(schedulesIsSet_) {
        val[utility::conversions::to_string_t("schedules")] = ModelBase::toJson(schedules_);
    }
    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }

    return val;
}
bool ListScheduleJobsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("schedules"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("schedules"));
        if(!fieldValue.is_null())
        {
            std::vector<ScheduleTask> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSchedules(refVal);
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


std::vector<ScheduleTask>& ListScheduleJobsResponse::getSchedules()
{
    return schedules_;
}

void ListScheduleJobsResponse::setSchedules(const std::vector<ScheduleTask>& value)
{
    schedules_ = value;
    schedulesIsSet_ = true;
}

bool ListScheduleJobsResponse::schedulesIsSet() const
{
    return schedulesIsSet_;
}

void ListScheduleJobsResponse::unsetschedules()
{
    schedulesIsSet_ = false;
}

int32_t ListScheduleJobsResponse::getTotalCount() const
{
    return totalCount_;
}

void ListScheduleJobsResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListScheduleJobsResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListScheduleJobsResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


