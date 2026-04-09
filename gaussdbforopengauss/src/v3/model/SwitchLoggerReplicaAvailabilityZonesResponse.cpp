

#include "huaweicloud/gaussdbforopengauss/v3/model/SwitchLoggerReplicaAvailabilityZonesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




SwitchLoggerReplicaAvailabilityZonesResponse::SwitchLoggerReplicaAvailabilityZonesResponse()
{
    availabilityZoneInfosIsSet_ = false;
}

SwitchLoggerReplicaAvailabilityZonesResponse::~SwitchLoggerReplicaAvailabilityZonesResponse() = default;

void SwitchLoggerReplicaAvailabilityZonesResponse::validate()
{
}

web::json::value SwitchLoggerReplicaAvailabilityZonesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(availabilityZoneInfosIsSet_) {
        val[utility::conversions::to_string_t("availability_zone_infos")] = ModelBase::toJson(availabilityZoneInfos_);
    }

    return val;
}
bool SwitchLoggerReplicaAvailabilityZonesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("availability_zone_infos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("availability_zone_infos"));
        if(!fieldValue.is_null())
        {
            std::vector<AzInformationResult> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvailabilityZoneInfos(refVal);
        }
    }
    return ok;
}


std::vector<AzInformationResult>& SwitchLoggerReplicaAvailabilityZonesResponse::getAvailabilityZoneInfos()
{
    return availabilityZoneInfos_;
}

void SwitchLoggerReplicaAvailabilityZonesResponse::setAvailabilityZoneInfos(const std::vector<AzInformationResult>& value)
{
    availabilityZoneInfos_ = value;
    availabilityZoneInfosIsSet_ = true;
}

bool SwitchLoggerReplicaAvailabilityZonesResponse::availabilityZoneInfosIsSet() const
{
    return availabilityZoneInfosIsSet_;
}

void SwitchLoggerReplicaAvailabilityZonesResponse::unsetavailabilityZoneInfos()
{
    availabilityZoneInfosIsSet_ = false;
}

}
}
}
}
}


