

#include "huaweicloud/gaussdbfornosql/v3/model/ListNosqlTaskListResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ListNosqlTaskListResponse::ListNosqlTaskListResponse()
{
    totalCount_ = "";
    totalCountIsSet_ = false;
    schedulesIsSet_ = false;
}

ListNosqlTaskListResponse::~ListNosqlTaskListResponse() = default;

void ListNosqlTaskListResponse::validate()
{
}

web::json::value ListNosqlTaskListResponse::toJson() const
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
bool ListNosqlTaskListResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("total_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_count"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("schedules"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("schedules"));
        if(!fieldValue.is_null())
        {
            std::vector<ScheduleDetailInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSchedules(refVal);
        }
    }
    return ok;
}


std::string ListNosqlTaskListResponse::getTotalCount() const
{
    return totalCount_;
}

void ListNosqlTaskListResponse::setTotalCount(const std::string& value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListNosqlTaskListResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListNosqlTaskListResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<ScheduleDetailInfo>& ListNosqlTaskListResponse::getSchedules()
{
    return schedules_;
}

void ListNosqlTaskListResponse::setSchedules(const std::vector<ScheduleDetailInfo>& value)
{
    schedules_ = value;
    schedulesIsSet_ = true;
}

bool ListNosqlTaskListResponse::schedulesIsSet() const
{
    return schedulesIsSet_;
}

void ListNosqlTaskListResponse::unsetschedules()
{
    schedulesIsSet_ = false;
}

}
}
}
}
}


