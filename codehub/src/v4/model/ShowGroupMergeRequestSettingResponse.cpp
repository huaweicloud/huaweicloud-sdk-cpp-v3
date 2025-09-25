

#include "huaweicloud/codehub/v4/model/ShowGroupMergeRequestSettingResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




ShowGroupMergeRequestSettingResponse::ShowGroupMergeRequestSettingResponse()
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
    groupId_ = 0;
    groupIdIsSet_ = false;
}

ShowGroupMergeRequestSettingResponse::~ShowGroupMergeRequestSettingResponse() = default;

void ShowGroupMergeRequestSettingResponse::validate()
{
}

web::json::value ShowGroupMergeRequestSettingResponse::toJson() const
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
    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }

    return val;
}
bool ShowGroupMergeRequestSettingResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
        }
    }
    return ok;
}


int32_t ShowGroupMergeRequestSettingResponse::getId() const
{
    return id_;
}

void ShowGroupMergeRequestSettingResponse::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowGroupMergeRequestSettingResponse::idIsSet() const
{
    return idIsSet_;
}

void ShowGroupMergeRequestSettingResponse::unsetid()
{
    idIsSet_ = false;
}

bool ShowGroupMergeRequestSettingResponse::isDisableMergeBySelf() const
{
    return disableMergeBySelf_;
}

void ShowGroupMergeRequestSettingResponse::setDisableMergeBySelf(bool value)
{
    disableMergeBySelf_ = value;
    disableMergeBySelfIsSet_ = true;
}

bool ShowGroupMergeRequestSettingResponse::disableMergeBySelfIsSet() const
{
    return disableMergeBySelfIsSet_;
}

void ShowGroupMergeRequestSettingResponse::unsetdisableMergeBySelf()
{
    disableMergeBySelfIsSet_ = false;
}

bool ShowGroupMergeRequestSettingResponse::isDisableApproveBySelf() const
{
    return disableApproveBySelf_;
}

void ShowGroupMergeRequestSettingResponse::setDisableApproveBySelf(bool value)
{
    disableApproveBySelf_ = value;
    disableApproveBySelfIsSet_ = true;
}

bool ShowGroupMergeRequestSettingResponse::disableApproveBySelfIsSet() const
{
    return disableApproveBySelfIsSet_;
}

void ShowGroupMergeRequestSettingResponse::unsetdisableApproveBySelf()
{
    disableApproveBySelfIsSet_ = false;
}

bool ShowGroupMergeRequestSettingResponse::isDisableReviewBySelf() const
{
    return disableReviewBySelf_;
}

void ShowGroupMergeRequestSettingResponse::setDisableReviewBySelf(bool value)
{
    disableReviewBySelf_ = value;
    disableReviewBySelfIsSet_ = true;
}

bool ShowGroupMergeRequestSettingResponse::disableReviewBySelfIsSet() const
{
    return disableReviewBySelfIsSet_;
}

void ShowGroupMergeRequestSettingResponse::unsetdisableReviewBySelf()
{
    disableReviewBySelfIsSet_ = false;
}

std::string ShowGroupMergeRequestSettingResponse::getCreatedAt() const
{
    return createdAt_;
}

void ShowGroupMergeRequestSettingResponse::setCreatedAt(const std::string& value)
{
    createdAt_ = value;
    createdAtIsSet_ = true;
}

bool ShowGroupMergeRequestSettingResponse::createdAtIsSet() const
{
    return createdAtIsSet_;
}

void ShowGroupMergeRequestSettingResponse::unsetcreatedAt()
{
    createdAtIsSet_ = false;
}

std::string ShowGroupMergeRequestSettingResponse::getUpdatedAt() const
{
    return updatedAt_;
}

void ShowGroupMergeRequestSettingResponse::setUpdatedAt(const std::string& value)
{
    updatedAt_ = value;
    updatedAtIsSet_ = true;
}

bool ShowGroupMergeRequestSettingResponse::updatedAtIsSet() const
{
    return updatedAtIsSet_;
}

void ShowGroupMergeRequestSettingResponse::unsetupdatedAt()
{
    updatedAtIsSet_ = false;
}

bool ShowGroupMergeRequestSettingResponse::isCanForceMerge() const
{
    return canForceMerge_;
}

void ShowGroupMergeRequestSettingResponse::setCanForceMerge(bool value)
{
    canForceMerge_ = value;
    canForceMergeIsSet_ = true;
}

bool ShowGroupMergeRequestSettingResponse::canForceMergeIsSet() const
{
    return canForceMergeIsSet_;
}

void ShowGroupMergeRequestSettingResponse::unsetcanForceMerge()
{
    canForceMergeIsSet_ = false;
}

bool ShowGroupMergeRequestSettingResponse::isDisableSquashMerge() const
{
    return disableSquashMerge_;
}

void ShowGroupMergeRequestSettingResponse::setDisableSquashMerge(bool value)
{
    disableSquashMerge_ = value;
    disableSquashMergeIsSet_ = true;
}

bool ShowGroupMergeRequestSettingResponse::disableSquashMergeIsSet() const
{
    return disableSquashMergeIsSet_;
}

void ShowGroupMergeRequestSettingResponse::unsetdisableSquashMerge()
{
    disableSquashMergeIsSet_ = false;
}

bool ShowGroupMergeRequestSettingResponse::isMustRelateIssue() const
{
    return mustRelateIssue_;
}

void ShowGroupMergeRequestSettingResponse::setMustRelateIssue(bool value)
{
    mustRelateIssue_ = value;
    mustRelateIssueIsSet_ = true;
}

bool ShowGroupMergeRequestSettingResponse::mustRelateIssueIsSet() const
{
    return mustRelateIssueIsSet_;
}

void ShowGroupMergeRequestSettingResponse::unsetmustRelateIssue()
{
    mustRelateIssueIsSet_ = false;
}

std::string ShowGroupMergeRequestSettingResponse::getNeedRelateIssueBranches() const
{
    return needRelateIssueBranches_;
}

void ShowGroupMergeRequestSettingResponse::setNeedRelateIssueBranches(const std::string& value)
{
    needRelateIssueBranches_ = value;
    needRelateIssueBranchesIsSet_ = true;
}

bool ShowGroupMergeRequestSettingResponse::needRelateIssueBranchesIsSet() const
{
    return needRelateIssueBranchesIsSet_;
}

void ShowGroupMergeRequestSettingResponse::unsetneedRelateIssueBranches()
{
    needRelateIssueBranchesIsSet_ = false;
}

bool ShowGroupMergeRequestSettingResponse::isNeedAllIssuesCheckPassed() const
{
    return needAllIssuesCheckPassed_;
}

void ShowGroupMergeRequestSettingResponse::setNeedAllIssuesCheckPassed(bool value)
{
    needAllIssuesCheckPassed_ = value;
    needAllIssuesCheckPassedIsSet_ = true;
}

bool ShowGroupMergeRequestSettingResponse::needAllIssuesCheckPassedIsSet() const
{
    return needAllIssuesCheckPassedIsSet_;
}

void ShowGroupMergeRequestSettingResponse::unsetneedAllIssuesCheckPassed()
{
    needAllIssuesCheckPassedIsSet_ = false;
}

std::string ShowGroupMergeRequestSettingResponse::getReviewMode() const
{
    return reviewMode_;
}

void ShowGroupMergeRequestSettingResponse::setReviewMode(const std::string& value)
{
    reviewMode_ = value;
    reviewModeIsSet_ = true;
}

bool ShowGroupMergeRequestSettingResponse::reviewModeIsSet() const
{
    return reviewModeIsSet_;
}

void ShowGroupMergeRequestSettingResponse::unsetreviewMode()
{
    reviewModeIsSet_ = false;
}

bool ShowGroupMergeRequestSettingResponse::isAddNotesAfterMerged() const
{
    return addNotesAfterMerged_;
}

void ShowGroupMergeRequestSettingResponse::setAddNotesAfterMerged(bool value)
{
    addNotesAfterMerged_ = value;
    addNotesAfterMergedIsSet_ = true;
}

bool ShowGroupMergeRequestSettingResponse::addNotesAfterMergedIsSet() const
{
    return addNotesAfterMergedIsSet_;
}

void ShowGroupMergeRequestSettingResponse::unsetaddNotesAfterMerged()
{
    addNotesAfterMergedIsSet_ = false;
}

std::string ShowGroupMergeRequestSettingResponse::getMergedCommitAuthor() const
{
    return mergedCommitAuthor_;
}

void ShowGroupMergeRequestSettingResponse::setMergedCommitAuthor(const std::string& value)
{
    mergedCommitAuthor_ = value;
    mergedCommitAuthorIsSet_ = true;
}

bool ShowGroupMergeRequestSettingResponse::mergedCommitAuthorIsSet() const
{
    return mergedCommitAuthorIsSet_;
}

void ShowGroupMergeRequestSettingResponse::unsetmergedCommitAuthor()
{
    mergedCommitAuthorIsSet_ = false;
}

int32_t ShowGroupMergeRequestSettingResponse::getEvaluationRole() const
{
    return evaluationRole_;
}

void ShowGroupMergeRequestSettingResponse::setEvaluationRole(int32_t value)
{
    evaluationRole_ = value;
    evaluationRoleIsSet_ = true;
}

bool ShowGroupMergeRequestSettingResponse::evaluationRoleIsSet() const
{
    return evaluationRoleIsSet_;
}

void ShowGroupMergeRequestSettingResponse::unsetevaluationRole()
{
    evaluationRoleIsSet_ = false;
}

bool ShowGroupMergeRequestSettingResponse::isEvaluationMergeGate() const
{
    return evaluationMergeGate_;
}

void ShowGroupMergeRequestSettingResponse::setEvaluationMergeGate(bool value)
{
    evaluationMergeGate_ = value;
    evaluationMergeGateIsSet_ = true;
}

bool ShowGroupMergeRequestSettingResponse::evaluationMergeGateIsSet() const
{
    return evaluationMergeGateIsSet_;
}

void ShowGroupMergeRequestSettingResponse::unsetevaluationMergeGate()
{
    evaluationMergeGateIsSet_ = false;
}

bool ShowGroupMergeRequestSettingResponse::isMarkAutoMergedMrAsClosed() const
{
    return markAutoMergedMrAsClosed_;
}

void ShowGroupMergeRequestSettingResponse::setMarkAutoMergedMrAsClosed(bool value)
{
    markAutoMergedMrAsClosed_ = value;
    markAutoMergedMrAsClosedIsSet_ = true;
}

bool ShowGroupMergeRequestSettingResponse::markAutoMergedMrAsClosedIsSet() const
{
    return markAutoMergedMrAsClosedIsSet_;
}

void ShowGroupMergeRequestSettingResponse::unsetmarkAutoMergedMrAsClosed()
{
    markAutoMergedMrAsClosedIsSet_ = false;
}

bool ShowGroupMergeRequestSettingResponse::isDeleteSourceBranchWhenMerged() const
{
    return deleteSourceBranchWhenMerged_;
}

void ShowGroupMergeRequestSettingResponse::setDeleteSourceBranchWhenMerged(bool value)
{
    deleteSourceBranchWhenMerged_ = value;
    deleteSourceBranchWhenMergedIsSet_ = true;
}

bool ShowGroupMergeRequestSettingResponse::deleteSourceBranchWhenMergedIsSet() const
{
    return deleteSourceBranchWhenMergedIsSet_;
}

void ShowGroupMergeRequestSettingResponse::unsetdeleteSourceBranchWhenMerged()
{
    deleteSourceBranchWhenMergedIsSet_ = false;
}

bool ShowGroupMergeRequestSettingResponse::isAutoSquashMerge() const
{
    return autoSquashMerge_;
}

void ShowGroupMergeRequestSettingResponse::setAutoSquashMerge(bool value)
{
    autoSquashMerge_ = value;
    autoSquashMergeIsSet_ = true;
}

bool ShowGroupMergeRequestSettingResponse::autoSquashMergeIsSet() const
{
    return autoSquashMergeIsSet_;
}

void ShowGroupMergeRequestSettingResponse::unsetautoSquashMerge()
{
    autoSquashMergeIsSet_ = false;
}

bool ShowGroupMergeRequestSettingResponse::isSquashMergeWithNoMergeCommit() const
{
    return squashMergeWithNoMergeCommit_;
}

void ShowGroupMergeRequestSettingResponse::setSquashMergeWithNoMergeCommit(bool value)
{
    squashMergeWithNoMergeCommit_ = value;
    squashMergeWithNoMergeCommitIsSet_ = true;
}

bool ShowGroupMergeRequestSettingResponse::squashMergeWithNoMergeCommitIsSet() const
{
    return squashMergeWithNoMergeCommitIsSet_;
}

void ShowGroupMergeRequestSettingResponse::unsetsquashMergeWithNoMergeCommit()
{
    squashMergeWithNoMergeCommitIsSet_ = false;
}

bool ShowGroupMergeRequestSettingResponse::isOnlyAllowOneIssueCheckPassed() const
{
    return onlyAllowOneIssueCheckPassed_;
}

void ShowGroupMergeRequestSettingResponse::setOnlyAllowOneIssueCheckPassed(bool value)
{
    onlyAllowOneIssueCheckPassed_ = value;
    onlyAllowOneIssueCheckPassedIsSet_ = true;
}

bool ShowGroupMergeRequestSettingResponse::onlyAllowOneIssueCheckPassedIsSet() const
{
    return onlyAllowOneIssueCheckPassedIsSet_;
}

void ShowGroupMergeRequestSettingResponse::unsetonlyAllowOneIssueCheckPassed()
{
    onlyAllowOneIssueCheckPassedIsSet_ = false;
}

bool ShowGroupMergeRequestSettingResponse::isEnableCustomEvaluation() const
{
    return enableCustomEvaluation_;
}

void ShowGroupMergeRequestSettingResponse::setEnableCustomEvaluation(bool value)
{
    enableCustomEvaluation_ = value;
    enableCustomEvaluationIsSet_ = true;
}

bool ShowGroupMergeRequestSettingResponse::enableCustomEvaluationIsSet() const
{
    return enableCustomEvaluationIsSet_;
}

void ShowGroupMergeRequestSettingResponse::unsetenableCustomEvaluation()
{
    enableCustomEvaluationIsSet_ = false;
}

std::vector<EvaluationTypeDto>& ShowGroupMergeRequestSettingResponse::getEvaluationTypes()
{
    return evaluationTypes_;
}

void ShowGroupMergeRequestSettingResponse::setEvaluationTypes(const std::vector<EvaluationTypeDto>& value)
{
    evaluationTypes_ = value;
    evaluationTypesIsSet_ = true;
}

bool ShowGroupMergeRequestSettingResponse::evaluationTypesIsSet() const
{
    return evaluationTypesIsSet_;
}

void ShowGroupMergeRequestSettingResponse::unsetevaluationTypes()
{
    evaluationTypesIsSet_ = false;
}

bool ShowGroupMergeRequestSettingResponse::isCanReopen() const
{
    return canReopen_;
}

void ShowGroupMergeRequestSettingResponse::setCanReopen(bool value)
{
    canReopen_ = value;
    canReopenIsSet_ = true;
}

bool ShowGroupMergeRequestSettingResponse::canReopenIsSet() const
{
    return canReopenIsSet_;
}

void ShowGroupMergeRequestSettingResponse::unsetcanReopen()
{
    canReopenIsSet_ = false;
}

bool ShowGroupMergeRequestSettingResponse::isOnlyAllowMergeIfAllDiscussionsAreResolved() const
{
    return onlyAllowMergeIfAllDiscussionsAreResolved_;
}

void ShowGroupMergeRequestSettingResponse::setOnlyAllowMergeIfAllDiscussionsAreResolved(bool value)
{
    onlyAllowMergeIfAllDiscussionsAreResolved_ = value;
    onlyAllowMergeIfAllDiscussionsAreResolvedIsSet_ = true;
}

bool ShowGroupMergeRequestSettingResponse::onlyAllowMergeIfAllDiscussionsAreResolvedIsSet() const
{
    return onlyAllowMergeIfAllDiscussionsAreResolvedIsSet_;
}

void ShowGroupMergeRequestSettingResponse::unsetonlyAllowMergeIfAllDiscussionsAreResolved()
{
    onlyAllowMergeIfAllDiscussionsAreResolvedIsSet_ = false;
}

std::string ShowGroupMergeRequestSettingResponse::getMergeMethod() const
{
    return mergeMethod_;
}

void ShowGroupMergeRequestSettingResponse::setMergeMethod(const std::string& value)
{
    mergeMethod_ = value;
    mergeMethodIsSet_ = true;
}

bool ShowGroupMergeRequestSettingResponse::mergeMethodIsSet() const
{
    return mergeMethodIsSet_;
}

void ShowGroupMergeRequestSettingResponse::unsetmergeMethod()
{
    mergeMethodIsSet_ = false;
}

int32_t ShowGroupMergeRequestSettingResponse::getOnlyAllowMergeIfVoteBiggerThan() const
{
    return onlyAllowMergeIfVoteBiggerThan_;
}

void ShowGroupMergeRequestSettingResponse::setOnlyAllowMergeIfVoteBiggerThan(int32_t value)
{
    onlyAllowMergeIfVoteBiggerThan_ = value;
    onlyAllowMergeIfVoteBiggerThanIsSet_ = true;
}

bool ShowGroupMergeRequestSettingResponse::onlyAllowMergeIfVoteBiggerThanIsSet() const
{
    return onlyAllowMergeIfVoteBiggerThanIsSet_;
}

void ShowGroupMergeRequestSettingResponse::unsetonlyAllowMergeIfVoteBiggerThan()
{
    onlyAllowMergeIfVoteBiggerThanIsSet_ = false;
}

bool ShowGroupMergeRequestSettingResponse::isOnlyAssigneeCanMerge() const
{
    return onlyAssigneeCanMerge_;
}

void ShowGroupMergeRequestSettingResponse::setOnlyAssigneeCanMerge(bool value)
{
    onlyAssigneeCanMerge_ = value;
    onlyAssigneeCanMergeIsSet_ = true;
}

bool ShowGroupMergeRequestSettingResponse::onlyAssigneeCanMergeIsSet() const
{
    return onlyAssigneeCanMergeIsSet_;
}

void ShowGroupMergeRequestSettingResponse::unsetonlyAssigneeCanMerge()
{
    onlyAssigneeCanMergeIsSet_ = false;
}

int32_t ShowGroupMergeRequestSettingResponse::getGroupId() const
{
    return groupId_;
}

void ShowGroupMergeRequestSettingResponse::setGroupId(int32_t value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool ShowGroupMergeRequestSettingResponse::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void ShowGroupMergeRequestSettingResponse::unsetgroupId()
{
    groupIdIsSet_ = false;
}

}
}
}
}
}


