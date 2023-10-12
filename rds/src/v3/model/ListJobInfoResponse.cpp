

#include "huaweicloud/rds/v3/model/ListJobInfoResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListJobInfoResponse::ListJobInfoResponse()
{
    jobIsSet_ = false;
}

ListJobInfoResponse::~ListJobInfoResponse() = default;

void ListJobInfoResponse::validate()
{
}

web::json::value ListJobInfoResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIsSet_) {
        val[utility::conversions::to_string_t("job")] = ModelBase::toJson(job_);
    }

    return val;
}
bool ListJobInfoResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job"));
        if(!fieldValue.is_null())
        {
            GetJobInfoResponseBody_job refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJob(refVal);
        }
    }
    return ok;
}


GetJobInfoResponseBody_job ListJobInfoResponse::getJob() const
{
    return job_;
}

void ListJobInfoResponse::setJob(const GetJobInfoResponseBody_job& value)
{
    job_ = value;
    jobIsSet_ = true;
}

bool ListJobInfoResponse::jobIsSet() const
{
    return jobIsSet_;
}

void ListJobInfoResponse::unsetjob()
{
    jobIsSet_ = false;
}

}
}
}
}
}


