

#include "huaweicloud/drs/v3/model/BatchLimitSpeedReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




BatchLimitSpeedReq::BatchLimitSpeedReq()
{
    speedLimitsIsSet_ = false;
}

BatchLimitSpeedReq::~BatchLimitSpeedReq() = default;

void BatchLimitSpeedReq::validate()
{
}

web::json::value BatchLimitSpeedReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(speedLimitsIsSet_) {
        val[utility::conversions::to_string_t("speed_limits")] = ModelBase::toJson(speedLimits_);
    }

    return val;
}

bool BatchLimitSpeedReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("speed_limits"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("speed_limits"));
        if(!fieldValue.is_null())
        {
            std::vector<LimitSpeedReq> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpeedLimits(refVal);
        }
    }
    return ok;
}

std::vector<LimitSpeedReq>& BatchLimitSpeedReq::getSpeedLimits()
{
    return speedLimits_;
}

void BatchLimitSpeedReq::setSpeedLimits(const std::vector<LimitSpeedReq>& value)
{
    speedLimits_ = value;
    speedLimitsIsSet_ = true;
}

bool BatchLimitSpeedReq::speedLimitsIsSet() const
{
    return speedLimitsIsSet_;
}

void BatchLimitSpeedReq::unsetspeedLimits()
{
    speedLimitsIsSet_ = false;
}

}
}
}
}
}


