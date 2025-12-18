

#include "huaweicloud/meeting/v1/model/SearchQosHistoryMeetingsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




SearchQosHistoryMeetingsRequest::SearchQosHistoryMeetingsRequest()
{
    startDate_ = 0L;
    startDateIsSet_ = false;
    endDate_ = 0L;
    endDateIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
    searchKey_ = "";
    searchKeyIsSet_ = false;
}

SearchQosHistoryMeetingsRequest::~SearchQosHistoryMeetingsRequest() = default;

void SearchQosHistoryMeetingsRequest::validate()
{
}

web::json::value SearchQosHistoryMeetingsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(startDateIsSet_) {
        val[utility::conversions::to_string_t("startDate")] = ModelBase::toJson(startDate_);
    }
    if(endDateIsSet_) {
        val[utility::conversions::to_string_t("endDate")] = ModelBase::toJson(endDate_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }
    if(searchKeyIsSet_) {
        val[utility::conversions::to_string_t("searchKey")] = ModelBase::toJson(searchKey_);
    }

    return val;
}
bool SearchQosHistoryMeetingsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("startDate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("startDate"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("endDate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endDate"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndDate(refVal);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t("searchKey"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("searchKey"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSearchKey(refVal);
        }
    }
    return ok;
}


int64_t SearchQosHistoryMeetingsRequest::getStartDate() const
{
    return startDate_;
}

void SearchQosHistoryMeetingsRequest::setStartDate(int64_t value)
{
    startDate_ = value;
    startDateIsSet_ = true;
}

bool SearchQosHistoryMeetingsRequest::startDateIsSet() const
{
    return startDateIsSet_;
}

void SearchQosHistoryMeetingsRequest::unsetstartDate()
{
    startDateIsSet_ = false;
}

int64_t SearchQosHistoryMeetingsRequest::getEndDate() const
{
    return endDate_;
}

void SearchQosHistoryMeetingsRequest::setEndDate(int64_t value)
{
    endDate_ = value;
    endDateIsSet_ = true;
}

bool SearchQosHistoryMeetingsRequest::endDateIsSet() const
{
    return endDateIsSet_;
}

void SearchQosHistoryMeetingsRequest::unsetendDate()
{
    endDateIsSet_ = false;
}

int32_t SearchQosHistoryMeetingsRequest::getOffset() const
{
    return offset_;
}

void SearchQosHistoryMeetingsRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool SearchQosHistoryMeetingsRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void SearchQosHistoryMeetingsRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t SearchQosHistoryMeetingsRequest::getLimit() const
{
    return limit_;
}

void SearchQosHistoryMeetingsRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool SearchQosHistoryMeetingsRequest::limitIsSet() const
{
    return limitIsSet_;
}

void SearchQosHistoryMeetingsRequest::unsetlimit()
{
    limitIsSet_ = false;
}

std::string SearchQosHistoryMeetingsRequest::getSearchKey() const
{
    return searchKey_;
}

void SearchQosHistoryMeetingsRequest::setSearchKey(const std::string& value)
{
    searchKey_ = value;
    searchKeyIsSet_ = true;
}

bool SearchQosHistoryMeetingsRequest::searchKeyIsSet() const
{
    return searchKeyIsSet_;
}

void SearchQosHistoryMeetingsRequest::unsetsearchKey()
{
    searchKeyIsSet_ = false;
}

}
}
}
}
}


