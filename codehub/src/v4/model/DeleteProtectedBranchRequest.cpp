

#include "huaweicloud/codehub/v4/model/DeleteProtectedBranchRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




DeleteProtectedBranchRequest::DeleteProtectedBranchRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    branchName_ = "";
    branchNameIsSet_ = false;
}

DeleteProtectedBranchRequest::~DeleteProtectedBranchRequest() = default;

void DeleteProtectedBranchRequest::validate()
{
}

web::json::value DeleteProtectedBranchRequest::toJson() const
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
bool DeleteProtectedBranchRequest::fromJson(const web::json::value& val)
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


int32_t DeleteProtectedBranchRequest::getRepositoryId() const
{
    return repositoryId_;
}

void DeleteProtectedBranchRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool DeleteProtectedBranchRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void DeleteProtectedBranchRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string DeleteProtectedBranchRequest::getBranchName() const
{
    return branchName_;
}

void DeleteProtectedBranchRequest::setBranchName(const std::string& value)
{
    branchName_ = value;
    branchNameIsSet_ = true;
}

bool DeleteProtectedBranchRequest::branchNameIsSet() const
{
    return branchNameIsSet_;
}

void DeleteProtectedBranchRequest::unsetbranchName()
{
    branchNameIsSet_ = false;
}

}
}
}
}
}


