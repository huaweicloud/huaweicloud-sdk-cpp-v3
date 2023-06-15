

#include "huaweicloud/live/v2/model/StreamPortrait.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {
namespace Model {




StreamPortrait::StreamPortrait()
{
    time_ = "";
    timeIsSet_ = false;
    flow_ = 0L;
    flowIsSet_ = false;
    playDuration_ = 0L;
    playDurationIsSet_ = false;
    requestCount_ = 0L;
    requestCountIsSet_ = false;
    userCount_ = 0L;
    userCountIsSet_ = false;
    peakUserCount_ = 0L;
    peakUserCountIsSet_ = false;
    peakBandwidth_ = 0L;
    peakBandwidthIsSet_ = false;
    pushDuration_ = 0L;
    pushDurationIsSet_ = false;
}

StreamPortrait::~StreamPortrait() = default;

void StreamPortrait::validate()
{
}

web::json::value StreamPortrait::toJson() const
{
    web::json::value val = web::json::value::object();

    if(timeIsSet_) {
        val[utility::conversions::to_string_t("time")] = ModelBase::toJson(time_);
    }
    if(flowIsSet_) {
        val[utility::conversions::to_string_t("flow")] = ModelBase::toJson(flow_);
    }
    if(playDurationIsSet_) {
        val[utility::conversions::to_string_t("play_duration")] = ModelBase::toJson(playDuration_);
    }
    if(requestCountIsSet_) {
        val[utility::conversions::to_string_t("request_count")] = ModelBase::toJson(requestCount_);
    }
    if(userCountIsSet_) {
        val[utility::conversions::to_string_t("user_count")] = ModelBase::toJson(userCount_);
    }
    if(peakUserCountIsSet_) {
        val[utility::conversions::to_string_t("peak_user_count")] = ModelBase::toJson(peakUserCount_);
    }
    if(peakBandwidthIsSet_) {
        val[utility::conversions::to_string_t("peak_bandwidth")] = ModelBase::toJson(peakBandwidth_);
    }
    if(pushDurationIsSet_) {
        val[utility::conversions::to_string_t("push_duration")] = ModelBase::toJson(pushDuration_);
    }

    return val;
}

bool StreamPortrait::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flow"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flow"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlow(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("play_duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("play_duration"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlayDuration(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("request_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("request_count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRequestCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("peak_user_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("peak_user_count"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeakUserCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("peak_bandwidth"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("peak_bandwidth"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPeakBandwidth(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("push_duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("push_duration"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPushDuration(refVal);
        }
    }
    return ok;
}


std::string StreamPortrait::getTime() const
{
    return time_;
}

void StreamPortrait::setTime(const std::string& value)
{
    time_ = value;
    timeIsSet_ = true;
}

bool StreamPortrait::timeIsSet() const
{
    return timeIsSet_;
}

void StreamPortrait::unsettime()
{
    timeIsSet_ = false;
}

int64_t StreamPortrait::getFlow() const
{
    return flow_;
}

void StreamPortrait::setFlow(int64_t value)
{
    flow_ = value;
    flowIsSet_ = true;
}

bool StreamPortrait::flowIsSet() const
{
    return flowIsSet_;
}

void StreamPortrait::unsetflow()
{
    flowIsSet_ = false;
}

int64_t StreamPortrait::getPlayDuration() const
{
    return playDuration_;
}

void StreamPortrait::setPlayDuration(int64_t value)
{
    playDuration_ = value;
    playDurationIsSet_ = true;
}

bool StreamPortrait::playDurationIsSet() const
{
    return playDurationIsSet_;
}

void StreamPortrait::unsetplayDuration()
{
    playDurationIsSet_ = false;
}

int64_t StreamPortrait::getRequestCount() const
{
    return requestCount_;
}

void StreamPortrait::setRequestCount(int64_t value)
{
    requestCount_ = value;
    requestCountIsSet_ = true;
}

bool StreamPortrait::requestCountIsSet() const
{
    return requestCountIsSet_;
}

void StreamPortrait::unsetrequestCount()
{
    requestCountIsSet_ = false;
}

int64_t StreamPortrait::getUserCount() const
{
    return userCount_;
}

void StreamPortrait::setUserCount(int64_t value)
{
    userCount_ = value;
    userCountIsSet_ = true;
}

bool StreamPortrait::userCountIsSet() const
{
    return userCountIsSet_;
}

void StreamPortrait::unsetuserCount()
{
    userCountIsSet_ = false;
}

int64_t StreamPortrait::getPeakUserCount() const
{
    return peakUserCount_;
}

void StreamPortrait::setPeakUserCount(int64_t value)
{
    peakUserCount_ = value;
    peakUserCountIsSet_ = true;
}

bool StreamPortrait::peakUserCountIsSet() const
{
    return peakUserCountIsSet_;
}

void StreamPortrait::unsetpeakUserCount()
{
    peakUserCountIsSet_ = false;
}

int64_t StreamPortrait::getPeakBandwidth() const
{
    return peakBandwidth_;
}

void StreamPortrait::setPeakBandwidth(int64_t value)
{
    peakBandwidth_ = value;
    peakBandwidthIsSet_ = true;
}

bool StreamPortrait::peakBandwidthIsSet() const
{
    return peakBandwidthIsSet_;
}

void StreamPortrait::unsetpeakBandwidth()
{
    peakBandwidthIsSet_ = false;
}

int64_t StreamPortrait::getPushDuration() const
{
    return pushDuration_;
}

void StreamPortrait::setPushDuration(int64_t value)
{
    pushDuration_ = value;
    pushDurationIsSet_ = true;
}

bool StreamPortrait::pushDurationIsSet() const
{
    return pushDurationIsSet_;
}

void StreamPortrait::unsetpushDuration()
{
    pushDurationIsSet_ = false;
}

}
}
}
}
}


