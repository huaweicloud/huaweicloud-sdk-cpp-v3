

#include "huaweicloud/live/v2/model/ShowStreamPortraitRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {
namespace Model {




ShowStreamPortraitRequest::ShowStreamPortraitRequest()
{
    playDomain_ = "";
    playDomainIsSet_ = false;
    stream_ = "";
    streamIsSet_ = false;
    time_ = "";
    timeIsSet_ = false;
}

ShowStreamPortraitRequest::~ShowStreamPortraitRequest() = default;

void ShowStreamPortraitRequest::validate()
{
}

web::json::value ShowStreamPortraitRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(playDomainIsSet_) {
        val[utility::conversions::to_string_t("play_domain")] = ModelBase::toJson(playDomain_);
    }
    if(streamIsSet_) {
        val[utility::conversions::to_string_t("stream")] = ModelBase::toJson(stream_);
    }
    if(timeIsSet_) {
        val[utility::conversions::to_string_t("time")] = ModelBase::toJson(time_);
    }

    return val;
}

bool ShowStreamPortraitRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("play_domain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("play_domain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlayDomain(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("stream"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("stream"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStream(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTime(refVal);
        }
    }
    return ok;
}

std::string ShowStreamPortraitRequest::getPlayDomain() const
{
    return playDomain_;
}

void ShowStreamPortraitRequest::setPlayDomain(const std::string& value)
{
    playDomain_ = value;
    playDomainIsSet_ = true;
}

bool ShowStreamPortraitRequest::playDomainIsSet() const
{
    return playDomainIsSet_;
}

void ShowStreamPortraitRequest::unsetplayDomain()
{
    playDomainIsSet_ = false;
}

std::string ShowStreamPortraitRequest::getStream() const
{
    return stream_;
}

void ShowStreamPortraitRequest::setStream(const std::string& value)
{
    stream_ = value;
    streamIsSet_ = true;
}

bool ShowStreamPortraitRequest::streamIsSet() const
{
    return streamIsSet_;
}

void ShowStreamPortraitRequest::unsetstream()
{
    streamIsSet_ = false;
}

std::string ShowStreamPortraitRequest::getTime() const
{
    return time_;
}

void ShowStreamPortraitRequest::setTime(const std::string& value)
{
    time_ = value;
    timeIsSet_ = true;
}

bool ShowStreamPortraitRequest::timeIsSet() const
{
    return timeIsSet_;
}

void ShowStreamPortraitRequest::unsettime()
{
    timeIsSet_ = false;
}

}
}
}
}
}


