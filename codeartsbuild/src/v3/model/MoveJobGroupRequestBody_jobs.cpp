

#include "huaweicloud/codeartsbuild/v3/model/MoveJobGroupRequestBody_jobs.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




MoveJobGroupRequestBody_jobs::MoveJobGroupRequestBody_jobs()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    jobName_ = "";
    jobNameIsSet_ = false;
}

MoveJobGroupRequestBody_jobs::~MoveJobGroupRequestBody_jobs() = default;

void MoveJobGroupRequestBody_jobs::validate()
{
}

web::json::value MoveJobGroupRequestBody_jobs::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(jobNameIsSet_) {
        val[utility::conversions::to_string_t("job_name")] = ModelBase::toJson(jobName_);
    }

    return val;
}
bool MoveJobGroupRequestBody_jobs::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("job_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobName(refVal);
        }
    }
    return ok;
}


std::string MoveJobGroupRequestBody_jobs::getJobId() const
{
    return jobId_;
}

void MoveJobGroupRequestBody_jobs::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool MoveJobGroupRequestBody_jobs::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void MoveJobGroupRequestBody_jobs::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string MoveJobGroupRequestBody_jobs::getJobName() const
{
    return jobName_;
}

void MoveJobGroupRequestBody_jobs::setJobName(const std::string& value)
{
    jobName_ = value;
    jobNameIsSet_ = true;
}

bool MoveJobGroupRequestBody_jobs::jobNameIsSet() const
{
    return jobNameIsSet_;
}

void MoveJobGroupRequestBody_jobs::unsetjobName()
{
    jobNameIsSet_ = false;
}

}
}
}
}
}


