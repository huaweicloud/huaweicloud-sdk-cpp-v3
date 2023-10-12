

#include "huaweicloud/drs/v5/model/CreateJobResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




CreateJobResponse::CreateJobResponse()
{
    jobIsSet_ = false;
}

CreateJobResponse::~CreateJobResponse() = default;

void CreateJobResponse::validate()
{
}

web::json::value CreateJobResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIsSet_) {
        val[utility::conversions::to_string_t("job")] = ModelBase::toJson(job_);
    }

    return val;
}
bool CreateJobResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job"));
        if(!fieldValue.is_null())
        {
            CreateJobResp refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJob(refVal);
        }
    }
    return ok;
}


CreateJobResp CreateJobResponse::getJob() const
{
    return job_;
}

void CreateJobResponse::setJob(const CreateJobResp& value)
{
    job_ = value;
    jobIsSet_ = true;
}

bool CreateJobResponse::jobIsSet() const
{
    return jobIsSet_;
}

void CreateJobResponse::unsetjob()
{
    jobIsSet_ = false;
}

}
}
}
}
}


