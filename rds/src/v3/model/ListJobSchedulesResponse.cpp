

#include "huaweicloud/rds/v3/model/ListJobSchedulesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListJobSchedulesResponse::ListJobSchedulesResponse()
{
    schedulesIsSet_ = false;
    totalCount_ = 0;
    totalCountIsSet_ = false;
}

ListJobSchedulesResponse::~ListJobSchedulesResponse() = default;

void ListJobSchedulesResponse::validate()
{
}

web::json::value ListJobSchedulesResponse::toJson() const
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
bool ListJobSchedulesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("schedules"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("schedules"));
        if(!fieldValue.is_null())
        {
            std::vector<JobScheduleInfo> refVal;
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


std::vector<JobScheduleInfo>& ListJobSchedulesResponse::getSchedules()
{
    return schedules_;
}

void ListJobSchedulesResponse::setSchedules(const std::vector<JobScheduleInfo>& value)
{
    schedules_ = value;
    schedulesIsSet_ = true;
}

bool ListJobSchedulesResponse::schedulesIsSet() const
{
    return schedulesIsSet_;
}

void ListJobSchedulesResponse::unsetschedules()
{
    schedulesIsSet_ = false;
}

int32_t ListJobSchedulesResponse::getTotalCount() const
{
    return totalCount_;
}

void ListJobSchedulesResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListJobSchedulesResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListJobSchedulesResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

}
}
}
}
}


