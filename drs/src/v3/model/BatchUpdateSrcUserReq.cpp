

#include "huaweicloud/drs/v3/model/BatchUpdateSrcUserReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




BatchUpdateSrcUserReq::BatchUpdateSrcUserReq()
{
    jobsIsSet_ = false;
}

BatchUpdateSrcUserReq::~BatchUpdateSrcUserReq() = default;

void BatchUpdateSrcUserReq::validate()
{
}

web::json::value BatchUpdateSrcUserReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobsIsSet_) {
        val[utility::conversions::to_string_t("jobs")] = ModelBase::toJson(jobs_);
    }

    return val;
}
bool BatchUpdateSrcUserReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("jobs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("jobs"));
        if(!fieldValue.is_null())
        {
            std::vector<UpdateUserReq> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobs(refVal);
        }
    }
    return ok;
}


std::vector<UpdateUserReq>& BatchUpdateSrcUserReq::getJobs()
{
    return jobs_;
}

void BatchUpdateSrcUserReq::setJobs(const std::vector<UpdateUserReq>& value)
{
    jobs_ = value;
    jobsIsSet_ = true;
}

bool BatchUpdateSrcUserReq::jobsIsSet() const
{
    return jobsIsSet_;
}

void BatchUpdateSrcUserReq::unsetjobs()
{
    jobsIsSet_ = false;
}

}
}
}
}
}


