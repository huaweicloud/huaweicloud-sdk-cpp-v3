

#include "huaweicloud/drs/v3/model/BatchStartJobReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




BatchStartJobReq::BatchStartJobReq()
{
    jobsIsSet_ = false;
}

BatchStartJobReq::~BatchStartJobReq() = default;

void BatchStartJobReq::validate()
{
}

web::json::value BatchStartJobReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobsIsSet_) {
        val[utility::conversions::to_string_t("jobs")] = ModelBase::toJson(jobs_);
    }

    return val;
}
bool BatchStartJobReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("jobs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("jobs"));
        if(!fieldValue.is_null())
        {
            std::vector<StartInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobs(refVal);
        }
    }
    return ok;
}


std::vector<StartInfo>& BatchStartJobReq::getJobs()
{
    return jobs_;
}

void BatchStartJobReq::setJobs(const std::vector<StartInfo>& value)
{
    jobs_ = value;
    jobsIsSet_ = true;
}

bool BatchStartJobReq::jobsIsSet() const
{
    return jobsIsSet_;
}

void BatchStartJobReq::unsetjobs()
{
    jobsIsSet_ = false;
}

}
}
}
}
}


