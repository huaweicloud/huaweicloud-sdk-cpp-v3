

#include "huaweicloud/gaussdbforopengauss/v3/model/ChangeDeploymentSolutionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




ChangeDeploymentSolutionResponse::ChangeDeploymentSolutionResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

ChangeDeploymentSolutionResponse::~ChangeDeploymentSolutionResponse() = default;

void ChangeDeploymentSolutionResponse::validate()
{
}

web::json::value ChangeDeploymentSolutionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool ChangeDeploymentSolutionResponse::fromJson(const web::json::value& val)
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


std::string ChangeDeploymentSolutionResponse::getJobId() const
{
    return jobId_;
}

void ChangeDeploymentSolutionResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ChangeDeploymentSolutionResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ChangeDeploymentSolutionResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


