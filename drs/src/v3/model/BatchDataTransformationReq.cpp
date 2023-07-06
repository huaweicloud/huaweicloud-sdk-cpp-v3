

#include "huaweicloud/drs/v3/model/BatchDataTransformationReq.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




BatchDataTransformationReq::BatchDataTransformationReq()
{
    jobsIsSet_ = false;
}

BatchDataTransformationReq::~BatchDataTransformationReq() = default;

void BatchDataTransformationReq::validate()
{
}

web::json::value BatchDataTransformationReq::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobsIsSet_) {
        val[utility::conversions::to_string_t("jobs")] = ModelBase::toJson(jobs_);
    }

    return val;
}

bool BatchDataTransformationReq::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("jobs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("jobs"));
        if(!fieldValue.is_null())
        {
            std::vector<CheckDataTransformationReq> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobs(refVal);
        }
    }
    return ok;
}

std::vector<CheckDataTransformationReq>& BatchDataTransformationReq::getJobs()
{
    return jobs_;
}

void BatchDataTransformationReq::setJobs(const std::vector<CheckDataTransformationReq>& value)
{
    jobs_ = value;
    jobsIsSet_ = true;
}

bool BatchDataTransformationReq::jobsIsSet() const
{
    return jobsIsSet_;
}

void BatchDataTransformationReq::unsetjobs()
{
    jobsIsSet_ = false;
}

}
}
}
}
}


