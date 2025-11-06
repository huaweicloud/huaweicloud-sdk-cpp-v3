

#include "huaweicloud/codeartsrepo/v4/model/UpdateBranchNameResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




UpdateBranchNameResponse::UpdateBranchNameResponse()
{
    oldBranchName_ = "";
    oldBranchNameIsSet_ = false;
    oldBranchCommitId_ = "";
    oldBranchCommitIdIsSet_ = false;
    newBranchName_ = "";
    newBranchNameIsSet_ = false;
    newBranchCommitId_ = "";
    newBranchCommitIdIsSet_ = false;
}

UpdateBranchNameResponse::~UpdateBranchNameResponse() = default;

void UpdateBranchNameResponse::validate()
{
}

web::json::value UpdateBranchNameResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(oldBranchNameIsSet_) {
        val[utility::conversions::to_string_t("old_branch_name")] = ModelBase::toJson(oldBranchName_);
    }
    if(oldBranchCommitIdIsSet_) {
        val[utility::conversions::to_string_t("old_branch_commit_id")] = ModelBase::toJson(oldBranchCommitId_);
    }
    if(newBranchNameIsSet_) {
        val[utility::conversions::to_string_t("new_branch_name")] = ModelBase::toJson(newBranchName_);
    }
    if(newBranchCommitIdIsSet_) {
        val[utility::conversions::to_string_t("new_branch_commit_id")] = ModelBase::toJson(newBranchCommitId_);
    }

    return val;
}
bool UpdateBranchNameResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("old_branch_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("old_branch_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOldBranchName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("old_branch_commit_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("old_branch_commit_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOldBranchCommitId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("new_branch_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("new_branch_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNewBranchName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("new_branch_commit_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("new_branch_commit_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNewBranchCommitId(refVal);
        }
    }
    return ok;
}


std::string UpdateBranchNameResponse::getOldBranchName() const
{
    return oldBranchName_;
}

void UpdateBranchNameResponse::setOldBranchName(const std::string& value)
{
    oldBranchName_ = value;
    oldBranchNameIsSet_ = true;
}

bool UpdateBranchNameResponse::oldBranchNameIsSet() const
{
    return oldBranchNameIsSet_;
}

void UpdateBranchNameResponse::unsetoldBranchName()
{
    oldBranchNameIsSet_ = false;
}

std::string UpdateBranchNameResponse::getOldBranchCommitId() const
{
    return oldBranchCommitId_;
}

void UpdateBranchNameResponse::setOldBranchCommitId(const std::string& value)
{
    oldBranchCommitId_ = value;
    oldBranchCommitIdIsSet_ = true;
}

bool UpdateBranchNameResponse::oldBranchCommitIdIsSet() const
{
    return oldBranchCommitIdIsSet_;
}

void UpdateBranchNameResponse::unsetoldBranchCommitId()
{
    oldBranchCommitIdIsSet_ = false;
}

std::string UpdateBranchNameResponse::getNewBranchName() const
{
    return newBranchName_;
}

void UpdateBranchNameResponse::setNewBranchName(const std::string& value)
{
    newBranchName_ = value;
    newBranchNameIsSet_ = true;
}

bool UpdateBranchNameResponse::newBranchNameIsSet() const
{
    return newBranchNameIsSet_;
}

void UpdateBranchNameResponse::unsetnewBranchName()
{
    newBranchNameIsSet_ = false;
}

std::string UpdateBranchNameResponse::getNewBranchCommitId() const
{
    return newBranchCommitId_;
}

void UpdateBranchNameResponse::setNewBranchCommitId(const std::string& value)
{
    newBranchCommitId_ = value;
    newBranchCommitIdIsSet_ = true;
}

bool UpdateBranchNameResponse::newBranchCommitIdIsSet() const
{
    return newBranchCommitIdIsSet_;
}

void UpdateBranchNameResponse::unsetnewBranchCommitId()
{
    newBranchCommitIdIsSet_ = false;
}

}
}
}
}
}


