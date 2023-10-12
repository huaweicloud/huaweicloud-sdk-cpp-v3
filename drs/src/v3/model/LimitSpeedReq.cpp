

#include "huaweicloud/drs/v3/model/LimitSpeedReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




LimitSpeedReq::LimitSpeedReq()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    speedLimitIsSet_ = false;
}

LimitSpeedReq::~LimitSpeedReq() = default;

void LimitSpeedReq::validate()
{
}

web::json::value LimitSpeedReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(speedLimitIsSet_) {
        val[utility::conversions::to_string_t("speed_limit")] = ModelBase::toJson(speedLimit_);
    }

    return val;
}
bool LimitSpeedReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("speed_limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("speed_limit"));
        if(!fieldValue.is_null())
        {
            std::vector<SpeedLimitInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSpeedLimit(refVal);
        }
    }
    return ok;
}


std::string LimitSpeedReq::getJobId() const
{
    return jobId_;
}

void LimitSpeedReq::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool LimitSpeedReq::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void LimitSpeedReq::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::vector<SpeedLimitInfo>& LimitSpeedReq::getSpeedLimit()
{
    return speedLimit_;
}

void LimitSpeedReq::setSpeedLimit(const std::vector<SpeedLimitInfo>& value)
{
    speedLimit_ = value;
    speedLimitIsSet_ = true;
}

bool LimitSpeedReq::speedLimitIsSet() const
{
    return speedLimitIsSet_;
}

void LimitSpeedReq::unsetspeedLimit()
{
    speedLimitIsSet_ = false;
}

}
}
}
}
}


