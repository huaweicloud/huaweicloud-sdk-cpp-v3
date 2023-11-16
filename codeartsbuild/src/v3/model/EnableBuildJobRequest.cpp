

#include "huaweicloud/codeartsbuild/v3/model/EnableBuildJobRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




EnableBuildJobRequest::EnableBuildJobRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

EnableBuildJobRequest::~EnableBuildJobRequest() = default;

void EnableBuildJobRequest::validate()
{
}

web::json::value EnableBuildJobRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool EnableBuildJobRequest::fromJson(const web::json::value& val)
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


std::string EnableBuildJobRequest::getJobId() const
{
    return jobId_;
}

void EnableBuildJobRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool EnableBuildJobRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void EnableBuildJobRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


