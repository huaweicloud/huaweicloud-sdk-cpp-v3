

#include "huaweicloud/drs/v3/model/BatchQueryRpoAndRtoReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




BatchQueryRpoAndRtoReq::BatchQueryRpoAndRtoReq()
{
    jobsIsSet_ = false;
}

BatchQueryRpoAndRtoReq::~BatchQueryRpoAndRtoReq() = default;

void BatchQueryRpoAndRtoReq::validate()
{
}

web::json::value BatchQueryRpoAndRtoReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobsIsSet_) {
        val[utility::conversions::to_string_t("jobs")] = ModelBase::toJson(jobs_);
    }

    return val;
}
bool BatchQueryRpoAndRtoReq::fromJson(const web::json::value& val)
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


std::vector<std::string>& BatchQueryRpoAndRtoReq::getJobs()
{
    return jobs_;
}

void BatchQueryRpoAndRtoReq::setJobs(const std::vector<std::string>& value)
{
    jobs_ = value;
    jobsIsSet_ = true;
}

bool BatchQueryRpoAndRtoReq::jobsIsSet() const
{
    return jobsIsSet_;
}

void BatchQueryRpoAndRtoReq::unsetjobs()
{
    jobsIsSet_ = false;
}

}
}
}
}
}


