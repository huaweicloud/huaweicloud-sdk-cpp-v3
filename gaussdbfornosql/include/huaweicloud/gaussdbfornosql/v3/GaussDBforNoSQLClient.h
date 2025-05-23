#ifndef HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_GaussDBforNoSQLClient_H_
#define HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_GaussDBforNoSQLClient_H_

#include <huaweicloud/gaussdbfornosql/v3/GaussDBforNoSQLExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


#include <huaweicloud/gaussdbfornosql/v3/model/ActionBody.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ApplyConfigurationRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ApplyConfigurationRequestBody.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ApplyConfigurationResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ApplyConfigurationToInstancesRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ApplyConfigurationToInstancesRequestBody.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ApplyConfigurationToInstancesResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/BatchDeleteManualBackupRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/BatchDeleteManualBackupRequestBody.h>
#include <huaweicloud/gaussdbfornosql/v3/model/BatchDeleteManualBackupResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/BatchTagActionRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/BatchTagActionRequestBody.h>
#include <huaweicloud/gaussdbfornosql/v3/model/BatchTagActionResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/BatchUpgradeDatabaseVersionRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/BatchUpgradeDatabaseVersionRequestBody.h>
#include <huaweicloud/gaussdbfornosql/v3/model/BatchUpgradeDatabaseVersionResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/CancelInstanceScheduleWindowRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/CancelInstanceScheduleWindowResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/CheckDisasterRecoveryOperationRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/CheckDisasterRecoveryOperationResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/CheckWeekPasswordRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/CheckWeekPasswordRequestBody.h>
#include <huaweicloud/gaussdbfornosql/v3/model/CheckWeekPasswordResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ClearInstanceSessionsRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ClearInstanceSessionsResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/CompareConfigurationRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/CompareConfigurationRequestBody.h>
#include <huaweicloud/gaussdbfornosql/v3/model/CompareConfigurationResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ConstructDisasterRecoveryBody.h>
#include <huaweicloud/gaussdbfornosql/v3/model/CopyConfigurationRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/CopyConfigurationRequestBody.h>
#include <huaweicloud/gaussdbfornosql/v3/model/CopyConfigurationResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/CreateBackRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/CreateBackResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/CreateColdVolumeRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/CreateColdVolumeRequestBody.h>
#include <huaweicloud/gaussdbfornosql/v3/model/CreateColdVolumeResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/CreateConfigurationRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/CreateConfigurationRequestBody.h>
#include <huaweicloud/gaussdbfornosql/v3/model/CreateConfigurationResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/CreateDbCacheMappingRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/CreateDbCacheMappingRequestBody.h>
#include <huaweicloud/gaussdbfornosql/v3/model/CreateDbCacheMappingResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/CreateDbCacheRuleRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/CreateDbCacheRuleRequestBody.h>
#include <huaweicloud/gaussdbfornosql/v3/model/CreateDbCacheRuleResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/CreateDbUserRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/CreateDbUserResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/CreateDisasterRecoveryRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/CreateDisasterRecoveryResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/CreateGeminiDbDualActiveRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/CreateGeminiDbDualActiveResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/CreateInstanceRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/CreateInstanceRequestBody.h>
#include <huaweicloud/gaussdbfornosql/v3/model/CreateInstanceResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/DeleteBackupRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/DeleteBackupResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/DeleteConfigurationRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/DeleteConfigurationResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/DeleteDbCacheMappingRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/DeleteDbCacheMappingRequestBody.h>
#include <huaweicloud/gaussdbfornosql/v3/model/DeleteDbCacheMappingResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/DeleteDbCacheRuleRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/DeleteDbCacheRuleRequestBody.h>
#include <huaweicloud/gaussdbfornosql/v3/model/DeleteDbCacheRuleResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/DeleteDbUserRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/DeleteDbUserResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/DeleteDisasterRecoveryRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/DeleteDisasterRecoveryResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/DeleteEnlargeFailNodeRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/DeleteEnlargeFailNodeRequestBody.h>
#include <huaweicloud/gaussdbfornosql/v3/model/DeleteEnlargeFailNodeResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/DeleteGeminiDbDualActiveRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/DeleteGeminiDbDualActiveResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/DeleteInstanceRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/DeleteInstanceResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/DeleteInstancesSessionRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/DeleteInstancesSessionRequestBody.h>
#include <huaweicloud/gaussdbfornosql/v3/model/DeleteInstancesSessionResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/DeleteLtsConfigsRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/DeleteLtsConfigsRequestBody.h>
#include <huaweicloud/gaussdbfornosql/v3/model/DeleteLtsConfigsResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/DeleteRedisDisabledCommandsRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/DeleteRedisDisabledCommandsRequestBody.h>
#include <huaweicloud/gaussdbfornosql/v3/model/DeleteRedisDisabledCommandsResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/DualActiveRequestBody.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ErrorResponseBody.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ExpandInstanceNodeRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ExpandInstanceNodeRequestBody.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ExpandInstanceNodeResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ListAvailableFlavorInfosRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ListAvailableFlavorInfosResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ListCassandraSlowLogsRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ListCassandraSlowLogsRequestBody.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ListCassandraSlowLogsResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ListConfigurationDatastoresRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ListConfigurationDatastoresResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ListConfigurationTemplatesRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ListConfigurationTemplatesResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ListConfigurationsRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ListConfigurationsResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ListDatastoresRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ListDatastoresResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ListDbCacheMappingsRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ListDbCacheMappingsResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ListDbCacheRulesRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ListDbCacheRulesResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ListDbUsersRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ListDbUsersResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ListDedicatedResourcesRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ListDedicatedResourcesResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ListEpsQuotasRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ListEpsQuotasResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ListFlavorInfosRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ListFlavorInfosResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ListFlavorsRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ListFlavorsResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ListInfluxdbSlowLogsRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ListInfluxdbSlowLogsRequestBody.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ListInfluxdbSlowLogsResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ListInstanceDatabasesRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ListInstanceDatabasesResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ListInstanceMaintenanceWindowRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ListInstanceMaintenanceWindowResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ListInstanceSessionsRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ListInstanceSessionsResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ListInstanceTagsRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ListInstanceTagsResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ListInstancesByResourceTagsRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ListInstancesByResourceTagsResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ListInstancesByTagsRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ListInstancesByTagsRequestBody.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ListInstancesByTagsResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ListInstancesRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ListInstancesResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ListInstancesSessionRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ListInstancesSessionResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ListInstancesSessionStatisticsRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ListInstancesSessionStatisticsResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ListJobsRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ListJobsResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ListLtsConfigsRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ListLtsConfigsResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ListMongodbErrorLogsRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ListMongodbErrorLogsRequestBody.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ListMongodbErrorLogsResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ListMongodbSlowLogsRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ListMongodbSlowLogsRequestBody.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ListMongodbSlowLogsResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ListNosqlTaskListRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ListNosqlTaskListResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ListProjectTagsRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ListProjectTagsResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ListRecycleInstancesRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ListRecycleInstancesResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ListRedisPitrRestoreTimeRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ListRedisPitrRestoreTimeResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ListRedisSlowLogsRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ListRedisSlowLogsRequestBody.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ListRedisSlowLogsResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ListRestoreDatabasesRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ListRestoreDatabasesResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ListRestoreTablesRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ListRestoreTablesResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ListRestoreTimeRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ListRestoreTimeResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ListSlowLogsRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ListSlowLogsResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ModifyDbUserPrivilegeRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ModifyDbUserPrivilegeResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ModifyEpsQuotasRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ModifyEpsQuotasResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ModifyInstanceMaintenanceWindowRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ModifyInstanceMaintenanceWindowResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ModifyInstanceOpsWindowV3Req.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ModifyPortRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ModifyPortRequestBody.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ModifyPortResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ModifyPublicIpRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ModifyPublicIpRequestBody.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ModifyPublicIpResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ModifyVolumeRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ModifyVolumeRequestBody.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ModifyVolumeResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/NoSqlCreateBackupRequestBody.h>
#include <huaweicloud/gaussdbfornosql/v3/model/NoSqlModiflyEpsQuotasRequestBody.h>
#include <huaweicloud/gaussdbfornosql/v3/model/OfflineNodesRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/OfflineNodesRequestBody.h>
#include <huaweicloud/gaussdbfornosql/v3/model/OfflineNodesResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/PauseResumeDataSynchronizationRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/PauseResumeDataSynchronizationResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/PrecheckDisasterRecoveryOperationBody.h>
#include <huaweicloud/gaussdbfornosql/v3/model/RecyclePolicyRequestBody.h>
#include <huaweicloud/gaussdbfornosql/v3/model/RedisCreateDbUserRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/RedisDeleteDbUserRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/RedisModifyDBUserPrivilegeRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/RedisResetDbUserPasswordRequestBody.h>
#include <huaweicloud/gaussdbfornosql/v3/model/RenameHighRiskCommandsRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ResetDbUserPasswordRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ResetDbUserPasswordResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ResetParamGroupTemplateRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ResetParamGroupTemplateResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ResetPasswordRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ResetPasswordRequestBody.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ResetPasswordResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ResizeColdVolumeRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ResizeColdVolumeRequestBody.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ResizeColdVolumeResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ResizeInstanceRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ResizeInstanceRequestBody.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ResizeInstanceResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ResizeInstanceVolumeRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ResizeInstanceVolumeRequestBody.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ResizeInstanceVolumeResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/RestartInstanceRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/RestartInstanceRequestBody.h>
#include <huaweicloud/gaussdbfornosql/v3/model/RestartInstanceResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/RestoreExistingInstanceRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/RestoreExistingInstanceResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/RestoreRedisPitrRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/RestoreRedisPitrRequestBody.h>
#include <huaweicloud/gaussdbfornosql/v3/model/RestoreRedisPitrResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/RestoreRequestBody.h>
#include <huaweicloud/gaussdbfornosql/v3/model/SaveLtsConfigsRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/SaveLtsConfigsRequestBody.h>
#include <huaweicloud/gaussdbfornosql/v3/model/SaveLtsConfigsResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/SaveRedisDisabledCommandsRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/SaveRedisDisabledCommandsRequestBody.h>
#include <huaweicloud/gaussdbfornosql/v3/model/SaveRedisDisabledCommandsResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/SetAutoEnlargePolicyRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/SetAutoEnlargePolicyResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/SetAutoPolicyRequestBody.h>
#include <huaweicloud/gaussdbfornosql/v3/model/SetBackupPolicyRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/SetBackupPolicyRequestBody.h>
#include <huaweicloud/gaussdbfornosql/v3/model/SetBackupPolicyResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/SetDisasterRecoverySettingsRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/SetDisasterRecoverySettingsRequestBody.h>
#include <huaweicloud/gaussdbfornosql/v3/model/SetDisasterRecoverySettingsResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/SetInstanceDataDumpRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/SetInstanceDataDumpRequestBody.h>
#include <huaweicloud/gaussdbfornosql/v3/model/SetInstanceDataDumpResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/SetRecyclePolicyRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/SetRecyclePolicyResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/SetRedisPitrPolicyRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/SetRedisPitrPolicyRequestBody.h>
#include <huaweicloud/gaussdbfornosql/v3/model/SetRedisPitrPolicyResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ShowAllInstancesBackupsNewRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ShowAllInstancesBackupsNewResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ShowAllInstancesBackupsRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ShowAllInstancesBackupsResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ShowApplicableInstancesRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ShowApplicableInstancesResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ShowApplyHistoryRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ShowApplyHistoryResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ShowAutoEnlargePolicyRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ShowAutoEnlargePolicyResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ShowBackupPoliciesRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ShowBackupPoliciesResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ShowBackupPolicyRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ShowBackupPolicyResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ShowConfigurationDetailRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ShowConfigurationDetailResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ShowDisasterRecoverySettingsRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ShowDisasterRecoverySettingsResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ShowElbIpGroupRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ShowElbIpGroupResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ShowErrorLogRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ShowErrorLogResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ShowHighRiskCommandsRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ShowHighRiskCommandsResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ShowInstanceBiactiveRegionsRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ShowInstanceBiactiveRegionsResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ShowInstanceConfigurationRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ShowInstanceConfigurationResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ShowInstanceRoleRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ShowInstanceRoleResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ShowIpNumRequirementRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ShowIpNumRequirementResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ShowModifyHistoryRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ShowModifyHistoryResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ShowPasswordlessConfigRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ShowPasswordlessConfigResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ShowPauseResumeStutusRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ShowPauseResumeStutusResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ShowQuotasRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ShowQuotasResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ShowRecyclePolicyRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ShowRecyclePolicyResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ShowRedisBigKeysRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ShowRedisBigKeysRequestBody.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ShowRedisBigKeysResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ShowRedisDisabledCommandsRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ShowRedisDisabledCommandsResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ShowRedisHotKeysRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ShowRedisHotKeysResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ShowRedisPitrInfoRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ShowRedisPitrInfoResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ShowRedisPitrPolicyRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ShowRedisPitrPolicyResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ShowRestorableListRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ShowRestorableListResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ShowSecondLevelMonitoringStatusRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ShowSecondLevelMonitoringStatusResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ShowSlowLogDesensitizationRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ShowSlowLogDesensitizationResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ShrinkInstanceNodeRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ShrinkInstanceNodeRequestBody.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ShrinkInstanceNodeResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/StopBackupRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/StopBackupRequestBody.h>
#include <huaweicloud/gaussdbfornosql/v3/model/StopBackupResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/SwitchIpGroupRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/SwitchIpGroupRequestBody.h>
#include <huaweicloud/gaussdbfornosql/v3/model/SwitchIpGroupResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/SwitchOverRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/SwitchOverResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/SwitchSecondLevelMonitoringRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/SwitchSecondLevelMonitoringRequestBody.h>
#include <huaweicloud/gaussdbfornosql/v3/model/SwitchSecondLevelMonitoringResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/SwitchSlowlogDesensitizationRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/SwitchSlowlogDesensitizationRequestBody.h>
#include <huaweicloud/gaussdbfornosql/v3/model/SwitchSlowlogDesensitizationResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/SwitchSslRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/SwitchSslRequestBody.h>
#include <huaweicloud/gaussdbfornosql/v3/model/SwitchSslResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/SwitchToMasterDisasterRecoveryBody.h>
#include <huaweicloud/gaussdbfornosql/v3/model/SwitchToMasterRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/SwitchToMasterResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/SwitchToSlaveRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/SwitchToSlaveResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/UpdateClientNetworkRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/UpdateClientNetworkRequestBody.h>
#include <huaweicloud/gaussdbfornosql/v3/model/UpdateClientNetworkResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/UpdateConfigurationRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/UpdateConfigurationRequestBody.h>
#include <huaweicloud/gaussdbfornosql/v3/model/UpdateConfigurationResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/UpdateDatabasesRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/UpdateDatabasesRequestBody.h>
#include <huaweicloud/gaussdbfornosql/v3/model/UpdateDatabasesResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/UpdateDbCacheRuleRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/UpdateDbCacheRuleRequestBody.h>
#include <huaweicloud/gaussdbfornosql/v3/model/UpdateDbCacheRuleResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/UpdateHighRiskCommandsRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/UpdateHighRiskCommandsResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/UpdateInstanceConfigurationRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/UpdateInstanceConfigurationRequestBody.h>
#include <huaweicloud/gaussdbfornosql/v3/model/UpdateInstanceConfigurationResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/UpdateInstanceConfigurationsRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/UpdateInstanceConfigurationsRequestBody.h>
#include <huaweicloud/gaussdbfornosql/v3/model/UpdateInstanceConfigurationsResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/UpdateInstanceNameRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/UpdateInstanceNameRequestBody.h>
#include <huaweicloud/gaussdbfornosql/v3/model/UpdateInstanceNameResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/UpdatePasswordlessConfigRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/UpdatePasswordlessConfigRequestBody.h>
#include <huaweicloud/gaussdbfornosql/v3/model/UpdatePasswordlessConfigResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/UpdateSecurityGroupRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/UpdateSecurityGroupRequestBody.h>
#include <huaweicloud/gaussdbfornosql/v3/model/UpdateSecurityGroupResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/UpgradeDbVersionRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/UpgradeDbVersionResponse.h>
#include <string>

#include <huaweicloud/gaussdbfornosql/v3/model/ListApiVersionRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ListApiVersionResponse.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ShowApiVersionRequest.h>
#include <huaweicloud/gaussdbfornosql/v3/model/ShowApiVersionResponse.h>
#include <string>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Object.h>
#undef U
#include <boost/optional.hpp>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {

using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Gaussdbfornosql::V3::Model;

class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT  GaussDBforNoSQLClient : public Client
{
public:

    GaussDBforNoSQLClient();

    virtual ~GaussDBforNoSQLClient();

    static ClientBuilder<GaussDBforNoSQLClient> newBuilder();

    // 应用参数模板
    //
    // 将参数模板应用到实例，可以指定一个或多个实例。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ApplyConfigurationResponse> applyConfiguration(
        ApplyConfigurationRequest &request
    );
    // 应用参数模板
    //
    // 将参数模板应用到实例，可以指定一个或多个实例。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ApplyConfigurationToInstancesResponse> applyConfigurationToInstances(
        ApplyConfigurationToInstancesRequest &request
    );
    // 批量删除手动备份
    //
    // 批量删除数据库实例的手动备份。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchDeleteManualBackupResponse> batchDeleteManualBackup(
        BatchDeleteManualBackupRequest &request
    );
    // 批量添加或删除资源标签
    //
    // 批量添加或删除指定数据库实例的标签。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchTagActionResponse> batchTagAction(
        BatchTagActionRequest &request
    );
    // 批量数据库补丁升级
    //
    // 批量升级数据库补丁版本。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchUpgradeDatabaseVersionResponse> batchUpgradeDatabaseVersion(
        BatchUpgradeDatabaseVersionRequest &request
    );
    // 取消定时任务
    //
    // 取消定时任务
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CancelInstanceScheduleWindowResponse> cancelInstanceScheduleWindow(
        CancelInstanceScheduleWindowRequest &request
    );
    // 校验实例是否可以与指定实例建立/解除容灾关系
    //
    // 校验实例是否可以与指定实例建立/解除容灾关系。若接口返回成功，表示可以与指定实例建立/解除容灾关系。
    // 该接口需要对建立/解除容灾关系的两个实例各调用一次，2次调用都响应成功才能进行容灾关系的搭建/解除。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CheckDisasterRecoveryOperationResponse> checkDisasterRecoveryOperation(
        CheckDisasterRecoveryOperationRequest &request
    );
    // 判断弱密码
    //
    // 判断弱密码。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CheckWeekPasswordResponse> checkWeekPassword(
        CheckWeekPasswordRequest &request
    );
    // 关闭实例所有节点会话
    //
    // 关闭实例所有节点会话。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ClearInstanceSessionsResponse> clearInstanceSessions(
        ClearInstanceSessionsRequest &request
    );
    // 参数模板比较
    //
    // 比较两个参数模板之间的差异
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CompareConfigurationResponse> compareConfiguration(
        CompareConfigurationRequest &request
    );
    // 复制参数模板
    //
    // 复制参数模板
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CopyConfigurationResponse> copyConfiguration(
        CopyConfigurationRequest &request
    );
    // 创建手动备份
    //
    // 创建手动备份。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateBackResponse> createBack(
        CreateBackRequest &request
    );
    // ‘创建冷数据存储’
    //
    // ‘创建冷数据存储’
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateColdVolumeResponse> createColdVolume(
        CreateColdVolumeRequest &request
    );
    // 创建参数模板
    //
    // 创建参数模板。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateConfigurationResponse> createConfiguration(
        CreateConfigurationRequest &request
    );
    // 创建内存加速映射
    //
    // 创建内存加速映射。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateDbCacheMappingResponse> createDbCacheMapping(
        CreateDbCacheMappingRequest &request
    );
    // 创建内存加速规则
    //
    // 创建内存加速规则。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateDbCacheRuleResponse> createDbCacheRule(
        CreateDbCacheRuleRequest &request
    );
    // 创建Redis数据库账号
    //
    // 在Redis实例中创建数据库帐号。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateDbUserResponse> createDbUser(
        CreateDbUserRequest &request
    );
    // 搭建实例与特定实例的容灾关系
    //
    // 搭建实例与特定实例的容灾关系。 该接口需要对搭建容灾关系的两个实例分别各调用一次，2次接口都调用成功才能成功搭建容灾关系。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateDisasterRecoveryResponse> createDisasterRecovery(
        CreateDisasterRecoveryRequest &request
    );
    // 搭建双活
    //
    // 为了实现跨区域实例数据同步，GeminiDB提供了异地双活功能，即创建异地双活实例。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateGeminiDbDualActiveResponse> createGeminiDbDualActive(
        CreateGeminiDbDualActiveRequest &request
    );
    // 创建实例
    //
    // 创建数据库实例。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateInstanceResponse> createInstance(
        CreateInstanceRequest &request
    );
    // 删除手动备份
    //
    // 删除手动备份
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteBackupResponse> deleteBackup(
        DeleteBackupRequest &request
    );
    // 删除参数模板
    //
    // 删除指定参数模板。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteConfigurationResponse> deleteConfiguration(
        DeleteConfigurationRequest &request
    );
    // 解除内存加速映射
    //
    // 解除指定内存加速映射。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteDbCacheMappingResponse> deleteDbCacheMapping(
        DeleteDbCacheMappingRequest &request
    );
    // 删除内存加速规则
    //
    // 删除内存加速规则。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteDbCacheRuleResponse> deleteDbCacheRule(
        DeleteDbCacheRuleRequest &request
    );
    // 删除Redis数据库账号
    //
    // 删除Redis实例的数据库账号。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteDbUserResponse> deleteDbUser(
        DeleteDbUserRequest &request
    );
    // 解除实例与特定实例的容灾关系
    //
    // 解除实例与特定实例的容灾关系。 该接口需要对搭建容灾关系的两个实例分别各调用一次，2次接口都调用成功才能成功解除容灾关系。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteDisasterRecoveryResponse> deleteDisasterRecovery(
        DeleteDisasterRecoveryRequest &request
    );
    // 删除扩容失败的节点
    //
    // 删除扩容失败的节点
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteEnlargeFailNodeResponse> deleteEnlargeFailNode(
        DeleteEnlargeFailNodeRequest &request
    );
    // 解除双活
    //
    // 解除跨区域双活。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteGeminiDbDualActiveResponse> deleteGeminiDbDualActive(
        DeleteGeminiDbDualActiveRequest &request
    );
    // 删除实例
    //
    // 删除数据库实例。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteInstanceResponse> deleteInstance(
        DeleteInstanceRequest &request
    );
    // 关闭实例节点会话
    //
    // 关闭实例节点会话。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteInstancesSessionResponse> deleteInstancesSession(
        DeleteInstancesSessionRequest &request
    );
    // 解除关联LTS日志流
    //
    // 将实例日志与LTS日志流解除关联，后台将取消上传实例日志到的LTS日志流里。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteLtsConfigsResponse> deleteLtsConfigs(
        DeleteLtsConfigsRequest &request
    );
    // 删除Redis禁用命令
    //
    // 删除Redis禁用命令。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteRedisDisabledCommandsResponse> deleteRedisDisabledCommands(
        DeleteRedisDisabledCommandsRequest &request
    );
    // 扩容指定集群实例的节点数量
    //
    // 扩容指定集群实例的节点数量。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ExpandInstanceNodeResponse> expandInstanceNode(
        ExpandInstanceNodeRequest &request
    );
    // 查询实例可变更规格
    //
    // 查询实例可变更规格。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAvailableFlavorInfosResponse> listAvailableFlavorInfos(
        ListAvailableFlavorInfosRequest &request
    );
    // 查询GeminiDB(for Cassandra)数据库慢日志
    //
    // 查询GeminiDB(for Cassandra)数据库慢日志信息，支持日志关键字搜索。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListCassandraSlowLogsResponse> listCassandraSlowLogs(
        ListCassandraSlowLogsRequest &request
    );
    // 查询支持参数模板的接口信息
    //
    // 查询支持参数模板的接口信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListConfigurationDatastoresResponse> listConfigurationDatastores(
        ListConfigurationDatastoresRequest &request
    );
    // 获取参数模板列表
    //
    // 获取参数模板列表，包括所有数据库的默认参数模板和用户创建的参数模板。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListConfigurationTemplatesResponse> listConfigurationTemplates(
        ListConfigurationTemplatesRequest &request
    );
    // 获取参数模板列表
    //
    // 获取参数模板列表，包括所有数据库的默认参数模板和用户创建的参数模板。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListConfigurationsResponse> listConfigurations(
        ListConfigurationsRequest &request
    );
    // 查询指定实例类型的数据库版本信息
    //
    // 查询指定实例类型的数据库版本信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDatastoresResponse> listDatastores(
        ListDatastoresRequest &request
    );
    // 查询内存加速映射列表和详情
    //
    // 根据指定条件查询内存加速映射关系列表和详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDbCacheMappingsResponse> listDbCacheMappings(
        ListDbCacheMappingsRequest &request
    );
    // 查询内存加速规则列表和详情
    //
    // 查询内存加速规则列表和详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDbCacheRulesResponse> listDbCacheRules(
        ListDbCacheRulesRequest &request
    );
    // 获取Redis数据库账号列表和详情
    //
    // 获取Redis数据库账号列表和详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDbUsersResponse> listDbUsers(
        ListDbUsersRequest &request
    );
    // 查询专属资源列表
    //
    // 查询专属资源列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDedicatedResourcesResponse> listDedicatedResources(
        ListDedicatedResourcesRequest &request
    );
    // 查询企业项目配额
    //
    // 查询企业项目配额。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListEpsQuotasResponse> listEpsQuotas(
        ListEpsQuotasRequest &request
    );
    // 查询数据库规格
    //
    // 查询指定条件下的实例规格信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListFlavorInfosResponse> listFlavorInfos(
        ListFlavorInfosRequest &request
    );
    // 查询指定条件下的所有实例规格信息
    //
    // 查询指定条件下的所有实例规格信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListFlavorsResponse> listFlavors(
        ListFlavorsRequest &request
    );
    // 查询GeminiDB(for influxdb)数据库慢日志
    //
    // 查询GeminiDB(for influxdb)数据库慢日志信息，支持日志关键字搜索。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListInfluxdbSlowLogsResponse> listInfluxdbSlowLogs(
        ListInfluxdbSlowLogsRequest &request
    );
    // 获取Redis实例数据库列表
    //
    // 获取Redis实例数据库列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListInstanceDatabasesResponse> listInstanceDatabases(
        ListInstanceDatabasesRequest &request
    );
    // 查询实例可维护时间段
    //
    // 查询实例可维护时间段。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListInstanceMaintenanceWindowResponse> listInstanceMaintenanceWindow(
        ListInstanceMaintenanceWindowRequest &request
    );
    // 获取实例的会话
    //
    // 获取实例的会话。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListInstanceSessionsResponse> listInstanceSessions(
        ListInstanceSessionsRequest &request
    );
    // 查询资源标签
    //
    // 查询指定实例的标签信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListInstanceTagsResponse> listInstanceTags(
        ListInstanceTagsRequest &request
    );
    // 查询实例列表和详情
    //
    // 根据指定条件查询数据库实例列表和详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListInstancesResponse> listInstances(
        ListInstancesRequest &request
    );
    // 查询资源实例
    //
    // 根据标签查询指定的数据库实例。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListInstancesByResourceTagsResponse> listInstancesByResourceTags(
        ListInstancesByResourceTagsRequest &request
    );
    // 查询资源实例
    //
    // 根据标签查询指定的数据库实例。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListInstancesByTagsResponse> listInstancesByTags(
        ListInstancesByTagsRequest &request
    );
    // 获取节点会话列表
    //
    // 获取节点会话列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListInstancesSessionResponse> listInstancesSession(
        ListInstancesSessionRequest &request
    );
    // 查询实例节点会话统计信息
    //
    // 查询实例节点会话统计信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListInstancesSessionStatisticsResponse> listInstancesSessionStatistics(
        ListInstancesSessionStatisticsRequest &request
    );
    // 查询任务列表和详情
    //
    // 查询任务列表和详情，默认查询任务列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListJobsResponse> listJobs(
        ListJobsRequest &request
    );
    // 查询LTS日志配置信息
    //
    // 分页查询实例关联的LTS日志配置信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListLtsConfigsResponse> listLtsConfigs(
        ListLtsConfigsRequest &request
    );
    // 查询GeminiDB(for Mongo)数据库错误日志
    //
    // 查询GeminiDB(for Mongo)数据库错误日志信息，支持日志关键字搜索。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListMongodbErrorLogsResponse> listMongodbErrorLogs(
        ListMongodbErrorLogsRequest &request
    );
    // 查询GeminiDB(for Mongo)数据库慢日志
    //
    // 查询GeminiDB(for Mongo)数据库慢日志信息，支持日志关键字搜索。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListMongodbSlowLogsResponse> listMongodbSlowLogs(
        ListMongodbSlowLogsRequest &request
    );
    // 查询定时任务列表
    //
    // 根据指定条件查询定时任务列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListNosqlTaskListResponse> listNosqlTaskList(
        ListNosqlTaskListRequest &request
    );
    // 查询项目标签
    //
    // 查询指定项目的标签信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListProjectTagsResponse> listProjectTags(
        ListProjectTagsRequest &request
    );
    // 查询回收站实例列表
    //
    // 查询回收站所有引擎的实例列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListRecycleInstancesResponse> listRecycleInstances(
        ListRecycleInstancesRequest &request
    );
    // 查询Redis可恢复时间点
    //
    // 查询Redis可恢复时间点。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListRedisPitrRestoreTimeResponse> listRedisPitrRestoreTime(
        ListRedisPitrRestoreTimeRequest &request
    );
    // 查询GeminiDB(for Redis)数据库慢日志
    //
    // 查询GeminiDB(for Redis)数据库慢日志信息，支持日志关键字搜索。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListRedisSlowLogsResponse> listRedisSlowLogs(
        ListRedisSlowLogsRequest &request
    );
    // 获取GeminiDB(for Cassandra)实例表级恢复的数据库信息
    //
    // 获取GeminiDB(for Cassandra)实例表级恢复的数据库信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListRestoreDatabasesResponse> listRestoreDatabases(
        ListRestoreDatabasesRequest &request
    );
    // 获取GeminiDB(for Cassandra)实例表级恢复的表信息
    //
    // 获取GeminiDB(for Cassandra)实例表级恢复的表信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListRestoreTablesResponse> listRestoreTables(
        ListRestoreTablesRequest &request
    );
    // 查询实例可恢复的时间段
    //
    // 查询实例可恢复的时间段
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListRestoreTimeResponse> listRestoreTime(
        ListRestoreTimeRequest &request
    );
    // 查询数据库慢日志
    //
    // 查询数据库慢日志信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListSlowLogsResponse> listSlowLogs(
        ListSlowLogsRequest &request
    );
    // 修改Redis数据库帐号权限
    //
    // 修改Redis数据库帐号权限。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ModifyDbUserPrivilegeResponse> modifyDbUserPrivilege(
        ModifyDbUserPrivilegeRequest &request
    );
    // 修改企业项目配额
    //
    // 修改企业项目配额。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ModifyEpsQuotasResponse> modifyEpsQuotas(
        ModifyEpsQuotasRequest &request
    );
    // 设置实例可维护时间段
    //
    // 设置指定实例可维护时间段。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ModifyInstanceMaintenanceWindowResponse> modifyInstanceMaintenanceWindow(
        ModifyInstanceMaintenanceWindowRequest &request
    );
    // 修改数据库端口
    //
    // 修改数据库实例的端口。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ModifyPortResponse> modifyPort(
        ModifyPortRequest &request
    );
    // 绑定/解绑弹性公网IP
    //
    // 实例下的节点绑定弹性公网IP/解绑弹性公网IP
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ModifyPublicIpResponse> modifyPublicIp(
        ModifyPublicIpRequest &request
    );
    // 变更实例存储容量
    //
    // 变更实例的存储容量大小
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ModifyVolumeResponse> modifyVolume(
        ModifyVolumeRequest &request
    );
    // 支持节点的开关机
    //
    // 当底层故障导致节点无法正常工作时，可以对该节点执行关机操作，关机后会由其他节点接管业务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<OfflineNodesResponse> offlineNodes(
        OfflineNodesRequest &request
    );
    // 暂停/恢复具备容灾关系的实例数据同步
    //
    // 该接口用于暂停/恢复具备容灾关系的实例数据同步。
    // 
    // 该接口需要对具备容灾关系的两个实例分别各调用一次，2次接口都调用成功才能成功暂停/恢复容灾实例数据同步。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<PauseResumeDataSynchronizationResponse> pauseResumeDataSynchronization(
        PauseResumeDataSynchronizationRequest &request
    );
    // 重置Redis数据库账号密码
    //
    // 重置Redis数据库账号密码。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ResetDbUserPasswordResponse> resetDbUserPassword(
        ResetDbUserPasswordRequest &request
    );
    // 重置自定义参数模板
    //
    // 重置自定义参数模板
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ResetParamGroupTemplateResponse> resetParamGroupTemplate(
        ResetParamGroupTemplateRequest &request
    );
    // 修改实例的管理员密码
    //
    // 修改实例的管理员密码。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ResetPasswordResponse> resetPassword(
        ResetPasswordRequest &request
    );
    // 扩容冷数据存储
    //
    // 扩容冷数据存储。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ResizeColdVolumeResponse> resizeColdVolume(
        ResizeColdVolumeRequest &request
    );
    // 变更实例规格
    //
    // 变更实例的规格。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ResizeInstanceResponse> resizeInstance(
        ResizeInstanceRequest &request
    );
    // 扩容实例存储容量
    //
    // 扩容实例的存储容量大小。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ResizeInstanceVolumeResponse> resizeInstanceVolume(
        ResizeInstanceVolumeRequest &request
    );
    // 重启实例或节点
    //
    // 重启实例或节点的数据库服务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RestartInstanceResponse> restartInstance(
        RestartInstanceRequest &request
    );
    // 恢复到已有实例
    //
    // 恢复到已有实例
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RestoreExistingInstanceResponse> restoreExistingInstance(
        RestoreExistingInstanceRequest &request
    );
    // 恢复当前Redis实例到指定时间点
    //
    // 恢复当前Redis实例到指定时间点。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RestoreRedisPitrResponse> restoreRedisPitr(
        RestoreRedisPitrRequest &request
    );
    // 关联LTS日志流
    //
    // - 将实例日志与LTS日志流关联，后台将自动上传实例日志到关联的LTS日志流里。
    // - 关联成功后，会产生一定费用，具体计费可参考云日志服务（LTS）的定价详情。
    // - 系统会为当前选择的日志流创建对应日志类型的结构化配置，若该日志流已存在其他日志类型的结构化配置，系统会进行覆盖。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SaveLtsConfigsResponse> saveLtsConfigs(
        SaveLtsConfigsRequest &request
    );
    // 设置Redis禁用命令
    //
    // 设置Redis禁用命令。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SaveRedisDisabledCommandsResponse> saveRedisDisabledCommands(
        SaveRedisDisabledCommandsRequest &request
    );
    // 设置磁盘自动扩容策略
    //
    // 设置磁盘自动扩容策略。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SetAutoEnlargePolicyResponse> setAutoEnlargePolicy(
        SetAutoEnlargePolicyRequest &request
    );
    // 设置自动备份策略
    //
    // 设置自动备份策略。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SetBackupPolicyResponse> setBackupPolicy(
        SetBackupPolicyRequest &request
    );
    // 设置实例容灾切换的故障节点比例
    //
    // 设置实例容灾切换的故障节点比例。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SetDisasterRecoverySettingsResponse> setDisasterRecoverySettings(
        SetDisasterRecoverySettingsRequest &request
    );
    // 开启/关闭实例数据导出
    //
    // 开启/关闭实例数据导出。
    // 当前支持将InfluxDB数据转为parquet格式文件然后上传到指定的OBS桶中。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SetInstanceDataDumpResponse> setInstanceDataDump(
        SetInstanceDataDumpRequest &request
    );
    // 设置回收策略
    //
    // 设置已删除实例保留天数，修改保留天数后删除的实例按照新的天数保留，修改之前已在回收站的实例保留天数不变。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SetRecyclePolicyResponse> setRecyclePolicy(
        SetRecyclePolicyRequest &request
    );
    // 设置Redis恢复到指定时间点策略
    //
    // 设置Redis恢复到指定时间点策略。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SetRedisPitrPolicyResponse> setRedisPitrPolicy(
        SetRedisPitrPolicyRequest &request
    );
    // 查询备份列表
    //
    // 根据指定条件查询备份列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAllInstancesBackupsResponse> showAllInstancesBackups(
        ShowAllInstancesBackupsRequest &request
    );
    // 查询备份列表（推荐）
    //
    // 根据指定条件查询备份列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAllInstancesBackupsNewResponse> showAllInstancesBackupsNew(
        ShowAllInstancesBackupsNewRequest &request
    );
    // 查询参数模板可应用的实例列表
    //
    // 查询参数模板可应用的实例列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowApplicableInstancesResponse> showApplicableInstances(
        ShowApplicableInstancesRequest &request
    );
    // 查询参数模板应用历史
    //
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowApplyHistoryResponse> showApplyHistory(
        ShowApplyHistoryRequest &request
    );
    // 查询磁盘自动扩容策略
    //
    // 查询磁盘自动扩容策略
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAutoEnlargePolicyResponse> showAutoEnlargePolicy(
        ShowAutoEnlargePolicyRequest &request
    );
    // 查询自动备份策略
    //
    // 查询自动备份策略。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowBackupPoliciesResponse> showBackupPolicies(
        ShowBackupPoliciesRequest &request
    );
    // 查询自动备份策略
    //
    // 查询自动备份策略。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowBackupPolicyResponse> showBackupPolicy(
        ShowBackupPolicyRequest &request
    );
    // 获取指定参数模板的参数
    //
    // 获取指定参数模板的详细信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowConfigurationDetailResponse> showConfigurationDetail(
        ShowConfigurationDetailRequest &request
    );
    // 查询实例容灾切换的故障节点比例
    //
    // 查询实例容灾切换的故障节点比例。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDisasterRecoverySettingsResponse> showDisasterRecoverySettings(
        ShowDisasterRecoverySettingsRequest &request
    );
    // 查询实例负载均衡的IP访问黑白名单
    //
    // 查询实例负载均衡的IP访问黑白名单。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowElbIpGroupResponse> showElbIpGroup(
        ShowElbIpGroupRequest &request
    );
    // 查询数据库错误日志信息
    //
    // 查询数据库错误日志
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowErrorLogResponse> showErrorLog(
        ShowErrorLogRequest &request
    );
    // 查询高危命令
    //
    // 查询Redis的高危命令
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowHighRiskCommandsResponse> showHighRiskCommands(
        ShowHighRiskCommandsRequest &request
    );
    // 查询实例可搭建双活关系的Region
    //
    // 查询实例可搭建双活关系的Region。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowInstanceBiactiveRegionsResponse> showInstanceBiactiveRegions(
        ShowInstanceBiactiveRegionsRequest &request
    );
    // 查询实例参数配置
    //
    // 查询实例参数配置。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowInstanceConfigurationResponse> showInstanceConfiguration(
        ShowInstanceConfigurationRequest &request
    );
    // 获取容灾实例主/备角色信息
    //
    // 该接口用于获取容灾实例主/备角色信息，以便后续容灾实例备升主和容灾实例主降备接口调用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowInstanceRoleResponse> showInstanceRole(
        ShowInstanceRoleRequest &request
    );
    // 查询创建实例或扩容节点时需要的IP数量
    //
    // 查询创建实例或扩容节点时需要的IP数量
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowIpNumRequirementResponse> showIpNumRequirement(
        ShowIpNumRequirementRequest &request
    );
    // 查询实例参数的修改历史
    //
    // 查询实例参数的修改历史
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowModifyHistoryResponse> showModifyHistory(
        ShowModifyHistoryRequest &request
    );
    // 获取GeminiDB Redis的免密配置
    //
    // 获取GeminiDB Redis的免密配置。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowPasswordlessConfigResponse> showPasswordlessConfig(
        ShowPasswordlessConfigRequest &request
    );
    // 获取容灾实例数据同步状态
    //
    // 获取容灾实例数据同步状态，主备实例id，数据同步指标值，以及倒换和切换场景下的RPO，RTO指标值。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowPauseResumeStutusResponse> showPauseResumeStutus(
        ShowPauseResumeStutusRequest &request
    );
    // 查询配额
    //
    // 查询单租户在GeminiDB服务下的资源配额。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowQuotasResponse> showQuotas(
        ShowQuotasRequest &request
    );
    // 查询回收策略
    //
    // 查询回收策略。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowRecyclePolicyResponse> showRecyclePolicy(
        ShowRecyclePolicyRequest &request
    );
    // 查询Redis实例的大key
    //
    // 支持查询Redis实例的大key。value长度大于bigkeys-string-threshold参数的string类型的key或者元素数大于bigkeys-composite-threshold参数的hash/list/zset/set/stream类型key，会被判断为大key。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowRedisBigKeysResponse> showRedisBigKeys(
        ShowRedisBigKeysRequest &request
    );
    // 查询Redis禁用命令
    //
    // 查询Redis禁用命令。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowRedisDisabledCommandsResponse> showRedisDisabledCommands(
        ShowRedisDisabledCommandsRequest &request
    );
    // 查询Redis实例的热key
    //
    // 支持查询Redis实例的热key。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowRedisHotKeysResponse> showRedisHotKeys(
        ShowRedisHotKeysRequest &request
    );
    // 查询Redis实例指定时间点恢复所占用的存储空间
    //
    // 查询Redis实例指定时间点恢复所占用的存储空间。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowRedisPitrInfoResponse> showRedisPitrInfo(
        ShowRedisPitrInfoRequest &request
    );
    // 查询Redis恢复到指定时间点策略
    //
    // 查询Redis恢复到指定时间点策略。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowRedisPitrPolicyResponse> showRedisPitrPolicy(
        ShowRedisPitrPolicyRequest &request
    );
    // 查询可恢复的实例列表
    //
    // 查询用户可恢复的实例列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowRestorableListResponse> showRestorableList(
        ShowRestorableListRequest &request
    );
    // 查询秒级监控配置
    //
    // 查询秒级监控配置。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowSecondLevelMonitoringStatusResponse> showSecondLevelMonitoringStatus(
        ShowSecondLevelMonitoringStatusRequest &request
    );
    // 查询慢日志脱敏状态
    //
    // 查询慢日志脱敏状态。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowSlowLogDesensitizationResponse> showSlowLogDesensitization(
        ShowSlowLogDesensitizationRequest &request
    );
    // 缩容指定集群实例的节点数量
    //
    // 缩容指定集群实例的节点数量。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShrinkInstanceNodeResponse> shrinkInstanceNode(
        ShrinkInstanceNodeRequest &request
    );
    // 停止备份
    //
    // 支持紧急情况下停止备份功能。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<StopBackupResponse> stopBackup(
        StopBackupRequest &request
    );
    // 设置实例负载均衡的IP访问黑白名单
    //
    // 设置实例负载均衡的IP访问黑白名单，黑名单、白名单只能选一种，每次调用此接口覆盖之前的设置。关闭后不限制连接的源IP地址。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SwitchIpGroupResponse> switchIpGroup(
        SwitchIpGroupRequest &request
    );
    // Redis主备切换
    //
    // 切换实例的主备节点。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SwitchOverResponse> switchOver(
        SwitchOverRequest &request
    );
    // 开启/关闭秒级监控
    //
    // 开启或关闭指定实例的5秒级监控。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SwitchSecondLevelMonitoringResponse> switchSecondLevelMonitoring(
        SwitchSecondLevelMonitoringRequest &request
    );
    // 设置慢日志脱敏状态
    //
    // 设置慢日志脱敏状态
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SwitchSlowlogDesensitizationResponse> switchSlowlogDesensitization(
        SwitchSlowlogDesensitizationRequest &request
    );
    // 切换实例SSL开关
    //
    // 切换实例SSL开关。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SwitchSslResponse> switchSsl(
        SwitchSslRequest &request
    );
    // 容灾实例备升主
    //
    // 该接口用于对已经搭建容灾关系的实例，将备实例升级为主实例。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SwitchToMasterResponse> switchToMaster(
        SwitchToMasterRequest &request
    );
    // 容灾实例主降备
    //
    // 该接口用于对已经搭建容灾关系的实例，将主实例降级为备实例。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SwitchToSlaveResponse> switchToSlave(
        SwitchToSlaveRequest &request
    );
    // 修改副本集跨网段访问配置
    //
    // 修改副本集跨网段访问配置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateClientNetworkResponse> updateClientNetwork(
        UpdateClientNetworkRequest &request
    );
    // 修改参数模板参数
    //
    // 修改参数模板参数。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateConfigurationResponse> updateConfiguration(
        UpdateConfigurationRequest &request
    );
    // 操作GeminDB实例数据库
    //
    // 操作GeminDB实例数据库
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateDatabasesResponse> updateDatabases(
        UpdateDatabasesRequest &request
    );
    // 修改内存加速规则
    //
    // 修改指定内存加速规则。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateDbCacheRuleResponse> updateDbCacheRule(
        UpdateDbCacheRuleRequest &request
    );
    // 修改高危命令
    //
    // 批量修改高危命令
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateHighRiskCommandsResponse> updateHighRiskCommands(
        UpdateHighRiskCommandsRequest &request
    );
    // 修改指定实例的参数
    //
    // 修改指定实例的参数。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateInstanceConfigurationResponse> updateInstanceConfiguration(
        UpdateInstanceConfigurationRequest &request
    );
    // 修改指定实例的参数
    //
    // 修改指定实例的参数。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateInstanceConfigurationsResponse> updateInstanceConfigurations(
        UpdateInstanceConfigurationsRequest &request
    );
    // 修改实例名称
    //
    // 修改实例名称
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateInstanceNameResponse> updateInstanceName(
        UpdateInstanceNameRequest &request
    );
    // 支持修改GeminiDB Redis的免密配置
    //
    // 支持修改GeminiDB Redis的免密配置。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdatePasswordlessConfigResponse> updatePasswordlessConfig(
        UpdatePasswordlessConfigRequest &request
    );
    // 变更实例安全组
    //
    // 变更实例关联的安全组
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateSecurityGroupResponse> updateSecurityGroup(
        UpdateSecurityGroupRequest &request
    );
    // 数据库补丁升级
    //
    // 升级数据库补丁版本
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpgradeDbVersionResponse> upgradeDbVersion(
        UpgradeDbVersionRequest &request
    );

    // 查询当前支持的API版本信息列表
    //
    // 查询当前支持的API版本信息列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListApiVersionResponse> listApiVersion(
        ListApiVersionRequest &request
    );
    // 查询指定API版本信息
    //
    // 查询指定API版本信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowApiVersionResponse> showApiVersion(
        ShowApiVersionRequest &request
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

template class HUAWEICLOUD_GAUSSDBFORNOSQL_V3_EXPORT ::HuaweiCloud::Sdk::Core::ClientBuilder<::HuaweiCloud::Sdk::Gaussdbfornosql::V3::GaussDBforNoSQLClient>;

#endif // HUAWEICLOUD_SDK_GAUSSDBFORNOSQL_V3_GaussDBforNoSQLClient_H_

