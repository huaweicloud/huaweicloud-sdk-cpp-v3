

#include "huaweicloud/antiddos/v1/model/ListWeeklyReportsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V1 {
namespace Model {




ListWeeklyReportsResponse::ListWeeklyReportsResponse()
{
    ddosInterceptTimes_ = 0;
    ddosInterceptTimesIsSet_ = false;
    weekdataIsSet_ = false;
    top10IsSet_ = false;
}

ListWeeklyReportsResponse::~ListWeeklyReportsResponse() = default;

void ListWeeklyReportsResponse::validate()
{
}

web::json::value ListWeeklyReportsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(ddosInterceptTimesIsSet_) {
        val[utility::conversions::to_string_t("ddos_intercept_times")] = ModelBase::toJson(ddosInterceptTimes_);
    }
    if(weekdataIsSet_) {
        val[utility::conversions::to_string_t("weekdata")] = ModelBase::toJson(weekdata_);
    }
    if(top10IsSet_) {
        val[utility::conversions::to_string_t("top10")] = ModelBase::toJson(top10_);
    }

    return val;
}
bool ListWeeklyReportsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("ddos_intercept_times"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ddos_intercept_times"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDdosInterceptTimes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("weekdata"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("weekdata"));
        if(!fieldValue.is_null())
        {
            std::vector<WeeklyCount> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWeekdata(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("top10"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("top10"));
        if(!fieldValue.is_null())
        {
            std::vector<WeeklyTop10> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTop10(refVal);
        }
    }
    return ok;
}


int32_t ListWeeklyReportsResponse::getDdosInterceptTimes() const
{
    return ddosInterceptTimes_;
}

void ListWeeklyReportsResponse::setDdosInterceptTimes(int32_t value)
{
    ddosInterceptTimes_ = value;
    ddosInterceptTimesIsSet_ = true;
}

bool ListWeeklyReportsResponse::ddosInterceptTimesIsSet() const
{
    return ddosInterceptTimesIsSet_;
}

void ListWeeklyReportsResponse::unsetddosInterceptTimes()
{
    ddosInterceptTimesIsSet_ = false;
}

std::vector<WeeklyCount>& ListWeeklyReportsResponse::getWeekdata()
{
    return weekdata_;
}

void ListWeeklyReportsResponse::setWeekdata(const std::vector<WeeklyCount>& value)
{
    weekdata_ = value;
    weekdataIsSet_ = true;
}

bool ListWeeklyReportsResponse::weekdataIsSet() const
{
    return weekdataIsSet_;
}

void ListWeeklyReportsResponse::unsetweekdata()
{
    weekdataIsSet_ = false;
}

std::vector<WeeklyTop10>& ListWeeklyReportsResponse::getTop10()
{
    return top10_;
}

void ListWeeklyReportsResponse::setTop10(const std::vector<WeeklyTop10>& value)
{
    top10_ = value;
    top10IsSet_ = true;
}

bool ListWeeklyReportsResponse::top10IsSet() const
{
    return top10IsSet_;
}

void ListWeeklyReportsResponse::unsettop10()
{
    top10IsSet_ = false;
}

}
}
}
}
}


