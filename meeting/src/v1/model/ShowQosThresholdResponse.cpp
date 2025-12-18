

#include "huaweicloud/meeting/v1/model/ShowQosThresholdResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




ShowQosThresholdResponse::ShowQosThresholdResponse()
{
    latencyIsSet_ = false;
    jitterIsSet_ = false;
    packetLossIsSet_ = false;
    clientCpuMaxIsSet_ = false;
    systemCpuMaxIsSet_ = false;
}

ShowQosThresholdResponse::~ShowQosThresholdResponse() = default;

void ShowQosThresholdResponse::validate()
{
}

web::json::value ShowQosThresholdResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(latencyIsSet_) {
        val[utility::conversions::to_string_t("latency")] = ModelBase::toJson(latency_);
    }
    if(jitterIsSet_) {
        val[utility::conversions::to_string_t("jitter")] = ModelBase::toJson(jitter_);
    }
    if(packetLossIsSet_) {
        val[utility::conversions::to_string_t("packetLoss")] = ModelBase::toJson(packetLoss_);
    }
    if(clientCpuMaxIsSet_) {
        val[utility::conversions::to_string_t("clientCpuMax")] = ModelBase::toJson(clientCpuMax_);
    }
    if(systemCpuMaxIsSet_) {
        val[utility::conversions::to_string_t("systemCpuMax")] = ModelBase::toJson(systemCpuMax_);
    }

    return val;
}
bool ShowQosThresholdResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("latency"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("latency"));
        if(!fieldValue.is_null())
        {
            ThresholdData refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLatency(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("jitter"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("jitter"));
        if(!fieldValue.is_null())
        {
            ThresholdData refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJitter(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("packetLoss"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("packetLoss"));
        if(!fieldValue.is_null())
        {
            PacketThresholdData refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPacketLoss(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("clientCpuMax"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("clientCpuMax"));
        if(!fieldValue.is_null())
        {
            CPUThresholdData refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClientCpuMax(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("systemCpuMax"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("systemCpuMax"));
        if(!fieldValue.is_null())
        {
            CPUThresholdData refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSystemCpuMax(refVal);
        }
    }
    return ok;
}


ThresholdData ShowQosThresholdResponse::getLatency() const
{
    return latency_;
}

void ShowQosThresholdResponse::setLatency(const ThresholdData& value)
{
    latency_ = value;
    latencyIsSet_ = true;
}

bool ShowQosThresholdResponse::latencyIsSet() const
{
    return latencyIsSet_;
}

void ShowQosThresholdResponse::unsetlatency()
{
    latencyIsSet_ = false;
}

ThresholdData ShowQosThresholdResponse::getJitter() const
{
    return jitter_;
}

void ShowQosThresholdResponse::setJitter(const ThresholdData& value)
{
    jitter_ = value;
    jitterIsSet_ = true;
}

bool ShowQosThresholdResponse::jitterIsSet() const
{
    return jitterIsSet_;
}

void ShowQosThresholdResponse::unsetjitter()
{
    jitterIsSet_ = false;
}

PacketThresholdData ShowQosThresholdResponse::getPacketLoss() const
{
    return packetLoss_;
}

void ShowQosThresholdResponse::setPacketLoss(const PacketThresholdData& value)
{
    packetLoss_ = value;
    packetLossIsSet_ = true;
}

bool ShowQosThresholdResponse::packetLossIsSet() const
{
    return packetLossIsSet_;
}

void ShowQosThresholdResponse::unsetpacketLoss()
{
    packetLossIsSet_ = false;
}

CPUThresholdData ShowQosThresholdResponse::getClientCpuMax() const
{
    return clientCpuMax_;
}

void ShowQosThresholdResponse::setClientCpuMax(const CPUThresholdData& value)
{
    clientCpuMax_ = value;
    clientCpuMaxIsSet_ = true;
}

bool ShowQosThresholdResponse::clientCpuMaxIsSet() const
{
    return clientCpuMaxIsSet_;
}

void ShowQosThresholdResponse::unsetclientCpuMax()
{
    clientCpuMaxIsSet_ = false;
}

CPUThresholdData ShowQosThresholdResponse::getSystemCpuMax() const
{
    return systemCpuMax_;
}

void ShowQosThresholdResponse::setSystemCpuMax(const CPUThresholdData& value)
{
    systemCpuMax_ = value;
    systemCpuMaxIsSet_ = true;
}

bool ShowQosThresholdResponse::systemCpuMaxIsSet() const
{
    return systemCpuMaxIsSet_;
}

void ShowQosThresholdResponse::unsetsystemCpuMax()
{
    systemCpuMaxIsSet_ = false;
}

}
}
}
}
}


