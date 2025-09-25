

#include "huaweicloud/codehub/v4/model/UpdateMergeRequestSettingDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




UpdateMergeRequestSettingDto::UpdateMergeRequestSettingDto()
{
    reviewMode_ = "";
    reviewModeIsSet_ = false;
    onlyAllowMergeIfAllDiscussionsAreResolved_ = false;
    onlyAllowMergeIfAllDiscussionsAreResolvedIsSet_ = false;
    mustRelateIssue_ = false;
    mustRelateIssueIsSet_ = false;
    onlyAllowOneIssueCheckPassed_ = false;
    onlyAllowOneIssueCheckPassedIsSet_ = false;
    needAllIssuesCheckPassed_ = false;
    needAllIssuesCheckPassedIsSet_ = false;
    needRelateIssueBranches_ = "";
    needRelateIssueBranchesIsSet_ = false;
    evaluationMergeGate_ = false;
    evaluationMergeGateIsSet_ = false;
    evaluationRole_ = 0;
    evaluationRoleIsSet_ = false;
    disableMergeBySelf_ = false;
    disableMergeBySelfIsSet_ = false;
    disableApproveBySelf_ = false;
    disableApproveBySelfIsSet_ = false;
    disableReviewBySelf_ = false;
    disableReviewBySelfIsSet_ = false;
    canForceMerge_ = false;
    canForceMergeIsSet_ = false;
    addNotesAfterMerged_ = false;
    addNotesAfterMergedIsSet_ = false;
    markAutoMergedMrAsClosed_ = false;
    markAutoMergedMrAsClosedIsSet_ = false;
    canReopen_ = false;
    canReopenIsSet_ = false;
    deleteSourceBranchWhenMerged_ = false;
    deleteSourceBranchWhenMergedIsSet_ = false;
    disableSquashMerge_ = false;
    disableSquashMergeIsSet_ = false;
    autoSquashMerge_ = false;
    autoSquashMergeIsSet_ = false;
    mergeMethod_ = "";
    mergeMethodIsSet_ = false;
    squashMergeWithNoMergeCommit_ = false;
    squashMergeWithNoMergeCommitIsSet_ = false;
    mergedCommitAuthor_ = "";
    mergedCommitAuthorIsSet_ = false;
    enableCustomEvaluation_ = false;
    enableCustomEvaluationIsSet_ = false;
    evaluationTypesIsSet_ = false;
    onlyAllowMergeIfVoteBiggerThan_ = 0;
    onlyAllowMergeIfVoteBiggerThanIsSet_ = false;
    onlyAssigneeCanMerge_ = false;
    onlyAssigneeCanMergeIsSet_ = false;
}

UpdateMergeRequestSettingDto::~UpdateMergeRequestSettingDto() = default;

void UpdateMergeRequestSettingDto::validate()
{
}

web::json::value UpdateMergeRequestSettingDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(reviewModeIsSet_) {
        val[utility::conversions::to_string_t("review_mode")] = ModelBase::toJson(reviewMode_);
    }
    if(onlyAllowMergeIfAllDiscussionsAreResolvedIsSet_) {
        val[utility::conversions::to_string_t("only_allow_merge_if_all_discussions_are_resolved")] = ModelBase::toJson(onlyAllowMergeIfAllDiscussionsAreResolved_);
    }
    if(mustRelateIssueIsSet_) {
        val[utility::conversions::to_string_t("must_relate_issue")] = ModelBase::toJson(mustRelateIssue_);
    }
    if(onlyAllowOneIssueCheckPassedIsSet_) {
        val[utility::conversions::to_string_t("only_allow_one_issue_check_passed")] = ModelBase::toJson(onlyAllowOneIssueCheckPassed_);
    }
    if(needAllIssuesCheckPassedIsSet_) {
        val[utility::conversions::to_string_t("need_all_issues_check_passed")] = ModelBase::toJson(needAllIssuesCheckPassed_);
    }
    if(needRelateIssueBranchesIsSet_) {
        val[utility::conversions::to_string_t("need_relate_issue_branches")] = ModelBase::toJson(needRelateIssueBranches_);
    }
    if(evaluationMergeGateIsSet_) {
        val[utility::conversions::to_string_t("evaluation_merge_gate")] = ModelBase::toJson(evaluationMergeGate_);
    }
    if(evaluationRoleIsSet_) {
        val[utility::conversions::to_string_t("evaluation_role")] = ModelBase::toJson(evaluationRole_);
    }
    if(disableMergeBySelfIsSet_) {
        val[utility::conversions::to_string_t("disable_merge_by_self")] = ModelBase::toJson(disableMergeBySelf_);
    }
    if(disableApproveBySelfIsSet_) {
        val[utility::conversions::to_string_t("disable_approve_by_self")] = ModelBase::toJson(disableApproveBySelf_);
    }
    if(disableReviewBySelfIsSet_) {
        val[utility::conversions::to_string_t("disable_review_by_self")] = ModelBase::toJson(disableReviewBySelf_);
    }
    if(canForceMergeIsSet_) {
        val[utility::conversions::to_string_t("can_force_merge")] = ModelBase::toJson(canForceMerge_);
    }
    if(addNotesAfterMergedIsSet_) {
        val[utility::conversions::to_string_t("add_notes_after_merged")] = ModelBase::toJson(addNotesAfterMerged_);
    }
    if(markAutoMergedMrAsClosedIsSet_) {
        val[utility::conversions::to_string_t("mark_auto_merged_mr_as_closed")] = ModelBase::toJson(markAutoMergedMrAsClosed_);
    }
    if(canReopenIsSet_) {
        val[utility::conversions::to_string_t("can_reopen")] = ModelBase::toJson(canReopen_);
    }
    if(deleteSourceBranchWhenMergedIsSet_) {
        val[utility::conversions::to_string_t("delete_source_branch_when_merged")] = ModelBase::toJson(deleteSourceBranchWhenMerged_);
    }
    if(disableSquashMergeIsSet_) {
        val[utility::conversions::to_string_t("disable_squash_merge")] = ModelBase::toJson(disableSquashMerge_);
    }
    if(autoSquashMergeIsSet_) {
        val[utility::conversions::to_string_t("auto_squash_merge")] = ModelBase::toJson(autoSquashMerge_);
    }
    if(mergeMethodIsSet_) {
        val[utility::conversions::to_string_t("merge_method")] = ModelBase::toJson(mergeMethod_);
    }
    if(squashMergeWithNoMergeCommitIsSet_) {
        val[utility::conversions::to_string_t("squash_merge_with_no_merge_commit")] = ModelBase::toJson(squashMergeWithNoMergeCommit_);
    }
    if(mergedCommitAuthorIsSet_) {
        val[utility::conversions::to_string_t("merged_commit_author")] = ModelBase::toJson(mergedCommitAuthor_);
    }
    if(enableCustomEvaluationIsSet_) {
        val[utility::conversions::to_string_t("enable_custom_evaluation")] = ModelBase::toJson(enableCustomEvaluation_);
    }
    if(evaluationTypesIsSet_) {
        val[utility::conversions::to_string_t("evaluation_types")] = ModelBase::toJson(evaluationTypes_);
    }
    if(onlyAllowMergeIfVoteBiggerThanIsSet_) {
        val[utility::conversions::to_string_t("only_allow_merge_if_vote_bigger_than")] = ModelBase::toJson(onlyAllowMergeIfVoteBiggerThan_);
    }
    if(onlyAssigneeCanMergeIsSet_) {
        val[utility::conversions::to_string_t("only_assignee_can_merge")] = ModelBase::toJson(onlyAssigneeCanMerge_);
    }

    return val;
}
bool UpdateMergeRequestSettingDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("review_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("review_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReviewMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("only_allow_merge_if_all_discussions_are_resolved"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("only_allow_merge_if_all_discussions_are_resolved"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOnlyAllowMergeIfAllDiscussionsAreResolved(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("must_relate_issue"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("must_relate_issue"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMustRelateIssue(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("only_allow_one_issue_check_passed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("only_allow_one_issue_check_passed"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOnlyAllowOneIssueCheckPassed(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("need_all_issues_check_passed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("need_all_issues_check_passed"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNeedAllIssuesCheckPassed(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("need_relate_issue_branches"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("need_relate_issue_branches"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNeedRelateIssueBranches(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("evaluation_merge_gate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("evaluation_merge_gate"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEvaluationMergeGate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("evaluation_role"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("evaluation_role"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEvaluationRole(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("disable_merge_by_self"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("disable_merge_by_self"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisableMergeBySelf(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("disable_approve_by_self"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("disable_approve_by_self"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisableApproveBySelf(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("disable_review_by_self"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("disable_review_by_self"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisableReviewBySelf(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("add_notes_after_merged"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("add_notes_after_merged"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddNotesAfterMerged(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mark_auto_merged_mr_as_closed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mark_auto_merged_mr_as_closed"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMarkAutoMergedMrAsClosed(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("can_reopen"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("can_reopen"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCanReopen(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("delete_source_branch_when_merged"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delete_source_branch_when_merged"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeleteSourceBranchWhenMerged(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("disable_squash_merge"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("disable_squash_merge"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisableSquashMerge(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("auto_squash_merge"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("auto_squash_merge"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAutoSquashMerge(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("merge_method"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("merge_method"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMergeMethod(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("squash_merge_with_no_merge_commit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("squash_merge_with_no_merge_commit"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSquashMergeWithNoMergeCommit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("merged_commit_author"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("merged_commit_author"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMergedCommitAuthor(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enable_custom_evaluation"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_custom_evaluation"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableCustomEvaluation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("evaluation_types"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("evaluation_types"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEvaluationTypes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("only_allow_merge_if_vote_bigger_than"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("only_allow_merge_if_vote_bigger_than"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOnlyAllowMergeIfVoteBiggerThan(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("only_assignee_can_merge"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("only_assignee_can_merge"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOnlyAssigneeCanMerge(refVal);
        }
    }
    return ok;
}


std::string UpdateMergeRequestSettingDto::getReviewMode() const
{
    return reviewMode_;
}

void UpdateMergeRequestSettingDto::setReviewMode(const std::string& value)
{
    reviewMode_ = value;
    reviewModeIsSet_ = true;
}

bool UpdateMergeRequestSettingDto::reviewModeIsSet() const
{
    return reviewModeIsSet_;
}

void UpdateMergeRequestSettingDto::unsetreviewMode()
{
    reviewModeIsSet_ = false;
}

bool UpdateMergeRequestSettingDto::isOnlyAllowMergeIfAllDiscussionsAreResolved() const
{
    return onlyAllowMergeIfAllDiscussionsAreResolved_;
}

void UpdateMergeRequestSettingDto::setOnlyAllowMergeIfAllDiscussionsAreResolved(bool value)
{
    onlyAllowMergeIfAllDiscussionsAreResolved_ = value;
    onlyAllowMergeIfAllDiscussionsAreResolvedIsSet_ = true;
}

bool UpdateMergeRequestSettingDto::onlyAllowMergeIfAllDiscussionsAreResolvedIsSet() const
{
    return onlyAllowMergeIfAllDiscussionsAreResolvedIsSet_;
}

void UpdateMergeRequestSettingDto::unsetonlyAllowMergeIfAllDiscussionsAreResolved()
{
    onlyAllowMergeIfAllDiscussionsAreResolvedIsSet_ = false;
}

bool UpdateMergeRequestSettingDto::isMustRelateIssue() const
{
    return mustRelateIssue_;
}

void UpdateMergeRequestSettingDto::setMustRelateIssue(bool value)
{
    mustRelateIssue_ = value;
    mustRelateIssueIsSet_ = true;
}

bool UpdateMergeRequestSettingDto::mustRelateIssueIsSet() const
{
    return mustRelateIssueIsSet_;
}

void UpdateMergeRequestSettingDto::unsetmustRelateIssue()
{
    mustRelateIssueIsSet_ = false;
}

bool UpdateMergeRequestSettingDto::isOnlyAllowOneIssueCheckPassed() const
{
    return onlyAllowOneIssueCheckPassed_;
}

void UpdateMergeRequestSettingDto::setOnlyAllowOneIssueCheckPassed(bool value)
{
    onlyAllowOneIssueCheckPassed_ = value;
    onlyAllowOneIssueCheckPassedIsSet_ = true;
}

bool UpdateMergeRequestSettingDto::onlyAllowOneIssueCheckPassedIsSet() const
{
    return onlyAllowOneIssueCheckPassedIsSet_;
}

void UpdateMergeRequestSettingDto::unsetonlyAllowOneIssueCheckPassed()
{
    onlyAllowOneIssueCheckPassedIsSet_ = false;
}

bool UpdateMergeRequestSettingDto::isNeedAllIssuesCheckPassed() const
{
    return needAllIssuesCheckPassed_;
}

void UpdateMergeRequestSettingDto::setNeedAllIssuesCheckPassed(bool value)
{
    needAllIssuesCheckPassed_ = value;
    needAllIssuesCheckPassedIsSet_ = true;
}

bool UpdateMergeRequestSettingDto::needAllIssuesCheckPassedIsSet() const
{
    return needAllIssuesCheckPassedIsSet_;
}

void UpdateMergeRequestSettingDto::unsetneedAllIssuesCheckPassed()
{
    needAllIssuesCheckPassedIsSet_ = false;
}

std::string UpdateMergeRequestSettingDto::getNeedRelateIssueBranches() const
{
    return needRelateIssueBranches_;
}

void UpdateMergeRequestSettingDto::setNeedRelateIssueBranches(const std::string& value)
{
    needRelateIssueBranches_ = value;
    needRelateIssueBranchesIsSet_ = true;
}

bool UpdateMergeRequestSettingDto::needRelateIssueBranchesIsSet() const
{
    return needRelateIssueBranchesIsSet_;
}

void UpdateMergeRequestSettingDto::unsetneedRelateIssueBranches()
{
    needRelateIssueBranchesIsSet_ = false;
}

bool UpdateMergeRequestSettingDto::isEvaluationMergeGate() const
{
    return evaluationMergeGate_;
}

void UpdateMergeRequestSettingDto::setEvaluationMergeGate(bool value)
{
    evaluationMergeGate_ = value;
    evaluationMergeGateIsSet_ = true;
}

bool UpdateMergeRequestSettingDto::evaluationMergeGateIsSet() const
{
    return evaluationMergeGateIsSet_;
}

void UpdateMergeRequestSettingDto::unsetevaluationMergeGate()
{
    evaluationMergeGateIsSet_ = false;
}

int32_t UpdateMergeRequestSettingDto::getEvaluationRole() const
{
    return evaluationRole_;
}

void UpdateMergeRequestSettingDto::setEvaluationRole(int32_t value)
{
    evaluationRole_ = value;
    evaluationRoleIsSet_ = true;
}

bool UpdateMergeRequestSettingDto::evaluationRoleIsSet() const
{
    return evaluationRoleIsSet_;
}

void UpdateMergeRequestSettingDto::unsetevaluationRole()
{
    evaluationRoleIsSet_ = false;
}

bool UpdateMergeRequestSettingDto::isDisableMergeBySelf() const
{
    return disableMergeBySelf_;
}

void UpdateMergeRequestSettingDto::setDisableMergeBySelf(bool value)
{
    disableMergeBySelf_ = value;
    disableMergeBySelfIsSet_ = true;
}

bool UpdateMergeRequestSettingDto::disableMergeBySelfIsSet() const
{
    return disableMergeBySelfIsSet_;
}

void UpdateMergeRequestSettingDto::unsetdisableMergeBySelf()
{
    disableMergeBySelfIsSet_ = false;
}

bool UpdateMergeRequestSettingDto::isDisableApproveBySelf() const
{
    return disableApproveBySelf_;
}

void UpdateMergeRequestSettingDto::setDisableApproveBySelf(bool value)
{
    disableApproveBySelf_ = value;
    disableApproveBySelfIsSet_ = true;
}

bool UpdateMergeRequestSettingDto::disableApproveBySelfIsSet() const
{
    return disableApproveBySelfIsSet_;
}

void UpdateMergeRequestSettingDto::unsetdisableApproveBySelf()
{
    disableApproveBySelfIsSet_ = false;
}

bool UpdateMergeRequestSettingDto::isDisableReviewBySelf() const
{
    return disableReviewBySelf_;
}

void UpdateMergeRequestSettingDto::setDisableReviewBySelf(bool value)
{
    disableReviewBySelf_ = value;
    disableReviewBySelfIsSet_ = true;
}

bool UpdateMergeRequestSettingDto::disableReviewBySelfIsSet() const
{
    return disableReviewBySelfIsSet_;
}

void UpdateMergeRequestSettingDto::unsetdisableReviewBySelf()
{
    disableReviewBySelfIsSet_ = false;
}

bool UpdateMergeRequestSettingDto::isCanForceMerge() const
{
    return canForceMerge_;
}

void UpdateMergeRequestSettingDto::setCanForceMerge(bool value)
{
    canForceMerge_ = value;
    canForceMergeIsSet_ = true;
}

bool UpdateMergeRequestSettingDto::canForceMergeIsSet() const
{
    return canForceMergeIsSet_;
}

void UpdateMergeRequestSettingDto::unsetcanForceMerge()
{
    canForceMergeIsSet_ = false;
}

bool UpdateMergeRequestSettingDto::isAddNotesAfterMerged() const
{
    return addNotesAfterMerged_;
}

void UpdateMergeRequestSettingDto::setAddNotesAfterMerged(bool value)
{
    addNotesAfterMerged_ = value;
    addNotesAfterMergedIsSet_ = true;
}

bool UpdateMergeRequestSettingDto::addNotesAfterMergedIsSet() const
{
    return addNotesAfterMergedIsSet_;
}

void UpdateMergeRequestSettingDto::unsetaddNotesAfterMerged()
{
    addNotesAfterMergedIsSet_ = false;
}

bool UpdateMergeRequestSettingDto::isMarkAutoMergedMrAsClosed() const
{
    return markAutoMergedMrAsClosed_;
}

void UpdateMergeRequestSettingDto::setMarkAutoMergedMrAsClosed(bool value)
{
    markAutoMergedMrAsClosed_ = value;
    markAutoMergedMrAsClosedIsSet_ = true;
}

bool UpdateMergeRequestSettingDto::markAutoMergedMrAsClosedIsSet() const
{
    return markAutoMergedMrAsClosedIsSet_;
}

void UpdateMergeRequestSettingDto::unsetmarkAutoMergedMrAsClosed()
{
    markAutoMergedMrAsClosedIsSet_ = false;
}

bool UpdateMergeRequestSettingDto::isCanReopen() const
{
    return canReopen_;
}

void UpdateMergeRequestSettingDto::setCanReopen(bool value)
{
    canReopen_ = value;
    canReopenIsSet_ = true;
}

bool UpdateMergeRequestSettingDto::canReopenIsSet() const
{
    return canReopenIsSet_;
}

void UpdateMergeRequestSettingDto::unsetcanReopen()
{
    canReopenIsSet_ = false;
}

bool UpdateMergeRequestSettingDto::isDeleteSourceBranchWhenMerged() const
{
    return deleteSourceBranchWhenMerged_;
}

void UpdateMergeRequestSettingDto::setDeleteSourceBranchWhenMerged(bool value)
{
    deleteSourceBranchWhenMerged_ = value;
    deleteSourceBranchWhenMergedIsSet_ = true;
}

bool UpdateMergeRequestSettingDto::deleteSourceBranchWhenMergedIsSet() const
{
    return deleteSourceBranchWhenMergedIsSet_;
}

void UpdateMergeRequestSettingDto::unsetdeleteSourceBranchWhenMerged()
{
    deleteSourceBranchWhenMergedIsSet_ = false;
}

bool UpdateMergeRequestSettingDto::isDisableSquashMerge() const
{
    return disableSquashMerge_;
}

void UpdateMergeRequestSettingDto::setDisableSquashMerge(bool value)
{
    disableSquashMerge_ = value;
    disableSquashMergeIsSet_ = true;
}

bool UpdateMergeRequestSettingDto::disableSquashMergeIsSet() const
{
    return disableSquashMergeIsSet_;
}

void UpdateMergeRequestSettingDto::unsetdisableSquashMerge()
{
    disableSquashMergeIsSet_ = false;
}

bool UpdateMergeRequestSettingDto::isAutoSquashMerge() const
{
    return autoSquashMerge_;
}

void UpdateMergeRequestSettingDto::setAutoSquashMerge(bool value)
{
    autoSquashMerge_ = value;
    autoSquashMergeIsSet_ = true;
}

bool UpdateMergeRequestSettingDto::autoSquashMergeIsSet() const
{
    return autoSquashMergeIsSet_;
}

void UpdateMergeRequestSettingDto::unsetautoSquashMerge()
{
    autoSquashMergeIsSet_ = false;
}

std::string UpdateMergeRequestSettingDto::getMergeMethod() const
{
    return mergeMethod_;
}

void UpdateMergeRequestSettingDto::setMergeMethod(const std::string& value)
{
    mergeMethod_ = value;
    mergeMethodIsSet_ = true;
}

bool UpdateMergeRequestSettingDto::mergeMethodIsSet() const
{
    return mergeMethodIsSet_;
}

void UpdateMergeRequestSettingDto::unsetmergeMethod()
{
    mergeMethodIsSet_ = false;
}

bool UpdateMergeRequestSettingDto::isSquashMergeWithNoMergeCommit() const
{
    return squashMergeWithNoMergeCommit_;
}

void UpdateMergeRequestSettingDto::setSquashMergeWithNoMergeCommit(bool value)
{
    squashMergeWithNoMergeCommit_ = value;
    squashMergeWithNoMergeCommitIsSet_ = true;
}

bool UpdateMergeRequestSettingDto::squashMergeWithNoMergeCommitIsSet() const
{
    return squashMergeWithNoMergeCommitIsSet_;
}

void UpdateMergeRequestSettingDto::unsetsquashMergeWithNoMergeCommit()
{
    squashMergeWithNoMergeCommitIsSet_ = false;
}

std::string UpdateMergeRequestSettingDto::getMergedCommitAuthor() const
{
    return mergedCommitAuthor_;
}

void UpdateMergeRequestSettingDto::setMergedCommitAuthor(const std::string& value)
{
    mergedCommitAuthor_ = value;
    mergedCommitAuthorIsSet_ = true;
}

bool UpdateMergeRequestSettingDto::mergedCommitAuthorIsSet() const
{
    return mergedCommitAuthorIsSet_;
}

void UpdateMergeRequestSettingDto::unsetmergedCommitAuthor()
{
    mergedCommitAuthorIsSet_ = false;
}

bool UpdateMergeRequestSettingDto::isEnableCustomEvaluation() const
{
    return enableCustomEvaluation_;
}

void UpdateMergeRequestSettingDto::setEnableCustomEvaluation(bool value)
{
    enableCustomEvaluation_ = value;
    enableCustomEvaluationIsSet_ = true;
}

bool UpdateMergeRequestSettingDto::enableCustomEvaluationIsSet() const
{
    return enableCustomEvaluationIsSet_;
}

void UpdateMergeRequestSettingDto::unsetenableCustomEvaluation()
{
    enableCustomEvaluationIsSet_ = false;
}

std::vector<std::string>& UpdateMergeRequestSettingDto::getEvaluationTypes()
{
    return evaluationTypes_;
}

void UpdateMergeRequestSettingDto::setEvaluationTypes(const std::vector<std::string>& value)
{
    evaluationTypes_ = value;
    evaluationTypesIsSet_ = true;
}

bool UpdateMergeRequestSettingDto::evaluationTypesIsSet() const
{
    return evaluationTypesIsSet_;
}

void UpdateMergeRequestSettingDto::unsetevaluationTypes()
{
    evaluationTypesIsSet_ = false;
}

int32_t UpdateMergeRequestSettingDto::getOnlyAllowMergeIfVoteBiggerThan() const
{
    return onlyAllowMergeIfVoteBiggerThan_;
}

void UpdateMergeRequestSettingDto::setOnlyAllowMergeIfVoteBiggerThan(int32_t value)
{
    onlyAllowMergeIfVoteBiggerThan_ = value;
    onlyAllowMergeIfVoteBiggerThanIsSet_ = true;
}

bool UpdateMergeRequestSettingDto::onlyAllowMergeIfVoteBiggerThanIsSet() const
{
    return onlyAllowMergeIfVoteBiggerThanIsSet_;
}

void UpdateMergeRequestSettingDto::unsetonlyAllowMergeIfVoteBiggerThan()
{
    onlyAllowMergeIfVoteBiggerThanIsSet_ = false;
}

bool UpdateMergeRequestSettingDto::isOnlyAssigneeCanMerge() const
{
    return onlyAssigneeCanMerge_;
}

void UpdateMergeRequestSettingDto::setOnlyAssigneeCanMerge(bool value)
{
    onlyAssigneeCanMerge_ = value;
    onlyAssigneeCanMergeIsSet_ = true;
}

bool UpdateMergeRequestSettingDto::onlyAssigneeCanMergeIsSet() const
{
    return onlyAssigneeCanMergeIsSet_;
}

void UpdateMergeRequestSettingDto::unsetonlyAssigneeCanMerge()
{
    onlyAssigneeCanMergeIsSet_ = false;
}

}
}
}
}
}


