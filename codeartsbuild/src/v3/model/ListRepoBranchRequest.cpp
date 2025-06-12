

#include "huaweicloud/codeartsbuild/v3/model/ListRepoBranchRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {
namespace Model {




ListRepoBranchRequest::ListRepoBranchRequest()
{
    jobId_ = "";
    jobIdIsSet_ = false;
    repositoryName_ = "";
    repositoryNameIsSet_ = false;
}

ListRepoBranchRequest::~ListRepoBranchRequest() = default;

void ListRepoBranchRequest::validate()
{
}

web::json::value ListRepoBranchRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(repositoryNameIsSet_) {
        val[utility::conversions::to_string_t("repository_name")] = ModelBase::toJson(repositoryName_);
    }

    return val;
}
bool ListRepoBranchRequest::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ListRepoBranchRequest::getJobId() const
{
    return jobId_;
}

void ListRepoBranchRequest::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ListRepoBranchRequest::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ListRepoBranchRequest::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string ListRepoBranchRequest::getRepositoryName() const
{
    return repositoryName_;
}

void ListRepoBranchRequest::setRepositoryName(const std::string& value)
{
    repositoryName_ = value;
    repositoryNameIsSet_ = true;
}

bool ListRepoBranchRequest::repositoryNameIsSet() const
{
    return repositoryNameIsSet_;
}

void ListRepoBranchRequest::unsetrepositoryName()
{
    repositoryNameIsSet_ = false;
}

}
}
}
}
}


