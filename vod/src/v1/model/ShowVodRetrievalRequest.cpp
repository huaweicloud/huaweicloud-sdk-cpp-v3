

#include "huaweicloud/vod/v1/model/ShowVodRetrievalRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Vod {
namespace V1 {
namespace Model {




ShowVodRetrievalRequest::ShowVodRetrievalRequest()
{
    startTime_ = "";
    startTimeIsSet_ = false;
    endTime_ = "";
    endTimeIsSet_ = false;
    interval_ = 0;
    intervalIsSet_ = false;
}

ShowVodRetrievalRequest::~ShowVodRetrievalRequest() = default;

void ShowVodRetrievalRequest::validate()
{
}

web::json::value ShowVodRetrievalRequest::toJson() const
{
    web::json::value val = web::json::value::object();

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
bool ShowVodRetrievalRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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


std::string ShowVodRetrievalRequest::getStartTime() const
{
    return startTime_;
}

void ShowVodRetrievalRequest::setStartTime(const std::string& value)
{
    startTime_ = value;
    startTimeIsSet_ = true;
}

bool ShowVodRetrievalRequest::startTimeIsSet() const
{
    return startTimeIsSet_;
}

void ShowVodRetrievalRequest::unsetstartTime()
{
    startTimeIsSet_ = false;
}

std::string ShowVodRetrievalRequest::getEndTime() const
{
    return endTime_;
}

void ShowVodRetrievalRequest::setEndTime(const std::string& value)
{
    endTime_ = value;
    endTimeIsSet_ = true;
}

bool ShowVodRetrievalRequest::endTimeIsSet() const
{
    return endTimeIsSet_;
}

void ShowVodRetrievalRequest::unsetendTime()
{
    endTimeIsSet_ = false;
}

int32_t ShowVodRetrievalRequest::getInterval() const
{
    return interval_;
}

void ShowVodRetrievalRequest::setInterval(int32_t value)
{
    interval_ = value;
    intervalIsSet_ = true;
}

bool ShowVodRetrievalRequest::intervalIsSet() const
{
    return intervalIsSet_;
}

void ShowVodRetrievalRequest::unsetinterval()
{
    intervalIsSet_ = false;
}

}
}
}
}
}


