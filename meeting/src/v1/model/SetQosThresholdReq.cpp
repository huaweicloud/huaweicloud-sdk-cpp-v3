

#include "huaweicloud/meeting/v1/model/SetQosThresholdReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Meeting {
namespace V1 {
namespace Model {




SetQosThresholdReq::SetQosThresholdReq()
{
    latencyIsSet_ = false;
    jitterIsSet_ = false;
    packetLossIsSet_ = false;
    clientCpuMaxIsSet_ = false;
    systemCpuMaxIsSet_ = false;
}

SetQosThresholdReq::~SetQosThresholdReq() = default;

void SetQosThresholdReq::validate()
{
}

web::json::value SetQosThresholdReq::toJson() const
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
bool SetQosThresholdReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("latency"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("latency"));
        if(!fieldValue.is_null())
        {
            SetThresholdData refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLatency(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("jitter"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("jitter"));
        if(!fieldValue.is_null())
        {
            SetThresholdData refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJitter(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("packetLoss"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("packetLoss"));
        if(!fieldValue.is_null())
        {
            SetPacketThresholdData refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPacketLoss(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("clientCpuMax"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("clientCpuMax"));
        if(!fieldValue.is_null())
        {
            SetCPUThresholdData refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClientCpuMax(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("systemCpuMax"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("systemCpuMax"));
        if(!fieldValue.is_null())
        {
            SetCPUThresholdData refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSystemCpuMax(refVal);
        }
    }
    return ok;
}


SetThresholdData SetQosThresholdReq::getLatency() const
{
    return latency_;
}

void SetQosThresholdReq::setLatency(const SetThresholdData& value)
{
    latency_ = value;
    latencyIsSet_ = true;
}

bool SetQosThresholdReq::latencyIsSet() const
{
    return latencyIsSet_;
}

void SetQosThresholdReq::unsetlatency()
{
    latencyIsSet_ = false;
}

SetThresholdData SetQosThresholdReq::getJitter() const
{
    return jitter_;
}

void SetQosThresholdReq::setJitter(const SetThresholdData& value)
{
    jitter_ = value;
    jitterIsSet_ = true;
}

bool SetQosThresholdReq::jitterIsSet() const
{
    return jitterIsSet_;
}

void SetQosThresholdReq::unsetjitter()
{
    jitterIsSet_ = false;
}

SetPacketThresholdData SetQosThresholdReq::getPacketLoss() const
{
    return packetLoss_;
}

void SetQosThresholdReq::setPacketLoss(const SetPacketThresholdData& value)
{
    packetLoss_ = value;
    packetLossIsSet_ = true;
}

bool SetQosThresholdReq::packetLossIsSet() const
{
    return packetLossIsSet_;
}

void SetQosThresholdReq::unsetpacketLoss()
{
    packetLossIsSet_ = false;
}

SetCPUThresholdData SetQosThresholdReq::getClientCpuMax() const
{
    return clientCpuMax_;
}

void SetQosThresholdReq::setClientCpuMax(const SetCPUThresholdData& value)
{
    clientCpuMax_ = value;
    clientCpuMaxIsSet_ = true;
}

bool SetQosThresholdReq::clientCpuMaxIsSet() const
{
    return clientCpuMaxIsSet_;
}

void SetQosThresholdReq::unsetclientCpuMax()
{
    clientCpuMaxIsSet_ = false;
}

SetCPUThresholdData SetQosThresholdReq::getSystemCpuMax() const
{
    return systemCpuMax_;
}

void SetQosThresholdReq::setSystemCpuMax(const SetCPUThresholdData& value)
{
    systemCpuMax_ = value;
    systemCpuMaxIsSet_ = true;
}

bool SetQosThresholdReq::systemCpuMaxIsSet() const
{
    return systemCpuMaxIsSet_;
}

void SetQosThresholdReq::unsetsystemCpuMax()
{
    systemCpuMaxIsSet_ = false;
}

}
}
}
}
}


