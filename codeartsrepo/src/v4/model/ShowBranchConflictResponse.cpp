

#include "huaweicloud/codeartsrepo/v4/model/ShowBranchConflictResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ShowBranchConflictResponse::ShowBranchConflictResponse()
{
    sourceRepositoryId_ = 0;
    sourceRepositoryIdIsSet_ = false;
    targetRepositoryId_ = 0;
    targetRepositoryIdIsSet_ = false;
    sourceBranch_ = "";
    sourceBranchIsSet_ = false;
    targetBranch_ = "";
    targetBranchIsSet_ = false;
    isConflict_ = false;
    isConflictIsSet_ = false;
}

ShowBranchConflictResponse::~ShowBranchConflictResponse() = default;

void ShowBranchConflictResponse::validate()
{
}

web::json::value ShowBranchConflictResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sourceRepositoryIdIsSet_) {
        val[utility::conversions::to_string_t("source_repository_id")] = ModelBase::toJson(sourceRepositoryId_);
    }
    if(targetRepositoryIdIsSet_) {
        val[utility::conversions::to_string_t("target_repository_id")] = ModelBase::toJson(targetRepositoryId_);
    }
    if(sourceBranchIsSet_) {
        val[utility::conversions::to_string_t("source_branch")] = ModelBase::toJson(sourceBranch_);
    }
    if(targetBranchIsSet_) {
        val[utility::conversions::to_string_t("target_branch")] = ModelBase::toJson(targetBranch_);
    }
    if(isConflictIsSet_) {
        val[utility::conversions::to_string_t("is_conflict")] = ModelBase::toJson(isConflict_);
    }

    return val;
}
bool ShowBranchConflictResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("source_repository_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_repository_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceRepositoryId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("is_conflict"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_conflict"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsConflict(refVal);
        }
    }
    return ok;
}


int32_t ShowBranchConflictResponse::getSourceRepositoryId() const
{
    return sourceRepositoryId_;
}

void ShowBranchConflictResponse::setSourceRepositoryId(int32_t value)
{
    sourceRepositoryId_ = value;
    sourceRepositoryIdIsSet_ = true;
}

bool ShowBranchConflictResponse::sourceRepositoryIdIsSet() const
{
    return sourceRepositoryIdIsSet_;
}

void ShowBranchConflictResponse::unsetsourceRepositoryId()
{
    sourceRepositoryIdIsSet_ = false;
}

int32_t ShowBranchConflictResponse::getTargetRepositoryId() const
{
    return targetRepositoryId_;
}

void ShowBranchConflictResponse::setTargetRepositoryId(int32_t value)
{
    targetRepositoryId_ = value;
    targetRepositoryIdIsSet_ = true;
}

bool ShowBranchConflictResponse::targetRepositoryIdIsSet() const
{
    return targetRepositoryIdIsSet_;
}

void ShowBranchConflictResponse::unsettargetRepositoryId()
{
    targetRepositoryIdIsSet_ = false;
}

std::string ShowBranchConflictResponse::getSourceBranch() const
{
    return sourceBranch_;
}

void ShowBranchConflictResponse::setSourceBranch(const std::string& value)
{
    sourceBranch_ = value;
    sourceBranchIsSet_ = true;
}

bool ShowBranchConflictResponse::sourceBranchIsSet() const
{
    return sourceBranchIsSet_;
}

void ShowBranchConflictResponse::unsetsourceBranch()
{
    sourceBranchIsSet_ = false;
}

std::string ShowBranchConflictResponse::getTargetBranch() const
{
    return targetBranch_;
}

void ShowBranchConflictResponse::setTargetBranch(const std::string& value)
{
    targetBranch_ = value;
    targetBranchIsSet_ = true;
}

bool ShowBranchConflictResponse::targetBranchIsSet() const
{
    return targetBranchIsSet_;
}

void ShowBranchConflictResponse::unsettargetBranch()
{
    targetBranchIsSet_ = false;
}

bool ShowBranchConflictResponse::isIsConflict() const
{
    return isConflict_;
}

void ShowBranchConflictResponse::setIsConflict(bool value)
{
    isConflict_ = value;
    isConflictIsSet_ = true;
}

bool ShowBranchConflictResponse::isConflictIsSet() const
{
    return isConflictIsSet_;
}

void ShowBranchConflictResponse::unsetisConflict()
{
    isConflictIsSet_ = false;
}

}
}
}
}
}


