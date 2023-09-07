

#include "huaweicloud/drs/v5/model/StopJobActionReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




StopJobActionReq::StopJobActionReq()
{
    isForceStop_ = false;
    isForceStopIsSet_ = false;
}

StopJobActionReq::~StopJobActionReq() = default;

void StopJobActionReq::validate()
{
}

web::json::value StopJobActionReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(isForceStopIsSet_) {
        val[utility::conversions::to_string_t("is_force_stop")] = ModelBase::toJson(isForceStop_);
    }

    return val;
}

bool StopJobActionReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("is_force_stop"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_force_stop"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsForceStop(refVal);
        }
    }
    return ok;
}

bool StopJobActionReq::isIsForceStop() const
{
    return isForceStop_;
}

void StopJobActionReq::setIsForceStop(bool value)
{
    isForceStop_ = value;
    isForceStopIsSet_ = true;
}

bool StopJobActionReq::isForceStopIsSet() const
{
    return isForceStopIsSet_;
}

void StopJobActionReq::unsetisForceStop()
{
    isForceStopIsSet_ = false;
}

}
}
}
}
}


