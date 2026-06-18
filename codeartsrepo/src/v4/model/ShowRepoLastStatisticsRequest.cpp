

#include "huaweicloud/codeartsrepo/v4/model/ShowRepoLastStatisticsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ShowRepoLastStatisticsRequest::ShowRepoLastStatisticsRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    branchName_ = "";
    branchNameIsSet_ = false;
}

ShowRepoLastStatisticsRequest::~ShowRepoLastStatisticsRequest() = default;

void ShowRepoLastStatisticsRequest::validate()
{
}

web::json::value ShowRepoLastStatisticsRequest::toJson() const
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
bool ShowRepoLastStatisticsRequest::fromJson(const web::json::value& val)
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


int32_t ShowRepoLastStatisticsRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ShowRepoLastStatisticsRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ShowRepoLastStatisticsRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ShowRepoLastStatisticsRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string ShowRepoLastStatisticsRequest::getBranchName() const
{
    return branchName_;
}

void ShowRepoLastStatisticsRequest::setBranchName(const std::string& value)
{
    branchName_ = value;
    branchNameIsSet_ = true;
}

bool ShowRepoLastStatisticsRequest::branchNameIsSet() const
{
    return branchNameIsSet_;
}

void ShowRepoLastStatisticsRequest::unsetbranchName()
{
    branchNameIsSet_ = false;
}

}
}
}
}
}


