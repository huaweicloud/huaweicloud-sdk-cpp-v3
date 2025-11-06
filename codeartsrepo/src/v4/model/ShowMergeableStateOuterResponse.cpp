

#include "huaweicloud/codeartsrepo/v4/model/ShowMergeableStateOuterResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ShowMergeableStateOuterResponse::ShowMergeableStateOuterResponse()
{
    mergeRequestId_ = 0;
    mergeRequestIdIsSet_ = false;
    state_ = false;
    stateIsSet_ = false;
    conflictPassed_ = false;
    conflictPassedIsSet_ = false;
    nonFfPassed_ = false;
    nonFfPassedIsSet_ = false;
    mergedByUserPassed_ = false;
    mergedByUserPassedIsSet_ = false;
    workInProgressPassed_ = false;
    workInProgressPassedIsSet_ = false;
    resolveDiscussionPassed_ = false;
    resolveDiscussionPassedIsSet_ = false;
    ciStatePassed_ = false;
    ciStatePassedIsSet_ = false;
    mergeBySelfPassed_ = false;
    mergeBySelfPassedIsSet_ = false;
    canForceMerge_ = false;
    canForceMergeIsSet_ = false;
    votePassed_ = false;
    votePassedIsSet_ = false;
    e2eCheckPassed_ = false;
    e2eCheckPassedIsSet_ = false;
    allIssuesPassed_ = false;
    allIssuesPassedIsSet_ = false;
    onlyOneIssuePassed_ = false;
    onlyOneIssuePassedIsSet_ = false;
    approvalReviewersRequiredPassed_ = false;
    approvalReviewersRequiredPassedIsSet_ = false;
    approvalApproversRequiredPassed_ = false;
    approvalApproversRequiredPassedIsSet_ = false;
    evaluationPassed_ = false;
    evaluationPassedIsSet_ = false;
}

ShowMergeableStateOuterResponse::~ShowMergeableStateOuterResponse() = default;

void ShowMergeableStateOuterResponse::validate()
{
}

web::json::value ShowMergeableStateOuterResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(mergeRequestIdIsSet_) {
        val[utility::conversions::to_string_t("merge_request_id")] = ModelBase::toJson(mergeRequestId_);
    }
    if(stateIsSet_) {
        val[utility::conversions::to_string_t("state")] = ModelBase::toJson(state_);
    }
    if(conflictPassedIsSet_) {
        val[utility::conversions::to_string_t("conflict_passed")] = ModelBase::toJson(conflictPassed_);
    }
    if(nonFfPassedIsSet_) {
        val[utility::conversions::to_string_t("non_ff_passed")] = ModelBase::toJson(nonFfPassed_);
    }
    if(mergedByUserPassedIsSet_) {
        val[utility::conversions::to_string_t("merged_by_user_passed")] = ModelBase::toJson(mergedByUserPassed_);
    }
    if(workInProgressPassedIsSet_) {
        val[utility::conversions::to_string_t("work_in_progress_passed")] = ModelBase::toJson(workInProgressPassed_);
    }
    if(resolveDiscussionPassedIsSet_) {
        val[utility::conversions::to_string_t("resolve_discussion_passed")] = ModelBase::toJson(resolveDiscussionPassed_);
    }
    if(ciStatePassedIsSet_) {
        val[utility::conversions::to_string_t("ci_state_passed")] = ModelBase::toJson(ciStatePassed_);
    }
    if(mergeBySelfPassedIsSet_) {
        val[utility::conversions::to_string_t("merge_by_self_passed")] = ModelBase::toJson(mergeBySelfPassed_);
    }
    if(canForceMergeIsSet_) {
        val[utility::conversions::to_string_t("can_force_merge")] = ModelBase::toJson(canForceMerge_);
    }
    if(votePassedIsSet_) {
        val[utility::conversions::to_string_t("vote_passed")] = ModelBase::toJson(votePassed_);
    }
    if(e2eCheckPassedIsSet_) {
        val[utility::conversions::to_string_t("e2e_check_passed")] = ModelBase::toJson(e2eCheckPassed_);
    }
    if(allIssuesPassedIsSet_) {
        val[utility::conversions::to_string_t("all_issues_passed")] = ModelBase::toJson(allIssuesPassed_);
    }
    if(onlyOneIssuePassedIsSet_) {
        val[utility::conversions::to_string_t("only_one_issue_passed")] = ModelBase::toJson(onlyOneIssuePassed_);
    }
    if(approvalReviewersRequiredPassedIsSet_) {
        val[utility::conversions::to_string_t("approval_reviewers_required_passed")] = ModelBase::toJson(approvalReviewersRequiredPassed_);
    }
    if(approvalApproversRequiredPassedIsSet_) {
        val[utility::conversions::to_string_t("approval_approvers_required_passed")] = ModelBase::toJson(approvalApproversRequiredPassed_);
    }
    if(evaluationPassedIsSet_) {
        val[utility::conversions::to_string_t("evaluation_passed")] = ModelBase::toJson(evaluationPassed_);
    }

    return val;
}
bool ShowMergeableStateOuterResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("merge_request_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("merge_request_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMergeRequestId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("state"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setState(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("conflict_passed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("conflict_passed"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConflictPassed(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("non_ff_passed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("non_ff_passed"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNonFfPassed(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("merged_by_user_passed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("merged_by_user_passed"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMergedByUserPassed(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("work_in_progress_passed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("work_in_progress_passed"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkInProgressPassed(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resolve_discussion_passed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resolve_discussion_passed"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResolveDiscussionPassed(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ci_state_passed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ci_state_passed"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCiStatePassed(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("merge_by_self_passed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("merge_by_self_passed"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMergeBySelfPassed(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("can_force_merge"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("can_force_merge"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCanForceMerge(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("vote_passed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("vote_passed"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVotePassed(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("e2e_check_passed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("e2e_check_passed"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setE2eCheckPassed(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("all_issues_passed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("all_issues_passed"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAllIssuesPassed(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("only_one_issue_passed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("only_one_issue_passed"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOnlyOneIssuePassed(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("approval_reviewers_required_passed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("approval_reviewers_required_passed"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApprovalReviewersRequiredPassed(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("approval_approvers_required_passed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("approval_approvers_required_passed"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setApprovalApproversRequiredPassed(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("evaluation_passed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("evaluation_passed"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEvaluationPassed(refVal);
        }
    }
    return ok;
}


int32_t ShowMergeableStateOuterResponse::getMergeRequestId() const
{
    return mergeRequestId_;
}

void ShowMergeableStateOuterResponse::setMergeRequestId(int32_t value)
{
    mergeRequestId_ = value;
    mergeRequestIdIsSet_ = true;
}

bool ShowMergeableStateOuterResponse::mergeRequestIdIsSet() const
{
    return mergeRequestIdIsSet_;
}

void ShowMergeableStateOuterResponse::unsetmergeRequestId()
{
    mergeRequestIdIsSet_ = false;
}

bool ShowMergeableStateOuterResponse::isState() const
{
    return state_;
}

void ShowMergeableStateOuterResponse::setState(bool value)
{
    state_ = value;
    stateIsSet_ = true;
}

bool ShowMergeableStateOuterResponse::stateIsSet() const
{
    return stateIsSet_;
}

void ShowMergeableStateOuterResponse::unsetstate()
{
    stateIsSet_ = false;
}

bool ShowMergeableStateOuterResponse::isConflictPassed() const
{
    return conflictPassed_;
}

void ShowMergeableStateOuterResponse::setConflictPassed(bool value)
{
    conflictPassed_ = value;
    conflictPassedIsSet_ = true;
}

bool ShowMergeableStateOuterResponse::conflictPassedIsSet() const
{
    return conflictPassedIsSet_;
}

void ShowMergeableStateOuterResponse::unsetconflictPassed()
{
    conflictPassedIsSet_ = false;
}

bool ShowMergeableStateOuterResponse::isNonFfPassed() const
{
    return nonFfPassed_;
}

void ShowMergeableStateOuterResponse::setNonFfPassed(bool value)
{
    nonFfPassed_ = value;
    nonFfPassedIsSet_ = true;
}

bool ShowMergeableStateOuterResponse::nonFfPassedIsSet() const
{
    return nonFfPassedIsSet_;
}

void ShowMergeableStateOuterResponse::unsetnonFfPassed()
{
    nonFfPassedIsSet_ = false;
}

bool ShowMergeableStateOuterResponse::isMergedByUserPassed() const
{
    return mergedByUserPassed_;
}

void ShowMergeableStateOuterResponse::setMergedByUserPassed(bool value)
{
    mergedByUserPassed_ = value;
    mergedByUserPassedIsSet_ = true;
}

bool ShowMergeableStateOuterResponse::mergedByUserPassedIsSet() const
{
    return mergedByUserPassedIsSet_;
}

void ShowMergeableStateOuterResponse::unsetmergedByUserPassed()
{
    mergedByUserPassedIsSet_ = false;
}

bool ShowMergeableStateOuterResponse::isWorkInProgressPassed() const
{
    return workInProgressPassed_;
}

void ShowMergeableStateOuterResponse::setWorkInProgressPassed(bool value)
{
    workInProgressPassed_ = value;
    workInProgressPassedIsSet_ = true;
}

bool ShowMergeableStateOuterResponse::workInProgressPassedIsSet() const
{
    return workInProgressPassedIsSet_;
}

void ShowMergeableStateOuterResponse::unsetworkInProgressPassed()
{
    workInProgressPassedIsSet_ = false;
}

bool ShowMergeableStateOuterResponse::isResolveDiscussionPassed() const
{
    return resolveDiscussionPassed_;
}

void ShowMergeableStateOuterResponse::setResolveDiscussionPassed(bool value)
{
    resolveDiscussionPassed_ = value;
    resolveDiscussionPassedIsSet_ = true;
}

bool ShowMergeableStateOuterResponse::resolveDiscussionPassedIsSet() const
{
    return resolveDiscussionPassedIsSet_;
}

void ShowMergeableStateOuterResponse::unsetresolveDiscussionPassed()
{
    resolveDiscussionPassedIsSet_ = false;
}

bool ShowMergeableStateOuterResponse::isCiStatePassed() const
{
    return ciStatePassed_;
}

void ShowMergeableStateOuterResponse::setCiStatePassed(bool value)
{
    ciStatePassed_ = value;
    ciStatePassedIsSet_ = true;
}

bool ShowMergeableStateOuterResponse::ciStatePassedIsSet() const
{
    return ciStatePassedIsSet_;
}

void ShowMergeableStateOuterResponse::unsetciStatePassed()
{
    ciStatePassedIsSet_ = false;
}

bool ShowMergeableStateOuterResponse::isMergeBySelfPassed() const
{
    return mergeBySelfPassed_;
}

void ShowMergeableStateOuterResponse::setMergeBySelfPassed(bool value)
{
    mergeBySelfPassed_ = value;
    mergeBySelfPassedIsSet_ = true;
}

bool ShowMergeableStateOuterResponse::mergeBySelfPassedIsSet() const
{
    return mergeBySelfPassedIsSet_;
}

void ShowMergeableStateOuterResponse::unsetmergeBySelfPassed()
{
    mergeBySelfPassedIsSet_ = false;
}

bool ShowMergeableStateOuterResponse::isCanForceMerge() const
{
    return canForceMerge_;
}

void ShowMergeableStateOuterResponse::setCanForceMerge(bool value)
{
    canForceMerge_ = value;
    canForceMergeIsSet_ = true;
}

bool ShowMergeableStateOuterResponse::canForceMergeIsSet() const
{
    return canForceMergeIsSet_;
}

void ShowMergeableStateOuterResponse::unsetcanForceMerge()
{
    canForceMergeIsSet_ = false;
}

bool ShowMergeableStateOuterResponse::isVotePassed() const
{
    return votePassed_;
}

void ShowMergeableStateOuterResponse::setVotePassed(bool value)
{
    votePassed_ = value;
    votePassedIsSet_ = true;
}

bool ShowMergeableStateOuterResponse::votePassedIsSet() const
{
    return votePassedIsSet_;
}

void ShowMergeableStateOuterResponse::unsetvotePassed()
{
    votePassedIsSet_ = false;
}

bool ShowMergeableStateOuterResponse::isE2eCheckPassed() const
{
    return e2eCheckPassed_;
}

void ShowMergeableStateOuterResponse::setE2eCheckPassed(bool value)
{
    e2eCheckPassed_ = value;
    e2eCheckPassedIsSet_ = true;
}

bool ShowMergeableStateOuterResponse::e2eCheckPassedIsSet() const
{
    return e2eCheckPassedIsSet_;
}

void ShowMergeableStateOuterResponse::unsete2eCheckPassed()
{
    e2eCheckPassedIsSet_ = false;
}

bool ShowMergeableStateOuterResponse::isAllIssuesPassed() const
{
    return allIssuesPassed_;
}

void ShowMergeableStateOuterResponse::setAllIssuesPassed(bool value)
{
    allIssuesPassed_ = value;
    allIssuesPassedIsSet_ = true;
}

bool ShowMergeableStateOuterResponse::allIssuesPassedIsSet() const
{
    return allIssuesPassedIsSet_;
}

void ShowMergeableStateOuterResponse::unsetallIssuesPassed()
{
    allIssuesPassedIsSet_ = false;
}

bool ShowMergeableStateOuterResponse::isOnlyOneIssuePassed() const
{
    return onlyOneIssuePassed_;
}

void ShowMergeableStateOuterResponse::setOnlyOneIssuePassed(bool value)
{
    onlyOneIssuePassed_ = value;
    onlyOneIssuePassedIsSet_ = true;
}

bool ShowMergeableStateOuterResponse::onlyOneIssuePassedIsSet() const
{
    return onlyOneIssuePassedIsSet_;
}

void ShowMergeableStateOuterResponse::unsetonlyOneIssuePassed()
{
    onlyOneIssuePassedIsSet_ = false;
}

bool ShowMergeableStateOuterResponse::isApprovalReviewersRequiredPassed() const
{
    return approvalReviewersRequiredPassed_;
}

void ShowMergeableStateOuterResponse::setApprovalReviewersRequiredPassed(bool value)
{
    approvalReviewersRequiredPassed_ = value;
    approvalReviewersRequiredPassedIsSet_ = true;
}

bool ShowMergeableStateOuterResponse::approvalReviewersRequiredPassedIsSet() const
{
    return approvalReviewersRequiredPassedIsSet_;
}

void ShowMergeableStateOuterResponse::unsetapprovalReviewersRequiredPassed()
{
    approvalReviewersRequiredPassedIsSet_ = false;
}

bool ShowMergeableStateOuterResponse::isApprovalApproversRequiredPassed() const
{
    return approvalApproversRequiredPassed_;
}

void ShowMergeableStateOuterResponse::setApprovalApproversRequiredPassed(bool value)
{
    approvalApproversRequiredPassed_ = value;
    approvalApproversRequiredPassedIsSet_ = true;
}

bool ShowMergeableStateOuterResponse::approvalApproversRequiredPassedIsSet() const
{
    return approvalApproversRequiredPassedIsSet_;
}

void ShowMergeableStateOuterResponse::unsetapprovalApproversRequiredPassed()
{
    approvalApproversRequiredPassedIsSet_ = false;
}

bool ShowMergeableStateOuterResponse::isEvaluationPassed() const
{
    return evaluationPassed_;
}

void ShowMergeableStateOuterResponse::setEvaluationPassed(bool value)
{
    evaluationPassed_ = value;
    evaluationPassedIsSet_ = true;
}

bool ShowMergeableStateOuterResponse::evaluationPassedIsSet() const
{
    return evaluationPassedIsSet_;
}

void ShowMergeableStateOuterResponse::unsetevaluationPassed()
{
    evaluationPassedIsSet_ = false;
}

}
}
}
}
}


