

#include "huaweicloud/drs/v5/model/BatchDeleteJobReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




BatchDeleteJobReq::BatchDeleteJobReq()
{
    jobsIsSet_ = false;
}

BatchDeleteJobReq::~BatchDeleteJobReq() = default;

void BatchDeleteJobReq::validate()
{
}

web::json::value BatchDeleteJobReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobsIsSet_) {
        val[utility::conversions::to_string_t("jobs")] = ModelBase::toJson(jobs_);
    }

    return val;
}

bool BatchDeleteJobReq::fromJson(const web::json::value& val)
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

std::vector<std::string>& BatchDeleteJobReq::getJobs()
{
    return jobs_;
}

void BatchDeleteJobReq::setJobs(const std::vector<std::string>& value)
{
    jobs_ = value;
    jobsIsSet_ = true;
}

bool BatchDeleteJobReq::jobsIsSet() const
{
    return jobsIsSet_;
}

void BatchDeleteJobReq::unsetjobs()
{
    jobsIsSet_ = false;
}

}
}
}
}
}


