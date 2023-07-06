

#include "huaweicloud/drs/v5/model/JobActionReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




JobActionReq::JobActionReq()
{
    jobIsSet_ = false;
}

JobActionReq::~JobActionReq() = default;

void JobActionReq::validate()
{
}

web::json::value JobActionReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIsSet_) {
        val[utility::conversions::to_string_t("job")] = ModelBase::toJson(job_);
    }

    return val;
}

bool JobActionReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job"));
        if(!fieldValue.is_null())
        {
            ActionReq refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJob(refVal);
        }
    }
    return ok;
}

ActionReq JobActionReq::getJob() const
{
    return job_;
}

void JobActionReq::setJob(const ActionReq& value)
{
    job_ = value;
    jobIsSet_ = true;
}

bool JobActionReq::jobIsSet() const
{
    return jobIsSet_;
}

void JobActionReq::unsetjob()
{
    jobIsSet_ = false;
}

}
}
}
}
}


