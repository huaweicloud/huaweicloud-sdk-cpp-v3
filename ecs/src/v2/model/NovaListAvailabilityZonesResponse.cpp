

#include "huaweicloud/ecs/v2/model/NovaListAvailabilityZonesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




NovaListAvailabilityZonesResponse::NovaListAvailabilityZonesResponse()
{
    availabilityZoneInfoIsSet_ = false;
}

NovaListAvailabilityZonesResponse::~NovaListAvailabilityZonesResponse() = default;

void NovaListAvailabilityZonesResponse::validate()
{
}

web::json::value NovaListAvailabilityZonesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(availabilityZoneInfoIsSet_) {
        val[utility::conversions::to_string_t("availabilityZoneInfo")] = ModelBase::toJson(availabilityZoneInfo_);
    }

    return val;
}
bool NovaListAvailabilityZonesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("availabilityZoneInfo"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("availabilityZoneInfo"));
        if(!fieldValue.is_null())
        {
            std::vector<NovaAvailabilityZone> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvailabilityZoneInfo(refVal);
        }
    }
    return ok;
}


std::vector<NovaAvailabilityZone>& NovaListAvailabilityZonesResponse::getAvailabilityZoneInfo()
{
    return availabilityZoneInfo_;
}

void NovaListAvailabilityZonesResponse::setAvailabilityZoneInfo(const std::vector<NovaAvailabilityZone>& value)
{
    availabilityZoneInfo_ = value;
    availabilityZoneInfoIsSet_ = true;
}

bool NovaListAvailabilityZonesResponse::availabilityZoneInfoIsSet() const
{
    return availabilityZoneInfoIsSet_;
}

void NovaListAvailabilityZonesResponse::unsetavailabilityZoneInfo()
{
    availabilityZoneInfoIsSet_ = false;
}

}
}
}
}
}


