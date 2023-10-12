

#include "huaweicloud/drs/v5/model/BatchAsyncCreateJobReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




BatchAsyncCreateJobReq::BatchAsyncCreateJobReq()
{
    jobsIsSet_ = false;
}

BatchAsyncCreateJobReq::~BatchAsyncCreateJobReq() = default;

void BatchAsyncCreateJobReq::validate()
{
}

web::json::value BatchAsyncCreateJobReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobsIsSet_) {
        val[utility::conversions::to_string_t("jobs")] = ModelBase::toJson(jobs_);
    }

    return val;
}
bool BatchAsyncCreateJobReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("jobs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("jobs"));
        if(!fieldValue.is_null())
        {
            std::vector<AsyncCreateJobReq> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobs(refVal);
        }
    }
    return ok;
}


std::vector<AsyncCreateJobReq>& BatchAsyncCreateJobReq::getJobs()
{
    return jobs_;
}

void BatchAsyncCreateJobReq::setJobs(const std::vector<AsyncCreateJobReq>& value)
{
    jobs_ = value;
    jobsIsSet_ = true;
}

bool BatchAsyncCreateJobReq::jobsIsSet() const
{
    return jobsIsSet_;
}

void BatchAsyncCreateJobReq::unsetjobs()
{
    jobsIsSet_ = false;
}

}
}
}
}
}


