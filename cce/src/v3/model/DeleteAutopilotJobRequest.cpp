

#include "huaweicloud/cce/v3/model/DeleteAutopilotJobRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




DeleteAutopilotJobRequest::DeleteAutopilotJobRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

DeleteAutopilotJobRequest::~DeleteAutopilotJobRequest() = default;

void DeleteAutopilotJobRequest::validate()
{
}

web::json::value DeleteAutopilotJobRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool DeleteAutopilotJobRequest::fromJson(const web::json::value& val)
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


std::string DeleteAutopilotJobRequest::getJobId() const
{
    return jobId_;
}

void DeleteAutopilotJobRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool DeleteAutopilotJobRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void DeleteAutopilotJobRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


