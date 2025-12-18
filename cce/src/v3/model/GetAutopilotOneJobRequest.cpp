

#include "huaweicloud/cce/v3/model/GetAutopilotOneJobRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




GetAutopilotOneJobRequest::GetAutopilotOneJobRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

GetAutopilotOneJobRequest::~GetAutopilotOneJobRequest() = default;

void GetAutopilotOneJobRequest::validate()
{
}

web::json::value GetAutopilotOneJobRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool GetAutopilotOneJobRequest::fromJson(const web::json::value& val)
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


std::string GetAutopilotOneJobRequest::getJobId() const
{
    return jobId_;
}

void GetAutopilotOneJobRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool GetAutopilotOneJobRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void GetAutopilotOneJobRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


