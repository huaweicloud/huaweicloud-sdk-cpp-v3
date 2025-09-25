

#include "huaweicloud/codehub/v4/model/DeleteBranchRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




DeleteBranchRequest::DeleteBranchRequest()
{
    branchName_ = "";
    branchNameIsSet_ = false;
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
}

DeleteBranchRequest::~DeleteBranchRequest() = default;

void DeleteBranchRequest::validate()
{
}

web::json::value DeleteBranchRequest::toJson() const
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
bool DeleteBranchRequest::fromJson(const web::json::value& val)
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
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryId(refVal);
        }
    }
    return ok;
}


std::string DeleteBranchRequest::getBranchName() const
{
    return branchName_;
}

void DeleteBranchRequest::setBranchName(const std::string& value)
{
    branchName_ = value;
    branchNameIsSet_ = true;
}

bool DeleteBranchRequest::branchNameIsSet() const
{
    return branchNameIsSet_;
}

void DeleteBranchRequest::unsetbranchName()
{
    branchNameIsSet_ = false;
}

int32_t DeleteBranchRequest::getRepositoryId() const
{
    return repositoryId_;
}

void DeleteBranchRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool DeleteBranchRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void DeleteBranchRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

}
}
}
}
}


