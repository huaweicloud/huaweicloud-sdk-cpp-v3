

#include "huaweicloud/gaussdbfornosql/v3/model/StopBackupResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




StopBackupResponse::StopBackupResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

StopBackupResponse::~StopBackupResponse() = default;

void StopBackupResponse::validate()
{
}

web::json::value StopBackupResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool StopBackupResponse::fromJson(const web::json::value& val)
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


std::string StopBackupResponse::getJobId() const
{
    return jobId_;
}

void StopBackupResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool StopBackupResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void StopBackupResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


