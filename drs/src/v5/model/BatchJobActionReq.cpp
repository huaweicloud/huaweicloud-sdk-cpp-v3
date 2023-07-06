

#include "huaweicloud/drs/v5/model/BatchJobActionReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




BatchJobActionReq::BatchJobActionReq()
{
    jobsIsSet_ = false;
}

BatchJobActionReq::~BatchJobActionReq() = default;

void BatchJobActionReq::validate()
{
}

web::json::value BatchJobActionReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobsIsSet_) {
        val[utility::conversions::to_string_t("jobs")] = ModelBase::toJson(jobs_);
    }

    return val;
}

bool BatchJobActionReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("jobs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("jobs"));
        if(!fieldValue.is_null())
        {
            std::vector<ActionReq> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobs(refVal);
        }
    }
    return ok;
}

std::vector<ActionReq>& BatchJobActionReq::getJobs()
{
    return jobs_;
}

void BatchJobActionReq::setJobs(const std::vector<ActionReq>& value)
{
    jobs_ = value;
    jobsIsSet_ = true;
}

bool BatchJobActionReq::jobsIsSet() const
{
    return jobsIsSet_;
}

void BatchJobActionReq::unsetjobs()
{
    jobsIsSet_ = false;
}

}
}
}
}
}


