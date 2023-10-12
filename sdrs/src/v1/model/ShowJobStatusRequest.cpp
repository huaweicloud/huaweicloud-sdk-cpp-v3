

#include "huaweicloud/sdrs/v1/model/ShowJobStatusRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Sdrs {
namespace V1 {
namespace Model {




ShowJobStatusRequest::ShowJobStatusRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

ShowJobStatusRequest::~ShowJobStatusRequest() = default;

void ShowJobStatusRequest::validate()
{
}

web::json::value ShowJobStatusRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool ShowJobStatusRequest::fromJson(const web::json::value& val)
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


std::string ShowJobStatusRequest::getJobId() const
{
    return jobId_;
}

void ShowJobStatusRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowJobStatusRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowJobStatusRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


