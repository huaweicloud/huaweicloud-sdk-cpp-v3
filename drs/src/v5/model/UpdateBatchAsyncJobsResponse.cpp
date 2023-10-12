

#include "huaweicloud/drs/v5/model/UpdateBatchAsyncJobsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




UpdateBatchAsyncJobsResponse::UpdateBatchAsyncJobsResponse()
{
    jobsIsSet_ = false;
}

UpdateBatchAsyncJobsResponse::~UpdateBatchAsyncJobsResponse() = default;

void UpdateBatchAsyncJobsResponse::validate()
{
}

web::json::value UpdateBatchAsyncJobsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobsIsSet_) {
        val[utility::conversions::to_string_t("jobs")] = ModelBase::toJson(jobs_);
    }

    return val;
}
bool UpdateBatchAsyncJobsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("jobs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("jobs"));
        if(!fieldValue.is_null())
        {
            std::vector<AsyncUpdateJobResp> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobs(refVal);
        }
    }
    return ok;
}


std::vector<AsyncUpdateJobResp>& UpdateBatchAsyncJobsResponse::getJobs()
{
    return jobs_;
}

void UpdateBatchAsyncJobsResponse::setJobs(const std::vector<AsyncUpdateJobResp>& value)
{
    jobs_ = value;
    jobsIsSet_ = true;
}

bool UpdateBatchAsyncJobsResponse::jobsIsSet() const
{
    return jobsIsSet_;
}

void UpdateBatchAsyncJobsResponse::unsetjobs()
{
    jobsIsSet_ = false;
}

}
}
}
}
}


