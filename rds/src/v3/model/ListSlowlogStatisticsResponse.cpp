

#include "huaweicloud/rds/v3/model/ListSlowlogStatisticsResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListSlowlogStatisticsResponse::ListSlowlogStatisticsResponse()
{
    pageNumber_ = 0;
    pageNumberIsSet_ = false;
    pageRecord_ = 0;
    pageRecordIsSet_ = false;
    slowLogListIsSet_ = false;
    totalRecord_ = 0;
    totalRecordIsSet_ = false;
    startTime_ = 0L;
    startTimeIsSet_ = false;
    endTime_ = 0L;
    endTimeIsSet_ = false;
}

ListSlowlogStatisticsResponse::~ListSlowlogStatisticsResponse() = default;

void ListSlowlogStatisticsResponse::validate()
{
}

web::json::value ListSlowlogStatisticsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(pageNumberIsSet_) {
        val[utility::conversions::to_string_t("pageNumber")] = ModelBase::toJson(pageNumber_);
    }
    if(pageRecordIsSet_) {
        val[utility::conversions::to_string_t("pageRecord")] = ModelBase::toJson(pageRecord_);
    }
    if(slowLogListIsSet_) {
        val[utility::conversions::to_string_t("slowLogList")] = ModelBase::toJson(slowLogList_);
    }
    if(totalRecordIsSet_) {
        val[utility::conversions::to_string_t("totalRecord")] = ModelBase::toJson(totalRecord_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("startTime")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("endTime")] = ModelBase::toJson(endTime_);
    }

    return val;
}

bool ListSlowlogStatisticsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("pageNumber"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pageNumber"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pageRecord"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pageRecord"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPageRecord(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("slowLogList"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("slowLogList"));
        if(!fieldValue.is_null())
        {
            std::vector<SlowLogStatistics> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSlowLogList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("totalRecord"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("totalRecord"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalRecord(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("startTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("startTime"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("endTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("endTime"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
        }
    }
    return ok;
}

int32_t ListSlowlogStatisticsResponse::getPageNumber() const
{
    return pageNumber_;
}

void ListSlowlogStatisticsResponse::setPageNumber(int32_t value)
{
    pageNumber_ = value;
    pageNumberIsSet_ = true;
}

bool ListSlowlogStatisticsResponse::pageNumberIsSet() const
{
    return pageNumberIsSet_;
}

void ListSlowlogStatisticsResponse::unsetpageNumber()
{
    pageNumberIsSet_ = false;
}

int32_t ListSlowlogStatisticsResponse::getPageRecord() const
{
    return pageRecord_;
}

void ListSlowlogStatisticsResponse::setPageRecord(int32_t value)
{
    pageRecord_ = value;
    pageRecordIsSet_ = true;
}

bool ListSlowlogStatisticsResponse::pageRecordIsSet() const
{
    return pageRecordIsSet_;
}

void ListSlowlogStatisticsResponse::unsetpageRecord()
{
    pageRecordIsSet_ = false;
}

std::vector<SlowLogStatistics>& ListSlowlogStatisticsResponse::getSlowLogList()
{
    return slowLogList_;
}

void ListSlowlogStatisticsResponse::setSlowLogList(const std::vector<SlowLogStatistics>& value)
{
    slowLogList_ = value;
    slowLogListIsSet_ = true;
}

bool ListSlowlogStatisticsResponse::slowLogListIsSet() const
{
    return slowLogListIsSet_;
}

void ListSlowlogStatisticsResponse::unsetslowLogList()
{
    slowLogListIsSet_ = false;
}

int32_t ListSlowlogStatisticsResponse::getTotalRecord() const
{
    return totalRecord_;
}

void ListSlowlogStatisticsResponse::setTotalRecord(int32_t value)
{
    totalRecord_ = value;
    totalRecordIsSet_ = true;
}

bool ListSlowlogStatisticsResponse::totalRecordIsSet() const
{
    return totalRecordIsSet_;
}

void ListSlowlogStatisticsResponse::unsettotalRecord()
{
    totalRecordIsSet_ = false;
}

int64_t ListSlowlogStatisticsResponse::getStartTime() const
{
    return startTime_;
}

void ListSlowlogStatisticsResponse::setStartTime(int64_t value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListSlowlogStatisticsResponse::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListSlowlogStatisticsResponse::unsetstartTime()
{
    startTimeIsSet_ = false;
}

int64_t ListSlowlogStatisticsResponse::getEndTime() const
{
    return endTime_;
}

void ListSlowlogStatisticsResponse::setEndTime(int64_t value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListSlowlogStatisticsResponse::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListSlowlogStatisticsResponse::unsetendTime()
{
    endTimeIsSet_ = false;
}

}
}
}
}
}


