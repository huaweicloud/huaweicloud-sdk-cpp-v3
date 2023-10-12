

#include "huaweicloud/drs/v3/model/BatchSpecialTestConnectionReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




BatchSpecialTestConnectionReq::BatchSpecialTestConnectionReq()
{
    jobsIsSet_ = false;
}

BatchSpecialTestConnectionReq::~BatchSpecialTestConnectionReq() = default;

void BatchSpecialTestConnectionReq::validate()
{
}

web::json::value BatchSpecialTestConnectionReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobsIsSet_) {
        val[utility::conversions::to_string_t("jobs")] = ModelBase::toJson(jobs_);
    }

    return val;
}
bool BatchSpecialTestConnectionReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("jobs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("jobs"));
        if(!fieldValue.is_null())
        {
            std::vector<BatchJobActionReq> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobs(refVal);
        }
    }
    return ok;
}


std::vector<BatchJobActionReq>& BatchSpecialTestConnectionReq::getJobs()
{
    return jobs_;
}

void BatchSpecialTestConnectionReq::setJobs(const std::vector<BatchJobActionReq>& value)
{
    jobs_ = value;
    jobsIsSet_ = true;
}

bool BatchSpecialTestConnectionReq::jobsIsSet() const
{
    return jobsIsSet_;
}

void BatchSpecialTestConnectionReq::unsetjobs()
{
    jobsIsSet_ = false;
}

}
}
}
}
}


