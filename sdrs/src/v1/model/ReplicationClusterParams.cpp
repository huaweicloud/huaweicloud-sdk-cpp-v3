

#include "huaweicloud/sdrs/v1/model/ReplicationClusterParams.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




ReplicationClusterParams::ReplicationClusterParams()
{
    availabilityZone_ = "";
    availabilityZoneIsSet_ = false;
}

ReplicationClusterParams::~ReplicationClusterParams() = default;

void ReplicationClusterParams::validate()
{
}

web::json::value ReplicationClusterParams::toJson() const
{
    web::json::value val = web::json::value::object();

    if(availabilityZoneIsSet_) {
        val[utility::conversions::to_string_t("availability_zone")] = ModelBase::toJson(availabilityZone_);
    }

    return val;
}

bool ReplicationClusterParams::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("availability_zone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("availability_zone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvailabilityZone(refVal);
        }
    }
    return ok;
}

std::string ReplicationClusterParams::getAvailabilityZone() const
{
    return availabilityZone_;
}

void ReplicationClusterParams::setAvailabilityZone(const std::string& value)
{
    availabilityZone_ = value;
    availabilityZoneIsSet_ = true;
}

bool ReplicationClusterParams::availabilityZoneIsSet() const
{
    return availabilityZoneIsSet_;
}

void ReplicationClusterParams::unsetavailabilityZone()
{
    availabilityZoneIsSet_ = false;
}

}
}
}
}
}


