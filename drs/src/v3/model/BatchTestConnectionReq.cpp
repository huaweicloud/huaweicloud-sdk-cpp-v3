

#include "huaweicloud/drs/v3/model/BatchTestConnectionReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




BatchTestConnectionReq::BatchTestConnectionReq()
{
    jobsIsSet_ = false;
}

BatchTestConnectionReq::~BatchTestConnectionReq() = default;

void BatchTestConnectionReq::validate()
{
}

web::json::value BatchTestConnectionReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobsIsSet_) {
        val[utility::conversions::to_string_t("jobs")] = ModelBase::toJson(jobs_);
    }

    return val;
}
bool BatchTestConnectionReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("jobs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("jobs"));
        if(!fieldValue.is_null())
        {
            std::vector<TestEndPoint> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobs(refVal);
        }
    }
    return ok;
}


std::vector<TestEndPoint>& BatchTestConnectionReq::getJobs()
{
    return jobs_;
}

void BatchTestConnectionReq::setJobs(const std::vector<TestEndPoint>& value)
{
    jobs_ = value;
    jobsIsSet_ = true;
}

bool BatchTestConnectionReq::jobsIsSet() const
{
    return jobsIsSet_;
}

void BatchTestConnectionReq::unsetjobs()
{
    jobsIsSet_ = false;
}

}
}
}
}
}


