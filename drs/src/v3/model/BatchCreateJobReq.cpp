

#include "huaweicloud/drs/v3/model/BatchCreateJobReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




BatchCreateJobReq::BatchCreateJobReq()
{
    jobsIsSet_ = false;
}

BatchCreateJobReq::~BatchCreateJobReq() = default;

void BatchCreateJobReq::validate()
{
}

web::json::value BatchCreateJobReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobsIsSet_) {
        val[utility::conversions::to_string_t("jobs")] = ModelBase::toJson(jobs_);
    }

    return val;
}
bool BatchCreateJobReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("jobs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("jobs"));
        if(!fieldValue.is_null())
        {
            std::vector<CreateJobReq> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobs(refVal);
        }
    }
    return ok;
}


std::vector<CreateJobReq>& BatchCreateJobReq::getJobs()
{
    return jobs_;
}

void BatchCreateJobReq::setJobs(const std::vector<CreateJobReq>& value)
{
    jobs_ = value;
    jobsIsSet_ = true;
}

bool BatchCreateJobReq::jobsIsSet() const
{
    return jobsIsSet_;
}

void BatchCreateJobReq::unsetjobs()
{
    jobsIsSet_ = false;
}

}
}
}
}
}


