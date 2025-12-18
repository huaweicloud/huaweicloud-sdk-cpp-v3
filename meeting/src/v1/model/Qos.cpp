

#include "huaweicloud/meeting/v1/model/Qos.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




Qos::Qos()
{
    networkQuality_ = "";
    networkQualityIsSet_ = false;
    codecType_ = "";
    codecTypeIsSet_ = false;
    bandWidth_ = 0;
    bandWidthIsSet_ = false;
    lostPacketRate_ = 0;
    lostPacketRateIsSet_ = false;
    delay_ = 0;
    delayIsSet_ = false;
    jitter_ = 0;
    jitterIsSet_ = false;
    resolutionHeight_ = 0;
    resolutionHeightIsSet_ = false;
    resolutionWidth_ = 0;
    resolutionWidthIsSet_ = false;
    frameRate_ = 0;
    frameRateIsSet_ = false;
    codecUserId_ = "";
    codecUserIdIsSet_ = false;
}

Qos::~Qos() = default;

void Qos::validate()
{
}

web::json::value Qos::toJson() const
{
    web::json::value val = web::json::value::object();

    if(networkQualityIsSet_) {
        val[utility::conversions::to_string_t("networkQuality")] = ModelBase::toJson(networkQuality_);
    }
    if(codecTypeIsSet_) {
        val[utility::conversions::to_string_t("codecType")] = ModelBase::toJson(codecType_);
    }
    if(bandWidthIsSet_) {
        val[utility::conversions::to_string_t("bandWidth")] = ModelBase::toJson(bandWidth_);
    }
    if(lostPacketRateIsSet_) {
        val[utility::conversions::to_string_t("lostPacketRate")] = ModelBase::toJson(lostPacketRate_);
    }
    if(delayIsSet_) {
        val[utility::conversions::to_string_t("delay")] = ModelBase::toJson(delay_);
    }
    if(jitterIsSet_) {
        val[utility::conversions::to_string_t("jitter")] = ModelBase::toJson(jitter_);
    }
    if(resolutionHeightIsSet_) {
        val[utility::conversions::to_string_t("resolutionHeight")] = ModelBase::toJson(resolutionHeight_);
    }
    if(resolutionWidthIsSet_) {
        val[utility::conversions::to_string_t("resolutionWidth")] = ModelBase::toJson(resolutionWidth_);
    }
    if(frameRateIsSet_) {
        val[utility::conversions::to_string_t("frameRate")] = ModelBase::toJson(frameRate_);
    }
    if(codecUserIdIsSet_) {
        val[utility::conversions::to_string_t("codecUserId")] = ModelBase::toJson(codecUserId_);
    }

    return val;
}
bool Qos::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("networkQuality"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("networkQuality"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNetworkQuality(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("codecType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("codecType"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCodecType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("bandWidth"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bandWidth"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBandWidth(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lostPacketRate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lostPacketRate"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLostPacketRate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("delay"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delay"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDelay(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("jitter"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("jitter"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJitter(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resolutionHeight"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resolutionHeight"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResolutionHeight(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resolutionWidth"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resolutionWidth"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResolutionWidth(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("frameRate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("frameRate"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFrameRate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("codecUserId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("codecUserId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCodecUserId(refVal);
        }
    }
    return ok;
}


std::string Qos::getNetworkQuality() const
{
    return networkQuality_;
}

void Qos::setNetworkQuality(const std::string& value)
{
    networkQuality_ = value;
    networkQualityIsSet_ = true;
}

bool Qos::networkQualityIsSet() const
{
    return networkQualityIsSet_;
}

void Qos::unsetnetworkQuality()
{
    networkQualityIsSet_ = false;
}

std::string Qos::getCodecType() const
{
    return codecType_;
}

void Qos::setCodecType(const std::string& value)
{
    codecType_ = value;
    codecTypeIsSet_ = true;
}

bool Qos::codecTypeIsSet() const
{
    return codecTypeIsSet_;
}

void Qos::unsetcodecType()
{
    codecTypeIsSet_ = false;
}

int32_t Qos::getBandWidth() const
{
    return bandWidth_;
}

void Qos::setBandWidth(int32_t value)
{
    bandWidth_ = value;
    bandWidthIsSet_ = true;
}

bool Qos::bandWidthIsSet() const
{
    return bandWidthIsSet_;
}

void Qos::unsetbandWidth()
{
    bandWidthIsSet_ = false;
}

int32_t Qos::getLostPacketRate() const
{
    return lostPacketRate_;
}

void Qos::setLostPacketRate(int32_t value)
{
    lostPacketRate_ = value;
    lostPacketRateIsSet_ = true;
}

bool Qos::lostPacketRateIsSet() const
{
    return lostPacketRateIsSet_;
}

void Qos::unsetlostPacketRate()
{
    lostPacketRateIsSet_ = false;
}

int32_t Qos::getDelay() const
{
    return delay_;
}

void Qos::setDelay(int32_t value)
{
    delay_ = value;
    delayIsSet_ = true;
}

bool Qos::delayIsSet() const
{
    return delayIsSet_;
}

void Qos::unsetdelay()
{
    delayIsSet_ = false;
}

int32_t Qos::getJitter() const
{
    return jitter_;
}

void Qos::setJitter(int32_t value)
{
    jitter_ = value;
    jitterIsSet_ = true;
}

bool Qos::jitterIsSet() const
{
    return jitterIsSet_;
}

void Qos::unsetjitter()
{
    jitterIsSet_ = false;
}

int32_t Qos::getResolutionHeight() const
{
    return resolutionHeight_;
}

void Qos::setResolutionHeight(int32_t value)
{
    resolutionHeight_ = value;
    resolutionHeightIsSet_ = true;
}

bool Qos::resolutionHeightIsSet() const
{
    return resolutionHeightIsSet_;
}

void Qos::unsetresolutionHeight()
{
    resolutionHeightIsSet_ = false;
}

int32_t Qos::getResolutionWidth() const
{
    return resolutionWidth_;
}

void Qos::setResolutionWidth(int32_t value)
{
    resolutionWidth_ = value;
    resolutionWidthIsSet_ = true;
}

bool Qos::resolutionWidthIsSet() const
{
    return resolutionWidthIsSet_;
}

void Qos::unsetresolutionWidth()
{
    resolutionWidthIsSet_ = false;
}

int32_t Qos::getFrameRate() const
{
    return frameRate_;
}

void Qos::setFrameRate(int32_t value)
{
    frameRate_ = value;
    frameRateIsSet_ = true;
}

bool Qos::frameRateIsSet() const
{
    return frameRateIsSet_;
}

void Qos::unsetframeRate()
{
    frameRateIsSet_ = false;
}

std::string Qos::getCodecUserId() const
{
    return codecUserId_;
}

void Qos::setCodecUserId(const std::string& value)
{
    codecUserId_ = value;
    codecUserIdIsSet_ = true;
}

bool Qos::codecUserIdIsSet() const
{
    return codecUserIdIsSet_;
}

void Qos::unsetcodecUserId()
{
    codecUserIdIsSet_ = false;
}

}
}
}
}
}


