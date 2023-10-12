

#include "huaweicloud/drs/v3/model/BatchQueryProgressReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




BatchQueryProgressReq::BatchQueryProgressReq()
{
    jobsIsSet_ = false;
}

BatchQueryProgressReq::~BatchQueryProgressReq() = default;

void BatchQueryProgressReq::validate()
{
}

web::json::value BatchQueryProgressReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobsIsSet_) {
        val[utility::conversions::to_string_t("jobs")] = ModelBase::toJson(jobs_);
    }

    return val;
}
bool BatchQueryProgressReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("jobs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("jobs"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobs(refVal);
        }
    }
    return ok;
}


std::vector<std::string>& BatchQueryProgressReq::getJobs()
{
    return jobs_;
}

void BatchQueryProgressReq::setJobs(const std::vector<std::string>& value)
{
    jobs_ = value;
    jobsIsSet_ = true;
}

bool BatchQueryProgressReq::jobsIsSet() const
{
    return jobsIsSet_;
}

void BatchQueryProgressReq::unsetjobs()
{
    jobsIsSet_ = false;
}

}
}
}
}
}


