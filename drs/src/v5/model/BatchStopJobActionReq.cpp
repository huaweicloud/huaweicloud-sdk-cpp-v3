

#include "huaweicloud/drs/v5/model/BatchStopJobActionReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




BatchStopJobActionReq::BatchStopJobActionReq()
{
    jobsIsSet_ = false;
}

BatchStopJobActionReq::~BatchStopJobActionReq() = default;

void BatchStopJobActionReq::validate()
{
}

web::json::value BatchStopJobActionReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobsIsSet_) {
        val[utility::conversions::to_string_t("jobs")] = ModelBase::toJson(jobs_);
    }

    return val;
}
bool BatchStopJobActionReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("jobs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("jobs"));
        if(!fieldValue.is_null())
        {
            std::vector<StopJobActionInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobs(refVal);
        }
    }
    return ok;
}


std::vector<StopJobActionInfo>& BatchStopJobActionReq::getJobs()
{
    return jobs_;
}

void BatchStopJobActionReq::setJobs(const std::vector<StopJobActionInfo>& value)
{
    jobs_ = value;
    jobsIsSet_ = true;
}

bool BatchStopJobActionReq::jobsIsSet() const
{
    return jobsIsSet_;
}

void BatchStopJobActionReq::unsetjobs()
{
    jobsIsSet_ = false;
}

}
}
}
}
}


