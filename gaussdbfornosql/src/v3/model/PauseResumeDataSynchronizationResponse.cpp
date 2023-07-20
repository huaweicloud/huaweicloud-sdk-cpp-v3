

#include "huaweicloud/gaussdbfornosql/v3/model/PauseResumeDataSynchronizationResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




PauseResumeDataSynchronizationResponse::PauseResumeDataSynchronizationResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

PauseResumeDataSynchronizationResponse::~PauseResumeDataSynchronizationResponse() = default;

void PauseResumeDataSynchronizationResponse::validate()
{
}

web::json::value PauseResumeDataSynchronizationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}

bool PauseResumeDataSynchronizationResponse::fromJson(const web::json::value& val)
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

std::string PauseResumeDataSynchronizationResponse::getJobId() const
{
    return jobId_;
}

void PauseResumeDataSynchronizationResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool PauseResumeDataSynchronizationResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void PauseResumeDataSynchronizationResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


