

#include "huaweicloud/drs/v3/model/BatchQueryPrecheckResultReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




BatchQueryPrecheckResultReq::BatchQueryPrecheckResultReq()
{
    jobsIsSet_ = false;
}

BatchQueryPrecheckResultReq::~BatchQueryPrecheckResultReq() = default;

void BatchQueryPrecheckResultReq::validate()
{
}

web::json::value BatchQueryPrecheckResultReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobsIsSet_) {
        val[utility::conversions::to_string_t("jobs")] = ModelBase::toJson(jobs_);
    }

    return val;
}
bool BatchQueryPrecheckResultReq::fromJson(const web::json::value& val)
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


std::vector<std::string>& BatchQueryPrecheckResultReq::getJobs()
{
    return jobs_;
}

void BatchQueryPrecheckResultReq::setJobs(const std::vector<std::string>& value)
{
    jobs_ = value;
    jobsIsSet_ = true;
}

bool BatchQueryPrecheckResultReq::jobsIsSet() const
{
    return jobsIsSet_;
}

void BatchQueryPrecheckResultReq::unsetjobs()
{
    jobsIsSet_ = false;
}

}
}
}
}
}


