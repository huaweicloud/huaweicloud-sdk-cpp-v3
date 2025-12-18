
#include <huaweicloud/codeartsrepo/v4/CodeArtsRepoMeta.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {

using namespace HuaweiCloud::Sdk::Core::Http;

HttpRequestDef CodeArtsRepoMeta::genRequestDefForBatchDeleteBranch() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForCreateBranch() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForDeleteBranch() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("BranchName")
                  .withJsonTag("branch_name")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListBranches() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("BranchType")
                  .withJsonTag("branch_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Creator")
                  .withJsonTag("creator")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Sort")
                  .withJsonTag("sort")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("QueryView")
                  .withJsonTag("query_view")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("View")
                  .withJsonTag("view")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xTotal").
        withJsonTag("X-Total").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowBranch() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("BranchName")
                  .withJsonTag("branch_name")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xTotal").
        withJsonTag("X-Total").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForUpdateBranchName() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForCreateCommit() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForCreateCommitRevert() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListCommitAssociatedRefs() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListCommits() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("RefName")
                  .withJsonTag("ref_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Since")
                  .withJsonTag("since")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Until")
                  .withJsonTag("until")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Path")
                  .withJsonTag("path")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Message")
                  .withJsonTag("message")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Author")
                  .withJsonTag("author")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("OrderByDate")
                  .withJsonTag("order_by_date")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Follow")
                  .withJsonTag("follow")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowCommit() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Sha")
                  .withJsonTag("sha")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Stats")
                  .withJsonTag("stats")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ShowCodeChanges")
                  .withJsonTag("show_code_changes")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowCommitDiffMetadata() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Sha")
                  .withJsonTag("sha")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowCommitFileDiff() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Sha")
                  .withJsonTag("sha")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Path")
                  .withJsonTag("path")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("OldPath")
                  .withJsonTag("old_path")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("IgnoreWhitespaceChange")
                  .withJsonTag("ignore_whitespace_change")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowDiffCommit() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Sha")
                  .withJsonTag("sha")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("IgnoreWhitespaceChange")
                  .withJsonTag("ignore_whitespace_change")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("NotStatistic")
                  .withJsonTag("not_statistic")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForCreateMergeRequestDiscussion() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForCreateMergeRequestDiscussionResponse() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForCreateReviewSetting() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForDeleteMergeRequestDiscussion() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListCommitDiscussions() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Sort")
                  .withJsonTag("sort")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListDefaultReviewCategories() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListMergeRequestDiscussions() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Unresolved")
                  .withJsonTag("unresolved")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AuthorId")
                  .withJsonTag("author_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Sort")
                  .withJsonTag("sort")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListMergeRequestSystemNotes() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListProjectNoteRequiredAttributes() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListRepositoryReviewAuthors() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("NoteableType")
                  .withJsonTag("noteable_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ResolvedStatus")
                  .withJsonTag("resolved_status")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ReviewersFilter")
                  .withJsonTag("reviewers_filter")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListRepositoryReviews() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("NoteableType")
                  .withJsonTag("noteable_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Search")
                  .withJsonTag("search")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("StartDate")
                  .withJsonTag("start_date")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EndDate")
                  .withJsonTag("end_date")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("OnlyCount")
                  .withJsonTag("only_count")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ReviewCategories")
                  .withJsonTag("review_categories")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ReviewModules")
                  .withJsonTag("review_modules")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Severity")
                  .withJsonTag("severity")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AssigneeId")
                  .withJsonTag("assignee_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ProposerId")
                  .withJsonTag("proposer_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("TargetBranch")
                  .withJsonTag("target_branch")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("IncludeReply")
                  .withJsonTag("include_reply")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("OrderBy")
                  .withJsonTag("order_by")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Sort")
                  .withJsonTag("sort")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowGroupNoteRequiredAttributes() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowGroupReviewSettings() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowMergeRequestDiscussion() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowNoteRequiredAttributes() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowProjectReviewSettings() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowReviewSetting() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("WithDefaultReviewCategories")
                  .withJsonTag("with_default_review_categories")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForUpdateGroupNoteRequiredAttributes() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForUpdateGroupReviewSettings() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForUpdateMergeRequestDiscussion() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForUpdateMergeRequestDiscussionInfo() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForUpdateNoteRequiredAttributes() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForUpdateProjectNoteRequiredAttributes() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForUpdateProjectReviewSettings() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForCreateFile() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForDeleteFile() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("FilePath")
                  .withJsonTag("file_path")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AuthorName")
                  .withJsonTag("author_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Branch")
                  .withJsonTag("branch")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("CommitMessage")
                  .withJsonTag("commit_message")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AuthorEmail")
                  .withJsonTag("author_email")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForDownloadBlobsRaw() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("FileName")
                  .withJsonTag("file_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FilePath")
                  .withJsonTag("file_path")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListFileBlameLines() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("FilePath")
                  .withJsonTag("file_path")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Sha")
                  .withJsonTag("sha")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListFileUpperTreeEntries() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("FilePath")
                  .withJsonTag("file_path")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("RefName")
                  .withJsonTag("ref_name")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListFiles() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("RefName")
                  .withJsonTag("ref_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xTotal").
        withJsonTag("X-Total").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowFile() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Ref")
                  .withJsonTag("ref")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FilePath")
                  .withJsonTag("file_path")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xTotal").
        withJsonTag("X-Total").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowFileContent() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("FilePath")
                  .withJsonTag("file_path")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Sha")
                  .withJsonTag("sha")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowReadmeFile() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withResponseField(FieldDef().
        withName("xTotal").
        withJsonTag("X-Total").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForUpdateFile() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("FilePath")
                  .withJsonTag("file_path")
                  .withLocationType(Query_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForBatchDeleteRepositoryFilePushPermissions() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForBatchUpdateRepositoryFilePushPermissions() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForCreateFilePushPermission() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListRepositoryFilePushPermissions() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Search")
                  .withJsonTag("search")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForAssociateGroupUserGroup() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForCreateGroup() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForDeleteGroup() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListGroupAddableMembers() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ProjectId")
                  .withJsonTag("project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Search")
                  .withJsonTag("search")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListGroupAddableUserGroups() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ProjectId")
                  .withJsonTag("project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListGroupMembers() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ProjectId")
                  .withJsonTag("project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Query")
                  .withJsonTag("query")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("JoinWay")
                  .withJsonTag("join_way")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AccessLevel")
                  .withJsonTag("access_level")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListGroupPermissionResources() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Scope")
                  .withJsonTag("scope")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListGroupSubgroupsAndRepositories() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Filter")
                  .withJsonTag("filter")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("OrderBy")
                  .withJsonTag("order_by")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Sort")
                  .withJsonTag("sort")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Archived")
                  .withJsonTag("archived")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListGroupUserGroups() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Search")
                  .withJsonTag("search")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListGroups() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Search")
                  .withJsonTag("search")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AllAvailable")
                  .withJsonTag("all_available")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("OrderBy")
                  .withJsonTag("order_by")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Sort")
                  .withJsonTag("sort")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Starred")
                  .withJsonTag("starred")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Owned")
                  .withJsonTag("owned")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListImpersonationTokens() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("State")
                  .withJsonTag("state")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Search")
                  .withJsonTag("search")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListProductPermissionResourcesGrantedUsers() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Query")
                  .withJsonTag("query")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListProjectSubgroupsAndRepositories() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Filter")
                  .withJsonTag("filter")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("OrderBy")
                  .withJsonTag("order_by")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Sort")
                  .withJsonTag("sort")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Archived")
                  .withJsonTag("archived")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowGroup() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowGroupGeneralPolicy() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowGroupInheritSetting() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowGroupPermissionInheritEnabled() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowGroupSettingsInheritCfg() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowGroupWatermark() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowGroupsGeneralPolicy() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowGroupsInherit() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("SettingType")
                  .withJsonTag("setting_type")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowProjectGeneralPolicy() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowProjectMemberSetting() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowProjectSettingsInheritCfg() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForTransferGroup() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForUpdateGroupGeneralPolicy() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForUpdateGroupWatermark() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForUpdateProjectSettingsInheritCfg() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForCreateRepositoryLabel() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForCreateRepositorySystemLabels() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForDeleteRepositoryLabel() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListRepositoryLabels() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Search")
                  .withJsonTag("search")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Sort")
                  .withJsonTag("sort")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("IncludeExpired")
                  .withJsonTag("include_expired")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("View")
                  .withJsonTag("view")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForUpdateRepositoryLabel() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForAddRepositoryMembers() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListGroupProtectedRefsUserGroups() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Search")
                  .withJsonTag("search")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xTotal").
        withJsonTag("X-Total").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListMembers() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Search")
                  .withJsonTag("search")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Permission")
                  .withJsonTag("permission")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Action")
                  .withJsonTag("action")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xTotal").
        withJsonTag("X-Total").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListProjectProtectedRefsUserGroups() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Search")
                  .withJsonTag("search")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xTotal").
        withJsonTag("X-Total").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListRepositoryProtectedRefsUserGroups() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Search")
                  .withJsonTag("search")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xTotal").
        withJsonTag("X-Total").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListRepositoryUserGroups() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Search")
                  .withJsonTag("search")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xTotal").
        withJsonTag("X-Total").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForApprovalMergeRequest() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForCreateCherryPickMergeRequest() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForCreateGroupMergeRequestApproverSetting() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForCreateGroupMergeRequestTemplate() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForCreateMergeRequest() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForCreateMergeRequestApproverSetting() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForCreateMergeRequestTemplate() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForCreateProjectMergeRequestApproverSetting() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForCreateProjectMergeRequestTemplate() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForDeleteGroupMergeRequestApproverSetting() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForDeleteGroupMergeRequestTemplate() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForDeleteMergeRequestApproverSetting() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForDeleteMergeRequestTemplate() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForDeleteMergeRequestVote() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForDeleteProjectMergeRequestApproverSetting() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForDeleteProjectMergeRequestTemplate() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForImportMergeRequest() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListDiscussionTemplates() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("IsDefault")
                  .withJsonTag("is_default")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListGroupMergeRequestApproverSettings() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListGroupMergeRequestCanBeAssignedReviewers() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListGroupMergeRequestTemplates() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("TemplateName")
                  .withJsonTag("template_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListGroupMergeRequestValidAssignedCandidates() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListMergeRequestApproverSettings() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("TargetType")
                  .withJsonTag("target_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListMergeRequestApprovers() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("TargetBranch")
                  .withJsonTag("target_branch")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SourceBranch")
                  .withJsonTag("source_branch")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("MergeRequestIid")
                  .withJsonTag("merge_request_iid")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("TargetRepositoryId")
                  .withJsonTag("target_repository_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Search")
                  .withJsonTag("search")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xTotal").
        withJsonTag("X-Total").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListMergeRequestChanges() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("IgnoreWhitespaceChange")
                  .withJsonTag("ignore_whitespace_change")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ForceEncode")
                  .withJsonTag("force_encode")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FilePath")
                  .withJsonTag("file_path")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FromDiffId")
                  .withJsonTag("from_diff_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ToDiffId")
                  .withJsonTag("to_diff_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListMergeRequestChangesTrees() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ApprovalUserId")
                  .withJsonTag("approval_user_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("CommitId")
                  .withJsonTag("commit_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FromDiffId")
                  .withJsonTag("from_diff_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ToDiffId")
                  .withJsonTag("to_diff_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListMergeRequestCommits() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("View")
                  .withJsonTag("view")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListMergeRequestConflictFiles() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("HideContent")
                  .withJsonTag("hide_content")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListMergeRequestEvaluations() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListMergeRequestReviewers() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("TargetBranch")
                  .withJsonTag("target_branch")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SourceBranch")
                  .withJsonTag("source_branch")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("MergeRequestIid")
                  .withJsonTag("merge_request_iid")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("TargetRepositoryId")
                  .withJsonTag("target_repository_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Search")
                  .withJsonTag("search")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xTotal").
        withJsonTag("X-Total").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListMergeRequestTemplates() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("View")
                  .withJsonTag("view")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("TemplateName")
                  .withJsonTag("template_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListMergeRequestValidAssignedCandidates() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("TargetBranch")
                  .withJsonTag("target_branch")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("MergeRequestIid")
                  .withJsonTag("merge_request_iid")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Search")
                  .withJsonTag("search")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SearchByNameList")
                  .withJsonTag("search_by_name_list")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("TargetProjectId")
                  .withJsonTag("target_project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("View")
                  .withJsonTag("view")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Mode")
                  .withJsonTag("mode")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("OnlyDevelopers")
                  .withJsonTag("only_developers")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListMergeRequestVersions() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListProjectMergeRequestApproverSettings() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListProjectMergeRequestCanBeAssignedReviewers() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListProjectMergeRequestCanBeAssignedUsers() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListProjectMergeRequestTemplates() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("TemplateName")
                  .withJsonTag("template_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListRepositoryMergeRequests() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("State")
                  .withJsonTag("state")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("OrderBy")
                  .withJsonTag("order_by")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Sort")
                  .withJsonTag("sort")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AuthorId")
                  .withJsonTag("author_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SourceBranch")
                  .withJsonTag("source_branch")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("TargetBranch")
                  .withJsonTag("target_branch")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Search")
                  .withJsonTag("search")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SourceRepositoryId")
                  .withJsonTag("source_repository_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("OnlyCount")
                  .withJsonTag("only_count")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Labels")
                  .withJsonTag("labels")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForMergeMergeRequest() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForRebaseMergeRequestForOpenApi() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForResolveMergeRequestConflicts() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForReviewMergeRequest() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowActualHeadPipeline() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowAverageEvaluation() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowBranchConflict() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("SourceRepositoryId")
                  .withJsonTag("source_repository_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SourceBranch")
                  .withJsonTag("source_branch")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("TargetBranch")
                  .withJsonTag("target_branch")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("TargetRepositoryId")
                  .withJsonTag("target_repository_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowCommitCommentsByLine() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowGroupMergeRequestSetting() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowMergeRequestCommentsByLine() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Line")
                  .withJsonTag("line")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("WithCommitComments")
                  .withJsonTag("with_commit_comments")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Path")
                  .withJsonTag("path")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("View")
                  .withJsonTag("view")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("BaseSha")
                  .withJsonTag("base_sha")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("StartSha")
                  .withJsonTag("start_sha")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("HeadSha")
                  .withJsonTag("head_sha")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowMergeRequestDetail() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowMergeRequestSetting() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowMergeRequestTemplate() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowMergeRequestVotesDetail() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowMergeableStateOuter() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowProjectMergeRequestSetting() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForUpdateGroupMergeRequestApproverSetting() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForUpdateGroupMergeRequestTemplate() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForUpdateMergeRequest() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForUpdateMergeRequestApproverSetting() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForUpdateMergeRequestApprovers() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForUpdateMergeRequestReviewers() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForUpdateMergeRequestSetting() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForUpdateMergeRequestTemplate() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForUpdateMergeRequestVote() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForUpdateProjectMergeRequestApproverSetting() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForUpdateProjectMergeRequestTemplate() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListCommitAssociatedMergeRequests() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListPersonalMergeRequests() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("State")
                  .withJsonTag("state")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("OrderBy")
                  .withJsonTag("order_by")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Sort")
                  .withJsonTag("sort")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Labels")
                  .withJsonTag("labels")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("CreatedBefore")
                  .withJsonTag("created_before")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("CreatedAfter")
                  .withJsonTag("created_after")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("UpdatedAfter")
                  .withJsonTag("updated_after")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("UpdatedBefore")
                  .withJsonTag("updated_before")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("View")
                  .withJsonTag("view")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AuthorId")
                  .withJsonTag("author_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Scope")
                  .withJsonTag("scope")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SourceBranch")
                  .withJsonTag("source_branch")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("TargetBranch")
                  .withJsonTag("target_branch")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Search")
                  .withJsonTag("search")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Wip")
                  .withJsonTag("wip")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("MergedBy")
                  .withJsonTag("merged_by")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("MergedAfter")
                  .withJsonTag("merged_after")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("MergedBefore")
                  .withJsonTag("merged_before")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("OnlyCount")
                  .withJsonTag("only_count")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowRepositoryMergeRequestsStatistic() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Iids")
                  .withJsonTag("iids")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Fields")
                  .withJsonTag("fields")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListMergeRequestParticipants() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListRepositoryResourcePermissions() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowRepositoryPermissionInheritEnabled() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForUpdateRepositoryPermissionInheritEnabled() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForUpdateRepositoryResourcePermissions() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListLatestPipelineJobs() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListPipelineJobs() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xTotal").
        withJsonTag("X-Total").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListItemCommits() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Type")
                  .withJsonTag("type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xTotal").
        withJsonTag("X-Total").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowProjectWatermark() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowProjectsGeneralPolicy() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowResourcePermissions() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForUpdateProjectGeneralPolicy() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForUpdateProjectWatermark() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForBatchCreateProtectedBranch() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForBatchDeleteProtectedBranches() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForBatchUpdateProtectedBranches() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForCreateProjectProtectedBranches() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForDeleteProtectedBranch() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("BranchName")
                  .withJsonTag("branch_name")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListProjectProtectedBranches() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Search")
                  .withJsonTag("search")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("UserActions")
                  .withJsonTag("user_actions")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("View")
                  .withJsonTag("view")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListProtectedBranches() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Search")
                  .withJsonTag("search")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowProtectedBranch() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("BranchName")
                  .withJsonTag("branch_name")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForUpdateProtectedBranch() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("BranchName")
                  .withJsonTag("branch_name")
                  .withLocationType(Query_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForBatchCreateProtectedTags() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForBatchDeleteProtectedTags() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForBatchUpdateProtectedTags() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForCreateProjectProtectedTags() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForDeleteProtectedTag() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("TagName")
                  .withJsonTag("tag_name")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListProjectProtectedTags() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListProtectedTags() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Search")
                  .withJsonTag("search")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowProtectedTag() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("TagName")
                  .withJsonTag("tag_name")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForUpdateProtectedTag() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("TagName")
                  .withJsonTag("tag_name")
                  .withLocationType(Query_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListLogsTree() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Ref")
                  .withJsonTag("ref")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListRefsList() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Type")
                  .withJsonTag("type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Search")
                  .withJsonTag("search")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForRenameFile() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowFileRaw() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("FilePath")
                  .withJsonTag("file_path")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Ref")
                  .withJsonTag("ref")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForExecuteRepositoryStatistics() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForAddSubmodule() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForAddTrustedIpAddress() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForAssociateRemoteMirror() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForAssociateRepositoryUserGroup() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForBatchValidateRepoNames() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForCreateDir() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForCreateRepositoryCommitRule() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForDeleteTrustedIpAddress() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForDownloadArchive() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Sha")
                  .withJsonTag("sha")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Path")
                  .withJsonTag("path")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ArchiveFormat")
                  .withJsonTag("archive_format")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListCurrentUserRepositories() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("OrderBy")
                  .withJsonTag("order_by")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Sort")
                  .withJsonTag("sort")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Archived")
                  .withJsonTag("archived")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Search")
                  .withJsonTag("search")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Starred")
                  .withJsonTag("starred")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Membership")
                  .withJsonTag("membership")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("UserCreated")
                  .withJsonTag("user_created")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("IncludeAbnormal")
                  .withJsonTag("include_abnormal")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListGroupRepositories() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Search")
                  .withJsonTag("search")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("OrderBy")
                  .withJsonTag("order_by")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Sort")
                  .withJsonTag("sort")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListManageableGroups() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Scope")
                  .withJsonTag("scope")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListPersonalRecentPushEvents() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ProjectId")
                  .withJsonTag("project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Size")
                  .withJsonTag("size")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListPersonalRepositoryImportRecords() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("State")
                  .withJsonTag("state")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SourceType")
                  .withJsonTag("source_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("CreatedAfter")
                  .withJsonTag("created_after")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("CreatedBefore")
                  .withJsonTag("created_before")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FinishedAfter")
                  .withJsonTag("finished_after")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FinishedBefore")
                  .withJsonTag("finished_before")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Search")
                  .withJsonTag("search")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("OrderBy")
                  .withJsonTag("order_by")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Sort")
                  .withJsonTag("sort")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xTotal").
        withJsonTag("X-Total").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListProjectRepositories() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Search")
                  .withJsonTag("search")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("OrderBy")
                  .withJsonTag("order_by")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Sort")
                  .withJsonTag("sort")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListRepositoryCommitRules() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xTotal").
        withJsonTag("X-Total").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListRepositoryContributors() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("OrderBy")
                  .withJsonTag("order_by")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Sort")
                  .withJsonTag("sort")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("RefName")
                  .withJsonTag("ref_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SkipMerge")
                  .withJsonTag("skip_merge")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Author")
                  .withJsonTag("author")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xTotal").
        withJsonTag("X-Total").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListRepositoryEvents() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("AuthorId")
                  .withJsonTag("author_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Filter")
                  .withJsonTag("filter")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Before")
                  .withJsonTag("before")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("After")
                  .withJsonTag("after")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xTotal").
        withJsonTag("X-Total").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListRepositoryForks() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("OrderBy")
                  .withJsonTag("order_by")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Sort")
                  .withJsonTag("sort")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("View")
                  .withJsonTag("view")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListRepositoryLanguages() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withResponseField(FieldDef().
        withName("xTotal").
        withJsonTag("X-Total").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListRepositoryTemplates() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Platform")
                  .withJsonTag("platform")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Pipeline")
                  .withJsonTag("pipeline")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Type")
                  .withJsonTag("type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Search")
                  .withJsonTag("search")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EnterType")
                  .withJsonTag("enter_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("DateOrder")
                  .withJsonTag("date_order")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Language")
                  .withJsonTag("language")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ProjectId")
                  .withJsonTag("project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xTotal").
        withJsonTag("X-Total").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListSubmodules() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Sha")
                  .withJsonTag("sha")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xTotal").
        withJsonTag("X-Total").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListTrees() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Ref")
                  .withJsonTag("ref")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Path")
                  .withJsonTag("path")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Recursive")
                  .withJsonTag("recursive")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xTotal").
        withJsonTag("X-Total").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListTrustedIpAddresses() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xTotal").
        withJsonTag("X-Total").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForLockRepository() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForRemoveDeployKey() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForRemoveDeployKeyFromSubmodules() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowBlobs() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("BlobId")
                  .withJsonTag("blob_id")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xTotal").
        withJsonTag("X-Total").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowCommitStatistics() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("BranchName")
                  .withJsonTag("branch_name")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xTotal").
        withJsonTag("X-Total").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowDiffLines() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("FilePath")
                  .withJsonTag("file_path")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("CommitId")
                  .withJsonTag("commit_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Start")
                  .withJsonTag("start")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("End")
                  .withJsonTag("end")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowLastPushEventInRepository() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowNotificationSubscription() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Type")
                  .withJsonTag("type")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowNotificationSubscriptionsStatus() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowRefCompare() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("From")
                  .withJsonTag("from")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("To")
                  .withJsonTag("to")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("CompareType")
                  .withJsonTag("compare_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("TargetId")
                  .withJsonTag("target_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Straight")
                  .withJsonTag("straight")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("IgnoreWhitespaceChange")
                  .withJsonTag("ignore_whitespace_change")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("View")
                  .withJsonTag("view")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("OnlyCount")
                  .withJsonTag("only_count")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FilePath")
                  .withJsonTag("file_path")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("AdditionalFields")
                  .withJsonTag("additional_fields")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xTotal").
        withJsonTag("X-Total").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowRemoteMirror() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowRepository() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowRepositoryGeneralCommitRule() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowRepositoryGeneralPolicy() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowRepositoryInheritSetting() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowRepositoryInheritSettingSource() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowRepositoryStatisticsStatus() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withResponseField(FieldDef().
        withName("xTotal").
        withJsonTag("X-Total").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowRepositoryStatisticsSummary() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowRepositoryWatermark() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowUserRefPermission() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("TargetRef")
                  .withJsonTag("target_ref")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Action")
                  .withJsonTag("action")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ChangeRequestIid")
                  .withJsonTag("change_request_iid")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForStartHouseKeeping() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForStartRemoteMirrorSynchronization() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForSyncDeployKeyToSubmodules() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForUnlockRepository() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForUpdateNotificationSubscription() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Type")
                  .withJsonTag("type")
                  .withLocationType(Query_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForUpdateRepositoryCommitRule() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForUpdateRepositoryGeneralCommitRule() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForUpdateRepositoryGeneralPolicy() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForUpdateRepositoryInheritSetting() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForUpdateRepositoryRemoteMirror() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForUpdateRepositoryWatermark() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForUpdateTrustedIpAddress() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForCreateTag() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForDeleteTag() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("TagName")
                  .withJsonTag("tag_name")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListTags() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Creator")
                  .withJsonTag("creator")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Sort")
                  .withJsonTag("sort")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Search")
                  .withJsonTag("search")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("OrderBy")
                  .withJsonTag("order_by")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("View")
                  .withJsonTag("view")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xTotal").
        withJsonTag("X-Total").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowTag() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("TagName")
                  .withJsonTag("tag_name")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xTotal").
        withJsonTag("X-Total").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForAddTenantTrustedIpAddress() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForDeleteTenantTrustedIpAddress() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForExportTenantRepositories() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListTenantRepositories() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("RepositoryName")
                  .withJsonTag("repository_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("MemberNumber")
                  .withJsonTag("member_number")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Owner")
                  .withJsonTag("owner")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("CreatedAfter")
                  .withJsonTag("created_after")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("CreatedBefore")
                  .withJsonTag("created_before")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Sort")
                  .withJsonTag("sort")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SortField")
                  .withJsonTag("sort_field")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xTotal").
        withJsonTag("X-Total").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListTenantTrustedIpAddresses() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xTotal").
        withJsonTag("X-Total").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForUpdateTenantTrustedIpAddress() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForCheckDeployKey() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForCheckGroupDeployKey() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListBranchRelatedWorkItems() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("BranchName")
                  .withJsonTag("branch_name")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListGroupDeployKeys() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xTotal").
        withJsonTag("X-Total").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListProjectDeployKeys() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xTotal").
        withJsonTag("X-Total").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListRepositoryDeployKeys() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xTotal").
        withJsonTag("X-Total").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListRepositoryWorkItems() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ProjectId")
                  .withJsonTag("project_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("IsIpd")
                  .withJsonTag("is_ipd")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Subject")
                  .withJsonTag("subject")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("TargetBranch")
                  .withJsonTag("target_branch")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xTotal").
        withJsonTag("X-Total").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowGroupE2eSetting() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowProjectE2eSetting() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowRepositoryE2eSetting() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("TakeEffect")
                  .withJsonTag("take_effect")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForAddSshKey() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForBatchValidateUserGroupPermissions() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForDeleteSshKey() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListUserGpgKeys() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Query")
                  .withJsonTag("query")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListUserKeys() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Query")
                  .withJsonTag("query")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForSendUserEmailVerifyCode() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowHttpsPasswordSetting() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowUserEmails() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForUpdateHttpsPasswordSetting() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForUpdateUserEmails() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForAddGroupWebhook() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForAddProjectWebhook() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForAddRepositoryWebhook() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListGroupWebhookLogs() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("RepositoryId")
                  .withJsonTag("repository_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Uuid")
                  .withJsonTag("uuid")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("CreatedAfter")
                  .withJsonTag("created_after")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("CreatedBefore")
                  .withJsonTag("created_before")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xTotal").
        withJsonTag("X-Total").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListGroupWebhooks() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xTotal").
        withJsonTag("X-Total").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListProjectWebhookLogs() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("RepositoryId")
                  .withJsonTag("repository_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Uuid")
                  .withJsonTag("uuid")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("CreatedAfter")
                  .withJsonTag("created_after")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("CreatedBefore")
                  .withJsonTag("created_before")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xTotal").
        withJsonTag("X-Total").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListProjectWebhooks() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xTotal").
        withJsonTag("X-Total").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListRepositoryWebhookLogs() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Uuid")
                  .withJsonTag("uuid")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("CreatedAfter")
                  .withJsonTag("created_after")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("CreatedBefore")
                  .withJsonTag("created_before")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xTotal").
        withJsonTag("X-Total").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListRepositoryWebhooks() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    reqDefBuilder.withResponseField(FieldDef().
        withName("xTotal").
        withJsonTag("X-Total").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForRemoveGroupWebhook() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForRemoveProjectWebhook() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForRemoveRepositoryWebhook() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowGroupWebhook() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowGroupWebhookLog() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowProjectWebhook() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowProjectWebhookLog() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowRepositoryWebhook() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowRepositoryWebhookLog() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForUpdateGroupWebhook() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForUpdateProjectWebhook() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForUpdateRepositoryWebhook() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}


}
}
}
}

