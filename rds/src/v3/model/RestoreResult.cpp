

#include "huaweicloud/rds/v3/model/RestoreResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




RestoreResult::RestoreResult()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
}

RestoreResult::~RestoreResult() = default;

void RestoreResult::validate()
{
}

web::json::value RestoreResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(instanceIdIsSet_) {
        val[utility::conversions::to_string_t("instance_id")] = ModelBase::toJson(instanceId_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }

    return val;
}
bool RestoreResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceId(refVal);
        }
    }
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


std::string RestoreResult::getInstanceId() const
{
    return instanceId_;
}

void RestoreResult::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool RestoreResult::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void RestoreResult::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string RestoreResult::getJobId() const
{
    return jobId_;
}

void RestoreResult::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool RestoreResult::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void RestoreResult::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


