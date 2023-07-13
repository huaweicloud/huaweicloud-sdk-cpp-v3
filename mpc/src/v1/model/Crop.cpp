

#include "huaweicloud/mpc/v1/model/Crop.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




Crop::Crop()
{
    duration_ = 0;
    durationIsSet_ = false;
}

Crop::~Crop() = default;

void Crop::validate()
{
}

web::json::value Crop::toJson() const
{
    web::json::value val = web::json::value::object();

    if(durationIsSet_) {
        val[utility::conversions::to_string_t("duration")] = ModelBase::toJson(duration_);
    }

    return val;
}

bool Crop::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("duration"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("duration"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDuration(refVal);
        }
    }
    return ok;
}

int32_t Crop::getDuration() const
{
    return duration_;
}

void Crop::setDuration(int32_t value)
{
    duration_ = value;
    durationIsSet_ = true;
}

bool Crop::durationIsSet() const
{
    return durationIsSet_;
}

void Crop::unsetduration()
{
    durationIsSet_ = false;
}

}
}
}
}
}


