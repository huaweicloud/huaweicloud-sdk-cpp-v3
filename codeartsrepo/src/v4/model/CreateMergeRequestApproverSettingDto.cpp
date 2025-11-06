

#include "huaweicloud/codeartsrepo/v4/model/CreateMergeRequestApproverSettingDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




CreateMergeRequestApproverSettingDto::CreateMergeRequestApproverSettingDto()
{
    target_ = "";
    targetIsSet_ = false;
    isUseApproval_ = false;
    isUseApprovalIsSet_ = false;
    approvalRequiredApprovers_ = 0;
    approvalRequiredApproversIsSet_ = false;
    approvalRequiredReviewers_ = 0;
    approvalRequiredReviewersIsSet_ = false;
    resetApprovalsOnPush_ = false;
    resetApprovalsOnPushIsSet_ = false;
    resetReviewersOnPush_ = false;
    resetReviewersOnPushIsSet_ = false;
    approversFromProject_ = false;
    approversFromProjectIsSet_ = false;
    appendReviewerIdsIsSet_ = false;
    appendApproverIdsIsSet_ = false;
    onlyMergeWhenPipelinePass_ = false;
    onlyMergeWhenPipelinePassIsSet_ = false;
    assigneeIdsIsSet_ = false;
    approverIdsIsSet_ = false;
    reviewerIdsIsSet_ = false;
}

CreateMergeRequestApproverSettingDto::~CreateMergeRequestApproverSettingDto() = default;

void CreateMergeRequestApproverSettingDto::validate()
{
}

web::json::value CreateMergeRequestApproverSettingDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(targetIsSet_) {
        val[utility::conversions::to_string_t("target")] = ModelBase::toJson(target_);
    }
    if(isUseApprovalIsSet_) {
        val[utility::conversions::to_string_t("is_use_approval")] = ModelBase::toJson(isUseApproval_);
    }
    if(approvalRequiredApproversIsSet_) {
        val[utility::conversions::to_string_t("approval_required_approvers")] = ModelBase::toJson(approvalRequiredApprovers_);
    }
    if(approvalRequiredReviewersIsSet_) {
        val[utility::conversions::to_string_t("approval_required_reviewers")] = ModelBase::toJson(approvalRequiredReviewers_);
    }
    if(resetApprovalsOnPushIsSet_) {
        val[utility::conversions::to_string_t("reset_approvals_on_push")] = ModelBase::toJson(resetApprovalsOnPush_);
    }
    if(resetReviewersOnPushIsSet_) {
        val[utility::conversions::to_string_t("reset_reviewers_on_push")] = ModelBase::toJson(resetReviewersOnPush_);
    }
    if(approversFromProjectIsSet_) {
        val[utility::conversions::to_string_t("approvers_from_project")] = ModelBase::toJson(approversFromProject_);
    }
    if(appendReviewerIdsIsSet_) {
        val[utility::conversions::to_string_t("append_reviewer_ids")] = ModelBase::toJson(appendReviewerIds_);
    }
    if(appendApproverIdsIsSet_) {
        val[utility::conversions::to_string_t("append_approver_ids")] = ModelBase::toJson(appendApproverIds_);
    }
    if(onlyMergeWhenPipelinePassIsSet_) {
        val[utility::conversions::to_string_t("only_merge_when_pipeline_pass")] = ModelBase::toJson(onlyMergeWhenPipelinePass_);
    }
    if(assigneeIdsIsSet_) {
        val[utility::conversions::to_string_t("assignee_ids")] = ModelBase::toJson(assigneeIds_);
    }
    if(approverIdsIsSet_) {
        val[utility::conversions::to_string_t("approver_ids")] = ModelBase::toJson(approverIds_);
    }
    if(reviewerIdsIsSet_) {
        val[utility::conversions::to_string_t("reviewer_ids")] = ModelBase::toJson(reviewerIds_);
    }

    return val;
}
bool CreateMergeRequestApproverSettingDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("target"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTarget(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_use_approval"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_use_approval"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsUseApproval(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("approval_required_approvers"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("approval_required_approvers"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApprovalRequiredApprovers(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("approval_required_reviewers"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("approval_required_reviewers"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApprovalRequiredReviewers(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reset_approvals_on_push"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reset_approvals_on_push"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResetApprovalsOnPush(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reset_reviewers_on_push"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reset_reviewers_on_push"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResetReviewersOnPush(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("approvers_from_project"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("approvers_from_project"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApproversFromProject(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("append_reviewer_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("append_reviewer_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppendReviewerIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("append_approver_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("append_approver_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppendApproverIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("only_merge_when_pipeline_pass"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("only_merge_when_pipeline_pass"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOnlyMergeWhenPipelinePass(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("assignee_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("assignee_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssigneeIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("approver_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("approver_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApproverIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reviewer_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reviewer_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<int32_t> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReviewerIds(refVal);
        }
    }
    return ok;
}


std::string CreateMergeRequestApproverSettingDto::getTarget() const
{
    return target_;
}

void CreateMergeRequestApproverSettingDto::setTarget(const std::string& value)
{
    target_ = value;
    targetIsSet_ = true;
}

bool CreateMergeRequestApproverSettingDto::targetIsSet() const
{
    return targetIsSet_;
}

void CreateMergeRequestApproverSettingDto::unsettarget()
{
    targetIsSet_ = false;
}

bool CreateMergeRequestApproverSettingDto::isIsUseApproval() const
{
    return isUseApproval_;
}

void CreateMergeRequestApproverSettingDto::setIsUseApproval(bool value)
{
    isUseApproval_ = value;
    isUseApprovalIsSet_ = true;
}

bool CreateMergeRequestApproverSettingDto::isUseApprovalIsSet() const
{
    return isUseApprovalIsSet_;
}

void CreateMergeRequestApproverSettingDto::unsetisUseApproval()
{
    isUseApprovalIsSet_ = false;
}

int32_t CreateMergeRequestApproverSettingDto::getApprovalRequiredApprovers() const
{
    return approvalRequiredApprovers_;
}

void CreateMergeRequestApproverSettingDto::setApprovalRequiredApprovers(int32_t value)
{
    approvalRequiredApprovers_ = value;
    approvalRequiredApproversIsSet_ = true;
}

bool CreateMergeRequestApproverSettingDto::approvalRequiredApproversIsSet() const
{
    return approvalRequiredApproversIsSet_;
}

void CreateMergeRequestApproverSettingDto::unsetapprovalRequiredApprovers()
{
    approvalRequiredApproversIsSet_ = false;
}

int32_t CreateMergeRequestApproverSettingDto::getApprovalRequiredReviewers() const
{
    return approvalRequiredReviewers_;
}

void CreateMergeRequestApproverSettingDto::setApprovalRequiredReviewers(int32_t value)
{
    approvalRequiredReviewers_ = value;
    approvalRequiredReviewersIsSet_ = true;
}

bool CreateMergeRequestApproverSettingDto::approvalRequiredReviewersIsSet() const
{
    return approvalRequiredReviewersIsSet_;
}

void CreateMergeRequestApproverSettingDto::unsetapprovalRequiredReviewers()
{
    approvalRequiredReviewersIsSet_ = false;
}

bool CreateMergeRequestApproverSettingDto::isResetApprovalsOnPush() const
{
    return resetApprovalsOnPush_;
}

void CreateMergeRequestApproverSettingDto::setResetApprovalsOnPush(bool value)
{
    resetApprovalsOnPush_ = value;
    resetApprovalsOnPushIsSet_ = true;
}

bool CreateMergeRequestApproverSettingDto::resetApprovalsOnPushIsSet() const
{
    return resetApprovalsOnPushIsSet_;
}

void CreateMergeRequestApproverSettingDto::unsetresetApprovalsOnPush()
{
    resetApprovalsOnPushIsSet_ = false;
}

bool CreateMergeRequestApproverSettingDto::isResetReviewersOnPush() const
{
    return resetReviewersOnPush_;
}

void CreateMergeRequestApproverSettingDto::setResetReviewersOnPush(bool value)
{
    resetReviewersOnPush_ = value;
    resetReviewersOnPushIsSet_ = true;
}

bool CreateMergeRequestApproverSettingDto::resetReviewersOnPushIsSet() const
{
    return resetReviewersOnPushIsSet_;
}

void CreateMergeRequestApproverSettingDto::unsetresetReviewersOnPush()
{
    resetReviewersOnPushIsSet_ = false;
}

bool CreateMergeRequestApproverSettingDto::isApproversFromProject() const
{
    return approversFromProject_;
}

void CreateMergeRequestApproverSettingDto::setApproversFromProject(bool value)
{
    approversFromProject_ = value;
    approversFromProjectIsSet_ = true;
}

bool CreateMergeRequestApproverSettingDto::approversFromProjectIsSet() const
{
    return approversFromProjectIsSet_;
}

void CreateMergeRequestApproverSettingDto::unsetapproversFromProject()
{
    approversFromProjectIsSet_ = false;
}

std::vector<int32_t>& CreateMergeRequestApproverSettingDto::getAppendReviewerIds()
{
    return appendReviewerIds_;
}

void CreateMergeRequestApproverSettingDto::setAppendReviewerIds(std::vector<int32_t> value)
{
    appendReviewerIds_ = value;
    appendReviewerIdsIsSet_ = true;
}

bool CreateMergeRequestApproverSettingDto::appendReviewerIdsIsSet() const
{
    return appendReviewerIdsIsSet_;
}

void CreateMergeRequestApproverSettingDto::unsetappendReviewerIds()
{
    appendReviewerIdsIsSet_ = false;
}

std::vector<int32_t>& CreateMergeRequestApproverSettingDto::getAppendApproverIds()
{
    return appendApproverIds_;
}

void CreateMergeRequestApproverSettingDto::setAppendApproverIds(std::vector<int32_t> value)
{
    appendApproverIds_ = value;
    appendApproverIdsIsSet_ = true;
}

bool CreateMergeRequestApproverSettingDto::appendApproverIdsIsSet() const
{
    return appendApproverIdsIsSet_;
}

void CreateMergeRequestApproverSettingDto::unsetappendApproverIds()
{
    appendApproverIdsIsSet_ = false;
}

bool CreateMergeRequestApproverSettingDto::isOnlyMergeWhenPipelinePass() const
{
    return onlyMergeWhenPipelinePass_;
}

void CreateMergeRequestApproverSettingDto::setOnlyMergeWhenPipelinePass(bool value)
{
    onlyMergeWhenPipelinePass_ = value;
    onlyMergeWhenPipelinePassIsSet_ = true;
}

bool CreateMergeRequestApproverSettingDto::onlyMergeWhenPipelinePassIsSet() const
{
    return onlyMergeWhenPipelinePassIsSet_;
}

void CreateMergeRequestApproverSettingDto::unsetonlyMergeWhenPipelinePass()
{
    onlyMergeWhenPipelinePassIsSet_ = false;
}

std::vector<int32_t>& CreateMergeRequestApproverSettingDto::getAssigneeIds()
{
    return assigneeIds_;
}

void CreateMergeRequestApproverSettingDto::setAssigneeIds(std::vector<int32_t> value)
{
    assigneeIds_ = value;
    assigneeIdsIsSet_ = true;
}

bool CreateMergeRequestApproverSettingDto::assigneeIdsIsSet() const
{
    return assigneeIdsIsSet_;
}

void CreateMergeRequestApproverSettingDto::unsetassigneeIds()
{
    assigneeIdsIsSet_ = false;
}

std::vector<int32_t>& CreateMergeRequestApproverSettingDto::getApproverIds()
{
    return approverIds_;
}

void CreateMergeRequestApproverSettingDto::setApproverIds(std::vector<int32_t> value)
{
    approverIds_ = value;
    approverIdsIsSet_ = true;
}

bool CreateMergeRequestApproverSettingDto::approverIdsIsSet() const
{
    return approverIdsIsSet_;
}

void CreateMergeRequestApproverSettingDto::unsetapproverIds()
{
    approverIdsIsSet_ = false;
}

std::vector<int32_t>& CreateMergeRequestApproverSettingDto::getReviewerIds()
{
    return reviewerIds_;
}

void CreateMergeRequestApproverSettingDto::setReviewerIds(std::vector<int32_t> value)
{
    reviewerIds_ = value;
    reviewerIdsIsSet_ = true;
}

bool CreateMergeRequestApproverSettingDto::reviewerIdsIsSet() const
{
    return reviewerIdsIsSet_;
}

void CreateMergeRequestApproverSettingDto::unsetreviewerIds()
{
    reviewerIdsIsSet_ = false;
}

}
}
}
}
}


