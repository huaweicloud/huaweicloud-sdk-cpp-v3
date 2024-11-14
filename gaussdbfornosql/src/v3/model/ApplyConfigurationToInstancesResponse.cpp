

#include "huaweicloud/gaussdbfornosql/v3/model/ApplyConfigurationToInstancesResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ApplyConfigurationToInstancesResponse::ApplyConfigurationToInstancesResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    success_ = false;
    successIsSet_ = false;
}

ApplyConfigurationToInstancesResponse::~ApplyConfigurationToInstancesResponse() = default;

void ApplyConfigurationToInstancesResponse::validate()
{
}

web::json::value ApplyConfigurationToInstancesResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(successIsSet_) {
        val[utility::conversions::to_string_t("success")] = ModelBase::toJson(success_);
    }

    return val;
}
bool ApplyConfigurationToInstancesResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("success"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("success"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSuccess(refVal);
        }
    }
    return ok;
}


std::string ApplyConfigurationToInstancesResponse::getJobId() const
{
    return jobId_;
}

void ApplyConfigurationToInstancesResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ApplyConfigurationToInstancesResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ApplyConfigurationToInstancesResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

bool ApplyConfigurationToInstancesResponse::isSuccess() const
{
    return success_;
}

void ApplyConfigurationToInstancesResponse::setSuccess(bool value)
{
    success_ = value;
    successIsSet_ = true;
}

bool ApplyConfigurationToInstancesResponse::successIsSet() const
{
    return successIsSet_;
}

void ApplyConfigurationToInstancesResponse::unsetsuccess()
{
    successIsSet_ = false;
}

}
}
}
}
}


