

#include "huaweicloud/drs/v3/model/BatchModifyPwdReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




BatchModifyPwdReq::BatchModifyPwdReq()
{
    jobsIsSet_ = false;
}

BatchModifyPwdReq::~BatchModifyPwdReq() = default;

void BatchModifyPwdReq::validate()
{
}

web::json::value BatchModifyPwdReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobsIsSet_) {
        val[utility::conversions::to_string_t("jobs")] = ModelBase::toJson(jobs_);
    }

    return val;
}
bool BatchModifyPwdReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("jobs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("jobs"));
        if(!fieldValue.is_null())
        {
            std::vector<ModifyPwdEndPoint> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobs(refVal);
        }
    }
    return ok;
}


std::vector<ModifyPwdEndPoint>& BatchModifyPwdReq::getJobs()
{
    return jobs_;
}

void BatchModifyPwdReq::setJobs(const std::vector<ModifyPwdEndPoint>& value)
{
    jobs_ = value;
    jobsIsSet_ = true;
}

bool BatchModifyPwdReq::jobsIsSet() const
{
    return jobsIsSet_;
}

void BatchModifyPwdReq::unsetjobs()
{
    jobsIsSet_ = false;
}

}
}
}
}
}


