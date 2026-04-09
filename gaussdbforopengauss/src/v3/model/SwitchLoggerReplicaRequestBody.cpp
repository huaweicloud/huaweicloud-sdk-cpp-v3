

#include "huaweicloud/gaussdbforopengauss/v3/model/SwitchLoggerReplicaRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




SwitchLoggerReplicaRequestBody::SwitchLoggerReplicaRequestBody()
{
    availabilityZone_ = "";
    availabilityZoneIsSet_ = false;
}

SwitchLoggerReplicaRequestBody::~SwitchLoggerReplicaRequestBody() = default;

void SwitchLoggerReplicaRequestBody::validate()
{
}

web::json::value SwitchLoggerReplicaRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(availabilityZoneIsSet_) {
        val[utility::conversions::to_string_t("availability_zone")] = ModelBase::toJson(availabilityZone_);
    }

    return val;
}
bool SwitchLoggerReplicaRequestBody::fromJson(const web::json::value& val)
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


std::string SwitchLoggerReplicaRequestBody::getAvailabilityZone() const
{
    return availabilityZone_;
}

void SwitchLoggerReplicaRequestBody::setAvailabilityZone(const std::string& value)
{
    availabilityZone_ = value;
    availabilityZoneIsSet_ = true;
}

bool SwitchLoggerReplicaRequestBody::availabilityZoneIsSet() const
{
    return availabilityZoneIsSet_;
}

void SwitchLoggerReplicaRequestBody::unsetavailabilityZone()
{
    availabilityZoneIsSet_ = false;
}

}
}
}
}
}


