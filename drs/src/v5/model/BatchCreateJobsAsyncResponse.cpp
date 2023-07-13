

#include "huaweicloud/drs/v5/model/BatchCreateJobsAsyncResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




BatchCreateJobsAsyncResponse::BatchCreateJobsAsyncResponse()
{
    jobIsSet_ = false;
}

BatchCreateJobsAsyncResponse::~BatchCreateJobsAsyncResponse() = default;

void BatchCreateJobsAsyncResponse::validate()
{
}

web::json::value BatchCreateJobsAsyncResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIsSet_) {
        val[utility::conversions::to_string_t("job")] = ModelBase::toJson(job_);
    }

    return val;
}

bool BatchCreateJobsAsyncResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job"));
        if(!fieldValue.is_null())
        {
            AsyncCreateJobResp refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJob(refVal);
        }
    }
    return ok;
}

AsyncCreateJobResp BatchCreateJobsAsyncResponse::getJob() const
{
    return job_;
}

void BatchCreateJobsAsyncResponse::setJob(const AsyncCreateJobResp& value)
{
    job_ = value;
    jobIsSet_ = true;
}

bool BatchCreateJobsAsyncResponse::jobIsSet() const
{
    return jobIsSet_;
}

void BatchCreateJobsAsyncResponse::unsetjob()
{
    jobIsSet_ = false;
}

}
}
}
}
}


