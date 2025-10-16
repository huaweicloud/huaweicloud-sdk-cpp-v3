

#include "huaweicloud/rds/v3/model/JobScheduleOneTimeOccurrenceInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




JobScheduleOneTimeOccurrenceInfo::JobScheduleOneTimeOccurrenceInfo()
{
    activeStartDate_ = "";
    activeStartDateIsSet_ = false;
    activeStartTime_ = "";
    activeStartTimeIsSet_ = false;
}

JobScheduleOneTimeOccurrenceInfo::~JobScheduleOneTimeOccurrenceInfo() = default;

void JobScheduleOneTimeOccurrenceInfo::validate()
{
}

web::json::value JobScheduleOneTimeOccurrenceInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(activeStartDateIsSet_) {
        val[utility::conversions::to_string_t("active_start_date")] = ModelBase::toJson(activeStartDate_);
    }
    if(activeStartTimeIsSet_) {
        val[utility::conversions::to_string_t("active_start_time")] = ModelBase::toJson(activeStartTime_);
    }

    return val;
}
bool JobScheduleOneTimeOccurrenceInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("active_start_date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("active_start_date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActiveStartDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("active_start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("active_start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setActiveStartTime(refVal);
        }
    }
    return ok;
}


std::string JobScheduleOneTimeOccurrenceInfo::getActiveStartDate() const
{
    return activeStartDate_;
}

void JobScheduleOneTimeOccurrenceInfo::setActiveStartDate(const std::string& value)
{
    activeStartDate_ = value;
    activeStartDateIsSet_ = true;
}

bool JobScheduleOneTimeOccurrenceInfo::activeStartDateIsSet() const
{
    return activeStartDateIsSet_;
}

void JobScheduleOneTimeOccurrenceInfo::unsetactiveStartDate()
{
    activeStartDateIsSet_ = false;
}

std::string JobScheduleOneTimeOccurrenceInfo::getActiveStartTime() const
{
    return activeStartTime_;
}

void JobScheduleOneTimeOccurrenceInfo::setActiveStartTime(const std::string& value)
{
    activeStartTime_ = value;
    activeStartTimeIsSet_ = true;
}

bool JobScheduleOneTimeOccurrenceInfo::activeStartTimeIsSet() const
{
    return activeStartTimeIsSet_;
}

void JobScheduleOneTimeOccurrenceInfo::unsetactiveStartTime()
{
    activeStartTimeIsSet_ = false;
}

}
}
}
}
}


