

#include "huaweicloud/codeartsrepo/v4/model/ShowMergeRequestSettingResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




ShowMergeRequestSettingResponse::ShowMergeRequestSettingResponse()
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
    repositoryId_ = 0;
    repositoryIdIsSet_ = false;
}

ShowMergeRequestSettingResponse::~ShowMergeRequestSettingResponse() = default;

void ShowMergeRequestSettingResponse::validate()
{
}

web::json::value ShowMergeRequestSettingResponse::toJson() const
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
    if(repositoryIdIsSet_) {
        val[utility::conversions::to_string_t("repository_id")] = ModelBase::toJson(repositoryId_);
    }

    return val;
}
bool ShowMergeRequestSettingResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("repository_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repository_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepositoryId(refVal);
        }
    }
    return ok;
}


int32_t ShowMergeRequestSettingResponse::getId() const
{
    return id_;
}

void ShowMergeRequestSettingResponse::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowMergeRequestSettingResponse::idIsSet() const
{
    return idIsSet_;
}

void ShowMergeRequestSettingResponse::unsetid()
{
    idIsSet_ = false;
}

bool ShowMergeRequestSettingResponse::isDisableMergeBySelf() const
{
    return disableMergeBySelf_;
}

void ShowMergeRequestSettingResponse::setDisableMergeBySelf(bool value)
{
    disableMergeBySelf_ = value;
    disableMergeBySelfIsSet_ = true;
}

bool ShowMergeRequestSettingResponse::disableMergeBySelfIsSet() const
{
    return disableMergeBySelfIsSet_;
}

void ShowMergeRequestSettingResponse::unsetdisableMergeBySelf()
{
    disableMergeBySelfIsSet_ = false;
}

bool ShowMergeRequestSettingResponse::isDisableApproveBySelf() const
{
    return disableApproveBySelf_;
}

void ShowMergeRequestSettingResponse::setDisableApproveBySelf(bool value)
{
    disableApproveBySelf_ = value;
    disableApproveBySelfIsSet_ = true;
}

bool ShowMergeRequestSettingResponse::disableApproveBySelfIsSet() const
{
    return disableApproveBySelfIsSet_;
}

void ShowMergeRequestSettingResponse::unsetdisableApproveBySelf()
{
    disableApproveBySelfIsSet_ = false;
}

bool ShowMergeRequestSettingResponse::isDisableReviewBySelf() const
{
    return disableReviewBySelf_;
}

void ShowMergeRequestSettingResponse::setDisableReviewBySelf(bool value)
{
    disableReviewBySelf_ = value;
    disableReviewBySelfIsSet_ = true;
}

bool ShowMergeRequestSettingResponse::disableReviewBySelfIsSet() const
{
    return disableReviewBySelfIsSet_;
}

void ShowMergeRequestSettingResponse::unsetdisableReviewBySelf()
{
    disableReviewBySelfIsSet_ = false;
}

std::string ShowMergeRequestSettingResponse::getCreatedAt() const
{
    return createdAt_;
}

void ShowMergeRequestSettingResponse::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool ShowMergeRequestSettingResponse::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void ShowMergeRequestSettingResponse::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string ShowMergeRequestSettingResponse::getUpdatedAt() const
{
    return updatedAt_;
}

void ShowMergeRequestSettingResponse::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool ShowMergeRequestSettingResponse::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void ShowMergeRequestSettingResponse::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

bool ShowMergeRequestSettingResponse::isCanForceMerge() const
{
    return canForceMerge_;
}

void ShowMergeRequestSettingResponse::setCanForceMerge(bool value)
{
    canForceMerge_ = value;
    canForceMergeIsSet_ = true;
}

bool ShowMergeRequestSettingResponse::canForceMergeIsSet() const
{
    return canForceMergeIsSet_;
}

void ShowMergeRequestSettingResponse::unsetcanForceMerge()
{
    canForceMergeIsSet_ = false;
}

bool ShowMergeRequestSettingResponse::isDisableSquashMerge() const
{
    return disableSquashMerge_;
}

void ShowMergeRequestSettingResponse::setDisableSquashMerge(bool value)
{
    disableSquashMerge_ = value;
    disableSquashMergeIsSet_ = true;
}

bool ShowMergeRequestSettingResponse::disableSquashMergeIsSet() const
{
    return disableSquashMergeIsSet_;
}

void ShowMergeRequestSettingResponse::unsetdisableSquashMerge()
{
    disableSquashMergeIsSet_ = false;
}

bool ShowMergeRequestSettingResponse::isMustRelateIssue() const
{
    return mustRelateIssue_;
}

void ShowMergeRequestSettingResponse::setMustRelateIssue(bool value)
{
    mustRelateIssue_ = value;
    mustRelateIssueIsSet_ = true;
}

bool ShowMergeRequestSettingResponse::mustRelateIssueIsSet() const
{
    return mustRelateIssueIsSet_;
}

void ShowMergeRequestSettingResponse::unsetmustRelateIssue()
{
    mustRelateIssueIsSet_ = false;
}

std::string ShowMergeRequestSettingResponse::getNeedRelateIssueBranches() const
{
    return needRelateIssueBranches_;
}

void ShowMergeRequestSettingResponse::setNeedRelateIssueBranches(const std::string& value)
{
    needRelateIssueBranches_ = value;
    needRelateIssueBranchesIsSet_ = true;
}

bool ShowMergeRequestSettingResponse::needRelateIssueBranchesIsSet() const
{
    return needRelateIssueBranchesIsSet_;
}

void ShowMergeRequestSettingResponse::unsetneedRelateIssueBranches()
{
    needRelateIssueBranchesIsSet_ = false;
}

bool ShowMergeRequestSettingResponse::isNeedAllIssuesCheckPassed() const
{
    return needAllIssuesCheckPassed_;
}

void ShowMergeRequestSettingResponse::setNeedAllIssuesCheckPassed(bool value)
{
    needAllIssuesCheckPassed_ = value;
    needAllIssuesCheckPassedIsSet_ = true;
}

bool ShowMergeRequestSettingResponse::needAllIssuesCheckPassedIsSet() const
{
    return needAllIssuesCheckPassedIsSet_;
}

void ShowMergeRequestSettingResponse::unsetneedAllIssuesCheckPassed()
{
    needAllIssuesCheckPassedIsSet_ = false;
}

std::string ShowMergeRequestSettingResponse::getReviewMode() const
{
    return reviewMode_;
}

void ShowMergeRequestSettingResponse::setReviewMode(const std::string& value)
{
    reviewMode_ = value;
    reviewModeIsSet_ = true;
}

bool ShowMergeRequestSettingResponse::reviewModeIsSet() const
{
    return reviewModeIsSet_;
}

void ShowMergeRequestSettingResponse::unsetreviewMode()
{
    reviewModeIsSet_ = false;
}

bool ShowMergeRequestSettingResponse::isAddNotesAfterMerged() const
{
    return addNotesAfterMerged_;
}

void ShowMergeRequestSettingResponse::setAddNotesAfterMerged(bool value)
{
    addNotesAfterMerged_ = value;
    addNotesAfterMergedIsSet_ = true;
}

bool ShowMergeRequestSettingResponse::addNotesAfterMergedIsSet() const
{
    return addNotesAfterMergedIsSet_;
}

void ShowMergeRequestSettingResponse::unsetaddNotesAfterMerged()
{
    addNotesAfterMergedIsSet_ = false;
}

std::string ShowMergeRequestSettingResponse::getMergedCommitAuthor() const
{
    return mergedCommitAuthor_;
}

void ShowMergeRequestSettingResponse::setMergedCommitAuthor(const std::string& value)
{
    mergedCommitAuthor_ = value;
    mergedCommitAuthorIsSet_ = true;
}

bool ShowMergeRequestSettingResponse::mergedCommitAuthorIsSet() const
{
    return mergedCommitAuthorIsSet_;
}

void ShowMergeRequestSettingResponse::unsetmergedCommitAuthor()
{
    mergedCommitAuthorIsSet_ = false;
}

int32_t ShowMergeRequestSettingResponse::getEvaluationRole() const
{
    return evaluationRole_;
}

void ShowMergeRequestSettingResponse::setEvaluationRole(int32_t value)
{
    evaluationRole_ = value;
    evaluationRoleIsSet_ = true;
}

bool ShowMergeRequestSettingResponse::evaluationRoleIsSet() const
{
    return evaluationRoleIsSet_;
}

void ShowMergeRequestSettingResponse::unsetevaluationRole()
{
    evaluationRoleIsSet_ = false;
}

bool ShowMergeRequestSettingResponse::isEvaluationMergeGate() const
{
    return evaluationMergeGate_;
}

void ShowMergeRequestSettingResponse::setEvaluationMergeGate(bool value)
{
    evaluationMergeGate_ = value;
    evaluationMergeGateIsSet_ = true;
}

bool ShowMergeRequestSettingResponse::evaluationMergeGateIsSet() const
{
    return evaluationMergeGateIsSet_;
}

void ShowMergeRequestSettingResponse::unsetevaluationMergeGate()
{
    evaluationMergeGateIsSet_ = false;
}

bool ShowMergeRequestSettingResponse::isMarkAutoMergedMrAsClosed() const
{
    return markAutoMergedMrAsClosed_;
}

void ShowMergeRequestSettingResponse::setMarkAutoMergedMrAsClosed(bool value)
{
    markAutoMergedMrAsClosed_ = value;
    markAutoMergedMrAsClosedIsSet_ = true;
}

bool ShowMergeRequestSettingResponse::markAutoMergedMrAsClosedIsSet() const
{
    return markAutoMergedMrAsClosedIsSet_;
}

void ShowMergeRequestSettingResponse::unsetmarkAutoMergedMrAsClosed()
{
    markAutoMergedMrAsClosedIsSet_ = false;
}

bool ShowMergeRequestSettingResponse::isDeleteSourceBranchWhenMerged() const
{
    return deleteSourceBranchWhenMerged_;
}

void ShowMergeRequestSettingResponse::setDeleteSourceBranchWhenMerged(bool value)
{
    deleteSourceBranchWhenMerged_ = value;
    deleteSourceBranchWhenMergedIsSet_ = true;
}

bool ShowMergeRequestSettingResponse::deleteSourceBranchWhenMergedIsSet() const
{
    return deleteSourceBranchWhenMergedIsSet_;
}

void ShowMergeRequestSettingResponse::unsetdeleteSourceBranchWhenMerged()
{
    deleteSourceBranchWhenMergedIsSet_ = false;
}

bool ShowMergeRequestSettingResponse::isAutoSquashMerge() const
{
    return autoSquashMerge_;
}

void ShowMergeRequestSettingResponse::setAutoSquashMerge(bool value)
{
    autoSquashMerge_ = value;
    autoSquashMergeIsSet_ = true;
}

bool ShowMergeRequestSettingResponse::autoSquashMergeIsSet() const
{
    return autoSquashMergeIsSet_;
}

void ShowMergeRequestSettingResponse::unsetautoSquashMerge()
{
    autoSquashMergeIsSet_ = false;
}

bool ShowMergeRequestSettingResponse::isSquashMergeWithNoMergeCommit() const
{
    return squashMergeWithNoMergeCommit_;
}

void ShowMergeRequestSettingResponse::setSquashMergeWithNoMergeCommit(bool value)
{
    squashMergeWithNoMergeCommit_ = value;
    squashMergeWithNoMergeCommitIsSet_ = true;
}

bool ShowMergeRequestSettingResponse::squashMergeWithNoMergeCommitIsSet() const
{
    return squashMergeWithNoMergeCommitIsSet_;
}

void ShowMergeRequestSettingResponse::unsetsquashMergeWithNoMergeCommit()
{
    squashMergeWithNoMergeCommitIsSet_ = false;
}

bool ShowMergeRequestSettingResponse::isOnlyAllowOneIssueCheckPassed() const
{
    return onlyAllowOneIssueCheckPassed_;
}

void ShowMergeRequestSettingResponse::setOnlyAllowOneIssueCheckPassed(bool value)
{
    onlyAllowOneIssueCheckPassed_ = value;
    onlyAllowOneIssueCheckPassedIsSet_ = true;
}

bool ShowMergeRequestSettingResponse::onlyAllowOneIssueCheckPassedIsSet() const
{
    return onlyAllowOneIssueCheckPassedIsSet_;
}

void ShowMergeRequestSettingResponse::unsetonlyAllowOneIssueCheckPassed()
{
    onlyAllowOneIssueCheckPassedIsSet_ = false;
}

bool ShowMergeRequestSettingResponse::isEnableCustomEvaluation() const
{
    return enableCustomEvaluation_;
}

void ShowMergeRequestSettingResponse::setEnableCustomEvaluation(bool value)
{
    enableCustomEvaluation_ = value;
    enableCustomEvaluationIsSet_ = true;
}

bool ShowMergeRequestSettingResponse::enableCustomEvaluationIsSet() const
{
    return enableCustomEvaluationIsSet_;
}

void ShowMergeRequestSettingResponse::unsetenableCustomEvaluation()
{
    enableCustomEvaluationIsSet_ = false;
}

std::vector<EvaluationTypeDto>& ShowMergeRequestSettingResponse::getEvaluationTypes()
{
    return evaluationTypes_;
}

void ShowMergeRequestSettingResponse::setEvaluationTypes(const std::vector<EvaluationTypeDto>& value)
{
    evaluationTypes_ = value;
    evaluationTypesIsSet_ = true;
}

bool ShowMergeRequestSettingResponse::evaluationTypesIsSet() const
{
    return evaluationTypesIsSet_;
}

void ShowMergeRequestSettingResponse::unsetevaluationTypes()
{
    evaluationTypesIsSet_ = false;
}

bool ShowMergeRequestSettingResponse::isCanReopen() const
{
    return canReopen_;
}

void ShowMergeRequestSettingResponse::setCanReopen(bool value)
{
    canReopen_ = value;
    canReopenIsSet_ = true;
}

bool ShowMergeRequestSettingResponse::canReopenIsSet() const
{
    return canReopenIsSet_;
}

void ShowMergeRequestSettingResponse::unsetcanReopen()
{
    canReopenIsSet_ = false;
}

bool ShowMergeRequestSettingResponse::isOnlyAllowMergeIfAllDiscussionsAreResolved() const
{
    return onlyAllowMergeIfAllDiscussionsAreResolved_;
}

void ShowMergeRequestSettingResponse::setOnlyAllowMergeIfAllDiscussionsAreResolved(bool value)
{
    onlyAllowMergeIfAllDiscussionsAreResolved_ = value;
    onlyAllowMergeIfAllDiscussionsAreResolvedIsSet_ = true;
}

bool ShowMergeRequestSettingResponse::onlyAllowMergeIfAllDiscussionsAreResolvedIsSet() const
{
    return onlyAllowMergeIfAllDiscussionsAreResolvedIsSet_;
}

void ShowMergeRequestSettingResponse::unsetonlyAllowMergeIfAllDiscussionsAreResolved()
{
    onlyAllowMergeIfAllDiscussionsAreResolvedIsSet_ = false;
}

std::string ShowMergeRequestSettingResponse::getMergeMethod() const
{
    return mergeMethod_;
}

void ShowMergeRequestSettingResponse::setMergeMethod(const std::string& value)
{
    mergeMethod_ = value;
    mergeMethodIsSet_ = true;
}

bool ShowMergeRequestSettingResponse::mergeMethodIsSet() const
{
    return mergeMethodIsSet_;
}

void ShowMergeRequestSettingResponse::unsetmergeMethod()
{
    mergeMethodIsSet_ = false;
}

int32_t ShowMergeRequestSettingResponse::getOnlyAllowMergeIfVoteBiggerThan() const
{
    return onlyAllowMergeIfVoteBiggerThan_;
}

void ShowMergeRequestSettingResponse::setOnlyAllowMergeIfVoteBiggerThan(int32_t value)
{
    onlyAllowMergeIfVoteBiggerThan_ = value;
    onlyAllowMergeIfVoteBiggerThanIsSet_ = true;
}

bool ShowMergeRequestSettingResponse::onlyAllowMergeIfVoteBiggerThanIsSet() const
{
    return onlyAllowMergeIfVoteBiggerThanIsSet_;
}

void ShowMergeRequestSettingResponse::unsetonlyAllowMergeIfVoteBiggerThan()
{
    onlyAllowMergeIfVoteBiggerThanIsSet_ = false;
}

bool ShowMergeRequestSettingResponse::isOnlyAssigneeCanMerge() const
{
    return onlyAssigneeCanMerge_;
}

void ShowMergeRequestSettingResponse::setOnlyAssigneeCanMerge(bool value)
{
    onlyAssigneeCanMerge_ = value;
    onlyAssigneeCanMergeIsSet_ = true;
}

bool ShowMergeRequestSettingResponse::onlyAssigneeCanMergeIsSet() const
{
    return onlyAssigneeCanMergeIsSet_;
}

void ShowMergeRequestSettingResponse::unsetonlyAssigneeCanMerge()
{
    onlyAssigneeCanMergeIsSet_ = false;
}

int32_t ShowMergeRequestSettingResponse::getRepositoryId() const
{
    return repositoryId_;
}

void ShowMergeRequestSettingResponse::setRepositoryId(int32_t value)
{
    repositoryId_ = value;
    repositoryIdIsSet_ = true;
}

bool ShowMergeRequestSettingResponse::repositoryIdIsSet() const
{
    return repositoryIdIsSet_;
}

void ShowMergeRequestSettingResponse::unsetrepositoryId()
{
    repositoryIdIsSet_ = false;
}

}
}
}
}
}


