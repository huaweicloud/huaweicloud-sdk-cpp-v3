

#include "huaweicloud/codeartsrepo/v4/model/UpdateMergeRequestApproverSettingResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




UpdateMergeRequestApproverSettingResponse::UpdateMergeRequestApproverSettingResponse()
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

UpdateMergeRequestApproverSettingResponse::~UpdateMergeRequestApproverSettingResponse() = default;

void UpdateMergeRequestApproverSettingResponse::validate()
{
}

web::json::value UpdateMergeRequestApproverSettingResponse::toJson() const
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
bool UpdateMergeRequestApproverSettingResponse::fromJson(const web::json::value& val)
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


std::string UpdateMergeRequestApproverSettingResponse::getId() const
{
    return id_;
}

void UpdateMergeRequestApproverSettingResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UpdateMergeRequestApproverSettingResponse::idIsSet() const
{
    return idIsSet_;
}

void UpdateMergeRequestApproverSettingResponse::unsetid()
{
    idIsSet_ = false;
}

std::string UpdateMergeRequestApproverSettingResponse::getTarget() const
{
    return target_;
}

void UpdateMergeRequestApproverSettingResponse::setTarget(const std::string& value)
{
    target_ = value;
    targetIsSet_ = true;
}

bool UpdateMergeRequestApproverSettingResponse::targetIsSet() const
{
    return targetIsSet_;
}

void UpdateMergeRequestApproverSettingResponse::unsettarget()
{
    targetIsSet_ = false;
}

std::string UpdateMergeRequestApproverSettingResponse::getTargetType() const
{
    return targetType_;
}

void UpdateMergeRequestApproverSettingResponse::setTargetType(const std::string& value)
{
    targetType_ = value;
    targetTypeIsSet_ = true;
}

bool UpdateMergeRequestApproverSettingResponse::targetTypeIsSet() const
{
    return targetTypeIsSet_;
}

void UpdateMergeRequestApproverSettingResponse::unsettargetType()
{
    targetTypeIsSet_ = false;
}

bool UpdateMergeRequestApproverSettingResponse::isIsUseApproval() const
{
    return isUseApproval_;
}

void UpdateMergeRequestApproverSettingResponse::setIsUseApproval(bool value)
{
    isUseApproval_ = value;
    isUseApprovalIsSet_ = true;
}

bool UpdateMergeRequestApproverSettingResponse::isUseApprovalIsSet() const
{
    return isUseApprovalIsSet_;
}

void UpdateMergeRequestApproverSettingResponse::unsetisUseApproval()
{
    isUseApprovalIsSet_ = false;
}

int32_t UpdateMergeRequestApproverSettingResponse::getApprovalRequiredReviewers() const
{
    return approvalRequiredReviewers_;
}

void UpdateMergeRequestApproverSettingResponse::setApprovalRequiredReviewers(int32_t value)
{
    approvalRequiredReviewers_ = value;
    approvalRequiredReviewersIsSet_ = true;
}

bool UpdateMergeRequestApproverSettingResponse::approvalRequiredReviewersIsSet() const
{
    return approvalRequiredReviewersIsSet_;
}

void UpdateMergeRequestApproverSettingResponse::unsetapprovalRequiredReviewers()
{
    approvalRequiredReviewersIsSet_ = false;
}

int32_t UpdateMergeRequestApproverSettingResponse::getApprovalRequiredApprovers() const
{
    return approvalRequiredApprovers_;
}

void UpdateMergeRequestApproverSettingResponse::setApprovalRequiredApprovers(int32_t value)
{
    approvalRequiredApprovers_ = value;
    approvalRequiredApproversIsSet_ = true;
}

bool UpdateMergeRequestApproverSettingResponse::approvalRequiredApproversIsSet() const
{
    return approvalRequiredApproversIsSet_;
}

void UpdateMergeRequestApproverSettingResponse::unsetapprovalRequiredApprovers()
{
    approvalRequiredApproversIsSet_ = false;
}

bool UpdateMergeRequestApproverSettingResponse::isResetApprovalsOnPush() const
{
    return resetApprovalsOnPush_;
}

void UpdateMergeRequestApproverSettingResponse::setResetApprovalsOnPush(bool value)
{
    resetApprovalsOnPush_ = value;
    resetApprovalsOnPushIsSet_ = true;
}

bool UpdateMergeRequestApproverSettingResponse::resetApprovalsOnPushIsSet() const
{
    return resetApprovalsOnPushIsSet_;
}

void UpdateMergeRequestApproverSettingResponse::unsetresetApprovalsOnPush()
{
    resetApprovalsOnPushIsSet_ = false;
}

bool UpdateMergeRequestApproverSettingResponse::isResetReviewersOnPush() const
{
    return resetReviewersOnPush_;
}

void UpdateMergeRequestApproverSettingResponse::setResetReviewersOnPush(bool value)
{
    resetReviewersOnPush_ = value;
    resetReviewersOnPushIsSet_ = true;
}

bool UpdateMergeRequestApproverSettingResponse::resetReviewersOnPushIsSet() const
{
    return resetReviewersOnPushIsSet_;
}

void UpdateMergeRequestApproverSettingResponse::unsetresetReviewersOnPush()
{
    resetReviewersOnPushIsSet_ = false;
}

bool UpdateMergeRequestApproverSettingResponse::isApproversFromProject() const
{
    return approversFromProject_;
}

void UpdateMergeRequestApproverSettingResponse::setApproversFromProject(bool value)
{
    approversFromProject_ = value;
    approversFromProjectIsSet_ = true;
}

bool UpdateMergeRequestApproverSettingResponse::approversFromProjectIsSet() const
{
    return approversFromProjectIsSet_;
}

void UpdateMergeRequestApproverSettingResponse::unsetapproversFromProject()
{
    approversFromProjectIsSet_ = false;
}

std::vector<int32_t>& UpdateMergeRequestApproverSettingResponse::getAppendReviewerIds()
{
    return appendReviewerIds_;
}

void UpdateMergeRequestApproverSettingResponse::setAppendReviewerIds(std::vector<int32_t> value)
{
    appendReviewerIds_ = value;
    appendReviewerIdsIsSet_ = true;
}

bool UpdateMergeRequestApproverSettingResponse::appendReviewerIdsIsSet() const
{
    return appendReviewerIdsIsSet_;
}

void UpdateMergeRequestApproverSettingResponse::unsetappendReviewerIds()
{
    appendReviewerIdsIsSet_ = false;
}

std::vector<UserBasicDto>& UpdateMergeRequestApproverSettingResponse::getAppendReviewers()
{
    return appendReviewers_;
}

void UpdateMergeRequestApproverSettingResponse::setAppendReviewers(const std::vector<UserBasicDto>& value)
{
    appendReviewers_ = value;
    appendReviewersIsSet_ = true;
}

bool UpdateMergeRequestApproverSettingResponse::appendReviewersIsSet() const
{
    return appendReviewersIsSet_;
}

void UpdateMergeRequestApproverSettingResponse::unsetappendReviewers()
{
    appendReviewersIsSet_ = false;
}

std::vector<int32_t>& UpdateMergeRequestApproverSettingResponse::getAppendApproverIds()
{
    return appendApproverIds_;
}

void UpdateMergeRequestApproverSettingResponse::setAppendApproverIds(std::vector<int32_t> value)
{
    appendApproverIds_ = value;
    appendApproverIdsIsSet_ = true;
}

bool UpdateMergeRequestApproverSettingResponse::appendApproverIdsIsSet() const
{
    return appendApproverIdsIsSet_;
}

void UpdateMergeRequestApproverSettingResponse::unsetappendApproverIds()
{
    appendApproverIdsIsSet_ = false;
}

std::vector<UserBasicDto>& UpdateMergeRequestApproverSettingResponse::getAppendApprovers()
{
    return appendApprovers_;
}

void UpdateMergeRequestApproverSettingResponse::setAppendApprovers(const std::vector<UserBasicDto>& value)
{
    appendApprovers_ = value;
    appendApproversIsSet_ = true;
}

bool UpdateMergeRequestApproverSettingResponse::appendApproversIsSet() const
{
    return appendApproversIsSet_;
}

void UpdateMergeRequestApproverSettingResponse::unsetappendApprovers()
{
    appendApproversIsSet_ = false;
}

bool UpdateMergeRequestApproverSettingResponse::isOnlyMergeWhenPipelinePass() const
{
    return onlyMergeWhenPipelinePass_;
}

void UpdateMergeRequestApproverSettingResponse::setOnlyMergeWhenPipelinePass(bool value)
{
    onlyMergeWhenPipelinePass_ = value;
    onlyMergeWhenPipelinePassIsSet_ = true;
}

bool UpdateMergeRequestApproverSettingResponse::onlyMergeWhenPipelinePassIsSet() const
{
    return onlyMergeWhenPipelinePassIsSet_;
}

void UpdateMergeRequestApproverSettingResponse::unsetonlyMergeWhenPipelinePass()
{
    onlyMergeWhenPipelinePassIsSet_ = false;
}

std::vector<int32_t>& UpdateMergeRequestApproverSettingResponse::getAssigneeIds()
{
    return assigneeIds_;
}

void UpdateMergeRequestApproverSettingResponse::setAssigneeIds(std::vector<int32_t> value)
{
    assigneeIds_ = value;
    assigneeIdsIsSet_ = true;
}

bool UpdateMergeRequestApproverSettingResponse::assigneeIdsIsSet() const
{
    return assigneeIdsIsSet_;
}

void UpdateMergeRequestApproverSettingResponse::unsetassigneeIds()
{
    assigneeIdsIsSet_ = false;
}

std::vector<UserBasicDto>& UpdateMergeRequestApproverSettingResponse::getAssignees()
{
    return assignees_;
}

void UpdateMergeRequestApproverSettingResponse::setAssignees(const std::vector<UserBasicDto>& value)
{
    assignees_ = value;
    assigneesIsSet_ = true;
}

bool UpdateMergeRequestApproverSettingResponse::assigneesIsSet() const
{
    return assigneesIsSet_;
}

void UpdateMergeRequestApproverSettingResponse::unsetassignees()
{
    assigneesIsSet_ = false;
}

std::vector<int32_t>& UpdateMergeRequestApproverSettingResponse::getApproverIds()
{
    return approverIds_;
}

void UpdateMergeRequestApproverSettingResponse::setApproverIds(std::vector<int32_t> value)
{
    approverIds_ = value;
    approverIdsIsSet_ = true;
}

bool UpdateMergeRequestApproverSettingResponse::approverIdsIsSet() const
{
    return approverIdsIsSet_;
}

void UpdateMergeRequestApproverSettingResponse::unsetapproverIds()
{
    approverIdsIsSet_ = false;
}

std::vector<UserBasicDto>& UpdateMergeRequestApproverSettingResponse::getApprovers()
{
    return approvers_;
}

void UpdateMergeRequestApproverSettingResponse::setApprovers(const std::vector<UserBasicDto>& value)
{
    approvers_ = value;
    approversIsSet_ = true;
}

bool UpdateMergeRequestApproverSettingResponse::approversIsSet() const
{
    return approversIsSet_;
}

void UpdateMergeRequestApproverSettingResponse::unsetapprovers()
{
    approversIsSet_ = false;
}

std::vector<int32_t>& UpdateMergeRequestApproverSettingResponse::getReviewerIds()
{
    return reviewerIds_;
}

void UpdateMergeRequestApproverSettingResponse::setReviewerIds(std::vector<int32_t> value)
{
    reviewerIds_ = value;
    reviewerIdsIsSet_ = true;
}

bool UpdateMergeRequestApproverSettingResponse::reviewerIdsIsSet() const
{
    return reviewerIdsIsSet_;
}

void UpdateMergeRequestApproverSettingResponse::unsetreviewerIds()
{
    reviewerIdsIsSet_ = false;
}

std::vector<UserBasicDto>& UpdateMergeRequestApproverSettingResponse::getReviewers()
{
    return reviewers_;
}

void UpdateMergeRequestApproverSettingResponse::setReviewers(const std::vector<UserBasicDto>& value)
{
    reviewers_ = value;
    reviewersIsSet_ = true;
}

bool UpdateMergeRequestApproverSettingResponse::reviewersIsSet() const
{
    return reviewersIsSet_;
}

void UpdateMergeRequestApproverSettingResponse::unsetreviewers()
{
    reviewersIsSet_ = false;
}

}
}
}
}
}


