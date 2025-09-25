

#include "huaweicloud/codehub/v4/model/CreateMergeRequestApproverSettingResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




CreateMergeRequestApproverSettingResponse::CreateMergeRequestApproverSettingResponse()
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

CreateMergeRequestApproverSettingResponse::~CreateMergeRequestApproverSettingResponse() = default;

void CreateMergeRequestApproverSettingResponse::validate()
{
}

web::json::value CreateMergeRequestApproverSettingResponse::toJson() const
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
bool CreateMergeRequestApproverSettingResponse::fromJson(const web::json::value& val)
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


std::string CreateMergeRequestApproverSettingResponse::getId() const
{
    return id_;
}

void CreateMergeRequestApproverSettingResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CreateMergeRequestApproverSettingResponse::idIsSet() const
{
    return idIsSet_;
}

void CreateMergeRequestApproverSettingResponse::unsetid()
{
    idIsSet_ = false;
}

std::string CreateMergeRequestApproverSettingResponse::getTarget() const
{
    return target_;
}

void CreateMergeRequestApproverSettingResponse::setTarget(const std::string& value)
{
    target_ = value;
    targetIsSet_ = true;
}

bool CreateMergeRequestApproverSettingResponse::targetIsSet() const
{
    return targetIsSet_;
}

void CreateMergeRequestApproverSettingResponse::unsettarget()
{
    targetIsSet_ = false;
}

std::string CreateMergeRequestApproverSettingResponse::getTargetType() const
{
    return targetType_;
}

void CreateMergeRequestApproverSettingResponse::setTargetType(const std::string& value)
{
    targetType_ = value;
    targetTypeIsSet_ = true;
}

bool CreateMergeRequestApproverSettingResponse::targetTypeIsSet() const
{
    return targetTypeIsSet_;
}

void CreateMergeRequestApproverSettingResponse::unsettargetType()
{
    targetTypeIsSet_ = false;
}

bool CreateMergeRequestApproverSettingResponse::isIsUseApproval() const
{
    return isUseApproval_;
}

void CreateMergeRequestApproverSettingResponse::setIsUseApproval(bool value)
{
    isUseApproval_ = value;
    isUseApprovalIsSet_ = true;
}

bool CreateMergeRequestApproverSettingResponse::isUseApprovalIsSet() const
{
    return isUseApprovalIsSet_;
}

void CreateMergeRequestApproverSettingResponse::unsetisUseApproval()
{
    isUseApprovalIsSet_ = false;
}

int32_t CreateMergeRequestApproverSettingResponse::getApprovalRequiredReviewers() const
{
    return approvalRequiredReviewers_;
}

void CreateMergeRequestApproverSettingResponse::setApprovalRequiredReviewers(int32_t value)
{
    approvalRequiredReviewers_ = value;
    approvalRequiredReviewersIsSet_ = true;
}

bool CreateMergeRequestApproverSettingResponse::approvalRequiredReviewersIsSet() const
{
    return approvalRequiredReviewersIsSet_;
}

void CreateMergeRequestApproverSettingResponse::unsetapprovalRequiredReviewers()
{
    approvalRequiredReviewersIsSet_ = false;
}

int32_t CreateMergeRequestApproverSettingResponse::getApprovalRequiredApprovers() const
{
    return approvalRequiredApprovers_;
}

void CreateMergeRequestApproverSettingResponse::setApprovalRequiredApprovers(int32_t value)
{
    approvalRequiredApprovers_ = value;
    approvalRequiredApproversIsSet_ = true;
}

bool CreateMergeRequestApproverSettingResponse::approvalRequiredApproversIsSet() const
{
    return approvalRequiredApproversIsSet_;
}

void CreateMergeRequestApproverSettingResponse::unsetapprovalRequiredApprovers()
{
    approvalRequiredApproversIsSet_ = false;
}

bool CreateMergeRequestApproverSettingResponse::isResetApprovalsOnPush() const
{
    return resetApprovalsOnPush_;
}

void CreateMergeRequestApproverSettingResponse::setResetApprovalsOnPush(bool value)
{
    resetApprovalsOnPush_ = value;
    resetApprovalsOnPushIsSet_ = true;
}

bool CreateMergeRequestApproverSettingResponse::resetApprovalsOnPushIsSet() const
{
    return resetApprovalsOnPushIsSet_;
}

void CreateMergeRequestApproverSettingResponse::unsetresetApprovalsOnPush()
{
    resetApprovalsOnPushIsSet_ = false;
}

bool CreateMergeRequestApproverSettingResponse::isResetReviewersOnPush() const
{
    return resetReviewersOnPush_;
}

void CreateMergeRequestApproverSettingResponse::setResetReviewersOnPush(bool value)
{
    resetReviewersOnPush_ = value;
    resetReviewersOnPushIsSet_ = true;
}

bool CreateMergeRequestApproverSettingResponse::resetReviewersOnPushIsSet() const
{
    return resetReviewersOnPushIsSet_;
}

void CreateMergeRequestApproverSettingResponse::unsetresetReviewersOnPush()
{
    resetReviewersOnPushIsSet_ = false;
}

bool CreateMergeRequestApproverSettingResponse::isApproversFromProject() const
{
    return approversFromProject_;
}

void CreateMergeRequestApproverSettingResponse::setApproversFromProject(bool value)
{
    approversFromProject_ = value;
    approversFromProjectIsSet_ = true;
}

bool CreateMergeRequestApproverSettingResponse::approversFromProjectIsSet() const
{
    return approversFromProjectIsSet_;
}

void CreateMergeRequestApproverSettingResponse::unsetapproversFromProject()
{
    approversFromProjectIsSet_ = false;
}

std::vector<int32_t>& CreateMergeRequestApproverSettingResponse::getAppendReviewerIds()
{
    return appendReviewerIds_;
}

void CreateMergeRequestApproverSettingResponse::setAppendReviewerIds(std::vector<int32_t> value)
{
    appendReviewerIds_ = value;
    appendReviewerIdsIsSet_ = true;
}

bool CreateMergeRequestApproverSettingResponse::appendReviewerIdsIsSet() const
{
    return appendReviewerIdsIsSet_;
}

void CreateMergeRequestApproverSettingResponse::unsetappendReviewerIds()
{
    appendReviewerIdsIsSet_ = false;
}

std::vector<UserBasicDto>& CreateMergeRequestApproverSettingResponse::getAppendReviewers()
{
    return appendReviewers_;
}

void CreateMergeRequestApproverSettingResponse::setAppendReviewers(const std::vector<UserBasicDto>& value)
{
    appendReviewers_ = value;
    appendReviewersIsSet_ = true;
}

bool CreateMergeRequestApproverSettingResponse::appendReviewersIsSet() const
{
    return appendReviewersIsSet_;
}

void CreateMergeRequestApproverSettingResponse::unsetappendReviewers()
{
    appendReviewersIsSet_ = false;
}

std::vector<int32_t>& CreateMergeRequestApproverSettingResponse::getAppendApproverIds()
{
    return appendApproverIds_;
}

void CreateMergeRequestApproverSettingResponse::setAppendApproverIds(std::vector<int32_t> value)
{
    appendApproverIds_ = value;
    appendApproverIdsIsSet_ = true;
}

bool CreateMergeRequestApproverSettingResponse::appendApproverIdsIsSet() const
{
    return appendApproverIdsIsSet_;
}

void CreateMergeRequestApproverSettingResponse::unsetappendApproverIds()
{
    appendApproverIdsIsSet_ = false;
}

std::vector<UserBasicDto>& CreateMergeRequestApproverSettingResponse::getAppendApprovers()
{
    return appendApprovers_;
}

void CreateMergeRequestApproverSettingResponse::setAppendApprovers(const std::vector<UserBasicDto>& value)
{
    appendApprovers_ = value;
    appendApproversIsSet_ = true;
}

bool CreateMergeRequestApproverSettingResponse::appendApproversIsSet() const
{
    return appendApproversIsSet_;
}

void CreateMergeRequestApproverSettingResponse::unsetappendApprovers()
{
    appendApproversIsSet_ = false;
}

bool CreateMergeRequestApproverSettingResponse::isOnlyMergeWhenPipelinePass() const
{
    return onlyMergeWhenPipelinePass_;
}

void CreateMergeRequestApproverSettingResponse::setOnlyMergeWhenPipelinePass(bool value)
{
    onlyMergeWhenPipelinePass_ = value;
    onlyMergeWhenPipelinePassIsSet_ = true;
}

bool CreateMergeRequestApproverSettingResponse::onlyMergeWhenPipelinePassIsSet() const
{
    return onlyMergeWhenPipelinePassIsSet_;
}

void CreateMergeRequestApproverSettingResponse::unsetonlyMergeWhenPipelinePass()
{
    onlyMergeWhenPipelinePassIsSet_ = false;
}

std::vector<int32_t>& CreateMergeRequestApproverSettingResponse::getAssigneeIds()
{
    return assigneeIds_;
}

void CreateMergeRequestApproverSettingResponse::setAssigneeIds(std::vector<int32_t> value)
{
    assigneeIds_ = value;
    assigneeIdsIsSet_ = true;
}

bool CreateMergeRequestApproverSettingResponse::assigneeIdsIsSet() const
{
    return assigneeIdsIsSet_;
}

void CreateMergeRequestApproverSettingResponse::unsetassigneeIds()
{
    assigneeIdsIsSet_ = false;
}

std::vector<UserBasicDto>& CreateMergeRequestApproverSettingResponse::getAssignees()
{
    return assignees_;
}

void CreateMergeRequestApproverSettingResponse::setAssignees(const std::vector<UserBasicDto>& value)
{
    assignees_ = value;
    assigneesIsSet_ = true;
}

bool CreateMergeRequestApproverSettingResponse::assigneesIsSet() const
{
    return assigneesIsSet_;
}

void CreateMergeRequestApproverSettingResponse::unsetassignees()
{
    assigneesIsSet_ = false;
}

std::vector<int32_t>& CreateMergeRequestApproverSettingResponse::getApproverIds()
{
    return approverIds_;
}

void CreateMergeRequestApproverSettingResponse::setApproverIds(std::vector<int32_t> value)
{
    approverIds_ = value;
    approverIdsIsSet_ = true;
}

bool CreateMergeRequestApproverSettingResponse::approverIdsIsSet() const
{
    return approverIdsIsSet_;
}

void CreateMergeRequestApproverSettingResponse::unsetapproverIds()
{
    approverIdsIsSet_ = false;
}

std::vector<UserBasicDto>& CreateMergeRequestApproverSettingResponse::getApprovers()
{
    return approvers_;
}

void CreateMergeRequestApproverSettingResponse::setApprovers(const std::vector<UserBasicDto>& value)
{
    approvers_ = value;
    approversIsSet_ = true;
}

bool CreateMergeRequestApproverSettingResponse::approversIsSet() const
{
    return approversIsSet_;
}

void CreateMergeRequestApproverSettingResponse::unsetapprovers()
{
    approversIsSet_ = false;
}

std::vector<int32_t>& CreateMergeRequestApproverSettingResponse::getReviewerIds()
{
    return reviewerIds_;
}

void CreateMergeRequestApproverSettingResponse::setReviewerIds(std::vector<int32_t> value)
{
    reviewerIds_ = value;
    reviewerIdsIsSet_ = true;
}

bool CreateMergeRequestApproverSettingResponse::reviewerIdsIsSet() const
{
    return reviewerIdsIsSet_;
}

void CreateMergeRequestApproverSettingResponse::unsetreviewerIds()
{
    reviewerIdsIsSet_ = false;
}

std::vector<UserBasicDto>& CreateMergeRequestApproverSettingResponse::getReviewers()
{
    return reviewers_;
}

void CreateMergeRequestApproverSettingResponse::setReviewers(const std::vector<UserBasicDto>& value)
{
    reviewers_ = value;
    reviewersIsSet_ = true;
}

bool CreateMergeRequestApproverSettingResponse::reviewersIsSet() const
{
    return reviewersIsSet_;
}

void CreateMergeRequestApproverSettingResponse::unsetreviewers()
{
    reviewersIsSet_ = false;
}

}
}
}
}
}


