

#include "huaweicloud/dds/v3/model/ListScheduledTasksResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




ListScheduledTasksResponse::ListScheduledTasksResponse()
{
    totalCount_ = 0;
    totalCountIsSet_ = false;
    schedulesIsSet_ = false;
}

ListScheduledTasksResponse::~ListScheduledTasksResponse() = default;

void ListScheduledTasksResponse::validate()
{
}

web::json::value ListScheduledTasksResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(schedulesIsSet_) {
        val[utility::conversions::to_string_t("schedules")] = ModelBase::toJson(schedules_);
    }

    return val;
}
bool ListScheduledTasksResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("schedules"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("schedules"));
        if(!fieldValue.is_null())
        {
            std::vector<ScheduledTasksRsp_schedules> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSchedules(refVal);
        }
    }
    return ok;
}


int32_t ListScheduledTasksResponse::getTotalCount() const
{
    return totalCount_;
}

void ListScheduledTasksResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListScheduledTasksResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListScheduledTasksResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<ScheduledTasksRsp_schedules>& ListScheduledTasksResponse::getSchedules()
{
    return schedules_;
}

void ListScheduledTasksResponse::setSchedules(const std::vector<ScheduledTasksRsp_schedules>& value)
{
    schedules_ = value;
    schedulesIsSet_ = true;
}

bool ListScheduledTasksResponse::schedulesIsSet() const
{
    return schedulesIsSet_;
}

void ListScheduledTasksResponse::unsetschedules()
{
    schedulesIsSet_ = false;
}

}
}
}
}
}


