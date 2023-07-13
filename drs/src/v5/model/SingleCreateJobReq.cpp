

#include "huaweicloud/drs/v5/model/SingleCreateJobReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




SingleCreateJobReq::SingleCreateJobReq()
{
    jobIsSet_ = false;
}

SingleCreateJobReq::~SingleCreateJobReq() = default;

void SingleCreateJobReq::validate()
{
}

web::json::value SingleCreateJobReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIsSet_) {
        val[utility::conversions::to_string_t("job")] = ModelBase::toJson(job_);
    }

    return val;
}

bool SingleCreateJobReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job"));
        if(!fieldValue.is_null())
        {
            CreateJobReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJob(refVal);
        }
    }
    return ok;
}

CreateJobReq SingleCreateJobReq::getJob() const
{
    return job_;
}

void SingleCreateJobReq::setJob(const CreateJobReq& value)
{
    job_ = value;
    jobIsSet_ = true;
}

bool SingleCreateJobReq::jobIsSet() const
{
    return jobIsSet_;
}

void SingleCreateJobReq::unsetjob()
{
    jobIsSet_ = false;
}

}
}
}
}
}


