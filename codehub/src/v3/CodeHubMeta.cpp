
#include <huaweicloud/codehub/v3/CodeHubMeta.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V3 {

using namespace HuaweiCloud::Sdk::Core::Http;

HttpRequestDef CodeHubMeta::genRequestDefForCreateCommit() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForListCommits() {
    HttpRequestDef reqDefBuilder;
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
    reqDefBuilder.withRequestField(FieldDef().withName("All")
                  .withJsonTag("all")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("WithStats")
                  .withJsonTag("with_stats")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Page")
                  .withJsonTag("page")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PerPage")
                  .withJsonTag("per_page")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForShowDiffCommit() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForShowSingleCommit() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Stats")
                  .withJsonTag("stats")
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

HttpRequestDef CodeHubMeta::genRequestDefForCreateMergeRequestDiscussionNote() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForShowReviewSetting() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForListFilesByQuery() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("FilePath")
                  .withJsonTag("file_path")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Ref")
                  .withJsonTag("ref")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForShowFile() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Ref")
                  .withJsonTag("ref")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForGetAllRepositoryByProjectId() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("PageIndex")
                  .withJsonTag("page_index")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageSize")
                  .withJsonTag("page_size")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Search")
                  .withJsonTag("search")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForGetProductTemplates() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("PageNo")
                  .withJsonTag("page_no")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageSize")
                  .withJsonTag("page_size")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForListProductTwoTemplates() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("PageNo")
                  .withJsonTag("page_no")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageSize")
                  .withJsonTag("page_size")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForShowRepositoryNameExist() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForAddRepoMembers() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForDeleteRepoMember() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForListRepoMembers() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("PageIndex")
                  .withJsonTag("page_index")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageSize")
                  .withJsonTag("page_size")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Subject")
                  .withJsonTag("subject")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForSetRepoRole() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForAddDeployKey() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForAddDeployKeyV2() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForAddProtectBranchV2() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForAddTagV2() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForCreateRepository() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForDeleteDeployKey() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForDeleteDeployKeyV2() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForDeleteRepository() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForGetRepositoryByProjectId() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForGetTemplates() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Platform")
                  .withJsonTag("platform")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Language")
                  .withJsonTag("language")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Pipeline")
                  .withJsonTag("pipeline")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Entertype")
                  .withJsonTag("entertype")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Search")
                  .withJsonTag("search")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Dateorder")
                  .withJsonTag("dateorder")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Usedtimeorder")
                  .withJsonTag("usedtimeorder")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Type")
                  .withJsonTag("type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Region")
                  .withJsonTag("region")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageNo")
                  .withJsonTag("page_no")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageSize")
                  .withJsonTag("page_size")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForListBranchesByRepositoryId() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Page")
                  .withJsonTag("page")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PerPage")
                  .withJsonTag("per_page")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Match")
                  .withJsonTag("match")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForListCommitStatistics() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("BranchName")
                  .withJsonTag("branch_name")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForListFiles() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Path")
                  .withJsonTag("path")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForListMergeChanges() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("FilePath")
                  .withJsonTag("file_path")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("IgnoreWhitespaceChange")
                  .withJsonTag("ignore_whitespace_change")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("ForceEncode")
                  .withJsonTag("force_encode")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("View")
                  .withJsonTag("view")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("CommitId")
                  .withJsonTag("commit_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForListMergeChangesTrees() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("View")
                  .withJsonTag("view")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("CommitId")
                  .withJsonTag("commit_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForListMergeRequest() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("State")
                  .withJsonTag("state")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Page")
                  .withJsonTag("page")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PerPage")
                  .withJsonTag("per_page")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Search")
                  .withJsonTag("search")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForListMergeRequestReviewers() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Page")
                  .withJsonTag("page")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PerPage")
                  .withJsonTag("per_page")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForListRelatedCommits() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Type")
                  .withJsonTag("type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Search")
                  .withJsonTag("search")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Page")
                  .withJsonTag("page")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PerPage")
                  .withJsonTag("per_page")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForListRepositoryStatus() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForListSubfiles() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Path")
                  .withJsonTag("path")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForListTemplatesTwo() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForListTwoTemplates() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Platform")
                  .withJsonTag("platform")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Language")
                  .withJsonTag("language")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Pipeline")
                  .withJsonTag("pipeline")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EnterType")
                  .withJsonTag("enter_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Search")
                  .withJsonTag("search")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("DateOrder")
                  .withJsonTag("date_order")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("UsedTimeOrder")
                  .withJsonTag("used_time_order")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Type")
                  .withJsonTag("type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Region")
                  .withJsonTag("region")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageNo")
                  .withJsonTag("page_no")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageSize")
                  .withJsonTag("page_size")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForShareTemplates() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForShowBranchesByRepositoryId() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForShowBranchesByTwoRepositoryId() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForShowCommitsByBranch() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("PageIndex")
                  .withJsonTag("page_index")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageSize")
                  .withJsonTag("page_size")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("RefName")
                  .withJsonTag("ref_name")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForShowCommitsByRepoId() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Author")
                  .withJsonTag("author")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("BeginDate")
                  .withJsonTag("begin_date")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EndDate")
                  .withJsonTag("end_date")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Message")
                  .withJsonTag("message")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageIndex")
                  .withJsonTag("page_index")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageSize")
                  .withJsonTag("page_size")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Path")
                  .withJsonTag("path")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("RefName")
                  .withJsonTag("ref_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("StatFormat")
                  .withJsonTag("stat_format")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForShowHasPipeline() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForShowImageBlob() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Path")
                  .withJsonTag("path")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForShowMaster() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForShowMergeRequest() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForShowRepoId() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("GroupName")
                  .withJsonTag("group_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("RepositoryName")
                  .withJsonTag("repository_name")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForShowRepositoryArchive() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Sha")
                  .withJsonTag("sha")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Format")
                  .withJsonTag("format")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForShowRepositoryByUuid() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForShowRepositoryStatistics() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForShowStatisticCommit() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("RefName")
                  .withJsonTag("ref_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("BeginDate")
                  .withJsonTag("begin_date")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EndDate")
                  .withJsonTag("end_date")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForShowStatisticCommitV3() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("RefName")
                  .withJsonTag("ref_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("BeginDate")
                  .withJsonTag("begin_date")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("EndDate")
                  .withJsonTag("end_date")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForShowStatisticalData() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForUpdateMergeRequestApprovalState() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
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

HttpRequestDef CodeHubMeta::genRequestDefForDeleteSShkey() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForListSshKeys() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForShowPrivateKeyVerify() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForValidateHttpsInfo() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForValidateHttpsInfoV2() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForCreateNewBranch() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForAssociateIssues() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForCreateProjectAndRepositories() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForCreateProjectAndforkRepositories() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForListUserAllRepositories() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("PageIndex")
                  .withJsonTag("page_index")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageSize")
                  .withJsonTag("page_size")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Search")
                  .withJsonTag("search")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForShowAllRepositoryByTwoProjectId() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("PageIndex")
                  .withJsonTag("page_index")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageSize")
                  .withJsonTag("page_size")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Search")
                  .withJsonTag("search")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForAddHooks() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForDeleteHooks() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeHubMeta::genRequestDefForListHooks() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("HookId")
                  .withJsonTag("hook_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}


}
}
}
}

