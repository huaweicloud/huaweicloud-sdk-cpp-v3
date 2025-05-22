

#include "huaweicloud/codeartsbuild/v3/model/ShowJobBuildSuccessRatioRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ShowJobBuildSuccessRatioRequest::ShowJobBuildSuccessRatioRequest()
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

ShowJobBuildSuccessRatioRequest::~ShowJobBuildSuccessRatioRequest() = default;

void ShowJobBuildSuccessRatioRequest::validate()
{
}

web::json::value ShowJobBuildSuccessRatioRequest::toJson() const
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
bool ShowJobBuildSuccessRatioRequest::fromJson(const web::json::value& val)
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


std::string ShowJobBuildSuccessRatioRequest::getJobId() const
{
    return jobId_;
}

void ShowJobBuildSuccessRatioRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowJobBuildSuccessRatioRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowJobBuildSuccessRatioRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ShowJobBuildSuccessRatioRequest::getRepositoryName() const
{
    return repositoryName_;
}

void ShowJobBuildSuccessRatioRequest::setRepositoryName(const std::string& value)
{
    repositoryName_ = value;
    repositoryNameIsSet_ = true;
}

bool ShowJobBuildSuccessRatioRequest::repositoryNameIsSet() const
{
    return repositoryNameIsSet_;
}

void ShowJobBuildSuccessRatioRequest::unsetrepositoryName()
{
    repositoryNameIsSet_ = false;
}

std::string ShowJobBuildSuccessRatioRequest::getBranch() const
{
    return branch_;
}

void ShowJobBuildSuccessRatioRequest::setBranch(const std::string& value)
{
    branch_ = value;
    branchIsSet_ = true;
}

bool ShowJobBuildSuccessRatioRequest::branchIsSet() const
{
    return branchIsSet_;
}

void ShowJobBuildSuccessRatioRequest::unsetbranch()
{
    branchIsSet_ = false;
}

int32_t ShowJobBuildSuccessRatioRequest::getInterval() const
{
    return interval_;
}

void ShowJobBuildSuccessRatioRequest::setInterval(int32_t value)
{
    interval_ = value;
    intervalIsSet_ = true;
}

bool ShowJobBuildSuccessRatioRequest::intervalIsSet() const
{
    return intervalIsSet_;
}

void ShowJobBuildSuccessRatioRequest::unsetinterval()
{
    intervalIsSet_ = false;
}

}
}
}
}
}


