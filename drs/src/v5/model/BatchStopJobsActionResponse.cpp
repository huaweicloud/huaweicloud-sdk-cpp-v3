

#include "huaweicloud/drs/v5/model/BatchStopJobsActionResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




BatchStopJobsActionResponse::BatchStopJobsActionResponse()
{
    jobsIsSet_ = false;
}

BatchStopJobsActionResponse::~BatchStopJobsActionResponse() = default;

void BatchStopJobsActionResponse::validate()
{
}

web::json::value BatchStopJobsActionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobsIsSet_) {
        val[utility::conversions::to_string_t("jobs")] = ModelBase::toJson(jobs_);
    }

    return val;
}

bool BatchStopJobsActionResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("jobs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("jobs"));
        if(!fieldValue.is_null())
        {
            std::vector<ActionBaseResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobs(refVal);
        }
    }
    return ok;
}

std::vector<ActionBaseResp>& BatchStopJobsActionResponse::getJobs()
{
    return jobs_;
}

void BatchStopJobsActionResponse::setJobs(const std::vector<ActionBaseResp>& value)
{
    jobs_ = value;
    jobsIsSet_ = true;
}

bool BatchStopJobsActionResponse::jobsIsSet() const
{
    return jobsIsSet_;
}

void BatchStopJobsActionResponse::unsetjobs()
{
    jobsIsSet_ = false;
}

}
}
}
}
}


