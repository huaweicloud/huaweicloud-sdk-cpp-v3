

#include "huaweicloud/codehub/v3/model/MergeInfoResult.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {
namespace Model {




MergeInfoResult::MergeInfoResult()
{
    approvalMergeRequestApproversIsSet_ = false;
    authorIsSet_ = false;
    closedAt_ = "";
    closedAtIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    devcloudSourceBranch_ = "";
    devcloudSourceBranchIsSet_ = false;
    id_ = 0.0;
    idIsSet_ = false;
    iid_ = 0.0;
    iidIsSet_ = false;
    isSourceBranchExist_ = false;
    isSourceBranchExistIsSet_ = false;
    mergeRequestAssigneeListIsSet_ = false;
    mergeRequestDiffIsSet_ = false;
    mergeStatus_ = "";
    mergeStatusIsSet_ = false;
    sourceBranch_ = "";
    sourceBranchIsSet_ = false;
    state_ = "";
    stateIsSet_ = false;
    targetBranch_ = "";
    targetBranchIsSet_ = false;
    title_ = "";
    titleIsSet_ = false;
    updatedAt_ = "";
    updatedAtIsSet_ = false;
}

MergeInfoResult::~MergeInfoResult() = default;

void MergeInfoResult::validate()
{
}

web::json::value MergeInfoResult::toJson() const
{
    web::json::value val = web::json::value::object();

    if(approvalMergeRequestApproversIsSet_) {
        val[utility::conversions::to_string_t("approval_merge_request_approvers")] = ModelBase::toJson(approvalMergeRequestApprovers_);
    }
    if(authorIsSet_) {
        val[utility::conversions::to_string_t("author")] = ModelBase::toJson(author_);
    }
    if(closedAtIsSet_) {
        val[utility::conversions::to_string_t("closed_at")] = ModelBase::toJson(closedAt_);
    }
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(devcloudSourceBranchIsSet_) {
        val[utility::conversions::to_string_t("devcloud_source_branch")] = ModelBase::toJson(devcloudSourceBranch_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(iidIsSet_) {
        val[utility::conversions::to_string_t("iid")] = ModelBase::toJson(iid_);
    }
    if(isSourceBranchExistIsSet_) {
        val[utility::conversions::to_string_t("is_source_branch_exist")] = ModelBase::toJson(isSourceBranchExist_);
    }
    if(mergeRequestAssigneeListIsSet_) {
        val[utility::conversions::to_string_t("merge_request_assignee_list")] = ModelBase::toJson(mergeRequestAssigneeList_);
    }
    if(mergeRequestDiffIsSet_) {
        val[utility::conversions::to_string_t("merge_request_diff")] = ModelBase::toJson(mergeRequestDiff_);
    }
    if(mergeStatusIsSet_) {
        val[utility::conversions::to_string_t("merge_status")] = ModelBase::toJson(mergeStatus_);
    }
    if(sourceBranchIsSet_) {
        val[utility::conversions::to_string_t("source_branch")] = ModelBase::toJson(sourceBranch_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(targetBranchIsSet_) {
        val[utility::conversions::to_string_t("target_branch")] = ModelBase::toJson(targetBranch_);
    }
    if(titleIsSet_) {
        val[utility::conversions::to_string_t("title")] = ModelBase::toJson(title_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }

    return val;
}
bool MergeInfoResult::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("approval_merge_request_approvers"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("approval_merge_request_approvers"));
        if(!fieldValue.is_null())
        {
            std::vector<ApprovalMergeRequestApproversItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApprovalMergeRequestApprovers(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("author"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("author"));
        if(!fieldValue.is_null())
        {
            Author refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthor(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("created_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedAt(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("devcloud_source_branch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("devcloud_source_branch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDevcloudSourceBranch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("iid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("iid"));
        if(!fieldValue.is_null())
        {
            double refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIid(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_source_branch_exist"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_source_branch_exist"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSourceBranchExist(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("merge_request_assignee_list"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("merge_request_assignee_list"));
        if(!fieldValue.is_null())
        {
            std::vector<MergeRequestAssigneeListItem> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMergeRequestAssigneeList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("merge_request_diff"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("merge_request_diff"));
        if(!fieldValue.is_null())
        {
            MergeRequestDiff refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMergeRequestDiff(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("merge_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("merge_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMergeStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("title"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("title"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTitle(refVal);
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
    return ok;
}


std::vector<ApprovalMergeRequestApproversItem>& MergeInfoResult::getApprovalMergeRequestApprovers()
{
    return approvalMergeRequestApprovers_;
}

void MergeInfoResult::setApprovalMergeRequestApprovers(const std::vector<ApprovalMergeRequestApproversItem>& value)
{
    approvalMergeRequestApprovers_ = value;
    approvalMergeRequestApproversIsSet_ = true;
}

bool MergeInfoResult::approvalMergeRequestApproversIsSet() const
{
    return approvalMergeRequestApproversIsSet_;
}

void MergeInfoResult::unsetapprovalMergeRequestApprovers()
{
    approvalMergeRequestApproversIsSet_ = false;
}

Author MergeInfoResult::getAuthor() const
{
    return author_;
}

void MergeInfoResult::setAuthor(const Author& value)
{
    author_ = value;
    authorIsSet_ = true;
}

bool MergeInfoResult::authorIsSet() const
{
    return authorIsSet_;
}

void MergeInfoResult::unsetauthor()
{
    authorIsSet_ = false;
}

std::string MergeInfoResult::getClosedAt() const
{
    return closedAt_;
}

void MergeInfoResult::setClosedAt(const std::string& value)
{
    closedAt_ = value;
    closedAtIsSet_ = true;
}

bool MergeInfoResult::closedAtIsSet() const
{
    return closedAtIsSet_;
}

void MergeInfoResult::unsetclosedAt()
{
    closedAtIsSet_ = false;
}

std::string MergeInfoResult::getCreatedAt() const
{
    return createdAt_;
}

void MergeInfoResult::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool MergeInfoResult::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void MergeInfoResult::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string MergeInfoResult::getDescription() const
{
    return description_;
}

void MergeInfoResult::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool MergeInfoResult::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void MergeInfoResult::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string MergeInfoResult::getDevcloudSourceBranch() const
{
    return devcloudSourceBranch_;
}

void MergeInfoResult::setDevcloudSourceBranch(const std::string& value)
{
    devcloudSourceBranch_ = value;
    devcloudSourceBranchIsSet_ = true;
}

bool MergeInfoResult::devcloudSourceBranchIsSet() const
{
    return devcloudSourceBranchIsSet_;
}

void MergeInfoResult::unsetdevcloudSourceBranch()
{
    devcloudSourceBranchIsSet_ = false;
}

double MergeInfoResult::getId() const
{
    return id_;
}

void MergeInfoResult::setId(double value)
{
    id_ = value;
    idIsSet_ = true;
}

bool MergeInfoResult::idIsSet() const
{
    return idIsSet_;
}

void MergeInfoResult::unsetid()
{
    idIsSet_ = false;
}

double MergeInfoResult::getIid() const
{
    return iid_;
}

void MergeInfoResult::setIid(double value)
{
    iid_ = value;
    iidIsSet_ = true;
}

bool MergeInfoResult::iidIsSet() const
{
    return iidIsSet_;
}

void MergeInfoResult::unsetiid()
{
    iidIsSet_ = false;
}

bool MergeInfoResult::isIsSourceBranchExist() const
{
    return isSourceBranchExist_;
}

void MergeInfoResult::setIsSourceBranchExist(bool value)
{
    isSourceBranchExist_ = value;
    isSourceBranchExistIsSet_ = true;
}

bool MergeInfoResult::isSourceBranchExistIsSet() const
{
    return isSourceBranchExistIsSet_;
}

void MergeInfoResult::unsetisSourceBranchExist()
{
    isSourceBranchExistIsSet_ = false;
}

std::vector<MergeRequestAssigneeListItem>& MergeInfoResult::getMergeRequestAssigneeList()
{
    return mergeRequestAssigneeList_;
}

void MergeInfoResult::setMergeRequestAssigneeList(const std::vector<MergeRequestAssigneeListItem>& value)
{
    mergeRequestAssigneeList_ = value;
    mergeRequestAssigneeListIsSet_ = true;
}

bool MergeInfoResult::mergeRequestAssigneeListIsSet() const
{
    return mergeRequestAssigneeListIsSet_;
}

void MergeInfoResult::unsetmergeRequestAssigneeList()
{
    mergeRequestAssigneeListIsSet_ = false;
}

MergeRequestDiff MergeInfoResult::getMergeRequestDiff() const
{
    return mergeRequestDiff_;
}

void MergeInfoResult::setMergeRequestDiff(const MergeRequestDiff& value)
{
    mergeRequestDiff_ = value;
    mergeRequestDiffIsSet_ = true;
}

bool MergeInfoResult::mergeRequestDiffIsSet() const
{
    return mergeRequestDiffIsSet_;
}

void MergeInfoResult::unsetmergeRequestDiff()
{
    mergeRequestDiffIsSet_ = false;
}

std::string MergeInfoResult::getMergeStatus() const
{
    return mergeStatus_;
}

void MergeInfoResult::setMergeStatus(const std::string& value)
{
    mergeStatus_ = value;
    mergeStatusIsSet_ = true;
}

bool MergeInfoResult::mergeStatusIsSet() const
{
    return mergeStatusIsSet_;
}

void MergeInfoResult::unsetmergeStatus()
{
    mergeStatusIsSet_ = false;
}

std::string MergeInfoResult::getSourceBranch() const
{
    return sourceBranch_;
}

void MergeInfoResult::setSourceBranch(const std::string& value)
{
    sourceBranch_ = value;
    sourceBranchIsSet_ = true;
}

bool MergeInfoResult::sourceBranchIsSet() const
{
    return sourceBranchIsSet_;
}

void MergeInfoResult::unsetsourceBranch()
{
    sourceBranchIsSet_ = false;
}

std::string MergeInfoResult::getState() const
{
    return state_;
}

void MergeInfoResult::setState(const std::string& value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool MergeInfoResult::stateIsSet() const
{
    return stateIsSet_;
}

void MergeInfoResult::unsetstate()
{
    stateIsSet_ = false;
}

std::string MergeInfoResult::getTargetBranch() const
{
    return targetBranch_;
}

void MergeInfoResult::setTargetBranch(const std::string& value)
{
    targetBranch_ = value;
    targetBranchIsSet_ = true;
}

bool MergeInfoResult::targetBranchIsSet() const
{
    return targetBranchIsSet_;
}

void MergeInfoResult::unsettargetBranch()
{
    targetBranchIsSet_ = false;
}

std::string MergeInfoResult::getTitle() const
{
    return title_;
}

void MergeInfoResult::setTitle(const std::string& value)
{
    title_ = value;
    titleIsSet_ = true;
}

bool MergeInfoResult::titleIsSet() const
{
    return titleIsSet_;
}

void MergeInfoResult::unsettitle()
{
    titleIsSet_ = false;
}

std::string MergeInfoResult::getUpdatedAt() const
{
    return updatedAt_;
}

void MergeInfoResult::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool MergeInfoResult::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void MergeInfoResult::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

}
}
}
}
}


