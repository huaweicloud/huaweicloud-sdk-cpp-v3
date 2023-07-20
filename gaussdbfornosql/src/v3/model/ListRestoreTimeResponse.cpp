

#include "huaweicloud/gaussdbfornosql/v3/model/ListRestoreTimeResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ListRestoreTimeResponse::ListRestoreTimeResponse()
{
    totalCount_ = 0;
    totalCountIsSet_ = false;
    restorableTimePeriodsIsSet_ = false;
}

ListRestoreTimeResponse::~ListRestoreTimeResponse() = default;

void ListRestoreTimeResponse::validate()
{
}

web::json::value ListRestoreTimeResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(totalCountIsSet_) {
        val[utility::conversions::to_string_t("total_count")] = ModelBase::toJson(totalCount_);
    }
    if(restorableTimePeriodsIsSet_) {
        val[utility::conversions::to_string_t("restorable_time_periods")] = ModelBase::toJson(restorableTimePeriods_);
    }

    return val;
}

bool ListRestoreTimeResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("restorable_time_periods"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("restorable_time_periods"));
        if(!fieldValue.is_null())
        {
            std::vector<RestorableTime> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRestorableTimePeriods(refVal);
        }
    }
    return ok;
}

int32_t ListRestoreTimeResponse::getTotalCount() const
{
    return totalCount_;
}

void ListRestoreTimeResponse::setTotalCount(int32_t value)
{
    totalCount_ = value;
    totalCountIsSet_ = true;
}

bool ListRestoreTimeResponse::totalCountIsSet() const
{
    return totalCountIsSet_;
}

void ListRestoreTimeResponse::unsettotalCount()
{
    totalCountIsSet_ = false;
}

std::vector<RestorableTime>& ListRestoreTimeResponse::getRestorableTimePeriods()
{
    return restorableTimePeriods_;
}

void ListRestoreTimeResponse::setRestorableTimePeriods(const std::vector<RestorableTime>& value)
{
    restorableTimePeriods_ = value;
    restorableTimePeriodsIsSet_ = true;
}

bool ListRestoreTimeResponse::restorableTimePeriodsIsSet() const
{
    return restorableTimePeriodsIsSet_;
}

void ListRestoreTimeResponse::unsetrestorableTimePeriods()
{
    restorableTimePeriodsIsSet_ = false;
}

}
}
}
}
}


