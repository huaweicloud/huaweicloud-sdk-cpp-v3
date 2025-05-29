

#include "huaweicloud/codeartsbuild/v3/model/ShowJobBuildTimeRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowJobBuildTimeRequest::ShowJobBuildTimeRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    repositoryName_ = "";
    repositoryNameIsSet_ = false;
    branch_ = "";
    branchIsSet_ = false;
    interval_ = 0;
    intervalIsSet_ = false;
}

ShowJobBuildTimeRequest::~ShowJobBuildTimeRequest() = default;

void ShowJobBuildTimeRequest::validate()
{
}

web::json::value ShowJobBuildTimeRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(repositoryNameIsSet_) {
        val[utility::conversions::to_string_t("repository_name")] = ModelBase::toJson(repositoryName_);
    }
    if(branchIsSet_) {
        val[utility::conversions::to_string_t("branch")] = ModelBase::toJson(branch_);
    }
    if(intervalIsSet_) {
        val[utility::conversions::to_string_t("interval")] = ModelBase::toJson(interval_);
    }

    return val;
}
bool ShowJobBuildTimeRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("repository_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("branch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("branch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBranch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("interval"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("interval"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInterval(refVal);
        }
    }
    return ok;
}


std::string ShowJobBuildTimeRequest::getJobId() const
{
    return jobId_;
}

void ShowJobBuildTimeRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowJobBuildTimeRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowJobBuildTimeRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ShowJobBuildTimeRequest::getRepositoryName() const
{
    return repositoryName_;
}

void ShowJobBuildTimeRequest::setRepositoryName(const std::string& value)
{
    repositoryName_ = value;
    repositoryNameIsSet_ = true;
}

bool ShowJobBuildTimeRequest::repositoryNameIsSet() const
{
    return repositoryNameIsSet_;
}

void ShowJobBuildTimeRequest::unsetrepositoryName()
{
    repositoryNameIsSet_ = false;
}

std::string ShowJobBuildTimeRequest::getBranch() const
{
    return branch_;
}

void ShowJobBuildTimeRequest::setBranch(const std::string& value)
{
    branch_ = value;
    branchIsSet_ = true;
}

bool ShowJobBuildTimeRequest::branchIsSet() const
{
    return branchIsSet_;
}

void ShowJobBuildTimeRequest::unsetbranch()
{
    branchIsSet_ = false;
}

int32_t ShowJobBuildTimeRequest::getInterval() const
{
    return interval_;
}

void ShowJobBuildTimeRequest::setInterval(int32_t value)
{
    interval_ = value;
    intervalIsSet_ = true;
}

bool ShowJobBuildTimeRequest::intervalIsSet() const
{
    return intervalIsSet_;
}

void ShowJobBuildTimeRequest::unsetinterval()
{
    intervalIsSet_ = false;
}

}
}
}
}
}


