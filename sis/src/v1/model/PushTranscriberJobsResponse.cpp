

#include "huaweicloud/sis/v1/model/PushTranscriberJobsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Sis {
namespace V1 {
namespace Model {




PushTranscriberJobsResponse::PushTranscriberJobsResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

PushTranscriberJobsResponse::~PushTranscriberJobsResponse() = default;

void PushTranscriberJobsResponse::validate()
{
}

web::json::value PushTranscriberJobsResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool PushTranscriberJobsResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    return ok;
}


std::string PushTranscriberJobsResponse::getJobId() const
{
    return jobId_;
}

void PushTranscriberJobsResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool PushTranscriberJobsResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void PushTranscriberJobsResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


