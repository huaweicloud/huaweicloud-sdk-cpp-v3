

#include "huaweicloud/drs/v3/model/BatchSwitchoverReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




BatchSwitchoverReq::BatchSwitchoverReq()
{
    jobsIsSet_ = false;
}

BatchSwitchoverReq::~BatchSwitchoverReq() = default;

void BatchSwitchoverReq::validate()
{
}

web::json::value BatchSwitchoverReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobsIsSet_) {
        val[utility::conversions::to_string_t("jobs")] = ModelBase::toJson(jobs_);
    }

    return val;
}

bool BatchSwitchoverReq::fromJson(const web::json::value& val)
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

std::vector<std::string>& BatchSwitchoverReq::getJobs()
{
    return jobs_;
}

void BatchSwitchoverReq::setJobs(const std::vector<std::string>& value)
{
    jobs_ = value;
    jobsIsSet_ = true;
}

bool BatchSwitchoverReq::jobsIsSet() const
{
    return jobsIsSet_;
}

void BatchSwitchoverReq::unsetjobs()
{
    jobsIsSet_ = false;
}

}
}
}
}
}


