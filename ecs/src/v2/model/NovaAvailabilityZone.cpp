

#include "huaweicloud/ecs/v2/model/NovaAvailabilityZone.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




NovaAvailabilityZone::NovaAvailabilityZone()
{
    hostsIsSet_ = false;
    zoneName_ = "";
    zoneNameIsSet_ = false;
    zoneStateIsSet_ = false;
}

NovaAvailabilityZone::~NovaAvailabilityZone() = default;

void NovaAvailabilityZone::validate()
{
}

web::json::value NovaAvailabilityZone::toJson() const
{
    web::json::value val = web::json::value::object();

    if(hostsIsSet_) {
        val[utility::conversions::to_string_t("hosts")] = ModelBase::toJson(hosts_);
    }
    if(zoneNameIsSet_) {
        val[utility::conversions::to_string_t("zoneName")] = ModelBase::toJson(zoneName_);
    }
    if(zoneStateIsSet_) {
        val[utility::conversions::to_string_t("zoneState")] = ModelBase::toJson(zoneState_);
    }

    return val;
}
bool NovaAvailabilityZone::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("hosts"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hosts"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHosts(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("zoneName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("zoneName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setZoneName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("zoneState"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("zoneState"));
        if(!fieldValue.is_null())
        {
            NovaAvailabilityZoneState refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setZoneState(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& NovaAvailabilityZone::getHosts()
{
    return hosts_;
}

void NovaAvailabilityZone::setHosts(const std::vector<std::string>& value)
{
    hosts_ = value;
    hostsIsSet_ = true;
}

bool NovaAvailabilityZone::hostsIsSet() const
{
    return hostsIsSet_;
}

void NovaAvailabilityZone::unsethosts()
{
    hostsIsSet_ = false;
}

std::string NovaAvailabilityZone::getZoneName() const
{
    return zoneName_;
}

void NovaAvailabilityZone::setZoneName(const std::string& value)
{
    zoneName_ = value;
    zoneNameIsSet_ = true;
}

bool NovaAvailabilityZone::zoneNameIsSet() const
{
    return zoneNameIsSet_;
}

void NovaAvailabilityZone::unsetzoneName()
{
    zoneNameIsSet_ = false;
}

NovaAvailabilityZoneState NovaAvailabilityZone::getZoneState() const
{
    return zoneState_;
}

void NovaAvailabilityZone::setZoneState(const NovaAvailabilityZoneState& value)
{
    zoneState_ = value;
    zoneStateIsSet_ = true;
}

bool NovaAvailabilityZone::zoneStateIsSet() const
{
    return zoneStateIsSet_;
}

void NovaAvailabilityZone::unsetzoneState()
{
    zoneStateIsSet_ = false;
}

}
}
}
}
}


