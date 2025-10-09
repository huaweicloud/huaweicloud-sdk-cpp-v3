#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_GaussDBforopenGaussClient_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_GaussDBforopenGaussClient_H_

#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


#include <huaweicloud/gaussdbforopengauss/v3/model/AddHbaConfRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/AddHbaConfsRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/AddHbaConfsResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/AddInstanceTagsRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/AddInstanceTagsResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/AddTagsRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/AllowDbPrivilegesRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/AllowDbPrivilegesResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/AllowDbRolePrivilegesRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/AllowDbRolePrivilegesRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/AllowDbRolePrivilegesResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ApplyConfigurationRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/AttachEipRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/AttachEipResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/AuthorizeBackupDownloadRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/AuthorizeBackupDownloadResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/BackupPolicyErrorResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/BaseOpsKeyViewRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/BatchSetBackupPolicyRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/BatchSetBackupPolicyRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/BatchSetBackupPolicyResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/BatchShowUpgradeCandidateVersionsRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/BatchShowUpgradeCandidateVersionsResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/BindEIPRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/CancelScheduleTaskRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/CancelScheduleTaskResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ConfirmRestoredDataRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ConfirmRestoredDataResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ConstructReq.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/CopyConfigurationRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/CopyConfigurationResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/CreateConfigurationTemplateRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/CreateConfigurationTemplateRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/CreateConfigurationTemplateResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/CreateCrossCloudConstructDisasterRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/CreateCrossCloudConstructDisasterResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/CreateDatabaseInstanceRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/CreateDatabaseInstanceRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/CreateDatabaseInstanceResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/CreateDatabaseRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/CreateDatabaseResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/CreateDatabaseSchemasRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/CreateDatabaseSchemasResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/CreateDbInstanceRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/CreateDbInstanceResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/CreateDbRoleRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/CreateDbRoleRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/CreateDbRoleResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/CreateDbUserRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/CreateDbUserResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/CreateGaussDbInstanceRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/CreateGaussDbInstanceResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/CreateInstanceRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/CreateInstanceResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/CreateManualBackupRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/CreateManualBackupRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/CreateManualBackupResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/CreateReadonlyNodesRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/CreateReadonlyNodesRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/CreateReadonlyNodesResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/CreateRestoreInstanceRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/CreateRestoreInstanceResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/CreateScheduleTaskRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/CreateScheduleTaskRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/CreateScheduleTaskResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/CreateSlowLogDownloadRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/CreateSlowLogDownloadResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/DataStroeErrorResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/DbUserPwdRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/DeleteBackupErrorResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/DeleteConfigurationRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/DeleteConfigurationResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/DeleteDatabaseRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/DeleteDatabaseResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/DeleteDatabaseSchemaRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/DeleteDatabaseSchemaRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/DeleteDatabaseSchemaResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/DeleteDisasterRecordRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/DeleteDisasterRecordRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/DeleteDisasterRecordResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/DeleteHbaConfRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/DeleteHbaConfsRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/DeleteHbaConfsResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/DeleteInstanceRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/DeleteInstanceResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/DeleteInstanceTagRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/DeleteInstanceTagResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/DeleteJobRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/DeleteJobResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/DeleteManualBackupRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/DeleteManualBackupResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/DeleteReadonlyNodesRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/DeleteReadonlyNodesRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/DeleteReadonlyNodesResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/DeleteScheduleTaskRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/DeleteScheduleTaskResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/DeleteShardingRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/DeleteShardingResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/DisasterFailoverReqBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/DisasterRecoverStartSimulationRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/DisasterRecoverStartXlogKeepRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/DisasterRecoverStopSimulationRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/DisasterRecoverStopXlogKeepRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/DownloadBackupErrorResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/DownloadBackupRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/DownloadBackupResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ErrorResponseBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ExecuteCrossCloudDisasterDataCacheEndRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ExecuteCrossCloudDisasterDataCacheEndResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ExecuteCrossCloudDisasterDataCacheStartRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ExecuteCrossCloudDisasterDataCacheStartResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ExecuteCrossCloudDisasterEndSimulationRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ExecuteCrossCloudDisasterEndSimulationResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ExecuteCrossCloudDisasterRecoveryFailoverRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ExecuteCrossCloudDisasterRecoveryFailoverResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ExecuteCrossCloudDisasterRestoreRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ExecuteCrossCloudDisasterRestoreResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ExecuteCrossCloudDisasterStartSimulationRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ExecuteCrossCloudDisasterStartSimulationResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ExecuteCrossCloudDisasterSwitchoverRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ExecuteCrossCloudDisasterSwitchoverResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ExecuteCrossCloudReleaseDisasterRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ExecuteCrossCloudReleaseDisasterResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ExpansionParametersRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ExportSlowSqlRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ExportSlowSqlResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ExportTableVolumeRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/FlavorErrorResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/GaussDBErrorResponseBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/GaussDBUpgradeInstancesVersionRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/GaussDBforOpenDatabaseForCreation.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/GaussDBforOpenGaussDatabaseSchemaReq.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/GaussDBforOpenGaussGrantRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/GaussDBforOpenGaussUserForCreation.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/InstallKernelPluginRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/InstallKernelPluginRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/InstallKernelPluginResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/KillSessionRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListApplicableInstancesRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListApplicableInstancesResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListAppliedHistoriesRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListAppliedHistoriesResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListAvailableFlavorsRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListAvailableFlavorsResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListBackupsDetailsRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListBackupsDetailsResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListBackupsRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListBackupsResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListBindedEipsRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListBindedEipsResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListCnInfosBeforeReduceRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListCnInfosBeforeReduceResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListComponentInfosRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListComponentInfosResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListConfigurationsDiffRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListConfigurationsDiffResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListConfigurationsRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListConfigurationsResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListDatabaseInstancesRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListDatabaseInstancesResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListDatabaseRolesRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListDatabaseRolesResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListDatabaseSchemaTablesRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListDatabaseSchemaTablesResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListDatabaseSchemasRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListDatabaseSchemasResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListDatabaseVersionsRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListDatabaseVersionsResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListDatabaseVolumeRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListDatabaseVolumeResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListDatabaseVolumeSummaryRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListDatabaseVolumeSummaryResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListDatabasesRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListDatabasesResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListDatastoresDetailsRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListDatastoresDetailsResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListDatastoresRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListDatastoresResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListDbBackupsRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListDbBackupsResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListDbFlavorsRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListDbFlavorsResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListDbUsersRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListDbUsersResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListDisasterRecoveryRecordRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListDisasterRecoveryRecordResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListEnterpriseProjectsRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListEnterpriseProjectsResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListEpsQuotasRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListEpsQuotasResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListFeaturesRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListFeaturesResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListFlavorsDetailsRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListFlavorsDetailsResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListFlavorsRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListFlavorsResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListGaussDbDatastoresRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListGaussDbDatastoresResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListHbaInfoHistoryRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListHbaInfoHistoryResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListHbaInfosRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListHbaInfosResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListHistoryOperationsRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListHistoryOperationsResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListInstanceDetailsRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListInstanceDetailsResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListInstanceEngineDetailRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListInstanceEngineDetailResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListInstanceErrorLogsRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListInstanceErrorLogsResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListInstanceTagsRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListInstanceTagsResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListInstancesDetailsRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListInstancesDetailsResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListInstancesRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListInstancesResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListKernelPluginsRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListKernelPluginsResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListKeyViewExecuteNodeRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListKeyViewExecuteNodeResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListKmsTdeKeyRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListKmsTdeKeyResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListMetricDatasRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListMetricDatasResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListParamGroupTemplatesRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListParamGroupTemplatesResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListParameterGroupTemplatesRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListParameterGroupTemplatesResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListPluginExtensionsRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListPluginExtensionsRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListPluginExtensionsResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListPluginInfoListRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListPluginInfoListResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListPredefinedTagsRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListPredefinedTagsResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListProjectTagsRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListProjectTagsResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListReadonlyNodesRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListReadonlyNodesResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListRealTimeSessionsRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListRealTimeSessionsRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListRealTimeSessionsResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListRecycleInstancesDetailsRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListRecycleInstancesDetailsResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListRecycleInstancesRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListRecycleInstancesResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListRestorableInstancesDetailsRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListRestorableInstancesDetailsResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListRestorableInstancesRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListRestorableInstancesResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListRestoreTimesRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListRestoreTimesResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListScheduleTaskRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListScheduleTaskResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListSchemaAndTableRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListSchemaAndTableRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListSchemaAndTableResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListSessionStatisticsRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListSessionStatisticsResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListStorageTypesRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListStorageTypesResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListSupportKernelPluginsRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListSupportKernelPluginsResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListTableDefinitionRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListTableDefinitionResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListTableDefinitionsRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListTableDefinitionsResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListTasksRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListTasksResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListTransactionRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListTransactionRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListTransactionResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListWaitEventRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListWaitEventRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListWaitEventResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ModifyAutoEnlargePolicyRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ModifyAutoEnlargePolicyRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ModifyAutoEnlargePolicyResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ModifyEpsQuotaRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ModifyEpsQuotaRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ModifyEpsQuotaResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ModifyHbaConfRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ModifyHbaConfRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ModifyHbaConfResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ModifyInstancePortRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ModifyInstancePortRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ModifyInstancePortResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/OpenGaussInstanceActionRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/OpenGaussInstanceRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/OpenGaussInstanceRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/OpenGaussModifyInstanceConfigurationRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/OpenGaussResizeRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/OpengaussRestoreInstanceRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ParaErrorResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ParaErrorResponseBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ParamGroupCopyRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ParamGroupDiffRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/PluginExtensions.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/PwdResetRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/RecyclePolicyRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/RedistributionRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ReduceCnRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ReduceDnRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ReleaseDisasterReq.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ResetConfigurationRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ResetConfigurationResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ResetDrConfigRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ResetDrConfigRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ResetDrConfigResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ResetPwdRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ResetPwdResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ResizeInstanceFlavorRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ResizeInstanceFlavorResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ResourceErrorResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/RestartInstanceRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/RestartInstanceResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/RestoreDisasterReq.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/RestoreHbaInfoRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/RestoreHbaInfoRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/RestoreHbaInfoResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/RestoreInstanceRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/RestoreInstanceRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/RestoreInstanceResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ResumePluginExtensionsRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ResumePluginExtensionsRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ResumePluginExtensionsResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/RunInstanceActionRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/RunInstanceActionResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/SearchAutoEnlargePolicyRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/SearchAutoEnlargePolicyResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/SetBackupPolicyRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/SetBackupPolicyRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/SetBackupPolicyResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/SetDbUserPwdRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/SetDbUserPwdResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/SetKernelPluginLicenseRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/SetKernelPluginLicenseRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/SetKernelPluginLicenseResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/SetNewBackupPolicyRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/SetNewBackupPolicyRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/SetNewBackupPolicyResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/SetRecyclePolicyRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/SetRecyclePolicyResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowAlarmHistoryRecordRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowAlarmHistoryRecordResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowAlarmStatisticsRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowAlarmStatisticsResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowAutoKillTransactionConfigRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowAutoKillTransactionConfigResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowBackupPolicyRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowBackupPolicyResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowBalanceStatusRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowBalanceStatusResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowBatchUpgradeCandidateVersionsRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowBatchUpgradeCandidateVersionsResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowConfigurationDetailRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowConfigurationDetailResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowCrossCloudDisasterInstanceMonitorRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowCrossCloudDisasterInstanceMonitorResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowCrossCloudDisasterRelationsRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowCrossCloudDisasterRelationsResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowDeploymentFormRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowDeploymentFormResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowEpsRemainingQuotaRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowEpsRemainingQuotaRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowEpsRemainingQuotaResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowErrorLogSwitchStatusRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowErrorLogSwitchStatusResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowExpansionParametersRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowExpansionParametersResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowInstanceConfigurationRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowInstanceConfigurationResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowInstanceDiskRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowInstanceDiskResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowInstanceMetricDataRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowInstanceMetricDataResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowInstanceParamGroupDetailRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowInstanceParamGroupDetailResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowInstanceParamGroupRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowInstanceParamGroupResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowInstanceSnapshotRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowInstanceSnapshotResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowInstancesStatisticsRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowInstancesStatisticsResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowJobDetailRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowJobDetailResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowKmsKeyDetailRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowKmsKeyDetailResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowMetricNamesRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowMetricNamesResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowParameterGroupDetailRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowParameterGroupDetailResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowProjectQuotasRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowProjectQuotasResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowRecyclePolicyRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowRecyclePolicyResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowRedistributionParametersRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowRedistributionParametersResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowSessionOverviewRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowSessionOverviewResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowShardDiskMessagesRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowShardDiskMessagesResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowSlowLogDownloadRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowSlowLogDownloadResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowSlowSqlPlanRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowSlowSqlPlanResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowSlowSqlStackRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowSlowSqlStackResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowSourceInstanceDetailRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowSourceInstanceDetailResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowSslCertDownloadLinkRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowSslCertDownloadLinkResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowUpgradeCandidateVersionsDetailsRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowUpgradeCandidateVersionsDetailsResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowUpgradeCandidateVersionsRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowUpgradeCandidateVersionsResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShrinkCnRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShrinkCnResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/StartInstanceRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/StartInstanceRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/StartInstanceResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/StartMySQLCompatibilityRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/StartMysqlCompatibilityRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/StartMysqlCompatibilityResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/StopBackupRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/StopBackupResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/StopFreeSessionRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/StopFreeSessionResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/StopInstanceRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/StopInstanceRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/StopInstanceResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/StopSessionRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/StopSessionResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/StopTransactionRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/StopTransactionRequsetBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/StopTransactionResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/SwitchConfigurationRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/SwitchConfigurationResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/SwitchKmsTdeRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/SwitchKmsTdeRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/SwitchKmsTdeResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/SwitchReplicaRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/SwitchReplicaRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/SwitchReplicaResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/SwitchShardRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/SwitchShardRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/SwitchShardResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/SwitchoverReq.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/UpdateExpansionParametersRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/UpdateExpansionParametersResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/UpdateFeaturesRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/UpdateFeaturesRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/UpdateFeaturesResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/UpdateInstanceConfigurationRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/UpdateInstanceConfigurationResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/UpdateInstanceNameRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/UpdateInstanceNameResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/UpdateInstanceVersionsRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/UpdateInstanceVersionsResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/UpdateMySQLCompatibilityRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/UpdateMysqlCompatibilityRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/UpdateMysqlCompatibilityResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/UpdateNameRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/UpdateRedistributionControlRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/UpdateRedistributionControlResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/UpgradeErrorResponseBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/UpgradeInstanceVersionRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/UpgradeInstanceVersionResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/UpgradeInstancesRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/UpgradeInstancesVersionRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/UpgradeInstancesVersionResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/UpgradeRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ValidateParaGroupNameRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ValidateParaGroupNameResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ValidateWeakPasswordRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ValidateWeakPasswordResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/WeakPasswordRequestBody.h>
#include <string>
#include <cpprest/details/basic_types.h>

#include <huaweicloud/gaussdbforopengauss/v3/model/CollectAspRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/CollectAspRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/CollectAspResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ErrorResponseBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListAspInfosRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListAspInfosResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowAspStatusRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowAspStatusResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/SwitchAspStatusRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/SwitchAspStatusRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/SwitchAspStatusResponse.h>
#include <string>

#include <huaweicloud/gaussdbforopengauss/v3/model/BindLtsConfigRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/BindLtsConfigRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/BindLtsConfigResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ErrorResponseBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListLtsConfigsRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListLtsConfigsResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/UnbindLtsConfigRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/UnbindLtsConfigRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/UnbindLtsConfigResponse.h>
#include <string>

#include <huaweicloud/gaussdbforopengauss/v3/model/CreateLimitTaskRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/CreateLimitTaskRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/CreateLimitTaskResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/CreateSqlLimitTaskRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/CreateSqlLimitTaskRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/CreateSqlLimitTaskResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/DeleteLimitTaskRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/DeleteLimitTaskResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/DeleteSqlLimitTaskRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/DeleteSqlLimitTaskRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/DeleteSqlLimitTaskResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ErrorResponseBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/FullSqlStartRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListEnhanceFullSqlStatisticsRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListEnhanceFullSqlStatisticsRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListEnhanceFullSqlStatisticsResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListEnhanceFullSqlsRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListEnhanceFullSqlsRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListEnhanceFullSqlsResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListFullSqlSwitchesRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListFullSqlSwitchesResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListLimitTaskRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListLimitTaskResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListNodeLimitSqlModelRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListNodeLimitSqlModelResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListSQLExcuteNodeRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListSlowSqlDetailsRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListSlowSqlDetailsResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListSlowSqlsRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListSlowSqlsRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListSlowSqlsResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListSqlExcuteNodesRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListSqlExcuteNodesResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListSqlLimitTaskRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListSqlLimitTaskRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListSqlLimitTaskResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListSqlTraceRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListSqlTraceResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/NodeExecutionInfoResult.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ParaErrorResponseBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowGlobalSlowSqlDetailRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowGlobalSlowSqlDetailRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowGlobalSlowSqlDetailResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowLimitTaskRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowLimitTaskResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowSqlLimitTaskRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowSqlLimitTaskResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/SlowSqlDetailRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/StartFullSqlRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/StartFullSqlResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/StopFullSqlRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/StopFullSqlResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/SyncLimitDataRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/SyncLimitDataResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/UpdateLimitTaskRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/UpdateLimitTaskRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/UpdateLimitTaskResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/UpdateSqlLimitTaskRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/UpdateSqlLimitTaskRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/UpdateSqlLimitTaskResponse.h>
#include <string>

#include <huaweicloud/gaussdbforopengauss/v3/model/ErrorResponseBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowSqlPatchRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowSqlPatchResponse.h>
#include <string>

#include <huaweicloud/gaussdbforopengauss/v3/model/ListTopSqlsRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListTopSqlsRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListTopSqlsResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ParaErrorResponseBody.h>
#include <string>

#include <huaweicloud/gaussdbforopengauss/v3/model/CollectWdrSnapshotRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/CollectWdrSnapshotRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/CollectWdrSnapshotResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/CreateWdrSnapshotRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/CreateWdrSnapshotResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/CreateWdrSnapshotResponseBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ErrorResponseBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowWdrSnapshotStatusRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowWdrSnapshotStatusResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/SwitchWdrSnapshotRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/SwitchWdrSnapshotResponseBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/SwitchWdrSnapshotStatusRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/SwitchWdrSnapshotStatusResponse.h>
#include <string>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Object.h>
#undef U
#include <boost/optional.hpp>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {

using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Gaussdbforopengauss::V3::Model;

class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT  GaussDBforopenGaussClient : public Client
{
public:

    GaussDBforopenGaussClient();

    virtual ~GaussDBforopenGaussClient();

    static ClientBuilder<GaussDBforopenGaussClient> newBuilder();

    // 新增客户端接入认证配置
    //
    // 新增客户端接入认证配置。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddHbaConfsResponse> addHbaConfs(
        AddHbaConfsRequest &request
    );
    // 添加实例标签。
    //
    // 对指定实例添加用户标签信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddInstanceTagsResponse> addInstanceTags(
        AddInstanceTagsRequest &request
    );
    // 授权数据库帐号
    //
    // 在指定实例的数据库中, 设置帐号的权限。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AllowDbPrivilegesResponse> allowDbPrivileges(
        AllowDbPrivilegesRequest &request
    );
    // 授权数据库角色
    //
    // 在数据库中设置角色的权限。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AllowDbRolePrivilegesResponse> allowDbRolePrivileges(
        AllowDbRolePrivilegesRequest &request
    );
    // 绑定/解绑弹性公网IP
    //
    // 实例下的节点绑定弹性公网IP/解绑弹性公网IP
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AttachEipResponse> attachEip(
        AttachEipRequest &request
    );
    // 授权备份文件下载
    //
    // 授权租户使用OBS Browser+方式下载备份文件，支持实例级、表级的全量备份及差量备份。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AuthorizeBackupDownloadResponse> authorizeBackupDownload(
        AuthorizeBackupDownloadRequest &request
    );
    // 批量设置自动备份策略
    //
    // 批量设置自动备份策略。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchSetBackupPolicyResponse> batchSetBackupPolicy(
        BatchSetBackupPolicyRequest &request
    );
    // 查询批量实例可升级的版本和升级类型
    //
    // 查询批量实例可升级的版本和升级类型。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchShowUpgradeCandidateVersionsResponse> batchShowUpgradeCandidateVersions(
        BatchShowUpgradeCandidateVersionsRequest &request
    );
    // 取消定时任务
    //
    // 取消定时任务
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CancelScheduleTaskResponse> cancelScheduleTask(
        CancelScheduleTaskRequest &request
    );
    // 备份恢复到目标实例数据后执行数据确认
    //
    // 确认备份恢复到目标实例的数据正常。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ConfirmRestoredDataResponse> confirmRestoredData(
        ConfirmRestoredDataRequest &request
    );
    // 复制参数模板
    //
    // 复制参数模板。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CopyConfigurationResponse> copyConfiguration(
        CopyConfigurationRequest &request
    );
    // 创建参数模板
    //
    // 创建参数模板。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateConfigurationTemplateResponse> createConfigurationTemplate(
        CreateConfigurationTemplateRequest &request
    );
    // 搭建容灾关系
    //
    // 搭建容灾关系（从主实例端下发）。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateCrossCloudConstructDisasterResponse> createCrossCloudConstructDisaster(
        CreateCrossCloudConstructDisasterRequest &request
    );
    // 创建数据库
    //
    // 在指定实例中创建数据库。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateDatabaseResponse> createDatabase(
        CreateDatabaseRequest &request
    );
    // 创建数据库实例
    //
    // 创建数据库实例
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateDatabaseInstanceResponse> createDatabaseInstance(
        CreateDatabaseInstanceRequest &request
    );
    // 创建数据库SCHEMA
    //
    // 在指定实例的数据库中, 创建数据库schema。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateDatabaseSchemasResponse> createDatabaseSchemas(
        CreateDatabaseSchemasRequest &request
    );
    // 创建数据库实例
    //
    // 创建数据库实例
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateDbInstanceResponse> createDbInstance(
        CreateDbInstanceRequest &request
    );
    // 创建数据库角色
    //
    // 创建数据库角色。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateDbRoleResponse> createDbRole(
        CreateDbRoleRequest &request
    );
    // 创建数据库用户
    //
    // 在指定实例中创建数据库用户。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateDbUserResponse> createDbUser(
        CreateDbUserRequest &request
    );
    // 创建数据库实例
    //
    // 创建数据库实例，仅支持IAM5的新平面认证方式（AK/SK认证方式）。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateGaussDbInstanceResponse> createGaussDbInstance(
        CreateGaussDbInstanceRequest &request
    );
    // 创建数据库实例
    //
    // 创建数据库企业版和集中式实例
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateInstanceResponse> createInstance(
        CreateInstanceRequest &request
    );
    // 创建手动备份
    //
    // 创建手动备份。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateManualBackupResponse> createManualBackup(
        CreateManualBackupRequest &request
    );
    // 创建只读节点
    //
    // 创建只读节点。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateReadonlyNodesResponse> createReadonlyNodes(
        CreateReadonlyNodesRequest &request
    );
    // 恢复到新实例
    //
    // 根据备份恢复新实例。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateRestoreInstanceResponse> createRestoreInstance(
        CreateRestoreInstanceRequest &request
    );
    // 批量实例内核版本定时升级
    //
    // 批量实例内核版本定时升级
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateScheduleTaskResponse> createScheduleTask(
        CreateScheduleTaskRequest &request
    );
    // 创建慢日志下载信息
    //
    // 创建慢日志下载信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateSlowLogDownloadResponse> createSlowLogDownload(
        CreateSlowLogDownloadRequest &request
    );
    // 删除参数模板
    //
    // 删除参数模板。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteConfigurationResponse> deleteConfiguration(
        DeleteConfigurationRequest &request
    );
    // 删除数据库
    //
    // 删除指定实例的数据库。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteDatabaseResponse> deleteDatabase(
        DeleteDatabaseRequest &request
    );
    // 删除数据库SCHEMA
    //
    // 删除数据库schema。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteDatabaseSchemaResponse> deleteDatabaseSchema(
        DeleteDatabaseSchemaRequest &request
    );
    // 删除容灾记录
    //
    // 删除容灾记录。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteDisasterRecordResponse> deleteDisasterRecord(
        DeleteDisasterRecordRequest &request
    );
    // 删除客户端接入认证配置
    //
    // 删除客户端接入认证配置。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteHbaConfsResponse> deleteHbaConfs(
        DeleteHbaConfsRequest &request
    );
    // 删除实例
    //
    // 删除数据库实例。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteInstanceResponse> deleteInstance(
        DeleteInstanceRequest &request
    );
    // 删除实例标签
    //
    // 删除实例标签
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteInstanceTagResponse> deleteInstanceTag(
        DeleteInstanceTagRequest &request
    );
    // 删除任务记录
    //
    // 删除任务记录。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteJobResponse> deleteJob(
        DeleteJobRequest &request
    );
    // 删除手动备份
    //
    // 删除手动备份。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteManualBackupResponse> deleteManualBackup(
        DeleteManualBackupRequest &request
    );
    // 删除只读节点
    //
    // 删除只读节点。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteReadonlyNodesResponse> deleteReadonlyNodes(
        DeleteReadonlyNodesRequest &request
    );
    // 删除定时任务信息
    //
    // 删除定时任务信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteScheduleTaskResponse> deleteScheduleTask(
        DeleteScheduleTaskRequest &request
    );
    // 分片缩容
    //
    // 数据库分片缩容。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteShardingResponse> deleteSharding(
        DeleteShardingRequest &request
    );
    // 获取备份下载链接
    //
    // 获取备份下载链接。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DownloadBackupResponse> downloadBackup(
        DownloadBackupRequest &request
    );
    // 主实例结束容灾日志保持
    //
    // 结束stream流式容灾的日志保持功能，目前只有stream流容灾支持。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ExecuteCrossCloudDisasterDataCacheEndResponse> executeCrossCloudDisasterDataCacheEnd(
        ExecuteCrossCloudDisasterDataCacheEndRequest &request
    );
    // 开始日志保持
    //
    // 主实例开始容灾日志保持，目前只有stream流容灾支持。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ExecuteCrossCloudDisasterDataCacheStartResponse> executeCrossCloudDisasterDataCacheStart(
        ExecuteCrossCloudDisasterDataCacheStartRequest &request
    );
    // 结束容灾演练
    //
    // 灾备实例结束容灾演练，目前只有stream流容灾支持。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ExecuteCrossCloudDisasterEndSimulationResponse> executeCrossCloudDisasterEndSimulation(
        ExecuteCrossCloudDisasterEndSimulationRequest &request
    );
    // 备实例容灾升主
    //
    // 容灾升主failover（灾备实例端下发）。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ExecuteCrossCloudDisasterRecoveryFailoverResponse> executeCrossCloudDisasterRecoveryFailover(
        ExecuteCrossCloudDisasterRecoveryFailoverRequest &request
    );
    // 重建容灾关系
    //
    // 流容灾备升主选择支持容灾回切，实现容灾关系的重建任务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ExecuteCrossCloudDisasterRestoreResponse> executeCrossCloudDisasterRestore(
        ExecuteCrossCloudDisasterRestoreRequest &request
    );
    // 开始容灾演练
    //
    // 开始容灾演练，目前只有stream流容灾支持。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ExecuteCrossCloudDisasterStartSimulationResponse> executeCrossCloudDisasterStartSimulation(
        ExecuteCrossCloudDisasterStartSimulationRequest &request
    );
    // 灾备实例主从切换
    //
    // 容灾switchover（可在主备任一一端下发）。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ExecuteCrossCloudDisasterSwitchoverResponse> executeCrossCloudDisasterSwitchover(
        ExecuteCrossCloudDisasterSwitchoverRequest &request
    );
    // 解除容灾关系
    //
    // 解除容灾（从容灾主集群下发）。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ExecuteCrossCloudReleaseDisasterResponse> executeCrossCloudReleaseDisaster(
        ExecuteCrossCloudReleaseDisasterRequest &request
    );
    // 导出表信息
    //
    // 导出表信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ExportSlowSqlResponse> exportSlowSql(
        ExportSlowSqlRequest &request
    );
    // 安装插件
    //
    // 安装插件
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<InstallKernelPluginResponse> installKernelPlugin(
        InstallKernelPluginRequest &request
    );
    // 查询可应用实例列表
    //
    // 查询可应用当前参数组模板的实例列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListApplicableInstancesResponse> listApplicableInstances(
        ListApplicableInstancesRequest &request
    );
    // 查询参数模板的应用记录
    //
    // 查询参数模板的应用记录，以实例级别为维度。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAppliedHistoriesResponse> listAppliedHistories(
        ListAppliedHistoriesRequest &request
    );
    // 查询实例可变更规格
    //
    // 查询实例可变更规格列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAvailableFlavorsResponse> listAvailableFlavors(
        ListAvailableFlavorsRequest &request
    );
    // 查询备份列表
    //
    // 获取备份列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListBackupsResponse> listBackups(
        ListBackupsRequest &request
    );
    // 查询备份列表
    //
    // 获取备份列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListBackupsDetailsResponse> listBackupsDetails(
        ListBackupsDetailsRequest &request
    );
    // 查询实例已绑定EIP列表
    //
    // 查询实例已绑定EIP列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListBindedEipsResponse> listBindedEips(
        ListBindedEipsRequest &request
    );
    // 查询协调节点列表
    //
    // 查询协调节点列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListCnInfosBeforeReduceResponse> listCnInfosBeforeReduce(
        ListCnInfosBeforeReduceRequest &request
    );
    // 查询实例的组件列表
    //
    // 查询实例的组件列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListComponentInfosResponse> listComponentInfos(
        ListComponentInfosRequest &request
    );
    // 获取参数模板列表
    //
    // 获取参数模板列表，包括所有数据库的默认参数模板和用户创建的参数模板。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListConfigurationsResponse> listConfigurations(
        ListConfigurationsRequest &request
    );
    // 比较两个参数组模板之间的差异
    //
    // 获取两个参数配置模板的差异列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListConfigurationsDiffResponse> listConfigurationsDiff(
        ListConfigurationsDiffRequest &request
    );
    // 查询数据库实例列表/查询实例详情
    //
    // 查询数据库实例列表/查询实例详情
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDatabaseInstancesResponse> listDatabaseInstances(
        ListDatabaseInstancesRequest &request
    );
    // 查询数据库角色列表
    //
    // 查询数据库角色列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDatabaseRolesResponse> listDatabaseRoles(
        ListDatabaseRolesRequest &request
    );
    // 查询数据库表列表
    //
    // 查询指定实例的数据库表列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDatabaseSchemaTablesResponse> listDatabaseSchemaTables(
        ListDatabaseSchemaTablesRequest &request
    );
    // 查询数据库SCHEMA列表
    //
    // 查询指定实例的数据库SCHEMA列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDatabaseSchemasResponse> listDatabaseSchemas(
        ListDatabaseSchemasRequest &request
    );
    // 查询数据库引擎的版本
    //
    // 查询数据库引擎的版本。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDatabaseVersionsResponse> listDatabaseVersions(
        ListDatabaseVersionsRequest &request
    );
    // 查询数据库占用空间大小列表
    //
    // 查询限流任务详情
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDatabaseVolumeResponse> listDatabaseVolume(
        ListDatabaseVolumeRequest &request
    );
    // 查询数据盘空间概况
    //
    // 查询数据盘空间概况。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDatabaseVolumeSummaryResponse> listDatabaseVolumeSummary(
        ListDatabaseVolumeSummaryRequest &request
    );
    // 查询数据库列表
    //
    // 查询指定实例中的数据库列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDatabasesResponse> listDatabases(
        ListDatabasesRequest &request
    );
    // 查询数据库引擎的版本
    //
    // 查询指定数据库引擎对应的版本信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDatastoresResponse> listDatastores(
        ListDatastoresRequest &request
    );
    // 查询引擎列表
    //
    // 查询引擎列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDatastoresDetailsResponse> listDatastoresDetails(
        ListDatastoresDetailsRequest &request
    );
    // 查询备份列表
    //
    // 获取备份列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDbBackupsResponse> listDbBackups(
        ListDbBackupsRequest &request
    );
    // 查询数据库规格
    //
    // 查询数据库的规格信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDbFlavorsResponse> listDbFlavors(
        ListDbFlavorsRequest &request
    );
    // 查询数据库用户列表
    //
    // 在指定实例中查询数据库用户列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDbUsersResponse> listDbUsers(
        ListDbUsersRequest &request
    );
    // 查询操作记录
    //
    // 查询容灾操作记录。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDisasterRecoveryRecordResponse> listDisasterRecoveryRecord(
        ListDisasterRecoveryRecordRequest &request
    );
    // 查询企业项目列表
    //
    // 查询企业项目列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListEnterpriseProjectsResponse> listEnterpriseProjects(
        ListEnterpriseProjectsRequest &request
    );
    // 查询企业项目配额组
    //
    // 查询企业项目配额组信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListEpsQuotasResponse> listEpsQuotas(
        ListEpsQuotasRequest &request
    );
    // 查询实例特性列表
    //
    // 查询当前实例高级特性列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListFeaturesResponse> listFeatures(
        ListFeaturesRequest &request
    );
    // 查询数据库规格
    //
    // 查询数据库的规格信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListFlavorsResponse> listFlavors(
        ListFlavorsRequest &request
    );
    // 查询数据库规格
    //
    // 查询数据库的规格信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListFlavorsDetailsResponse> listFlavorsDetails(
        ListFlavorsDetailsRequest &request
    );
    // 查询引擎列表
    //
    // 查询引擎列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListGaussDbDatastoresResponse> listGaussDbDatastores(
        ListGaussDbDatastoresRequest &request
    );
    // 查询客户端接入认证配置修改历史
    //
    // 查询实例的客户端接入认证配置修改历史。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListHbaInfoHistoryResponse> listHbaInfoHistory(
        ListHbaInfoHistoryRequest &request
    );
    // 查询客户端接入认证配置
    //
    // 查询客户端接入认证配置。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListHbaInfosResponse> listHbaInfos(
        ListHbaInfosRequest &request
    );
    // 查询参数模板的修改历史
    //
    // 查询参数模板的修改历史记录。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListHistoryOperationsResponse> listHistoryOperations(
        ListHistoryOperationsRequest &request
    );
    // 查询数据库实例列表/查询实例详情
    //
    // 查询数据库实例列表/查询实例详情
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListInstanceDetailsResponse> listInstanceDetails(
        ListInstanceDetailsRequest &request
    );
    // 查看实例引擎版本分布
    //
    // 查看实例引擎版本分布
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListInstanceEngineDetailResponse> listInstanceEngineDetail(
        ListInstanceEngineDetailRequest &request
    );
    // 查询错误日志下载链接
    //
    // 查询数据库错误日志下载链接。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListInstanceErrorLogsResponse> listInstanceErrorLogs(
        ListInstanceErrorLogsRequest &request
    );
    // 查询实例标签
    //
    // 查询指定实例的用户标签信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListInstanceTagsResponse> listInstanceTags(
        ListInstanceTagsRequest &request
    );
    // 查询数据库实例列表/查询实例详情
    //
    // 查询数据库实例列表/查询实例详情
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListInstancesResponse> listInstances(
        ListInstancesRequest &request
    );
    // 查询数据库实例列表/查询实例详情
    //
    // 查询数据库实例列表/查询实例详情
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListInstancesDetailsResponse> listInstancesDetails(
        ListInstancesDetailsRequest &request
    );
    // 查询实例已安装的插件列表
    //
    // 查询实例已安装的插件列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListKernelPluginsResponse> listKernelPlugins(
        ListKernelPluginsRequest &request
    );
    // 查询关键视图下发节点信息
    //
    // 查询该实例下可用于执行会话查杀功能的节点 (非日志类型的CN或DN节点) 和其所包含的CN、DN组件信息。该接口是会话查杀功能的前提，其返回值中的每一对节点和组件ID是后续查杀会话接口的入参。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListKeyViewExecuteNodeResponse> listKeyViewExecuteNode(
        ListKeyViewExecuteNodeRequest &request
    );
    // 查询KMS秘钥列表
    //
    // 查询当前可使用的kms秘钥列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListKmsTdeKeyResponse> listKmsTdeKey(
        ListKmsTdeKeyRequest &request
    );
    // 查询实例列表指标
    //
    // 查询实例列表指标。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListMetricDatasResponse> listMetricDatas(
        ListMetricDatasRequest &request
    );
    // 获取参数模板列表
    //
    // 获取参数模板列表，包括所有数据库的默认参数模板和用户创建的参数模板。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListParamGroupTemplatesResponse> listParamGroupTemplates(
        ListParamGroupTemplatesRequest &request
    );
    // 获取参数模板列表
    //
    // 获取参数模板列表，包括所有数据库的默认参数模板和用户创建的参数模板。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListParameterGroupTemplatesResponse> listParameterGroupTemplates(
        ListParameterGroupTemplatesRequest &request
    );
    // 查询实例插件拓展信息
    //
    // 查询实例插件拓展信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListPluginExtensionsResponse> listPluginExtensions(
        ListPluginExtensionsRequest &request
    );
    // 查询插件列表
    //
    // 查询插件列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListPluginInfoListResponse> listPluginInfoList(
        ListPluginInfoListRequest &request
    );
    // 查询预定义标签
    //
    // 查询预预定义标签。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListPredefinedTagsResponse> listPredefinedTags(
        ListPredefinedTagsRequest &request
    );
    // 查询项目标签
    //
    // 查询项目下所有用户标签信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListProjectTagsResponse> listProjectTags(
        ListProjectTagsRequest &request
    );
    // 查询只读节点信息
    //
    // 查询实例的只读节点列表，以及实例可支持的最大只读节点数。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListReadonlyNodesResponse> listReadonlyNodes(
        ListReadonlyNodesRequest &request
    );
    // 查询实时会话
    //
    // 查询数据库实例节点的实时会话列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListRealTimeSessionsResponse> listRealTimeSessions(
        ListRealTimeSessionsRequest &request
    );
    // 查询回收站所有引擎实例列表。
    //
    // 查询回收站所有引擎实例列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListRecycleInstancesResponse> listRecycleInstances(
        ListRecycleInstancesRequest &request
    );
    // 查询回收站所有引擎实例列表。
    //
    // 查询回收站所有引擎实例列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListRecycleInstancesDetailsResponse> listRecycleInstancesDetails(
        ListRecycleInstancesDetailsRequest &request
    );
    // 查询可用于备份恢复的实例列表
    //
    // 查询可用于备份恢复的实例列表，实例信息要符合备份条件。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListRestorableInstancesResponse> listRestorableInstances(
        ListRestorableInstancesRequest &request
    );
    // 查询可用于备份恢复的实例列表
    //
    // 查询可用于备份恢复的实例列表，实例信息要符合备份条件。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListRestorableInstancesDetailsResponse> listRestorableInstancesDetails(
        ListRestorableInstancesDetailsRequest &request
    );
    // 查询可恢复时间段
    //
    // 查询可恢复时间段。
    // 如果您备份策略中的保存天数设置较长，建议您传入查询日期“date”。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListRestoreTimesResponse> listRestoreTimes(
        ListRestoreTimesRequest &request
    );
    // 查看定时任务列表
    //
    // 查看定时任务列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListScheduleTaskResponse> listScheduleTask(
        ListScheduleTaskRequest &request
    );
    // 识别SQL文本中的表信息
    //
    // 识别SQL文本中的表信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListSchemaAndTableResponse> listSchemaAndTable(
        ListSchemaAndTableRequest &request
    );
    // 查询实时会话统计
    //
    // 查询数据库实例节点的实时会话统计信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListSessionStatisticsResponse> listSessionStatistics(
        ListSessionStatisticsRequest &request
    );
    // 查询数据库磁盘类型
    //
    // 查询指定数据库引擎对应的磁盘类型。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListStorageTypesResponse> listStorageTypes(
        ListStorageTypesRequest &request
    );
    // 查询支持的插件列表
    //
    // 查询支持的插件列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListSupportKernelPluginsResponse> listSupportKernelPlugins(
        ListSupportKernelPluginsRequest &request
    );
    // 查询表定义信息
    //
    // 查询表定义信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListTableDefinitionResponse> listTableDefinition(
        ListTableDefinitionRequest &request
    );
    // 查询指定表的表定义信息列表
    //
    // 查询指定表的表定义信息列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListTableDefinitionsResponse> listTableDefinitions(
        ListTableDefinitionsRequest &request
    );
    // 查询任务列表
    //
    // 获取任务中心的任务列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListTasksResponse> listTasks(
        ListTasksRequest &request
    );
    // 查询事务列表
    //
    // 查询数据库实例节点的实时事务列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListTransactionResponse> listTransaction(
        ListTransactionRequest &request
    );
    // 查询等待事件列表
    //
    // 查询数据库实例节点的等待事件列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListWaitEventResponse> listWaitEvent(
        ListWaitEventRequest &request
    );
    // 修改磁盘自动扩容策略
    //
    // 修改磁盘自动扩容策略。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ModifyAutoEnlargePolicyResponse> modifyAutoEnlargePolicy(
        ModifyAutoEnlargePolicyRequest &request
    );
    // 修改企业项目配额
    //
    // 修改企业项目配额。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ModifyEpsQuotaResponse> modifyEpsQuota(
        ModifyEpsQuotaRequest &request
    );
    // 修改客户端接入认证配置
    //
    // 修改客户端接入认证配置。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ModifyHbaConfResponse> modifyHbaConf(
        ModifyHbaConfRequest &request
    );
    // 修改指定实例端口号
    //
    // 修改指定实例端口号。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ModifyInstancePortResponse> modifyInstancePort(
        ModifyInstancePortRequest &request
    );
    // 重置参数模板
    //
    // 重置参数模板。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ResetConfigurationResponse> resetConfiguration(
        ResetConfigurationRequest &request
    );
    // 重置容灾配置
    //
    // 重置容灾网络等配置。1.将自动“创建委托”以授权DBS云服务访问VPC资源信息、查询IAAS接口。2.重置实例容灾网络等配置。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ResetDrConfigResponse> resetDrConfig(
        ResetDrConfigRequest &request
    );
    // 重置数据库密码。
    //
    // 重置数据库密码。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ResetPwdResponse> resetPwd(
        ResetPwdRequest &request
    );
    // GaussDB数据库实例规格变更
    //
    // GaussDB数据库实例规格变更
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ResizeInstanceFlavorResponse> resizeInstanceFlavor(
        ResizeInstanceFlavorRequest &request
    );
    // 重启数据库实例
    //
    // 重启数据库实例。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RestartInstanceResponse> restartInstance(
        RestartInstanceRequest &request
    );
    // 恢复客户端接入认证配置信息
    //
    // 恢复客户端接入认证配置信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RestoreHbaInfoResponse> restoreHbaInfo(
        RestoreHbaInfoRequest &request
    );
    // 备份恢复到当前实例
    //
    // 备份恢复到当前实例
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RestoreInstanceResponse> restoreInstance(
        RestoreInstanceRequest &request
    );
    // 配置插件拓展能力
    //
    // 配置插件拓展能力
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ResumePluginExtensionsResponse> resumePluginExtensions(
        ResumePluginExtensionsRequest &request
    );
    // CN横向扩容/DN分片扩容/磁盘扩容
    //
    // CN横向扩容/DN分片扩容/磁盘扩容
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RunInstanceActionResponse> runInstanceAction(
        RunInstanceActionRequest &request
    );
    // 查询磁盘自动扩容策略
    //
    // 查询磁盘自动扩容策略。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SearchAutoEnlargePolicyResponse> searchAutoEnlargePolicy(
        SearchAutoEnlargePolicyRequest &request
    );
    // 设置自动备份策略。
    //
    // 设置自动备份策略。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SetBackupPolicyResponse> setBackupPolicy(
        SetBackupPolicyRequest &request
    );
    // 重置数据库帐号密码
    //
    // 重置指定数据库帐号的密码。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SetDbUserPwdResponse> setDbUserPwd(
        SetDbUserPwdRequest &request
    );
    // 配置插件license
    //
    // 配置插件license
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SetKernelPluginLicenseResponse> setKernelPluginLicense(
        SetKernelPluginLicenseRequest &request
    );
    // 设置自动备份策略
    //
    // 设置自动备份策略
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SetNewBackupPolicyResponse> setNewBackupPolicy(
        SetNewBackupPolicyRequest &request
    );
    // 设置回收站策略
    //
    // 设置回收站策略。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SetRecyclePolicyResponse> setRecyclePolicy(
        SetRecyclePolicyRequest &request
    );
    // 获取告警记录历史
    //
    // 获取告警记录历史。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAlarmHistoryRecordResponse> showAlarmHistoryRecord(
        ShowAlarmHistoryRecordRequest &request
    );
    // 实例告警信息汇总统计
    //
    // 实例告警信息汇总统计。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAlarmStatisticsResponse> showAlarmStatistics(
        ShowAlarmStatisticsRequest &request
    );
    // 获取自动中止事务配置
    //
    // 获取实例自动中止事务配置。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAutoKillTransactionConfigResponse> showAutoKillTransactionConfig(
        ShowAutoKillTransactionConfigRequest &request
    );
    // 查询自动备份策略
    //
    // 查询自动备份策略。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowBackupPolicyResponse> showBackupPolicy(
        ShowBackupPolicyRequest &request
    );
    // 查询实例主备平衡状态
    //
    // 查询实例是否发生过主备切换而导致主机负载不均衡。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowBalanceStatusResponse> showBalanceStatus(
        ShowBalanceStatusRequest &request
    );
    // 查询批量实例可升级的版本和升级类型。
    //
    // 查询批量实例可升级的版本和升级类型。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowBatchUpgradeCandidateVersionsResponse> showBatchUpgradeCandidateVersions(
        ShowBatchUpgradeCandidateVersionsRequest &request
    );
    // 查询参数模板详情
    //
    // 根据参数模板ID获取指定参数模板详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowConfigurationDetailResponse> showConfigurationDetail(
        ShowConfigurationDetailRequest &request
    );
    // 查询实例容灾监控实时状态
    //
    // 查询实例容灾监控实时状态。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowCrossCloudDisasterInstanceMonitorResponse> showCrossCloudDisasterInstanceMonitor(
        ShowCrossCloudDisasterInstanceMonitorRequest &request
    );
    // 查询容灾关系列表
    //
    // 查询容灾关系列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowCrossCloudDisasterRelationsResponse> showCrossCloudDisasterRelations(
        ShowCrossCloudDisasterRelationsRequest &request
    );
    // 查询解决方案模板配置
    //
    // 根据解决方案模板名称或实例ID查询副本数、分片数、节点数
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDeploymentFormResponse> showDeploymentForm(
        ShowDeploymentFormRequest &request
    );
    // 获取企业项目剩余配额
    //
    // 获取企业项目剩余配额。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowEpsRemainingQuotaResponse> showEpsRemainingQuota(
        ShowEpsRemainingQuotaRequest &request
    );
    // 查询错误日志采集开关状态
    //
    // 查询数据库错误日志采集的开关状态。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowErrorLogSwitchStatusResponse> showErrorLogSwitchStatus(
        ShowErrorLogSwitchStatusRequest &request
    );
    // 查询扩容优化参数设置模板
    //
    // 查询扩容优化参数设置模板。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowExpansionParametersResponse> showExpansionParameters(
        ShowExpansionParametersRequest &request
    );
    // 获取指定实例的参数模板
    //
    // 获取指定实例的参数模板。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowInstanceConfigurationResponse> showInstanceConfiguration(
        ShowInstanceConfigurationRequest &request
    );
    // 查询实例存储空间使用信息
    //
    // 查询指定实例的存储使用空间和最大空间。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowInstanceDiskResponse> showInstanceDisk(
        ShowInstanceDiskRequest &request
    );
    // 查询实例指标数据
    //
    // 查询实例指标数据。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowInstanceMetricDataResponse> showInstanceMetricData(
        ShowInstanceMetricDataRequest &request
    );
    // 获取指定实例的参数模板
    //
    // 获取指定实例的参数模板。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowInstanceParamGroupResponse> showInstanceParamGroup(
        ShowInstanceParamGroupRequest &request
    );
    // 获取指定实例的参数模板
    //
    // 获取指定实例的参数模板。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowInstanceParamGroupDetailResponse> showInstanceParamGroupDetail(
        ShowInstanceParamGroupDetailRequest &request
    );
    // 根据时间点或者备份文件查询原实例信息
    //
    // 根据时间点或者备份文件查询原实例信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowInstanceSnapshotResponse> showInstanceSnapshot(
        ShowInstanceSnapshotRequest &request
    );
    // 实例状态统计
    //
    // 实例状态统计。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowInstancesStatisticsResponse> showInstancesStatistics(
        ShowInstancesStatisticsRequest &request
    );
    // 获取指定ID的任务信息。
    //
    // 获取指定ID的任务信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowJobDetailResponse> showJobDetail(
        ShowJobDetailRequest &request
    );
    // 查询KMS秘钥详情
    //
    // 查询KMS秘钥详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowKmsKeyDetailResponse> showKmsKeyDetail(
        ShowKmsKeyDetailRequest &request
    );
    // 查询指标分组的指标名称
    //
    // 查询指标分组的指标名称。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowMetricNamesResponse> showMetricNames(
        ShowMetricNamesRequest &request
    );
    // 查询参数模板详情
    //
    // 根据参数模板ID获取指定参数模板详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowParameterGroupDetailResponse> showParameterGroupDetail(
        ShowParameterGroupDetailRequest &request
    );
    // 查询租户的实例配额
    //
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowProjectQuotasResponse> showProjectQuotas(
        ShowProjectQuotasRequest &request
    );
    // 查看回收站策略
    //
    // 查看回收站的回收策略。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowRecyclePolicyResponse> showRecyclePolicy(
        ShowRecyclePolicyRequest &request
    );
    // 查询重分布参数设置模板
    //
    // 查询重分布参数设置模板。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowRedistributionParametersResponse> showRedistributionParameters(
        ShowRedistributionParametersRequest &request
    );
    // 查询实时会话概览
    //
    // 查询数据库实例节点的实时会话概览信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowSessionOverviewResponse> showSessionOverview(
        ShowSessionOverviewRequest &request
    );
    // 获取分片的磁盘使用信息
    //
    // 获取分片的磁盘使用信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowShardDiskMessagesResponse> showShardDiskMessages(
        ShowShardDiskMessagesRequest &request
    );
    // 查询慢日志下载信息
    //
    // 查询慢日志下载信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowSlowLogDownloadResponse> showSlowLogDownload(
        ShowSlowLogDownloadRequest &request
    );
    // 查询SQL执行计划信息
    //
    // 查询等待事件的SQL执行计划信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowSlowSqlPlanResponse> showSlowSqlPlan(
        ShowSlowSqlPlanRequest &request
    );
    // 查询SQL堆栈信息
    //
    // 查询等待事件的SQL堆栈信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowSlowSqlStackResponse> showSlowSqlStack(
        ShowSlowSqlStackRequest &request
    );
    // 根据时间点或者备份文件查询原实例信息
    //
    // 根据时间点或者备份文件查询原实例信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowSourceInstanceDetailResponse> showSourceInstanceDetail(
        ShowSourceInstanceDetailRequest &request
    );
    // 查询实例SSL证书下载地址
    //
    // 查询实例SSL证书下载地址。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowSslCertDownloadLinkResponse> showSslCertDownloadLink(
        ShowSslCertDownloadLinkRequest &request
    );
    // 查询实例可升级版本
    //
    // 查询实例可升级版本。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowUpgradeCandidateVersionsResponse> showUpgradeCandidateVersions(
        ShowUpgradeCandidateVersionsRequest &request
    );
    // 查询实例可升级版本
    //
    // 查询实例可升级版本。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowUpgradeCandidateVersionsDetailsResponse> showUpgradeCandidateVersionsDetails(
        ShowUpgradeCandidateVersionsDetailsRequest &request
    );
    // 协调节点缩容
    //
    // 协调节点缩容。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShrinkCnResponse> shrinkCn(
        ShrinkCnRequest &request
    );
    // 启动实例/节点
    //
    // 启动实例/节点。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<StartInstanceResponse> startInstance(
        StartInstanceRequest &request
    );
    // 开启M兼容端口服务
    //
    // 开启指定实例的M兼容端口。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<StartMysqlCompatibilityResponse> startMysqlCompatibility(
        StartMysqlCompatibilityRequest &request
    );
    // 停止备份
    //
    // 停止进行中的备份，包括全备和差备。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<StopBackupResponse> stopBackup(
        StopBackupRequest &request
    );
    // 结束空闲会话
    //
    // 结束空闲会话。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<StopFreeSessionResponse> stopFreeSession(
        StopFreeSessionRequest &request
    );
    // 停止实例/节点
    //
    // 停止数据库，同时支持节点级别的停止操作。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<StopInstanceResponse> stopInstance(
        StopInstanceRequest &request
    );
    // 结束会话
    //
    // 查杀指定会话列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<StopSessionResponse> stopSession(
        StopSessionRequest &request
    );
    // 手动结束事务
    //
    // 手动结束事务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<StopTransactionResponse> stopTransaction(
        StopTransactionRequest &request
    );
    // 应用参数模板
    //
    // 指定实例变更参数模板。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SwitchConfigurationResponse> switchConfiguration(
        SwitchConfigurationRequest &request
    );
    // 开启透明加密
    //
    // 开启透明加密。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SwitchKmsTdeResponse> switchKmsTde(
        SwitchKmsTdeRequest &request
    );
    // 分布式实例一主一备一日志形态切换到一主两备形态
    //
    // 当前只支持分布式独立部署一主一备一日志切换至一主两备形态。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SwitchReplicaResponse> switchReplica(
        SwitchReplicaRequest &request
    );
    // 分片节点主备切换。
    //
    // 支持用户对单个或多个DN分片做主备切换，同一分组内只能指定一个新的备节点进行升主操作。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SwitchShardResponse> switchShard(
        SwitchShardRequest &request
    );
    // 修改扩容优化参数
    //
    // 修改扩容优化参数
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateExpansionParametersResponse> updateExpansionParameters(
        UpdateExpansionParametersRequest &request
    );
    // 开启特性
    //
    // 打开高级特性开关。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateFeaturesResponse> updateFeatures(
        UpdateFeaturesRequest &request
    );
    // 修改指定实例的参数
    //
    // 修改指定实例的参数。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateInstanceConfigurationResponse> updateInstanceConfiguration(
        UpdateInstanceConfigurationRequest &request
    );
    // 修改实例名称
    //
    // 修改实例名称。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateInstanceNameResponse> updateInstanceName(
        UpdateInstanceNameRequest &request
    );
    // 实例内核版本升级
    //
    // GaussDB实例版本升级。包括灰度升级，就地升级，热补丁升级等三种升级方式。 
    // 
    // - 就地升级：
    // 
    //   就地升级需要停止业务进行，会一次性升级集群中所有节点。就地升级需要暂停业务30分钟来升级。 
    // 
    // - 灰度升级： 
    // 
    //   每个主DN或者CN组件升级就有一次10秒业务中断。升级过程均是先管理面，再数据面，由备到主的升级方式。灰度升级支持升级自动提交和升级待观察两种操作方式。
    // 
    //   - 升级自动提交：所有节点进程一起升级，在升级过程中有大概10秒的业务中断，不阻塞其他业务操作。 
    // 
    //   - 升级待观察：升级待观察，将数据库升级过程细分为升级，提交两个阶段。
    // 
    //     - 升级阶段可以根据部署方式细分为按分片或者按AZ的滚动升级。
    // 
    //       - 分布式实例：根据分片数滚动升级。
    //       - 集中式实例：根据AZ数进行滚动升级。 
    //     
    //     - 提交阶段可以对升级完成后的实例进行业务测试，根据需要可以选择提交升级或者升级回退。
    // 
    //       - 提交升级：提交升级。在升级完成，进入提交阶段时。业务测试正常后提交升级，完成本次升级流程。
    // 
    //       - 升级回退：升级回退，在升级完成，进入提交阶段时。可以根据需要回退本次升级，回退到升级前的版本。
    // 
    // - 热补丁升级
    // 
    //   - 升级自动提交：热补丁自动升级并提交，中间无业务中断。
    // 
    //   - 升级回退：热补丁回退，无业务中断时间。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateInstanceVersionsResponse> updateInstanceVersions(
        UpdateInstanceVersionsRequest &request
    );
    // 更新/关闭M兼容端口服务
    //
    // 更新指定实例的M兼容端口服务配置。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateMysqlCompatibilityResponse> updateMysqlCompatibility(
        UpdateMysqlCompatibilityRequest &request
    );
    // 修改重分布参数
    //
    // 修改重分布参数。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateRedistributionControlResponse> updateRedistributionControl(
        UpdateRedistributionControlRequest &request
    );
    // 实例内核版本升级
    //
    // GaussDB(for openGauss)实例版本升级。包括灰度升级，就地升级，热补丁升级等三种升级方式。 
    // 就地升级：
    // 就地升级需要停止业务进行，会一次性升级集群中所有节点。就地升级需要暂停业务30分钟来升级。 
    // 灰度升级： 
    // 升级自动提交：所有节点进程一起升级，在升级过程中有大概10秒的业务中断，不阻塞其他业务操作。 
    // 升级待观察：升级待观察，将数据库升级过程细分为升级，提交两个阶段。升级阶段可以根据部署方式细分为按分片或者按az的滚动升级，提交阶段可以对升级完成后的实例进行业务测试，根据需要可以选择提交升级，或者升级回退。每个主dn或者cn组件升级就有一次10秒业务中断。升级过程均是先管理面，再数据面，由备到主的升级方式。 分布式实例：根据分片数滚动升级，每次滚动升级可以根据选择的分片数进行指定分片数量的节点进行升级。 主备版实例：根据AZ数进行滚动升级，每次滚动升级可以根据选择的AZ进行1个分区或者多个分区进行升级。 
    // 提交升级：提交升级。在升级完成，进入提交阶段时。业务测试正常后提交升级，完成本次升级流程。
    // 升级回退：升级回退，在升级完成，进入提交阶段时。可以根据需要回退本次升级，回退到升级前的版本。
    // 热补丁升级： 
    // 升级自动提交：热补丁自动升级并提交，中间无业务中断，仅修复产品bug。 
    // 升级回退：热补丁回退，无业务中断时间
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpgradeInstanceVersionResponse> upgradeInstanceVersion(
        UpgradeInstanceVersionRequest &request
    );
    // 批量实例内核版本升级
    //
    // GaussDB批量实例版本升级。包括灰度升级，就地升级、热补丁升级三种升级方式。
    // 就地升级：
    // 就地升级需要停止业务进行，会一次性升级集群中所有节点。就地升级需要暂停业务30分钟来升级。
    // 灰度升级：
    // 升级自动提交：所有节点进程一起升级，在升级过程中有大概10秒的业务中断，不阻塞其他业务操作。
    // 升级待观察：升级待观察，将数据库升级过程细分为升级，提交两个阶段。升级阶段可以根据部署方式细分为按分片或者按az的滚动升级，提交阶段可以对升级完成后的实例进行业务测试，根据需要可以选择提交升级，或者升级回退。每个主dn或者cn组件升级就有一次10秒业务中断。升级过程均是先管理面，再数据面，由备到主的升级方式。 分布式实例：根据分片数滚动升级，每次滚动升级可以根据选择的分片数进行指定分片数量的节点进行升级。 主备版实例：根据AZ数进行滚动升级，每次滚动升级可以根据选择的AZ进行1个分区或者多个分区进行升级。
    // 热补丁升级：
    // 升级自动提交：热补丁自动升级并提交，中间无业务中断，仅修复产品bug。
    // 提交升级：提交升级。在升级完成，进入提交阶段时。业务测试正常后提交升级，完成本次升级流程。
    // 升级回退：升级回退，在升级完成，进入提交阶段时。可以根据需要回退本次升级，回退到升级前的版本。
    // 批量实例可升级版本大于当前所有实例的引擎版本，且选择的所有实例，其升级方式和操作方式要保持一致。
    // 若批量实例升级方式是灰度升级，默认升级所有az和分片。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpgradeInstancesVersionResponse> upgradeInstancesVersion(
        UpgradeInstancesVersionRequest &request
    );
    // 校验参数组名称是否存在
    //
    // 校验参数组名称是否存在。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ValidateParaGroupNameResponse> validateParaGroupName(
        ValidateParaGroupNameRequest &request
    );
    // 弱密码校验
    //
    // 校验数据库root用户密码的安全性。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ValidateWeakPasswordResponse> validateWeakPassword(
        ValidateWeakPasswordRequest &request
    );

    // 采集ASP报告
    //
    // 采集ASP报告。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CollectAspResponse> collectAsp(
        CollectAspRequest &request
    );
    // 查询asp采集结果
    //
    // 查询ASP采集结果。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAspInfosResponse> listAspInfos(
        ListAspInfosRequest &request
    );
    // 查询ASP开关状态
    //
    // 查询ASP开关状态。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAspStatusResponse> showAspStatus(
        ShowAspStatusRequest &request
    );
    // 打开或者关闭ASP开关
    //
    // 打开或者关闭ASP开关。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SwitchAspStatusResponse> switchAspStatus(
        SwitchAspStatusRequest &request
    );

    // 关联LTS日志流
    //
    // 关联LTS日志流。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BindLtsConfigResponse> bindLtsConfig(
        BindLtsConfigRequest &request
    );
    // 查看LTS日志配置信息
    //
    // 查看LTS日志配置信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListLtsConfigsResponse> listLtsConfigs(
        ListLtsConfigsRequest &request
    );
    // 解除关联LTS日志流
    //
    // 解除关联LTS日志流。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UnbindLtsConfigResponse> unbindLtsConfig(
        UnbindLtsConfigRequest &request
    );

    // 创建限流任务
    //
    // 根据具体范围和类型，进行限流任务的创建
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateLimitTaskResponse> createLimitTask(
        CreateLimitTaskRequest &request
    );
    // 创建SQL限流任务
    //
    // 根据具体范围和类型，进行限流任务的创建。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateSqlLimitTaskResponse> createSqlLimitTask(
        CreateSqlLimitTaskRequest &request
    );
    // 删除限流任务
    //
    // 根据task_id进行限流任务的删除
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteLimitTaskResponse> deleteLimitTask(
        DeleteLimitTaskRequest &request
    );
    // 删除SQL限流任务
    //
    // 根据task_id进行SQL限流任务的删除
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteSqlLimitTaskResponse> deleteSqlLimitTask(
        DeleteSqlLimitTaskRequest &request
    );
    // 查询实例全量SQL聚合统计列表
    //
    // 查询GaussDB数据库实例全量SQL聚合统计列表，主要统计各唯一SQL ID下的SQL记录总数量以及相关时间指标的平均值。支持增强型条件过滤， 如可以对SQL文本（query字段）进行多条件合并查询，对total_sql_time、sql_count字段进行大于、小于、区间范围等条件的过滤。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListEnhanceFullSqlStatisticsResponse> listEnhanceFullSqlStatistics(
        ListEnhanceFullSqlStatisticsRequest &request
    );
    // 查询全量单条SQL记录列表
    //
    // 查询GaussDB数据库实例全量SQL日志记录列表，支持增强型条件过滤。 如可对SQL文本（query字段）进行多条件合并查询，可对db_time、cpu_time、data_io_time及execution_time字段进行大于、小于、区间范围等条件的过滤
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListEnhanceFullSqlsResponse> listEnhanceFullSqls(
        ListEnhanceFullSqlsRequest &request
    );
    // 查询GaussDB数据库实例全量SQL开关记录列表
    //
    // 查询GaussDB数据库实例全量SQL开关记录列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListFullSqlSwitchesResponse> listFullSqlSwitches(
        ListFullSqlSwitchesRequest &request
    );
    // 根据指定条件查询限流任务列表
    //
    // 根据指定条件查询限流任务列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListLimitTaskResponse> listLimitTask(
        ListLimitTaskRequest &request
    );
    // 查询节点的sql模板列表
    //
    // 查询节点的sql模板列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListNodeLimitSqlModelResponse> listNodeLimitSqlModel(
        ListNodeLimitSqlModelRequest &request
    );
    // 查询慢SQL详情
    //
    // 根据归一化SQLID，查询该SQL模板详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListSlowSqlDetailsResponse> listSlowSqlDetails(
        ListSlowSqlDetailsRequest &request
    );
    // 查询慢SQL列表
    //
    // 查询慢SQL列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListSlowSqlsResponse> listSlowSqls(
        ListSlowSqlsRequest &request
    );
    // 查询慢SQL节点信息
    //
    // 根据实例ID查询慢SQL节点信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListSqlExcuteNodesResponse> listSqlExcuteNodes(
        ListSqlExcuteNodesRequest &request
    );
    // 根据指定条件查询SQL限流任务列表
    //
    // 根据指定条件查询SQL限流任务列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListSqlLimitTaskResponse> listSqlLimitTask(
        ListSqlLimitTaskRequest &request
    );
    // 查询GaussDB数据库实例SQL链路
    //
    // 查询GaussDB数据库实例SQL链路，包含实例上对应组件的链路列表，如dn_6001、dn_6002、cn_5001、cn_5002。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListSqlTraceResponse> listSqlTrace(
        ListSqlTraceRequest &request
    );
    // 查询全局慢SQL详情
    //
    // 根据唯一SQLID，查询指定组件的慢SQL详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowGlobalSlowSqlDetailResponse> showGlobalSlowSqlDetail(
        ShowGlobalSlowSqlDetailRequest &request
    );
    // 查询限流任务详情
    //
    // 查询限流任务详情
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowLimitTaskResponse> showLimitTask(
        ShowLimitTaskRequest &request
    );
    // 查询SQL限流任务详情
    //
    // 查询SQL限流任务详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowSqlLimitTaskResponse> showSqlLimitTask(
        ShowSqlLimitTaskRequest &request
    );
    // 开启GaussDB数据库实例全量SQL功能
    //
    // 开启全量SQL功能。使实例Agent侧开启内核侧全量SQL能力，持续化采集GaussDB数据库实例上的执行SQL语句，定时批量持久化存储于LTS云服务对应日志流中。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<StartFullSqlResponse> startFullSql(
        StartFullSqlRequest &request
    );
    // 关闭全量SQL功能
    //
    // 关闭全量SQL功能。关闭后，实例Agent侧将停止内核侧全量SQL语句记录的实时采集。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<StopFullSqlResponse> stopFullSql(
        StopFullSqlRequest &request
    );
    // 同步内核侧sql限流数据至管控侧
    //
    // 同步内核侧sql限流数据至管控侧
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SyncLimitDataResponse> syncLimitData(
        SyncLimitDataRequest &request
    );
    // 修改限流任务
    //
    // 根据新的条件进行限流任务的更新
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateLimitTaskResponse> updateLimitTask(
        UpdateLimitTaskRequest &request
    );
    // 修改SQL限流任务
    //
    // 根据新的条件进行SQL限流任务的更新。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateSqlLimitTaskResponse> updateSqlLimitTask(
        UpdateSqlLimitTaskRequest &request
    );

    // 查询SQL PATCH
    //
    // 查询SQL PATCH信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowSqlPatchResponse> showSqlPatch(
        ShowSqlPatchRequest &request
    );

    // 查询TopSQL列表
    //
    // 查询TopSQL列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListTopSqlsResponse> listTopSqls(
        ListTopSqlsRequest &request
    );

    // 采集WDR快照报告
    //
    // 采集WDR快照报告。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CollectWdrSnapshotResponse> collectWdrSnapshot(
        CollectWdrSnapshotRequest &request
    );
    // 生成WDR快照
    //
    // 生成WDR快照。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateWdrSnapshotResponse> createWdrSnapshot(
        CreateWdrSnapshotRequest &request
    );
    // 查询WDR快照开关状态
    //
    // 查询WDR快照开关状态。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowWdrSnapshotStatusResponse> showWdrSnapshotStatus(
        ShowWdrSnapshotStatusRequest &request
    );
    // 打开或关闭WDR快照开关
    //
    // 打开或关闭WDR快照开关。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SwitchWdrSnapshotStatusResponse> switchWdrSnapshotStatus(
        SwitchWdrSnapshotStatusRequest &request
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

template class HUAWEICLOUD_GAUSSDBFOROPENGAUSS_V3_EXPORT ::HuaweiCloud::Sdk::Core::ClientBuilder<::HuaweiCloud::Sdk::Gaussdbforopengauss::V3::GaussDBforopenGaussClient>;

#endif // HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_GaussDBforopenGaussClient_H_

