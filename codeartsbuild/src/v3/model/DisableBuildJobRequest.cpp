

#include "huaweicloud/codeartsbuild/v3/model/DisableBuildJobRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




DisableBuildJobRequest::DisableBuildJobRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

DisableBuildJobRequest::~DisableBuildJobRequest() = default;

void DisableBuildJobRequest::validate()
{
}

web::json::value DisableBuildJobRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool DisableBuildJobRequest::fromJson(const web::json::value& val)
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


std::string DisableBuildJobRequest::getJobId() const
{
    return jobId_;
}

void DisableBuildJobRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool DisableBuildJobRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void DisableBuildJobRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


