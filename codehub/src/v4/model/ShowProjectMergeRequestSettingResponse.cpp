

#include "huaweicloud/codehub/v4/model/ShowProjectMergeRequestSettingResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ShowProjectMergeRequestSettingResponse::ShowProjectMergeRequestSettingResponse()
{
    id_ = 0;
    idIsSet_ = false;
    disableMergeBySelf_ = false;
    disableMergeBySelfIsSet_ = false;
    disableApproveBySelf_ = false;
    disableApproveBySelfIsSet_ = false;
    disableReviewBySelf_ = false;
    disableReviewBySelfIsSet_ = false;
    createdAt_ = "";
    createdAtIsSet_ = false;
    updatedAt_ = "";
    updatedAtIsSet_ = false;
    canForceMerge_ = false;
    canForceMergeIsSet_ = false;
    disableSquashMerge_ = false;
    disableSquashMergeIsSet_ = false;
    mustRelateIssue_ = false;
    mustRelateIssueIsSet_ = false;
    needRelateIssueBranches_ = "";
    needRelateIssueBranchesIsSet_ = false;
    needAllIssuesCheckPassed_ = false;
    needAllIssuesCheckPassedIsSet_ = false;
    reviewMode_ = "";
    reviewModeIsSet_ = false;
    addNotesAfterMerged_ = false;
    addNotesAfterMergedIsSet_ = false;
    mergedCommitAuthor_ = "";
    mergedCommitAuthorIsSet_ = false;
    evaluationRole_ = 0;
    evaluationRoleIsSet_ = false;
    evaluationMergeGate_ = false;
    evaluationMergeGateIsSet_ = false;
    markAutoMergedMrAsClosed_ = false;
    markAutoMergedMrAsClosedIsSet_ = false;
    deleteSourceBranchWhenMerged_ = false;
    deleteSourceBranchWhenMergedIsSet_ = false;
    autoSquashMerge_ = false;
    autoSquashMergeIsSet_ = false;
    squashMergeWithNoMergeCommit_ = false;
    squashMergeWithNoMergeCommitIsSet_ = false;
    onlyAllowOneIssueCheckPassed_ = false;
    onlyAllowOneIssueCheckPassedIsSet_ = false;
    enableCustomEvaluation_ = false;
    enableCustomEvaluationIsSet_ = false;
    evaluationTypesIsSet_ = false;
    canReopen_ = false;
    canReopenIsSet_ = false;
    onlyAllowMergeIfAllDiscussionsAreResolved_ = false;
    onlyAllowMergeIfAllDiscussionsAreResolvedIsSet_ = false;
    mergeMethod_ = "";
    mergeMethodIsSet_ = false;
    onlyAllowMergeIfVoteBiggerThan_ = 0;
    onlyAllowMergeIfVoteBiggerThanIsSet_ = false;
    onlyAssigneeCanMerge_ = false;
    onlyAssigneeCanMergeIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
}

ShowProjectMergeRequestSettingResponse::~ShowProjectMergeRequestSettingResponse() = default;

void ShowProjectMergeRequestSettingResponse::validate()
{
}

web::json::value ShowProjectMergeRequestSettingResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
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
    if(createdAtIsSet_) {
        val[utility::conversions::to_string_t("created_at")] = ModelBase::toJson(createdAt_);
    }
    if(updatedAtIsSet_) {
        val[utility::conversions::to_string_t("updated_at")] = ModelBase::toJson(updatedAt_);
    }
    if(canForceMergeIsSet_) {
        val[utility::conversions::to_string_t("can_force_merge")] = ModelBase::toJson(canForceMerge_);
    }
    if(disableSquashMergeIsSet_) {
        val[utility::conversions::to_string_t("disable_squash_merge")] = ModelBase::toJson(disableSquashMerge_);
    }
    if(mustRelateIssueIsSet_) {
        val[utility::conversions::to_string_t("must_relate_issue")] = ModelBase::toJson(mustRelateIssue_);
    }
    if(needRelateIssueBranchesIsSet_) {
        val[utility::conversions::to_string_t("need_relate_issue_branches")] = ModelBase::toJson(needRelateIssueBranches_);
    }
    if(needAllIssuesCheckPassedIsSet_) {
        val[utility::conversions::to_string_t("need_all_issues_check_passed")] = ModelBase::toJson(needAllIssuesCheckPassed_);
    }
    if(reviewModeIsSet_) {
        val[utility::conversions::to_string_t("review_mode")] = ModelBase::toJson(reviewMode_);
    }
    if(addNotesAfterMergedIsSet_) {
        val[utility::conversions::to_string_t("add_notes_after_merged")] = ModelBase::toJson(addNotesAfterMerged_);
    }
    if(mergedCommitAuthorIsSet_) {
        val[utility::conversions::to_string_t("merged_commit_author")] = ModelBase::toJson(mergedCommitAuthor_);
    }
    if(evaluationRoleIsSet_) {
        val[utility::conversions::to_string_t("evaluation_role")] = ModelBase::toJson(evaluationRole_);
    }
    if(evaluationMergeGateIsSet_) {
        val[utility::conversions::to_string_t("evaluation_merge_gate")] = ModelBase::toJson(evaluationMergeGate_);
    }
    if(markAutoMergedMrAsClosedIsSet_) {
        val[utility::conversions::to_string_t("mark_auto_merged_mr_as_closed")] = ModelBase::toJson(markAutoMergedMrAsClosed_);
    }
    if(deleteSourceBranchWhenMergedIsSet_) {
        val[utility::conversions::to_string_t("delete_source_branch_when_merged")] = ModelBase::toJson(deleteSourceBranchWhenMerged_);
    }
    if(autoSquashMergeIsSet_) {
        val[utility::conversions::to_string_t("auto_squash_merge")] = ModelBase::toJson(autoSquashMerge_);
    }
    if(squashMergeWithNoMergeCommitIsSet_) {
        val[utility::conversions::to_string_t("squash_merge_with_no_merge_commit")] = ModelBase::toJson(squashMergeWithNoMergeCommit_);
    }
    if(onlyAllowOneIssueCheckPassedIsSet_) {
        val[utility::conversions::to_string_t("only_allow_one_issue_check_passed")] = ModelBase::toJson(onlyAllowOneIssueCheckPassed_);
    }
    if(enableCustomEvaluationIsSet_) {
        val[utility::conversions::to_string_t("enable_custom_evaluation")] = ModelBase::toJson(enableCustomEvaluation_);
    }
    if(evaluationTypesIsSet_) {
        val[utility::conversions::to_string_t("evaluation_types")] = ModelBase::toJson(evaluationTypes_);
    }
    if(canReopenIsSet_) {
        val[utility::conversions::to_string_t("can_reopen")] = ModelBase::toJson(canReopen_);
    }
    if(onlyAllowMergeIfAllDiscussionsAreResolvedIsSet_) {
        val[utility::conversions::to_string_t("only_allow_merge_if_all_discussions_are_resolved")] = ModelBase::toJson(onlyAllowMergeIfAllDiscussionsAreResolved_);
    }
    if(mergeMethodIsSet_) {
        val[utility::conversions::to_string_t("merge_method")] = ModelBase::toJson(mergeMethod_);
    }
    if(onlyAllowMergeIfVoteBiggerThanIsSet_) {
        val[utility::conversions::to_string_t("only_allow_merge_if_vote_bigger_than")] = ModelBase::toJson(onlyAllowMergeIfVoteBiggerThan_);
    }
    if(onlyAssigneeCanMergeIsSet_) {
        val[utility::conversions::to_string_t("only_assignee_can_merge")] = ModelBase::toJson(onlyAssigneeCanMerge_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }

    return val;
}
bool ShowProjectMergeRequestSettingResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("can_force_merge"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("can_force_merge"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCanForceMerge(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("must_relate_issue"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("must_relate_issue"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMustRelateIssue(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("need_all_issues_check_passed"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("need_all_issues_check_passed"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNeedAllIssuesCheckPassed(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("review_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("review_mode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReviewMode(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("merged_commit_author"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("merged_commit_author"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMergedCommitAuthor(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("evaluation_merge_gate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("evaluation_merge_gate"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEvaluationMergeGate(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("delete_source_branch_when_merged"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("delete_source_branch_when_merged"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeleteSourceBranchWhenMerged(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("squash_merge_with_no_merge_commit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("squash_merge_with_no_merge_commit"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSquashMergeWithNoMergeCommit(refVal);
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
            std::vector<EvaluationTypeDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEvaluationTypes(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("only_allow_merge_if_all_discussions_are_resolved"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("only_allow_merge_if_all_discussions_are_resolved"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOnlyAllowMergeIfAllDiscussionsAreResolved(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    return ok;
}


int32_t ShowProjectMergeRequestSettingResponse::getId() const
{
    return id_;
}

void ShowProjectMergeRequestSettingResponse::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowProjectMergeRequestSettingResponse::idIsSet() const
{
    return idIsSet_;
}

void ShowProjectMergeRequestSettingResponse::unsetid()
{
    idIsSet_ = false;
}

bool ShowProjectMergeRequestSettingResponse::isDisableMergeBySelf() const
{
    return disableMergeBySelf_;
}

void ShowProjectMergeRequestSettingResponse::setDisableMergeBySelf(bool value)
{
    disableMergeBySelf_ = value;
    disableMergeBySelfIsSet_ = true;
}

bool ShowProjectMergeRequestSettingResponse::disableMergeBySelfIsSet() const
{
    return disableMergeBySelfIsSet_;
}

void ShowProjectMergeRequestSettingResponse::unsetdisableMergeBySelf()
{
    disableMergeBySelfIsSet_ = false;
}

bool ShowProjectMergeRequestSettingResponse::isDisableApproveBySelf() const
{
    return disableApproveBySelf_;
}

void ShowProjectMergeRequestSettingResponse::setDisableApproveBySelf(bool value)
{
    disableApproveBySelf_ = value;
    disableApproveBySelfIsSet_ = true;
}

bool ShowProjectMergeRequestSettingResponse::disableApproveBySelfIsSet() const
{
    return disableApproveBySelfIsSet_;
}

void ShowProjectMergeRequestSettingResponse::unsetdisableApproveBySelf()
{
    disableApproveBySelfIsSet_ = false;
}

bool ShowProjectMergeRequestSettingResponse::isDisableReviewBySelf() const
{
    return disableReviewBySelf_;
}

void ShowProjectMergeRequestSettingResponse::setDisableReviewBySelf(bool value)
{
    disableReviewBySelf_ = value;
    disableReviewBySelfIsSet_ = true;
}

bool ShowProjectMergeRequestSettingResponse::disableReviewBySelfIsSet() const
{
    return disableReviewBySelfIsSet_;
}

void ShowProjectMergeRequestSettingResponse::unsetdisableReviewBySelf()
{
    disableReviewBySelfIsSet_ = false;
}

std::string ShowProjectMergeRequestSettingResponse::getCreatedAt() const
{
    return createdAt_;
}

void ShowProjectMergeRequestSettingResponse::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool ShowProjectMergeRequestSettingResponse::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void ShowProjectMergeRequestSettingResponse::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string ShowProjectMergeRequestSettingResponse::getUpdatedAt() const
{
    return updatedAt_;
}

void ShowProjectMergeRequestSettingResponse::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool ShowProjectMergeRequestSettingResponse::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void ShowProjectMergeRequestSettingResponse::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

bool ShowProjectMergeRequestSettingResponse::isCanForceMerge() const
{
    return canForceMerge_;
}

void ShowProjectMergeRequestSettingResponse::setCanForceMerge(bool value)
{
    canForceMerge_ = value;
    canForceMergeIsSet_ = true;
}

bool ShowProjectMergeRequestSettingResponse::canForceMergeIsSet() const
{
    return canForceMergeIsSet_;
}

void ShowProjectMergeRequestSettingResponse::unsetcanForceMerge()
{
    canForceMergeIsSet_ = false;
}

bool ShowProjectMergeRequestSettingResponse::isDisableSquashMerge() const
{
    return disableSquashMerge_;
}

void ShowProjectMergeRequestSettingResponse::setDisableSquashMerge(bool value)
{
    disableSquashMerge_ = value;
    disableSquashMergeIsSet_ = true;
}

bool ShowProjectMergeRequestSettingResponse::disableSquashMergeIsSet() const
{
    return disableSquashMergeIsSet_;
}

void ShowProjectMergeRequestSettingResponse::unsetdisableSquashMerge()
{
    disableSquashMergeIsSet_ = false;
}

bool ShowProjectMergeRequestSettingResponse::isMustRelateIssue() const
{
    return mustRelateIssue_;
}

void ShowProjectMergeRequestSettingResponse::setMustRelateIssue(bool value)
{
    mustRelateIssue_ = value;
    mustRelateIssueIsSet_ = true;
}

bool ShowProjectMergeRequestSettingResponse::mustRelateIssueIsSet() const
{
    return mustRelateIssueIsSet_;
}

void ShowProjectMergeRequestSettingResponse::unsetmustRelateIssue()
{
    mustRelateIssueIsSet_ = false;
}

std::string ShowProjectMergeRequestSettingResponse::getNeedRelateIssueBranches() const
{
    return needRelateIssueBranches_;
}

void ShowProjectMergeRequestSettingResponse::setNeedRelateIssueBranches(const std::string& value)
{
    needRelateIssueBranches_ = value;
    needRelateIssueBranchesIsSet_ = true;
}

bool ShowProjectMergeRequestSettingResponse::needRelateIssueBranchesIsSet() const
{
    return needRelateIssueBranchesIsSet_;
}

void ShowProjectMergeRequestSettingResponse::unsetneedRelateIssueBranches()
{
    needRelateIssueBranchesIsSet_ = false;
}

bool ShowProjectMergeRequestSettingResponse::isNeedAllIssuesCheckPassed() const
{
    return needAllIssuesCheckPassed_;
}

void ShowProjectMergeRequestSettingResponse::setNeedAllIssuesCheckPassed(bool value)
{
    needAllIssuesCheckPassed_ = value;
    needAllIssuesCheckPassedIsSet_ = true;
}

bool ShowProjectMergeRequestSettingResponse::needAllIssuesCheckPassedIsSet() const
{
    return needAllIssuesCheckPassedIsSet_;
}

void ShowProjectMergeRequestSettingResponse::unsetneedAllIssuesCheckPassed()
{
    needAllIssuesCheckPassedIsSet_ = false;
}

std::string ShowProjectMergeRequestSettingResponse::getReviewMode() const
{
    return reviewMode_;
}

void ShowProjectMergeRequestSettingResponse::setReviewMode(const std::string& value)
{
    reviewMode_ = value;
    reviewModeIsSet_ = true;
}

bool ShowProjectMergeRequestSettingResponse::reviewModeIsSet() const
{
    return reviewModeIsSet_;
}

void ShowProjectMergeRequestSettingResponse::unsetreviewMode()
{
    reviewModeIsSet_ = false;
}

bool ShowProjectMergeRequestSettingResponse::isAddNotesAfterMerged() const
{
    return addNotesAfterMerged_;
}

void ShowProjectMergeRequestSettingResponse::setAddNotesAfterMerged(bool value)
{
    addNotesAfterMerged_ = value;
    addNotesAfterMergedIsSet_ = true;
}

bool ShowProjectMergeRequestSettingResponse::addNotesAfterMergedIsSet() const
{
    return addNotesAfterMergedIsSet_;
}

void ShowProjectMergeRequestSettingResponse::unsetaddNotesAfterMerged()
{
    addNotesAfterMergedIsSet_ = false;
}

std::string ShowProjectMergeRequestSettingResponse::getMergedCommitAuthor() const
{
    return mergedCommitAuthor_;
}

void ShowProjectMergeRequestSettingResponse::setMergedCommitAuthor(const std::string& value)
{
    mergedCommitAuthor_ = value;
    mergedCommitAuthorIsSet_ = true;
}

bool ShowProjectMergeRequestSettingResponse::mergedCommitAuthorIsSet() const
{
    return mergedCommitAuthorIsSet_;
}

void ShowProjectMergeRequestSettingResponse::unsetmergedCommitAuthor()
{
    mergedCommitAuthorIsSet_ = false;
}

int32_t ShowProjectMergeRequestSettingResponse::getEvaluationRole() const
{
    return evaluationRole_;
}

void ShowProjectMergeRequestSettingResponse::setEvaluationRole(int32_t value)
{
    evaluationRole_ = value;
    evaluationRoleIsSet_ = true;
}

bool ShowProjectMergeRequestSettingResponse::evaluationRoleIsSet() const
{
    return evaluationRoleIsSet_;
}

void ShowProjectMergeRequestSettingResponse::unsetevaluationRole()
{
    evaluationRoleIsSet_ = false;
}

bool ShowProjectMergeRequestSettingResponse::isEvaluationMergeGate() const
{
    return evaluationMergeGate_;
}

void ShowProjectMergeRequestSettingResponse::setEvaluationMergeGate(bool value)
{
    evaluationMergeGate_ = value;
    evaluationMergeGateIsSet_ = true;
}

bool ShowProjectMergeRequestSettingResponse::evaluationMergeGateIsSet() const
{
    return evaluationMergeGateIsSet_;
}

void ShowProjectMergeRequestSettingResponse::unsetevaluationMergeGate()
{
    evaluationMergeGateIsSet_ = false;
}

bool ShowProjectMergeRequestSettingResponse::isMarkAutoMergedMrAsClosed() const
{
    return markAutoMergedMrAsClosed_;
}

void ShowProjectMergeRequestSettingResponse::setMarkAutoMergedMrAsClosed(bool value)
{
    markAutoMergedMrAsClosed_ = value;
    markAutoMergedMrAsClosedIsSet_ = true;
}

bool ShowProjectMergeRequestSettingResponse::markAutoMergedMrAsClosedIsSet() const
{
    return markAutoMergedMrAsClosedIsSet_;
}

void ShowProjectMergeRequestSettingResponse::unsetmarkAutoMergedMrAsClosed()
{
    markAutoMergedMrAsClosedIsSet_ = false;
}

bool ShowProjectMergeRequestSettingResponse::isDeleteSourceBranchWhenMerged() const
{
    return deleteSourceBranchWhenMerged_;
}

void ShowProjectMergeRequestSettingResponse::setDeleteSourceBranchWhenMerged(bool value)
{
    deleteSourceBranchWhenMerged_ = value;
    deleteSourceBranchWhenMergedIsSet_ = true;
}

bool ShowProjectMergeRequestSettingResponse::deleteSourceBranchWhenMergedIsSet() const
{
    return deleteSourceBranchWhenMergedIsSet_;
}

void ShowProjectMergeRequestSettingResponse::unsetdeleteSourceBranchWhenMerged()
{
    deleteSourceBranchWhenMergedIsSet_ = false;
}

bool ShowProjectMergeRequestSettingResponse::isAutoSquashMerge() const
{
    return autoSquashMerge_;
}

void ShowProjectMergeRequestSettingResponse::setAutoSquashMerge(bool value)
{
    autoSquashMerge_ = value;
    autoSquashMergeIsSet_ = true;
}

bool ShowProjectMergeRequestSettingResponse::autoSquashMergeIsSet() const
{
    return autoSquashMergeIsSet_;
}

void ShowProjectMergeRequestSettingResponse::unsetautoSquashMerge()
{
    autoSquashMergeIsSet_ = false;
}

bool ShowProjectMergeRequestSettingResponse::isSquashMergeWithNoMergeCommit() const
{
    return squashMergeWithNoMergeCommit_;
}

void ShowProjectMergeRequestSettingResponse::setSquashMergeWithNoMergeCommit(bool value)
{
    squashMergeWithNoMergeCommit_ = value;
    squashMergeWithNoMergeCommitIsSet_ = true;
}

bool ShowProjectMergeRequestSettingResponse::squashMergeWithNoMergeCommitIsSet() const
{
    return squashMergeWithNoMergeCommitIsSet_;
}

void ShowProjectMergeRequestSettingResponse::unsetsquashMergeWithNoMergeCommit()
{
    squashMergeWithNoMergeCommitIsSet_ = false;
}

bool ShowProjectMergeRequestSettingResponse::isOnlyAllowOneIssueCheckPassed() const
{
    return onlyAllowOneIssueCheckPassed_;
}

void ShowProjectMergeRequestSettingResponse::setOnlyAllowOneIssueCheckPassed(bool value)
{
    onlyAllowOneIssueCheckPassed_ = value;
    onlyAllowOneIssueCheckPassedIsSet_ = true;
}

bool ShowProjectMergeRequestSettingResponse::onlyAllowOneIssueCheckPassedIsSet() const
{
    return onlyAllowOneIssueCheckPassedIsSet_;
}

void ShowProjectMergeRequestSettingResponse::unsetonlyAllowOneIssueCheckPassed()
{
    onlyAllowOneIssueCheckPassedIsSet_ = false;
}

bool ShowProjectMergeRequestSettingResponse::isEnableCustomEvaluation() const
{
    return enableCustomEvaluation_;
}

void ShowProjectMergeRequestSettingResponse::setEnableCustomEvaluation(bool value)
{
    enableCustomEvaluation_ = value;
    enableCustomEvaluationIsSet_ = true;
}

bool ShowProjectMergeRequestSettingResponse::enableCustomEvaluationIsSet() const
{
    return enableCustomEvaluationIsSet_;
}

void ShowProjectMergeRequestSettingResponse::unsetenableCustomEvaluation()
{
    enableCustomEvaluationIsSet_ = false;
}

std::vector<EvaluationTypeDto>& ShowProjectMergeRequestSettingResponse::getEvaluationTypes()
{
    return evaluationTypes_;
}

void ShowProjectMergeRequestSettingResponse::setEvaluationTypes(const std::vector<EvaluationTypeDto>& value)
{
    evaluationTypes_ = value;
    evaluationTypesIsSet_ = true;
}

bool ShowProjectMergeRequestSettingResponse::evaluationTypesIsSet() const
{
    return evaluationTypesIsSet_;
}

void ShowProjectMergeRequestSettingResponse::unsetevaluationTypes()
{
    evaluationTypesIsSet_ = false;
}

bool ShowProjectMergeRequestSettingResponse::isCanReopen() const
{
    return canReopen_;
}

void ShowProjectMergeRequestSettingResponse::setCanReopen(bool value)
{
    canReopen_ = value;
    canReopenIsSet_ = true;
}

bool ShowProjectMergeRequestSettingResponse::canReopenIsSet() const
{
    return canReopenIsSet_;
}

void ShowProjectMergeRequestSettingResponse::unsetcanReopen()
{
    canReopenIsSet_ = false;
}

bool ShowProjectMergeRequestSettingResponse::isOnlyAllowMergeIfAllDiscussionsAreResolved() const
{
    return onlyAllowMergeIfAllDiscussionsAreResolved_;
}

void ShowProjectMergeRequestSettingResponse::setOnlyAllowMergeIfAllDiscussionsAreResolved(bool value)
{
    onlyAllowMergeIfAllDiscussionsAreResolved_ = value;
    onlyAllowMergeIfAllDiscussionsAreResolvedIsSet_ = true;
}

bool ShowProjectMergeRequestSettingResponse::onlyAllowMergeIfAllDiscussionsAreResolvedIsSet() const
{
    return onlyAllowMergeIfAllDiscussionsAreResolvedIsSet_;
}

void ShowProjectMergeRequestSettingResponse::unsetonlyAllowMergeIfAllDiscussionsAreResolved()
{
    onlyAllowMergeIfAllDiscussionsAreResolvedIsSet_ = false;
}

std::string ShowProjectMergeRequestSettingResponse::getMergeMethod() const
{
    return mergeMethod_;
}

void ShowProjectMergeRequestSettingResponse::setMergeMethod(const std::string& value)
{
    mergeMethod_ = value;
    mergeMethodIsSet_ = true;
}

bool ShowProjectMergeRequestSettingResponse::mergeMethodIsSet() const
{
    return mergeMethodIsSet_;
}

void ShowProjectMergeRequestSettingResponse::unsetmergeMethod()
{
    mergeMethodIsSet_ = false;
}

int32_t ShowProjectMergeRequestSettingResponse::getOnlyAllowMergeIfVoteBiggerThan() const
{
    return onlyAllowMergeIfVoteBiggerThan_;
}

void ShowProjectMergeRequestSettingResponse::setOnlyAllowMergeIfVoteBiggerThan(int32_t value)
{
    onlyAllowMergeIfVoteBiggerThan_ = value;
    onlyAllowMergeIfVoteBiggerThanIsSet_ = true;
}

bool ShowProjectMergeRequestSettingResponse::onlyAllowMergeIfVoteBiggerThanIsSet() const
{
    return onlyAllowMergeIfVoteBiggerThanIsSet_;
}

void ShowProjectMergeRequestSettingResponse::unsetonlyAllowMergeIfVoteBiggerThan()
{
    onlyAllowMergeIfVoteBiggerThanIsSet_ = false;
}

bool ShowProjectMergeRequestSettingResponse::isOnlyAssigneeCanMerge() const
{
    return onlyAssigneeCanMerge_;
}

void ShowProjectMergeRequestSettingResponse::setOnlyAssigneeCanMerge(bool value)
{
    onlyAssigneeCanMerge_ = value;
    onlyAssigneeCanMergeIsSet_ = true;
}

bool ShowProjectMergeRequestSettingResponse::onlyAssigneeCanMergeIsSet() const
{
    return onlyAssigneeCanMergeIsSet_;
}

void ShowProjectMergeRequestSettingResponse::unsetonlyAssigneeCanMerge()
{
    onlyAssigneeCanMergeIsSet_ = false;
}

std::string ShowProjectMergeRequestSettingResponse::getProjectId() const
{
    return projectId_;
}

void ShowProjectMergeRequestSettingResponse::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowProjectMergeRequestSettingResponse::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowProjectMergeRequestSettingResponse::unsetprojectId()
{
    projectIdIsSet_ = false;
}

}
}
}
}
}


