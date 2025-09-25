

#include "huaweicloud/codehub/v3/model/ListCommitStatisticsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




ListCommitStatisticsRequest::ListCommitStatisticsRequest()
{
    branchName_ = "";
    branchNameIsSet_ = false;
    repositoryId_ = "";
    repositoryIdIsSet_ = false;
}

ListCommitStatisticsRequest::~ListCommitStatisticsRequest() = default;

void ListCommitStatisticsRequest::validate()
{
}

web::json::value ListCommitStatisticsRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(branchNameIsSet_) {
        val[utility::conversions::to_string_t("branch_name")] = ModelBase::toJson(branchName_);
    }
    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }

    return val;
}
bool ListCommitStatisticsRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("branch_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("branch_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBranchName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repository_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryId(refVal);
        }
    }
    return ok;
}


std::string ListCommitStatisticsRequest::getBranchName() const
{
    return branchName_;
}

void ListCommitStatisticsRequest::setBranchName(const std::string& value)
{
    branchName_ = value;
    branchNameIsSet_ = true;
}

bool ListCommitStatisticsRequest::branchNameIsSet() const
{
    return branchNameIsSet_;
}

void ListCommitStatisticsRequest::unsetbranchName()
{
    branchNameIsSet_ = false;
}

std::string ListCommitStatisticsRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ListCommitStatisticsRequest::setRepositoryId(const std::string& value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ListCommitStatisticsRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ListCommitStatisticsRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

}
}
}
}
}


