

#include "huaweicloud/drs/v3/model/BatchPrecheckReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




BatchPrecheckReq::BatchPrecheckReq()
{
    jobsIsSet_ = false;
}

BatchPrecheckReq::~BatchPrecheckReq() = default;

void BatchPrecheckReq::validate()
{
}

web::json::value BatchPrecheckReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobsIsSet_) {
        val[utility::conversions::to_string_t("jobs")] = ModelBase::toJson(jobs_);
    }

    return val;
}
bool BatchPrecheckReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("jobs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("jobs"));
        if(!fieldValue.is_null())
        {
            std::vector<PreCheckInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobs(refVal);
        }
    }
    return ok;
}


std::vector<PreCheckInfo>& BatchPrecheckReq::getJobs()
{
    return jobs_;
}

void BatchPrecheckReq::setJobs(const std::vector<PreCheckInfo>& value)
{
    jobs_ = value;
    jobsIsSet_ = true;
}

bool BatchPrecheckReq::jobsIsSet() const
{
    return jobsIsSet_;
}

void BatchPrecheckReq::unsetjobs()
{
    jobsIsSet_ = false;
}

}
}
}
}
}


