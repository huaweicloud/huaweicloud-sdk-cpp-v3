

#include "huaweicloud/gaussdbfornosql/v3/model/UpdateInstanceConfigurationResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




UpdateInstanceConfigurationResponse::UpdateInstanceConfigurationResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    restartRequired_ = false;
    restartRequiredIsSet_ = false;
}

UpdateInstanceConfigurationResponse::~UpdateInstanceConfigurationResponse() = default;

void UpdateInstanceConfigurationResponse::validate()
{
}

web::json::value UpdateInstanceConfigurationResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(restartRequiredIsSet_) {
        val[utility::conversions::to_string_t("restart_required")] = ModelBase::toJson(restartRequired_);
    }

    return val;
}

bool UpdateInstanceConfigurationResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("restart_required"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("restart_required"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRestartRequired(refVal);
        }
    }
    return ok;
}

std::string UpdateInstanceConfigurationResponse::getJobId() const
{
    return jobId_;
}

void UpdateInstanceConfigurationResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool UpdateInstanceConfigurationResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void UpdateInstanceConfigurationResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

bool UpdateInstanceConfigurationResponse::isRestartRequired() const
{
    return restartRequired_;
}

void UpdateInstanceConfigurationResponse::setRestartRequired(bool value)
{
    restartRequired_ = value;
    restartRequiredIsSet_ = true;
}

bool UpdateInstanceConfigurationResponse::restartRequiredIsSet() const
{
    return restartRequiredIsSet_;
}

void UpdateInstanceConfigurationResponse::unsetrestartRequired()
{
    restartRequiredIsSet_ = false;
}

}
}
}
}
}


