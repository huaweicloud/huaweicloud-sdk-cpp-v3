

#include "huaweicloud/codeartsbuild/v3/model/ShowRunningStatusRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowRunningStatusRequest::ShowRunningStatusRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

ShowRunningStatusRequest::~ShowRunningStatusRequest() = default;

void ShowRunningStatusRequest::validate()
{
}

web::json::value ShowRunningStatusRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool ShowRunningStatusRequest::fromJson(const web::json::value& val)
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


std::string ShowRunningStatusRequest::getJobId() const
{
    return jobId_;
}

void ShowRunningStatusRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowRunningStatusRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowRunningStatusRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


