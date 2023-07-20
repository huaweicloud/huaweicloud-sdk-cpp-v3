

#include "huaweicloud/gaussdbfornosql/v3/model/ApplyConfigurationResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




ApplyConfigurationResponse::ApplyConfigurationResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    success_ = false;
    successIsSet_ = false;
}

ApplyConfigurationResponse::~ApplyConfigurationResponse() = default;

void ApplyConfigurationResponse::validate()
{
}

web::json::value ApplyConfigurationResponse::toJson() const
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

bool ApplyConfigurationResponse::fromJson(const web::json::value& val)
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

std::string ApplyConfigurationResponse::getJobId() const
{
    return jobId_;
}

void ApplyConfigurationResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ApplyConfigurationResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ApplyConfigurationResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

bool ApplyConfigurationResponse::isSuccess() const
{
    return success_;
}

void ApplyConfigurationResponse::setSuccess(bool value)
{
    success_ = value;
    successIsSet_ = true;
}

bool ApplyConfigurationResponse::successIsSet() const
{
    return successIsSet_;
}

void ApplyConfigurationResponse::unsetsuccess()
{
    successIsSet_ = false;
}

}
}
}
}
}


