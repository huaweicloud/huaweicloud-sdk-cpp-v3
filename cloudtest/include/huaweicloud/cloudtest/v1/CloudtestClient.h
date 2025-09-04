#ifndef HUAWEICLOUD_SDK_CLOUDTEST_V1_CloudtestClient_H_
#define HUAWEICLOUD_SDK_CLOUDTEST_V1_CloudtestClient_H_

#include <huaweicloud/cloudtest/v1/CloudtestExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


#include <huaweicloud/cloudtest/v1/model/AddCaseResultFourRequest.h>
#include <huaweicloud/cloudtest/v1/model/AddCaseResultFourResponse.h>
#include <huaweicloud/cloudtest/v1/model/AddRelationsInfo.h>
#include <huaweicloud/cloudtest/v1/model/AddResourceInfo.h>
#include <huaweicloud/cloudtest/v1/model/AddTestCaseCommentRequest.h>
#include <huaweicloud/cloudtest/v1/model/AddTestCaseCommentResponse.h>
#include <huaweicloud/cloudtest/v1/model/AddTestCaseResultInfo.h>
#include <huaweicloud/cloudtest/v1/model/AddTestCaseResultLogInfo.h>
#include <huaweicloud/cloudtest/v1/model/AddTestCaseResultLogRequest.h>
#include <huaweicloud/cloudtest/v1/model/AddTestCaseResultLogResponse.h>
#include <huaweicloud/cloudtest/v1/model/AlarmStatisticsQuery.h>
#include <huaweicloud/cloudtest/v1/model/AlertStatisticsDto.h>
#include <huaweicloud/cloudtest/v1/model/BatchAddRelationsByOneCaseRequest.h>
#include <huaweicloud/cloudtest/v1/model/BatchAddRelationsByOneCaseResponse.h>
#include <huaweicloud/cloudtest/v1/model/BatchAddResourcesForIteratorRequest.h>
#include <huaweicloud/cloudtest/v1/model/BatchAddResourcesForIteratorResponse.h>
#include <huaweicloud/cloudtest/v1/model/BatchDeleteTestCaseRequest.h>
#include <huaweicloud/cloudtest/v1/model/BatchDeleteTestCaseRequestBody.h>
#include <huaweicloud/cloudtest/v1/model/BatchDeleteTestCaseResponse.h>
#include <huaweicloud/cloudtest/v1/model/BatchDeleteTestCasesRequest.h>
#include <huaweicloud/cloudtest/v1/model/BatchDeleteTestCasesResponse.h>
#include <huaweicloud/cloudtest/v1/model/BatchDeleteTestReportRequest.h>
#include <huaweicloud/cloudtest/v1/model/BatchDeleteTestReportResponse.h>
#include <huaweicloud/cloudtest/v1/model/BatchRemoveTestCasesFromIteratorRequest.h>
#include <huaweicloud/cloudtest/v1/model/BatchRemoveTestCasesFromIteratorResponse.h>
#include <huaweicloud/cloudtest/v1/model/BatchUpdateVersionTestCasesRequest.h>
#include <huaweicloud/cloudtest/v1/model/BatchUpdateVersionTestCasesResponse.h>
#include <huaweicloud/cloudtest/v1/model/BranchVersionInfo.h>
#include <huaweicloud/cloudtest/v1/model/CaseRemoveInfo.h>
#include <huaweicloud/cloudtest/v1/model/CheckPermissionRequest.h>
#include <huaweicloud/cloudtest/v1/model/CheckPermissionResponse.h>
#include <huaweicloud/cloudtest/v1/model/CommRequestListFactorParam.h>
#include <huaweicloud/cloudtest/v1/model/CommRequestMindmapPageParamV3.h>
#include <huaweicloud/cloudtest/v1/model/CommRequestReviewPageParam.h>
#include <huaweicloud/cloudtest/v1/model/CommRequestScenePageParam.h>
#include <huaweicloud/cloudtest/v1/model/CommRequestSystemConfig.h>
#include <huaweicloud/cloudtest/v1/model/CommRequestTemplatePageParam.h>
#include <huaweicloud/cloudtest/v1/model/CommRequestTestCasePageParam.h>
#include <huaweicloud/cloudtest/v1/model/CommRequestTestPointPageParam.h>
#include <huaweicloud/cloudtest/v1/model/CreateBasicAwReq.h>
#include <huaweicloud/cloudtest/v1/model/CreateIteratorRequest.h>
#include <huaweicloud/cloudtest/v1/model/CreateIteratorResponse.h>
#include <huaweicloud/cloudtest/v1/model/CreatePlanRequest.h>
#include <huaweicloud/cloudtest/v1/model/CreatePlanRequestBody.h>
#include <huaweicloud/cloudtest/v1/model/CreatePlanResponse.h>
#include <huaweicloud/cloudtest/v1/model/CreateProjectBranchRequest.h>
#include <huaweicloud/cloudtest/v1/model/CreateProjectBranchResponse.h>
#include <huaweicloud/cloudtest/v1/model/CreateRelationsByOneCaseRequest.h>
#include <huaweicloud/cloudtest/v1/model/CreateRelationsByOneCaseResponse.h>
#include <huaweicloud/cloudtest/v1/model/CreateReportRequest.h>
#include <huaweicloud/cloudtest/v1/model/CreateReportResponse.h>
#include <huaweicloud/cloudtest/v1/model/CreateResourceUriRequest.h>
#include <huaweicloud/cloudtest/v1/model/CreateResourceUriResponse.h>
#include <huaweicloud/cloudtest/v1/model/CreateServiceRequest.h>
#include <huaweicloud/cloudtest/v1/model/CreateServiceResponse.h>
#include <huaweicloud/cloudtest/v1/model/CreateTaskDefaultResultRequest.h>
#include <huaweicloud/cloudtest/v1/model/CreateTaskDefaultResultResponse.h>
#include <huaweicloud/cloudtest/v1/model/CreateTestCaseInPlanRequest.h>
#include <huaweicloud/cloudtest/v1/model/CreateTestCaseInPlanRequestBody.h>
#include <huaweicloud/cloudtest/v1/model/CreateTestCaseInPlanResponse.h>
#include <huaweicloud/cloudtest/v1/model/CreateTestCaseRequest.h>
#include <huaweicloud/cloudtest/v1/model/CreateTestCaseRequestBody.h>
#include <huaweicloud/cloudtest/v1/model/CreateTestCaseResponse.h>
#include <huaweicloud/cloudtest/v1/model/CreateUserDefinedUrlKeyWordRequest.h>
#include <huaweicloud/cloudtest/v1/model/CreateUserDefinedUrlKeyWordResponse.h>
#include <huaweicloud/cloudtest/v1/model/CreateVersionTestCaseRequest.h>
#include <huaweicloud/cloudtest/v1/model/CreateVersionTestCaseResponse.h>
#include <huaweicloud/cloudtest/v1/model/DashboardDataQuery.h>
#include <huaweicloud/cloudtest/v1/model/DeleteBasicAwByIdRequest.h>
#include <huaweicloud/cloudtest/v1/model/DeleteBasicAwByIdResponse.h>
#include <huaweicloud/cloudtest/v1/model/DeleteCacheFileRequest.h>
#include <huaweicloud/cloudtest/v1/model/DeleteCacheFileResponse.h>
#include <huaweicloud/cloudtest/v1/model/DeleteFacotrByIdRequest.h>
#include <huaweicloud/cloudtest/v1/model/DeleteFacotrByIdResponse.h>
#include <huaweicloud/cloudtest/v1/model/DeleteRelationsByOneCaseInfo.h>
#include <huaweicloud/cloudtest/v1/model/DeleteRelationsByOneCaseRequest.h>
#include <huaweicloud/cloudtest/v1/model/DeleteRelationsByOneCaseResponse.h>
#include <huaweicloud/cloudtest/v1/model/DeleteServiceRequest.h>
#include <huaweicloud/cloudtest/v1/model/DeleteServiceResponse.h>
#include <huaweicloud/cloudtest/v1/model/DeleteTestCaseCommentRequest.h>
#include <huaweicloud/cloudtest/v1/model/DeleteTestCaseCommentResponse.h>
#include <huaweicloud/cloudtest/v1/model/DeleteTestCaseInfo.h>
#include <huaweicloud/cloudtest/v1/model/DeleteTestReportCustomDetailByUriRequest.h>
#include <huaweicloud/cloudtest/v1/model/DeleteTestReportCustomDetailByUriResponse.h>
#include <huaweicloud/cloudtest/v1/model/EtlRequestBody.h>
#include <huaweicloud/cloudtest/v1/model/ExecuteTaskInfo.h>
#include <huaweicloud/cloudtest/v1/model/GenerateReportInfo.h>
#include <huaweicloud/core/utils/HttpContent.h>
#include <huaweicloud/cloudtest/v1/model/InitExecuteTaskInfo.h>
#include <huaweicloud/cloudtest/v1/model/IssueTreeInfo.h>
#include <huaweicloud/cloudtest/v1/model/IteratorVersionInfo.h>
#include <huaweicloud/cloudtest/v1/model/IteratorVersionsQueryInfo.h>
#include <huaweicloud/cloudtest/v1/model/ListAlarmStatisticsUsingRequest.h>
#include <huaweicloud/cloudtest/v1/model/ListAlarmStatisticsUsingResponse.h>
#include <huaweicloud/cloudtest/v1/model/ListAlertGroupsByConditionRequest.h>
#include <huaweicloud/cloudtest/v1/model/ListAlertGroupsByConditionRequestBody.h>
#include <huaweicloud/cloudtest/v1/model/ListAlertGroupsByConditionResponse.h>
#include <huaweicloud/cloudtest/v1/model/ListAlertTemplatesRequest.h>
#include <huaweicloud/cloudtest/v1/model/ListAlertTemplatesResponse.h>
#include <huaweicloud/cloudtest/v1/model/ListAllBranchesRequest.h>
#include <huaweicloud/cloudtest/v1/model/ListAllBranchesResponse.h>
#include <huaweicloud/cloudtest/v1/model/ListAllConfigItemByTypeRequest.h>
#include <huaweicloud/cloudtest/v1/model/ListAllConfigItemByTypeRequestBody.h>
#include <huaweicloud/cloudtest/v1/model/ListAllConfigItemByTypeResponse.h>
#include <huaweicloud/cloudtest/v1/model/ListAllIteratorsRequest.h>
#include <huaweicloud/cloudtest/v1/model/ListAllIteratorsResponse.h>
#include <huaweicloud/cloudtest/v1/model/ListAllTestCasesRequest.h>
#include <huaweicloud/cloudtest/v1/model/ListAllTestCasesResponse.h>
#include <huaweicloud/cloudtest/v1/model/ListAttachmentsRequest.h>
#include <huaweicloud/cloudtest/v1/model/ListAttachmentsResponse.h>
#include <huaweicloud/cloudtest/v1/model/ListAvailableConfigRequest.h>
#include <huaweicloud/cloudtest/v1/model/ListAvailableConfigResponse.h>
#include <huaweicloud/cloudtest/v1/model/ListBasicAwInfoListSupportsSearchRequest.h>
#include <huaweicloud/cloudtest/v1/model/ListBasicAwInfoListSupportsSearchResponse.h>
#include <huaweicloud/cloudtest/v1/model/ListBasicAwRequest.h>
#include <huaweicloud/cloudtest/v1/model/ListBasicAwResponse.h>
#include <huaweicloud/cloudtest/v1/model/ListBranchesRequest.h>
#include <huaweicloud/cloudtest/v1/model/ListBranchesResponse.h>
#include <huaweicloud/cloudtest/v1/model/ListCasesStatusRequest.h>
#include <huaweicloud/cloudtest/v1/model/ListCasesStatusResponse.h>
#include <huaweicloud/cloudtest/v1/model/ListDomainVisibleServicesRequest.h>
#include <huaweicloud/cloudtest/v1/model/ListDomainVisibleServicesResponse.h>
#include <huaweicloud/cloudtest/v1/model/ListIssueTreeRequest.h>
#include <huaweicloud/cloudtest/v1/model/ListIssueTreeResponse.h>
#include <huaweicloud/cloudtest/v1/model/ListIteratorIssueTreeRequest.h>
#include <huaweicloud/cloudtest/v1/model/ListIteratorIssueTreeResponse.h>
#include <huaweicloud/cloudtest/v1/model/ListIteratorsInfoRequest.h>
#include <huaweicloud/cloudtest/v1/model/ListIteratorsInfoResponse.h>
#include <huaweicloud/cloudtest/v1/model/ListIteratorsRequest.h>
#include <huaweicloud/cloudtest/v1/model/ListIteratorsResponse.h>
#include <huaweicloud/cloudtest/v1/model/ListLinesUsingRequest.h>
#include <huaweicloud/cloudtest/v1/model/ListLinesUsingResponse.h>
#include <huaweicloud/cloudtest/v1/model/ListMsgInfosUsingRequest.h>
#include <huaweicloud/cloudtest/v1/model/ListMsgInfosUsingResponse.h>
#include <huaweicloud/cloudtest/v1/model/ListOwnTestCasesRequest.h>
#include <huaweicloud/cloudtest/v1/model/ListOwnTestCasesResponse.h>
#include <huaweicloud/cloudtest/v1/model/ListProjectFieldConfigsRequest.h>
#include <huaweicloud/cloudtest/v1/model/ListProjectFieldConfigsResponse.h>
#include <huaweicloud/cloudtest/v1/model/ListProjectTestCaseFieldsRequest.h>
#include <huaweicloud/cloudtest/v1/model/ListProjectTestCaseFieldsResponse.h>
#include <huaweicloud/cloudtest/v1/model/ListPublicLibAndAwsRequest.h>
#include <huaweicloud/cloudtest/v1/model/ListPublicLibAndAwsResponse.h>
#include <huaweicloud/cloudtest/v1/model/ListReportsRequest.h>
#include <huaweicloud/cloudtest/v1/model/ListReportsResponse.h>
#include <huaweicloud/cloudtest/v1/model/ListResourcePoolsRequest.h>
#include <huaweicloud/cloudtest/v1/model/ListResourcePoolsResponse.h>
#include <huaweicloud/cloudtest/v1/model/ListScattersUsingRequest.h>
#include <huaweicloud/cloudtest/v1/model/ListScattersUsingResponse.h>
#include <huaweicloud/cloudtest/v1/model/ListSubTaskCaseOverstockUsingRequest.h>
#include <huaweicloud/cloudtest/v1/model/ListSubTaskCaseOverstockUsingResponse.h>
#include <huaweicloud/cloudtest/v1/model/ListTaskAssignCasesRequest.h>
#include <huaweicloud/cloudtest/v1/model/ListTaskAssignCasesResponse.h>
#include <huaweicloud/cloudtest/v1/model/ListTaskResultsDetailRequest.h>
#include <huaweicloud/cloudtest/v1/model/ListTaskResultsDetailResponse.h>
#include <huaweicloud/cloudtest/v1/model/ListTaskTestCasesRequest.h>
#include <huaweicloud/cloudtest/v1/model/ListTaskTestCasesResponse.h>
#include <huaweicloud/cloudtest/v1/model/ListTasksRequest.h>
#include <huaweicloud/cloudtest/v1/model/ListTasksResponse.h>
#include <huaweicloud/cloudtest/v1/model/ListTestCaseCommentsRequest.h>
#include <huaweicloud/cloudtest/v1/model/ListTestCaseCommentsResponse.h>
#include <huaweicloud/cloudtest/v1/model/ListTestCaseHistoriesRequest.h>
#include <huaweicloud/cloudtest/v1/model/ListTestCaseHistoriesRequestBody.h>
#include <huaweicloud/cloudtest/v1/model/ListTestCaseHistoriesResponse.h>
#include <huaweicloud/cloudtest/v1/model/ListTestCaseScriptDetailRequest.h>
#include <huaweicloud/cloudtest/v1/model/ListTestCaseScriptDetailResponse.h>
#include <huaweicloud/cloudtest/v1/model/ListTestCasesByIssueRequest.h>
#include <huaweicloud/cloudtest/v1/model/ListTestCasesByIssueResponse.h>
#include <huaweicloud/cloudtest/v1/model/ListTestCasesRequest.h>
#include <huaweicloud/cloudtest/v1/model/ListTestCasesRequestBody.h>
#include <huaweicloud/cloudtest/v1/model/ListTestCasesResponse.h>
#include <huaweicloud/cloudtest/v1/model/ListTestReportsByConditionRequest.h>
#include <huaweicloud/cloudtest/v1/model/ListTestReportsByConditionResponse.h>
#include <huaweicloud/cloudtest/v1/model/ListTestTypesRequest.h>
#include <huaweicloud/cloudtest/v1/model/ListTestTypesResponse.h>
#include <huaweicloud/cloudtest/v1/model/ListTestcasesByProjectIssuesRelationRequest.h>
#include <huaweicloud/cloudtest/v1/model/ListTestcasesByProjectIssuesRelationResponse.h>
#include <huaweicloud/cloudtest/v1/model/ListUsageInfosRequest.h>
#include <huaweicloud/cloudtest/v1/model/ListUsageInfosResponse.h>
#include <huaweicloud/cloudtest/v1/model/ListUserDnsMappingRequest.h>
#include <huaweicloud/cloudtest/v1/model/ListUserDnsMappingResponse.h>
#include <huaweicloud/cloudtest/v1/model/ListUserPackageUsageRequest.h>
#include <huaweicloud/cloudtest/v1/model/ListUserPackageUsageResponse.h>
#include <huaweicloud/cloudtest/v1/model/ListUserPopupInfoRequest.h>
#include <huaweicloud/cloudtest/v1/model/ListUserPopupInfoResponse.h>
#include <huaweicloud/cloudtest/v1/model/ListUsingGetRequest.h>
#include <huaweicloud/cloudtest/v1/model/ListUsingGetResponse.h>
#include <huaweicloud/cloudtest/v1/model/ListVariablesRequest.h>
#include <huaweicloud/cloudtest/v1/model/ListVariablesResponse.h>
#include <huaweicloud/cloudtest/v1/model/MsgInfoQuery.h>
#include <huaweicloud/core/utils/Object.h>
#include <huaweicloud/cloudtest/v1/model/OprReportInfo.h>
#include <huaweicloud/cloudtest/v1/model/QueryCaseResultInfo.h>
#include <huaweicloud/cloudtest/v1/model/QueryIssueTreeInfo.h>
#include <huaweicloud/cloudtest/v1/model/QueryProjectIssuesRelationTestCasesInfo.h>
#include <huaweicloud/cloudtest/v1/model/QueryRequirementsOverviewInfo.h>
#include <huaweicloud/cloudtest/v1/model/QueryTaskAssignCasesInfo.h>
#include <huaweicloud/cloudtest/v1/model/QueryTaskTestCasesInfo.h>
#include <huaweicloud/cloudtest/v1/model/QueryTestCasesByIssueInfo.h>
#include <huaweicloud/cloudtest/v1/model/QueryTestItemTreeInfo.h>
#include <huaweicloud/cloudtest/v1/model/RemoveIssuesFromIteratorRequest.h>
#include <huaweicloud/cloudtest/v1/model/RemoveIssuesFromIteratorResponse.h>
#include <huaweicloud/cloudtest/v1/model/RemoveIssuesInfo.h>
#include <huaweicloud/cloudtest/v1/model/RunTestCaseRequest.h>
#include <huaweicloud/cloudtest/v1/model/RunTestCaseRequestBody.h>
#include <huaweicloud/cloudtest/v1/model/RunTestCaseResponse.h>
#include <huaweicloud/cloudtest/v1/model/SaveTaskSettingRequest.h>
#include <huaweicloud/cloudtest/v1/model/SaveTaskSettingRequestBody.h>
#include <huaweicloud/cloudtest/v1/model/SaveTaskSettingResponse.h>
#include <huaweicloud/cloudtest/v1/model/SaveTestReportCustomDetailRequest.h>
#include <huaweicloud/cloudtest/v1/model/SaveTestReportCustomDetailResponse.h>
#include <huaweicloud/cloudtest/v1/model/SearchRequest.h>
#include <huaweicloud/cloudtest/v1/model/ServiceRequestBody.h>
#include <huaweicloud/cloudtest/v1/model/SetTaskResultRequest.h>
#include <huaweicloud/cloudtest/v1/model/SetTaskResultResponse.h>
#include <huaweicloud/cloudtest/v1/model/ShowAllConfigValueByTypeAndKeyRequest.h>
#include <huaweicloud/cloudtest/v1/model/ShowAllConfigValueByTypeAndKeyResponse.h>
#include <huaweicloud/cloudtest/v1/model/ShowAllFeatureChildrenRequest.h>
#include <huaweicloud/cloudtest/v1/model/ShowAllFeatureChildrenResponse.h>
#include <huaweicloud/cloudtest/v1/model/ShowApiTestcaseHistoriesRequest.h>
#include <huaweicloud/cloudtest/v1/model/ShowApiTestcaseHistoriesResponse.h>
#include <huaweicloud/cloudtest/v1/model/ShowAssetRequest.h>
#include <huaweicloud/cloudtest/v1/model/ShowAssetResponse.h>
#include <huaweicloud/cloudtest/v1/model/ShowAssetTreeRequest.h>
#include <huaweicloud/cloudtest/v1/model/ShowAssetTreeResponse.h>
#include <huaweicloud/cloudtest/v1/model/ShowBackgroundInfoRequest.h>
#include <huaweicloud/cloudtest/v1/model/ShowBackgroundInfoResponse.h>
#include <huaweicloud/cloudtest/v1/model/ShowBranchRequest.h>
#include <huaweicloud/cloudtest/v1/model/ShowBranchResponse.h>
#include <huaweicloud/cloudtest/v1/model/ShowCaseResultRequest.h>
#include <huaweicloud/cloudtest/v1/model/ShowCaseResultResponse.h>
#include <huaweicloud/cloudtest/v1/model/ShowConcurrencyPackageUsingRequest.h>
#include <huaweicloud/cloudtest/v1/model/ShowConcurrencyPackageUsingResponse.h>
#include <huaweicloud/cloudtest/v1/model/ShowDisclaimerRecordRequest.h>
#include <huaweicloud/cloudtest/v1/model/ShowDisclaimerRecordResponse.h>
#include <huaweicloud/cloudtest/v1/model/ShowDomainInfoRequest.h>
#include <huaweicloud/cloudtest/v1/model/ShowDomainInfoResponse.h>
#include <huaweicloud/cloudtest/v1/model/ShowEchoTestPackageUsingRequest.h>
#include <huaweicloud/cloudtest/v1/model/ShowEchoTestPackageUsingResponse.h>
#include <huaweicloud/cloudtest/v1/model/ShowEtlDataRequest.h>
#include <huaweicloud/cloudtest/v1/model/ShowEtlDataResponse.h>
#include <huaweicloud/cloudtest/v1/model/ShowFactorByAssetIdRequest.h>
#include <huaweicloud/cloudtest/v1/model/ShowFactorByAssetIdResponse.h>
#include <huaweicloud/cloudtest/v1/model/ShowFactorByIdRequest.h>
#include <huaweicloud/cloudtest/v1/model/ShowFactorByIdResponse.h>
#include <huaweicloud/cloudtest/v1/model/ShowFeatureChildrenRequest.h>
#include <huaweicloud/cloudtest/v1/model/ShowFeatureChildrenResponse.h>
#include <huaweicloud/cloudtest/v1/model/ShowFreeDeclarationRequest.h>
#include <huaweicloud/cloudtest/v1/model/ShowFreeDeclarationResponse.h>
#include <huaweicloud/cloudtest/v1/model/ShowIfTaskNameRepeatRequest.h>
#include <huaweicloud/cloudtest/v1/model/ShowIfTaskNameRepeatResponse.h>
#include <huaweicloud/cloudtest/v1/model/ShowIfUserNameRepeatRequest.h>
#include <huaweicloud/cloudtest/v1/model/ShowIfUserNameRepeatResponse.h>
#include <huaweicloud/cloudtest/v1/model/ShowIssuesByPlanIdRequest.h>
#include <huaweicloud/cloudtest/v1/model/ShowIssuesByPlanIdResponse.h>
#include <huaweicloud/cloudtest/v1/model/ShowIteratorByDefectRequest.h>
#include <huaweicloud/cloudtest/v1/model/ShowIteratorByDefectResponse.h>
#include <huaweicloud/cloudtest/v1/model/ShowIteratorDetailRequest.h>
#include <huaweicloud/cloudtest/v1/model/ShowIteratorDetailResponse.h>
#include <huaweicloud/cloudtest/v1/model/ShowMindMapByIdRequest.h>
#include <huaweicloud/cloudtest/v1/model/ShowMindMapByIdResponse.h>
#include <huaweicloud/cloudtest/v1/model/ShowMindmapByPageRequest.h>
#include <huaweicloud/cloudtest/v1/model/ShowMindmapByPageResponse.h>
#include <huaweicloud/cloudtest/v1/model/ShowMindmapCreatorNameRequest.h>
#include <huaweicloud/cloudtest/v1/model/ShowMindmapCreatorNameResponse.h>
#include <huaweicloud/cloudtest/v1/model/ShowOperationalDataCurrentMonthUsingRequest.h>
#include <huaweicloud/cloudtest/v1/model/ShowOperationalDataCurrentMonthUsingResponse.h>
#include <huaweicloud/cloudtest/v1/model/ShowPlanJournalsRequest.h>
#include <huaweicloud/cloudtest/v1/model/ShowPlanJournalsResponse.h>
#include <huaweicloud/cloudtest/v1/model/ShowPlanListRequest.h>
#include <huaweicloud/cloudtest/v1/model/ShowPlanListResponse.h>
#include <huaweicloud/cloudtest/v1/model/ShowPlansRequest.h>
#include <huaweicloud/cloudtest/v1/model/ShowPlansResponse.h>
#include <huaweicloud/cloudtest/v1/model/ShowProgressRequest.h>
#include <huaweicloud/cloudtest/v1/model/ShowProgressResponse.h>
#include <huaweicloud/cloudtest/v1/model/ShowProjectDataDashboardRequest.h>
#include <huaweicloud/cloudtest/v1/model/ShowProjectDataDashboardResponse.h>
#include <huaweicloud/cloudtest/v1/model/ShowRegisterServiceRequest.h>
#include <huaweicloud/cloudtest/v1/model/ShowRegisterServiceResponse.h>
#include <huaweicloud/cloudtest/v1/model/ShowReportRequest.h>
#include <huaweicloud/cloudtest/v1/model/ShowReportResponse.h>
#include <huaweicloud/cloudtest/v1/model/ShowRequirementsOverviewRequest.h>
#include <huaweicloud/cloudtest/v1/model/ShowRequirementsOverviewResponse.h>
#include <huaweicloud/cloudtest/v1/model/ShowReviewByPageRequest.h>
#include <huaweicloud/cloudtest/v1/model/ShowReviewByPageResponse.h>
#include <huaweicloud/cloudtest/v1/model/ShowSceneByPageRequest.h>
#include <huaweicloud/cloudtest/v1/model/ShowSceneByPageResponse.h>
#include <huaweicloud/cloudtest/v1/model/ShowStatisticByIdRequest.h>
#include <huaweicloud/cloudtest/v1/model/ShowStatisticByIdResponse.h>
#include <huaweicloud/cloudtest/v1/model/ShowSystemConfigsRequest.h>
#include <huaweicloud/cloudtest/v1/model/ShowSystemConfigsResponse.h>
#include <huaweicloud/cloudtest/v1/model/ShowTemplateByIdRequest.h>
#include <huaweicloud/cloudtest/v1/model/ShowTemplateByIdResponse.h>
#include <huaweicloud/cloudtest/v1/model/ShowTemplateByPageRequest.h>
#include <huaweicloud/cloudtest/v1/model/ShowTemplateByPageResponse.h>
#include <huaweicloud/cloudtest/v1/model/ShowTestCaseAndDefectInfoRequest.h>
#include <huaweicloud/cloudtest/v1/model/ShowTestCaseAndDefectInfoRequestBody.h>
#include <huaweicloud/cloudtest/v1/model/ShowTestCaseAndDefectInfoResponse.h>
#include <huaweicloud/cloudtest/v1/model/ShowTestCaseDetailRequest.h>
#include <huaweicloud/cloudtest/v1/model/ShowTestCaseDetailResponse.h>
#include <huaweicloud/cloudtest/v1/model/ShowTestCaseDetailV2Request.h>
#include <huaweicloud/cloudtest/v1/model/ShowTestCaseDetailV2Response.h>
#include <huaweicloud/cloudtest/v1/model/ShowTestCaseRequest.h>
#include <huaweicloud/cloudtest/v1/model/ShowTestCaseResponse.h>
#include <huaweicloud/cloudtest/v1/model/ShowTestCaseReviewsRequest.h>
#include <huaweicloud/cloudtest/v1/model/ShowTestCaseReviewsResponse.h>
#include <huaweicloud/cloudtest/v1/model/ShowTestCasesChangeStatisticsRequest.h>
#include <huaweicloud/cloudtest/v1/model/ShowTestCasesChangeStatisticsResponse.h>
#include <huaweicloud/cloudtest/v1/model/ShowTestcaseByPageRequest.h>
#include <huaweicloud/cloudtest/v1/model/ShowTestcaseByPageResponse.h>
#include <huaweicloud/cloudtest/v1/model/ShowTestpointByPageRequest.h>
#include <huaweicloud/cloudtest/v1/model/ShowTestpointByPageResponse.h>
#include <huaweicloud/cloudtest/v1/model/ShowUserAccessInfoRequest.h>
#include <huaweicloud/cloudtest/v1/model/ShowUserAccessInfoResponse.h>
#include <huaweicloud/cloudtest/v1/model/ShowUserExecuteTestCaseInfoRequest.h>
#include <huaweicloud/cloudtest/v1/model/ShowUserExecuteTestCaseInfoRequestBody.h>
#include <huaweicloud/cloudtest/v1/model/ShowUserExecuteTestCaseInfoResponse.h>
#include <huaweicloud/cloudtest/v1/model/TasksQueryInfo.h>
#include <huaweicloud/cloudtest/v1/model/TestCaseCommentInfo.h>
#include <huaweicloud/cloudtest/v1/model/TestCaseInfo.h>
#include <huaweicloud/cloudtest/v1/model/TestCasesQueryInfo.h>
#include <huaweicloud/cloudtest/v1/model/TestPlanDetail.h>
#include <huaweicloud/cloudtest/v1/model/TestPlanIssueDetail.h>
#include <huaweicloud/cloudtest/v1/model/TestPlanJournalList.h>
#include <huaweicloud/cloudtest/v1/model/TestReportCustomDetailInfo.h>
#include <huaweicloud/cloudtest/v1/model/TestReportInfoRequestBody.h>
#include <huaweicloud/cloudtest/v1/model/UpdateBasicAwByIdRequest.h>
#include <huaweicloud/cloudtest/v1/model/UpdateBasicAwByIdResponse.h>
#include <huaweicloud/cloudtest/v1/model/UpdateBasicAwReq.h>
#include <huaweicloud/cloudtest/v1/model/UpdateIteratorRequest.h>
#include <huaweicloud/cloudtest/v1/model/UpdateIteratorResponse.h>
#include <huaweicloud/cloudtest/v1/model/UpdateServiceRequest.h>
#include <huaweicloud/cloudtest/v1/model/UpdateServiceResponse.h>
#include <huaweicloud/cloudtest/v1/model/UpdateTestCaseCommentRequest.h>
#include <huaweicloud/cloudtest/v1/model/UpdateTestCaseCommentResponse.h>
#include <huaweicloud/cloudtest/v1/model/UpdateTestCaseListInfo.h>
#include <huaweicloud/cloudtest/v1/model/UpdateTestCaseRequest.h>
#include <huaweicloud/cloudtest/v1/model/UpdateTestCaseRequestBody.h>
#include <huaweicloud/cloudtest/v1/model/UpdateTestCaseResponse.h>
#include <huaweicloud/cloudtest/v1/model/UpdateTestCaseResultRequest.h>
#include <huaweicloud/cloudtest/v1/model/UpdateTestCaseResultRequestBody.h>
#include <huaweicloud/cloudtest/v1/model/UpdateTestCaseResultResponse.h>
#include <huaweicloud/cloudtest/v1/model/UpdateTestReportCustomDetailByUriRequest.h>
#include <huaweicloud/cloudtest/v1/model/UpdateTestReportCustomDetailByUriResponse.h>
#include <huaweicloud/cloudtest/v1/model/UpdateUserDnsMappingRequest.h>
#include <huaweicloud/cloudtest/v1/model/UpdateUserDnsMappingResponse.h>
#include <huaweicloud/cloudtest/v1/model/UpdateVersionTestCaseRequest.h>
#include <huaweicloud/cloudtest/v1/model/UpdateVersionTestCaseResponse.h>
#include <huaweicloud/cloudtest/v1/model/UploadCacheFileRequest.h>
#include <huaweicloud/cloudtest/v1/model/UploadCacheFileRequestBody.h>
#include <huaweicloud/cloudtest/v1/model/UploadCacheFileResponse.h>
#include <string>
#include <vector>

#include <huaweicloud/cloudtest/v1/model/CreateApiTestSuiteByRepoFileRequest.h>
#include <huaweicloud/cloudtest/v1/model/CreateApiTestSuiteByRepoFileResponse.h>
#include <huaweicloud/cloudtest/v1/model/CreateTestSuitByRepoFileInfo.h>
#include <string>

#include <huaweicloud/cloudtest/v1/model/ListEnvironmentsRequest.h>
#include <huaweicloud/cloudtest/v1/model/ListEnvironmentsResponse.h>
#include <string>

#include <huaweicloud/core/utils/HttpContent.h>
#include <huaweicloud/cloudtest/v1/model/UploadStepImgRequest.h>
#include <huaweicloud/cloudtest/v1/model/UploadStepImgRequestBody.h>
#include <huaweicloud/cloudtest/v1/model/UploadStepImgResponse.h>
#include <string>

#include <huaweicloud/cloudtest/v1/model/BatchDeleteFacotrByIdsRequest.h>
#include <huaweicloud/cloudtest/v1/model/BatchDeleteFacotrByIdsResponse.h>
#include <huaweicloud/cloudtest/v1/model/BatchShowTestCaseRequest.h>
#include <huaweicloud/cloudtest/v1/model/BatchShowTestCaseResponse.h>
#include <huaweicloud/cloudtest/v1/model/CommRequestAssetExportParam.h>
#include <huaweicloud/cloudtest/v1/model/CommRequestAssetTree.h>
#include <huaweicloud/cloudtest/v1/model/CommRequestBackUpMindmapParam.h>
#include <huaweicloud/cloudtest/v1/model/CommRequestGetDefaultTemplateParam.h>
#include <huaweicloud/cloudtest/v1/model/CommRequestListString.h>
#include <huaweicloud/cloudtest/v1/model/CommRequestMindmapBackupPageParam.h>
#include <huaweicloud/cloudtest/v1/model/CommRequestMindmapRecyclePageParam.h>
#include <huaweicloud/cloudtest/v1/model/CommRequestSaveTemplateParam.h>
#include <huaweicloud/cloudtest/v1/model/CommRequestTestCasePageParam.h>
#include <huaweicloud/cloudtest/v1/model/CommRequestUpdateAssetTreeParam.h>
#include <huaweicloud/cloudtest/v1/model/CreateAssetTreeRequest.h>
#include <huaweicloud/cloudtest/v1/model/CreateAssetTreeResponse.h>
#include <huaweicloud/cloudtest/v1/model/CreateBackupMindmapRequest.h>
#include <huaweicloud/cloudtest/v1/model/CreateBackupMindmapResponse.h>
#include <huaweicloud/cloudtest/v1/model/CreateTemplateRequest.h>
#include <huaweicloud/cloudtest/v1/model/CreateTemplateResponse.h>
#include <huaweicloud/cloudtest/v1/model/DeleteAssetRequest.h>
#include <huaweicloud/cloudtest/v1/model/DeleteAssetResponse.h>
#include <huaweicloud/cloudtest/v1/model/DeleteAssetTreeRequest.h>
#include <huaweicloud/cloudtest/v1/model/DeleteAssetTreeResponse.h>
#include <huaweicloud/cloudtest/v1/model/DeleteMindmapBackupByIdRequest.h>
#include <huaweicloud/cloudtest/v1/model/DeleteMindmapBackupByIdResponse.h>
#include <huaweicloud/cloudtest/v1/model/DeleteMindmapRecycleByIdRequest.h>
#include <huaweicloud/cloudtest/v1/model/DeleteMindmapRecycleByIdResponse.h>
#include <huaweicloud/cloudtest/v1/model/DeleteTemplateByIdRequest.h>
#include <huaweicloud/cloudtest/v1/model/DeleteTemplateByIdResponse.h>
#include <huaweicloud/cloudtest/v1/model/DownloadAssetTemplateRequest.h>
#include <huaweicloud/cloudtest/v1/model/DownloadAssetTemplateResponse.h>
#include <huaweicloud/cloudtest/v1/model/ExportFactorRequest.h>
#include <huaweicloud/cloudtest/v1/model/ExportFactorResponse.h>
#include <huaweicloud/core/utils/HttpContent.h>
#include <huaweicloud/cloudtest/v1/model/ImportAssetRequest.h>
#include <huaweicloud/cloudtest/v1/model/ImportAssetRequestBody.h>
#include <huaweicloud/cloudtest/v1/model/ImportAssetResponse.h>
#include <huaweicloud/cloudtest/v1/model/ImportFactorRequest.h>
#include <huaweicloud/cloudtest/v1/model/ImportFactorRequestBody.h>
#include <huaweicloud/cloudtest/v1/model/ImportFactorResponse.h>
#include <huaweicloud/cloudtest/v1/model/ShowDefaultTemplateByPageRequest.h>
#include <huaweicloud/cloudtest/v1/model/ShowDefaultTemplateByPageResponse.h>
#include <huaweicloud/cloudtest/v1/model/ShowMindmapBackupByIdRequest.h>
#include <huaweicloud/cloudtest/v1/model/ShowMindmapBackupByIdResponse.h>
#include <huaweicloud/cloudtest/v1/model/ShowMindmapBackupByPageRequest.h>
#include <huaweicloud/cloudtest/v1/model/ShowMindmapBackupByPageResponse.h>
#include <huaweicloud/cloudtest/v1/model/ShowMindmapRecycleByIdRequest.h>
#include <huaweicloud/cloudtest/v1/model/ShowMindmapRecycleByIdResponse.h>
#include <huaweicloud/cloudtest/v1/model/ShowMindmapRecycleByPageRequest.h>
#include <huaweicloud/cloudtest/v1/model/ShowMindmapRecycleByPageResponse.h>
#include <huaweicloud/cloudtest/v1/model/ShowTestcaseByIdRequest.h>
#include <huaweicloud/cloudtest/v1/model/ShowTestcaseByIdResponse.h>
#include <huaweicloud/cloudtest/v1/model/UpdateAssetTreeRequest.h>
#include <huaweicloud/cloudtest/v1/model/UpdateAssetTreeResponse.h>
#include <huaweicloud/cloudtest/v1/model/UpdateMindmapNameRequest.h>
#include <huaweicloud/cloudtest/v1/model/UpdateMindmapNameResponse.h>
#include <string>

#include <huaweicloud/cloudtest/v1/model/AddFeatureRequest.h>
#include <huaweicloud/cloudtest/v1/model/AddFeatureResponse.h>
#include <huaweicloud/cloudtest/v1/model/AddTestItemInfo.h>

#include <huaweicloud/cloudtest/v1/model/ListTestcasePlansRequest.h>
#include <huaweicloud/cloudtest/v1/model/ListTestcasePlansResponse.h>
#include <huaweicloud/cloudtest/v1/model/TestcasePlanQueryParam.h>
#include <string>

#include <huaweicloud/cloudtest/v1/model/ListTaskResultsRequest.h>
#include <huaweicloud/cloudtest/v1/model/ListTaskResultsResponse.h>
#include <string>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Object.h>
#undef U
#include <boost/optional.hpp>

namespace HuaweiCloud {
namespace Sdk {
namespace Cloudtest {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Cloudtest::V1::Model;

class HUAWEICLOUD_CLOUDTEST_V1_EXPORT  CloudtestClient : public Client
{
public:

    CloudtestClient();

    virtual ~CloudtestClient();

    static ClientBuilder<CloudtestClient> newBuilder();

    // 设置用例结果
    //
    // 设置用例结果
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddCaseResultFourResponse> addCaseResultFour(
        AddCaseResultFourRequest &request
    );
    // 新增用例评论
    //
    // 新增用例评论
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddTestCaseCommentResponse> addTestCaseComment(
        AddTestCaseCommentRequest &request
    );
    // 初始化用例执行记录
    //
    // 初始化用例执行记录
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddTestCaseResultLogResponse> addTestCaseResultLog(
        AddTestCaseResultLogRequest &request
    );
    // 添加需求/缺陷和多个用例关联关系
    //
    // 添加需求/缺陷和多个用例关联关系
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchAddRelationsByOneCaseResponse> batchAddRelationsByOneCase(
        BatchAddRelationsByOneCaseRequest &request
    );
    // 向迭代中添加资源
    //
    // 向迭代中添加资源
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchAddResourcesForIteratorResponse> batchAddResourcesForIterator(
        BatchAddResourcesForIteratorRequest &request
    );
    // 批量删除自定义测试服务类型用例
    //
    // 批量删除自定义测试服务类型用例
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchDeleteTestCaseResponse> batchDeleteTestCase(
        BatchDeleteTestCaseRequest &request
    );
    // 批量删除用例
    //
    // 批量删除用例
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchDeleteTestCasesResponse> batchDeleteTestCases(
        BatchDeleteTestCasesRequest &request
    );
    // 根据测试报告uri列表，删除测试报告
    //
    // 根据测试报告uri列表，删除测试报告
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchDeleteTestReportResponse> batchDeleteTestReport(
        BatchDeleteTestReportRequest &request
    );
    // 从迭代中批量移除用例
    //
    // 从迭代中批量移除用例
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchRemoveTestCasesFromIteratorResponse> batchRemoveTestCasesFromIterator(
        BatchRemoveTestCasesFromIteratorRequest &request
    );
    // 批量更新用例属性
    //
    // 批量更新用例属性
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchUpdateVersionTestCasesResponse> batchUpdateVersionTestCases(
        BatchUpdateVersionTestCasesRequest &request
    );
    // 检查项目权限
    //
    // 检查项目权限
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CheckPermissionResponse> checkPermission(
        CheckPermissionRequest &request
    );
    // 新增迭代
    //
    // 新增迭代
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateIteratorResponse> createIterator(
        CreateIteratorRequest &request
    );
    // 项目下创建计划
    //
    // 项目下创建计划
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreatePlanResponse> createPlan(
        CreatePlanRequest &request
    );
    // 新增分支
    //
    // 新增分支
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateProjectBranchResponse> createProjectBranch(
        CreateProjectBranchRequest &request
    );
    // 添加一个用例和多个需求/缺陷关联关系
    //
    // 添加一个用例和多个需求/缺陷关联关系
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateRelationsByOneCaseResponse> createRelationsByOneCase(
        CreateRelationsByOneCaseRequest &request
    );
    // 保存单个自定义报表
    //
    // 保存单个自定义报表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateReportResponse> createReport(
        CreateReportRequest &request
    );
    // 生成资源URI
    //
    // 生成资源URI
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateResourceUriResponse> createResourceUri(
        CreateResourceUriRequest &request
    );
    // 新测试类型服务注册
    //
    // 通过接口CreateService注册成为自定义服务。 注册完成后界面将会出现此自定义测试类型。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateServiceResponse> createService(
        CreateServiceRequest &request
    );
    // 初始化测试任务执行记录
    //
    // 初始化测试任务执行记录
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateTaskDefaultResultResponse> createTaskDefaultResult(
        CreateTaskDefaultResultRequest &request
    );
    // 创建自定义测试服务类型用例
    //
    // 创建自定义测试服务类型用例
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateTestCaseResponse> createTestCase(
        CreateTestCaseRequest &request
    );
    // 计划中批量添加测试用例
    //
    // 计划中批量添加测试用例
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateTestCaseInPlanResponse> createTestCaseInPlan(
        CreateTestCaseInPlanRequest &request
    );
    // 新增用户自定义URL关键字
    //
    // 新增用户自定义URL关键字
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateUserDefinedUrlKeyWordResponse> createUserDefinedUrlKeyWord(
        CreateUserDefinedUrlKeyWordRequest &request
    );
    // 在分支或者测试计划下创建用例
    //
    // 在分支或者测试计划下创建用例
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateVersionTestCaseResponse> createVersionTestCase(
        CreateVersionTestCaseRequest &request
    );
    // 融合版本删除单个basicAw
    //
    // 融合版本删除单个basicAw
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteBasicAwByIdResponse> deleteBasicAwById(
        DeleteBasicAwByIdRequest &request
    );
    // 删除附件
    //
    // 删除附件
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteCacheFileResponse> deleteCacheFile(
        DeleteCacheFileRequest &request
    );
    // 删除因子
    //
    // 删除因子
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteFacotrByIdResponse> deleteFacotrById(
        DeleteFacotrByIdRequest &request
    );
    // 删除一个用例和多个需求/缺陷关联关系
    //
    // 删除一个用例和多个需求/缺陷关联关系
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteRelationsByOneCaseResponse> deleteRelationsByOneCase(
        DeleteRelationsByOneCaseRequest &request
    );
    // 删除已注册服务
    //
    // 删除已注册服务
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteServiceResponse> deleteService(
        DeleteServiceRequest &request
    );
    // 删除用例评论
    //
    // 删除用例评论
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteTestCaseCommentResponse> deleteTestCaseComment(
        DeleteTestCaseCommentRequest &request
    );
    // 删除测试报告自定义模块
    //
    // 删除测试报告自定义模块
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteTestReportCustomDetailByUriResponse> deleteTestReportCustomDetailByUri(
        DeleteTestReportCustomDetailByUriRequest &request
    );
    // 查询告警统计数据
    //
    // 查询告警统计数据
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAlarmStatisticsUsingResponse> listAlarmStatisticsUsing(
        ListAlarmStatisticsUsingRequest &request
    );
    // 查询告警组列表
    //
    // 查询告警组列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAlertGroupsByConditionResponse> listAlertGroupsByCondition(
        ListAlertGroupsByConditionRequest &request
    );
    // 查询告警模板
    //
    // 查询告警模板
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAlertTemplatesResponse> listAlertTemplates(
        ListAlertTemplatesRequest &request
    );
    // 获取分支列表
    //
    // 获取分支列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAllBranchesResponse> listAllBranches(
        ListAllBranchesRequest &request
    );
    // 查询任务告警信息
    //
    // 查询任务告警信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAllConfigItemByTypeResponse> listAllConfigItemByType(
        ListAllConfigItemByTypeRequest &request
    );
    // 查询项目下所有迭代计划
    //
    // 查询项目下所有迭代计划
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAllIteratorsResponse> listAllIterators(
        ListAllIteratorsRequest &request
    );
    // 查询用例列表
    //
    // 查询用例列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAllTestCasesResponse> listAllTestCases(
        ListAllTestCasesRequest &request
    );
    // 查询附件列表
    //
    // 查询附件列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAttachmentsResponse> listAttachments(
        ListAttachmentsRequest &request
    );
    // 获取当前局点功能是否开启
    //
    // 获取当前局点功能是否开启
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAvailableConfigResponse> listAvailableConfig(
        ListAvailableConfigRequest &request
    );
    // 根据id获取单个basicAW信息
    //
    // 根据id获取单个basicAW信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListBasicAwResponse> listBasicAw(
        ListBasicAwRequest &request
    );
    // 分页获取工程BasicAW详细信息列表（含目录）
    //
    // 分页获取工程BasicAW列表（含目录）
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListBasicAwInfoListSupportsSearchResponse> listBasicAwInfoListSupportsSearch(
        ListBasicAwInfoListSupportsSearchRequest &request
    );
    // 获取分支列表
    //
    // 获取分支列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListBranchesResponse> listBranches(
        ListBranchesRequest &request
    );
    // 批量获取用例状态
    //
    // 批量获取用例状态
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListCasesStatusResponse> listCasesStatus(
        ListCasesStatusRequest &request
    );
    // 查询当前租户可见的第三方服务列表
    //
    // 查询当前租户可见的第三方服务列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDomainVisibleServicesResponse> listDomainVisibleServices(
        ListDomainVisibleServicesRequest &request
    );
    // 查询需求树
    //
    // 查询需求树
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListIssueTreeResponse> listIssueTree(
        ListIssueTreeRequest &request
    );
    // 查询迭代关联的需求列表或树
    //
    // 查询迭代关联的需求列表或树
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListIteratorIssueTreeResponse> listIteratorIssueTree(
        ListIteratorIssueTreeRequest &request
    );
    // 查询迭代计划列表，包含统计信息
    //
    // 查询迭代计划列表，包含统计信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListIteratorsResponse> listIterators(
        ListIteratorsRequest &request
    );
    // 查询迭代计划列表，包含统计信息，对版本强校验
    //
    // 查询迭代计划列表，包含统计信息，对版本强校验
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListIteratorsInfoResponse> listIteratorsInfo(
        ListIteratorsInfoRequest &request
    );
    // 查询仪表盘折线图数据
    //
    // 查询仪表盘折线图数据
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListLinesUsingResponse> listLinesUsing(
        ListLinesUsingRequest &request
    );
    // 仪表盘根据测试服务ID获取MsgInfo详细信息
    //
    // 成功返回MsgInfo的详细信息列表，返回值为Model的List
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListMsgInfosUsingResponse> listMsgInfosUsing(
        ListMsgInfosUsingRequest &request
    );
    // 获取责任人是自己的测试用例
    //
    // 获取责任人是自己的测试用例
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListOwnTestCasesResponse> listOwnTestCases(
        ListOwnTestCasesRequest &request
    );
    // 查询项目字段配置
    //
    // 查询项目字段配置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListProjectFieldConfigsResponse> listProjectFieldConfigs(
        ListProjectFieldConfigsRequest &request
    );
    // 获取项目测试用例自定义字段列表
    //
    // 获取项目测试用例自定义字段列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListProjectTestCaseFieldsResponse> listProjectTestCaseFields(
        ListProjectTestCaseFieldsRequest &request
    );
    // 获取工程关联的公共aw信息和公共aw所属公共aw库信息
    //
    // 获取工程关联的公共aw信息和公共aw所属公共aw库信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListPublicLibAndAwsResponse> listPublicLibAndAws(
        ListPublicLibAndAwsRequest &request
    );
    // 页面报表展示
    //
    // 页面报表展示
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListReportsResponse> listReports(
        ListReportsRequest &request
    );
    // 获取资源池列表
    //
    // 获取资源池列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListResourcePoolsResponse> listResourcePools(
        ListResourcePoolsRequest &request
    );
    // 查询仪表盘散点图数据
    //
    // 查询仪表盘散点图数据
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListScattersUsingResponse> listScattersUsing(
        ListScattersUsingRequest &request
    );
    // 查询subTestCase阻塞任务数据
    //
    // 成功返回子任务用例数据积压信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListSubTaskCaseOverstockUsingResponse> listSubTaskCaseOverstockUsing(
        ListSubTaskCaseOverstockUsingRequest &request
    );
    // 获取测试套关联用例详情
    //
    // 获取测试套关联用例详情
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListTaskAssignCasesResponse> listTaskAssignCases(
        ListTaskAssignCasesRequest &request
    );
    // 查询单次测试套执行的详细结果
    //
    // 查询单次测试套执行的详细结果
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListTaskResultsDetailResponse> listTaskResultsDetail(
        ListTaskResultsDetailRequest &request
    );
    // 查询用例关联的测试任务列表
    //
    // 查询用例关联的测试任务列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListTaskTestCasesResponse> listTaskTestCases(
        ListTaskTestCasesRequest &request
    );
    // 查询测试任务列表
    //
    // 查询测试任务列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListTasksResponse> listTasks(
        ListTasksRequest &request
    );
    // 查询用例评论
    //
    // 查询用例评论
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListTestCaseCommentsResponse> listTestCaseComments(
        ListTestCaseCommentsRequest &request
    );
    // 查询用例修改历史记录
    //
    // 查询用例修改历史记录
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListTestCaseHistoriesResponse> listTestCaseHistories(
        ListTestCaseHistoriesRequest &request
    );
    // 获取用例脚本详细信息
    //
    // 获取用例脚本详细信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListTestCaseScriptDetailResponse> listTestCaseScriptDetail(
        ListTestCaseScriptDetailRequest &request
    );
    // 查询用例列表
    //
    // 查询用例列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListTestCasesResponse> listTestCases(
        ListTestCasesRequest &request
    );
    // 查询需求下的用例列表
    //
    // 查询需求下的用例列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListTestCasesByIssueResponse> listTestCasesByIssue(
        ListTestCasesByIssueRequest &request
    );
    // 根据查询条件获取测试报告列表
    //
    // 根据查询条件获取测试报告列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListTestReportsByConditionResponse> listTestReportsByCondition(
        ListTestReportsByConditionRequest &request
    );
    // 获取测试类型列表
    //
    // 获取测试类型列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListTestTypesResponse> listTestTypes(
        ListTestTypesRequest &request
    );
    // 查询项目下关联了需求的用例列表
    //
    // 查询项目下关联了需求的用例列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListTestcasesByProjectIssuesRelationResponse> listTestcasesByProjectIssuesRelation(
        ListTestcasesByProjectIssuesRelationRequest &request
    );
    // 获取租户订单已用资源信息
    //
    // 获取租户订单已用资源信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListUsageInfosResponse> listUsageInfos(
        ListUsageInfosRequest &request
    );
    // 查询用户DNS映射
    //
    // 查询用户DNS映射
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListUserDnsMappingResponse> listUserDnsMapping(
        ListUserDnsMappingRequest &request
    );
    // ListUserPackageUsage
    //
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListUserPackageUsageResponse> listUserPackageUsage(
        ListUserPackageUsageRequest &request
    );
    // ListUserPopupInfo
    //
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListUserPopupInfoResponse> listUserPopupInfo(
        ListUserPopupInfoRequest &request
    );
    // 查询仪表盘用户的看板
    //
    // 查询仪表盘用户的看板
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListUsingGetResponse> listUsingGet(
        ListUsingGetRequest &request
    );
    // 查询全局变量参数列表V4
    //
    // 查询全局变量参数列表V4
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListVariablesResponse> listVariables(
        ListVariablesRequest &request
    );
    // 从迭代中移除需求
    //
    // 从迭代中移除需求
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RemoveIssuesFromIteratorResponse> removeIssuesFromIterator(
        RemoveIssuesFromIteratorRequest &request
    );
    // 批量执行测试用例
    //
    // 批量执行测试用例
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RunTestCaseResponse> runTestCase(
        RunTestCaseRequest &request
    );
    // 保存任务配置
    //
    // 保存任务配置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SaveTaskSettingResponse> saveTaskSetting(
        SaveTaskSettingRequest &request
    );
    // 创建测试报告自定义模块
    //
    // 创建测试报告自定义模块
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SaveTestReportCustomDetailResponse> saveTestReportCustomDetail(
        SaveTestReportCustomDetailRequest &request
    );
    // 设置测试套结果
    //
    // 设置测试套结果
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SetTaskResultResponse> setTaskResult(
        SetTaskResultRequest &request
    );
    // 查询任务配置
    //
    // 查询任务配置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAllConfigValueByTypeAndKeyResponse> showAllConfigValueByTypeAndKey(
        ShowAllConfigValueByTypeAndKeyRequest &request
    );
    // 获取特性树V5
    //
    // 获取目录\\特性树
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAllFeatureChildrenResponse> showAllFeatureChildren(
        ShowAllFeatureChildrenRequest &request
    );
    // 获取用例历史执行数据
    //
    // 获取用例历史执行数据
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowApiTestcaseHistoriesResponse> showApiTestcaseHistories(
        ShowApiTestcaseHistoriesRequest &request
    );
    // 获取资产列表
    //
    // 获取资产列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAssetResponse> showAsset(
        ShowAssetRequest &request
    );
    // 获取资产树列表
    //
    // 获取资产树列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAssetTreeResponse> showAssetTree(
        ShowAssetTreeRequest &request
    );
    // 获取测试报告的模板设置
    //
    // 获取测试报告的模板设置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowBackgroundInfoResponse> showBackgroundInfo(
        ShowBackgroundInfoRequest &request
    );
    // 获取分支详情
    //
    // 获取分支详情
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowBranchResponse> showBranch(
        ShowBranchRequest &request
    );
    // 查询用例结果
    //
    // 查询用例结果
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowCaseResultResponse> showCaseResult(
        ShowCaseResultRequest &request
    );
    // 查询租户测试并发套餐状态
    //
    // 查询租户测试并发套餐状态
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowConcurrencyPackageUsingResponse> showConcurrencyPackageUsing(
        ShowConcurrencyPackageUsingRequest &request
    );
    // 查询用户免责声明
    //
    // 查询用户免责声明
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDisclaimerRecordResponse> showDisclaimerRecord(
        ShowDisclaimerRecordRequest &request
    );
    // 根据domainId获取加密的testbirdkey
    //
    // 根据domainId获取加密的testbirdkey
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDomainInfoResponse> showDomainInfo(
        ShowDomainInfoRequest &request
    );
    // 查询租户在线拨测套餐状态
    //
    // 查询租户在线拨测套餐状态
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowEchoTestPackageUsingResponse> showEchoTestPackageUsing(
        ShowEchoTestPackageUsingRequest &request
    );
    // 查询指定表的内容
    //
    // 查询指定表的内容
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowEtlDataResponse> showEtlData(
        ShowEtlDataRequest &request
    );
    // 根据目录查询因子
    //
    // 根据目录查询因子
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowFactorByAssetIdResponse> showFactorByAssetId(
        ShowFactorByAssetIdRequest &request
    );
    // 根据id获取因子
    //
    // 根据id获取因子
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowFactorByIdResponse> showFactorById(
        ShowFactorByIdRequest &request
    );
    // 获取目录\\特性树
    //
    // 获取目录\\特性树
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowFeatureChildrenResponse> showFeatureChildren(
        ShowFeatureChildrenRequest &request
    );
    // 查询限时免费用户免责声明记录
    //
    // 查询限时免费用户免责声明记录
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowFreeDeclarationResponse> showFreeDeclaration(
        ShowFreeDeclarationRequest &request
    );
    // 查询告警模板名称是否重复
    //
    // 查询告警模板名称是否重复
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowIfTaskNameRepeatResponse> showIfTaskNameRepeat(
        ShowIfTaskNameRepeatRequest &request
    );
    // 查询告警组用户名是否重复
    //
    // 查询告警组用户名是否重复
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowIfUserNameRepeatResponse> showIfUserNameRepeat(
        ShowIfUserNameRepeatRequest &request
    );
    // 查询某个测试计划下的需求树
    //
    // 查询某个测试计划下的需求列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowIssuesByPlanIdResponse> showIssuesByPlanId(
        ShowIssuesByPlanIdRequest &request
    );
    // 查询缺陷相关联测试计划
    //
    // 查询缺陷相关联测试计划
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowIteratorByDefectResponse> showIteratorByDefect(
        ShowIteratorByDefectRequest &request
    );
    // 查询迭代计划详情，包含统计信息
    //
    // 查询迭代计划详情，包含统计信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowIteratorDetailResponse> showIteratorDetail(
        ShowIteratorDetailRequest &request
    );
    // 根据id获取脑图对象
    //
    // 根据id获取脑图对象
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowMindMapByIdResponse> showMindMapById(
        ShowMindMapByIdRequest &request
    );
    // 根据条件分页获取脑图对象V3
    //
    // 根据条件分页获取脑图对象V3
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowMindmapByPageResponse> showMindmapByPage(
        ShowMindmapByPageRequest &request
    );
    // 获取脑图创建人V2
    //
    // 获取脑图创建人V2
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowMindmapCreatorNameResponse> showMindmapCreatorName(
        ShowMindmapCreatorNameRequest &request
    );
    // 查询运行面板信息
    //
    // 成功返回运行面板信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowOperationalDataCurrentMonthUsingResponse> showOperationalDataCurrentMonthUsing(
        ShowOperationalDataCurrentMonthUsingRequest &request
    );
    // 查询某测试计划下的操作历史
    //
    // 查询某测试计划下的操作历史
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowPlanJournalsResponse> showPlanJournals(
        ShowPlanJournalsRequest &request
    );
    // 项目下查询测试计划列表v2
    //
    // 项目下查询测试计划列表v2
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowPlanListResponse> showPlanList(
        ShowPlanListRequest &request
    );
    // 项目下查询测试计划列表
    //
    // 项目下查询测试计划列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowPlansResponse> showPlans(
        ShowPlansRequest &request
    );
    // 获取异步进度
    //
    // 获取异步进度
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowProgressResponse> showProgress(
        ShowProgressRequest &request
    );
    // 查询质量报告看板统计信息
    //
    // 查询质量报告看板统计信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowProjectDataDashboardResponse> showProjectDataDashboard(
        ShowProjectDataDashboardRequest &request
    );
    // 用户获取自己当前已经注册的服务
    //
    // 用户获取自己当前已经注册的服务
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowRegisterServiceResponse> showRegisterService(
        ShowRegisterServiceRequest &request
    );
    // 实时计算单个自定义报表
    //
    // 实时计算单个自定义报表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowReportResponse> showReport(
        ShowReportRequest &request
    );
    // 质量报告需求测试情况统计
    //
    // 质量报告需求测试情况统计
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowRequirementsOverviewResponse> showRequirementsOverview(
        ShowRequirementsOverviewRequest &request
    );
    // 根据条件分页获取评审对象V2
    //
    // 根据条件分页获取评审对象V2
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowReviewByPageResponse> showReviewByPage(
        ShowReviewByPageRequest &request
    );
    // 根据条件分页获取场景对象V2
    //
    // 根据条件分页获取场景对象V2
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowSceneByPageResponse> showSceneByPage(
        ShowSceneByPageRequest &request
    );
    // 根据脑图id查询统计数目
    //
    // 根据脑图id查询统计数目
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowStatisticByIdResponse> showStatisticById(
        ShowStatisticByIdRequest &request
    );
    // 根据入参动态查询系统配置中的信息
    //
    // 根据入参动态查询系统配置中的信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowSystemConfigsResponse> showSystemConfigs(
        ShowSystemConfigsRequest &request
    );
    // 获取模板V2
    //
    // 获取模板V2
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowTemplateByIdResponse> showTemplateById(
        ShowTemplateByIdRequest &request
    );
    // 根据条件分页获取模板V3
    //
    // 根据条件分页获取模板V3
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowTemplateByPageResponse> showTemplateByPage(
        ShowTemplateByPageRequest &request
    );
    // 查询用例详情
    //
    // 查询用例详情
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowTestCaseResponse> showTestCase(
        ShowTestCaseRequest &request
    );
    // 查询用户用例关联缺陷的统计信息
    //
    // 查询用户用例关联缺陷的统计信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowTestCaseAndDefectInfoResponse> showTestCaseAndDefectInfo(
        ShowTestCaseAndDefectInfoRequest &request
    );
    // 获取测试用例详情
    //
    // 获取测试用例详情
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowTestCaseDetailResponse> showTestCaseDetail(
        ShowTestCaseDetailRequest &request
    );
    // 通过用例编号获取测试用例详情
    //
    // 通过用例编号获取测试用例详情
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowTestCaseDetailV2Response> showTestCaseDetailV2(
        ShowTestCaseDetailV2Request &request
    );
    // 根据用例查询评审记录
    //
    // 根据用例查询评审记录
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowTestCaseReviewsResponse> showTestCaseReviews(
        ShowTestCaseReviewsRequest &request
    );
    // 版本测试用例变更统计（只统计分支，不统计基线）
    //
    // 版本测试用例变更统计（只统计分支，不统计基线）
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowTestCasesChangeStatisticsResponse> showTestCasesChangeStatistics(
        ShowTestCasesChangeStatisticsRequest &request
    );
    // 根据条件分页获取测试用例对象V2
    //
    // 根据条件分页获取测试用例对象V2
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowTestcaseByPageResponse> showTestcaseByPage(
        ShowTestcaseByPageRequest &request
    );
    // 根据条件分页获取测试点对象V2
    //
    // 根据条件分页获取测试点对象V2
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowTestpointByPageResponse> showTestpointByPage(
        ShowTestpointByPageRequest &request
    );
    // 获取租户订单信息
    //
    // 获取租户订单信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowUserAccessInfoResponse> showUserAccessInfo(
        ShowUserAccessInfoRequest &request
    );
    // 查询时段内用例的执行情况
    //
    // 查询时段内用例的执行情况
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowUserExecuteTestCaseInfoResponse> showUserExecuteTestCaseInfo(
        ShowUserExecuteTestCaseInfoRequest &request
    );
    // 修改关键字信息接口
    //
    // 修改关键字信息接口
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateBasicAwByIdResponse> updateBasicAwById(
        UpdateBasicAwByIdRequest &request
    );
    // 修改测试计划
    //
    // 修改测试计划
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateIteratorResponse> updateIterator(
        UpdateIteratorRequest &request
    );
    // 更新已注册服务
    //
    // 更新已注册服务
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateServiceResponse> updateService(
        UpdateServiceRequest &request
    );
    // 更新自定义测试服务类型用例
    //
    // 更新自定义测试服务类型用例
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateTestCaseResponse> updateTestCase(
        UpdateTestCaseRequest &request
    );
    // 修改用例评论
    //
    // 修改用例评论
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateTestCaseCommentResponse> updateTestCaseComment(
        UpdateTestCaseCommentRequest &request
    );
    // 批量更新测试用例结果
    //
    // 批量更新测试用例结果
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateTestCaseResultResponse> updateTestCaseResult(
        UpdateTestCaseResultRequest &request
    );
    // 修改测试报告自定义模块
    //
    // 修改测试报告自定义模块
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateTestReportCustomDetailByUriResponse> updateTestReportCustomDetailByUri(
        UpdateTestReportCustomDetailByUriRequest &request
    );
    // 更新用户DNS映射
    //
    // 更新用户DNS映射，执行器自定义映射
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateUserDnsMappingResponse> updateUserDnsMapping(
        UpdateUserDnsMappingRequest &request
    );
    // 在分支或者测试计划下修改用例
    //
    // 在分支或者测试计划下修改用例
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateVersionTestCaseResponse> updateVersionTestCase(
        UpdateVersionTestCaseRequest &request
    );
    // 上传附件
    //
    // 上传附件
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UploadCacheFileResponse> uploadCacheFile(
        UploadCacheFileRequest &request
    );

    // 通过导入仓库中的文件生成接口测试套
    //
    // 通过导入仓库中的文件生成接口测试套
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateApiTestSuiteByRepoFileResponse> createApiTestSuiteByRepoFile(
        CreateApiTestSuiteByRepoFileRequest &request
    );

    // 获取环境参数分组列表
    //
    // 获取环境参数分组列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListEnvironmentsResponse> listEnvironments(
        ListEnvironmentsRequest &request
    );

    // 上传测试步骤图片
    //
    // 对外API
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UploadStepImgResponse> uploadStepImg(
        UploadStepImgRequest &request
    );

    // 批量删除因子
    //
    // 批量删除因子
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchDeleteFacotrByIdsResponse> batchDeleteFacotrByIds(
        BatchDeleteFacotrByIdsRequest &request
    );
    // 批量查询用例V3
    //
    // 批量查询用例V3
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchShowTestCaseResponse> batchShowTestCase(
        BatchShowTestCaseRequest &request
    );
    // 新增资产树节点
    //
    // 新增资产树节点
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateAssetTreeResponse> createAssetTree(
        CreateAssetTreeRequest &request
    );
    // 备份脑图V2
    //
    // 备份脑图V2
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateBackupMindmapResponse> createBackupMindmap(
        CreateBackupMindmapRequest &request
    );
    // 保存模板V2
    //
    // 保存模板V2
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateTemplateResponse> createTemplate(
        CreateTemplateRequest &request
    );
    // 删除资产
    //
    // 删除资产
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteAssetResponse> deleteAsset(
        DeleteAssetRequest &request
    );
    // 删除资产树节点
    //
    // 删除资产树节点
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteAssetTreeResponse> deleteAssetTree(
        DeleteAssetTreeRequest &request
    );
    // 根据id删除脑图备份V2
    //
    // 根据id删除脑图备份V2
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteMindmapBackupByIdResponse> deleteMindmapBackupById(
        DeleteMindmapBackupByIdRequest &request
    );
    // 删除脑图回收站V2
    //
    // 删除脑图回收站V2
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteMindmapRecycleByIdResponse> deleteMindmapRecycleById(
        DeleteMindmapRecycleByIdRequest &request
    );
    // 删除模板V2
    //
    // 删除模板V2
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteTemplateByIdResponse> deleteTemplateById(
        DeleteTemplateByIdRequest &request
    );
    // 下载资产模板
    //
    // 下载资产模板
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DownloadAssetTemplateResponse> downloadAssetTemplate(
        DownloadAssetTemplateRequest &request
    );
    // 因子库导出
    //
    // 因子库导出
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ExportFactorResponse> exportFactor(
        ExportFactorRequest &request
    );
    // 资产导入
    //
    // 资产导入
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ImportAssetResponse> importAsset(
        ImportAssetRequest &request
    );
    // 因子导入
    //
    // 因子导入
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ImportFactorResponse> importFactor(
        ImportFactorRequest &request
    );
    // 获取默认模板V2
    //
    // 获取默认模板V2
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDefaultTemplateByPageResponse> showDefaultTemplateByPage(
        ShowDefaultTemplateByPageRequest &request
    );
    // 根据id获取脑图备份V2
    //
    // 根据id获取脑图备份V2
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowMindmapBackupByIdResponse> showMindmapBackupById(
        ShowMindmapBackupByIdRequest &request
    );
    // 根据条件分页获取脑图备份对象V3
    //
    // 根据条件分页获取脑图备份对象V3
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowMindmapBackupByPageResponse> showMindmapBackupByPage(
        ShowMindmapBackupByPageRequest &request
    );
    // 根据id获取回收站脑图对象V2
    //
    // 根据id获取回收站脑图对象V2
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowMindmapRecycleByIdResponse> showMindmapRecycleById(
        ShowMindmapRecycleByIdRequest &request
    );
    // 根据条件分页获取回收站脑图对象V3
    //
    // 根据条件分页获取回收站脑图对象V3
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowMindmapRecycleByPageResponse> showMindmapRecycleByPage(
        ShowMindmapRecycleByPageRequest &request
    );
    // 根据id获取测试用例对象V2
    //
    // 根据id获取测试用例对象V2
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowTestcaseByIdResponse> showTestcaseById(
        ShowTestcaseByIdRequest &request
    );
    // 修改资产树节点
    //
    // 修改资产树节点
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateAssetTreeResponse> updateAssetTree(
        UpdateAssetTreeRequest &request
    );
    // 脑图名称编辑
    //
    // 脑图名称编辑
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateMindmapNameResponse> updateMindmapName(
        UpdateMindmapNameRequest &request
    );

    // 添加目录信息
    //
    // 添加目录信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddFeatureResponse> addFeature(
        AddFeatureRequest &request
    );

    // 根据测试用例URI或用例编号查询测试用例对应的测试计划
    //
    // 根据测试用例URI或用例编号查询测试用例对应的测试计划
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListTestcasePlansResponse> listTestcasePlans(
        ListTestcasePlansRequest &request
    );

    // 根据任务uri查询测试任务执行历史
    //
    // 根据任务uri查询测试任务执行历史
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListTaskResultsResponse> listTaskResults(
        ListTaskResultsRequest &request
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

template class HUAWEICLOUD_CLOUDTEST_V1_EXPORT ::HuaweiCloud::Sdk::Core::ClientBuilder<::HuaweiCloud::Sdk::Cloudtest::V1::CloudtestClient>;

#endif // HUAWEICLOUD_SDK_CLOUDTEST_V1_CloudtestClient_H_

