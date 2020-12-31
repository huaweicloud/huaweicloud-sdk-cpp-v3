

#include "huaweicloud/vpc/model/ShowNetworkIpAvailabilitiesResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Vpc {
namespace V2 {
namespace Model {




ShowNetworkIpAvailabilitiesResponse::ShowNetworkIpAvailabilitiesResponse()
{
    networkIpAvailabilityIsSet_ = false;
}

ShowNetworkIpAvailabilitiesResponse::~ShowNetworkIpAvailabilitiesResponse() = default;

void ShowNetworkIpAvailabilitiesResponse::validate()
{
}

web::json::value ShowNetworkIpAvailabilitiesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(networkIpAvailabilityIsSet_) {
        val[utility::conversions::to_string_t("network_ip_availability")] = ModelBase::toJson(networkIpAvailability_);
    }

    return val;
}

bool ShowNetworkIpAvailabilitiesResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("network_ip_availability"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("network_ip_availability"));
        if(!fieldValue.is_null())
        {
            NetworkIpAvailability refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNetworkIpAvailability(refVal);
        }
    }
    return ok;
}


NetworkIpAvailability ShowNetworkIpAvailabilitiesResponse::getNetworkIpAvailability() const
{
    return networkIpAvailability_;
}

void ShowNetworkIpAvailabilitiesResponse::setNetworkIpAvailability(const NetworkIpAvailability& value)
{
    networkIpAvailability_ = value;
    networkIpAvailabilityIsSet_ = true;
}

bool ShowNetworkIpAvailabilitiesResponse::networkIpAvailabilityIsSet() const
{
    return networkIpAvailabilityIsSet_;
}

void ShowNetworkIpAvailabilitiesResponse::unsetnetworkIpAvailability()
{
    networkIpAvailabilityIsSet_ = false;
}

}
}
}
}
}


