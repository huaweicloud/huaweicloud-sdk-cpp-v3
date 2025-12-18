

#include "huaweicloud/meeting/v1/model/SearchStatisticConferenceParticipantRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




SearchStatisticConferenceParticipantRequest::SearchStatisticConferenceParticipantRequest()
{
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    timeUnit_ = "";
    timeUnitIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    category_ = "";
    categoryIsSet_ = false;
}

SearchStatisticConferenceParticipantRequest::~SearchStatisticConferenceParticipantRequest() = default;

void SearchStatisticConferenceParticipantRequest::validate()
{
}

web::json::value SearchStatisticConferenceParticipantRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(timeUnitIsSet_) {
        val[utility::conversions::to_string_t("timeUnit")] = ModelBase::toJson(timeUnit_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("startTime")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("endTime")] = ModelBase::toJson(endTime_);
    }
    if(categoryIsSet_) {
        val[utility::conversions::to_string_t("category")] = ModelBase::toJson(category_);
    }

    return val;
}
bool SearchStatisticConferenceParticipantRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("timeUnit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("timeUnit"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTimeUnit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("startTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("startTime"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("endTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endTime"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("category"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("category"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategory(refVal);
        }
    }
    return ok;
}


int32_t SearchStatisticConferenceParticipantRequest::getOffset() const
{
    return offset_;
}

void SearchStatisticConferenceParticipantRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool SearchStatisticConferenceParticipantRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void SearchStatisticConferenceParticipantRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t SearchStatisticConferenceParticipantRequest::getLimit() const
{
    return limit_;
}

void SearchStatisticConferenceParticipantRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool SearchStatisticConferenceParticipantRequest::limitIsSet() const
{
    return limitIsSet_;
}

void SearchStatisticConferenceParticipantRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string SearchStatisticConferenceParticipantRequest::getTimeUnit() const
{
    return timeUnit_;
}

void SearchStatisticConferenceParticipantRequest::setTimeUnit(const std::string& value)
{
    timeUnit_ = value;
    timeUnitIsSet_ = true;
}

bool SearchStatisticConferenceParticipantRequest::timeUnitIsSet() const
{
    return timeUnitIsSet_;
}

void SearchStatisticConferenceParticipantRequest::unsettimeUnit()
{
    timeUnitIsSet_ = false;
}

std::string SearchStatisticConferenceParticipantRequest::getStartTime() const
{
    return startTime_;
}

void SearchStatisticConferenceParticipantRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool SearchStatisticConferenceParticipantRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void SearchStatisticConferenceParticipantRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string SearchStatisticConferenceParticipantRequest::getEndTime() const
{
    return endTime_;
}

void SearchStatisticConferenceParticipantRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool SearchStatisticConferenceParticipantRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void SearchStatisticConferenceParticipantRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

std::string SearchStatisticConferenceParticipantRequest::getCategory() const
{
    return category_;
}

void SearchStatisticConferenceParticipantRequest::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool SearchStatisticConferenceParticipantRequest::categoryIsSet() const
{
    return categoryIsSet_;
}

void SearchStatisticConferenceParticipantRequest::unsetcategory()
{
    categoryIsSet_ = false;
}

}
}
}
}
}


