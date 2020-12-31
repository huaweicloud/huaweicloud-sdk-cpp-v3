

#include "huaweicloud/evs/model/ZoneState.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Evs {
namespace V2 {
namespace Model {




ZoneState::ZoneState()
{
    available_ = false;
    availableIsSet_ = false;
}

ZoneState::~ZoneState() = default;

void ZoneState::validate()
{
}

web::json::value ZoneState::toJson() const
{
    web::json::value val = web::json::value::object();

    if(availableIsSet_) {
        val[utility::conversions::to_string_t("available")] = ModelBase::toJson(available_);
    }

    return val;
}

bool ZoneState::fromJson(const web::json::value& val)
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


bool ZoneState::isAvailable() const
{
    return available_;
}

void ZoneState::setAvailable(bool value)
{
    available_ = value;
    availableIsSet_ = true;
}

bool ZoneState::availableIsSet() const
{
    return availableIsSet_;
}

void ZoneState::unsetavailable()
{
    availableIsSet_ = false;
}

}
}
}
}
}


