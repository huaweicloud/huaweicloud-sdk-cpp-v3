

#include "huaweicloud/codeartsbuild/v3/model/ResumeBuildJobRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ResumeBuildJobRequest::ResumeBuildJobRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

ResumeBuildJobRequest::~ResumeBuildJobRequest() = default;

void ResumeBuildJobRequest::validate()
{
}

web::json::value ResumeBuildJobRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool ResumeBuildJobRequest::fromJson(const web::json::value& val)
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


std::string ResumeBuildJobRequest::getJobId() const
{
    return jobId_;
}

void ResumeBuildJobRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ResumeBuildJobRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ResumeBuildJobRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


