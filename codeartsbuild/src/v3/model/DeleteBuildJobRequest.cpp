

#include "huaweicloud/codeartsbuild/v3/model/DeleteBuildJobRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




DeleteBuildJobRequest::DeleteBuildJobRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

DeleteBuildJobRequest::~DeleteBuildJobRequest() = default;

void DeleteBuildJobRequest::validate()
{
}

web::json::value DeleteBuildJobRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool DeleteBuildJobRequest::fromJson(const web::json::value& val)
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


std::string DeleteBuildJobRequest::getJobId() const
{
    return jobId_;
}

void DeleteBuildJobRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool DeleteBuildJobRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void DeleteBuildJobRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


