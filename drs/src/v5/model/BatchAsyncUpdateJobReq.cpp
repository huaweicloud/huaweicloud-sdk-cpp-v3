

#include "huaweicloud/drs/v5/model/BatchAsyncUpdateJobReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




BatchAsyncUpdateJobReq::BatchAsyncUpdateJobReq()
{
    jobsIsSet_ = false;
}

BatchAsyncUpdateJobReq::~BatchAsyncUpdateJobReq() = default;

void BatchAsyncUpdateJobReq::validate()
{
}

web::json::value BatchAsyncUpdateJobReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobsIsSet_) {
        val[utility::conversions::to_string_t("jobs")] = ModelBase::toJson(jobs_);
    }

    return val;
}

bool BatchAsyncUpdateJobReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("jobs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("jobs"));
        if(!fieldValue.is_null())
        {
            std::vector<UpdateJobReq> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobs(refVal);
        }
    }
    return ok;
}

std::vector<UpdateJobReq>& BatchAsyncUpdateJobReq::getJobs()
{
    return jobs_;
}

void BatchAsyncUpdateJobReq::setJobs(const std::vector<UpdateJobReq>& value)
{
    jobs_ = value;
    jobsIsSet_ = true;
}

bool BatchAsyncUpdateJobReq::jobsIsSet() const
{
    return jobsIsSet_;
}

void BatchAsyncUpdateJobReq::unsetjobs()
{
    jobsIsSet_ = false;
}

}
}
}
}
}


