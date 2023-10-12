

#include "huaweicloud/drs/v3/model/BatchRetryReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




BatchRetryReq::BatchRetryReq()
{
    jobsIsSet_ = false;
}

BatchRetryReq::~BatchRetryReq() = default;

void BatchRetryReq::validate()
{
}

web::json::value BatchRetryReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobsIsSet_) {
        val[utility::conversions::to_string_t("jobs")] = ModelBase::toJson(jobs_);
    }

    return val;
}
bool BatchRetryReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("jobs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("jobs"));
        if(!fieldValue.is_null())
        {
            std::vector<RetryInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobs(refVal);
        }
    }
    return ok;
}


std::vector<RetryInfo>& BatchRetryReq::getJobs()
{
    return jobs_;
}

void BatchRetryReq::setJobs(const std::vector<RetryInfo>& value)
{
    jobs_ = value;
    jobsIsSet_ = true;
}

bool BatchRetryReq::jobsIsSet() const
{
    return jobsIsSet_;
}

void BatchRetryReq::unsetjobs()
{
    jobsIsSet_ = false;
}

}
}
}
}
}


