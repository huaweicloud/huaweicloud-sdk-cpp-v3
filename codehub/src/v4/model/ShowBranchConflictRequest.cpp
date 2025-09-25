

#include "huaweicloud/codehub/v4/model/ShowBranchConflictRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ShowBranchConflictRequest::ShowBranchConflictRequest()
{
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
    sourceRepositoryId_ = 0;
    sourceRepositoryIdIsSet_ = false;
    sourceBranch_ = "";
    sourceBranchIsSet_ = false;
    targetBranch_ = "";
    targetBranchIsSet_ = false;
    targetRepositoryId_ = 0;
    targetRepositoryIdIsSet_ = false;
}

ShowBranchConflictRequest::~ShowBranchConflictRequest() = default;

void ShowBranchConflictRequest::validate()
{
}

web::json::value ShowBranchConflictRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }
    if(sourceRepositoryIdIsSet_) {
        val[utility::conversions::to_string_t("source_repository_id")] = ModelBase::toJson(sourceRepositoryId_);
    }
    if(sourceBranchIsSet_) {
        val[utility::conversions::to_string_t("source_branch")] = ModelBase::toJson(sourceBranch_);
    }
    if(targetBranchIsSet_) {
        val[utility::conversions::to_string_t("target_branch")] = ModelBase::toJson(targetBranch_);
    }
    if(targetRepositoryIdIsSet_) {
        val[utility::conversions::to_string_t("target_repository_id")] = ModelBase::toJson(targetRepositoryId_);
    }

    return val;
}
bool ShowBranchConflictRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("source_repository_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_repository_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceRepositoryId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_branch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_branch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceBranch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_branch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_branch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetBranch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_repository_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_repository_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetRepositoryId(refVal);
        }
    }
    return ok;
}


int32_t ShowBranchConflictRequest::getRepositoryId() const
{
    return repositoryId_;
}

void ShowBranchConflictRequest::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ShowBranchConflictRequest::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ShowBranchConflictRequest::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

int32_t ShowBranchConflictRequest::getSourceRepositoryId() const
{
    return sourceRepositoryId_;
}

void ShowBranchConflictRequest::setSourceRepositoryId(int32_t value)
{
    sourceRepositoryId_ = value;
    sourceRepositoryIdIsSet_ = true;
}

bool ShowBranchConflictRequest::sourceRepositoryIdIsSet() const
{
    return sourceRepositoryIdIsSet_;
}

void ShowBranchConflictRequest::unsetsourceRepositoryId()
{
    sourceRepositoryIdIsSet_ = false;
}

std::string ShowBranchConflictRequest::getSourceBranch() const
{
    return sourceBranch_;
}

void ShowBranchConflictRequest::setSourceBranch(const std::string& value)
{
    sourceBranch_ = value;
    sourceBranchIsSet_ = true;
}

bool ShowBranchConflictRequest::sourceBranchIsSet() const
{
    return sourceBranchIsSet_;
}

void ShowBranchConflictRequest::unsetsourceBranch()
{
    sourceBranchIsSet_ = false;
}

std::string ShowBranchConflictRequest::getTargetBranch() const
{
    return targetBranch_;
}

void ShowBranchConflictRequest::setTargetBranch(const std::string& value)
{
    targetBranch_ = value;
    targetBranchIsSet_ = true;
}

bool ShowBranchConflictRequest::targetBranchIsSet() const
{
    return targetBranchIsSet_;
}

void ShowBranchConflictRequest::unsettargetBranch()
{
    targetBranchIsSet_ = false;
}

int32_t ShowBranchConflictRequest::getTargetRepositoryId() const
{
    return targetRepositoryId_;
}

void ShowBranchConflictRequest::setTargetRepositoryId(int32_t value)
{
    targetRepositoryId_ = value;
    targetRepositoryIdIsSet_ = true;
}

bool ShowBranchConflictRequest::targetRepositoryIdIsSet() const
{
    return targetRepositoryIdIsSet_;
}

void ShowBranchConflictRequest::unsettargetRepositoryId()
{
    targetRepositoryIdIsSet_ = false;
}

}
}
}
}
}


