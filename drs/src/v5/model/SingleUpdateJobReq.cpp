

#include "huaweicloud/drs/v5/model/SingleUpdateJobReq.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




SingleUpdateJobReq::SingleUpdateJobReq()
{
    jobIsSet_ = false;
}

SingleUpdateJobReq::~SingleUpdateJobReq() = default;

void SingleUpdateJobReq::validate()
{
}

web::json::value SingleUpdateJobReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIsSet_) {
        val[utility::conversions::to_string_t("job")] = ModelBase::toJson(job_);
    }

    return val;
}
bool SingleUpdateJobReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job"));
        if(!fieldValue.is_null())
        {
            UpdateJobReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJob(refVal);
        }
    }
    return ok;
}


UpdateJobReq SingleUpdateJobReq::getJob() const
{
    return job_;
}

void SingleUpdateJobReq::setJob(const UpdateJobReq& value)
{
    job_ = value;
    jobIsSet_ = true;
}

bool SingleUpdateJobReq::jobIsSet() const
{
    return jobIsSet_;
}

void SingleUpdateJobReq::unsetjob()
{
    jobIsSet_ = false;
}

}
}
}
}
}


