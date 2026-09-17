#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_ProjectManMeta_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_ProjectManMeta_H_

#include <huaweicloud/core/http/HttpRequestDef.h>
#include <huaweicloud/projectman/v4/ProjectManExport.h>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {

using namespace HuaweiCloud::Sdk::Core::Http;

class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ProjectManMeta {
public:
    static HttpRequestDef genRequestDefForAddApplyJoinProjectForAgc();
    static HttpRequestDef genRequestDefForAddMemberV4();
    static HttpRequestDef genRequestDefForAssociateScrumIssue();
    static HttpRequestDef genRequestDefForBatchAddMembersV4();
    static HttpRequestDef genRequestDefForBatchDeleteMembersV4();
    static HttpRequestDef genRequestDefForBatchUpdateChildNickNames();
    static HttpRequestDef genRequestDefForCancelScrumAssociate();
    static HttpRequestDef genRequestDefForCheckProjectNameV4();
    static HttpRequestDef genRequestDefForCreateProjectV4();
    static HttpRequestDef genRequestDefForDeleteProjectV4();
    static HttpRequestDef genRequestDefForDeleteScrumMyIssueNotes();
    static HttpRequestDef genRequestDefForListDomainNotAddedProjectsV4();
    static HttpRequestDef genRequestDefForListProjectBugStaticsV4();
    static HttpRequestDef genRequestDefForListProjectDemandStaticV4();
    static HttpRequestDef genRequestDefForListProjectMembersV4();
    static HttpRequestDef genRequestDefForListProjectsV4();
    static HttpRequestDef genRequestDefForListScrumJobCache();
    static HttpRequestDef genRequestDefForListTemplates();
    static HttpRequestDef genRequestDefForListWorkitemStatusRecordsV4();
    static HttpRequestDef genRequestDefForListWorkitems();
    static HttpRequestDef genRequestDefForRemoveProject();
    static HttpRequestDef genRequestDefForShowBugDensityV2();
    static HttpRequestDef genRequestDefForShowBugsPerDeveloper();
    static HttpRequestDef genRequestDefForShowCompletionRate();
    static HttpRequestDef genRequestDefForShowCurUserInfo();
    static HttpRequestDef genRequestDefForShowCurUserRole();
    static HttpRequestDef genRequestDefForShowProjectInfoV4();
    static HttpRequestDef genRequestDefForShowProjectSummaryV4();
    static HttpRequestDef genRequestDefForShowWorkItemWrokflowConfig();
    static HttpRequestDef genRequestDefForUpdateMembesRoleV4();
    static HttpRequestDef genRequestDefForUpdateNickNameV4();
    static HttpRequestDef genRequestDefForUpdateProjectV4();
    static HttpRequestDef genRequestDefForAssociateIpdThirdParty();
    static HttpRequestDef genRequestDefForAssociateIssues();
    static HttpRequestDef genRequestDefForBatchBaselineIpdIssues();
    static HttpRequestDef genRequestDefForBatchCreateIpdIssues();
    static HttpRequestDef genRequestDefForBatchCreateIssueSnapitems();
    static HttpRequestDef genRequestDefForBatchCreateIssuesV2();
    static HttpRequestDef genRequestDefForBatchDeleteIpdIssue();
    static HttpRequestDef genRequestDefForBatchDeleteIpdIssues();
    static HttpRequestDef genRequestDefForBatchDeletePlans();
    static HttpRequestDef genRequestDefForBatchDeleteSnapshots();
    static HttpRequestDef genRequestDefForBatchTransferIpdWorkItemFlow();
    static HttpRequestDef genRequestDefForBatchUpdateBaseline();
    static HttpRequestDef genRequestDefForBatchUpdateIpdIssues();
    static HttpRequestDef genRequestDefForBatchUpdateSnapshotDeletableFlag();
    static HttpRequestDef genRequestDefForChangePlanStatus();
    static HttpRequestDef genRequestDefForCreateIpdIssueComments();
    static HttpRequestDef genRequestDefForCreateIpdLabel();
    static HttpRequestDef genRequestDefForCreateIpdProcessInstance();
    static HttpRequestDef genRequestDefForCreateIpdProjectIssue();
    static HttpRequestDef genRequestDefForCreateIpdProjectIssueAttachment();
    static HttpRequestDef genRequestDefForCreatePlans();
    static HttpRequestDef genRequestDefForCreateSprintSnapshots();
    static HttpRequestDef genRequestDefForDeleteIpdImageInIssue();
    static HttpRequestDef genRequestDefForDeleteIpdIssueComment();
    static HttpRequestDef genRequestDefForDeleteIpdLabel();
    static HttpRequestDef genRequestDefForDeleteIpdThirdParty();
    static HttpRequestDef genRequestDefForDownloadIpdImageInIssue();
    static HttpRequestDef genRequestDefForGetModelConfig();
    static HttpRequestDef genRequestDefForListIpdIssueComments();
    static HttpRequestDef genRequestDefForListIpdLabels();
    static HttpRequestDef genRequestDefForListIpdProjectFields();
    static HttpRequestDef genRequestDefForListIpdProjectIssues();
    static HttpRequestDef genRequestDefForListIpdReviewFormsByIssueId();
    static HttpRequestDef genRequestDefForListIssueBySnapIds();
    static HttpRequestDef genRequestDefForListIssueFields();
    static HttpRequestDef genRequestDefForListIssueSprintSnapshots();
    static HttpRequestDef genRequestDefForListIssueStatues();
    static HttpRequestDef genRequestDefForListPlan();
    static HttpRequestDef genRequestDefForListPlanDetail();
    static HttpRequestDef genRequestDefForListProjectUsers();
    static HttpRequestDef genRequestDefForPutIpdChangeReviewFormV2();
    static HttpRequestDef genRequestDefForQueryIssueAssociatedItem();
    static HttpRequestDef genRequestDefForShowBaselineSnapshots();
    static HttpRequestDef genRequestDefForShowCategoryStatus();
    static HttpRequestDef genRequestDefForShowIpdFieldsV2();
    static HttpRequestDef genRequestDefForShowIpdIssueRelationsConfigByProject();
    static HttpRequestDef genRequestDefForShowIpdProjectList();
    static HttpRequestDef genRequestDefForShowIpdThirdPartyAssociated();
    static HttpRequestDef genRequestDefForShowIpdWorkItemFlow();
    static HttpRequestDef genRequestDefForShowIssueConfigFields();
    static HttpRequestDef genRequestDefForShowIssueDetail();
    static HttpRequestDef genRequestDefForShowTenantIssueList();
    static HttpRequestDef genRequestDefForShowWorkflowTemplate();
    static HttpRequestDef genRequestDefForTransferWorkItemFlow();
    static HttpRequestDef genRequestDefForUpdateIpdIssueComment();
    static HttpRequestDef genRequestDefForUpdateIpdLabel();
    static HttpRequestDef genRequestDefForUpdateIpdThirdParty();
    static HttpRequestDef genRequestDefForUpdatePlanInfo();
    static HttpRequestDef genRequestDefForUploadIpdImageInIssue();
    static HttpRequestDef genRequestDefForDownloadIpdIssueAttachment();
    static HttpRequestDef genRequestDefForShowIpdAttachmentByWorkItemId();
    static HttpRequestDef genRequestDefForCreateScrumPlanToProject();
    static HttpRequestDef genRequestDefForDeleteScrumPlanInProject();
    static HttpRequestDef genRequestDefForShowScrumPlansByCondition();
    static HttpRequestDef genRequestDefForUpdateScrumPlanInProject();
    static HttpRequestDef genRequestDefForAddIssueWorkHours();
    static HttpRequestDef genRequestDefForBatchDeleteIssuesV4();
    static HttpRequestDef genRequestDefForBatchDeleteIterationsV4();
    static HttpRequestDef genRequestDefForBatchDeleteScrumWorkitem();
    static HttpRequestDef genRequestDefForBatchListAssociatedIssues();
    static HttpRequestDef genRequestDefForBatchUpdateScrumIssues();
    static HttpRequestDef genRequestDefForCancelProjectDomain();
    static HttpRequestDef genRequestDefForCreateCustomfields();
    static HttpRequestDef genRequestDefForCreateIssueV4();
    static HttpRequestDef genRequestDefForCreateIterationV4();
    static HttpRequestDef genRequestDefForCreateProjectDomain();
    static HttpRequestDef genRequestDefForCreateProjectModule();
    static HttpRequestDef genRequestDefForCreateSystemIssueV4();
    static HttpRequestDef genRequestDefForDeleteAttachment();
    static HttpRequestDef genRequestDefForDeleteIssueV4();
    static HttpRequestDef genRequestDefForDeleteIterationV4();
    static HttpRequestDef genRequestDefForDeleteProjectModule();
    static HttpRequestDef genRequestDefForDownloadAttachment();
    static HttpRequestDef genRequestDefForDownloadImageFile();
    static HttpRequestDef genRequestDefForListAssociatedIssues();
    static HttpRequestDef genRequestDefForListAssociatedTestCases();
    static HttpRequestDef genRequestDefForListAssociatedWikis();
    static HttpRequestDef genRequestDefForListChildIssuesV4();
    static HttpRequestDef genRequestDefForListIssueAssociatedCommits();
    static HttpRequestDef genRequestDefForListIssueCommentsV4();
    static HttpRequestDef genRequestDefForListIssueCustomFields();
    static HttpRequestDef genRequestDefForListIssueRecordsV4();
    static HttpRequestDef genRequestDefForListIssuesSfV4();
    static HttpRequestDef genRequestDefForListIssuesV4();
    static HttpRequestDef genRequestDefForListIterationHistories();
    static HttpRequestDef genRequestDefForListProjectDomains();
    static HttpRequestDef genRequestDefForListProjectIssuesRecordsV4();
    static HttpRequestDef genRequestDefForListProjectIterationsV4();
    static HttpRequestDef genRequestDefForListProjectModules();
    static HttpRequestDef genRequestDefForListProjectWorkHours();
    static HttpRequestDef genRequestDefForListProjectWorkHoursType();
    static HttpRequestDef genRequestDefForListScrumProjectStatuses();
    static HttpRequestDef genRequestDefForListSpecIssueStayTimes();
    static HttpRequestDef genRequestDefForListStatusStatistic();
    static HttpRequestDef genRequestDefForListWorkitemConfigs();
    static HttpRequestDef genRequestDefForSearchIssues();
    static HttpRequestDef genRequestDefForShowIssueCompletionRate();
    static HttpRequestDef genRequestDefForShowIssueV4();
    static HttpRequestDef genRequestDefForShowIssuesWrokFlowConfig();
    static HttpRequestDef genRequestDefForShowIterationV4();
    static HttpRequestDef genRequestDefForShowProjectWorkHours();
    static HttpRequestDef genRequestDefForUpdateIssueV4();
    static HttpRequestDef genRequestDefForUpdateIterationV4();
    static HttpRequestDef genRequestDefForUpdateProjectDomain();
    static HttpRequestDef genRequestDefForUpdateProjectModule();
    static HttpRequestDef genRequestDefForUpdateScrumIssueNotes();
    static HttpRequestDef genRequestDefForUpdateScrumIssueWorkflow();
    static HttpRequestDef genRequestDefForUpdateScrumMyIssueNotes();
    static HttpRequestDef genRequestDefForUploadAttachments();
    static HttpRequestDef genRequestDefForUploadIssueImg();
    static HttpRequestDef genRequestDefForShowScrumIssueSeverities();
};

}
}
}
}

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_ProjectManMeta_H_
