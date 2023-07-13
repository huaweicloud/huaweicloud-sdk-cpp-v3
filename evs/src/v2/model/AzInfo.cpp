

#include "huaweicloud/evs/v2/model/AzInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




AzInfo::AzInfo()
{
    zoneName_ = "";
    zoneNameIsSet_ = false;
    zoneStateIsSet_ = false;
}

AzInfo::~AzInfo() = default;

void AzInfo::validate()
{
}

web::json::value AzInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(zoneNameIsSet_) {
        val[utility::conversions::to_string_t("zoneName")] = ModelBase::toJson(zoneName_);
    }
    if(zoneStateIsSet_) {
        val[utility::conversions::to_string_t("zoneState")] = ModelBase::toJson(zoneState_);
    }

    return val;
}

bool AzInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
            ZoneState refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setZoneState(refVal);
        }
    }
    return ok;
}

std::string AzInfo::getZoneName() const
{
    return zoneName_;
}

void AzInfo::setZoneName(const std::string& value)
{
    zoneName_ = value;
    zoneNameIsSet_ = true;
}

bool AzInfo::zoneNameIsSet() const
{
    return zoneNameIsSet_;
}

void AzInfo::unsetzoneName()
{
    zoneNameIsSet_ = false;
}

ZoneState AzInfo::getZoneState() const
{
    return zoneState_;
}

void AzInfo::setZoneState(const ZoneState& value)
{
    zoneState_ = value;
    zoneStateIsSet_ = true;
}

bool AzInfo::zoneStateIsSet() const
{
    return zoneStateIsSet_;
}

void AzInfo::unsetzoneState()
{
    zoneStateIsSet_ = false;
}

}
}
}
}
}


