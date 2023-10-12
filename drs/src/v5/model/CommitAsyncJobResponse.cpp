

#include "huaweicloud/drs/v5/model/CommitAsyncJobResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




CommitAsyncJobResponse::CommitAsyncJobResponse()
{
    jobIsSet_ = false;
}

CommitAsyncJobResponse::~CommitAsyncJobResponse() = default;

void CommitAsyncJobResponse::validate()
{
}

web::json::value CommitAsyncJobResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIsSet_) {
        val[utility::conversions::to_string_t("job")] = ModelBase::toJson(job_);
    }

    return val;
}
bool CommitAsyncJobResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job"));
        if(!fieldValue.is_null())
        {
            AsyncCommitJobResp refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJob(refVal);
        }
    }
    return ok;
}


AsyncCommitJobResp CommitAsyncJobResponse::getJob() const
{
    return job_;
}

void CommitAsyncJobResponse::setJob(const AsyncCommitJobResp& value)
{
    job_ = value;
    jobIsSet_ = true;
}

bool CommitAsyncJobResponse::jobIsSet() const
{
    return jobIsSet_;
}

void CommitAsyncJobResponse::unsetjob()
{
    jobIsSet_ = false;
}

}
}
}
}
}


