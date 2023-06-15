

#include "huaweicloud/live/v2/model/UpStreamDetail.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {
namespace Model {




UpStreamDetail::UpStreamDetail()
{
    time_ = "";
    timeIsSet_ = false;
    fps_ = 0L;
    fpsIsSet_ = false;
    rate_ = 0L;
    rateIsSet_ = false;
    delay_ = 0L;
    delayIsSet_ = false;
    gopDuration_ = 0L;
    gopDurationIsSet_ = false;
    lastVideoPts_ = 0L;
    lastVideoPtsIsSet_ = false;
    lastAudioPts_ = 0L;
    lastAudioPtsIsSet_ = false;
    lastVideoAudioPtsDiff_ = 0L;
    lastVideoAudioPtsDiffIsSet_ = false;
}

UpStreamDetail::~UpStreamDetail() = default;

void UpStreamDetail::validate()
{
}

web::json::value UpStreamDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(timeIsSet_) {
        val[utility::conversions::to_string_t("time")] = ModelBase::toJson(time_);
    }
    if(fpsIsSet_) {
        val[utility::conversions::to_string_t("fps")] = ModelBase::toJson(fps_);
    }
    if(rateIsSet_) {
        val[utility::conversions::to_string_t("rate")] = ModelBase::toJson(rate_);
    }
    if(delayIsSet_) {
        val[utility::conversions::to_string_t("delay")] = ModelBase::toJson(delay_);
    }
    if(gopDurationIsSet_) {
        val[utility::conversions::to_string_t("gop_duration")] = ModelBase::toJson(gopDuration_);
    }
    if(lastVideoPtsIsSet_) {
        val[utility::conversions::to_string_t("last_video_pts")] = ModelBase::toJson(lastVideoPts_);
    }
    if(lastAudioPtsIsSet_) {
        val[utility::conversions::to_string_t("last_audio_pts")] = ModelBase::toJson(lastAudioPts_);
    }
    if(lastVideoAudioPtsDiffIsSet_) {
        val[utility::conversions::to_string_t("last_video_audio_pts_diff")] = ModelBase::toJson(lastVideoAudioPtsDiff_);
    }

    return val;
}

bool UpStreamDetail::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("fps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fps"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFps(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("rate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rate"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("delay"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delay"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDelay(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("gop_duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("gop_duration"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGopDuration(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_video_pts"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_video_pts"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastVideoPts(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_audio_pts"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_audio_pts"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastAudioPts(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("last_video_audio_pts_diff"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_video_audio_pts_diff"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastVideoAudioPtsDiff(refVal);
        }
    }
    return ok;
}


std::string UpStreamDetail::getTime() const
{
    return time_;
}

void UpStreamDetail::setTime(const std::string& value)
{
    time_ = value;
    timeIsSet_ = true;
}

bool UpStreamDetail::timeIsSet() const
{
    return timeIsSet_;
}

void UpStreamDetail::unsettime()
{
    timeIsSet_ = false;
}

int64_t UpStreamDetail::getFps() const
{
    return fps_;
}

void UpStreamDetail::setFps(int64_t value)
{
    fps_ = value;
    fpsIsSet_ = true;
}

bool UpStreamDetail::fpsIsSet() const
{
    return fpsIsSet_;
}

void UpStreamDetail::unsetfps()
{
    fpsIsSet_ = false;
}

int64_t UpStreamDetail::getRate() const
{
    return rate_;
}

void UpStreamDetail::setRate(int64_t value)
{
    rate_ = value;
    rateIsSet_ = true;
}

bool UpStreamDetail::rateIsSet() const
{
    return rateIsSet_;
}

void UpStreamDetail::unsetrate()
{
    rateIsSet_ = false;
}

int64_t UpStreamDetail::getDelay() const
{
    return delay_;
}

void UpStreamDetail::setDelay(int64_t value)
{
    delay_ = value;
    delayIsSet_ = true;
}

bool UpStreamDetail::delayIsSet() const
{
    return delayIsSet_;
}

void UpStreamDetail::unsetdelay()
{
    delayIsSet_ = false;
}

int64_t UpStreamDetail::getGopDuration() const
{
    return gopDuration_;
}

void UpStreamDetail::setGopDuration(int64_t value)
{
    gopDuration_ = value;
    gopDurationIsSet_ = true;
}

bool UpStreamDetail::gopDurationIsSet() const
{
    return gopDurationIsSet_;
}

void UpStreamDetail::unsetgopDuration()
{
    gopDurationIsSet_ = false;
}

int64_t UpStreamDetail::getLastVideoPts() const
{
    return lastVideoPts_;
}

void UpStreamDetail::setLastVideoPts(int64_t value)
{
    lastVideoPts_ = value;
    lastVideoPtsIsSet_ = true;
}

bool UpStreamDetail::lastVideoPtsIsSet() const
{
    return lastVideoPtsIsSet_;
}

void UpStreamDetail::unsetlastVideoPts()
{
    lastVideoPtsIsSet_ = false;
}

int64_t UpStreamDetail::getLastAudioPts() const
{
    return lastAudioPts_;
}

void UpStreamDetail::setLastAudioPts(int64_t value)
{
    lastAudioPts_ = value;
    lastAudioPtsIsSet_ = true;
}

bool UpStreamDetail::lastAudioPtsIsSet() const
{
    return lastAudioPtsIsSet_;
}

void UpStreamDetail::unsetlastAudioPts()
{
    lastAudioPtsIsSet_ = false;
}

int64_t UpStreamDetail::getLastVideoAudioPtsDiff() const
{
    return lastVideoAudioPtsDiff_;
}

void UpStreamDetail::setLastVideoAudioPtsDiff(int64_t value)
{
    lastVideoAudioPtsDiff_ = value;
    lastVideoAudioPtsDiffIsSet_ = true;
}

bool UpStreamDetail::lastVideoAudioPtsDiffIsSet() const
{
    return lastVideoAudioPtsDiffIsSet_;
}

void UpStreamDetail::unsetlastVideoAudioPtsDiff()
{
    lastVideoAudioPtsDiffIsSet_ = false;
}

}
}
}
}
}


