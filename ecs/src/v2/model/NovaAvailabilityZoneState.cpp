

#include "huaweicloud/ecs/v2/model/NovaAvailabilityZoneState.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Ecs {
namespace V2 {
namespace Model {




NovaAvailabilityZoneState::NovaAvailabilityZoneState()
{
    available_ = false;
    availableIsSet_ = false;
}

NovaAvailabilityZoneState::~NovaAvailabilityZoneState() = default;

void NovaAvailabilityZoneState::validate()
{
}

web::json::value NovaAvailabilityZoneState::toJson() const
{
    web::json::value val = web::json::value::object();

    if(availableIsSet_) {
        val[utility::conversions::to_string_t("available")] = ModelBase::toJson(available_);
    }

    return val;
}

bool NovaAvailabilityZoneState::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("available"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("available"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvailable(refVal);
        }
    }
    return ok;
}

bool NovaAvailabilityZoneState::isAvailable() const
{
    return available_;
}

void NovaAvailabilityZoneState::setAvailable(bool value)
{
    available_ = value;
    availableIsSet_ = true;
}

bool NovaAvailabilityZoneState::availableIsSet() const
{
    return availableIsSet_;
}

void NovaAvailabilityZoneState::unsetavailable()
{
    availableIsSet_ = false;
}

}
}
}
}
}


