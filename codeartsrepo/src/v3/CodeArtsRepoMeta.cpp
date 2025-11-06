
#include <huaweicloud/codeartsrepo/v3/CodeArtsRepoMeta.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V3 {

using namespace HuaweiCloud::Sdk::Core::Http;

HttpRequestDef CodeArtsRepoMeta::genRequestDefForCreateCommit() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListCommits() {
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

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowDiffCommit() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowSingleCommit() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Stats")
                  .withJsonTag("stats")
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

HttpRequestDef CodeArtsRepoMeta::genRequestDefForCreateMergeRequestDiscussionNote() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowReviewSetting() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListFilesByQuery() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("FilePath")
                  .withJsonTag("file_path")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Ref")
                  .withJsonTag("ref")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowFile() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Ref")
                  .withJsonTag("ref")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForGetAllRepositoryByProjectId() {
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

HttpRequestDef CodeArtsRepoMeta::genRequestDefForGetProductTemplates() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("PageNo")
                  .withJsonTag("page_no")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageSize")
                  .withJsonTag("page_size")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListProductTwoTemplates() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("PageNo")
                  .withJsonTag("page_no")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PageSize")
                  .withJsonTag("page_size")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowRepositoryNameExist() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForAddRepoMembers() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForDeleteRepoMember() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListRepoMembers() {
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

HttpRequestDef CodeArtsRepoMeta::genRequestDefForSetRepoRole() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForAddDeployKey() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForAddDeployKeyV2() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForAddProtectBranchV2() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForAddTagV2() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForCreateRepository() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForDeleteDeployKey() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForDeleteDeployKeyV2() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForDeleteRepository() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForGetRepositoryByProjectId() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForGetTemplates() {
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

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListBranchesByRepositoryId() {
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

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListCommitStatistics() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("BranchName")
                  .withJsonTag("branch_name")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListFiles() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Path")
                  .withJsonTag("path")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListMergeChanges() {
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

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListMergeChangesTrees() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("View")
                  .withJsonTag("view")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("CommitId")
                  .withJsonTag("commit_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListMergeRequest() {
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

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListMergeRequestReviewers() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Page")
                  .withJsonTag("page")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("PerPage")
                  .withJsonTag("per_page")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListRelatedCommits() {
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

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListRepositoryStatus() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListSubfiles() {
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

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListTemplatesTwo() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListTwoTemplates() {
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

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShareTemplates() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowBranchesByRepositoryId() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowBranchesByTwoRepositoryId() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowCommitsByBranch() {
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

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowCommitsByRepoId() {
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

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowHasPipeline() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowImageBlob() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Path")
                  .withJsonTag("path")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowMaster() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowMergeRequest() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowRepoId() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("GroupName")
                  .withJsonTag("group_name")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("RepositoryName")
                  .withJsonTag("repository_name")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowRepositoryArchive() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Sha")
                  .withJsonTag("sha")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Format")
                  .withJsonTag("format")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowRepositoryByUuid() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowRepositoryStatistics() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowStatisticCommit() {
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

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowStatisticCommitV3() {
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

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowStatisticalData() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForUpdateMergeRequestApprovalState() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
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

HttpRequestDef CodeArtsRepoMeta::genRequestDefForDeleteSShkey() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListSshKeys() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowPrivateKeyVerify() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForValidateHttpsInfo() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForValidateHttpsInfoV2() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForCreateNewBranch() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForAssociateIssues() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForCreateProjectAndRepositories() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForCreateProjectAndforkRepositories() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListUserAllRepositories() {
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

HttpRequestDef CodeArtsRepoMeta::genRequestDefForShowAllRepositoryByTwoProjectId() {
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

HttpRequestDef CodeArtsRepoMeta::genRequestDefForAddHooks() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForDeleteHooks() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef CodeArtsRepoMeta::genRequestDefForListHooks() {
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

