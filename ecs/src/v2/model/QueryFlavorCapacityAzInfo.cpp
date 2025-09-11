

#include "huaweicloud/ecs/v2/model/QueryFlavorCapacityAzInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




QueryFlavorCapacityAzInfo::QueryFlavorCapacityAzInfo()
{
    regionId_ = "";
    regionIdIsSet_ = false;
    availabilityZone_ = "";
    availabilityZoneIsSet_ = false;
    prefer_ = false;
    preferIsSet_ = false;
}

QueryFlavorCapacityAzInfo::~QueryFlavorCapacityAzInfo() = default;

void QueryFlavorCapacityAzInfo::validate()
{
}

web::json::value QueryFlavorCapacityAzInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(regionIdIsSet_) {
        val[utility::conversions::to_string_t("region_id")] = ModelBase::toJson(regionId_);
    }
    if(availabilityZoneIsSet_) {
        val[utility::conversions::to_string_t("availability_zone")] = ModelBase::toJson(availabilityZone_);
    }
    if(preferIsSet_) {
        val[utility::conversions::to_string_t("prefer")] = ModelBase::toJson(prefer_);
    }

    return val;
}
bool QueryFlavorCapacityAzInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("region_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegionId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("availability_zone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("availability_zone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvailabilityZone(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("prefer"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("prefer"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrefer(refVal);
        }
    }
    return ok;
}


std::string QueryFlavorCapacityAzInfo::getRegionId() const
{
    return regionId_;
}

void QueryFlavorCapacityAzInfo::setRegionId(const std::string& value)
{
    regionId_ = value;
    regionIdIsSet_ = true;
}

bool QueryFlavorCapacityAzInfo::regionIdIsSet() const
{
    return regionIdIsSet_;
}

void QueryFlavorCapacityAzInfo::unsetregionId()
{
    regionIdIsSet_ = false;
}

std::string QueryFlavorCapacityAzInfo::getAvailabilityZone() const
{
    return availabilityZone_;
}

void QueryFlavorCapacityAzInfo::setAvailabilityZone(const std::string& value)
{
    availabilityZone_ = value;
    availabilityZoneIsSet_ = true;
}

bool QueryFlavorCapacityAzInfo::availabilityZoneIsSet() const
{
    return availabilityZoneIsSet_;
}

void QueryFlavorCapacityAzInfo::unsetavailabilityZone()
{
    availabilityZoneIsSet_ = false;
}

bool QueryFlavorCapacityAzInfo::isPrefer() const
{
    return prefer_;
}

void QueryFlavorCapacityAzInfo::setPrefer(bool value)
{
    prefer_ = value;
    preferIsSet_ = true;
}

bool QueryFlavorCapacityAzInfo::preferIsSet() const
{
    return preferIsSet_;
}

void QueryFlavorCapacityAzInfo::unsetprefer()
{
    preferIsSet_ = false;
}

}
}
}
}
}


