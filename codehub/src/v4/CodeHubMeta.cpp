
#include <huaweicloud/codehub/v4/CodeHubMeta.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {

using namespace HuaweiCloud::Sdk::Core::Http;

HttpRequestDef CodeHubMeta::genRequestDefForCreateBranch() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForDeleteBranch() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("BranchName")
                  .withJsonTag("branch_name")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForListBranches() {
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

HttpRequestDef CodeHubMeta::genRequestDefForShowBranch() {
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

HttpRequestDef CodeHubMeta::genRequestDefForUpdateBranchName() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForCreateCommit() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForCreateCommitRevert() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForListCommitAssociatedRefs() {
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

HttpRequestDef CodeHubMeta::genRequestDefForShowCommit() {
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

HttpRequestDef CodeHubMeta::genRequestDefForShowCommitDiffMetadata() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Sha")
                  .withJsonTag("sha")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForShowCommitFileDiff() {
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

HttpRequestDef CodeHubMeta::genRequestDefForShowDiffCommit() {
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

HttpRequestDef CodeHubMeta::genRequestDefForCreateMergeRequestDiscussion() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForCreateMergeRequestDiscussionResponse() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForCreateReviewSetting() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForListDefaultReviewCategories() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForListMergeRequestDiscussions() {
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

HttpRequestDef CodeHubMeta::genRequestDefForListProjectNoteRequiredAttributes() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForListRepositoryReviewAuthors() {
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

HttpRequestDef CodeHubMeta::genRequestDefForListRepositoryReviews() {
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

HttpRequestDef CodeHubMeta::genRequestDefForShowGroupNoteRequiredAttributes() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForShowGroupReviewSettings() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForShowMergeRequestDiscussion() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForShowNoteRequiredAttributes() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForShowProjectReviewSettings() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForShowReviewSetting() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("WithDefaultReviewCategories")
                  .withJsonTag("with_default_review_categories")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForUpdateGroupNoteRequiredAttributes() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForUpdateGroupReviewSettings() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForUpdateMergeRequestDiscussion() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForUpdateNoteRequiredAttributes() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForUpdateProjectNoteRequiredAttributes() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForUpdateProjectReviewSettings() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForCreateFile() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForDeleteFile() {
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

HttpRequestDef CodeHubMeta::genRequestDefForDownloadBlobsRaw() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("FileName")
                  .withJsonTag("file_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FilePath")
                  .withJsonTag("file_path")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForListFileBlameLines() {
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

HttpRequestDef CodeHubMeta::genRequestDefForListFileUpperTreeEntries() {
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

HttpRequestDef CodeHubMeta::genRequestDefForListFiles() {
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

HttpRequestDef CodeHubMeta::genRequestDefForShowFile() {
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

HttpRequestDef CodeHubMeta::genRequestDefForShowFileContent() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("FilePath")
                  .withJsonTag("file_path")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Sha")
                  .withJsonTag("sha")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForShowReadmeFile() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withResponseField(FieldDef().
        withName("xTotal").
        withJsonTag("X-Total").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForUpdateFile() {
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

HttpRequestDef CodeHubMeta::genRequestDefForBatchDeleteRepositoryFilePushPermissions() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForBatchUpdateRepositoryFilePushPermissions() {
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

HttpRequestDef CodeHubMeta::genRequestDefForCreateFilePushPermission() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForListRepositoryFilePushPermissions() {
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

HttpRequestDef CodeHubMeta::genRequestDefForAssociateGroupUserGroup() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForCreateGroup() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForDeleteGroup() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForListGroupAddableMembers() {
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

HttpRequestDef CodeHubMeta::genRequestDefForListGroupAddableUserGroups() {
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

HttpRequestDef CodeHubMeta::genRequestDefForListGroupMembers() {
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

HttpRequestDef CodeHubMeta::genRequestDefForListGroupPermissionResources() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Scope")
                  .withJsonTag("scope")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForListGroupSubgroupsAndRepositories() {
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

HttpRequestDef CodeHubMeta::genRequestDefForListGroups() {
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

HttpRequestDef CodeHubMeta::genRequestDefForListImpersonationTokens() {
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

HttpRequestDef CodeHubMeta::genRequestDefForListProductPermissionResourcesGrantedUsers() {
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

HttpRequestDef CodeHubMeta::genRequestDefForListProjectSubgroupsAndRepositories() {
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

HttpRequestDef CodeHubMeta::genRequestDefForShowGroup() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForShowGroupGeneralPolicy() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForShowGroupPermissionInheritEnabled() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForShowGroupSettingsInheritCfg() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForShowGroupWatermark() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForShowGroupsInherit() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("SettingType")
                  .withJsonTag("setting_type")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForShowProjectGeneralPolicy() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForShowProjectMemberSetting() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForShowResourcePermissions() {
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

HttpRequestDef CodeHubMeta::genRequestDefForTransferGroup() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForUpdateGroupWatermark() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForCreateRepositoryLabel() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForCreateRepositorySystemLabels() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForDeleteRepositoryLabel() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForListRepositoryLabels() {
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

HttpRequestDef CodeHubMeta::genRequestDefForUpdateRepositoryLabel() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForAddRepositoryMembers() {
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

HttpRequestDef CodeHubMeta::genRequestDefForListMembers() {
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

HttpRequestDef CodeHubMeta::genRequestDefForListRepositoryUserGroups() {
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

HttpRequestDef CodeHubMeta::genRequestDefForApprovalMergeRequest() {
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

HttpRequestDef CodeHubMeta::genRequestDefForCreateGroupMergeRequestApproverSetting() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForCreateMergeRequest() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForCreateMergeRequestApproverSetting() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForCreateMergeRequestTemplate() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForCreateProjectMergeRequestApproverSetting() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForDeleteGroupMergeRequestApproverSetting() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForDeleteMergeRequestApproverSetting() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForDeleteMergeRequestTemplate() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForDeleteMergeRequestVote() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForDeleteProjectMergeRequestApproverSetting() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForImportMergeRequest() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForListDiscussionTemplates() {
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

HttpRequestDef CodeHubMeta::genRequestDefForListGroupMergeRequestApproverSettings() {
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

HttpRequestDef CodeHubMeta::genRequestDefForListGroupMergeRequestCanBeAssignedReviewers() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForListGroupMergeRequestValidAssignedCandidates() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForListMergeRequestApproverSettings() {
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

HttpRequestDef CodeHubMeta::genRequestDefForListMergeRequestApprovers() {
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

HttpRequestDef CodeHubMeta::genRequestDefForListMergeRequestChanges() {
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

HttpRequestDef CodeHubMeta::genRequestDefForListMergeRequestChangesTrees() {
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

HttpRequestDef CodeHubMeta::genRequestDefForListMergeRequestCommits() {
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

HttpRequestDef CodeHubMeta::genRequestDefForListMergeRequestConflictFiles() {
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

HttpRequestDef CodeHubMeta::genRequestDefForListMergeRequestReviewers() {
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

HttpRequestDef CodeHubMeta::genRequestDefForListMergeRequestTemplates() {
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

HttpRequestDef CodeHubMeta::genRequestDefForListMergeRequestValidAssignedCandidates() {
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

HttpRequestDef CodeHubMeta::genRequestDefForListProjectMergeRequestApproverSettings() {
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

HttpRequestDef CodeHubMeta::genRequestDefForListProjectMergeRequestCanBeAssignedReviewers() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForListProjectMergeRequestCanBeAssignedUsers() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForListRepositoryMergeRequests() {
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

HttpRequestDef CodeHubMeta::genRequestDefForMergeMergeRequest() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForRebaseMergeRequestForOpenApi() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForResolveMergeRequestConflicts() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForReviewMergeRequest() {
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

HttpRequestDef CodeHubMeta::genRequestDefForShowActualHeadPipeline() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForShowAverageEvaluation() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForShowBranchConflict() {
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

HttpRequestDef CodeHubMeta::genRequestDefForShowGroupMergeRequestSetting() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForShowMergeRequestCommentsByLine() {
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

HttpRequestDef CodeHubMeta::genRequestDefForShowMergeRequestDetail() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForShowMergeRequestSetting() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForShowMergeRequestTemplate() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForShowMergeRequestVotesDetail() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForShowMergeableStateOuter() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForShowProjectMergeRequestSetting() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForUpdateGroupMergeRequestApproverSetting() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForUpdateMergeRequest() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForUpdateMergeRequestApproverSetting() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForUpdateMergeRequestApprovers() {
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

HttpRequestDef CodeHubMeta::genRequestDefForUpdateMergeRequestReviewers() {
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

HttpRequestDef CodeHubMeta::genRequestDefForUpdateMergeRequestSetting() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForUpdateMergeRequestTemplate() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForUpdateMergeRequestVote() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForUpdateProjectMergeRequestApproverSetting() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForListCommitAssociatedMergeRequests() {
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

HttpRequestDef CodeHubMeta::genRequestDefForShowRepositoryMergeRequestsStatistic() {
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

HttpRequestDef CodeHubMeta::genRequestDefForListMergeRequestParticipants() {
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

HttpRequestDef CodeHubMeta::genRequestDefForShowRepositoryPermissionInheritEnabled() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForUpdateRepositoryPermissionInheritEnabled() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForListLatestPipelineJobs() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForListPipelineJobs() {
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

HttpRequestDef CodeHubMeta::genRequestDefForShowProjectSettingsInheritCfg() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForShowProjectWatermark() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForUpdateProjectSettingsInheritCfg() {
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

HttpRequestDef CodeHubMeta::genRequestDefForUpdateProjectWatermark() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForBatchCreateProtectedBranch() {
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

HttpRequestDef CodeHubMeta::genRequestDefForBatchDeleteProtectedBranches() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForBatchUpdateProtectedBranches() {
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

HttpRequestDef CodeHubMeta::genRequestDefForCreateProjectProtectedBranches() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForDeleteProtectedBranch() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("BranchName")
                  .withJsonTag("branch_name")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForListProjectProtectedBranches() {
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
    reqDefBuilder.withResponseField(FieldDef().
        withName("xTotal").
        withJsonTag("X-Total").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForListProtectedBranches() {
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

HttpRequestDef CodeHubMeta::genRequestDefForShowProtectedBranch() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("BranchName")
                  .withJsonTag("branch_name")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForUpdateProtectedBranch() {
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

HttpRequestDef CodeHubMeta::genRequestDefForBatchCreateProtectedTags() {
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

HttpRequestDef CodeHubMeta::genRequestDefForBatchDeleteProtectedTags() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForBatchUpdateProtectedTags() {
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

HttpRequestDef CodeHubMeta::genRequestDefForDeleteProtectedTag() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("TagName")
                  .withJsonTag("tag_name")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForListProtectedTags() {
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

HttpRequestDef CodeHubMeta::genRequestDefForShowProtectedTag() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("TagName")
                  .withJsonTag("tag_name")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForUpdateProtectedTag() {
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

HttpRequestDef CodeHubMeta::genRequestDefForAddSubmodule() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForAddTrustedIpAddress() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForAssociateRemoteMirror() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForAssociateRepositoryUserGroup() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForCreateDir() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForDeleteTrustedIpAddress() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForDownloadArchive() {
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

HttpRequestDef CodeHubMeta::genRequestDefForListCurrentUserRepositories() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForListManageableGroups() {
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

HttpRequestDef CodeHubMeta::genRequestDefForListPersonalRepositoryImportRecords() {
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

HttpRequestDef CodeHubMeta::genRequestDefForListRepositoryCommitRules() {
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

HttpRequestDef CodeHubMeta::genRequestDefForListRepositoryContributors() {
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

HttpRequestDef CodeHubMeta::genRequestDefForListRepositoryEvents() {
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

HttpRequestDef CodeHubMeta::genRequestDefForListRepositoryForks() {
    HttpRequestDef reqDefBuilder;
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

HttpRequestDef CodeHubMeta::genRequestDefForListRepositoryLanguages() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withResponseField(FieldDef().
        withName("xTotal").
        withJsonTag("X-Total").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForListRepositoryTemplates() {
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

HttpRequestDef CodeHubMeta::genRequestDefForListSubmodules() {
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

HttpRequestDef CodeHubMeta::genRequestDefForListTrees() {
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

HttpRequestDef CodeHubMeta::genRequestDefForListTrustedIpAddresses() {
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

HttpRequestDef CodeHubMeta::genRequestDefForLockRepository() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForRemoveDeployKey() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForShowBlobs() {
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

HttpRequestDef CodeHubMeta::genRequestDefForShowCommitStatistics() {
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

HttpRequestDef CodeHubMeta::genRequestDefForShowDiffLines() {
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

HttpRequestDef CodeHubMeta::genRequestDefForShowLastPushEventInRepository() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForShowNotificationSubscription() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Type")
                  .withJsonTag("type")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForShowNotificationSubscriptionsStatus() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForShowRefCompare() {
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

HttpRequestDef CodeHubMeta::genRequestDefForShowRemoteMirror() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForShowRepository() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForShowRepositoryGeneralCommitRule() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForShowRepositoryGeneralPolicy() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForShowRepositoryInheritSetting() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForShowRepositoryInheritSettingSource() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Name")
                  .withJsonTag("name")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForShowRepositoryStatisticsStatus() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withResponseField(FieldDef().
        withName("xTotal").
        withJsonTag("X-Total").
        withKindName("std::string").
        withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForShowRepositoryStatisticsSummary() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForShowRepositoryWatermark() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForShowUserRefPermission() {
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

HttpRequestDef CodeHubMeta::genRequestDefForStartRemoteMirrorSynchronization() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForUnlockRepository() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForUpdateNotificationSubscription() {
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

HttpRequestDef CodeHubMeta::genRequestDefForUpdateRepositoryGeneralPolicy() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForUpdateRepositoryInheritSetting() {
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

HttpRequestDef CodeHubMeta::genRequestDefForUpdateRepositoryWatermark() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForUpdateTrustedIpAddress() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForCreateTag() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForDeleteTag() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("TagName")
                  .withJsonTag("tag_name")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForListTags() {
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

HttpRequestDef CodeHubMeta::genRequestDefForShowTag() {
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

HttpRequestDef CodeHubMeta::genRequestDefForAddTenantTrustedIpAddress() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForDeleteTenantTrustedIpAddress() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForListTenantTrustedIpAddresses() {
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

HttpRequestDef CodeHubMeta::genRequestDefForUpdateTenantTrustedIpAddress() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForCheckDeployKey() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForCheckGroupDeployKey() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForListBranchRelatedWorkItems() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("BranchName")
                  .withJsonTag("branch_name")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForListGroupDeployKeys() {
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

HttpRequestDef CodeHubMeta::genRequestDefForListProjectDeployKeys() {
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

HttpRequestDef CodeHubMeta::genRequestDefForListRepositoryDeployKeys() {
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

HttpRequestDef CodeHubMeta::genRequestDefForListRepositoryWorkItems() {
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

HttpRequestDef CodeHubMeta::genRequestDefForAddSshKey() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForDeleteSshKey() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForListUserGpgKeys() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Query")
                  .withJsonTag("query")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForListUserKeys() {
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

HttpRequestDef CodeHubMeta::genRequestDefForSendUserEmailVerifyCode() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForShowHttpsPasswordSetting() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForShowUserEmails() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForUpdateHttpsPasswordSetting() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForUpdateUserEmails() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForAddGroupWebhook() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForAddProjectWebhook() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForAddRepositoryWebhook() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForListGroupWebhookLogs() {
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

HttpRequestDef CodeHubMeta::genRequestDefForListGroupWebhooks() {
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

HttpRequestDef CodeHubMeta::genRequestDefForListProjectWebhookLogs() {
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

HttpRequestDef CodeHubMeta::genRequestDefForListProjectWebhooks() {
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

HttpRequestDef CodeHubMeta::genRequestDefForListRepositoryWebhookLogs() {
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

HttpRequestDef CodeHubMeta::genRequestDefForListRepositoryWebhooks() {
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

HttpRequestDef CodeHubMeta::genRequestDefForRemoveGroupWebhook() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForRemoveProjectWebhook() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForRemoveRepositoryWebhook() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForShowGroupWebhook() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForShowGroupWebhookLog() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForShowProjectWebhook() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForShowProjectWebhookLog() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForShowRepositoryWebhook() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForShowRepositoryWebhookLog() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForUpdateGroupWebhook() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForUpdateProjectWebhook() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForUpdateRepositoryWebhook() {
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

