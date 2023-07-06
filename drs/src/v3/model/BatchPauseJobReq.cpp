

#include "huaweicloud/drs/v3/model/BatchPauseJobReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




BatchPauseJobReq::BatchPauseJobReq()
{
    jobsIsSet_ = false;
}

BatchPauseJobReq::~BatchPauseJobReq() = default;

void BatchPauseJobReq::validate()
{
}

web::json::value BatchPauseJobReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobsIsSet_) {
        val[utility::conversions::to_string_t("jobs")] = ModelBase::toJson(jobs_);
    }

    return val;
}

bool BatchPauseJobReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("jobs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("jobs"));
        if(!fieldValue.is_null())
        {
            std::vector<PauseInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobs(refVal);
        }
    }
    return ok;
}

std::vector<PauseInfo>& BatchPauseJobReq::getJobs()
{
    return jobs_;
}

void BatchPauseJobReq::setJobs(const std::vector<PauseInfo>& value)
{
    jobs_ = value;
    jobsIsSet_ = true;
}

bool BatchPauseJobReq::jobsIsSet() const
{
    return jobsIsSet_;
}

void BatchPauseJobReq::unsetjobs()
{
    jobsIsSet_ = false;
}

}
}
}
}
}


