

#include "huaweicloud/codeartsrepo/v4/model/UpdateGroupMergeRequestApproverSettingResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




UpdateGroupMergeRequestApproverSettingResponse::UpdateGroupMergeRequestApproverSettingResponse()
{
    id_ = "";
    idIsSet_ = false;
    target_ = "";
    targetIsSet_ = false;
    targetType_ = "";
    targetTypeIsSet_ = false;
    isUseApproval_ = false;
    isUseApprovalIsSet_ = false;
    approvalRequiredReviewers_ = 0;
    approvalRequiredReviewersIsSet_ = false;
    approvalRequiredApprovers_ = 0;
    approvalRequiredApproversIsSet_ = false;
    resetApprovalsOnPush_ = false;
    resetApprovalsOnPushIsSet_ = false;
    resetReviewersOnPush_ = false;
    resetReviewersOnPushIsSet_ = false;
    approversFromProject_ = false;
    approversFromProjectIsSet_ = false;
    appendReviewerIdsIsSet_ = false;
    appendReviewersIsSet_ = false;
    appendApproverIdsIsSet_ = false;
    appendApproversIsSet_ = false;
    onlyMergeWhenPipelinePass_ = false;
    onlyMergeWhenPipelinePassIsSet_ = false;
    assigneeIdsIsSet_ = false;
    assigneesIsSet_ = false;
    approverIdsIsSet_ = false;
    approversIsSet_ = false;
    reviewerIdsIsSet_ = false;
    reviewersIsSet_ = false;
}

UpdateGroupMergeRequestApproverSettingResponse::~UpdateGroupMergeRequestApproverSettingResponse() = default;

void UpdateGroupMergeRequestApproverSettingResponse::validate()
{
}

web::json::value UpdateGroupMergeRequestApproverSettingResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(targetIsSet_) {
        val[utility::conversions::to_string_t("target")] = ModelBase::toJson(target_);
    }
    if(targetTypeIsSet_) {
        val[utility::conversions::to_string_t("target_type")] = ModelBase::toJson(targetType_);
    }
    if(isUseApprovalIsSet_) {
        val[utility::conversions::to_string_t("is_use_approval")] = ModelBase::toJson(isUseApproval_);
    }
    if(approvalRequiredReviewersIsSet_) {
        val[utility::conversions::to_string_t("approval_required_reviewers")] = ModelBase::toJson(approvalRequiredReviewers_);
    }
    if(approvalRequiredApproversIsSet_) {
        val[utility::conversions::to_string_t("approval_required_approvers")] = ModelBase::toJson(approvalRequiredApprovers_);
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
    if(appendReviewersIsSet_) {
        val[utility::conversions::to_string_t("append_reviewers")] = ModelBase::toJson(appendReviewers_);
    }
    if(appendApproverIdsIsSet_) {
        val[utility::conversions::to_string_t("append_approver_ids")] = ModelBase::toJson(appendApproverIds_);
    }
    if(appendApproversIsSet_) {
        val[utility::conversions::to_string_t("append_approvers")] = ModelBase::toJson(appendApprovers_);
    }
    if(onlyMergeWhenPipelinePassIsSet_) {
        val[utility::conversions::to_string_t("only_merge_when_pipeline_pass")] = ModelBase::toJson(onlyMergeWhenPipelinePass_);
    }
    if(assigneeIdsIsSet_) {
        val[utility::conversions::to_string_t("assignee_ids")] = ModelBase::toJson(assigneeIds_);
    }
    if(assigneesIsSet_) {
        val[utility::conversions::to_string_t("assignees")] = ModelBase::toJson(assignees_);
    }
    if(approverIdsIsSet_) {
        val[utility::conversions::to_string_t("approver_ids")] = ModelBase::toJson(approverIds_);
    }
    if(approversIsSet_) {
        val[utility::conversions::to_string_t("approvers")] = ModelBase::toJson(approvers_);
    }
    if(reviewerIdsIsSet_) {
        val[utility::conversions::to_string_t("reviewer_ids")] = ModelBase::toJson(reviewerIds_);
    }
    if(reviewersIsSet_) {
        val[utility::conversions::to_string_t("reviewers")] = ModelBase::toJson(reviewers_);
    }

    return val;
}
bool UpdateGroupMergeRequestApproverSettingResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTarget(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("target_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("target_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTargetType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("approval_required_reviewers"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("approval_required_reviewers"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApprovalRequiredReviewers(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("append_reviewers"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("append_reviewers"));
        if(!fieldValue.is_null())
        {
            std::vector<UserBasicDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppendReviewers(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("append_approvers"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("append_approvers"));
        if(!fieldValue.is_null())
        {
            std::vector<UserBasicDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAppendApprovers(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("assignees"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("assignees"));
        if(!fieldValue.is_null())
        {
            std::vector<UserBasicDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAssignees(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("approvers"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("approvers"));
        if(!fieldValue.is_null())
        {
            std::vector<UserBasicDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApprovers(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("reviewers"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reviewers"));
        if(!fieldValue.is_null())
        {
            std::vector<UserBasicDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReviewers(refVal);
        }
    }
    return ok;
}


std::string UpdateGroupMergeRequestApproverSettingResponse::getId() const
{
    return id_;
}

void UpdateGroupMergeRequestApproverSettingResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdateGroupMergeRequestApproverSettingResponse::idIsSet() const
{
    return idIsSet_;
}

void UpdateGroupMergeRequestApproverSettingResponse::unsetid()
{
    idIsSet_ = false;
}

std::string UpdateGroupMergeRequestApproverSettingResponse::getTarget() const
{
    return target_;
}

void UpdateGroupMergeRequestApproverSettingResponse::setTarget(const std::string& value)
{
    target_ = value;
    targetIsSet_ = true;
}

bool UpdateGroupMergeRequestApproverSettingResponse::targetIsSet() const
{
    return targetIsSet_;
}

void UpdateGroupMergeRequestApproverSettingResponse::unsettarget()
{
    targetIsSet_ = false;
}

std::string UpdateGroupMergeRequestApproverSettingResponse::getTargetType() const
{
    return targetType_;
}

void UpdateGroupMergeRequestApproverSettingResponse::setTargetType(const std::string& value)
{
    targetType_ = value;
    targetTypeIsSet_ = true;
}

bool UpdateGroupMergeRequestApproverSettingResponse::targetTypeIsSet() const
{
    return targetTypeIsSet_;
}

void UpdateGroupMergeRequestApproverSettingResponse::unsettargetType()
{
    targetTypeIsSet_ = false;
}

bool UpdateGroupMergeRequestApproverSettingResponse::isIsUseApproval() const
{
    return isUseApproval_;
}

void UpdateGroupMergeRequestApproverSettingResponse::setIsUseApproval(bool value)
{
    isUseApproval_ = value;
    isUseApprovalIsSet_ = true;
}

bool UpdateGroupMergeRequestApproverSettingResponse::isUseApprovalIsSet() const
{
    return isUseApprovalIsSet_;
}

void UpdateGroupMergeRequestApproverSettingResponse::unsetisUseApproval()
{
    isUseApprovalIsSet_ = false;
}

int32_t UpdateGroupMergeRequestApproverSettingResponse::getApprovalRequiredReviewers() const
{
    return approvalRequiredReviewers_;
}

void UpdateGroupMergeRequestApproverSettingResponse::setApprovalRequiredReviewers(int32_t value)
{
    approvalRequiredReviewers_ = value;
    approvalRequiredReviewersIsSet_ = true;
}

bool UpdateGroupMergeRequestApproverSettingResponse::approvalRequiredReviewersIsSet() const
{
    return approvalRequiredReviewersIsSet_;
}

void UpdateGroupMergeRequestApproverSettingResponse::unsetapprovalRequiredReviewers()
{
    approvalRequiredReviewersIsSet_ = false;
}

int32_t UpdateGroupMergeRequestApproverSettingResponse::getApprovalRequiredApprovers() const
{
    return approvalRequiredApprovers_;
}

void UpdateGroupMergeRequestApproverSettingResponse::setApprovalRequiredApprovers(int32_t value)
{
    approvalRequiredApprovers_ = value;
    approvalRequiredApproversIsSet_ = true;
}

bool UpdateGroupMergeRequestApproverSettingResponse::approvalRequiredApproversIsSet() const
{
    return approvalRequiredApproversIsSet_;
}

void UpdateGroupMergeRequestApproverSettingResponse::unsetapprovalRequiredApprovers()
{
    approvalRequiredApproversIsSet_ = false;
}

bool UpdateGroupMergeRequestApproverSettingResponse::isResetApprovalsOnPush() const
{
    return resetApprovalsOnPush_;
}

void UpdateGroupMergeRequestApproverSettingResponse::setResetApprovalsOnPush(bool value)
{
    resetApprovalsOnPush_ = value;
    resetApprovalsOnPushIsSet_ = true;
}

bool UpdateGroupMergeRequestApproverSettingResponse::resetApprovalsOnPushIsSet() const
{
    return resetApprovalsOnPushIsSet_;
}

void UpdateGroupMergeRequestApproverSettingResponse::unsetresetApprovalsOnPush()
{
    resetApprovalsOnPushIsSet_ = false;
}

bool UpdateGroupMergeRequestApproverSettingResponse::isResetReviewersOnPush() const
{
    return resetReviewersOnPush_;
}

void UpdateGroupMergeRequestApproverSettingResponse::setResetReviewersOnPush(bool value)
{
    resetReviewersOnPush_ = value;
    resetReviewersOnPushIsSet_ = true;
}

bool UpdateGroupMergeRequestApproverSettingResponse::resetReviewersOnPushIsSet() const
{
    return resetReviewersOnPushIsSet_;
}

void UpdateGroupMergeRequestApproverSettingResponse::unsetresetReviewersOnPush()
{
    resetReviewersOnPushIsSet_ = false;
}

bool UpdateGroupMergeRequestApproverSettingResponse::isApproversFromProject() const
{
    return approversFromProject_;
}

void UpdateGroupMergeRequestApproverSettingResponse::setApproversFromProject(bool value)
{
    approversFromProject_ = value;
    approversFromProjectIsSet_ = true;
}

bool UpdateGroupMergeRequestApproverSettingResponse::approversFromProjectIsSet() const
{
    return approversFromProjectIsSet_;
}

void UpdateGroupMergeRequestApproverSettingResponse::unsetapproversFromProject()
{
    approversFromProjectIsSet_ = false;
}

std::vector<int32_t>& UpdateGroupMergeRequestApproverSettingResponse::getAppendReviewerIds()
{
    return appendReviewerIds_;
}

void UpdateGroupMergeRequestApproverSettingResponse::setAppendReviewerIds(std::vector<int32_t> value)
{
    appendReviewerIds_ = value;
    appendReviewerIdsIsSet_ = true;
}

bool UpdateGroupMergeRequestApproverSettingResponse::appendReviewerIdsIsSet() const
{
    return appendReviewerIdsIsSet_;
}

void UpdateGroupMergeRequestApproverSettingResponse::unsetappendReviewerIds()
{
    appendReviewerIdsIsSet_ = false;
}

std::vector<UserBasicDto>& UpdateGroupMergeRequestApproverSettingResponse::getAppendReviewers()
{
    return appendReviewers_;
}

void UpdateGroupMergeRequestApproverSettingResponse::setAppendReviewers(const std::vector<UserBasicDto>& value)
{
    appendReviewers_ = value;
    appendReviewersIsSet_ = true;
}

bool UpdateGroupMergeRequestApproverSettingResponse::appendReviewersIsSet() const
{
    return appendReviewersIsSet_;
}

void UpdateGroupMergeRequestApproverSettingResponse::unsetappendReviewers()
{
    appendReviewersIsSet_ = false;
}

std::vector<int32_t>& UpdateGroupMergeRequestApproverSettingResponse::getAppendApproverIds()
{
    return appendApproverIds_;
}

void UpdateGroupMergeRequestApproverSettingResponse::setAppendApproverIds(std::vector<int32_t> value)
{
    appendApproverIds_ = value;
    appendApproverIdsIsSet_ = true;
}

bool UpdateGroupMergeRequestApproverSettingResponse::appendApproverIdsIsSet() const
{
    return appendApproverIdsIsSet_;
}

void UpdateGroupMergeRequestApproverSettingResponse::unsetappendApproverIds()
{
    appendApproverIdsIsSet_ = false;
}

std::vector<UserBasicDto>& UpdateGroupMergeRequestApproverSettingResponse::getAppendApprovers()
{
    return appendApprovers_;
}

void UpdateGroupMergeRequestApproverSettingResponse::setAppendApprovers(const std::vector<UserBasicDto>& value)
{
    appendApprovers_ = value;
    appendApproversIsSet_ = true;
}

bool UpdateGroupMergeRequestApproverSettingResponse::appendApproversIsSet() const
{
    return appendApproversIsSet_;
}

void UpdateGroupMergeRequestApproverSettingResponse::unsetappendApprovers()
{
    appendApproversIsSet_ = false;
}

bool UpdateGroupMergeRequestApproverSettingResponse::isOnlyMergeWhenPipelinePass() const
{
    return onlyMergeWhenPipelinePass_;
}

void UpdateGroupMergeRequestApproverSettingResponse::setOnlyMergeWhenPipelinePass(bool value)
{
    onlyMergeWhenPipelinePass_ = value;
    onlyMergeWhenPipelinePassIsSet_ = true;
}

bool UpdateGroupMergeRequestApproverSettingResponse::onlyMergeWhenPipelinePassIsSet() const
{
    return onlyMergeWhenPipelinePassIsSet_;
}

void UpdateGroupMergeRequestApproverSettingResponse::unsetonlyMergeWhenPipelinePass()
{
    onlyMergeWhenPipelinePassIsSet_ = false;
}

std::vector<int32_t>& UpdateGroupMergeRequestApproverSettingResponse::getAssigneeIds()
{
    return assigneeIds_;
}

void UpdateGroupMergeRequestApproverSettingResponse::setAssigneeIds(std::vector<int32_t> value)
{
    assigneeIds_ = value;
    assigneeIdsIsSet_ = true;
}

bool UpdateGroupMergeRequestApproverSettingResponse::assigneeIdsIsSet() const
{
    return assigneeIdsIsSet_;
}

void UpdateGroupMergeRequestApproverSettingResponse::unsetassigneeIds()
{
    assigneeIdsIsSet_ = false;
}

std::vector<UserBasicDto>& UpdateGroupMergeRequestApproverSettingResponse::getAssignees()
{
    return assignees_;
}

void UpdateGroupMergeRequestApproverSettingResponse::setAssignees(const std::vector<UserBasicDto>& value)
{
    assignees_ = value;
    assigneesIsSet_ = true;
}

bool UpdateGroupMergeRequestApproverSettingResponse::assigneesIsSet() const
{
    return assigneesIsSet_;
}

void UpdateGroupMergeRequestApproverSettingResponse::unsetassignees()
{
    assigneesIsSet_ = false;
}

std::vector<int32_t>& UpdateGroupMergeRequestApproverSettingResponse::getApproverIds()
{
    return approverIds_;
}

void UpdateGroupMergeRequestApproverSettingResponse::setApproverIds(std::vector<int32_t> value)
{
    approverIds_ = value;
    approverIdsIsSet_ = true;
}

bool UpdateGroupMergeRequestApproverSettingResponse::approverIdsIsSet() const
{
    return approverIdsIsSet_;
}

void UpdateGroupMergeRequestApproverSettingResponse::unsetapproverIds()
{
    approverIdsIsSet_ = false;
}

std::vector<UserBasicDto>& UpdateGroupMergeRequestApproverSettingResponse::getApprovers()
{
    return approvers_;
}

void UpdateGroupMergeRequestApproverSettingResponse::setApprovers(const std::vector<UserBasicDto>& value)
{
    approvers_ = value;
    approversIsSet_ = true;
}

bool UpdateGroupMergeRequestApproverSettingResponse::approversIsSet() const
{
    return approversIsSet_;
}

void UpdateGroupMergeRequestApproverSettingResponse::unsetapprovers()
{
    approversIsSet_ = false;
}

std::vector<int32_t>& UpdateGroupMergeRequestApproverSettingResponse::getReviewerIds()
{
    return reviewerIds_;
}

void UpdateGroupMergeRequestApproverSettingResponse::setReviewerIds(std::vector<int32_t> value)
{
    reviewerIds_ = value;
    reviewerIdsIsSet_ = true;
}

bool UpdateGroupMergeRequestApproverSettingResponse::reviewerIdsIsSet() const
{
    return reviewerIdsIsSet_;
}

void UpdateGroupMergeRequestApproverSettingResponse::unsetreviewerIds()
{
    reviewerIdsIsSet_ = false;
}

std::vector<UserBasicDto>& UpdateGroupMergeRequestApproverSettingResponse::getReviewers()
{
    return reviewers_;
}

void UpdateGroupMergeRequestApproverSettingResponse::setReviewers(const std::vector<UserBasicDto>& value)
{
    reviewers_ = value;
    reviewersIsSet_ = true;
}

bool UpdateGroupMergeRequestApproverSettingResponse::reviewersIsSet() const
{
    return reviewersIsSet_;
}

void UpdateGroupMergeRequestApproverSettingResponse::unsetreviewers()
{
    reviewersIsSet_ = false;
}

}
}
}
}
}


