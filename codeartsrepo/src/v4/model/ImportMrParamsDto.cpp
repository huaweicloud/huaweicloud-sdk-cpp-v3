

#include "huaweicloud/codeartsrepo/v4/model/ImportMrParamsDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ImportMrParamsDto::ImportMrParamsDto()
{
    iid_ = 0;
    iidIsSet_ = false;
    sourceUniqKey_ = "";
    sourceUniqKeyIsSet_ = false;
    authorId_ = 0;
    authorIdIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    title_ = "";
    titleIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    sourceBranch_ = "";
    sourceBranchIsSet_ = false;
    targetBranch_ = "";
    targetBranchIsSet_ = false;
    targetRepositoryId_ = "";
    targetRepositoryIdIsSet_ = false;
    labelsIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    updatedAt_ = "";
    updatedAtIsSet_ = false;
    mergedAt_ = "";
    mergedAtIsSet_ = false;
    closedAt_ = "";
    closedAtIsSet_ = false;
    approversIsSet_ = false;
    diffRefsIsSet_ = false;
    squash_ = false;
    squashIsSet_ = false;
    removeSourceBranch_ = false;
    removeSourceBranchIsSet_ = false;
    branchIsDeleted_ = false;
    branchIsDeletedIsSet_ = false;
    fork_ = false;
    forkIsSet_ = false;
    importSourceFrom_ = "";
    importSourceFromIsSet_ = false;
}

ImportMrParamsDto::~ImportMrParamsDto() = default;

void ImportMrParamsDto::validate()
{
}

web::json::value ImportMrParamsDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(iidIsSet_) {
        val[utility::conversions::to_string_t("iid")] = ModelBase::toJson(iid_);
    }
    if(sourceUniqKeyIsSet_) {
        val[utility::conversions::to_string_t("source_uniq_key")] = ModelBase::toJson(sourceUniqKey_);
    }
    if(authorIdIsSet_) {
        val[utility::conversions::to_string_t("author_id")] = ModelBase::toJson(authorId_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
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
    if(labelsIsSet_) {
        val[utility::conversions::to_string_t("labels")] = ModelBase::toJson(labels_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }
    if(mergedAtIsSet_) {
        val[utility::conversions::to_string_t("merged_at")] = ModelBase::toJson(mergedAt_);
    }
    if(closedAtIsSet_) {
        val[utility::conversions::to_string_t("closed_at")] = ModelBase::toJson(closedAt_);
    }
    if(approversIsSet_) {
        val[utility::conversions::to_string_t("approvers")] = ModelBase::toJson(approvers_);
    }
    if(diffRefsIsSet_) {
        val[utility::conversions::to_string_t("diff_refs")] = ModelBase::toJson(diffRefs_);
    }
    if(squashIsSet_) {
        val[utility::conversions::to_string_t("squash")] = ModelBase::toJson(squash_);
    }
    if(removeSourceBranchIsSet_) {
        val[utility::conversions::to_string_t("remove_source_branch")] = ModelBase::toJson(removeSourceBranch_);
    }
    if(branchIsDeletedIsSet_) {
        val[utility::conversions::to_string_t("branch_is_deleted")] = ModelBase::toJson(branchIsDeleted_);
    }
    if(forkIsSet_) {
        val[utility::conversions::to_string_t("fork")] = ModelBase::toJson(fork_);
    }
    if(importSourceFromIsSet_) {
        val[utility::conversions::to_string_t("import_source_from")] = ModelBase::toJson(importSourceFrom_);
    }

    return val;
}
bool ImportMrParamsDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("iid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iid"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source_uniq_key"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source_uniq_key"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSourceUniqKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("author_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("author_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("title"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("title"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTitle(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
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
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetRepositoryId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("labels"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("labels"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLabels(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("merged_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("merged_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMergedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("closed_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("closed_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClosedAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("approvers"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("approvers"));
        if(!fieldValue.is_null())
        {
            std::vector<ApproverParamDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApprovers(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("diff_refs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("diff_refs"));
        if(!fieldValue.is_null())
        {
            std::vector<DiffRefsParamDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDiffRefs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("squash"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("squash"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSquash(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("remove_source_branch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("remove_source_branch"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemoveSourceBranch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("branch_is_deleted"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("branch_is_deleted"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBranchIsDeleted(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fork"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fork"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFork(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("import_source_from"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("import_source_from"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImportSourceFrom(refVal);
        }
    }
    return ok;
}


int32_t ImportMrParamsDto::getIid() const
{
    return iid_;
}

void ImportMrParamsDto::setIid(int32_t value)
{
    iid_ = value;
    iidIsSet_ = true;
}

bool ImportMrParamsDto::iidIsSet() const
{
    return iidIsSet_;
}

void ImportMrParamsDto::unsetiid()
{
    iidIsSet_ = false;
}

std::string ImportMrParamsDto::getSourceUniqKey() const
{
    return sourceUniqKey_;
}

void ImportMrParamsDto::setSourceUniqKey(const std::string& value)
{
    sourceUniqKey_ = value;
    sourceUniqKeyIsSet_ = true;
}

bool ImportMrParamsDto::sourceUniqKeyIsSet() const
{
    return sourceUniqKeyIsSet_;
}

void ImportMrParamsDto::unsetsourceUniqKey()
{
    sourceUniqKeyIsSet_ = false;
}

int32_t ImportMrParamsDto::getAuthorId() const
{
    return authorId_;
}

void ImportMrParamsDto::setAuthorId(int32_t value)
{
    authorId_ = value;
    authorIdIsSet_ = true;
}

bool ImportMrParamsDto::authorIdIsSet() const
{
    return authorIdIsSet_;
}

void ImportMrParamsDto::unsetauthorId()
{
    authorIdIsSet_ = false;
}

std::string ImportMrParamsDto::getState() const
{
    return state_;
}

void ImportMrParamsDto::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool ImportMrParamsDto::stateIsSet() const
{
    return stateIsSet_;
}

void ImportMrParamsDto::unsetstate()
{
    stateIsSet_ = false;
}

std::string ImportMrParamsDto::getTitle() const
{
    return title_;
}

void ImportMrParamsDto::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool ImportMrParamsDto::titleIsSet() const
{
    return titleIsSet_;
}

void ImportMrParamsDto::unsettitle()
{
    titleIsSet_ = false;
}

std::string ImportMrParamsDto::getDescription() const
{
    return description_;
}

void ImportMrParamsDto::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ImportMrParamsDto::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ImportMrParamsDto::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ImportMrParamsDto::getSourceBranch() const
{
    return sourceBranch_;
}

void ImportMrParamsDto::setSourceBranch(const std::string& value)
{
    sourceBranch_ = value;
    sourceBranchIsSet_ = true;
}

bool ImportMrParamsDto::sourceBranchIsSet() const
{
    return sourceBranchIsSet_;
}

void ImportMrParamsDto::unsetsourceBranch()
{
    sourceBranchIsSet_ = false;
}

std::string ImportMrParamsDto::getTargetBranch() const
{
    return targetBranch_;
}

void ImportMrParamsDto::setTargetBranch(const std::string& value)
{
    targetBranch_ = value;
    targetBranchIsSet_ = true;
}

bool ImportMrParamsDto::targetBranchIsSet() const
{
    return targetBranchIsSet_;
}

void ImportMrParamsDto::unsettargetBranch()
{
    targetBranchIsSet_ = false;
}

std::string ImportMrParamsDto::getTargetRepositoryId() const
{
    return targetRepositoryId_;
}

void ImportMrParamsDto::setTargetRepositoryId(const std::string& value)
{
    targetRepositoryId_ = value;
    targetRepositoryIdIsSet_ = true;
}

bool ImportMrParamsDto::targetRepositoryIdIsSet() const
{
    return targetRepositoryIdIsSet_;
}

void ImportMrParamsDto::unsettargetRepositoryId()
{
    targetRepositoryIdIsSet_ = false;
}

Object ImportMrParamsDto::getLabels() const
{
    return labels_;
}

void ImportMrParamsDto::setLabels(const Object& value)
{
    labels_ = value;
    labelsIsSet_ = true;
}

bool ImportMrParamsDto::labelsIsSet() const
{
    return labelsIsSet_;
}

void ImportMrParamsDto::unsetlabels()
{
    labelsIsSet_ = false;
}

std::string ImportMrParamsDto::getCreatedAt() const
{
    return createdAt_;
}

void ImportMrParamsDto::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool ImportMrParamsDto::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void ImportMrParamsDto::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string ImportMrParamsDto::getUpdatedAt() const
{
    return updatedAt_;
}

void ImportMrParamsDto::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool ImportMrParamsDto::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void ImportMrParamsDto::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

std::string ImportMrParamsDto::getMergedAt() const
{
    return mergedAt_;
}

void ImportMrParamsDto::setMergedAt(const std::string& value)
{
    mergedAt_ = value;
    mergedAtIsSet_ = true;
}

bool ImportMrParamsDto::mergedAtIsSet() const
{
    return mergedAtIsSet_;
}

void ImportMrParamsDto::unsetmergedAt()
{
    mergedAtIsSet_ = false;
}

std::string ImportMrParamsDto::getClosedAt() const
{
    return closedAt_;
}

void ImportMrParamsDto::setClosedAt(const std::string& value)
{
    closedAt_ = value;
    closedAtIsSet_ = true;
}

bool ImportMrParamsDto::closedAtIsSet() const
{
    return closedAtIsSet_;
}

void ImportMrParamsDto::unsetclosedAt()
{
    closedAtIsSet_ = false;
}

std::vector<ApproverParamDto>& ImportMrParamsDto::getApprovers()
{
    return approvers_;
}

void ImportMrParamsDto::setApprovers(const std::vector<ApproverParamDto>& value)
{
    approvers_ = value;
    approversIsSet_ = true;
}

bool ImportMrParamsDto::approversIsSet() const
{
    return approversIsSet_;
}

void ImportMrParamsDto::unsetapprovers()
{
    approversIsSet_ = false;
}

std::vector<DiffRefsParamDto>& ImportMrParamsDto::getDiffRefs()
{
    return diffRefs_;
}

void ImportMrParamsDto::setDiffRefs(const std::vector<DiffRefsParamDto>& value)
{
    diffRefs_ = value;
    diffRefsIsSet_ = true;
}

bool ImportMrParamsDto::diffRefsIsSet() const
{
    return diffRefsIsSet_;
}

void ImportMrParamsDto::unsetdiffRefs()
{
    diffRefsIsSet_ = false;
}

bool ImportMrParamsDto::isSquash() const
{
    return squash_;
}

void ImportMrParamsDto::setSquash(bool value)
{
    squash_ = value;
    squashIsSet_ = true;
}

bool ImportMrParamsDto::squashIsSet() const
{
    return squashIsSet_;
}

void ImportMrParamsDto::unsetsquash()
{
    squashIsSet_ = false;
}

bool ImportMrParamsDto::isRemoveSourceBranch() const
{
    return removeSourceBranch_;
}

void ImportMrParamsDto::setRemoveSourceBranch(bool value)
{
    removeSourceBranch_ = value;
    removeSourceBranchIsSet_ = true;
}

bool ImportMrParamsDto::removeSourceBranchIsSet() const
{
    return removeSourceBranchIsSet_;
}

void ImportMrParamsDto::unsetremoveSourceBranch()
{
    removeSourceBranchIsSet_ = false;
}

bool ImportMrParamsDto::isBranchIsDeleted() const
{
    return branchIsDeleted_;
}

void ImportMrParamsDto::setBranchIsDeleted(bool value)
{
    branchIsDeleted_ = value;
    branchIsDeletedIsSet_ = true;
}

bool ImportMrParamsDto::branchIsDeletedIsSet() const
{
    return branchIsDeletedIsSet_;
}

void ImportMrParamsDto::unsetbranchIsDeleted()
{
    branchIsDeletedIsSet_ = false;
}

bool ImportMrParamsDto::isFork() const
{
    return fork_;
}

void ImportMrParamsDto::setFork(bool value)
{
    fork_ = value;
    forkIsSet_ = true;
}

bool ImportMrParamsDto::forkIsSet() const
{
    return forkIsSet_;
}

void ImportMrParamsDto::unsetfork()
{
    forkIsSet_ = false;
}

std::string ImportMrParamsDto::getImportSourceFrom() const
{
    return importSourceFrom_;
}

void ImportMrParamsDto::setImportSourceFrom(const std::string& value)
{
    importSourceFrom_ = value;
    importSourceFromIsSet_ = true;
}

bool ImportMrParamsDto::importSourceFromIsSet() const
{
    return importSourceFromIsSet_;
}

void ImportMrParamsDto::unsetimportSourceFrom()
{
    importSourceFromIsSet_ = false;
}

}
}
}
}
}


