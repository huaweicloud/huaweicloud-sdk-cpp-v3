

#include "huaweicloud/antiddos/v2/model/ExtendDDoSSet.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Antiddos {
namespace V2 {
namespace Model {




ExtendDDoSSet::ExtendDDoSSet()
{
    setID_ = 0L;
    setIDIsSet_ = false;
    newConnectionLimited_ = 0L;
    newConnectionLimitedIsSet_ = false;
    totalConnectionLimited_ = 0L;
    totalConnectionLimitedIsSet_ = false;
    httpPacketPerSecond_ = 0L;
    httpPacketPerSecondIsSet_ = false;
    trafficPerSecond_ = 0L;
    trafficPerSecondIsSet_ = false;
    packetPerSecond_ = 0L;
    packetPerSecondIsSet_ = false;
}

ExtendDDoSSet::~ExtendDDoSSet() = default;

void ExtendDDoSSet::validate()
{
}

web::json::value ExtendDDoSSet::toJson() const
{
    web::json::value val = web::json::value::object();

    if(setIDIsSet_) {
        val[utility::conversions::to_string_t("SetID")] = ModelBase::toJson(setID_);
    }
    if(newConnectionLimitedIsSet_) {
        val[utility::conversions::to_string_t("new_connection_limited")] = ModelBase::toJson(newConnectionLimited_);
    }
    if(totalConnectionLimitedIsSet_) {
        val[utility::conversions::to_string_t("total_connection_limited")] = ModelBase::toJson(totalConnectionLimited_);
    }
    if(httpPacketPerSecondIsSet_) {
        val[utility::conversions::to_string_t("http_packet_per_second")] = ModelBase::toJson(httpPacketPerSecond_);
    }
    if(trafficPerSecondIsSet_) {
        val[utility::conversions::to_string_t("traffic_per_second")] = ModelBase::toJson(trafficPerSecond_);
    }
    if(packetPerSecondIsSet_) {
        val[utility::conversions::to_string_t("packet_per_second")] = ModelBase::toJson(packetPerSecond_);
    }

    return val;
}
bool ExtendDDoSSet::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("SetID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("SetID"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSetID(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("new_connection_limited"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("new_connection_limited"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNewConnectionLimited(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("total_connection_limited"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("total_connection_limited"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTotalConnectionLimited(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("http_packet_per_second"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("http_packet_per_second"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHttpPacketPerSecond(refVal);
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


int64_t ExtendDDoSSet::getSetID() const
{
    return setID_;
}

void ExtendDDoSSet::setSetID(int64_t value)
{
    setID_ = value;
    setIDIsSet_ = true;
}

bool ExtendDDoSSet::setIDIsSet() const
{
    return setIDIsSet_;
}

void ExtendDDoSSet::unsetsetID()
{
    setIDIsSet_ = false;
}

int64_t ExtendDDoSSet::getNewConnectionLimited() const
{
    return newConnectionLimited_;
}

void ExtendDDoSSet::setNewConnectionLimited(int64_t value)
{
    newConnectionLimited_ = value;
    newConnectionLimitedIsSet_ = true;
}

bool ExtendDDoSSet::newConnectionLimitedIsSet() const
{
    return newConnectionLimitedIsSet_;
}

void ExtendDDoSSet::unsetnewConnectionLimited()
{
    newConnectionLimitedIsSet_ = false;
}

int64_t ExtendDDoSSet::getTotalConnectionLimited() const
{
    return totalConnectionLimited_;
}

void ExtendDDoSSet::setTotalConnectionLimited(int64_t value)
{
    totalConnectionLimited_ = value;
    totalConnectionLimitedIsSet_ = true;
}

bool ExtendDDoSSet::totalConnectionLimitedIsSet() const
{
    return totalConnectionLimitedIsSet_;
}

void ExtendDDoSSet::unsettotalConnectionLimited()
{
    totalConnectionLimitedIsSet_ = false;
}

int64_t ExtendDDoSSet::getHttpPacketPerSecond() const
{
    return httpPacketPerSecond_;
}

void ExtendDDoSSet::setHttpPacketPerSecond(int64_t value)
{
    httpPacketPerSecond_ = value;
    httpPacketPerSecondIsSet_ = true;
}

bool ExtendDDoSSet::httpPacketPerSecondIsSet() const
{
    return httpPacketPerSecondIsSet_;
}

void ExtendDDoSSet::unsethttpPacketPerSecond()
{
    httpPacketPerSecondIsSet_ = false;
}

int64_t ExtendDDoSSet::getTrafficPerSecond() const
{
    return trafficPerSecond_;
}

void ExtendDDoSSet::setTrafficPerSecond(int64_t value)
{
    trafficPerSecond_ = value;
    trafficPerSecondIsSet_ = true;
}

bool ExtendDDoSSet::trafficPerSecondIsSet() const
{
    return trafficPerSecondIsSet_;
}

void ExtendDDoSSet::unsettrafficPerSecond()
{
    trafficPerSecondIsSet_ = false;
}

int64_t ExtendDDoSSet::getPacketPerSecond() const
{
    return packetPerSecond_;
}

void ExtendDDoSSet::setPacketPerSecond(int64_t value)
{
    packetPerSecond_ = value;
    packetPerSecondIsSet_ = true;
}

bool ExtendDDoSSet::packetPerSecondIsSet() const
{
    return packetPerSecondIsSet_;
}

void ExtendDDoSSet::unsetpacketPerSecond()
{
    packetPerSecondIsSet_ = false;
}

}
}
}
}
}


