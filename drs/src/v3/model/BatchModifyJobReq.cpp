

#include "huaweicloud/drs/v3/model/BatchModifyJobReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




BatchModifyJobReq::BatchModifyJobReq()
{
    jobsIsSet_ = false;
}

BatchModifyJobReq::~BatchModifyJobReq() = default;

void BatchModifyJobReq::validate()
{
}

web::json::value BatchModifyJobReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobsIsSet_) {
        val[utility::conversions::to_string_t("jobs")] = ModelBase::toJson(jobs_);
    }

    return val;
}
bool BatchModifyJobReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("jobs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("jobs"));
        if(!fieldValue.is_null())
        {
            std::vector<ModifyJobReq> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobs(refVal);
        }
    }
    return ok;
}


std::vector<ModifyJobReq>& BatchModifyJobReq::getJobs()
{
    return jobs_;
}

void BatchModifyJobReq::setJobs(const std::vector<ModifyJobReq>& value)
{
    jobs_ = value;
    jobsIsSet_ = true;
}

bool BatchModifyJobReq::jobsIsSet() const
{
    return jobsIsSet_;
}

void BatchModifyJobReq::unsetjobs()
{
    jobsIsSet_ = false;
}

}
}
}
}
}


