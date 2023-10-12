

#include "huaweicloud/drs/v5/model/StopJobActionInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




StopJobActionInfo::StopJobActionInfo()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    isForceStop_ = false;
    isForceStopIsSet_ = false;
}

StopJobActionInfo::~StopJobActionInfo() = default;

void StopJobActionInfo::validate()
{
}

web::json::value StopJobActionInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(isForceStopIsSet_) {
        val[utility::conversions::to_string_t("is_force_stop")] = ModelBase::toJson(isForceStop_);
    }

    return val;
}
bool StopJobActionInfo::fromJson(const web::json::value& val)
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


std::string StopJobActionInfo::getJobId() const
{
    return jobId_;
}

void StopJobActionInfo::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool StopJobActionInfo::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void StopJobActionInfo::unsetjobId()
{
    jobIdIsSet_ = false;
}

bool StopJobActionInfo::isIsForceStop() const
{
    return isForceStop_;
}

void StopJobActionInfo::setIsForceStop(bool value)
{
    isForceStop_ = value;
    isForceStopIsSet_ = true;
}

bool StopJobActionInfo::isForceStopIsSet() const
{
    return isForceStopIsSet_;
}

void StopJobActionInfo::unsetisForceStop()
{
    isForceStopIsSet_ = false;
}

}
}
}
}
}


