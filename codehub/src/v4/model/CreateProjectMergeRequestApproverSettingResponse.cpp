

#include "huaweicloud/codehub/v4/model/CreateProjectMergeRequestApproverSettingResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




CreateProjectMergeRequestApproverSettingResponse::CreateProjectMergeRequestApproverSettingResponse()
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

CreateProjectMergeRequestApproverSettingResponse::~CreateProjectMergeRequestApproverSettingResponse() = default;

void CreateProjectMergeRequestApproverSettingResponse::validate()
{
}

web::json::value CreateProjectMergeRequestApproverSettingResponse::toJson() const
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
bool CreateProjectMergeRequestApproverSettingResponse::fromJson(const web::json::value& val)
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


std::string CreateProjectMergeRequestApproverSettingResponse::getId() const
{
    return id_;
}

void CreateProjectMergeRequestApproverSettingResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CreateProjectMergeRequestApproverSettingResponse::idIsSet() const
{
    return idIsSet_;
}

void CreateProjectMergeRequestApproverSettingResponse::unsetid()
{
    idIsSet_ = false;
}

std::string CreateProjectMergeRequestApproverSettingResponse::getTarget() const
{
    return target_;
}

void CreateProjectMergeRequestApproverSettingResponse::setTarget(const std::string& value)
{
    target_ = value;
    targetIsSet_ = true;
}

bool CreateProjectMergeRequestApproverSettingResponse::targetIsSet() const
{
    return targetIsSet_;
}

void CreateProjectMergeRequestApproverSettingResponse::unsettarget()
{
    targetIsSet_ = false;
}

std::string CreateProjectMergeRequestApproverSettingResponse::getTargetType() const
{
    return targetType_;
}

void CreateProjectMergeRequestApproverSettingResponse::setTargetType(const std::string& value)
{
    targetType_ = value;
    targetTypeIsSet_ = true;
}

bool CreateProjectMergeRequestApproverSettingResponse::targetTypeIsSet() const
{
    return targetTypeIsSet_;
}

void CreateProjectMergeRequestApproverSettingResponse::unsettargetType()
{
    targetTypeIsSet_ = false;
}

bool CreateProjectMergeRequestApproverSettingResponse::isIsUseApproval() const
{
    return isUseApproval_;
}

void CreateProjectMergeRequestApproverSettingResponse::setIsUseApproval(bool value)
{
    isUseApproval_ = value;
    isUseApprovalIsSet_ = true;
}

bool CreateProjectMergeRequestApproverSettingResponse::isUseApprovalIsSet() const
{
    return isUseApprovalIsSet_;
}

void CreateProjectMergeRequestApproverSettingResponse::unsetisUseApproval()
{
    isUseApprovalIsSet_ = false;
}

int32_t CreateProjectMergeRequestApproverSettingResponse::getApprovalRequiredReviewers() const
{
    return approvalRequiredReviewers_;
}

void CreateProjectMergeRequestApproverSettingResponse::setApprovalRequiredReviewers(int32_t value)
{
    approvalRequiredReviewers_ = value;
    approvalRequiredReviewersIsSet_ = true;
}

bool CreateProjectMergeRequestApproverSettingResponse::approvalRequiredReviewersIsSet() const
{
    return approvalRequiredReviewersIsSet_;
}

void CreateProjectMergeRequestApproverSettingResponse::unsetapprovalRequiredReviewers()
{
    approvalRequiredReviewersIsSet_ = false;
}

int32_t CreateProjectMergeRequestApproverSettingResponse::getApprovalRequiredApprovers() const
{
    return approvalRequiredApprovers_;
}

void CreateProjectMergeRequestApproverSettingResponse::setApprovalRequiredApprovers(int32_t value)
{
    approvalRequiredApprovers_ = value;
    approvalRequiredApproversIsSet_ = true;
}

bool CreateProjectMergeRequestApproverSettingResponse::approvalRequiredApproversIsSet() const
{
    return approvalRequiredApproversIsSet_;
}

void CreateProjectMergeRequestApproverSettingResponse::unsetapprovalRequiredApprovers()
{
    approvalRequiredApproversIsSet_ = false;
}

bool CreateProjectMergeRequestApproverSettingResponse::isResetApprovalsOnPush() const
{
    return resetApprovalsOnPush_;
}

void CreateProjectMergeRequestApproverSettingResponse::setResetApprovalsOnPush(bool value)
{
    resetApprovalsOnPush_ = value;
    resetApprovalsOnPushIsSet_ = true;
}

bool CreateProjectMergeRequestApproverSettingResponse::resetApprovalsOnPushIsSet() const
{
    return resetApprovalsOnPushIsSet_;
}

void CreateProjectMergeRequestApproverSettingResponse::unsetresetApprovalsOnPush()
{
    resetApprovalsOnPushIsSet_ = false;
}

bool CreateProjectMergeRequestApproverSettingResponse::isResetReviewersOnPush() const
{
    return resetReviewersOnPush_;
}

void CreateProjectMergeRequestApproverSettingResponse::setResetReviewersOnPush(bool value)
{
    resetReviewersOnPush_ = value;
    resetReviewersOnPushIsSet_ = true;
}

bool CreateProjectMergeRequestApproverSettingResponse::resetReviewersOnPushIsSet() const
{
    return resetReviewersOnPushIsSet_;
}

void CreateProjectMergeRequestApproverSettingResponse::unsetresetReviewersOnPush()
{
    resetReviewersOnPushIsSet_ = false;
}

bool CreateProjectMergeRequestApproverSettingResponse::isApproversFromProject() const
{
    return approversFromProject_;
}

void CreateProjectMergeRequestApproverSettingResponse::setApproversFromProject(bool value)
{
    approversFromProject_ = value;
    approversFromProjectIsSet_ = true;
}

bool CreateProjectMergeRequestApproverSettingResponse::approversFromProjectIsSet() const
{
    return approversFromProjectIsSet_;
}

void CreateProjectMergeRequestApproverSettingResponse::unsetapproversFromProject()
{
    approversFromProjectIsSet_ = false;
}

std::vector<int32_t>& CreateProjectMergeRequestApproverSettingResponse::getAppendReviewerIds()
{
    return appendReviewerIds_;
}

void CreateProjectMergeRequestApproverSettingResponse::setAppendReviewerIds(std::vector<int32_t> value)
{
    appendReviewerIds_ = value;
    appendReviewerIdsIsSet_ = true;
}

bool CreateProjectMergeRequestApproverSettingResponse::appendReviewerIdsIsSet() const
{
    return appendReviewerIdsIsSet_;
}

void CreateProjectMergeRequestApproverSettingResponse::unsetappendReviewerIds()
{
    appendReviewerIdsIsSet_ = false;
}

std::vector<UserBasicDto>& CreateProjectMergeRequestApproverSettingResponse::getAppendReviewers()
{
    return appendReviewers_;
}

void CreateProjectMergeRequestApproverSettingResponse::setAppendReviewers(const std::vector<UserBasicDto>& value)
{
    appendReviewers_ = value;
    appendReviewersIsSet_ = true;
}

bool CreateProjectMergeRequestApproverSettingResponse::appendReviewersIsSet() const
{
    return appendReviewersIsSet_;
}

void CreateProjectMergeRequestApproverSettingResponse::unsetappendReviewers()
{
    appendReviewersIsSet_ = false;
}

std::vector<int32_t>& CreateProjectMergeRequestApproverSettingResponse::getAppendApproverIds()
{
    return appendApproverIds_;
}

void CreateProjectMergeRequestApproverSettingResponse::setAppendApproverIds(std::vector<int32_t> value)
{
    appendApproverIds_ = value;
    appendApproverIdsIsSet_ = true;
}

bool CreateProjectMergeRequestApproverSettingResponse::appendApproverIdsIsSet() const
{
    return appendApproverIdsIsSet_;
}

void CreateProjectMergeRequestApproverSettingResponse::unsetappendApproverIds()
{
    appendApproverIdsIsSet_ = false;
}

std::vector<UserBasicDto>& CreateProjectMergeRequestApproverSettingResponse::getAppendApprovers()
{
    return appendApprovers_;
}

void CreateProjectMergeRequestApproverSettingResponse::setAppendApprovers(const std::vector<UserBasicDto>& value)
{
    appendApprovers_ = value;
    appendApproversIsSet_ = true;
}

bool CreateProjectMergeRequestApproverSettingResponse::appendApproversIsSet() const
{
    return appendApproversIsSet_;
}

void CreateProjectMergeRequestApproverSettingResponse::unsetappendApprovers()
{
    appendApproversIsSet_ = false;
}

bool CreateProjectMergeRequestApproverSettingResponse::isOnlyMergeWhenPipelinePass() const
{
    return onlyMergeWhenPipelinePass_;
}

void CreateProjectMergeRequestApproverSettingResponse::setOnlyMergeWhenPipelinePass(bool value)
{
    onlyMergeWhenPipelinePass_ = value;
    onlyMergeWhenPipelinePassIsSet_ = true;
}

bool CreateProjectMergeRequestApproverSettingResponse::onlyMergeWhenPipelinePassIsSet() const
{
    return onlyMergeWhenPipelinePassIsSet_;
}

void CreateProjectMergeRequestApproverSettingResponse::unsetonlyMergeWhenPipelinePass()
{
    onlyMergeWhenPipelinePassIsSet_ = false;
}

std::vector<int32_t>& CreateProjectMergeRequestApproverSettingResponse::getAssigneeIds()
{
    return assigneeIds_;
}

void CreateProjectMergeRequestApproverSettingResponse::setAssigneeIds(std::vector<int32_t> value)
{
    assigneeIds_ = value;
    assigneeIdsIsSet_ = true;
}

bool CreateProjectMergeRequestApproverSettingResponse::assigneeIdsIsSet() const
{
    return assigneeIdsIsSet_;
}

void CreateProjectMergeRequestApproverSettingResponse::unsetassigneeIds()
{
    assigneeIdsIsSet_ = false;
}

std::vector<UserBasicDto>& CreateProjectMergeRequestApproverSettingResponse::getAssignees()
{
    return assignees_;
}

void CreateProjectMergeRequestApproverSettingResponse::setAssignees(const std::vector<UserBasicDto>& value)
{
    assignees_ = value;
    assigneesIsSet_ = true;
}

bool CreateProjectMergeRequestApproverSettingResponse::assigneesIsSet() const
{
    return assigneesIsSet_;
}

void CreateProjectMergeRequestApproverSettingResponse::unsetassignees()
{
    assigneesIsSet_ = false;
}

std::vector<int32_t>& CreateProjectMergeRequestApproverSettingResponse::getApproverIds()
{
    return approverIds_;
}

void CreateProjectMergeRequestApproverSettingResponse::setApproverIds(std::vector<int32_t> value)
{
    approverIds_ = value;
    approverIdsIsSet_ = true;
}

bool CreateProjectMergeRequestApproverSettingResponse::approverIdsIsSet() const
{
    return approverIdsIsSet_;
}

void CreateProjectMergeRequestApproverSettingResponse::unsetapproverIds()
{
    approverIdsIsSet_ = false;
}

std::vector<UserBasicDto>& CreateProjectMergeRequestApproverSettingResponse::getApprovers()
{
    return approvers_;
}

void CreateProjectMergeRequestApproverSettingResponse::setApprovers(const std::vector<UserBasicDto>& value)
{
    approvers_ = value;
    approversIsSet_ = true;
}

bool CreateProjectMergeRequestApproverSettingResponse::approversIsSet() const
{
    return approversIsSet_;
}

void CreateProjectMergeRequestApproverSettingResponse::unsetapprovers()
{
    approversIsSet_ = false;
}

std::vector<int32_t>& CreateProjectMergeRequestApproverSettingResponse::getReviewerIds()
{
    return reviewerIds_;
}

void CreateProjectMergeRequestApproverSettingResponse::setReviewerIds(std::vector<int32_t> value)
{
    reviewerIds_ = value;
    reviewerIdsIsSet_ = true;
}

bool CreateProjectMergeRequestApproverSettingResponse::reviewerIdsIsSet() const
{
    return reviewerIdsIsSet_;
}

void CreateProjectMergeRequestApproverSettingResponse::unsetreviewerIds()
{
    reviewerIdsIsSet_ = false;
}

std::vector<UserBasicDto>& CreateProjectMergeRequestApproverSettingResponse::getReviewers()
{
    return reviewers_;
}

void CreateProjectMergeRequestApproverSettingResponse::setReviewers(const std::vector<UserBasicDto>& value)
{
    reviewers_ = value;
    reviewersIsSet_ = true;
}

bool CreateProjectMergeRequestApproverSettingResponse::reviewersIsSet() const
{
    return reviewersIsSet_;
}

void CreateProjectMergeRequestApproverSettingResponse::unsetreviewers()
{
    reviewersIsSet_ = false;
}

}
}
}
}
}


