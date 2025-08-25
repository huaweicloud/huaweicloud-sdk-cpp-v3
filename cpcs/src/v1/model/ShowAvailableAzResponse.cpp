

#include "huaweicloud/cpcs/v1/model/ShowAvailableAzResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cpcs {
namespace V1 {
namespace Model {




ShowAvailableAzResponse::ShowAvailableAzResponse()
{
    availabilityZoneIsSet_ = false;
}

ShowAvailableAzResponse::~ShowAvailableAzResponse() = default;

void ShowAvailableAzResponse::validate()
{
}

web::json::value ShowAvailableAzResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(availabilityZoneIsSet_) {
        val[utility::conversions::to_string_t("availability_zone")] = ModelBase::toJson(availabilityZone_);
    }

    return val;
}
bool ShowAvailableAzResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("availability_zone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("availability_zone"));
        if(!fieldValue.is_null())
        {
            std::vector<ShowAvailableAzResponsebody_availability_zone> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvailabilityZone(refVal);
        }
    }
    return ok;
}


std::vector<ShowAvailableAzResponsebody_availability_zone>& ShowAvailableAzResponse::getAvailabilityZone()
{
    return availabilityZone_;
}

void ShowAvailableAzResponse::setAvailabilityZone(const std::vector<ShowAvailableAzResponsebody_availability_zone>& value)
{
    availabilityZone_ = value;
    availabilityZoneIsSet_ = true;
}

bool ShowAvailableAzResponse::availabilityZoneIsSet() const
{
    return availabilityZoneIsSet_;
}

void ShowAvailableAzResponse::unsetavailabilityZone()
{
    availabilityZoneIsSet_ = false;
}

}
}
}
}
}


