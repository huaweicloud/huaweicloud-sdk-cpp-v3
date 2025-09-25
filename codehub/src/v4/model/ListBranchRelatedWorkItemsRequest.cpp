

#include "huaweicloud/codehub/v4/model/ListBranchRelatedWorkItemsRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ListBranchRelatedWorkItemsRequest::ListBranchRelatedWorkItemsRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    branchName_ = "";
    branchNameIsSet_ = false;
}

ListBranchRelatedWorkItemsRequest::~ListBranchRelatedWorkItemsRequest() = default;

void ListBranchRelatedWorkItemsRequest::validate()
{
}

web::json::value ListBranchRelatedWorkItemsRequest::toJson() const
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
bool ListBranchRelatedWorkItemsRequest::fromJson(const web::json::value& val)
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


int32_t ListBranchRelatedWorkItemsRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ListBranchRelatedWorkItemsRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ListBranchRelatedWorkItemsRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ListBranchRelatedWorkItemsRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string ListBranchRelatedWorkItemsRequest::getBranchName() const
{
    return branchName_;
}

void ListBranchRelatedWorkItemsRequest::setBranchName(const std::string& value)
{
    branchName_ = value;
    branchNameIsSet_ = true;
}

bool ListBranchRelatedWorkItemsRequest::branchNameIsSet() const
{
    return branchNameIsSet_;
}

void ListBranchRelatedWorkItemsRequest::unsetbranchName()
{
    branchNameIsSet_ = false;
}

}
}
}
}
}


