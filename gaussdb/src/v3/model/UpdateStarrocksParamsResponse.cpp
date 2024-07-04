

#include "huaweicloud/gaussdb/v3/model/UpdateStarrocksParamsResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




UpdateStarrocksParamsResponse::UpdateStarrocksParamsResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    restartRequired_ = false;
    restartRequiredIsSet_ = false;
}

UpdateStarrocksParamsResponse::~UpdateStarrocksParamsResponse() = default;

void UpdateStarrocksParamsResponse::validate()
{
}

web::json::value UpdateStarrocksParamsResponse::toJson() const
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
bool UpdateStarrocksParamsResponse::fromJson(const web::json::value& val)
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


std::string UpdateStarrocksParamsResponse::getJobId() const
{
    return jobId_;
}

void UpdateStarrocksParamsResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool UpdateStarrocksParamsResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void UpdateStarrocksParamsResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

bool UpdateStarrocksParamsResponse::isRestartRequired() const
{
    return restartRequired_;
}

void UpdateStarrocksParamsResponse::setRestartRequired(bool value)
{
    restartRequired_ = value;
    restartRequiredIsSet_ = true;
}

bool UpdateStarrocksParamsResponse::restartRequiredIsSet() const
{
    return restartRequiredIsSet_;
}

void UpdateStarrocksParamsResponse::unsetrestartRequired()
{
    restartRequiredIsSet_ = false;
}

}
}
}
}
}


