

#include "huaweicloud/vod/v1/model/ShowVodStatisticsRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ShowVodStatisticsRequest::ShowVodStatisticsRequest()
{
    xSdkDate_ = "";
    xSdkDateIsSet_ = false;
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    interval_ = 0;
    intervalIsSet_ = false;
}

ShowVodStatisticsRequest::~ShowVodStatisticsRequest() = default;

void ShowVodStatisticsRequest::validate()
{
}

web::json::value ShowVodStatisticsRequest::toJson() const
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
    if(intervalIsSet_) {
        val[utility::conversions::to_string_t("interval")] = ModelBase::toJson(interval_);
    }

    return val;
}

bool ShowVodStatisticsRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("interval"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("interval"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInterval(refVal);
        }
    }
    return ok;
}

std::string ShowVodStatisticsRequest::getXSdkDate() const
{
    return xSdkDate_;
}

void ShowVodStatisticsRequest::setXSdkDate(const std::string& value)
{
    xSdkDate_ = value;
    xSdkDateIsSet_ = true;
}

bool ShowVodStatisticsRequest::xSdkDateIsSet() const
{
    return xSdkDateIsSet_;
}

void ShowVodStatisticsRequest::unsetxSdkDate()
{
    xSdkDateIsSet_ = false;
}

std::string ShowVodStatisticsRequest::getStartTime() const
{
    return startTime_;
}

void ShowVodStatisticsRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ShowVodStatisticsRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ShowVodStatisticsRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ShowVodStatisticsRequest::getEndTime() const
{
    return endTime_;
}

void ShowVodStatisticsRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ShowVodStatisticsRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ShowVodStatisticsRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

int32_t ShowVodStatisticsRequest::getInterval() const
{
    return interval_;
}

void ShowVodStatisticsRequest::setInterval(int32_t value)
{
    interval_ = value;
    intervalIsSet_ = true;
}

bool ShowVodStatisticsRequest::intervalIsSet() const
{
    return intervalIsSet_;
}

void ShowVodStatisticsRequest::unsetinterval()
{
    intervalIsSet_ = false;
}

}
}
}
}
}


