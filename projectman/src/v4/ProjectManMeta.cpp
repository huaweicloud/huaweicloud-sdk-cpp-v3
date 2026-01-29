
#include <huaweicloud/projectman/v4/ProjectManMeta.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {

using namespace HuaweiCloud::Sdk::Core::Http;

HttpRequestDef ProjectManMeta::genRequestDefForAddApplyJoinProjectForAgc() {
    HttpRequestDef reqDefBuilder;
    FieldDef headerParamDomainId;
    reqDefBuilder.withRequestField(headerParamDomainId
                  .withName("DomainId")
                  .withJsonTag("Domain-Id")
                  .withLocationType(Header_));
    FieldDef headerParamUserId;
    reqDefBuilder.withRequestField(headerParamUserId
                  .withName("UserId")
                  .withJsonTag("User-Id")
                  .withLocationType(Header_));
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForAddMemberV4() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForBatchAddMembersV4() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForBatchDeleteMembersV4() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForBatchUpdateChildNickNames() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForCheckProjectNameV4() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForCreateProjectV4() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForDeleteProjectV4() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForListDomainNotAddedProjectsV4() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForListProjectBugStaticsV4() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForListProjectDemandStaticV4() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForListProjectMembersV4() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForListProjectsV4() {
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
    reqDefBuilder.withRequestField(FieldDef().withName("ProjectType")
                  .withJsonTag("project_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Sort")
                  .withJsonTag("sort")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Archive")
                  .withJsonTag("archive")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("QueryType")
                  .withJsonTag("query_type")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForListTemplates() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("TrackerId")
                  .withJsonTag("tracker_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForListWorkitemStatusRecordsV4() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForListWorkitems() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("CreatedTimeInterval")
                  .withJsonTag("created_time_interval")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForRemoveProject() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForShowBugDensityV2() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForShowBugsPerDeveloper() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForShowCompletionRate() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForShowCurUserInfo() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForShowCurUserRole() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForShowProjectInfoV4() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForShowProjectSummaryV4() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForShowWorkItemWrokflowConfig() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("BoardId")
                  .withJsonTag("board_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForUpdateMembesRoleV4() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForUpdateNickNameV4() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForUpdateProjectV4() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForCreateIpdProjectIssue() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForCreateIpdProjectIssueAttachment() {
    HttpRequestDef reqDefBuilder;
    FieldDef formBodyParams;
    reqDefBuilder.withRequestField(formBodyParams.
                  withName("").
                  withName("Body").
                  withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForDeleteIpdImageInIssue() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("IssueId")
                  .withJsonTag("issue_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FileName")
                  .withJsonTag("file_name")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForDownloadIpdImageInIssue() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("IssueId")
                  .withJsonTag("issue_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("FileName")
                  .withJsonTag("file_name")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForListIpdProjectIssues() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("IsBacklog")
                  .withJsonTag("is_backlog")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("IssueType")
                  .withJsonTag("issue_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SrcDomainId")
                  .withJsonTag("src_domain_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("View")
                  .withJsonTag("view")
                  .withLocationType(Query_));
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForListIssueFields() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Page")
                  .withJsonTag("page")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Size")
                  .withJsonTag("size")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForListIssueStatues() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForShowIssueConfigFields() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("IssueCategory")
                  .withJsonTag("issue_category")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForShowIssueDetail() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("IssueType")
                  .withJsonTag("issue_type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("DomainId")
                  .withJsonTag("domain_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForShowWorkflowTemplate() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("IssueCategory")
                  .withJsonTag("issue_category")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForTransferWorkItemFlow() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForUploadIpdImageInIssue() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("IssueId")
                  .withJsonTag("issue_id")
                  .withLocationType(Query_));
    FieldDef formBodyParams;
    reqDefBuilder.withRequestField(formBodyParams.
                  withName("").
                  withName("Body").
                  withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForDownloadIpdIssueAttachment() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForShowIpdAttachmentByWorkItemId() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("IssueId")
                  .withJsonTag("issue_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("SourceProjectId")
                  .withJsonTag("source_project_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForCreateScrumPlanToProject() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForDeleteScrumPlanInProject() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForShowScrumPlansByCondition() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForUpdateScrumPlanInProject() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForAddIssueWorkHours() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForBatchDeleteIssuesV4() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForBatchDeleteIterationsV4() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForBatchListAssociatedIssues() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForCancelProjectDomain() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForCreateCustomfields() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForCreateIssueV4() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForCreateIterationV4() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForCreateProjectDomain() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForCreateProjectModule() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForCreateSystemIssueV4() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForDeleteAttachment() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForDeleteIssueV4() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForDeleteIterationV4() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForDeleteProjectModule() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForDownloadAttachment() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForDownloadImageFile() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("ImageUri")
                  .withJsonTag("image_uri")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForListAssociatedIssues() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForListAssociatedTestCases() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForListAssociatedWikis() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForListChildIssuesV4() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForListIssueAssociatedCommits() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Type")
                  .withJsonTag("type")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForListIssueCommentsV4() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForListIssueCustomFields() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForListIssueRecordsV4() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForListIssuesSfV4() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("TrackerId")
                  .withJsonTag("tracker_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("CreatedTimeInterval")
                  .withJsonTag("created_time_interval")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("UpdatedTimeInterval")
                  .withJsonTag("updated_time_interval")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForListIssuesV4() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForListIterationHistories() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForListProjectDomains() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForListProjectIssuesRecordsV4() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("OperatedTimeInterval")
                  .withJsonTag("operated_time_interval")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForListProjectIterationsV4() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("UpdatedTimeInterval")
                  .withJsonTag("updated_time_interval")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("IncludeDeleted")
                  .withJsonTag("include_deleted")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForListProjectModules() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForListProjectWorkHours() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForListProjectWorkHoursType() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Status")
                  .withJsonTag("status")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForListScrumProjectStatuses() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("Offset")
                  .withJsonTag("offset")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("Limit")
                  .withJsonTag("limit")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("TrackerId")
                  .withJsonTag("tracker_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForListSpecIssueStayTimes() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForListStatusStatistic() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("IterationId")
                  .withJsonTag("iteration_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("TrackerId")
                  .withJsonTag("tracker_id")
                  .withLocationType(Query_));
    reqDefBuilder.withRequestField(FieldDef().withName("StatusId")
                  .withJsonTag("status_id")
                  .withLocationType(Query_));
    reqDefBuilder.withResponseField(FieldDef().
            withName("Body").
            withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForSearchIssues() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForShowIssueCompletionRate() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForShowIssueV4() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForShowIssuesWrokFlowConfig() {
    HttpRequestDef reqDefBuilder;
    reqDefBuilder.withRequestField(FieldDef().withName("TrackerId")
                  .withJsonTag("tracker_id")
                  .withLocationType(Query_));
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForShowIterationV4() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForShowProjectWorkHours() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForUpdateIssueV4() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForUpdateIterationV4() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForUpdateProjectDomain() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForUpdateProjectModule() {
    HttpRequestDef reqDefBuilder;
    FieldDef bodyParam;
    reqDefBuilder.withRequestField(bodyParam.
        withName("Body").
        withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForUploadAttachments() {
    HttpRequestDef reqDefBuilder;
    FieldDef formBodyParams;
    reqDefBuilder.withRequestField(formBodyParams.
                  withName("").
                  withName("Body").
                  withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForUploadIssueImg() {
    HttpRequestDef reqDefBuilder;
    FieldDef formBodyParams;
    reqDefBuilder.withRequestField(formBodyParams.
                  withName("").
                  withName("Body").
                  withLocationType(Body_));
    return reqDefBuilder;
}

HttpRequestDef ProjectManMeta::genRequestDefForShowScrumIssueSeverities() {
    HttpRequestDef reqDefBuilder;
    return reqDefBuilder;
}


}
}
}
}

