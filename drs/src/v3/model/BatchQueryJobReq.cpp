

#include "huaweicloud/drs/v3/model/BatchQueryJobReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




BatchQueryJobReq::BatchQueryJobReq()
{
    jobsIsSet_ = false;
}

BatchQueryJobReq::~BatchQueryJobReq() = default;

void BatchQueryJobReq::validate()
{
}

web::json::value BatchQueryJobReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobsIsSet_) {
        val[utility::conversions::to_string_t("jobs")] = ModelBase::toJson(jobs_);
    }

    return val;
}
bool BatchQueryJobReq::fromJson(const web::json::value& val)
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


std::vector<std::string>& BatchQueryJobReq::getJobs()
{
    return jobs_;
}

void BatchQueryJobReq::setJobs(const std::vector<std::string>& value)
{
    jobs_ = value;
    jobsIsSet_ = true;
}

bool BatchQueryJobReq::jobsIsSet() const
{
    return jobsIsSet_;
}

void BatchQueryJobReq::unsetjobs()
{
    jobsIsSet_ = false;
}

}
}
}
}
}


