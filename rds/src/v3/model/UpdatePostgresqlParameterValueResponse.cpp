

#include "huaweicloud/rds/v3/model/UpdatePostgresqlParameterValueResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UpdatePostgresqlParameterValueResponse::UpdatePostgresqlParameterValueResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    restartRequired_ = false;
    restartRequiredIsSet_ = false;
}

UpdatePostgresqlParameterValueResponse::~UpdatePostgresqlParameterValueResponse() = default;

void UpdatePostgresqlParameterValueResponse::validate()
{
}

web::json::value UpdatePostgresqlParameterValueResponse::toJson() const
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
bool UpdatePostgresqlParameterValueResponse::fromJson(const web::json::value& val)
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


std::string UpdatePostgresqlParameterValueResponse::getJobId() const
{
    return jobId_;
}

void UpdatePostgresqlParameterValueResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool UpdatePostgresqlParameterValueResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void UpdatePostgresqlParameterValueResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

bool UpdatePostgresqlParameterValueResponse::isRestartRequired() const
{
    return restartRequired_;
}

void UpdatePostgresqlParameterValueResponse::setRestartRequired(bool value)
{
    restartRequired_ = value;
    restartRequiredIsSet_ = true;
}

bool UpdatePostgresqlParameterValueResponse::restartRequiredIsSet() const
{
    return restartRequiredIsSet_;
}

void UpdatePostgresqlParameterValueResponse::unsetrestartRequired()
{
    restartRequiredIsSet_ = false;
}

}
}
}
}
}


