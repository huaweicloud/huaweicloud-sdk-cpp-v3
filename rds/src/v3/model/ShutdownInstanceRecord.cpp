

#include "huaweicloud/rds/v3/model/ShutdownInstanceRecord.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ShutdownInstanceRecord::ShutdownInstanceRecord()
{
    instanceId_ = "";
    instanceIdIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
}

ShutdownInstanceRecord::~ShutdownInstanceRecord() = default;

void ShutdownInstanceRecord::validate()
{
}

web::json::value ShutdownInstanceRecord::toJson() const
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
bool ShutdownInstanceRecord::fromJson(const web::json::value& val)
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


std::string ShutdownInstanceRecord::getInstanceId() const
{
    return instanceId_;
}

void ShutdownInstanceRecord::setInstanceId(const std::string& value)
{
    instanceId_ = value;
    instanceIdIsSet_ = true;
}

bool ShutdownInstanceRecord::instanceIdIsSet() const
{
    return instanceIdIsSet_;
}

void ShutdownInstanceRecord::unsetinstanceId()
{
    instanceIdIsSet_ = false;
}

std::string ShutdownInstanceRecord::getJobId() const
{
    return jobId_;
}

void ShutdownInstanceRecord::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShutdownInstanceRecord::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShutdownInstanceRecord::unsetjobId()
{
    jobIdIsSet_ = false;
}

}
}
}
}
}


