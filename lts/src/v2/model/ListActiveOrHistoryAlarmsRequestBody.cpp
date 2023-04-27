

#include "huaweicloud/lts/v2/model/ListActiveOrHistoryAlarmsRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




ListActiveOrHistoryAlarmsRequestBody::ListActiveOrHistoryAlarmsRequestBody()
{
    step_ = 0;
    stepIsSet_ = false;
    whetherCustomField_ = false;
    whetherCustomFieldIsSet_ = false;
    startTime_ = 0L;
    startTimeIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
    timeRange_ = "";
    timeRangeIsSet_ = false;
    search_ = "";
    searchIsSet_ = false;
    alarmLevelIdsIsSet_ = false;
    sortIsSet_ = false;
}

ListActiveOrHistoryAlarmsRequestBody::~ListActiveOrHistoryAlarmsRequestBody() = default;

void ListActiveOrHistoryAlarmsRequestBody::validate()
{
}

web::json::value ListActiveOrHistoryAlarmsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(stepIsSet_) {
        val[utility::conversions::to_string_t("step")] = ModelBase::toJson(step_);
    }
    if(whetherCustomFieldIsSet_) {
        val[utility::conversions::to_string_t("whether_custom_field")] = ModelBase::toJson(whetherCustomField_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(timeRangeIsSet_) {
        val[utility::conversions::to_string_t("time_range")] = ModelBase::toJson(timeRange_);
    }
    if(searchIsSet_) {
        val[utility::conversions::to_string_t("search")] = ModelBase::toJson(search_);
    }
    if(alarmLevelIdsIsSet_) {
        val[utility::conversions::to_string_t("alarm_level_ids")] = ModelBase::toJson(alarmLevelIds_);
    }
    if(sortIsSet_) {
        val[utility::conversions::to_string_t("sort")] = ModelBase::toJson(sort_);
    }

    return val;
}

bool ListActiveOrHistoryAlarmsRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("step"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("step"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStep(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("whether_custom_field"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("whether_custom_field"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWhetherCustomField(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("time_range"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time_range"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimeRange(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("search"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("search"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSearch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("alarm_level_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("alarm_level_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAlarmLevelIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sort"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sort"));
        if(!fieldValue.is_null())
        {
            Sort refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSort(refVal);
        }
    }
    return ok;
}


int32_t ListActiveOrHistoryAlarmsRequestBody::getStep() const
{
    return step_;
}

void ListActiveOrHistoryAlarmsRequestBody::setStep(int32_t value)
{
    step_ = value;
    stepIsSet_ = true;
}

bool ListActiveOrHistoryAlarmsRequestBody::stepIsSet() const
{
    return stepIsSet_;
}

void ListActiveOrHistoryAlarmsRequestBody::unsetstep()
{
    stepIsSet_ = false;
}

bool ListActiveOrHistoryAlarmsRequestBody::isWhetherCustomField() const
{
    return whetherCustomField_;
}

void ListActiveOrHistoryAlarmsRequestBody::setWhetherCustomField(bool value)
{
    whetherCustomField_ = value;
    whetherCustomFieldIsSet_ = true;
}

bool ListActiveOrHistoryAlarmsRequestBody::whetherCustomFieldIsSet() const
{
    return whetherCustomFieldIsSet_;
}

void ListActiveOrHistoryAlarmsRequestBody::unsetwhetherCustomField()
{
    whetherCustomFieldIsSet_ = false;
}

int64_t ListActiveOrHistoryAlarmsRequestBody::getStartTime() const
{
    return startTime_;
}

void ListActiveOrHistoryAlarmsRequestBody::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListActiveOrHistoryAlarmsRequestBody::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListActiveOrHistoryAlarmsRequestBody::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t ListActiveOrHistoryAlarmsRequestBody::getEndTime() const
{
    return endTime_;
}

void ListActiveOrHistoryAlarmsRequestBody::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListActiveOrHistoryAlarmsRequestBody::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListActiveOrHistoryAlarmsRequestBody::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string ListActiveOrHistoryAlarmsRequestBody::getTimeRange() const
{
    return timeRange_;
}

void ListActiveOrHistoryAlarmsRequestBody::setTimeRange(const std::string& value)
{
    timeRange_ = value;
    timeRangeIsSet_ = true;
}

bool ListActiveOrHistoryAlarmsRequestBody::timeRangeIsSet() const
{
    return timeRangeIsSet_;
}

void ListActiveOrHistoryAlarmsRequestBody::unsettimeRange()
{
    timeRangeIsSet_ = false;
}

std::string ListActiveOrHistoryAlarmsRequestBody::getSearch() const
{
    return search_;
}

void ListActiveOrHistoryAlarmsRequestBody::setSearch(const std::string& value)
{
    search_ = value;
    searchIsSet_ = true;
}

bool ListActiveOrHistoryAlarmsRequestBody::searchIsSet() const
{
    return searchIsSet_;
}

void ListActiveOrHistoryAlarmsRequestBody::unsetsearch()
{
    searchIsSet_ = false;
}

std::vector<std::string>& ListActiveOrHistoryAlarmsRequestBody::getAlarmLevelIds()
{
    return alarmLevelIds_;
}

void ListActiveOrHistoryAlarmsRequestBody::setAlarmLevelIds(const std::vector<std::string>& value)
{
    alarmLevelIds_ = value;
    alarmLevelIdsIsSet_ = true;
}

bool ListActiveOrHistoryAlarmsRequestBody::alarmLevelIdsIsSet() const
{
    return alarmLevelIdsIsSet_;
}

void ListActiveOrHistoryAlarmsRequestBody::unsetalarmLevelIds()
{
    alarmLevelIdsIsSet_ = false;
}

Sort ListActiveOrHistoryAlarmsRequestBody::getSort() const
{
    return sort_;
}

void ListActiveOrHistoryAlarmsRequestBody::setSort(const Sort& value)
{
    sort_ = value;
    sortIsSet_ = true;
}

bool ListActiveOrHistoryAlarmsRequestBody::sortIsSet() const
{
    return sortIsSet_;
}

void ListActiveOrHistoryAlarmsRequestBody::unsetsort()
{
    sortIsSet_ = false;
}

}
}
}
}
}


