

#include "huaweicloud/rds/v3/model/RestoreLogReplayDatabaseResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




RestoreLogReplayDatabaseResponse::RestoreLogReplayDatabaseResponse()
{
    jobId_ = "";
    jobIdIsSet_ = false;
}

RestoreLogReplayDatabaseResponse::~RestoreLogReplayDatabaseResponse() = default;

void RestoreLogReplayDatabaseResponse::validate()
{
}

web::json::value RestoreLogReplayDatabaseResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool RestoreLogReplayDatabaseResponse::fromJson(const web::json::value& val)
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


std::string RestoreLogReplayDatabaseResponse::getJobId() const
{
    return jobId_;
}

void RestoreLogReplayDatabaseResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool RestoreLogReplayDatabaseResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void RestoreLogReplayDatabaseResponse::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


