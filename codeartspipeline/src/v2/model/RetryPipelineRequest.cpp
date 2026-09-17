

#include "huaweicloud/codeartspipeline/v2/model/RetryPipelineRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




RetryPipelineRequest::RetryPipelineRequest()
{
    repoHttpsUrl_ = "";
    repoHttpsUrlIsSet_ = false;
    jobRunIdsIsSet_ = false;
}

RetryPipelineRequest::~RetryPipelineRequest() = default;

void RetryPipelineRequest::validate()
{
}

web::json::value RetryPipelineRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repoHttpsUrlIsSet_) {
        val[utility::conversions::to_string_t("repo_https_url")] = ModelBase::toJson(repoHttpsUrl_);
    }
    if(jobRunIdsIsSet_) {
        val[utility::conversions::to_string_t("job_run_ids")] = ModelBase::toJson(jobRunIds_);
    }

    return val;
}
bool RetryPipelineRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("repo_https_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repo_https_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepoHttpsUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_run_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_run_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobRunIds(refVal);
        }
    }
    return ok;
}


std::string RetryPipelineRequest::getRepoHttpsUrl() const
{
    return repoHttpsUrl_;
}

void RetryPipelineRequest::setRepoHttpsUrl(const std::string& value)
{
    repoHttpsUrl_ = value;
    repoHttpsUrlIsSet_ = true;
}

bool RetryPipelineRequest::repoHttpsUrlIsSet() const
{
    return repoHttpsUrlIsSet_;
}

void RetryPipelineRequest::unsetrepoHttpsUrl()
{
    repoHttpsUrlIsSet_ = false;
}

std::vector<std::string>& RetryPipelineRequest::getJobRunIds()
{
    return jobRunIds_;
}

void RetryPipelineRequest::setJobRunIds(const std::vector<std::string>& value)
{
    jobRunIds_ = value;
    jobRunIdsIsSet_ = true;
}

bool RetryPipelineRequest::jobRunIdsIsSet() const
{
    return jobRunIdsIsSet_;
}

void RetryPipelineRequest::unsetjobRunIds()
{
    jobRunIdsIsSet_ = false;
}

}
}
}
}
}


