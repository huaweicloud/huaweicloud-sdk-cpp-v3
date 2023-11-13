

#include "huaweicloud/rds/v3/model/PostgreSQLRestoreResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




PostgreSQLRestoreResult::PostgreSQLRestoreResult()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
}

PostgreSQLRestoreResult::~PostgreSQLRestoreResult() = default;

void PostgreSQLRestoreResult::validate()
{
}

web::json::value PostgreSQLRestoreResult::toJson() const
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
bool PostgreSQLRestoreResult::fromJson(const web::json::value& val)
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


std::string PostgreSQLRestoreResult::getInstanceId() const
{
    return instanceId_;
}

void PostgreSQLRestoreResult::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool PostgreSQLRestoreResult::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void PostgreSQLRestoreResult::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string PostgreSQLRestoreResult::getJobId() const
{
    return jobId_;
}

void PostgreSQLRestoreResult::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool PostgreSQLRestoreResult::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void PostgreSQLRestoreResult::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


