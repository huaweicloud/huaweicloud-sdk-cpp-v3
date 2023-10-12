

#include "huaweicloud/gaussdbfornosql/v3/model/AvailabilityZoneDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




AvailabilityZoneDetail::AvailabilityZoneDetail()
{
    primaryAvailabilityZone_ = "";
    primaryAvailabilityZoneIsSet_ = false;
    secondaryAvailabilityZone_ = "";
    secondaryAvailabilityZoneIsSet_ = false;
}

AvailabilityZoneDetail::~AvailabilityZoneDetail() = default;

void AvailabilityZoneDetail::validate()
{
}

web::json::value AvailabilityZoneDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(primaryAvailabilityZoneIsSet_) {
        val[utility::conversions::to_string_t("primary_availability_zone")] = ModelBase::toJson(primaryAvailabilityZone_);
    }
    if(secondaryAvailabilityZoneIsSet_) {
        val[utility::conversions::to_string_t("secondary_availability_zone")] = ModelBase::toJson(secondaryAvailabilityZone_);
    }

    return val;
}
bool AvailabilityZoneDetail::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("primary_availability_zone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("primary_availability_zone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrimaryAvailabilityZone(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("secondary_availability_zone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("secondary_availability_zone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecondaryAvailabilityZone(refVal);
        }
    }
    return ok;
}


std::string AvailabilityZoneDetail::getPrimaryAvailabilityZone() const
{
    return primaryAvailabilityZone_;
}

void AvailabilityZoneDetail::setPrimaryAvailabilityZone(const std::string& value)
{
    primaryAvailabilityZone_ = value;
    primaryAvailabilityZoneIsSet_ = true;
}

bool AvailabilityZoneDetail::primaryAvailabilityZoneIsSet() const
{
    return primaryAvailabilityZoneIsSet_;
}

void AvailabilityZoneDetail::unsetprimaryAvailabilityZone()
{
    primaryAvailabilityZoneIsSet_ = false;
}

std::string AvailabilityZoneDetail::getSecondaryAvailabilityZone() const
{
    return secondaryAvailabilityZone_;
}

void AvailabilityZoneDetail::setSecondaryAvailabilityZone(const std::string& value)
{
    secondaryAvailabilityZone_ = value;
    secondaryAvailabilityZoneIsSet_ = true;
}

bool AvailabilityZoneDetail::secondaryAvailabilityZoneIsSet() const
{
    return secondaryAvailabilityZoneIsSet_;
}

void AvailabilityZoneDetail::unsetsecondaryAvailabilityZone()
{
    secondaryAvailabilityZoneIsSet_ = false;
}

}
}
}
}
}


