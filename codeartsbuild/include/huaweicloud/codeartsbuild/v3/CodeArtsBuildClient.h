#ifndef HUAWEICLOUD_SDK_CODEARTSBUILD_V3_CodeArtsBuildClient_H_
#define HUAWEICLOUD_SDK_CODEARTSBUILD_V3_CodeArtsBuildClient_H_

#include <huaweicloud/codeartsbuild/v3/CodeArtsBuildExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


#include <huaweicloud/codeartsbuild/v3/model/BatchDeleteBuildJobsRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/BatchDeleteBuildJobsRequestBody.h>
#include <huaweicloud/codeartsbuild/v3/model/BatchDeleteBuildJobsResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/CreateBuildJobRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/CreateBuildJobRequestBody.h>
#include <huaweicloud/codeartsbuild/v3/model/CreateBuildJobResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/CreateTemplatesRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/CreateTemplatesRequestBody.h>
#include <huaweicloud/codeartsbuild/v3/model/CreateTemplatesResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/DeleteBuildJobRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/DeleteBuildJobResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/DeleteTemplatesRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/DeleteTemplatesResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/DisableBuildJobRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/DisableBuildJobResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/DisableNoticeRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/DisableNoticeResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/DownloadBuildLogRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/DownloadBuildLogResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/DownloadKeystoreRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/DownloadKeystoreResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/DownloadRealTimeLogRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/DownloadRealTimeLogResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/DownloadTaskLogRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/DownloadTaskLogResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/EnableBuildJobRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/EnableBuildJobResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/ListBuildInfoRecordRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ListBuildInfoRecordResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/ListJobConfigRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ListJobConfigResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/ListNoticeRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ListNoticeResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/ListTemplatesRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ListTemplatesResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/RunJobRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/RunJobRequestBody.h>
#include <huaweicloud/codeartsbuild/v3/model/RunJobResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowHistoryDetailsRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowHistoryDetailsResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowJobListByProjectIdRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowJobListByProjectIdResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowJobStatusRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowJobStatusResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowJobSuccessRatioRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowJobSuccessRatioResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowLastHistoryRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowLastHistoryResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowListHistoryRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowListHistoryResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowListPeriodHistoryRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowListPeriodHistoryResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowOutputInfoRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowOutputInfoResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowRecordDetailRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowRecordDetailResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/StopBuildJobRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/StopBuildJobResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/UpdateBuildJobRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/UpdateBuildJobRequestBody.h>
#include <huaweicloud/codeartsbuild/v3/model/UpdateBuildJobResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/UpdateNoticeRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/UpdateNoticeRequestBody.h>
#include <huaweicloud/codeartsbuild/v3/model/UpdateNoticeResponse.h>
#include <string>

#include <huaweicloud/codeartsbuild/v3/model/CountdownRequestBody.h>
#include <huaweicloud/codeartsbuild/v3/model/ListRelatedProjectInfoRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ListRelatedProjectInfoResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowAvailableInnerSpecRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowAvailableInnerSpecResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowDomainStatusRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowDomainStatusResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowPackageSpecCountDownRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowPackageSpecCountDownResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowProjectPermissionRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowProjectPermissionResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowRelatedProjectRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowRelatedProjectResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowSummaryBuildJobInfoRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowSummaryBuildJobInfoResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowUserChargeTypeRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowUserChargeTypeResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowUserOverPackageQuotaRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowUserOverPackageQuotaResponse.h>
#include <string>

#include <huaweicloud/codeartsbuild/v3/model/CreateJobGroupRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/CreateJobGroupResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/DeleteGroupRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/DeleteGroupResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/JobGroupRequestBody.h>
#include <huaweicloud/codeartsbuild/v3/model/ListGroupTreeRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ListGroupTreeResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/MoveGroupRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/MoveGroupResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/MoveJobGroupRequestBody.h>
#include <huaweicloud/codeartsbuild/v3/model/SwitchedPacketRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/SwitchedPacketResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/UpdateJobGroupRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/UpdateJobGroupResponse.h>
#include <string>

#include <huaweicloud/codeartsbuild/v3/model/ShowDockerfileTemplateRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowDockerfileTemplateResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowImageTemplateListRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowImageTemplateListResponse.h>
#include <string>

#include <huaweicloud/codeartsbuild/v3/model/ApplyProjectPermissionRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ApplyProjectPermissionResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/BatchUpdateJobRolePermissionRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/BatchUpdateJobRolePermissionResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/CheckJobCountIsTopLimitRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/CheckJobCountIsTopLimitResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/CheckJobInternalRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/CheckJobInternalResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/CheckJobNameIsExistsRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/CheckJobNameIsExistsResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/CheckWebhookUrlRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/CheckWebhookUrlRequestBody.h>
#include <huaweicloud/codeartsbuild/v3/model/CheckWebhookUrlResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/ClearRecyclingJobsRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ClearRecyclingJobsResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/CopyBuildJobRequestBody.h>
#include <huaweicloud/codeartsbuild/v3/model/CopyJobRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/CopyJobResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/CreateBuildJobRequestBody.h>
#include <huaweicloud/codeartsbuild/v3/model/CreateNewJobRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/CreateNewJobResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/DeleteRecyclingJobsRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/DeleteRecyclingJobsResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/DeleteTheJobRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/DeleteTheJobResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/DisableTheJobRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/DisableTheJobRequestBody.h>
#include <huaweicloud/codeartsbuild/v3/model/DisableTheJobResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/DomainsStatusesRequestBody.h>
#include <huaweicloud/codeartsbuild/v3/model/ExecuteJobRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ExecuteJobResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/JobsRequestBody.h>
#include <huaweicloud/codeartsbuild/v3/model/ListBuildParameterRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ListBuildParameterResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/ListEndPointsRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ListEndPointsResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/ListJobRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ListJobResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/ListProjectJobsRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ListProjectJobsResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/ListRecyclingJobRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ListRecyclingJobResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/ListUpdateJobHistoryRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ListUpdateJobHistoryResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/ProjectPermissionRequestBody.h>
#include <huaweicloud/codeartsbuild/v3/model/RestoreRecyclingJobsRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/RestoreRecyclingJobsResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/RolePermissionsRequestBody.h>
#include <huaweicloud/codeartsbuild/v3/model/RunJobRequestBody.h>
#include <huaweicloud/codeartsbuild/v3/model/SetKeepTimeRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/SetKeepTimeRequestBody.h>
#include <huaweicloud/codeartsbuild/v3/model/SetKeepTimeResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowBuildDetailsRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowBuildDetailsResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowBuildParamsListRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowBuildParamsListResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowCopyNameRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowCopyNameResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowDefaultBuildParametersRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowDefaultBuildParametersResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowDefaultProjectPermissionRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowDefaultProjectPermissionResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowDisableRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowDisableResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowDomainsStatusesRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowDomainsStatusesResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowJobConfigDiffRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowJobConfigDiffResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowJobConfigRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowJobConfigResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowJobInfoRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowJobInfoResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowJobNoticeConfigInfoRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowJobNoticeConfigInfoResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowJobPipelineInfoRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowJobPipelineInfoResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowJobRolePermissionRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowJobRolePermissionResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowJobStepStatusRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowJobStepStatusResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowJobSystemParametersRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowJobSystemParametersResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowProjectJobPermissionRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowProjectJobPermissionResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowRunningStatusRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowRunningStatusResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/StopTheJobRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/StopTheJobResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/UpdateBuildJobRequestBody.h>
#include <huaweicloud/codeartsbuild/v3/model/UpdateNewJobRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/UpdateNewJobResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/UpdateNewNoticeNewRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/UpdateNewNoticeNewResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/UpdateNoticeRequestBody.h>
#include <string>

#include <huaweicloud/codeartsbuild/v3/model/AddKeystorePermissionRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/AddKeystorePermissionRequestBody.h>
#include <huaweicloud/codeartsbuild/v3/model/AddKeystorePermissionResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/DeleteKeystorePermissionRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/DeleteKeystorePermissionResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/DeleteKeystoreRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/DeleteKeystoreResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/DownloadKeystoreByNameRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/DownloadKeystoreByNameResponse.h>
#include <huaweicloud/core/utils/HttpContent.h>
#include <huaweicloud/codeartsbuild/v3/model/ListKeystoreRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ListKeystoreResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/ListKeystoreSearchRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ListKeystoreSearchResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowKeystorePermissionRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowKeystorePermissionResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/UpdateKeystorePermissionRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/UpdateKeystorePermissionRequestBody.h>
#include <huaweicloud/codeartsbuild/v3/model/UpdateKeystorePermissionResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/UpdateKeystoreRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/UpdateKeystoreRequestBody.h>
#include <huaweicloud/codeartsbuild/v3/model/UpdateKeystoreResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/UploadKeystoreRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/UploadKeystoreRequestBody.h>
#include <huaweicloud/codeartsbuild/v3/model/UploadKeystoreResponse.h>
#include <string>

#include <huaweicloud/codeartsbuild/v3/model/DownloadLogByRecordIdRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/DownloadLogByRecordIdResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowFlowGraphRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowFlowGraphResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowRecordInfoRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowRecordInfoResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/StopJobRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/StopJobRequestBody.h>
#include <huaweicloud/codeartsbuild/v3/model/StopJobResponse.h>
#include <string>

#include <huaweicloud/codeartsbuild/v3/model/ListBriefRecordRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ListBriefRecordResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/ListBuildInfoRecordByJobIdRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ListBuildInfoRecordByJobIdResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/ListRecordsRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ListRecordsResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowBuildInfoRecordRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowBuildInfoRecordResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowBuildRecordBuildScriptRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowBuildRecordBuildScriptResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowBuildRecordFlowGraphRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowBuildRecordFlowGraphResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowBuildRecordFullStagesRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowBuildRecordFullStagesResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowBuildRecordRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowBuildRecordResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowJobBuildRecordDetailRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowJobBuildRecordDetailResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowJobTotalRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowJobTotalResponse.h>
#include <string>
#include <vector>

#include <huaweicloud/codeartsbuild/v3/model/DownloadJunitCoverageZipRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/DownloadJunitCoverageZipResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/ListJunitCoverageSummaryRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ListJunitCoverageSummaryResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/ListRepoBranchRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ListRepoBranchResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/ListRepositoryRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ListRepositoryResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowJobBuildSuccessRatioRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowJobBuildSuccessRatioResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowJobBuildTimeRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowJobBuildTimeResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowReportSummaryRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowReportSummaryResponse.h>
#include <string>

#include <huaweicloud/codeartsbuild/v3/model/AddFavouriteCustomTemplateRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/AddFavouriteCustomTemplateResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/CreateTemplateRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/CreateTemplateResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/CreateTemplatesRequestBody.h>
#include <huaweicloud/codeartsbuild/v3/model/DeleteTemplateRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/DeleteTemplateResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/ListCustomTemplateRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ListCustomTemplateResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/ListOfficialTemplateRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ListOfficialTemplateResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/ListRecommendOfficialTemplateRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ListRecommendOfficialTemplateRequestBody.h>
#include <huaweicloud/codeartsbuild/v3/model/ListRecommendOfficialTemplateResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/RemoverFavouriteCustomTemplateRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/RemoverFavouriteCustomTemplateResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/SaveTemplateUsedInfoRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/SaveTemplateUsedInfoRequestBody.h>
#include <huaweicloud/codeartsbuild/v3/model/SaveTemplateUsedInfoResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowTemplateRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowTemplateResponse.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowYamlTemplateRequest.h>
#include <huaweicloud/codeartsbuild/v3/model/ShowYamlTemplateResponse.h>
#include <string>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Object.h>
#undef U
#include <boost/optional.hpp>

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsbuild {
namespace V3 {

using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Codeartsbuild::V3::Model;

class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT  CodeArtsBuildClient : public Client
{
public:

    CodeArtsBuildClient();

    virtual ~CodeArtsBuildClient();

    static ClientBuilder<CodeArtsBuildClient> newBuilder();

    // 批量删除构建任务
    //
    // 批量删除构建任务
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchDeleteBuildJobsResponse> batchDeleteBuildJobs(
        BatchDeleteBuildJobsRequest &request
    );
    // 创建构建任务
    //
    // 创建构建任务
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateBuildJobResponse> createBuildJob(
        CreateBuildJobRequest &request
    );
    // 创建构建模板
    //
    // 创建构建模板
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateTemplatesResponse> createTemplates(
        CreateTemplatesRequest &request
    );
    // 删除构建任务
    //
    // 删除构建任务
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteBuildJobResponse> deleteBuildJob(
        DeleteBuildJobRequest &request
    );
    // 删除构建模板
    //
    // 删除构建模板
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteTemplatesResponse> deleteTemplates(
        DeleteTemplatesRequest &request
    );
    // 禁用构建任务
    //
    // 禁用构建任务
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DisableBuildJobResponse> disableBuildJob(
        DisableBuildJobRequest &request
    );
    // 取消通知
    //
    // 取消通知
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DisableNoticeResponse> disableNotice(
        DisableNoticeRequest &request
    );
    // 下载全量构建日志
    //
    // 下载全量构建日志
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DownloadBuildLogResponse> downloadBuildLog(
        DownloadBuildLogRequest &request
    );
    // KeyStore文件下载
    //
    // 下载指定租户下的KeyStore文件
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DownloadKeystoreResponse> downloadKeystore(
        DownloadKeystoreRequest &request
    );
    // 下载构建实时日志
    //
    // 下载构建实时日志
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DownloadRealTimeLogResponse> downloadRealTimeLog(
        DownloadRealTimeLogRequest &request
    );
    // 下载构建步骤日志
    //
    // 下载构建步骤日志
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DownloadTaskLogResponse> downloadTaskLog(
        DownloadTaskLogRequest &request
    );
    // 恢复构建任务
    //
    // 恢复构建任务
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<EnableBuildJobResponse> enableBuildJob(
        EnableBuildJobRequest &request
    );
    // 获取任务构建记录列表
    //
    // 获取任务构建记录列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListBuildInfoRecordResponse> listBuildInfoRecord(
        ListBuildInfoRecordRequest &request
    );
    // 获取构建任务详情
    //
    // 获取构建任务详情
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListJobConfigResponse> listJobConfig(
        ListJobConfigRequest &request
    );
    // 查询通知
    //
    // 查询通知
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListNoticeResponse> listNotice(
        ListNoticeRequest &request
    );
    // 查询构建模板
    //
    // 查询构建模板
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListTemplatesResponse> listTemplates(
        ListTemplatesRequest &request
    );
    // 执行构建任务
    //
    // 执行构建任务,可传自定义参数
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RunJobResponse> runJob(
        RunJobRequest &request
    );
    // 获取构建历史详情信息接口
    //
    // 获取构建历史详情信息接口
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowHistoryDetailsResponse> showHistoryDetails(
        ShowHistoryDetailsRequest &request
    );
    // 查看项目下用户的构建任务列表
    //
    // 查看项目下用户的构建任务列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowJobListByProjectIdResponse> showJobListByProjectId(
        ShowJobListByProjectIdRequest &request
    );
    // 查看任务运行状态
    //
    // 查看任务运行状态
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowJobStatusResponse> showJobStatus(
        ShowJobStatusRequest &request
    );
    // 根据开始时间和结束时间查看构建任务的构建成功率
    //
    // 根据开始时间和结束时间查看构建任务的构建成功率
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowJobSuccessRatioResponse> showJobSuccessRatio(
        ShowJobSuccessRatioRequest &request
    );
    // 查询指定代码仓库最近一次成功的构建历史
    //
    // 查询指定代码仓库最近一次成功的构建历史
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowLastHistoryResponse> showLastHistory(
        ShowLastHistoryRequest &request
    );
    // 查看构建任务的构建历史列表
    //
    // 查看构建任务的构建历史列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowListHistoryResponse> showListHistory(
        ShowListHistoryRequest &request
    );
    // 根据开始时间和结束时间查看构建任务的构建历史列表
    //
    // 根据开始时间和结束时间查看构建任务的构建历史列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowListPeriodHistoryResponse> showListPeriodHistory(
        ShowListPeriodHistoryRequest &request
    );
    // 获取构建产物详情信息
    //
    // 获取构建产物详情信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowOutputInfoResponse> showOutputInfo(
        ShowOutputInfoRequest &request
    );
    // 获取构建记录信息
    //
    // 获取构建记录信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowRecordDetailResponse> showRecordDetail(
        ShowRecordDetailRequest &request
    );
    // 停止构建任务
    //
    // 停止构建任务
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<StopBuildJobResponse> stopBuildJob(
        StopBuildJobRequest &request
    );
    // 更新构建任务
    //
    // 更新构建任务
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateBuildJobResponse> updateBuildJob(
        UpdateBuildJobRequest &request
    );
    // 更新通知
    //
    // 更新通知
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateNoticeResponse> updateNotice(
        UpdateNoticeRequest &request
    );

    // 获取项目列表
    //
    // 获取项目列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListRelatedProjectInfoResponse> listRelatedProjectInfo(
        ListRelatedProjectInfoRequest &request
    );
    // 查内置执行机规格
    //
    // 查内置执行机规格。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAvailableInnerSpecResponse> showAvailableInnerSpec(
        ShowAvailableInnerSpecRequest &request
    );
    // 查询租户状态
    //
    // 查询租户状态。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDomainStatusResponse> showDomainStatus(
        ShowDomainStatusRequest &request
    );
    // 获取套餐临期信息
    //
    // 获取套餐临期信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowPackageSpecCountDownResponse> showPackageSpecCountDown(
        ShowPackageSpecCountDownRequest &request
    );
    // 获取用户权限
    //
    // 获取用户权限
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowProjectPermissionResponse> showProjectPermission(
        ShowProjectPermissionRequest &request
    );
    // 获取当前用户的项目信息列表
    //
    // 获取当前用户的项目信息列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowRelatedProjectResponse> showRelatedProject(
        ShowRelatedProjectRequest &request
    );
    // 获取租户任务总数和成功率接口
    //
    // 获取租户任务总数和成功率接口
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowSummaryBuildJobInfoResponse> showSummaryBuildJobInfo(
        ShowSummaryBuildJobInfoRequest &request
    );
    // 查询当前租户（计费）类型
    //
    // 查询当前租户（计费）类型。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowUserChargeTypeResponse> showUserChargeType(
        ShowUserChargeTypeRequest &request
    );
    // 当前用户所在项目所属租户的包周期每月时长是否超额
    //
    // 当前用户所在项目所属租户的包周期每月时长是否超额
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowUserOverPackageQuotaResponse> showUserOverPackageQuota(
        ShowUserOverPackageQuotaRequest &request
    );

    // 创建构建任务分组
    //
    // 创建构建任务分组
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateJobGroupResponse> createJobGroup(
        CreateJobGroupRequest &request
    );
    // 删除分组
    //
    // 删除分组
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteGroupResponse> deleteGroup(
        DeleteGroupRequest &request
    );
    // 查询分组树
    //
    // 查询分组树
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListGroupTreeResponse> listGroupTree(
        ListGroupTreeRequest &request
    );
    // 移动构建任务至指定分组
    //
    // 移动构建任务至指定分组
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<MoveGroupResponse> moveGroup(
        MoveGroupRequest &request
    );
    // 交换分组顺序
    //
    // 交换分组顺序
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SwitchedPacketResponse> switchedPacket(
        SwitchedPacketRequest &request
    );
    // 修改分组信息
    //
    // 修改分组信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateJobGroupResponse> updateJobGroup(
        UpdateJobGroupRequest &request
    );

    // 获取dockerfileTemplate
    //
    // 获取dockerfileTemplate
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDockerfileTemplateResponse> showDockerfileTemplate(
        ShowDockerfileTemplateRequest &request
    );
    // 获取镜像模板列表
    //
    // 获取镜像模板列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowImageTemplateListResponse> showImageTemplateList(
        ShowImageTemplateListRequest &request
    );

    // 任务是否使用项目级权限
    //
    // 任务是否使用项目级权限
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ApplyProjectPermissionResponse> applyProjectPermission(
        ApplyProjectPermissionRequest &request
    );
    // 批量修改任务权限
    //
    // 批量修改任务权限
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchUpdateJobRolePermissionResponse> batchUpdateJobRolePermission(
        BatchUpdateJobRolePermissionRequest &request
    );
    // 检查任务数量是否上限
    //
    // 检查任务数量是否上限
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CheckJobCountIsTopLimitResponse> checkJobCountIsTopLimit(
        CheckJobCountIsTopLimitRequest &request
    );
    // 是否已开启内网安全访问
    //
    // 是否已开启内网安全访问。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CheckJobInternalResponse> checkJobInternal(
        CheckJobInternalRequest &request
    );
    // 查看项目下任务名是否存在
    //
    // 查看项目下任务名是否存在
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CheckJobNameIsExistsResponse> checkJobNameIsExists(
        CheckJobNameIsExistsRequest &request
    );
    // 检查webhook地址参数
    //
    // 检查webhook地址参数
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CheckWebhookUrlResponse> checkWebhookUrl(
        CheckWebhookUrlRequest &request
    );
    // 清空回收站中的任务
    //
    // 清空回收站中的任务
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ClearRecyclingJobsResponse> clearRecyclingJobs(
        ClearRecyclingJobsRequest &request
    );
    // 复制构建任务
    //
    // 复制构建任务
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CopyJobResponse> copyJob(
        CopyJobRequest &request
    );
    // 创建构建任务
    //
    // 创建构建任务
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateNewJobResponse> createNewJob(
        CreateNewJobRequest &request
    );
    // 删除回收站中的任务
    //
    // 删除回收站中的任务
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteRecyclingJobsResponse> deleteRecyclingJobs(
        DeleteRecyclingJobsRequest &request
    );
    // 删除任务
    //
    // 删除任务
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteTheJobResponse> deleteTheJob(
        DeleteTheJobRequest &request
    );
    // 禁用任务
    //
    // 禁用任务
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DisableTheJobResponse> disableTheJob(
        DisableTheJobRequest &request
    );
    // 执行构建
    //
    // 执行构建任务
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ExecuteJobResponse> executeJob(
        ExecuteJobRequest &request
    );
    // 详情页获取构建参数
    //
    // 详情页获取构建参数
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListBuildParameterResponse> listBuildParameter(
        ListBuildParameterRequest &request
    );
    // 查询私有依赖仓库列表
    //
    // 查询私有依赖仓库列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListEndPointsResponse> listEndPoints(
        ListEndPointsRequest &request
    );
    // 查看用户全部的构建任务列表
    //
    // 查看用户全部的构建任务列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListJobResponse> listJob(
        ListJobRequest &request
    );
    // 查询项目任务列表
    //
    // 查询项目任务列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListProjectJobsResponse> listProjectJobs(
        ListProjectJobsRequest &request
    );
    // 查看回收站中删除的构建任务列表
    //
    // 查看回收站中删除的构建任务列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListRecyclingJobResponse> listRecyclingJob(
        ListRecyclingJobRequest &request
    );
    // 获取修改历史
    //
    // 获取修改历史
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListUpdateJobHistoryResponse> listUpdateJobHistory(
        ListUpdateJobHistoryRequest &request
    );
    // 恢复回收站中的任务
    //
    // 恢复回收站中的任务
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RestoreRecyclingJobsResponse> restoreRecyclingJobs(
        RestoreRecyclingJobsRequest &request
    );
    // 设置回收站中的任务保留时间
    //
    // 设置回收站中的任务保留时间,该接口需要租户账号才能访问，租户子账号无权限访问。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SetKeepTimeResponse> setKeepTime(
        SetKeepTimeRequest &request
    );
    // 根据持续构建名称，获取任务构建状态、百分比、剩余时间
    //
    // 根据持续构建名称，获取任务构建状态、百分比、剩余时间
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowBuildDetailsResponse> showBuildDetails(
        ShowBuildDetailsRequest &request
    );
    // 编辑页获取参数类型的接口
    //
    // 编辑页获取参数类型的接口
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowBuildParamsListResponse> showBuildParamsList(
        ShowBuildParamsListRequest &request
    );
    // 复制任务名
    //
    // 复制任务名
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowCopyNameResponse> showCopyName(
        ShowCopyNameRequest &request
    );
    // 获取编译构建默认参数
    //
    // 获取编译构建默认参数
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDefaultBuildParametersResponse> showDefaultBuildParameters(
        ShowDefaultBuildParametersRequest &request
    );
    // 获取当前项目默认角色权限矩阵信息
    //
    // 获取当前项目默认角色权限矩阵信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDefaultProjectPermissionResponse> showDefaultProjectPermission(
        ShowDefaultProjectPermissionRequest &request
    );
    // 查询任务是否已禁用
    //
    // 查询任务是否已禁用
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDisableResponse> showDisable(
        ShowDisableRequest &request
    );
    // 查询跨租户场景下其他租户的状态
    //
    // 查询跨租户场景下其他租户的状态
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDomainsStatusesResponse> showDomainsStatuses(
        ShowDomainsStatusesRequest &request
    );
    // 获取构建任务详情
    //
    // 获取构建任务详情
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowJobConfigResponse> showJobConfig(
        ShowJobConfigRequest &request
    );
    // 获取构建任务配置的对比差异
    //
    // 获取构建任务配置的对比差异
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowJobConfigDiffResponse> showJobConfigDiff(
        ShowJobConfigDiffRequest &request
    );
    // 查看构建任务构建信息
    //
    // 查看构建任务构建信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowJobInfoResponse> showJobInfo(
        ShowJobInfoRequest &request
    );
    // 获取通知信息
    //
    // 获取通知信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowJobNoticeConfigInfoResponse> showJobNoticeConfigInfo(
        ShowJobNoticeConfigInfoRequest &request
    );
    // 流水线查看构建任务信息
    //
    // 流水线查看构建任务信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowJobPipelineInfoResponse> showJobPipelineInfo(
        ShowJobPipelineInfoRequest &request
    );
    // 获取构建任务的角色权限矩阵信息
    //
    // 获取构建任务的角色权限矩阵信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowJobRolePermissionResponse> showJobRolePermission(
        ShowJobRolePermissionRequest &request
    );
    // 查询任务状态
    //
    // 查询任务状态
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowJobStepStatusResponse> showJobStepStatus(
        ShowJobStepStatusRequest &request
    );
    // 查看系统预定义参数
    //
    // 查看系统预定义参数
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowJobSystemParametersResponse> showJobSystemParameters(
        ShowJobSystemParametersRequest &request
    );
    // 获取任务权限矩阵
    //
    // 获取任务权限矩阵
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowProjectJobPermissionResponse> showProjectJobPermission(
        ShowProjectJobPermissionRequest &request
    );
    // 查看任务是否在构建
    //
    // 查看任务是否在构建
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowRunningStatusResponse> showRunningStatus(
        ShowRunningStatusRequest &request
    );
    // 停止构建任务v1
    //
    // 停止构建任务v1
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<StopTheJobResponse> stopTheJob(
        StopTheJobRequest &request
    );
    // 更新构建任务
    //
    // 更新构建任务
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateNewJobResponse> updateNewJob(
        UpdateNewJobRequest &request
    );
    // 更新通知配置
    //
    // 更新通知配置。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateNewNoticeNewResponse> updateNewNoticeNew(
        UpdateNewNoticeNewRequest &request
    );

    // 添加文件权限
    //
    // 添加文件权限
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddKeystorePermissionResponse> addKeystorePermission(
        AddKeystorePermissionRequest &request
    );
    // 删除文件管理文件
    //
    // 删除文件管理文件
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteKeystoreResponse> deleteKeystore(
        DeleteKeystoreRequest &request
    );
    // 文件管理删除权限
    //
    // 文件管理删除权限
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteKeystorePermissionResponse> deleteKeystorePermission(
        DeleteKeystorePermissionRequest &request
    );
    // 文件管理文件下载
    //
    // 文件管理文件下载
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DownloadKeystoreByNameResponse> downloadKeystoreByName(
        DownloadKeystoreByNameRequest &request
    );
    // 查询用户可使用文件
    //
    // 查询用户可使用文件
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListKeystoreResponse> listKeystore(
        ListKeystoreRequest &request
    );
    // 查询租户下文件列表
    //
    // 查询租户下文件列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListKeystoreSearchResponse> listKeystoreSearch(
        ListKeystoreSearchRequest &request
    );
    // 文件管理查询权限
    //
    // 文件管理查询权限
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowKeystorePermissionResponse> showKeystorePermission(
        ShowKeystorePermissionRequest &request
    );
    // 更新文件信息
    //
    // 更新文件信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateKeystoreResponse> updateKeystore(
        UpdateKeystoreRequest &request
    );
    // 配置文件权限
    //
    // 配置文件权限
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateKeystorePermissionResponse> updateKeystorePermission(
        UpdateKeystorePermissionRequest &request
    );
    // 上传文件
    //
    // 上传文件
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UploadKeystoreResponse> uploadKeystore(
        UploadKeystoreRequest &request
    );

    // 下载构建日志(待下线)
    //
    // 下载构建日志(待下线)
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DownloadLogByRecordIdResponse> downloadLogByRecordId(
        DownloadLogByRecordIdRequest &request
    );
    // 获取构建记录的有向无环图(待下线)
    //
    // 获取构建记录的有向无环图(待下线)
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowFlowGraphResponse> showFlowGraph(
        ShowFlowGraphRequest &request
    );
    // 获取构建记录信息(待下线)
    //
    // 获取构建记录信息(待下线)
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowRecordInfoResponse> showRecordInfo(
        ShowRecordInfoRequest &request
    );
    // 停止构建任务(待下线)
    //
    // 停止构建任务(待下线)
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<StopJobResponse> stopJob(
        StopJobRequest &request
    );

    // 获取指定工程的简要构建信息
    //
    // 获取指定工程的简要构建信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListBriefRecordResponse> listBriefRecord(
        ListBriefRecordRequest &request
    );
    // 获取任务构建记录列表v1
    //
    // 获取任务构建记录列表v1
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListBuildInfoRecordByJobIdResponse> listBuildInfoRecordByJobId(
        ListBuildInfoRecordByJobIdRequest &request
    );
    // 获取指定工程的构建记录列表
    //
    // 获取指定工程的构建记录列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListRecordsResponse> listRecords(
        ListRecordsRequest &request
    );
    // 获取任务构建记录列表
    //
    // 获取任务构建记录列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowBuildInfoRecordResponse> showBuildInfoRecord(
        ShowBuildInfoRecordRequest &request
    );
    // 查询指定构建记录详情
    //
    // 查询指定构建记录详情
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowBuildRecordResponse> showBuildRecord(
        ShowBuildRecordRequest &request
    );
    // 获取构建记录的构建脚本
    //
    // 获取构建记录的构建脚本
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowBuildRecordBuildScriptResponse> showBuildRecordBuildScript(
        ShowBuildRecordBuildScriptRequest &request
    );
    // 获取构建记录的有向无环图
    //
    // 获取构建记录的有向无环图
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowBuildRecordFlowGraphResponse> showBuildRecordFlowGraph(
        ShowBuildRecordFlowGraphRequest &request
    );
    // 获取任务各阶段信息
    //
    // 获取任务各阶段信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowBuildRecordFullStagesResponse> showBuildRecordFullStages(
        ShowBuildRecordFullStagesRequest &request
    );
    // 获取构建记录信息
    //
    // 获取构建记录信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowJobBuildRecordDetailResponse> showJobBuildRecordDetail(
        ShowJobBuildRecordDetailRequest &request
    );
    // 构建历史页获取构建次数
    //
    // 构建历史页获取构建次数
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowJobTotalResponse> showJobTotal(
        ShowJobTotalRequest &request
    );

    // 获取单元测试覆盖率报告压缩包
    //
    // 获取单元测试覆盖率报告压缩包
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DownloadJunitCoverageZipResponse> downloadJunitCoverageZip(
        DownloadJunitCoverageZipRequest &request
    );
    // 获取单元测试覆盖率报告列表
    //
    // 获取单元测试覆盖率报告列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListJunitCoverageSummaryResponse> listJunitCoverageSummary(
        ListJunitCoverageSummaryRequest &request
    );
    // 获取该任务所有分支信息
    //
    // 获取该任务所有分支信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListRepoBranchResponse> listRepoBranch(
        ListRepoBranchRequest &request
    );
    // 查看仓库
    //
    // 查看仓库
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListRepositoryResponse> listRepository(
        ListRepositoryRequest &request
    );
    // 查询构建成功率
    //
    // 查询构建成功率
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowJobBuildSuccessRatioResponse> showJobBuildSuccessRatio(
        ShowJobBuildSuccessRatioRequest &request
    );
    // 洞察构建时长
    //
    // 洞察构建时长
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowJobBuildTimeResponse> showJobBuildTime(
        ShowJobBuildTimeRequest &request
    );
    // 获取覆盖率接口
    //
    // 获取覆盖率接口
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowReportSummaryResponse> showReportSummary(
        ShowReportSummaryRequest &request
    );

    // 收藏自定义模板
    //
    // 收藏自定义模板
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddFavouriteCustomTemplateResponse> addFavouriteCustomTemplate(
        AddFavouriteCustomTemplateRequest &request
    );
    // 创建构建模板
    //
    // 创建构建模板
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateTemplateResponse> createTemplate(
        CreateTemplateRequest &request
    );
    // 删除构建模板
    //
    // 删除构建模板
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteTemplateResponse> deleteTemplate(
        DeleteTemplateRequest &request
    );
    // 根据条件查询特定模板
    //
    // 根据条件查询特定模板
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListCustomTemplateResponse> listCustomTemplate(
        ListCustomTemplateRequest &request
    );
    // 查询官方模版
    //
    // 查询官方模版
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListOfficialTemplateResponse> listOfficialTemplate(
        ListOfficialTemplateRequest &request
    );
    // 获取官方推荐模板
    //
    // 获取官方推荐模板
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListRecommendOfficialTemplateResponse> listRecommendOfficialTemplate(
        ListRecommendOfficialTemplateRequest &request
    );
    // 取消收藏自定义模板
    //
    // 取消收藏自定义模板
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RemoverFavouriteCustomTemplateResponse> removerFavouriteCustomTemplate(
        RemoverFavouriteCustomTemplateRequest &request
    );
    // 保存模板使用记录
    //
    // 保存模板使用记录
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SaveTemplateUsedInfoResponse> saveTemplateUsedInfo(
        SaveTemplateUsedInfoRequest &request
    );
    // 根据模板uuid查询特定模板
    //
    // 根据模板uuid查询特定模板
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowTemplateResponse> showTemplate(
        ShowTemplateRequest &request
    );
    // 获取代码化构建默认模板
    //
    // 获取代码化构建默认模板
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowYamlTemplateResponse> showYamlTemplate(
        ShowYamlTemplateRequest &request
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

template class HUAWEICLOUD_CODEARTSBUILD_V3_EXPORT ::HuaweiCloud::Sdk::Core::ClientBuilder<::HuaweiCloud::Sdk::Codeartsbuild::V3::CodeArtsBuildClient>;

#endif // HUAWEICLOUD_SDK_CODEARTSBUILD_V3_CodeArtsBuildClient_H_

