

#include "huaweicloud/mpc/v1/model/DeleteEditingJobRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Mpc {
namespace V1 {
namespace Model {




DeleteEditingJobRequest::DeleteEditingJobRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

DeleteEditingJobRequest::~DeleteEditingJobRequest() = default;

void DeleteEditingJobRequest::validate()
{
}

web::json::value DeleteEditingJobRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool DeleteEditingJobRequest::fromJson(const web::json::value& val)
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


std::string DeleteEditingJobRequest::getJobId() const
{
    return jobId_;
}

void DeleteEditingJobRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool DeleteEditingJobRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void DeleteEditingJobRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


