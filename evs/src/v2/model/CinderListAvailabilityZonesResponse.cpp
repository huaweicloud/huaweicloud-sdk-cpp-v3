

#include "huaweicloud/evs/v2/model/CinderListAvailabilityZonesResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




CinderListAvailabilityZonesResponse::CinderListAvailabilityZonesResponse()
{
    availabilityZoneInfoIsSet_ = false;
}

CinderListAvailabilityZonesResponse::~CinderListAvailabilityZonesResponse() = default;

void CinderListAvailabilityZonesResponse::validate()
{
}

web::json::value CinderListAvailabilityZonesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(availabilityZoneInfoIsSet_) {
        val[utility::conversions::to_string_t("availabilityZoneInfo")] = ModelBase::toJson(availabilityZoneInfo_);
    }

    return val;
}

bool CinderListAvailabilityZonesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("availabilityZoneInfo"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("availabilityZoneInfo"));
        if(!fieldValue.is_null())
        {
            std::vector<AzInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvailabilityZoneInfo(refVal);
        }
    }
    return ok;
}

std::vector<AzInfo>& CinderListAvailabilityZonesResponse::getAvailabilityZoneInfo()
{
    return availabilityZoneInfo_;
}

void CinderListAvailabilityZonesResponse::setAvailabilityZoneInfo(const std::vector<AzInfo>& value)
{
    availabilityZoneInfo_ = value;
    availabilityZoneInfoIsSet_ = true;
}

bool CinderListAvailabilityZonesResponse::availabilityZoneInfoIsSet() const
{
    return availabilityZoneInfoIsSet_;
}

void CinderListAvailabilityZonesResponse::unsetavailabilityZoneInfo()
{
    availabilityZoneInfoIsSet_ = false;
}

}
}
}
}
}


