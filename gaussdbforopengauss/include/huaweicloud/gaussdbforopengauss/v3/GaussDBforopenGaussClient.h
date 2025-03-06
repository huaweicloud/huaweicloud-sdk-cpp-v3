#ifndef HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_GaussDBforopenGaussClient_H_
#define HUAWEICLOUD_SDK_GAUSSDBFOROPENGAUSS_V3_GaussDBforopenGaussClient_H_

#include <huaweicloud/gaussdbforopengauss/v3/GaussDBforopenGaussExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


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
#include <huaweicloud/gaussdbforopengauss/v3/model/BackupPolicyErrorResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/BatchShowUpgradeCandidateVersionsRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/BatchShowUpgradeCandidateVersionsResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/BindEIPRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/CancelScheduleTaskRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/CancelScheduleTaskResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ConfirmRestoredDataRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ConfirmRestoredDataResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/CopyConfigurationRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/CopyConfigurationResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/CreateConfigurationTemplateRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/CreateConfigurationTemplateRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/CreateConfigurationTemplateResponse.h>
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
#include <huaweicloud/gaussdbforopengauss/v3/model/DeleteInstanceRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/DeleteInstanceResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/DeleteInstanceTagRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/DeleteInstanceTagResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/DeleteJobRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/DeleteJobResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/DeleteManualBackupRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/DeleteManualBackupResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/DeleteScheduleTaskRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/DeleteScheduleTaskResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/DownloadBackupErrorResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/DownloadBackupRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/DownloadBackupResponse.h>
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
#include <huaweicloud/gaussdbforopengauss/v3/model/ListDatabaseSchemasRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListDatabaseSchemasResponse.h>
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
#include <huaweicloud/gaussdbforopengauss/v3/model/ListParamGroupTemplatesRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListParamGroupTemplatesResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListParameterGroupTemplatesRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListParameterGroupTemplatesResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListPluginExtensionsRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListPluginExtensionsRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListPluginExtensionsResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListPredefinedTagsRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListPredefinedTagsResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListProjectTagsRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListProjectTagsResponse.h>
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
#include <huaweicloud/gaussdbforopengauss/v3/model/ListStorageTypesRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListStorageTypesResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListSupportKernelPluginsRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListSupportKernelPluginsResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListTasksRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListTasksResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListTopIoTrafficsRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListTopIoTrafficsResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ModifyEpsQuotaRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ModifyEpsQuotaRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ModifyEpsQuotaResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/OpenGaussErrorResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/OpenGaussInstanceActionRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/OpenGaussInstanceRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/OpenGaussInstanceRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/OpenGaussModifyInstanceConfigurationRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/OpenGaussResizeRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/OpenGaussUpgradeRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/OpengaussRestoreInstanceRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ParaErrorResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ParaErrorResponseBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ParamGroupCopyRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ParamGroupDiffRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/PluginExtensions.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/PwdResetRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/RecyclePolicyRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ResetConfigurationRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ResetConfigurationResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ResetPwdRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ResetPwdResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ResizeInstanceFlavorRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ResizeInstanceFlavorResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ResourceErrorResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/RestartInstanceRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/RestartInstanceResponse.h>
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
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowBackupPolicyRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowBackupPolicyResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowBalanceStatusRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowBalanceStatusResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowBatchUpgradeCandidateVersionsRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowBatchUpgradeCandidateVersionsResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowConfigurationDetailRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowConfigurationDetailResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowDeploymentFormRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowDeploymentFormResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowErrorLogSwitchStatusRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowErrorLogSwitchStatusResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowInstanceConfigurationRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowInstanceConfigurationResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowInstanceDiskRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowInstanceDiskResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowInstanceParamGroupDetailRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowInstanceParamGroupDetailResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowInstanceParamGroupRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowInstanceParamGroupResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowInstanceSnapshotRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowInstanceSnapshotResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowJobDetailRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowJobDetailResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowParameterGroupDetailRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowParameterGroupDetailResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowProjectQuotasRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowProjectQuotasResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowRecyclePolicyRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowRecyclePolicyResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowSlowLogDownloadRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowSlowLogDownloadResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowSourceInstanceDetailRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowSourceInstanceDetailResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowSslCertDownloadLinkRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowSslCertDownloadLinkResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowUpgradeCandidateVersionsDetailsRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowUpgradeCandidateVersionsDetailsResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowUpgradeCandidateVersionsRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowUpgradeCandidateVersionsResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/StartInstanceRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/StartInstanceRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/StartInstanceResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/StartMySQLCompatibilityRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/StartMysqlCompatibilityRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/StartMysqlCompatibilityResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/StopBackupRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/StopBackupResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/StopInstanceRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/StopInstanceRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/StopInstanceResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/SwitchConfigurationRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/SwitchConfigurationResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/SwitchShardRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/SwitchShardRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/SwitchShardResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/UpdateFeaturesRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/UpdateFeaturesRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/UpdateFeaturesResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/UpdateInstanceConfigurationRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/UpdateInstanceConfigurationResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/UpdateInstanceNameRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/UpdateInstanceNameResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/UpdateMySQLCompatibilityRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/UpdateMysqlCompatibilityRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/UpdateMysqlCompatibilityResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/UpdateNameRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/UpgradeErrorResponseBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/UpgradeInstanceVersionRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/UpgradeInstanceVersionResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/UpgradeInstancesRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/UpgradeInstancesVersionRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/UpgradeInstancesVersionResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ValidateParaGroupNameRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ValidateParaGroupNameResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ValidateWeakPasswordRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ValidateWeakPasswordResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/WeakPasswordRequestBody.h>
#include <string>

#include <huaweicloud/gaussdbforopengauss/v3/model/CreateLimitTaskRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/CreateLimitTaskRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/CreateLimitTaskResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/DeleteLimitTaskRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/DeleteLimitTaskResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ErrorResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListLimitTaskRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListLimitTaskResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListNodeLimitSqlModelRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ListNodeLimitSqlModelResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowLimitTaskRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/ShowLimitTaskResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/SyncLimitDataRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/SyncLimitDataResponse.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/UpdateLimitTaskRequest.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/UpdateLimitTaskRequestBody.h>
#include <huaweicloud/gaussdbforopengauss/v3/model/UpdateLimitTaskResponse.h>
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
    // 查询批量实例可升级的版本和升级类型。
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
    // 删除定时任务信息
    //
    // 删除定时任务信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteScheduleTaskResponse> deleteScheduleTask(
        DeleteScheduleTaskRequest &request
    );
    // 获取备份下载链接
    //
    // 获取备份下载链接。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DownloadBackupResponse> downloadBackup(
        DownloadBackupRequest &request
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
    // 查询协调节点列表
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
    // 查询数据库SCHEMA列表
    //
    // 查询指定实例的数据库SCHEMA列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDatabaseSchemasResponse> listDatabaseSchemas(
        ListDatabaseSchemasRequest &request
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
    // 查询任务列表
    //
    // 获取任务中心的任务列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListTasksResponse> listTasks(
        ListTasksRequest &request
    );
    // 查询Top IO列表
    //
    // 查询实例数据库进程下的Top IO流量数据，返回与会话信息相关联后的结果
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListTopIoTrafficsResponse> listTopIoTraffics(
        ListTopIoTrafficsRequest &request
    );
    // 修改企业项目配额
    //
    // 修改企业项目配额。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ModifyEpsQuotaResponse> modifyEpsQuota(
        ModifyEpsQuotaRequest &request
    );
    // 重置参数模板
    //
    // 重置参数模板。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ResetConfigurationResponse> resetConfiguration(
        ResetConfigurationRequest &request
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
    // 查询磁盘自动扩容策略
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
    // 查询解决方案模板配置
    //
    // 根据解决方案模板名称或实例ID查询副本数、分片数、节点数
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDeploymentFormResponse> showDeploymentForm(
        ShowDeploymentFormRequest &request
    );
    // 查询错误日志采集开关状态
    //
    // 查询数据库错误日志采集的开关状态。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowErrorLogSwitchStatusResponse> showErrorLogSwitchStatus(
        ShowErrorLogSwitchStatusRequest &request
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
    // 获取指定ID的任务信息。
    //
    // 获取指定ID的任务信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowJobDetailResponse> showJobDetail(
        ShowJobDetailRequest &request
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
    // 查询慢日志下载信息
    //
    // 查询慢日志下载信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowSlowLogDownloadResponse> showSlowLogDownload(
        ShowSlowLogDownloadRequest &request
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
    // 启动数据库
    //
    // 启动数据库，同时支持节点级别的启动操作
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
    // 停止数据库
    //
    // 停止数据库,同时支持节点级别的停止操作
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<StopInstanceResponse> stopInstance(
        StopInstanceRequest &request
    );
    // 应用参数模板
    //
    // 指定实例变更参数模板。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SwitchConfigurationResponse> switchConfiguration(
        SwitchConfigurationRequest &request
    );
    // 分片节点主备切换。
    //
    // 支持用户对单个或多个DN分片做主备切换，同一分组内只能指定一个新的备节点进行升主操作。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SwitchShardResponse> switchShard(
        SwitchShardRequest &request
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
    // 更新/关闭M兼容端口服务
    //
    // 更新指定实例的M兼容端口服务配置。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateMysqlCompatibilityResponse> updateMysqlCompatibility(
        UpdateMysqlCompatibilityRequest &request
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

    // 创建限流任务
    //
    // 根据具体范围和类型，进行限流任务的创建
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateLimitTaskResponse> createLimitTask(
        CreateLimitTaskRequest &request
    );
    // 删除限流任务
    //
    // 根据task_id进行限流任务的删除
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteLimitTaskResponse> deleteLimitTask(
        DeleteLimitTaskRequest &request
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
    // 查询限流任务详情
    //
    // 查询限流任务详情
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowLimitTaskResponse> showLimitTask(
        ShowLimitTaskRequest &request
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

