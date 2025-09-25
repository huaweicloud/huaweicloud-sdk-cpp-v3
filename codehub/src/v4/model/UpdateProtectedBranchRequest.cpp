

#include "huaweicloud/codehub/v4/model/UpdateProtectedBranchRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




UpdateProtectedBranchRequest::UpdateProtectedBranchRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    branchName_ = "";
    branchNameIsSet_ = false;
    bodyIsSet_ = false;
}

UpdateProtectedBranchRequest::~UpdateProtectedBranchRequest() = default;

void UpdateProtectedBranchRequest::validate()
{
}

web::json::value UpdateProtectedBranchRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(branchNameIsSet_) {
        val[utility::conversions::to_string_t("branch_name")] = ModelBase::toJson(branchName_);
    }
    if(bodyIsSet_) {
        val[utility::conversions::to_string_t("body")] = ModelBase::toJson(body_);
    }

    return val;
}
bool UpdateProtectedBranchRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("body"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("body"));
        if(!fieldValue.is_null())
        {
            std::vector<ProtectedBranchProtectedActionBodyDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


int32_t UpdateProtectedBranchRequest::getRepositoryId() const
{
    return repositoryId_;
}

void UpdateProtectedBranchRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool UpdateProtectedBranchRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void UpdateProtectedBranchRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string UpdateProtectedBranchRequest::getBranchName() const
{
    return branchName_;
}

void UpdateProtectedBranchRequest::setBranchName(const std::string& value)
{
    branchName_ = value;
    branchNameIsSet_ = true;
}

bool UpdateProtectedBranchRequest::branchNameIsSet() const
{
    return branchNameIsSet_;
}

void UpdateProtectedBranchRequest::unsetbranchName()
{
    branchNameIsSet_ = false;
}

std::vector<ProtectedBranchProtectedActionBodyDto>& UpdateProtectedBranchRequest::getBody()
{
    return body_;
}

void UpdateProtectedBranchRequest::setBody(const std::vector<ProtectedBranchProtectedActionBodyDto>& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool UpdateProtectedBranchRequest::bodyIsSet() const
{
    return bodyIsSet_;
}

void UpdateProtectedBranchRequest::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


