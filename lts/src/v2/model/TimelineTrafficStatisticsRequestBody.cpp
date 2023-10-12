

#include "huaweicloud/lts/v2/model/TimelineTrafficStatisticsRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




TimelineTrafficStatisticsRequestBody::TimelineTrafficStatisticsRequestBody()
{
    startTime_ = 0L;
    startTimeIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
    period_ = 0;
    periodIsSet_ = false;
    resourceType_ = "";
    resourceTypeIsSet_ = false;
    searchType_ = "";
    searchTypeIsSet_ = false;
    resourceId_ = "";
    resourceIdIsSet_ = false;
}

TimelineTrafficStatisticsRequestBody::~TimelineTrafficStatisticsRequestBody() = default;

void TimelineTrafficStatisticsRequestBody::validate()
{
}

web::json::value TimelineTrafficStatisticsRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(periodIsSet_) {
        val[utility::conversions::to_string_t("period")] = ModelBase::toJson(period_);
    }
    if(resourceTypeIsSet_) {
        val[utility::conversions::to_string_t("resource_type")] = ModelBase::toJson(resourceType_);
    }
    if(searchTypeIsSet_) {
        val[utility::conversions::to_string_t("search_type")] = ModelBase::toJson(searchType_);
    }
    if(resourceIdIsSet_) {
        val[utility::conversions::to_string_t("resource_id")] = ModelBase::toJson(resourceId_);
    }

    return val;
}
bool TimelineTrafficStatisticsRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("period"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("period"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeriod(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("search_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("search_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSearchType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceId(refVal);
        }
    }
    return ok;
}


int64_t TimelineTrafficStatisticsRequestBody::getStartTime() const
{
    return startTime_;
}

void TimelineTrafficStatisticsRequestBody::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool TimelineTrafficStatisticsRequestBody::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void TimelineTrafficStatisticsRequestBody::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t TimelineTrafficStatisticsRequestBody::getEndTime() const
{
    return endTime_;
}

void TimelineTrafficStatisticsRequestBody::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool TimelineTrafficStatisticsRequestBody::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void TimelineTrafficStatisticsRequestBody::unsetendTime()
{
    endTimeIsSet_ = false;
}

int32_t TimelineTrafficStatisticsRequestBody::getPeriod() const
{
    return period_;
}

void TimelineTrafficStatisticsRequestBody::setPeriod(int32_t value)
{
    period_ = value;
    periodIsSet_ = true;
}

bool TimelineTrafficStatisticsRequestBody::periodIsSet() const
{
    return periodIsSet_;
}

void TimelineTrafficStatisticsRequestBody::unsetperiod()
{
    periodIsSet_ = false;
}

std::string TimelineTrafficStatisticsRequestBody::getResourceType() const
{
    return resourceType_;
}

void TimelineTrafficStatisticsRequestBody::setResourceType(const std::string& value)
{
    resourceType_ = value;
    resourceTypeIsSet_ = true;
}

bool TimelineTrafficStatisticsRequestBody::resourceTypeIsSet() const
{
    return resourceTypeIsSet_;
}

void TimelineTrafficStatisticsRequestBody::unsetresourceType()
{
    resourceTypeIsSet_ = false;
}

std::string TimelineTrafficStatisticsRequestBody::getSearchType() const
{
    return searchType_;
}

void TimelineTrafficStatisticsRequestBody::setSearchType(const std::string& value)
{
    searchType_ = value;
    searchTypeIsSet_ = true;
}

bool TimelineTrafficStatisticsRequestBody::searchTypeIsSet() const
{
    return searchTypeIsSet_;
}

void TimelineTrafficStatisticsRequestBody::unsetsearchType()
{
    searchTypeIsSet_ = false;
}

std::string TimelineTrafficStatisticsRequestBody::getResourceId() const
{
    return resourceId_;
}

void TimelineTrafficStatisticsRequestBody::setResourceId(const std::string& value)
{
    resourceId_ = value;
    resourceIdIsSet_ = true;
}

bool TimelineTrafficStatisticsRequestBody::resourceIdIsSet() const
{
    return resourceIdIsSet_;
}

void TimelineTrafficStatisticsRequestBody::unsetresourceId()
{
    resourceIdIsSet_ = false;
}

}
}
}
}
}


