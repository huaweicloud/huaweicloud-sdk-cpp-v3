

#include "huaweicloud/live/v2/model/PlayDomainStreamInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Live {
namespace V2 {
namespace Model {




PlayDomainStreamInfo::PlayDomainStreamInfo()
{
    playDomain_ = "";
    playDomainIsSet_ = false;
    stream_ = "";
    streamIsSet_ = false;
    protocol_ = "";
    protocolIsSet_ = false;
    bandwidth_ = 0L;
    bandwidthIsSet_ = false;
    online_ = 0L;
    onlineIsSet_ = false;
}

PlayDomainStreamInfo::~PlayDomainStreamInfo() = default;

void PlayDomainStreamInfo::validate()
{
}

web::json::value PlayDomainStreamInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(playDomainIsSet_) {
        val[utility::conversions::to_string_t("play_domain")] = ModelBase::toJson(playDomain_);
    }
    if(streamIsSet_) {
        val[utility::conversions::to_string_t("stream")] = ModelBase::toJson(stream_);
    }
    if(protocolIsSet_) {
        val[utility::conversions::to_string_t("protocol")] = ModelBase::toJson(protocol_);
    }
    if(bandwidthIsSet_) {
        val[utility::conversions::to_string_t("bandwidth")] = ModelBase::toJson(bandwidth_);
    }
    if(onlineIsSet_) {
        val[utility::conversions::to_string_t("online")] = ModelBase::toJson(online_);
    }

    return val;
}
bool PlayDomainStreamInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("protocol"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protocol"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtocol(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bandwidth"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bandwidth"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBandwidth(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("online"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("online"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOnline(refVal);
        }
    }
    return ok;
}


std::string PlayDomainStreamInfo::getPlayDomain() const
{
    return playDomain_;
}

void PlayDomainStreamInfo::setPlayDomain(const std::string& value)
{
    playDomain_ = value;
    playDomainIsSet_ = true;
}

bool PlayDomainStreamInfo::playDomainIsSet() const
{
    return playDomainIsSet_;
}

void PlayDomainStreamInfo::unsetplayDomain()
{
    playDomainIsSet_ = false;
}

std::string PlayDomainStreamInfo::getStream() const
{
    return stream_;
}

void PlayDomainStreamInfo::setStream(const std::string& value)
{
    stream_ = value;
    streamIsSet_ = true;
}

bool PlayDomainStreamInfo::streamIsSet() const
{
    return streamIsSet_;
}

void PlayDomainStreamInfo::unsetstream()
{
    streamIsSet_ = false;
}

std::string PlayDomainStreamInfo::getProtocol() const
{
    return protocol_;
}

void PlayDomainStreamInfo::setProtocol(const std::string& value)
{
    protocol_ = value;
    protocolIsSet_ = true;
}

bool PlayDomainStreamInfo::protocolIsSet() const
{
    return protocolIsSet_;
}

void PlayDomainStreamInfo::unsetprotocol()
{
    protocolIsSet_ = false;
}

int64_t PlayDomainStreamInfo::getBandwidth() const
{
    return bandwidth_;
}

void PlayDomainStreamInfo::setBandwidth(int64_t value)
{
    bandwidth_ = value;
    bandwidthIsSet_ = true;
}

bool PlayDomainStreamInfo::bandwidthIsSet() const
{
    return bandwidthIsSet_;
}

void PlayDomainStreamInfo::unsetbandwidth()
{
    bandwidthIsSet_ = false;
}

int64_t PlayDomainStreamInfo::getOnline() const
{
    return online_;
}

void PlayDomainStreamInfo::setOnline(int64_t value)
{
    online_ = value;
    onlineIsSet_ = true;
}

bool PlayDomainStreamInfo::onlineIsSet() const
{
    return onlineIsSet_;
}

void PlayDomainStreamInfo::unsetonline()
{
    onlineIsSet_ = false;
}

}
}
}
}
}


