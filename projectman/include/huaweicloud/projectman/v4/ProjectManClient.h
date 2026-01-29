#ifndef HUAWEICLOUD_SDK_PROJECTMAN_V4_ProjectManClient_H_
#define HUAWEICLOUD_SDK_PROJECTMAN_V4_ProjectManClient_H_

#include <huaweicloud/projectman/v4/ProjectManExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


#include <huaweicloud/projectman/v4/model/AddApplyJoinProjectForAgcRequest.h>
#include <huaweicloud/projectman/v4/model/AddApplyJoinProjectForAgcResponse.h>
#include <huaweicloud/projectman/v4/model/AddMemberRequestV4.h>
#include <huaweicloud/projectman/v4/model/AddMemberV4Request.h>
#include <huaweicloud/projectman/v4/model/AddMemberV4Response.h>
#include <huaweicloud/projectman/v4/model/BatchAddMembersV4Request.h>
#include <huaweicloud/projectman/v4/model/BatchAddMembersV4RequestBody.h>
#include <huaweicloud/projectman/v4/model/BatchAddMembersV4Response.h>
#include <huaweicloud/projectman/v4/model/BatchDeleteMembersV4Request.h>
#include <huaweicloud/projectman/v4/model/BatchDeleteMembersV4RequestBody.h>
#include <huaweicloud/projectman/v4/model/BatchDeleteMembersV4Response.h>
#include <huaweicloud/projectman/v4/model/BatchUpdateChildNickNamesRequest.h>
#include <huaweicloud/projectman/v4/model/BatchUpdateChildNickNamesResponse.h>
#include <huaweicloud/projectman/v4/model/BatchUpdateChildUserNickNamesRequestBody.h>
#include <huaweicloud/projectman/v4/model/CheckProjectNameRequestV4.h>
#include <huaweicloud/projectman/v4/model/CheckProjectNameV4Request.h>
#include <huaweicloud/projectman/v4/model/CheckProjectNameV4Response.h>
#include <huaweicloud/projectman/v4/model/CreateProjectV4Request.h>
#include <huaweicloud/projectman/v4/model/CreateProjectV4RequestBody.h>
#include <huaweicloud/projectman/v4/model/CreateProjectV4Response.h>
#include <huaweicloud/projectman/v4/model/DeleteProjectV4Request.h>
#include <huaweicloud/projectman/v4/model/DeleteProjectV4Response.h>
#include <huaweicloud/projectman/v4/model/ListDomainNotAddedProjectsV4Request.h>
#include <huaweicloud/projectman/v4/model/ListDomainNotAddedProjectsV4Response.h>
#include <huaweicloud/projectman/v4/model/ListProjectBugStaticsV4Request.h>
#include <huaweicloud/projectman/v4/model/ListProjectBugStaticsV4Response.h>
#include <huaweicloud/projectman/v4/model/ListProjectDemandStaticV4Request.h>
#include <huaweicloud/projectman/v4/model/ListProjectDemandStaticV4Response.h>
#include <huaweicloud/projectman/v4/model/ListProjectMembersV4Request.h>
#include <huaweicloud/projectman/v4/model/ListProjectMembersV4Response.h>
#include <huaweicloud/projectman/v4/model/ListProjectsV4Request.h>
#include <huaweicloud/projectman/v4/model/ListProjectsV4Response.h>
#include <huaweicloud/projectman/v4/model/ListTemplatesRequest.h>
#include <huaweicloud/projectman/v4/model/ListTemplatesResponse.h>
#include <huaweicloud/projectman/v4/model/ListWorkitemStatusRecordsV4Request.h>
#include <huaweicloud/projectman/v4/model/ListWorkitemStatusRecordsV4Response.h>
#include <huaweicloud/projectman/v4/model/ListWorkitemsRequest.h>
#include <huaweicloud/projectman/v4/model/ListWorkitemsResponse.h>
#include <huaweicloud/projectman/v4/model/MetricRequest2.h>
#include <huaweicloud/projectman/v4/model/MetricRequest3.h>
#include <huaweicloud/projectman/v4/model/MetricRequestV2.h>
#include <huaweicloud/projectman/v4/model/RemoveProjectRequest.h>
#include <huaweicloud/projectman/v4/model/RemoveProjectResponse.h>
#include <huaweicloud/projectman/v4/model/ShowBugDensityV2Request.h>
#include <huaweicloud/projectman/v4/model/ShowBugDensityV2Response.h>
#include <huaweicloud/projectman/v4/model/ShowBugsPerDeveloperRequest.h>
#include <huaweicloud/projectman/v4/model/ShowBugsPerDeveloperResponse.h>
#include <huaweicloud/projectman/v4/model/ShowCompletionRateRequest.h>
#include <huaweicloud/projectman/v4/model/ShowCompletionRateResponse.h>
#include <huaweicloud/projectman/v4/model/ShowCurUserInfoRequest.h>
#include <huaweicloud/projectman/v4/model/ShowCurUserInfoResponse.h>
#include <huaweicloud/projectman/v4/model/ShowCurUserRoleRequest.h>
#include <huaweicloud/projectman/v4/model/ShowCurUserRoleResponse.h>
#include <huaweicloud/projectman/v4/model/ShowProjectInfoV4Request.h>
#include <huaweicloud/projectman/v4/model/ShowProjectInfoV4Response.h>
#include <huaweicloud/projectman/v4/model/ShowProjectSummaryV4Request.h>
#include <huaweicloud/projectman/v4/model/ShowProjectSummaryV4Response.h>
#include <huaweicloud/projectman/v4/model/ShowWorkItemWrokflowConfigRequest.h>
#include <huaweicloud/projectman/v4/model/ShowWorkItemWrokflowConfigResponse.h>
#include <huaweicloud/projectman/v4/model/UpdateMembersRoleV4RequestBody.h>
#include <huaweicloud/projectman/v4/model/UpdateMembesRoleV4Request.h>
#include <huaweicloud/projectman/v4/model/UpdateMembesRoleV4Response.h>
#include <huaweicloud/projectman/v4/model/UpdateNickNameV4Request.h>
#include <huaweicloud/projectman/v4/model/UpdateNickNameV4Response.h>
#include <huaweicloud/projectman/v4/model/UpdateProjectRequestV4.h>
#include <huaweicloud/projectman/v4/model/UpdateProjectV4Request.h>
#include <huaweicloud/projectman/v4/model/UpdateProjectV4Response.h>
#include <huaweicloud/projectman/v4/model/UpdateUserNickNameRequestV4.h>
#include <string>

#include <huaweicloud/projectman/v4/model/CreateIpdProjectIssueAttachmentRequest.h>
#include <huaweicloud/projectman/v4/model/CreateIpdProjectIssueAttachmentRequestBody.h>
#include <huaweicloud/projectman/v4/model/CreateIpdProjectIssueAttachmentResponse.h>
#include <huaweicloud/projectman/v4/model/CreateIpdProjectIssueRequest.h>
#include <huaweicloud/projectman/v4/model/CreateIpdProjectIssueRequestBody.h>
#include <huaweicloud/projectman/v4/model/CreateIpdProjectIssueResponse.h>
#include <huaweicloud/projectman/v4/model/DeleteIpdImageInIssueRequest.h>
#include <huaweicloud/projectman/v4/model/DeleteIpdImageInIssueResponse.h>
#include <huaweicloud/projectman/v4/model/DownloadIpdImageInIssueRequest.h>
#include <huaweicloud/projectman/v4/model/DownloadIpdImageInIssueResponse.h>
#include <huaweicloud/core/utils/HttpContent.h>
#include <huaweicloud/projectman/v4/model/ListIpdProjectIssuesRequest.h>
#include <huaweicloud/projectman/v4/model/ListIpdProjectIssuesResponse.h>
#include <huaweicloud/projectman/v4/model/ListIssueFieldsRequest.h>
#include <huaweicloud/projectman/v4/model/ListIssueFieldsResponse.h>
#include <huaweicloud/projectman/v4/model/ListIssueStatuesRequest.h>
#include <huaweicloud/projectman/v4/model/ListIssueStatuesResponse.h>
#include <huaweicloud/projectman/v4/model/SearchIpdIssuesRequestBody.h>
#include <huaweicloud/projectman/v4/model/ShowIssueConfigFieldsRequest.h>
#include <huaweicloud/projectman/v4/model/ShowIssueConfigFieldsResponse.h>
#include <huaweicloud/projectman/v4/model/ShowIssueDetailRequest.h>
#include <huaweicloud/projectman/v4/model/ShowIssueDetailResponse.h>
#include <huaweicloud/projectman/v4/model/ShowWorkflowTemplateRequest.h>
#include <huaweicloud/projectman/v4/model/ShowWorkflowTemplateResponse.h>
#include <huaweicloud/projectman/v4/model/TransferWorkItemFlowRequest.h>
#include <huaweicloud/projectman/v4/model/TransferWorkItemFlowResponse.h>
#include <huaweicloud/projectman/v4/model/UploadIpdImageInIssueRequest.h>
#include <huaweicloud/projectman/v4/model/UploadIpdImageInIssueRequestBody.h>
#include <huaweicloud/projectman/v4/model/UploadIpdImageInIssueResponse.h>
#include <huaweicloud/projectman/v4/model/WorkItemFlowRequestBody.h>
#include <string>

#include <huaweicloud/projectman/v4/model/DownloadIpdIssueAttachmentRequest.h>
#include <huaweicloud/projectman/v4/model/DownloadIpdIssueAttachmentResponse.h>
#include <huaweicloud/projectman/v4/model/ShowIpdAttachmentByWorkItemIdRequest.h>
#include <huaweicloud/projectman/v4/model/ShowIpdAttachmentByWorkItemIdResponse.h>
#include <string>

#include <huaweicloud/projectman/v4/model/CreateScrumPlanToProjectRequest.h>
#include <huaweicloud/projectman/v4/model/CreateScrumPlanToProjectResponse.h>
#include <huaweicloud/projectman/v4/model/DeleteScrumPlanInProjectRequest.h>
#include <huaweicloud/projectman/v4/model/DeleteScrumPlanInProjectResponse.h>
#include <huaweicloud/projectman/v4/model/ShowScrumPlansByConditionRequest.h>
#include <huaweicloud/projectman/v4/model/ShowScrumPlansByConditionResponse.h>
#include <huaweicloud/projectman/v4/model/UpdateScrumPlanInProjectRequest.h>
#include <huaweicloud/projectman/v4/model/UpdateScrumPlanInProjectResponse.h>
#include <string>

#include <huaweicloud/projectman/v4/model/AddIssueWorkHoursRequest.h>
#include <huaweicloud/projectman/v4/model/AddIssueWorkHoursRequestBody.h>
#include <huaweicloud/projectman/v4/model/AddIssueWorkHoursResponse.h>
#include <huaweicloud/projectman/v4/model/BatchDeleteIssuesRequestV4.h>
#include <huaweicloud/projectman/v4/model/BatchDeleteIssuesV4Request.h>
#include <huaweicloud/projectman/v4/model/BatchDeleteIssuesV4Response.h>
#include <huaweicloud/projectman/v4/model/BatchDeleteIterationsV4Request.h>
#include <huaweicloud/projectman/v4/model/BatchDeleteIterationsV4RequestBody.h>
#include <huaweicloud/projectman/v4/model/BatchDeleteIterationsV4Response.h>
#include <huaweicloud/projectman/v4/model/BatchListAssociatedIssuesRequest.h>
#include <huaweicloud/projectman/v4/model/BatchListAssociatedIssuesResponse.h>
#include <huaweicloud/projectman/v4/model/CancelProjectDomainRequest.h>
#include <huaweicloud/projectman/v4/model/CancelProjectDomainResponse.h>
#include <huaweicloud/projectman/v4/model/CreateCustomfieldV1Req.h>
#include <huaweicloud/projectman/v4/model/CreateCustomfieldsRequest.h>
#include <huaweicloud/projectman/v4/model/CreateCustomfieldsResponse.h>
#include <huaweicloud/projectman/v4/model/CreateIssueRequestV4.h>
#include <huaweicloud/projectman/v4/model/CreateIssueV4Request.h>
#include <huaweicloud/projectman/v4/model/CreateIssueV4Response.h>
#include <huaweicloud/projectman/v4/model/CreateIterationRequestV4.h>
#include <huaweicloud/projectman/v4/model/CreateIterationV4Request.h>
#include <huaweicloud/projectman/v4/model/CreateIterationV4Response.h>
#include <huaweicloud/projectman/v4/model/CreateProjectDomainRequest.h>
#include <huaweicloud/projectman/v4/model/CreateProjectDomainRequestBody.h>
#include <huaweicloud/projectman/v4/model/CreateProjectDomainResponse.h>
#include <huaweicloud/projectman/v4/model/CreateProjectModuleRequest.h>
#include <huaweicloud/projectman/v4/model/CreateProjectModuleRequestBody.h>
#include <huaweicloud/projectman/v4/model/CreateProjectModuleResponse.h>
#include <huaweicloud/projectman/v4/model/CreateSystemIssueRequestV4.h>
#include <huaweicloud/projectman/v4/model/CreateSystemIssueV4Request.h>
#include <huaweicloud/projectman/v4/model/CreateSystemIssueV4Response.h>
#include <huaweicloud/projectman/v4/model/DeleteAttachmentRequest.h>
#include <huaweicloud/projectman/v4/model/DeleteAttachmentResponse.h>
#include <huaweicloud/projectman/v4/model/DeleteIssueV4Request.h>
#include <huaweicloud/projectman/v4/model/DeleteIssueV4Response.h>
#include <huaweicloud/projectman/v4/model/DeleteIterationV4Request.h>
#include <huaweicloud/projectman/v4/model/DeleteIterationV4Response.h>
#include <huaweicloud/projectman/v4/model/DeleteProjectModuleRequest.h>
#include <huaweicloud/projectman/v4/model/DeleteProjectModuleResponse.h>
#include <huaweicloud/projectman/v4/model/DownloadAttachmentRequest.h>
#include <huaweicloud/projectman/v4/model/DownloadAttachmentResponse.h>
#include <huaweicloud/projectman/v4/model/DownloadImageFileRequest.h>
#include <huaweicloud/projectman/v4/model/DownloadImageFileResponse.h>
#include <huaweicloud/core/utils/HttpContent.h>
#include <huaweicloud/projectman/v4/model/IssueRequestV4.h>
#include <huaweicloud/projectman/v4/model/ListAssociatedIssuesRequest.h>
#include <huaweicloud/projectman/v4/model/ListAssociatedIssuesResponse.h>
#include <huaweicloud/projectman/v4/model/ListAssociatedTestCasesRequest.h>
#include <huaweicloud/projectman/v4/model/ListAssociatedTestCasesResponse.h>
#include <huaweicloud/projectman/v4/model/ListAssociatedWikisRequest.h>
#include <huaweicloud/projectman/v4/model/ListAssociatedWikisResponse.h>
#include <huaweicloud/projectman/v4/model/ListChildIssuesV4Request.h>
#include <huaweicloud/projectman/v4/model/ListChildIssuesV4Response.h>
#include <huaweicloud/projectman/v4/model/ListIssueAssociatedCommitsRequest.h>
#include <huaweicloud/projectman/v4/model/ListIssueAssociatedCommitsResponse.h>
#include <huaweicloud/projectman/v4/model/ListIssueCommentsV4Request.h>
#include <huaweicloud/projectman/v4/model/ListIssueCommentsV4Response.h>
#include <huaweicloud/projectman/v4/model/ListIssueCustomFieldsRequest.h>
#include <huaweicloud/projectman/v4/model/ListIssueCustomFieldsRequestBody.h>
#include <huaweicloud/projectman/v4/model/ListIssueCustomFieldsResponse.h>
#include <huaweicloud/projectman/v4/model/ListIssueRecordsV4Request.h>
#include <huaweicloud/projectman/v4/model/ListIssueRecordsV4Response.h>
#include <huaweicloud/projectman/v4/model/ListIssueRequestV4.h>
#include <huaweicloud/projectman/v4/model/ListIssuesSfV4Request.h>
#include <huaweicloud/projectman/v4/model/ListIssuesSfV4Response.h>
#include <huaweicloud/projectman/v4/model/ListIssuesV4Request.h>
#include <huaweicloud/projectman/v4/model/ListIssuesV4Response.h>
#include <huaweicloud/projectman/v4/model/ListIterationHistoriesRequest.h>
#include <huaweicloud/projectman/v4/model/ListIterationHistoriesResponse.h>
#include <huaweicloud/projectman/v4/model/ListProjectDomainsRequest.h>
#include <huaweicloud/projectman/v4/model/ListProjectDomainsResponse.h>
#include <huaweicloud/projectman/v4/model/ListProjectIssuesRecordsV4Request.h>
#include <huaweicloud/projectman/v4/model/ListProjectIssuesRecordsV4Response.h>
#include <huaweicloud/projectman/v4/model/ListProjectIterationsV4Request.h>
#include <huaweicloud/projectman/v4/model/ListProjectIterationsV4Response.h>
#include <huaweicloud/projectman/v4/model/ListProjectModulesRequest.h>
#include <huaweicloud/projectman/v4/model/ListProjectModulesResponse.h>
#include <huaweicloud/projectman/v4/model/ListProjectWorkHoursRequest.h>
#include <huaweicloud/projectman/v4/model/ListProjectWorkHoursRequestBody.h>
#include <huaweicloud/projectman/v4/model/ListProjectWorkHoursResponse.h>
#include <huaweicloud/projectman/v4/model/ListProjectWorkHoursTypeRequest.h>
#include <huaweicloud/projectman/v4/model/ListProjectWorkHoursTypeResponse.h>
#include <huaweicloud/projectman/v4/model/ListScrumProjectStatusesRequest.h>
#include <huaweicloud/projectman/v4/model/ListScrumProjectStatusesResponse.h>
#include <huaweicloud/projectman/v4/model/ListSpecIssueStayTimesRequest.h>
#include <huaweicloud/projectman/v4/model/ListSpecIssueStayTimesRequestBody.h>
#include <huaweicloud/projectman/v4/model/ListSpecIssueStayTimesResponse.h>
#include <huaweicloud/projectman/v4/model/ListStatusStatisticRequest.h>
#include <huaweicloud/projectman/v4/model/ListStatusStatisticResponse.h>
#include <huaweicloud/projectman/v4/model/ListWorkTableIssueRequestV4RequestBody.h>
#include <huaweicloud/projectman/v4/model/SearchIssuesRequest.h>
#include <huaweicloud/projectman/v4/model/SearchIssuesResponse.h>
#include <huaweicloud/projectman/v4/model/ShowIssueCompletionRateRequest.h>
#include <huaweicloud/projectman/v4/model/ShowIssueCompletionRateResponse.h>
#include <huaweicloud/projectman/v4/model/ShowIssueV4Request.h>
#include <huaweicloud/projectman/v4/model/ShowIssueV4Response.h>
#include <huaweicloud/projectman/v4/model/ShowIssuesWrokFlowConfigRequest.h>
#include <huaweicloud/projectman/v4/model/ShowIssuesWrokFlowConfigResponse.h>
#include <huaweicloud/projectman/v4/model/ShowIterationV4Request.h>
#include <huaweicloud/projectman/v4/model/ShowIterationV4Response.h>
#include <huaweicloud/projectman/v4/model/ShowProjectWorkHoursRequest.h>
#include <huaweicloud/projectman/v4/model/ShowProjectWorkHoursRequestBody.h>
#include <huaweicloud/projectman/v4/model/ShowProjectWorkHoursResponse.h>
#include <huaweicloud/projectman/v4/model/UpdateIssueV4Request.h>
#include <huaweicloud/projectman/v4/model/UpdateIssueV4Response.h>
#include <huaweicloud/projectman/v4/model/UpdateIterationRequestV4.h>
#include <huaweicloud/projectman/v4/model/UpdateIterationV4Request.h>
#include <huaweicloud/projectman/v4/model/UpdateIterationV4Response.h>
#include <huaweicloud/projectman/v4/model/UpdateProjectDomainRequest.h>
#include <huaweicloud/projectman/v4/model/UpdateProjectDomainResponse.h>
#include <huaweicloud/projectman/v4/model/UpdateProjectModuleRequest.h>
#include <huaweicloud/projectman/v4/model/UpdateProjectModuleRequestBody.h>
#include <huaweicloud/projectman/v4/model/UpdateProjectModuleResponse.h>
#include <huaweicloud/projectman/v4/model/UploadAttachmentsRequest.h>
#include <huaweicloud/projectman/v4/model/UploadAttachmentsRequestBody.h>
#include <huaweicloud/projectman/v4/model/UploadAttachmentsResponse.h>
#include <huaweicloud/projectman/v4/model/UploadIssueImgRequest.h>
#include <huaweicloud/projectman/v4/model/UploadIssueImgRequestBody.h>
#include <huaweicloud/projectman/v4/model/UploadIssueImgResponse.h>
#include <huaweicloud/projectman/v4/model/UserStatusStatistic.h>
#include <string>

#include <huaweicloud/projectman/v4/model/ShowScrumIssueSeveritiesRequest.h>
#include <huaweicloud/projectman/v4/model/ShowScrumIssueSeveritiesResponse.h>
#include <string>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Object.h>
#undef U
#include <boost/optional.hpp>

namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {

using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Projectman::V4::Model;

class HUAWEICLOUD_PROJECTMAN_V4_EXPORT  ProjectManClient : public Client
{
public:

    ProjectManClient();

    virtual ~ProjectManClient();

    static ClientBuilder<ProjectManClient> newBuilder();

    // AGC调用 当前用户申请加入项目
    //
    // AGC调用 当前用户申请加入项目, 申请的用户id写在header中
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddApplyJoinProjectForAgcResponse> addApplyJoinProjectForAgc(
        AddApplyJoinProjectForAgcRequest &request
    );
    // 添加项目成员
    //
    // 添加项目成员,可以添加跨租户成员
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddMemberV4Response> addMemberV4(
        AddMemberV4Request &request
    );
    // 批量添加项目成员
    //
    // 批量添加项目成员，只能添加和项目创建者同一租户下的成员，不正确的用户id会略过，添加的用户超过权限的，默认角色设置为7
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchAddMembersV4Response> batchAddMembersV4(
        BatchAddMembersV4Request &request
    );
    // 批量删除项目成员
    //
    // 批量删除项目成员
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchDeleteMembersV4Response> batchDeleteMembersV4(
        BatchDeleteMembersV4Request &request
    );
    // 更新子用户昵称
    //
    // 拥有te_admin角色的用户可以更新其他用户的昵称
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchUpdateChildNickNamesResponse> batchUpdateChildNickNames(
        BatchUpdateChildNickNamesRequest &request
    );
    // 检查项目名称是否存在
    //
    // 检查项目名称是否存在
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CheckProjectNameV4Response> checkProjectNameV4(
        CheckProjectNameV4Request &request
    );
    // 创建项目
    //
    // 创建项目
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateProjectV4Response> createProjectV4(
        CreateProjectV4Request &request
    );
    // 删除项目
    //
    // 删除项目
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteProjectV4Response> deleteProjectV4(
        DeleteProjectV4Request &request
    );
    // 获取租户没有加入的项目
    //
    // 获取租户没有加入的项目
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDomainNotAddedProjectsV4Response> listDomainNotAddedProjectsV4(
        ListDomainNotAddedProjectsV4Request &request
    );
    // 获取bug统计信息
    //
    // 获取bug统计信息，按模块统计
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListProjectBugStaticsV4Response> listProjectBugStaticsV4(
        ListProjectBugStaticsV4Request &request
    );
    // 获取需求统计信息
    //
    // 获取需求统计信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListProjectDemandStaticV4Response> listProjectDemandStaticV4(
        ListProjectDemandStaticV4Request &request
    );
    // 获取指定项目的成员用户列表
    //
    // 获取项目成员列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListProjectMembersV4Response> listProjectMembersV4(
        ListProjectMembersV4Request &request
    );
    // 查询项目列表
    //
    // 查询项目列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListProjectsV4Response> listProjectsV4(
        ListProjectsV4Request &request
    );
    // 查询项目模板
    //
    // 查询项目模板
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListTemplatesResponse> listTemplates(
        ListTemplatesRequest &request
    );
    // 查询看板项目下工作项的状态历史记录
    //
    // 分页查询看板项目下工作项的状态历史记录
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListWorkitemStatusRecordsV4Response> listWorkitemStatusRecordsV4(
        ListWorkitemStatusRecordsV4Request &request
    );
    // 查询看板项目下的工作项
    //
    // 查询看板项目下的工作项
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListWorkitemsResponse> listWorkitems(
        ListWorkitemsRequest &request
    );
    // 主动退出项目
    //
    // 项目成员主动退出项目，项目创建者不能退出
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RemoveProjectResponse> removeProject(
        RemoveProjectRequest &request
    );
    // 查询缺陷密度
    //
    // 查询缺陷密度
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowBugDensityV2Response> showBugDensityV2(
        ShowBugDensityV2Request &request
    );
    // 查询人均bug
    //
    // 查询人均bug
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowBugsPerDeveloperResponse> showBugsPerDeveloper(
        ShowBugsPerDeveloperRequest &request
    );
    // 查询需求按时完成率
    //
    // 查询需求按时完成率
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowCompletionRateResponse> showCompletionRate(
        ShowCompletionRateRequest &request
    );
    // 获取当前用户信息
    //
    // 获取当前用户信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowCurUserInfoResponse> showCurUserInfo(
        ShowCurUserInfoRequest &request
    );
    // 获取当前用户角色
    //
    // 获取用户在项目中的角色
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowCurUserRoleResponse> showCurUserRole(
        ShowCurUserRoleRequest &request
    );
    // 获取项目详情
    //
    // 获取项目详情
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowProjectInfoV4Response> showProjectInfoV4(
        ShowProjectInfoV4Request &request
    );
    // 获取项目概览
    //
    // 获取项目概览
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowProjectSummaryV4Response> showProjectSummaryV4(
        ShowProjectSummaryV4Request &request
    );
    // 查询看板项目的工作项流转配置
    //
    // 查询看板项目的工作项流转配置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowWorkItemWrokflowConfigResponse> showWorkItemWrokflowConfig(
        ShowWorkItemWrokflowConfigRequest &request
    );
    // 更新成员在项目中的角色
    //
    // 更新成员在项目中的角色
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateMembesRoleV4Response> updateMembesRoleV4(
        UpdateMembesRoleV4Request &request
    );
    // 更新用户昵称
    //
    // 更新用户昵称
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateNickNameV4Response> updateNickNameV4(
        UpdateNickNameV4Request &request
    );
    // 更新项目
    //
    // 更新项目
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateProjectV4Response> updateProjectV4(
        UpdateProjectV4Request &request
    );

    // 创建工作项
    //
    // 创建IPD项目的工作项
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateIpdProjectIssueResponse> createIpdProjectIssue(
        CreateIpdProjectIssueRequest &request
    );
    // 上传issue附件
    //
    // 上传issue附件
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateIpdProjectIssueAttachmentResponse> createIpdProjectIssueAttachment(
        CreateIpdProjectIssueAttachmentRequest &request
    );
    // 删除工作项描述中的图片
    //
    // 删除工作项描述中的图片
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteIpdImageInIssueResponse> deleteIpdImageInIssue(
        DeleteIpdImageInIssueRequest &request
    );
    // 下载工作项描述中的图片
    //
    // 下载工作项描述中的图片
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DownloadIpdImageInIssueResponse> downloadIpdImageInIssue(
        DownloadIpdImageInIssueRequest &request
    );
    // 查询项目工作项列表
    //
    // 查询Ipd项目的工作项列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListIpdProjectIssuesResponse> listIpdProjectIssues(
        ListIpdProjectIssuesRequest &request
    );
    // 查询字段模板列表
    //
    // 工作项类型中查询字段模板列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListIssueFieldsResponse> listIssueFields(
        ListIssueFieldsRequest &request
    );
    // 查询工作项状态
    //
    // 根据工作项查询工作项下的状态信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListIssueStatuesResponse> listIssueStatues(
        ListIssueStatuesRequest &request
    );
    // 查询工作流字段配置信息
    //
    // 查询工作流字段配置信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowIssueConfigFieldsResponse> showIssueConfigFields(
        ShowIssueConfigFieldsRequest &request
    );
    // 查询工作项详情
    //
    // 查询工作项详情
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowIssueDetailResponse> showIssueDetail(
        ShowIssueDetailRequest &request
    );
    // 获取工作流的详情及每条流转线的详情
    //
    // 获取工作流的详情及每条流转线的详情
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowWorkflowTemplateResponse> showWorkflowTemplate(
        ShowWorkflowTemplateRequest &request
    );
    // 修改工作项的状态
    //
    // 工作项流程流转
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<TransferWorkItemFlowResponse> transferWorkItemFlow(
        TransferWorkItemFlowRequest &request
    );
    // 上传图片到工作项描述中
    //
    // 上传图片并更新到工作项描述中
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UploadIpdImageInIssueResponse> uploadIpdImageInIssue(
        UploadIpdImageInIssueRequest &request
    );

    // 根据ID下载工作项附件
    //
    // 根据ID下载工作项附件
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DownloadIpdIssueAttachmentResponse> downloadIpdIssueAttachment(
        DownloadIpdIssueAttachmentRequest &request
    );
    // 查询工作项附件列表
    //
    // 查询工作项附件列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowIpdAttachmentByWorkItemIdResponse> showIpdAttachmentByWorkItemId(
        ShowIpdAttachmentByWorkItemIdRequest &request
    );

    // 新增需求规划
    //
    // 新增需求规划
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateScrumPlanToProjectResponse> createScrumPlanToProject(
        CreateScrumPlanToProjectRequest &request
    );
    // 删除规划(支持批量)
    //
    // 删除规划(支持批量)
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteScrumPlanInProjectResponse> deleteScrumPlanInProject(
        DeleteScrumPlanInProjectRequest &request
    );
    // 查询项目下当前用户可见的所有规划，分页
    //
    // 查询项目下当前用户可见的所有规划，分页
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowScrumPlansByConditionResponse> showScrumPlansByCondition(
        ShowScrumPlansByConditionRequest &request
    );
    // 更新需求规划
    //
    // 更新需求规划
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateScrumPlanInProjectResponse> updateScrumPlanInProject(
        UpdateScrumPlanInProjectRequest &request
    );

    // 添加指定工作项工时
    //
    // 添加指定工作项工时
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddIssueWorkHoursResponse> addIssueWorkHours(
        AddIssueWorkHoursRequest &request
    );
    // 批量删除工作项
    //
    // 批量删除工作项
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchDeleteIssuesV4Response> batchDeleteIssuesV4(
        BatchDeleteIssuesV4Request &request
    );
    // 批量删除项目的迭代
    //
    // 批量删除项目的迭代
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchDeleteIterationsV4Response> batchDeleteIterationsV4(
        BatchDeleteIterationsV4Request &request
    );
    // 查询当前项目下已经关联的工作项
    //
    // 查询当前项目下已经关联的工作项
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchListAssociatedIssuesResponse> batchListAssociatedIssues(
        BatchListAssociatedIssuesRequest &request
    );
    // 取消领域与项目的关联关系
    //
    // 取消领域与项目的关联关系
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CancelProjectDomainResponse> cancelProjectDomain(
        CancelProjectDomainRequest &request
    );
    // 创建工作项类型自定义字段
    //
    // 创建工作项类型自定义字段
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateCustomfieldsResponse> createCustomfields(
        CreateCustomfieldsRequest &request
    );
    // 创建工作项
    //
    // 创建工作项
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateIssueV4Response> createIssueV4(
        CreateIssueV4Request &request
    );
    // 创建Scrum项目迭代
    //
    // 创建Scrum项目迭代
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateIterationV4Response> createIterationV4(
        CreateIterationV4Request &request
    );
    // 创建项目的领域
    //
    // 查询项目的领域列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateProjectDomainResponse> createProjectDomain(
        CreateProjectDomainRequest &request
    );
    // 创建项目的模块
    //
    // 查询项目的模块列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateProjectModuleResponse> createProjectModule(
        CreateProjectModuleRequest &request
    );
    // 细粒度权限用户创建工作项
    //
    // 拥有IAM细粒度权限（projectmanConfig:systemSettingField:set）且在devcloud项目中有创建工作项的权限的用户可以设置工作项的创建者
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateSystemIssueV4Response> createSystemIssueV4(
        CreateSystemIssueV4Request &request
    );
    // 删除附件
    //
    // 取消工作项与附件关联，如附件为工作项页面上传则删除附件
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteAttachmentResponse> deleteAttachment(
        DeleteAttachmentRequest &request
    );
    // 删除工作项
    //
    // 删除工作项
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteIssueV4Response> deleteIssueV4(
        DeleteIssueV4Request &request
    );
    // 删除项目迭代
    //
    // 删除项目迭代
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteIterationV4Response> deleteIterationV4(
        DeleteIterationV4Request &request
    );
    // 删除项目的模块
    //
    // 删除项目的模块
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteProjectModuleResponse> deleteProjectModule(
        DeleteProjectModuleRequest &request
    );
    // 下载工作项附件
    //
    // 下载工作项附件
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DownloadAttachmentResponse> downloadAttachment(
        DownloadAttachmentRequest &request
    );
    // 下载图片
    //
    // 下载图片
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DownloadImageFileResponse> downloadImageFile(
        DownloadImageFileRequest &request
    );
    // 查询当前工作项已经关联的工作项
    //
    // 查询当前工作项已经关联的工作项
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAssociatedIssuesResponse> listAssociatedIssues(
        ListAssociatedIssuesRequest &request
    );
    // 查询关联用例
    //
    // 查询关联用例
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAssociatedTestCasesResponse> listAssociatedTestCases(
        ListAssociatedTestCasesRequest &request
    );
    // 查询当前工作项已经关联的关联Wiki
    //
    // 查询当前工作项已经关联的关联Wiki
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAssociatedWikisResponse> listAssociatedWikis(
        ListAssociatedWikisRequest &request
    );
    // 获取子工作项
    //
    // 获取子工作项
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListChildIssuesV4Response> listChildIssuesV4(
        ListChildIssuesV4Request &request
    );
    // 查询当前工作项已经关联的代码提交记录 / 分支创建记录
    //
    // 查询当前工作项已经关联的代码提交记录 / 分支创建记录
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListIssueAssociatedCommitsResponse> listIssueAssociatedCommits(
        ListIssueAssociatedCommitsRequest &request
    );
    // 获取指定工作项的评论列表
    //
    // 获取工作项的评论
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListIssueCommentsV4Response> listIssueCommentsV4(
        ListIssueCommentsV4Request &request
    );
    // 查询Scrum工作项自定义字段
    //
    // 查询Scrum工作项自定义字段的可选列表,符合custom_fields或者names条件的都返回,2个值都不传，返回所有的自定义字段列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListIssueCustomFieldsResponse> listIssueCustomFields(
        ListIssueCustomFieldsRequest &request
    );
    // 获取工作项历史记录
    //
    // 获取工作项历史记录
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListIssueRecordsV4Response> listIssueRecordsV4(
        ListIssueRecordsV4Request &request
    );
    // 查询项目的工作项
    //
    // 工作项类型id, 分页参数，创建时间查询项目的工作项
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListIssuesSfV4Response> listIssuesSfV4(
        ListIssuesSfV4Request &request
    );
    // 高级查询工作项
    //
    // 根据筛选条件查询工作项
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListIssuesV4Response> listIssuesV4(
        ListIssuesV4Request &request
    );
    // 查看迭代历史记录
    //
    // 查看迭代历史记录
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListIterationHistoriesResponse> listIterationHistories(
        ListIterationHistoriesRequest &request
    );
    // 查询项目的领域列表
    //
    // 查询项目的领域列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListProjectDomainsResponse> listProjectDomains(
        ListProjectDomainsRequest &request
    );
    // 查询项目下所有工作项的历史记录
    //
    // 查询项目下所有工作项的历史记录
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListProjectIssuesRecordsV4Response> listProjectIssuesRecordsV4(
        ListProjectIssuesRecordsV4Request &request
    );
    // 获取指定项目的迭代列表
    //
    // 获取项目迭代
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListProjectIterationsV4Response> listProjectIterationsV4(
        ListProjectIterationsV4Request &request
    );
    // 查询项目的模块列表
    //
    // 查询项目的模块列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListProjectModulesResponse> listProjectModules(
        ListProjectModulesRequest &request
    );
    // 按用户查询工时（多项目）
    //
    // 按用户查询工时（多项目）
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListProjectWorkHoursResponse> listProjectWorkHours(
        ListProjectWorkHoursRequest &request
    );
    // 查询项目下的工时类型
    //
    // 查询项目下的工时类型
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListProjectWorkHoursTypeResponse> listProjectWorkHoursType(
        ListProjectWorkHoursTypeRequest &request
    );
    // 查询项目的状态列表
    //
    // 查询项目的状态列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListScrumProjectStatusesResponse> listScrumProjectStatuses(
        ListScrumProjectStatusesRequest &request
    );
    // 获取指定工作项停留时间
    //
    // 获取指定工作项停留时间
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListSpecIssueStayTimesResponse> listSpecIssueStayTimes(
        ListSpecIssueStayTimesRequest &request
    );
    // 查询迭代下工作项状态的统计数据（处理人维度）
    //
    // 查询迭代下工作项状态的统计数据（处理人维度）
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListStatusStatisticResponse> listStatusStatistic(
        ListStatusStatisticRequest &request
    );
    // 高级查询我的待办工作项
    //
    // 高级查询我的待办工作项
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SearchIssuesResponse> searchIssues(
        SearchIssuesRequest &request
    );
    // 获取工作项完成率
    //
    // 获取工作项的完成率
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowIssueCompletionRateResponse> showIssueCompletionRate(
        ShowIssueCompletionRateRequest &request
    );
    // 查询工作项详情
    //
    // 查询工作项详情
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowIssueV4Response> showIssueV4(
        ShowIssueV4Request &request
    );
    // 查询Scrum项目的工作项流转配置
    //
    // 查询Scrum项目的工作项流转配置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowIssuesWrokFlowConfigResponse> showIssuesWrokFlowConfig(
        ShowIssuesWrokFlowConfigRequest &request
    );
    // 查看迭代详情
    //
    // 查看迭代详情
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowIterationV4Response> showIterationV4(
        ShowIterationV4Request &request
    );
    // 按用户查询工时（单项目）
    //
    // 按用户查询工时（单项目）
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowProjectWorkHoursResponse> showProjectWorkHours(
        ShowProjectWorkHoursRequest &request
    );
    // 更新工作项
    //
    // 更新工作项
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateIssueV4Response> updateIssueV4(
        UpdateIssueV4Request &request
    );
    // 更新Scrum项目迭代
    //
    // 更新Scrum项目迭代
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateIterationV4Response> updateIterationV4(
        UpdateIterationV4Request &request
    );
    // 更新项目的领域
    //
    // 更新项目的领域
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateProjectDomainResponse> updateProjectDomain(
        UpdateProjectDomainRequest &request
    );
    // 更新项目的模块
    //
    // 更新项目的模块
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateProjectModuleResponse> updateProjectModule(
        UpdateProjectModuleRequest &request
    );
    // 上传工作项附件
    //
    // 上传工作项附件
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UploadAttachmentsResponse> uploadAttachments(
        UploadAttachmentsRequest &request
    );
    // 上传图片
    //
    // 上传图片
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UploadIssueImgResponse> uploadIssueImg(
        UploadIssueImgRequest &request
    );

    // 查询所有的严重程度
    //
    // 查询所有的严重程度
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowScrumIssueSeveritiesResponse> showScrumIssueSeverities(
        ShowScrumIssueSeveritiesRequest &request
    );


private:
#if defined(WIN32) || defined(__WIN32__) || defined(_WIN32) || defined(_MSC_VER)
    std::string parameterToString(utility::string_t value);
#endif
    std::string parameterToString(std::string value);
    std::string parameterToString(int32_t value);
    std::string parameterToString(int64_t value);
    std::string parameterToString(float value);
    std::string parameterToString(double value);
    std::string parameterToString(const Object& obj);
    std::string parameterToString(const utility::datetime &value);

    template<class T>
    std::string parameterToString(const std::vector<T> &value)
    {
        std::stringstream ss;
        for( size_t i = 0; i < value.size(); i++)
        {
            if (i > 0) {
                ss << ", ";
            }
            ss << parameterToString(value[i]);
        }

    return ss.str();
    }

    template<class T>
    std::string parameterToString(const std::shared_ptr<T> &value)
    {
        return parameterToString(*value.get());
    }

#ifdef RTTR_FLAG
    RTTR_ENABLE()
#endif
};

}
}
}
}

template class HUAWEICLOUD_PROJECTMAN_V4_EXPORT ::HuaweiCloud::Sdk::Core::ClientBuilder<::HuaweiCloud::Sdk::Projectman::V4::ProjectManClient>;

#endif // HUAWEICLOUD_SDK_PROJECTMAN_V4_ProjectManClient_H_

