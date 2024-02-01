

#include "huaweicloud/rds/v3/model/UpdateIncreBackupPolicy1Response.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UpdateIncreBackupPolicy1Response::UpdateIncreBackupPolicy1Response()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

UpdateIncreBackupPolicy1Response::~UpdateIncreBackupPolicy1Response() = default;

void UpdateIncreBackupPolicy1Response::validate()
{
}

web::json::value UpdateIncreBackupPolicy1Response::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool UpdateIncreBackupPolicy1Response::fromJson(const web::json::value& val)
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


std::string UpdateIncreBackupPolicy1Response::getJobId() const
{
    return jobId_;
}

void UpdateIncreBackupPolicy1Response::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool UpdateIncreBackupPolicy1Response::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void UpdateIncreBackupPolicy1Response::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


