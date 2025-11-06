

#include "huaweicloud/codeartsrepo/v4/model/ShowCommitStatisticsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ShowCommitStatisticsRequest::ShowCommitStatisticsRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    branchName_ = "";
    branchNameIsSet_ = false;
}

ShowCommitStatisticsRequest::~ShowCommitStatisticsRequest() = default;

void ShowCommitStatisticsRequest::validate()
{
}

web::json::value ShowCommitStatisticsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(branchNameIsSet_) {
        val[utility::conversions::to_string_t("branch_name")] = ModelBase::toJson(branchName_);
    }

    return val;
}
bool ShowCommitStatisticsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("repository_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("branch_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("branch_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBranchName(refVal);
        }
    }
    return ok;
}


int32_t ShowCommitStatisticsRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ShowCommitStatisticsRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ShowCommitStatisticsRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ShowCommitStatisticsRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string ShowCommitStatisticsRequest::getBranchName() const
{
    return branchName_;
}

void ShowCommitStatisticsRequest::setBranchName(const std::string& value)
{
    branchName_ = value;
    branchNameIsSet_ = true;
}

bool ShowCommitStatisticsRequest::branchNameIsSet() const
{
    return branchNameIsSet_;
}

void ShowCommitStatisticsRequest::unsetbranchName()
{
    branchNameIsSet_ = false;
}

}
}
}
}
}


