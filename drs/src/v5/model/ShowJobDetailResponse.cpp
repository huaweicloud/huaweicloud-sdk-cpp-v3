

#include "huaweicloud/drs/v5/model/ShowJobDetailResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




ShowJobDetailResponse::ShowJobDetailResponse()
{
    jobIsSet_ = false;
}

ShowJobDetailResponse::~ShowJobDetailResponse() = default;

void ShowJobDetailResponse::validate()
{
}

web::json::value ShowJobDetailResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIsSet_) {
        val[utility::conversions::to_string_t("job")] = ModelBase::toJson(job_);
    }

    return val;
}

bool ShowJobDetailResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job"));
        if(!fieldValue.is_null())
        {
            JobDetailResp refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJob(refVal);
        }
    }
    return ok;
}

JobDetailResp ShowJobDetailResponse::getJob() const
{
    return job_;
}

void ShowJobDetailResponse::setJob(const JobDetailResp& value)
{
    job_ = value;
    jobIsSet_ = true;
}

bool ShowJobDetailResponse::jobIsSet() const
{
    return jobIsSet_;
}

void ShowJobDetailResponse::unsetjob()
{
    jobIsSet_ = false;
}

}
}
}
}
}


