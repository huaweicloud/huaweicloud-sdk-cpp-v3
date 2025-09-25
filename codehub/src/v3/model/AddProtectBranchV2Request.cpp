

#include "huaweicloud/codehub/v3/model/AddProtectBranchV2Request.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




AddProtectBranchV2Request::AddProtectBranchV2Request()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    branchName_ = "";
    branchNameIsSet_ = false;
    bodyIsSet_ = false;
}

AddProtectBranchV2Request::~AddProtectBranchV2Request() = default;

void AddProtectBranchV2Request::validate()
{
}

web::json::value AddProtectBranchV2Request::toJson() const
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
bool AddProtectBranchV2Request::fromJson(const web::json::value& val)
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
            AddProtectRequest refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBody(refVal);
        }
    }
    return ok;
}


int32_t AddProtectBranchV2Request::getRepositoryId() const
{
    return repositoryId_;
}

void AddProtectBranchV2Request::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool AddProtectBranchV2Request::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void AddProtectBranchV2Request::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

std::string AddProtectBranchV2Request::getBranchName() const
{
    return branchName_;
}

void AddProtectBranchV2Request::setBranchName(const std::string& value)
{
    branchName_ = value;
    branchNameIsSet_ = true;
}

bool AddProtectBranchV2Request::branchNameIsSet() const
{
    return branchNameIsSet_;
}

void AddProtectBranchV2Request::unsetbranchName()
{
    branchNameIsSet_ = false;
}

AddProtectRequest AddProtectBranchV2Request::getBody() const
{
    return body_;
}

void AddProtectBranchV2Request::setBody(const AddProtectRequest& value)
{
    body_ = value;
    bodyIsSet_ = true;
}

bool AddProtectBranchV2Request::bodyIsSet() const
{
    return bodyIsSet_;
}

void AddProtectBranchV2Request::unsetbody()
{
    bodyIsSet_ = false;
}

}
}
}
}
}


