

#include "huaweicloud/meeting/v1/model/QosSendReceiveInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




QosSendReceiveInfo::QosSendReceiveInfo()
{
    bitrateIsSet_ = false;
    latencyIsSet_ = false;
    jitterIsSet_ = false;
    packetLossMaxIsSet_ = false;
    resolutionIsSet_ = false;
    frameIsSet_ = false;
}

QosSendReceiveInfo::~QosSendReceiveInfo() = default;

void QosSendReceiveInfo::validate()
{
}

web::json::value QosSendReceiveInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(bitrateIsSet_) {
        val[utility::conversions::to_string_t("bitrate")] = ModelBase::toJson(bitrate_);
    }
    if(latencyIsSet_) {
        val[utility::conversions::to_string_t("latency")] = ModelBase::toJson(latency_);
    }
    if(jitterIsSet_) {
        val[utility::conversions::to_string_t("jitter")] = ModelBase::toJson(jitter_);
    }
    if(packetLossMaxIsSet_) {
        val[utility::conversions::to_string_t("packet_loss_max")] = ModelBase::toJson(packetLossMax_);
    }
    if(resolutionIsSet_) {
        val[utility::conversions::to_string_t("resolution")] = ModelBase::toJson(resolution_);
    }
    if(frameIsSet_) {
        val[utility::conversions::to_string_t("frame")] = ModelBase::toJson(frame_);
    }

    return val;
}
bool QosSendReceiveInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("bitrate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("bitrate"));
        if(!fieldValue.is_null())
        {
            std::vector<QosDataNoThrElement> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBitrate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("latency"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("latency"));
        if(!fieldValue.is_null())
        {
            std::vector<QosDataElement> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLatency(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("jitter"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("jitter"));
        if(!fieldValue.is_null())
        {
            std::vector<QosDataElement> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJitter(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("packet_loss_max"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("packet_loss_max"));
        if(!fieldValue.is_null())
        {
            std::vector<QosDataElement> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPacketLossMax(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resolution"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resolution"));
        if(!fieldValue.is_null())
        {
            std::vector<QosDataNoThrElement> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResolution(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("frame"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("frame"));
        if(!fieldValue.is_null())
        {
            std::vector<QosDataNoThrElement> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFrame(refVal);
        }
    }
    return ok;
}


std::vector<QosDataNoThrElement>& QosSendReceiveInfo::getBitrate()
{
    return bitrate_;
}

void QosSendReceiveInfo::setBitrate(const std::vector<QosDataNoThrElement>& value)
{
    bitrate_ = value;
    bitrateIsSet_ = true;
}

bool QosSendReceiveInfo::bitrateIsSet() const
{
    return bitrateIsSet_;
}

void QosSendReceiveInfo::unsetbitrate()
{
    bitrateIsSet_ = false;
}

std::vector<QosDataElement>& QosSendReceiveInfo::getLatency()
{
    return latency_;
}

void QosSendReceiveInfo::setLatency(const std::vector<QosDataElement>& value)
{
    latency_ = value;
    latencyIsSet_ = true;
}

bool QosSendReceiveInfo::latencyIsSet() const
{
    return latencyIsSet_;
}

void QosSendReceiveInfo::unsetlatency()
{
    latencyIsSet_ = false;
}

std::vector<QosDataElement>& QosSendReceiveInfo::getJitter()
{
    return jitter_;
}

void QosSendReceiveInfo::setJitter(const std::vector<QosDataElement>& value)
{
    jitter_ = value;
    jitterIsSet_ = true;
}

bool QosSendReceiveInfo::jitterIsSet() const
{
    return jitterIsSet_;
}

void QosSendReceiveInfo::unsetjitter()
{
    jitterIsSet_ = false;
}

std::vector<QosDataElement>& QosSendReceiveInfo::getPacketLossMax()
{
    return packetLossMax_;
}

void QosSendReceiveInfo::setPacketLossMax(const std::vector<QosDataElement>& value)
{
    packetLossMax_ = value;
    packetLossMaxIsSet_ = true;
}

bool QosSendReceiveInfo::packetLossMaxIsSet() const
{
    return packetLossMaxIsSet_;
}

void QosSendReceiveInfo::unsetpacketLossMax()
{
    packetLossMaxIsSet_ = false;
}

std::vector<QosDataNoThrElement>& QosSendReceiveInfo::getResolution()
{
    return resolution_;
}

void QosSendReceiveInfo::setResolution(const std::vector<QosDataNoThrElement>& value)
{
    resolution_ = value;
    resolutionIsSet_ = true;
}

bool QosSendReceiveInfo::resolutionIsSet() const
{
    return resolutionIsSet_;
}

void QosSendReceiveInfo::unsetresolution()
{
    resolutionIsSet_ = false;
}

std::vector<QosDataNoThrElement>& QosSendReceiveInfo::getFrame()
{
    return frame_;
}

void QosSendReceiveInfo::setFrame(const std::vector<QosDataNoThrElement>& value)
{
    frame_ = value;
    frameIsSet_ = true;
}

bool QosSendReceiveInfo::frameIsSet() const
{
    return frameIsSet_;
}

void QosSendReceiveInfo::unsetframe()
{
    frameIsSet_ = false;
}

}
}
}
}
}


