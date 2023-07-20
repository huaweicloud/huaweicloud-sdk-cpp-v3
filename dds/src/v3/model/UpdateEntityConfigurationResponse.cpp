

#include "huaweicloud/dds/v3/model/UpdateEntityConfigurationResponse.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




UpdateEntityConfigurationResponse::UpdateEntityConfigurationResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    restartRequired_ = false;
    restartRequiredIsSet_ = false;
}

UpdateEntityConfigurationResponse::~UpdateEntityConfigurationResponse() = default;

void UpdateEntityConfigurationResponse::validate()
{
}

web::json::value UpdateEntityConfigurationResponse::toJson() const
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

bool UpdateEntityConfigurationResponse::fromJson(const web::json::value& val)
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

std::string UpdateEntityConfigurationResponse::getJobId() const
{
    return jobId_;
}

void UpdateEntityConfigurationResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool UpdateEntityConfigurationResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void UpdateEntityConfigurationResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

bool UpdateEntityConfigurationResponse::isRestartRequired() const
{
    return restartRequired_;
}

void UpdateEntityConfigurationResponse::setRestartRequired(bool value)
{
    restartRequired_ = value;
    restartRequiredIsSet_ = true;
}

bool UpdateEntityConfigurationResponse::restartRequiredIsSet() const
{
    return restartRequiredIsSet_;
}

void UpdateEntityConfigurationResponse::unsetrestartRequired()
{
    restartRequiredIsSet_ = false;
}

}
}
}
}
}


