

#include "huaweicloud/antiddos/v2/model/TriggerBpsDict.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V2 {
namespace Model {




TriggerBpsDict::TriggerBpsDict()
{
    trafficPosId_ = 0L;
    trafficPosIdIsSet_ = false;
    trafficPerSecond_ = 0L;
    trafficPerSecondIsSet_ = false;
    packetPerSecond_ = 0L;
    packetPerSecondIsSet_ = false;
}

TriggerBpsDict::~TriggerBpsDict() = default;

void TriggerBpsDict::validate()
{
}

web::json::value TriggerBpsDict::toJson() const
{
    web::json::value val = web::json::value::object();

    if(trafficPosIdIsSet_) {
        val[utility::conversions::to_string_t("traffic_pos_id")] = ModelBase::toJson(trafficPosId_);
    }
    if(trafficPerSecondIsSet_) {
        val[utility::conversions::to_string_t("traffic_per_second")] = ModelBase::toJson(trafficPerSecond_);
    }
    if(packetPerSecondIsSet_) {
        val[utility::conversions::to_string_t("packet_per_second")] = ModelBase::toJson(packetPerSecond_);
    }

    return val;
}
bool TriggerBpsDict::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("traffic_pos_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("traffic_pos_id"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrafficPosId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("traffic_per_second"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("traffic_per_second"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrafficPerSecond(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("packet_per_second"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("packet_per_second"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPacketPerSecond(refVal);
        }
    }
    return ok;
}


int64_t TriggerBpsDict::getTrafficPosId() const
{
    return trafficPosId_;
}

void TriggerBpsDict::setTrafficPosId(int64_t value)
{
    trafficPosId_ = value;
    trafficPosIdIsSet_ = true;
}

bool TriggerBpsDict::trafficPosIdIsSet() const
{
    return trafficPosIdIsSet_;
}

void TriggerBpsDict::unsettrafficPosId()
{
    trafficPosIdIsSet_ = false;
}

int64_t TriggerBpsDict::getTrafficPerSecond() const
{
    return trafficPerSecond_;
}

void TriggerBpsDict::setTrafficPerSecond(int64_t value)
{
    trafficPerSecond_ = value;
    trafficPerSecondIsSet_ = true;
}

bool TriggerBpsDict::trafficPerSecondIsSet() const
{
    return trafficPerSecondIsSet_;
}

void TriggerBpsDict::unsettrafficPerSecond()
{
    trafficPerSecondIsSet_ = false;
}

int64_t TriggerBpsDict::getPacketPerSecond() const
{
    return packetPerSecond_;
}

void TriggerBpsDict::setPacketPerSecond(int64_t value)
{
    packetPerSecond_ = value;
    packetPerSecondIsSet_ = true;
}

bool TriggerBpsDict::packetPerSecondIsSet() const
{
    return packetPerSecondIsSet_;
}

void TriggerBpsDict::unsetpacketPerSecond()
{
    packetPerSecondIsSet_ = false;
}

}
}
}
}
}


