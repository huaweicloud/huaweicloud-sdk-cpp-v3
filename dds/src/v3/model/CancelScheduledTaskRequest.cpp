

#include "huaweicloud/dds/v3/model/CancelScheduledTaskRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




CancelScheduledTaskRequest::CancelScheduledTaskRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

CancelScheduledTaskRequest::~CancelScheduledTaskRequest() = default;

void CancelScheduledTaskRequest::validate()
{
}

web::json::value CancelScheduledTaskRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool CancelScheduledTaskRequest::fromJson(const web::json::value& val)
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


std::string CancelScheduledTaskRequest::getJobId() const
{
    return jobId_;
}

void CancelScheduledTaskRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool CancelScheduledTaskRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void CancelScheduledTaskRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


