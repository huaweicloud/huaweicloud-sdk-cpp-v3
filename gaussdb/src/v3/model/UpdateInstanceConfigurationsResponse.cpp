

#include "huaweicloud/gaussdb/v3/model/UpdateInstanceConfigurationsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateInstanceConfigurationsResponse::UpdateInstanceConfigurationsResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    restartRequired_ = false;
    restartRequiredIsSet_ = false;
}

UpdateInstanceConfigurationsResponse::~UpdateInstanceConfigurationsResponse() = default;

void UpdateInstanceConfigurationsResponse::validate()
{
}

web::json::value UpdateInstanceConfigurationsResponse::toJson() const
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
bool UpdateInstanceConfigurationsResponse::fromJson(const web::json::value& val)
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


std::string UpdateInstanceConfigurationsResponse::getJobId() const
{
    return jobId_;
}

void UpdateInstanceConfigurationsResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool UpdateInstanceConfigurationsResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void UpdateInstanceConfigurationsResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

bool UpdateInstanceConfigurationsResponse::isRestartRequired() const
{
    return restartRequired_;
}

void UpdateInstanceConfigurationsResponse::setRestartRequired(bool value)
{
    restartRequired_ = value;
    restartRequiredIsSet_ = true;
}

bool UpdateInstanceConfigurationsResponse::restartRequiredIsSet() const
{
    return restartRequiredIsSet_;
}

void UpdateInstanceConfigurationsResponse::unsetrestartRequired()
{
    restartRequiredIsSet_ = false;
}

}
}
}
}
}


