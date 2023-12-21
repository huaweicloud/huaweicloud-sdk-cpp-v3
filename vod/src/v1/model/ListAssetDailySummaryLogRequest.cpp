

#include "huaweicloud/vod/v1/model/ListAssetDailySummaryLogRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ListAssetDailySummaryLogRequest::ListAssetDailySummaryLogRequest()
{
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListAssetDailySummaryLogRequest::~ListAssetDailySummaryLogRequest() = default;

void ListAssetDailySummaryLogRequest::validate()
{
}

web::json::value ListAssetDailySummaryLogRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(xSdkDateIsSet_) {
        val[utility::conversions::to_string_t("X-Sdk-Date")] = ModelBase::toJson(xSdkDate_);
    }
    if(startTimeIsSet_) {
        val[utility::conversions::to_string_t("start_time")] = ModelBase::toJson(startTime_);
    }
    if(endTimeIsSet_) {
        val[utility::conversions::to_string_t("end_time")] = ModelBase::toJson(endTime_);
    }
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListAssetDailySummaryLogRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("X-Sdk-Date"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("X-Sdk-Date"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXSdkDate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("start_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("start_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStartTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("end_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("end_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEndTime(refVal);
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
    return ok;
}


std::string ListAssetDailySummaryLogRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ListAssetDailySummaryLogRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ListAssetDailySummaryLogRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ListAssetDailySummaryLogRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ListAssetDailySummaryLogRequest::getStartTime() const
{
    return startTime_;
}

void ListAssetDailySummaryLogRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ListAssetDailySummaryLogRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ListAssetDailySummaryLogRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ListAssetDailySummaryLogRequest::getEndTime() const
{
    return endTime_;
}

void ListAssetDailySummaryLogRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ListAssetDailySummaryLogRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ListAssetDailySummaryLogRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

int32_t ListAssetDailySummaryLogRequest::getOffset() const
{
    return offset_;
}

void ListAssetDailySummaryLogRequest::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListAssetDailySummaryLogRequest::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListAssetDailySummaryLogRequest::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListAssetDailySummaryLogRequest::getLimit() const
{
    return limit_;
}

void ListAssetDailySummaryLogRequest::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListAssetDailySummaryLogRequest::limitIsSet() const
{
    return limitIsSet_;
}

void ListAssetDailySummaryLogRequest::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


