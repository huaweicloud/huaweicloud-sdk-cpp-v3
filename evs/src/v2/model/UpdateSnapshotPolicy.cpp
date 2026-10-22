

#include "huaweicloud/evs/v2/model/UpdateSnapshotPolicy.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




UpdateSnapshotPolicy::UpdateSnapshotPolicy()
{
    name_ = "";
    nameIsSet_ = false;
    repeatWeekdaysIsSet_ = false;
    repeatIntervalDays_ = 0;
    repeatIntervalDaysIsSet_ = false;
    timePointsIsSet_ = false;
    retentionDays_ = 0;
    retentionDaysIsSet_ = false;
}

UpdateSnapshotPolicy::~UpdateSnapshotPolicy() = default;

void UpdateSnapshotPolicy::validate()
{
}

web::json::value UpdateSnapshotPolicy::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(repeatWeekdaysIsSet_) {
        val[utility::conversions::to_string_t("repeat_weekdays")] = ModelBase::toJson(repeatWeekdays_);
    }
    if(repeatIntervalDaysIsSet_) {
        val[utility::conversions::to_string_t("repeat_interval_days")] = ModelBase::toJson(repeatIntervalDays_);
    }
    if(timePointsIsSet_) {
        val[utility::conversions::to_string_t("time_points")] = ModelBase::toJson(timePoints_);
    }
    if(retentionDaysIsSet_) {
        val[utility::conversions::to_string_t("retention_days")] = ModelBase::toJson(retentionDays_);
    }

    return val;
}
bool UpdateSnapshotPolicy::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repeat_weekdays"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repeat_weekdays"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepeatWeekdays(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repeat_interval_days"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repeat_interval_days"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepeatIntervalDays(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("time_points"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time_points"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimePoints(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("retention_days"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("retention_days"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRetentionDays(refVal);
        }
    }
    return ok;
}


std::string UpdateSnapshotPolicy::getName() const
{
    return name_;
}

void UpdateSnapshotPolicy::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UpdateSnapshotPolicy::nameIsSet() const
{
    return nameIsSet_;
}

void UpdateSnapshotPolicy::unsetname()
{
    nameIsSet_ = false;
}

std::vector<std::string>& UpdateSnapshotPolicy::getRepeatWeekdays()
{
    return repeatWeekdays_;
}

void UpdateSnapshotPolicy::setRepeatWeekdays(const std::vector<std::string>& value)
{
    repeatWeekdays_ = value;
    repeatWeekdaysIsSet_ = true;
}

bool UpdateSnapshotPolicy::repeatWeekdaysIsSet() const
{
    return repeatWeekdaysIsSet_;
}

void UpdateSnapshotPolicy::unsetrepeatWeekdays()
{
    repeatWeekdaysIsSet_ = false;
}

int32_t UpdateSnapshotPolicy::getRepeatIntervalDays() const
{
    return repeatIntervalDays_;
}

void UpdateSnapshotPolicy::setRepeatIntervalDays(int32_t value)
{
    repeatIntervalDays_ = value;
    repeatIntervalDaysIsSet_ = true;
}

bool UpdateSnapshotPolicy::repeatIntervalDaysIsSet() const
{
    return repeatIntervalDaysIsSet_;
}

void UpdateSnapshotPolicy::unsetrepeatIntervalDays()
{
    repeatIntervalDaysIsSet_ = false;
}

std::vector<std::string>& UpdateSnapshotPolicy::getTimePoints()
{
    return timePoints_;
}

void UpdateSnapshotPolicy::setTimePoints(const std::vector<std::string>& value)
{
    timePoints_ = value;
    timePointsIsSet_ = true;
}

bool UpdateSnapshotPolicy::timePointsIsSet() const
{
    return timePointsIsSet_;
}

void UpdateSnapshotPolicy::unsettimePoints()
{
    timePointsIsSet_ = false;
}

int32_t UpdateSnapshotPolicy::getRetentionDays() const
{
    return retentionDays_;
}

void UpdateSnapshotPolicy::setRetentionDays(int32_t value)
{
    retentionDays_ = value;
    retentionDaysIsSet_ = true;
}

bool UpdateSnapshotPolicy::retentionDaysIsSet() const
{
    return retentionDaysIsSet_;
}

void UpdateSnapshotPolicy::unsetretentionDays()
{
    retentionDaysIsSet_ = false;
}

}
}
}
}
}


