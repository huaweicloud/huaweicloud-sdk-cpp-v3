

#include "huaweicloud/rds/v3/model/UpdateInstanceConfigurationAsyncResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UpdateInstanceConfigurationAsyncResponse::UpdateInstanceConfigurationAsyncResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    restartRequired_ = false;
    restartRequiredIsSet_ = false;
}

UpdateInstanceConfigurationAsyncResponse::~UpdateInstanceConfigurationAsyncResponse() = default;

void UpdateInstanceConfigurationAsyncResponse::validate()
{
}

web::json::value UpdateInstanceConfigurationAsyncResponse::toJson() const
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
bool UpdateInstanceConfigurationAsyncResponse::fromJson(const web::json::value& val)
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


std::string UpdateInstanceConfigurationAsyncResponse::getJobId() const
{
    return jobId_;
}

void UpdateInstanceConfigurationAsyncResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool UpdateInstanceConfigurationAsyncResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void UpdateInstanceConfigurationAsyncResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

bool UpdateInstanceConfigurationAsyncResponse::isRestartRequired() const
{
    return restartRequired_;
}

void UpdateInstanceConfigurationAsyncResponse::setRestartRequired(bool value)
{
    restartRequired_ = value;
    restartRequiredIsSet_ = true;
}

bool UpdateInstanceConfigurationAsyncResponse::restartRequiredIsSet() const
{
    return restartRequiredIsSet_;
}

void UpdateInstanceConfigurationAsyncResponse::unsetrestartRequired()
{
    restartRequiredIsSet_ = false;
}

}
}
}
}
}


