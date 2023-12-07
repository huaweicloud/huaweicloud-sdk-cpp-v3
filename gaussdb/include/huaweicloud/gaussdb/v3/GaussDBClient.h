#ifndef HUAWEICLOUD_SDK_GAUSSDB_V3_GaussDBClient_H_
#define HUAWEICLOUD_SDK_GAUSSDB_V3_GaussDBClient_H_

#include <huaweicloud/gaussdb/v3/GaussDBExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


#include <huaweicloud/gaussdb/v3/model/AddDatabasePermissionRequest.h>
#include <huaweicloud/gaussdb/v3/model/AddDatabasePermissionResponse.h>
#include <huaweicloud/gaussdb/v3/model/ApplyConfigurationRequestBody.h>
#include <huaweicloud/gaussdb/v3/model/BackupEncryptRequest.h>
#include <huaweicloud/gaussdb/v3/model/BatchOperateInstanceTagRequestBody.h>
#include <huaweicloud/gaussdb/v3/model/BatchTagActionRequest.h>
#include <huaweicloud/gaussdb/v3/model/BatchTagActionResponse.h>
#include <huaweicloud/gaussdb/v3/model/CancelGaussMySqlInstanceEipRequest.h>
#include <huaweicloud/gaussdb/v3/model/CancelGaussMySqlInstanceEipResponse.h>
#include <huaweicloud/gaussdb/v3/model/CancelScheduleTask.h>
#include <huaweicloud/gaussdb/v3/model/CancelScheduleTaskRequest.h>
#include <huaweicloud/gaussdb/v3/model/CancelScheduleTaskResponse.h>
#include <huaweicloud/gaussdb/v3/model/ChangeGaussMySqlInstanceSpecificationRequest.h>
#include <huaweicloud/gaussdb/v3/model/ChangeGaussMySqlInstanceSpecificationResponse.h>
#include <huaweicloud/gaussdb/v3/model/ChangeGaussMySqlProxySpecificationRequest.h>
#include <huaweicloud/gaussdb/v3/model/ChangeGaussMySqlProxySpecificationResponse.h>
#include <huaweicloud/gaussdb/v3/model/CheckResourceRequest.h>
#include <huaweicloud/gaussdb/v3/model/CheckResourceRequestBody.h>
#include <huaweicloud/gaussdb/v3/model/CheckResourceResponse.h>
#include <huaweicloud/gaussdb/v3/model/CloseMysqlProxyRequestBody.h>
#include <huaweicloud/gaussdb/v3/model/CopyConfigurationsRequest.h>
#include <huaweicloud/gaussdb/v3/model/CopyConfigurationsRequestBody.h>
#include <huaweicloud/gaussdb/v3/model/CopyConfigurationsResponse.h>
#include <huaweicloud/gaussdb/v3/model/CopyInstanceConfigurationsRequest.h>
#include <huaweicloud/gaussdb/v3/model/CopyInstanceConfigurationsRequestBody.h>
#include <huaweicloud/gaussdb/v3/model/CopyInstanceConfigurationsResponse.h>
#include <huaweicloud/gaussdb/v3/model/CreateAccessControlRequest.h>
#include <huaweicloud/gaussdb/v3/model/CreateAccessControlRequestBody.h>
#include <huaweicloud/gaussdb/v3/model/CreateAccessControlResponse.h>
#include <huaweicloud/gaussdb/v3/model/CreateConfigurationRequestBody.h>
#include <huaweicloud/gaussdb/v3/model/CreateDatabaseUserRequest.h>
#include <huaweicloud/gaussdb/v3/model/CreateDnsNameReq.h>
#include <huaweicloud/gaussdb/v3/model/CreateGaussMySqlBackupRequest.h>
#include <huaweicloud/gaussdb/v3/model/CreateGaussMySqlBackupResponse.h>
#include <huaweicloud/gaussdb/v3/model/CreateGaussMySqlConfigurationRequest.h>
#include <huaweicloud/gaussdb/v3/model/CreateGaussMySqlConfigurationResponse.h>
#include <huaweicloud/gaussdb/v3/model/CreateGaussMySqlDatabaseRequest.h>
#include <huaweicloud/gaussdb/v3/model/CreateGaussMySqlDatabaseRequestBody.h>
#include <huaweicloud/gaussdb/v3/model/CreateGaussMySqlDatabaseResponse.h>
#include <huaweicloud/gaussdb/v3/model/CreateGaussMySqlDatabaseUserRequest.h>
#include <huaweicloud/gaussdb/v3/model/CreateGaussMySqlDatabaseUserResponse.h>
#include <huaweicloud/gaussdb/v3/model/CreateGaussMySqlInstanceRequest.h>
#include <huaweicloud/gaussdb/v3/model/CreateGaussMySqlInstanceResponse.h>
#include <huaweicloud/gaussdb/v3/model/CreateGaussMySqlProxyRequest.h>
#include <huaweicloud/gaussdb/v3/model/CreateGaussMySqlProxyResponse.h>
#include <huaweicloud/gaussdb/v3/model/CreateGaussMySqlReadonlyNodeRequest.h>
#include <huaweicloud/gaussdb/v3/model/CreateGaussMySqlReadonlyNodeResponse.h>
#include <huaweicloud/gaussdb/v3/model/CreateGaussMysqlDnsRequest.h>
#include <huaweicloud/gaussdb/v3/model/CreateGaussMysqlDnsResponse.h>
#include <huaweicloud/gaussdb/v3/model/CreateRestoreTablesRequest.h>
#include <huaweicloud/gaussdb/v3/model/CreateRestoreTablesRequestBody.h>
#include <huaweicloud/gaussdb/v3/model/CreateRestoreTablesResponse.h>
#include <huaweicloud/gaussdb/v3/model/DeleteDatabasePermissionRequest.h>
#include <huaweicloud/gaussdb/v3/model/DeleteDatabasePermissionRequestBody.h>
#include <huaweicloud/gaussdb/v3/model/DeleteDatabasePermissionResponse.h>
#include <huaweicloud/gaussdb/v3/model/DeleteDatabaseUserRequest.h>
#include <huaweicloud/gaussdb/v3/model/DeleteGaussMySqlBackupRequest.h>
#include <huaweicloud/gaussdb/v3/model/DeleteGaussMySqlBackupResponse.h>
#include <huaweicloud/gaussdb/v3/model/DeleteGaussMySqlConfigurationRequest.h>
#include <huaweicloud/gaussdb/v3/model/DeleteGaussMySqlConfigurationResponse.h>
#include <huaweicloud/gaussdb/v3/model/DeleteGaussMySqlDatabaseRequest.h>
#include <huaweicloud/gaussdb/v3/model/DeleteGaussMySqlDatabaseRequestBody.h>
#include <huaweicloud/gaussdb/v3/model/DeleteGaussMySqlDatabaseResponse.h>
#include <huaweicloud/gaussdb/v3/model/DeleteGaussMySqlDatabaseUserRequest.h>
#include <huaweicloud/gaussdb/v3/model/DeleteGaussMySqlDatabaseUserResponse.h>
#include <huaweicloud/gaussdb/v3/model/DeleteGaussMySqlInstanceRequest.h>
#include <huaweicloud/gaussdb/v3/model/DeleteGaussMySqlInstanceResponse.h>
#include <huaweicloud/gaussdb/v3/model/DeleteGaussMySqlProxyRequest.h>
#include <huaweicloud/gaussdb/v3/model/DeleteGaussMySqlProxyResponse.h>
#include <huaweicloud/gaussdb/v3/model/DeleteGaussMySqlReadonlyNodeRequest.h>
#include <huaweicloud/gaussdb/v3/model/DeleteGaussMySqlReadonlyNodeResponse.h>
#include <huaweicloud/gaussdb/v3/model/DeleteScheduleTasKRequest.h>
#include <huaweicloud/gaussdb/v3/model/DeleteScheduleTasKRequestBody.h>
#include <huaweicloud/gaussdb/v3/model/DeleteScheduleTasKResponse.h>
#include <huaweicloud/gaussdb/v3/model/DeleteTaskRecordRequest.h>
#include <huaweicloud/gaussdb/v3/model/DeleteTaskRecordResponse.h>
#include <huaweicloud/gaussdb/v3/model/DescribeBackupEncryptStatusRequest.h>
#include <huaweicloud/gaussdb/v3/model/DescribeBackupEncryptStatusResponse.h>
#include <huaweicloud/gaussdb/v3/model/EnlargeProxyRequest.h>
#include <huaweicloud/gaussdb/v3/model/ExpandGaussMySqlInstanceVolumeRequest.h>
#include <huaweicloud/gaussdb/v3/model/ExpandGaussMySqlInstanceVolumeResponse.h>
#include <huaweicloud/gaussdb/v3/model/ExpandGaussMySqlProxyRequest.h>
#include <huaweicloud/gaussdb/v3/model/ExpandGaussMySqlProxyResponse.h>
#include <huaweicloud/gaussdb/v3/model/GrantDatabasePermissionRequestBody.h>
#include <huaweicloud/gaussdb/v3/model/InvokeGaussMySqlInstanceSwitchOverRequest.h>
#include <huaweicloud/gaussdb/v3/model/InvokeGaussMySqlInstanceSwitchOverResponse.h>
#include <huaweicloud/gaussdb/v3/model/ListAuditLogDownloadLinkRequest.h>
#include <huaweicloud/gaussdb/v3/model/ListAuditLogDownloadLinkResponse.h>
#include <huaweicloud/gaussdb/v3/model/ListConfigurationsDifferencesRequest.h>
#include <huaweicloud/gaussdb/v3/model/ListConfigurationsDifferencesRequestBody.h>
#include <huaweicloud/gaussdb/v3/model/ListConfigurationsDifferencesResponse.h>
#include <huaweicloud/gaussdb/v3/model/ListConfigurationsInstancesRequest.h>
#include <huaweicloud/gaussdb/v3/model/ListConfigurationsInstancesResponse.h>
#include <huaweicloud/gaussdb/v3/model/ListEnterpriseProjectsRequest.h>
#include <huaweicloud/gaussdb/v3/model/ListEnterpriseProjectsResponse.h>
#include <huaweicloud/gaussdb/v3/model/ListGaussMySqlConfigurationsRequest.h>
#include <huaweicloud/gaussdb/v3/model/ListGaussMySqlConfigurationsResponse.h>
#include <huaweicloud/gaussdb/v3/model/ListGaussMySqlDatabaseCharsetsRequest.h>
#include <huaweicloud/gaussdb/v3/model/ListGaussMySqlDatabaseCharsetsResponse.h>
#include <huaweicloud/gaussdb/v3/model/ListGaussMySqlDatabaseRequest.h>
#include <huaweicloud/gaussdb/v3/model/ListGaussMySqlDatabaseResponse.h>
#include <huaweicloud/gaussdb/v3/model/ListGaussMySqlDatabaseUserRequest.h>
#include <huaweicloud/gaussdb/v3/model/ListGaussMySqlDatabaseUserResponse.h>
#include <huaweicloud/gaussdb/v3/model/ListGaussMySqlDedicatedResourcesRequest.h>
#include <huaweicloud/gaussdb/v3/model/ListGaussMySqlDedicatedResourcesResponse.h>
#include <huaweicloud/gaussdb/v3/model/ListGaussMySqlInstanceDetailInfoRequest.h>
#include <huaweicloud/gaussdb/v3/model/ListGaussMySqlInstanceDetailInfoResponse.h>
#include <huaweicloud/gaussdb/v3/model/ListGaussMySqlInstanceDetailInfoUnifyStatusRequest.h>
#include <huaweicloud/gaussdb/v3/model/ListGaussMySqlInstanceDetailInfoUnifyStatusResponse.h>
#include <huaweicloud/gaussdb/v3/model/ListGaussMySqlInstancesRequest.h>
#include <huaweicloud/gaussdb/v3/model/ListGaussMySqlInstancesResponse.h>
#include <huaweicloud/gaussdb/v3/model/ListGaussMySqlInstancesUnifyStatusRequest.h>
#include <huaweicloud/gaussdb/v3/model/ListGaussMySqlInstancesUnifyStatusResponse.h>
#include <huaweicloud/gaussdb/v3/model/ListImmediateJobsRequest.h>
#include <huaweicloud/gaussdb/v3/model/ListImmediateJobsResponse.h>
#include <huaweicloud/gaussdb/v3/model/ListInstanceConfigurationsRequest.h>
#include <huaweicloud/gaussdb/v3/model/ListInstanceConfigurationsResponse.h>
#include <huaweicloud/gaussdb/v3/model/ListInstanceTagsRequest.h>
#include <huaweicloud/gaussdb/v3/model/ListInstanceTagsResponse.h>
#include <huaweicloud/gaussdb/v3/model/ListLtsErrorLogDetailsRequest.h>
#include <huaweicloud/gaussdb/v3/model/ListLtsErrorLogDetailsResponse.h>
#include <huaweicloud/gaussdb/v3/model/ListLtsSlowlogDetailsRequest.h>
#include <huaweicloud/gaussdb/v3/model/ListLtsSlowlogDetailsResponse.h>
#include <huaweicloud/gaussdb/v3/model/ListModifyHistoryRequest.h>
#include <huaweicloud/gaussdb/v3/model/ListModifyHistoryResponse.h>
#include <huaweicloud/gaussdb/v3/model/ListProjectTagsRequest.h>
#include <huaweicloud/gaussdb/v3/model/ListProjectTagsResponse.h>
#include <huaweicloud/gaussdb/v3/model/ListScheduleJobsRequest.h>
#include <huaweicloud/gaussdb/v3/model/ListScheduleJobsResponse.h>
#include <huaweicloud/gaussdb/v3/model/LtsLogErrorQueryRequest.h>
#include <huaweicloud/gaussdb/v3/model/LtsLogSlowQueryRequest.h>
#include <huaweicloud/gaussdb/v3/model/ModifyAliasRequest.h>
#include <huaweicloud/gaussdb/v3/model/ModifyBackupEncryptStatusRequest.h>
#include <huaweicloud/gaussdb/v3/model/ModifyBackupEncryptStatusResponse.h>
#include <huaweicloud/gaussdb/v3/model/ModifyBindEipRequest.h>
#include <huaweicloud/gaussdb/v3/model/ModifyDnsNameReq.h>
#include <huaweicloud/gaussdb/v3/model/ModifyGaussMySqlProxyRouteModeRequest.h>
#include <huaweicloud/gaussdb/v3/model/ModifyGaussMySqlProxyRouteModeRequestBody.h>
#include <huaweicloud/gaussdb/v3/model/ModifyGaussMySqlProxyRouteModeResponse.h>
#include <huaweicloud/gaussdb/v3/model/ModifyGaussMysqlDnsRequest.h>
#include <huaweicloud/gaussdb/v3/model/ModifyGaussMysqlDnsResponse.h>
#include <huaweicloud/gaussdb/v3/model/ModifyInternalIpRequest.h>
#include <huaweicloud/gaussdb/v3/model/ModifyOpsWindow.h>
#include <huaweicloud/gaussdb/v3/model/ModifyPortRequest.h>
#include <huaweicloud/gaussdb/v3/model/ModifyProxyConsistRequest.h>
#include <huaweicloud/gaussdb/v3/model/ModifySecurityGroupRequest.h>
#include <huaweicloud/gaussdb/v3/model/MysqlChangeSpecificationRequest.h>
#include <huaweicloud/gaussdb/v3/model/MysqlCreateBackupRequest.h>
#include <huaweicloud/gaussdb/v3/model/MysqlCreateReadonlyNodeRequest.h>
#include <huaweicloud/gaussdb/v3/model/MysqlExtendInstanceVolumeRequest.h>
#include <huaweicloud/gaussdb/v3/model/MysqlInstanceRequest.h>
#include <huaweicloud/gaussdb/v3/model/MysqlResetPasswordRequest.h>
#include <huaweicloud/gaussdb/v3/model/MysqlUpdateBackupPolicyRequest.h>
#include <huaweicloud/gaussdb/v3/model/MysqlUpdateInstanceNameRequest.h>
#include <huaweicloud/gaussdb/v3/model/OpenMysqlProxyRequestBody.h>
#include <huaweicloud/gaussdb/v3/model/OperateAuditLogRequestV3Body.h>
#include <huaweicloud/gaussdb/v3/model/ProxyTransactionSplitRequest.h>
#include <huaweicloud/gaussdb/v3/model/ProxyUpdateProxyConnectionPoolTypeRequest.h>
#include <huaweicloud/gaussdb/v3/model/ResetDatabasePasswordRequest.h>
#include <huaweicloud/gaussdb/v3/model/ResetGaussMySqlDatabasePasswordRequest.h>
#include <huaweicloud/gaussdb/v3/model/ResetGaussMySqlDatabasePasswordResponse.h>
#include <huaweicloud/gaussdb/v3/model/ResetGaussMySqlPasswordRequest.h>
#include <huaweicloud/gaussdb/v3/model/ResetGaussMySqlPasswordResponse.h>
#include <huaweicloud/gaussdb/v3/model/RestartGaussMySqlInstanceRequest.h>
#include <huaweicloud/gaussdb/v3/model/RestartGaussMySqlInstanceResponse.h>
#include <huaweicloud/gaussdb/v3/model/RestartGaussMySqlNodeRequest.h>
#include <huaweicloud/gaussdb/v3/model/RestartGaussMySqlNodeResponse.h>
#include <huaweicloud/gaussdb/v3/model/RestartNodeRequest.h>
#include <huaweicloud/gaussdb/v3/model/RestoreOldInstanceRequest.h>
#include <huaweicloud/gaussdb/v3/model/RestoreOldInstanceResponse.h>
#include <huaweicloud/gaussdb/v3/model/RestoreRequest.h>
#include <huaweicloud/gaussdb/v3/model/SetGaussMySqlProxyWeightRequest.h>
#include <huaweicloud/gaussdb/v3/model/SetGaussMySqlProxyWeightResponse.h>
#include <huaweicloud/gaussdb/v3/model/SetGaussMySqlQuotasRequest.h>
#include <huaweicloud/gaussdb/v3/model/SetGaussMySqlQuotasResponse.h>
#include <huaweicloud/gaussdb/v3/model/SetQuotasRequestBody.h>
#include <huaweicloud/gaussdb/v3/model/ShowAuditLogRequest.h>
#include <huaweicloud/gaussdb/v3/model/ShowAuditLogResponse.h>
#include <huaweicloud/gaussdb/v3/model/ShowAutoScalingPolicyRequest.h>
#include <huaweicloud/gaussdb/v3/model/ShowAutoScalingPolicyResponse.h>
#include <huaweicloud/gaussdb/v3/model/ShowBackupRestoreTimeRequest.h>
#include <huaweicloud/gaussdb/v3/model/ShowBackupRestoreTimeResponse.h>
#include <huaweicloud/gaussdb/v3/model/ShowDedicatedResourceInfoRequest.h>
#include <huaweicloud/gaussdb/v3/model/ShowDedicatedResourceInfoResponse.h>
#include <huaweicloud/gaussdb/v3/model/ShowGaussMySqlBackupListRequest.h>
#include <huaweicloud/gaussdb/v3/model/ShowGaussMySqlBackupListResponse.h>
#include <huaweicloud/gaussdb/v3/model/ShowGaussMySqlBackupPolicyRequest.h>
#include <huaweicloud/gaussdb/v3/model/ShowGaussMySqlBackupPolicyResponse.h>
#include <huaweicloud/gaussdb/v3/model/ShowGaussMySqlConfigurationRequest.h>
#include <huaweicloud/gaussdb/v3/model/ShowGaussMySqlConfigurationResponse.h>
#include <huaweicloud/gaussdb/v3/model/ShowGaussMySqlEngineVersionRequest.h>
#include <huaweicloud/gaussdb/v3/model/ShowGaussMySqlEngineVersionResponse.h>
#include <huaweicloud/gaussdb/v3/model/ShowGaussMySqlFlavorsRequest.h>
#include <huaweicloud/gaussdb/v3/model/ShowGaussMySqlFlavorsResponse.h>
#include <huaweicloud/gaussdb/v3/model/ShowGaussMySqlIncrementalBackupListRequest.h>
#include <huaweicloud/gaussdb/v3/model/ShowGaussMySqlIncrementalBackupListResponse.h>
#include <huaweicloud/gaussdb/v3/model/ShowGaussMySqlInstanceInfoRequest.h>
#include <huaweicloud/gaussdb/v3/model/ShowGaussMySqlInstanceInfoResponse.h>
#include <huaweicloud/gaussdb/v3/model/ShowGaussMySqlInstanceInfoUnifyStatusRequest.h>
#include <huaweicloud/gaussdb/v3/model/ShowGaussMySqlInstanceInfoUnifyStatusResponse.h>
#include <huaweicloud/gaussdb/v3/model/ShowGaussMySqlJobInfoRequest.h>
#include <huaweicloud/gaussdb/v3/model/ShowGaussMySqlJobInfoResponse.h>
#include <huaweicloud/gaussdb/v3/model/ShowGaussMySqlProjectQuotasRequest.h>
#include <huaweicloud/gaussdb/v3/model/ShowGaussMySqlProjectQuotasResponse.h>
#include <huaweicloud/gaussdb/v3/model/ShowGaussMySqlProxyFlavorsRequest.h>
#include <huaweicloud/gaussdb/v3/model/ShowGaussMySqlProxyFlavorsResponse.h>
#include <huaweicloud/gaussdb/v3/model/ShowGaussMySqlProxyListRequest.h>
#include <huaweicloud/gaussdb/v3/model/ShowGaussMySqlProxyListResponse.h>
#include <huaweicloud/gaussdb/v3/model/ShowGaussMySqlQuotasRequest.h>
#include <huaweicloud/gaussdb/v3/model/ShowGaussMySqlQuotasResponse.h>
#include <huaweicloud/gaussdb/v3/model/ShowInstanceDatabaseVersionRequest.h>
#include <huaweicloud/gaussdb/v3/model/ShowInstanceDatabaseVersionResponse.h>
#include <huaweicloud/gaussdb/v3/model/ShowInstanceMonitorExtendRequest.h>
#include <huaweicloud/gaussdb/v3/model/ShowInstanceMonitorExtendResponse.h>
#include <huaweicloud/gaussdb/v3/model/ShowIntelligentDiagnosisAbnormalCountOfInstancesRequest.h>
#include <huaweicloud/gaussdb/v3/model/ShowIntelligentDiagnosisAbnormalCountOfInstancesResponse.h>
#include <huaweicloud/gaussdb/v3/model/ShowIntelligentDiagnosisInstanceInfosPerMetricRequest.h>
#include <huaweicloud/gaussdb/v3/model/ShowIntelligentDiagnosisInstanceInfosPerMetricResponse.h>
#include <huaweicloud/gaussdb/v3/model/ShowRestoreTablesRequest.h>
#include <huaweicloud/gaussdb/v3/model/ShowRestoreTablesResponse.h>
#include <huaweicloud/gaussdb/v3/model/ShrinkGaussMySqlProxyRequest.h>
#include <huaweicloud/gaussdb/v3/model/ShrinkGaussMySqlProxyRequestBody.h>
#include <huaweicloud/gaussdb/v3/model/ShrinkGaussMySqlProxyResponse.h>
#include <huaweicloud/gaussdb/v3/model/SwitchAccessControlRequest.h>
#include <huaweicloud/gaussdb/v3/model/SwitchAccessControlRequestBody.h>
#include <huaweicloud/gaussdb/v3/model/SwitchAccessControlResponse.h>
#include <huaweicloud/gaussdb/v3/model/SwitchGaussMySqlConfigurationRequest.h>
#include <huaweicloud/gaussdb/v3/model/SwitchGaussMySqlConfigurationResponse.h>
#include <huaweicloud/gaussdb/v3/model/SwitchGaussMySqlInstanceSslRequest.h>
#include <huaweicloud/gaussdb/v3/model/SwitchGaussMySqlInstanceSslResponse.h>
#include <huaweicloud/gaussdb/v3/model/SwitchGaussMySqlProxySslRequest.h>
#include <huaweicloud/gaussdb/v3/model/SwitchGaussMySqlProxySslResponse.h>
#include <huaweicloud/gaussdb/v3/model/SwitchProxySSLRequest.h>
#include <huaweicloud/gaussdb/v3/model/SwitchSSLRequest.h>
#include <huaweicloud/gaussdb/v3/model/TaurusModifyInstanceMonitorRequestBody.h>
#include <huaweicloud/gaussdb/v3/model/TaurusModifyProxyWeightRequest.h>
#include <huaweicloud/gaussdb/v3/model/TaurusProxyScaleRequest.h>
#include <huaweicloud/gaussdb/v3/model/TaurusRestartInstanceRequest.h>
#include <huaweicloud/gaussdb/v3/model/TaurusSwitchoverRequest.h>
#include <huaweicloud/gaussdb/v3/model/UpdateAuditLogRequest.h>
#include <huaweicloud/gaussdb/v3/model/UpdateAuditLogResponse.h>
#include <huaweicloud/gaussdb/v3/model/UpdateAutoScalingPolicyRequest.h>
#include <huaweicloud/gaussdb/v3/model/UpdateAutoScalingPolicyRequestBody.h>
#include <huaweicloud/gaussdb/v3/model/UpdateAutoScalingPolicyResponse.h>
#include <huaweicloud/gaussdb/v3/model/UpdateBackupOffsitePolicyRequest.h>
#include <huaweicloud/gaussdb/v3/model/UpdateBackupOffsitePolicyRequestBody.h>
#include <huaweicloud/gaussdb/v3/model/UpdateBackupOffsitePolicyResponse.h>
#include <huaweicloud/gaussdb/v3/model/UpdateConfigurationParameterRequestBody.h>
#include <huaweicloud/gaussdb/v3/model/UpdateDatabaseCommentRequest.h>
#include <huaweicloud/gaussdb/v3/model/UpdateDatabaseUserCommentRequest.h>
#include <huaweicloud/gaussdb/v3/model/UpdateGaussMySqlBackupPolicyRequest.h>
#include <huaweicloud/gaussdb/v3/model/UpdateGaussMySqlBackupPolicyResponse.h>
#include <huaweicloud/gaussdb/v3/model/UpdateGaussMySqlConfigurationRequest.h>
#include <huaweicloud/gaussdb/v3/model/UpdateGaussMySqlConfigurationResponse.h>
#include <huaweicloud/gaussdb/v3/model/UpdateGaussMySqlDatabaseCommentRequest.h>
#include <huaweicloud/gaussdb/v3/model/UpdateGaussMySqlDatabaseCommentResponse.h>
#include <huaweicloud/gaussdb/v3/model/UpdateGaussMySqlDatabaseUserCommentRequest.h>
#include <huaweicloud/gaussdb/v3/model/UpdateGaussMySqlDatabaseUserCommentResponse.h>
#include <huaweicloud/gaussdb/v3/model/UpdateGaussMySqlInstanceAliasRequest.h>
#include <huaweicloud/gaussdb/v3/model/UpdateGaussMySqlInstanceAliasResponse.h>
#include <huaweicloud/gaussdb/v3/model/UpdateGaussMySqlInstanceEipRequest.h>
#include <huaweicloud/gaussdb/v3/model/UpdateGaussMySqlInstanceEipResponse.h>
#include <huaweicloud/gaussdb/v3/model/UpdateGaussMySqlInstanceInternalIpRequest.h>
#include <huaweicloud/gaussdb/v3/model/UpdateGaussMySqlInstanceInternalIpResponse.h>
#include <huaweicloud/gaussdb/v3/model/UpdateGaussMySqlInstanceNameRequest.h>
#include <huaweicloud/gaussdb/v3/model/UpdateGaussMySqlInstanceNameResponse.h>
#include <huaweicloud/gaussdb/v3/model/UpdateGaussMySqlInstanceOpsWindowRequest.h>
#include <huaweicloud/gaussdb/v3/model/UpdateGaussMySqlInstanceOpsWindowResponse.h>
#include <huaweicloud/gaussdb/v3/model/UpdateGaussMySqlInstancePortRequest.h>
#include <huaweicloud/gaussdb/v3/model/UpdateGaussMySqlInstancePortResponse.h>
#include <huaweicloud/gaussdb/v3/model/UpdateGaussMySqlInstanceSecurityGroupRequest.h>
#include <huaweicloud/gaussdb/v3/model/UpdateGaussMySqlInstanceSecurityGroupResponse.h>
#include <huaweicloud/gaussdb/v3/model/UpdateGaussMySqlQuotasRequest.h>
#include <huaweicloud/gaussdb/v3/model/UpdateGaussMySqlQuotasResponse.h>
#include <huaweicloud/gaussdb/v3/model/UpdateInstanceConfigurationsRequest.h>
#include <huaweicloud/gaussdb/v3/model/UpdateInstanceConfigurationsRequestBody.h>
#include <huaweicloud/gaussdb/v3/model/UpdateInstanceConfigurationsResponse.h>
#include <huaweicloud/gaussdb/v3/model/UpdateInstanceMonitorRequest.h>
#include <huaweicloud/gaussdb/v3/model/UpdateInstanceMonitorResponse.h>
#include <huaweicloud/gaussdb/v3/model/UpdateProxyConnectionPoolTypeRequest.h>
#include <huaweicloud/gaussdb/v3/model/UpdateProxyConnectionPoolTypeResponse.h>
#include <huaweicloud/gaussdb/v3/model/UpdateProxyNewConfigRequestBody.h>
#include <huaweicloud/gaussdb/v3/model/UpdateProxyNewConfigurationsRequest.h>
#include <huaweicloud/gaussdb/v3/model/UpdateProxyNewConfigurationsResponse.h>
#include <huaweicloud/gaussdb/v3/model/UpdateProxyPortRequest.h>
#include <huaweicloud/gaussdb/v3/model/UpdateProxyPortRequestBody.h>
#include <huaweicloud/gaussdb/v3/model/UpdateProxyPortResponse.h>
#include <huaweicloud/gaussdb/v3/model/UpdateProxySessionConsistenceRequest.h>
#include <huaweicloud/gaussdb/v3/model/UpdateProxySessionConsistenceResponse.h>
#include <huaweicloud/gaussdb/v3/model/UpdateTransactionSplitStatusRequest.h>
#include <huaweicloud/gaussdb/v3/model/UpdateTransactionSplitStatusResponse.h>
#include <huaweicloud/gaussdb/v3/model/UpgradeDatabaseRequest.h>
#include <huaweicloud/gaussdb/v3/model/UpgradeGaussMySqlInstanceDatabaseRequest.h>
#include <huaweicloud/gaussdb/v3/model/UpgradeGaussMySqlInstanceDatabaseResponse.h>
#include <string>

#include <huaweicloud/gaussdb/v3/model/DeleteSqlFilterRuleReq.h>
#include <huaweicloud/gaussdb/v3/model/DeleteSqlFilterRuleRequest.h>
#include <huaweicloud/gaussdb/v3/model/DeleteSqlFilterRuleResponse.h>
#include <huaweicloud/gaussdb/v3/model/OperateSqlFilterControlReq.h>
#include <huaweicloud/gaussdb/v3/model/OperateSqlFilterRuleReq.h>
#include <huaweicloud/gaussdb/v3/model/SetSqlFilterRuleRequest.h>
#include <huaweicloud/gaussdb/v3/model/SetSqlFilterRuleResponse.h>
#include <huaweicloud/gaussdb/v3/model/ShowSqlFilterControlRequest.h>
#include <huaweicloud/gaussdb/v3/model/ShowSqlFilterControlResponse.h>
#include <huaweicloud/gaussdb/v3/model/ShowSqlFilterRuleRequest.h>
#include <huaweicloud/gaussdb/v3/model/ShowSqlFilterRuleResponse.h>
#include <huaweicloud/gaussdb/v3/model/UpdateSqlFilterControlRequest.h>
#include <huaweicloud/gaussdb/v3/model/UpdateSqlFilterControlResponse.h>
#include <string>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Object.h>
#undef U
#include <boost/optional.hpp>

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {

using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Gaussdb::V3::Model;

class HUAWEICLOUD_GAUSSDB_V3_EXPORT  GaussDBClient : public Client
{
public:

    GaussDBClient();

    virtual ~GaussDBClient();

    static ClientBuilder<GaussDBClient> newBuilder();

    // 授予数据库用户数据库权限
    //
    // 授予云数据库 GaussDB(for MySQL)实例数据库用户数据库权限。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddDatabasePermissionResponse> addDatabasePermission(
        AddDatabasePermissionRequest &request
    );
    // 批量添加或删除标签
    //
    // 批量添加或删除指定实例的标签。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchTagActionResponse> batchTagAction(
        BatchTagActionRequest &request
    );
    // 解绑弹性公网IP
    //
    // 实例解绑弹性公网IP。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CancelGaussMySqlInstanceEipResponse> cancelGaussMySqlInstanceEip(
        CancelGaussMySqlInstanceEipRequest &request
    );
    // 取消定时任务
    //
    // 取消定时任务
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CancelScheduleTaskResponse> cancelScheduleTask(
        CancelScheduleTaskRequest &request
    );
    // 变更实例规格
    //
    // 变更数据库实例的规格。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ChangeGaussMySqlInstanceSpecificationResponse> changeGaussMySqlInstanceSpecification(
        ChangeGaussMySqlInstanceSpecificationRequest &request
    );
    // 数据库代理规格变更
    //
    // 数据库代理规格变更。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ChangeGaussMySqlProxySpecificationResponse> changeGaussMySqlProxySpecification(
        ChangeGaussMySqlProxySpecificationRequest &request
    );
    // 资源预校验
    //
    // 资源预校验。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CheckResourceResponse> checkResource(
        CheckResourceRequest &request
    );
    // 复制参数组
    //
    // 复制参数组。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CopyConfigurationsResponse> copyConfigurations(
        CopyConfigurationsRequest &request
    );
    // 复制实例参数组
    //
    // 复制实例参数组。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CopyInstanceConfigurationsResponse> copyInstanceConfigurations(
        CopyInstanceConfigurationsRequest &request
    );
    // 设置访问控制规则
    //
    // 设置访问控制规则。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateAccessControlResponse> createAccessControl(
        CreateAccessControlRequest &request
    );
    // 创建手动备份
    //
    // 创建手动备份。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateGaussMySqlBackupResponse> createGaussMySqlBackup(
        CreateGaussMySqlBackupRequest &request
    );
    // 创建参数模板
    //
    // 创建参数模板信息，包含参数模板名称、描述、数据库版本信息、参数值。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateGaussMySqlConfigurationResponse> createGaussMySqlConfiguration(
        CreateGaussMySqlConfigurationRequest &request
    );
    // 创建数据库
    //
    // 创建云数据库 GaussDB(for MySQL)实例数据库。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateGaussMySqlDatabaseResponse> createGaussMySqlDatabase(
        CreateGaussMySqlDatabaseRequest &request
    );
    // 创建数据库用户
    //
    // 创建云数据库GaussDB(for MySQL)实例数据库用户。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateGaussMySqlDatabaseUserResponse> createGaussMySqlDatabaseUser(
        CreateGaussMySqlDatabaseUserRequest &request
    );
    // 创建数据库实例
    //
    // 创建云数据库GaussDB(for MySQL)实例。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateGaussMySqlInstanceResponse> createGaussMySqlInstance(
        CreateGaussMySqlInstanceRequest &request
    );
    // 开启数据库代理
    //
    // 开启数据库代理，只支持ELB模式。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateGaussMySqlProxyResponse> createGaussMySqlProxy(
        CreateGaussMySqlProxyRequest &request
    );
    // 创建只读节点
    //
    // 创建只读节点。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateGaussMySqlReadonlyNodeResponse> createGaussMySqlReadonlyNode(
        CreateGaussMySqlReadonlyNodeRequest &request
    );
    // 申请内网域名
    //
    // 申请内网域名。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateGaussMysqlDnsResponse> createGaussMysqlDns(
        CreateGaussMysqlDnsRequest &request
    );
    // 表级时间点恢复
    //
    // 表级时间点恢复。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateRestoreTablesResponse> createRestoreTables(
        CreateRestoreTablesRequest &request
    );
    // 删除数据库用户的数据库权限
    //
    // 删除云数据库 GaussDB(for MySQL)实例数据库用户的数据库权限。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteDatabasePermissionResponse> deleteDatabasePermission(
        DeleteDatabasePermissionRequest &request
    );
    // 删除手动备份
    //
    // 删除手动备份。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteGaussMySqlBackupResponse> deleteGaussMySqlBackup(
        DeleteGaussMySqlBackupRequest &request
    );
    // 删除参数模板
    //
    // 删除指定参数模板。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteGaussMySqlConfigurationResponse> deleteGaussMySqlConfiguration(
        DeleteGaussMySqlConfigurationRequest &request
    );
    // 删除数据库
    //
    // 删除云数据库 GaussDB(for MySQL)实例数据库。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteGaussMySqlDatabaseResponse> deleteGaussMySqlDatabase(
        DeleteGaussMySqlDatabaseRequest &request
    );
    // 删除数据库用户
    //
    // 删除云数据库 GaussDB(for MySQL)实例数据库用户。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteGaussMySqlDatabaseUserResponse> deleteGaussMySqlDatabaseUser(
        DeleteGaussMySqlDatabaseUserRequest &request
    );
    // 删除/退订数据库实例
    //
    // 删除/退订数据库实例。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteGaussMySqlInstanceResponse> deleteGaussMySqlInstance(
        DeleteGaussMySqlInstanceRequest &request
    );
    // 关闭数据库代理
    //
    // 关闭数据库代理。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteGaussMySqlProxyResponse> deleteGaussMySqlProxy(
        DeleteGaussMySqlProxyRequest &request
    );
    // 删除/退订只读节点
    //
    // 删除/退订实例的只读节点。多可用区模式删除/退订只读节点时，要保证删除/退订后，剩余的只读节点和主节点在不同的可用区中，否则无法删除/退订该只读节点。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteGaussMySqlReadonlyNodeResponse> deleteGaussMySqlReadonlyNode(
        DeleteGaussMySqlReadonlyNodeRequest &request
    );
    // 删除定时任务
    //
    // 删除定时任务。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteScheduleTasKResponse> deleteScheduleTasK(
        DeleteScheduleTasKRequest &request
    );
    // 删除指定任务记录
    //
    // 删除指定任务记录。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteTaskRecordResponse> deleteTaskRecord(
        DeleteTaskRecordRequest &request
    );
    // 查询实例是否开启备份加密功能
    //
    // 查询实例是否开启备份加密功能。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DescribeBackupEncryptStatusResponse> describeBackupEncryptStatus(
        DescribeBackupEncryptStatusRequest &request
    );
    // 包周期存储扩容
    //
    // 包周期存储扩容。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ExpandGaussMySqlInstanceVolumeResponse> expandGaussMySqlInstanceVolume(
        ExpandGaussMySqlInstanceVolumeRequest &request
    );
    // 扩容数据库代理节点的数量
    //
    // 扩容数据库代理节点的数量。
    // DeC专属云账号暂不支持数据库代理。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ExpandGaussMySqlProxyResponse> expandGaussMySqlProxy(
        ExpandGaussMySqlProxyRequest &request
    );
    // 手动主备倒换
    //
    // 用户手动进行主备倒换。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<InvokeGaussMySqlInstanceSwitchOverResponse> invokeGaussMySqlInstanceSwitchOver(
        InvokeGaussMySqlInstanceSwitchOverRequest &request
    );
    // 获取全量SQL的临时下载链接
    //
    // 获取全量SQL的临时下载链接。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAuditLogDownloadLinkResponse> listAuditLogDownloadLink(
        ListAuditLogDownloadLinkRequest &request
    );
    // 对比参数模板
    //
    // 比较两个参数模板之间的差异。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListConfigurationsDifferencesResponse> listConfigurationsDifferences(
        ListConfigurationsDifferencesRequest &request
    );
    // 查询可应用的实例列表
    //
    // 查询指定参数模板可被应用的实例。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListConfigurationsInstancesResponse> listConfigurationsInstances(
        ListConfigurationsInstancesRequest &request
    );
    // 查询企业项目
    //
    // 查询企业项目。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListEnterpriseProjectsResponse> listEnterpriseProjects(
        ListEnterpriseProjectsRequest &request
    );
    // 查询参数模板
    //
    // 获取参数模板列表，包括所有数据库的默认参数模板和用户创建的参数模板。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListGaussMySqlConfigurationsResponse> listGaussMySqlConfigurations(
        ListGaussMySqlConfigurationsRequest &request
    );
    // 查询数据库列表
    //
    // 查询 GaussDB(for MySQL)实例数据库。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListGaussMySqlDatabaseResponse> listGaussMySqlDatabase(
        ListGaussMySqlDatabaseRequest &request
    );
    // 查询数据库可用字符集
    //
    // 查询云数据库 GaussDB(for MySQL)实例数据库可用字符集。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListGaussMySqlDatabaseCharsetsResponse> listGaussMySqlDatabaseCharsets(
        ListGaussMySqlDatabaseCharsetsRequest &request
    );
    // 查询数据库用户
    //
    // 查询云数据库 GaussDB(for MySQL)实例数据库用户。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListGaussMySqlDatabaseUserResponse> listGaussMySqlDatabaseUser(
        ListGaussMySqlDatabaseUserRequest &request
    );
    // 查询专属资源池列表
    //
    // 获取专属资源池列表，包括用户开通的所有专属资源池信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListGaussMySqlDedicatedResourcesResponse> listGaussMySqlDedicatedResources(
        ListGaussMySqlDedicatedResourcesRequest &request
    );
    // 批量查询实例详情
    //
    // 批量查询实例详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListGaussMySqlInstanceDetailInfoResponse> listGaussMySqlInstanceDetailInfo(
        ListGaussMySqlInstanceDetailInfoRequest &request
    );
    // 批量查询实例详情
    //
    // 批量查询实例详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListGaussMySqlInstanceDetailInfoUnifyStatusResponse> listGaussMySqlInstanceDetailInfoUnifyStatus(
        ListGaussMySqlInstanceDetailInfoUnifyStatusRequest &request
    );
    // 查询实例列表
    //
    // 根据指定条件查询实例列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListGaussMySqlInstancesResponse> listGaussMySqlInstances(
        ListGaussMySqlInstancesRequest &request
    );
    // 查询实例列表
    //
    // 根据指定条件查询实例列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListGaussMySqlInstancesUnifyStatusResponse> listGaussMySqlInstancesUnifyStatus(
        ListGaussMySqlInstancesUnifyStatusRequest &request
    );
    // 获取即时任务列表
    //
    // 获取即时任务列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListImmediateJobsResponse> listImmediateJobs(
        ListImmediateJobsRequest &request
    );
    // 获取指定实例的参数信息
    //
    // 获取指定实例的参数信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListInstanceConfigurationsResponse> listInstanceConfigurations(
        ListInstanceConfigurationsRequest &request
    );
    // 查询资源标签
    //
    // 查询指定实例的标签信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListInstanceTagsResponse> listInstanceTags(
        ListInstanceTagsRequest &request
    );
    // 获取错误日志详情列表
    //
    // 获取指定实例的错误日志详情列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListLtsErrorLogDetailsResponse> listLtsErrorLogDetails(
        ListLtsErrorLogDetailsRequest &request
    );
    // 获取慢日志详情列表
    //
    // 获取指定实例的慢日志详情列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListLtsSlowlogDetailsResponse> listLtsSlowlogDetails(
        ListLtsSlowlogDetailsRequest &request
    );
    // 查询参数修改历史
    //
    // 查询参数修改历史。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListModifyHistoryResponse> listModifyHistory(
        ListModifyHistoryRequest &request
    );
    // 查询项目标签
    //
    // 查询指定project ID下实例的所有标签集合。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListProjectTagsResponse> listProjectTags(
        ListProjectTagsRequest &request
    );
    // 获取定时任务列表
    //
    // 获取定时任务列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListScheduleJobsResponse> listScheduleJobs(
        ListScheduleJobsRequest &request
    );
    // 打开或关闭备份加密
    //
    // 打开或关闭备份加密。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ModifyBackupEncryptStatusResponse> modifyBackupEncryptStatus(
        ModifyBackupEncryptStatusRequest &request
    );
    // 设置读写分离路由模式
    //
    // 设置读写分离路由模式。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ModifyGaussMySqlProxyRouteModeResponse> modifyGaussMySqlProxyRouteMode(
        ModifyGaussMySqlProxyRouteModeRequest &request
    );
    // 修改内网域名
    //
    // 修改内网域名。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ModifyGaussMysqlDnsResponse> modifyGaussMysqlDns(
        ModifyGaussMysqlDnsRequest &request
    );
    // 修改数据库用户密码
    //
    // 修改云数据库 GaussDB(for MySQL)实例数据库用户密码。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ResetGaussMySqlDatabasePasswordResponse> resetGaussMySqlDatabasePassword(
        ResetGaussMySqlDatabasePasswordRequest &request
    );
    // 重置数据库密码
    //
    // 重置数据库密码。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ResetGaussMySqlPasswordResponse> resetGaussMySqlPassword(
        ResetGaussMySqlPasswordRequest &request
    );
    // 重启数据库实例
    //
    // 重启数据库实例。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RestartGaussMySqlInstanceResponse> restartGaussMySqlInstance(
        RestartGaussMySqlInstanceRequest &request
    );
    // 节点重启
    //
    // 节点重启。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RestartGaussMySqlNodeResponse> restartGaussMySqlNode(
        RestartGaussMySqlNodeRequest &request
    );
    // 备份恢复到当前实例或已有实例
    //
    // 备份恢复到当前实例或已有实例。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RestoreOldInstanceResponse> restoreOldInstance(
        RestoreOldInstanceRequest &request
    );
    // 设置读写分离权重
    //
    // 设置读写分离权重。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SetGaussMySqlProxyWeightResponse> setGaussMySqlProxyWeight(
        SetGaussMySqlProxyWeightRequest &request
    );
    // 设置租户基于企业项目的资源配额
    //
    // 设置指定企业项目的资源配额。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SetGaussMySqlQuotasResponse> setGaussMySqlQuotas(
        SetGaussMySqlQuotasRequest &request
    );
    // 查询全量SQL开关状态
    //
    // 查询全量SQL开关状态。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAuditLogResponse> showAuditLog(
        ShowAuditLogRequest &request
    );
    // 查询自动变配
    //
    // 查询自动变配。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAutoScalingPolicyResponse> showAutoScalingPolicy(
        ShowAutoScalingPolicyRequest &request
    );
    // 查询可恢复时间段
    //
    // 查询实例的可恢复时间段。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowBackupRestoreTimeResponse> showBackupRestoreTime(
        ShowBackupRestoreTimeRequest &request
    );
    // 查询专属资源信息详情
    //
    // 查询专属资源信息详情。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDedicatedResourceInfoResponse> showDedicatedResourceInfo(
        ShowDedicatedResourceInfoRequest &request
    );
    // 查询全量备份列表
    //
    // 查询全量备份列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowGaussMySqlBackupListResponse> showGaussMySqlBackupList(
        ShowGaussMySqlBackupListRequest &request
    );
    // 查询自动备份策略
    //
    // 查询自动备份策略。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowGaussMySqlBackupPolicyResponse> showGaussMySqlBackupPolicy(
        ShowGaussMySqlBackupPolicyRequest &request
    );
    // 获取参数模板详情
    //
    // 获取指定参数模板的参数信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowGaussMySqlConfigurationResponse> showGaussMySqlConfiguration(
        ShowGaussMySqlConfigurationRequest &request
    );
    // 查询数据库引擎的版本
    //
    // 获取指定数据库引擎对应的数据库版本信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowGaussMySqlEngineVersionResponse> showGaussMySqlEngineVersion(
        ShowGaussMySqlEngineVersionRequest &request
    );
    // 查询数据库规格
    //
    // 获取指定数据库引擎版本对应的规格信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowGaussMySqlFlavorsResponse> showGaussMySqlFlavors(
        ShowGaussMySqlFlavorsRequest &request
    );
    // 查询增量备份列表
    //
    // 查询增量备份列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowGaussMySqlIncrementalBackupListResponse> showGaussMySqlIncrementalBackupList(
        ShowGaussMySqlIncrementalBackupListRequest &request
    );
    // 查询实例详情信息
    //
    // 查询实例详情信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowGaussMySqlInstanceInfoResponse> showGaussMySqlInstanceInfo(
        ShowGaussMySqlInstanceInfoRequest &request
    );
    // 查询实例详情信息
    //
    // 查询实例详情信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowGaussMySqlInstanceInfoUnifyStatusResponse> showGaussMySqlInstanceInfoUnifyStatus(
        ShowGaussMySqlInstanceInfoUnifyStatusRequest &request
    );
    // 获取指定ID的任务信息
    //
    // 获取GaussDB(for MySQL)任务中心指定ID的任务信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowGaussMySqlJobInfoResponse> showGaussMySqlJobInfo(
        ShowGaussMySqlJobInfoRequest &request
    );
    // 查询租户的实例配额
    //
    // 获取指定租户的资源配额。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowGaussMySqlProjectQuotasResponse> showGaussMySqlProjectQuotas(
        ShowGaussMySqlProjectQuotasRequest &request
    );
    // 查询数据库代理规格信息
    //
    // 查询数据库代理规格信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowGaussMySqlProxyFlavorsResponse> showGaussMySqlProxyFlavors(
        ShowGaussMySqlProxyFlavorsRequest &request
    );
    // 查询数据库代理信息列表
    //
    // 查询数据库代理信息列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowGaussMySqlProxyListResponse> showGaussMySqlProxyList(
        ShowGaussMySqlProxyListRequest &request
    );
    // 查询租户基于企业项目的资源配额
    //
    // 获取指定企业项目的资源配额。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowGaussMySqlQuotasResponse> showGaussMySqlQuotas(
        ShowGaussMySqlQuotasRequest &request
    );
    // 查询内核版本信息
    //
    // 查询内核版本信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowInstanceDatabaseVersionResponse> showInstanceDatabaseVersion(
        ShowInstanceDatabaseVersionRequest &request
    );
    // 查询实例秒级监控
    //
    // 查询实例秒级监控信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowInstanceMonitorExtendResponse> showInstanceMonitorExtend(
        ShowInstanceMonitorExtendRequest &request
    );
    // 获取各指标的异常实例数
    //
    // 获取各指标的异常实例数。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowIntelligentDiagnosisAbnormalCountOfInstancesResponse> showIntelligentDiagnosisAbnormalCountOfInstances(
        ShowIntelligentDiagnosisAbnormalCountOfInstancesRequest &request
    );
    // 获取某个指标的异常实例信息
    //
    // 获取某个指标的异常实例信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowIntelligentDiagnosisInstanceInfosPerMetricResponse> showIntelligentDiagnosisInstanceInfosPerMetric(
        ShowIntelligentDiagnosisInstanceInfosPerMetricRequest &request
    );
    // 查询表级时间点恢复可选表
    //
    // 查询表级时间点恢复可选表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowRestoreTablesResponse> showRestoreTables(
        ShowRestoreTablesRequest &request
    );
    // 减少数据库代理节点的数量
    //
    // 缩容数据库代理节点的数量。
    // DeC专属云账号暂不支持数据库代理。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShrinkGaussMySqlProxyResponse> shrinkGaussMySqlProxy(
        ShrinkGaussMySqlProxyRequest &request
    );
    // 开启或关闭访问控制
    //
    // 开启或关闭访问控制。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SwitchAccessControlResponse> switchAccessControl(
        SwitchAccessControlRequest &request
    );
    // 应用参数模板
    //
    // 指定实例变更参数模板。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SwitchGaussMySqlConfigurationResponse> switchGaussMySqlConfiguration(
        SwitchGaussMySqlConfigurationRequest &request
    );
    // 开关SSL
    //
    // 为实例设置SSL数据加密。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SwitchGaussMySqlInstanceSslResponse> switchGaussMySqlInstanceSsl(
        SwitchGaussMySqlInstanceSslRequest &request
    );
    // 开关数据库代理SSL
    //
    // 为数据库代理设置SSL数据加密。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SwitchGaussMySqlProxySslResponse> switchGaussMySqlProxySsl(
        SwitchGaussMySqlProxySslRequest &request
    );
    // 开启或者关闭全量SQL
    //
    // 开启或者关闭全量SQL。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateAuditLogResponse> updateAuditLog(
        UpdateAuditLogRequest &request
    );
    // 设置自动变配
    //
    // 设置自动变配。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateAutoScalingPolicyResponse> updateAutoScalingPolicy(
        UpdateAutoScalingPolicyRequest &request
    );
    // 设置跨区备份策略
    //
    // 设置跨区备份策略。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateBackupOffsitePolicyResponse> updateBackupOffsitePolicy(
        UpdateBackupOffsitePolicyRequest &request
    );
    // 设置备份策略
    //
    // 设置自动备份策略。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateGaussMySqlBackupPolicyResponse> updateGaussMySqlBackupPolicy(
        UpdateGaussMySqlBackupPolicyRequest &request
    );
    // 修改参数模板
    //
    // 修改指定参数模板的参数信息，包括名称、描述、指定参数的值。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateGaussMySqlConfigurationResponse> updateGaussMySqlConfiguration(
        UpdateGaussMySqlConfigurationRequest &request
    );
    // 修改数据库备注
    //
    // 修改云数据库 GaussDB(for MySQL)实例数据库备注。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateGaussMySqlDatabaseCommentResponse> updateGaussMySqlDatabaseComment(
        UpdateGaussMySqlDatabaseCommentRequest &request
    );
    // 修改数据库用户备注
    //
    // 修改云数据库 GaussDB(for MySQL)实例数据库用户备注。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateGaussMySqlDatabaseUserCommentResponse> updateGaussMySqlDatabaseUserComment(
        UpdateGaussMySqlDatabaseUserCommentRequest &request
    );
    // 修改实例备注
    //
    // 修改实例备注。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateGaussMySqlInstanceAliasResponse> updateGaussMySqlInstanceAlias(
        UpdateGaussMySqlInstanceAliasRequest &request
    );
    // 绑定弹性公网IP
    //
    // 实例绑定弹性公网IP，供外网连接使用。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateGaussMySqlInstanceEipResponse> updateGaussMySqlInstanceEip(
        UpdateGaussMySqlInstanceEipRequest &request
    );
    // 修改内网地址
    //
    // 修改实例内网地址。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateGaussMySqlInstanceInternalIpResponse> updateGaussMySqlInstanceInternalIp(
        UpdateGaussMySqlInstanceInternalIpRequest &request
    );
    // 修改实例名称
    //
    // 修改实例名称。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateGaussMySqlInstanceNameResponse> updateGaussMySqlInstanceName(
        UpdateGaussMySqlInstanceNameRequest &request
    );
    // 设置可维护时间段
    //
    // 设置可维护时间段。建议将可维护时间段设置在业务低峰期，避免业务在维护过程中异常中断。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateGaussMySqlInstanceOpsWindowResponse> updateGaussMySqlInstanceOpsWindow(
        UpdateGaussMySqlInstanceOpsWindowRequest &request
    );
    // 修改实例端口
    //
    // 修改实例数据库端口。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateGaussMySqlInstancePortResponse> updateGaussMySqlInstancePort(
        UpdateGaussMySqlInstancePortRequest &request
    );
    // 修改安全组
    //
    // 修改指定实例安全组。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateGaussMySqlInstanceSecurityGroupResponse> updateGaussMySqlInstanceSecurityGroup(
        UpdateGaussMySqlInstanceSecurityGroupRequest &request
    );
    // 修改租户基于企业项目的资源配额
    //
    // 修改指定企业项目的资源配额。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateGaussMySqlQuotasResponse> updateGaussMySqlQuotas(
        UpdateGaussMySqlQuotasRequest &request
    );
    // 修改指定实例的参数
    //
    // 修改指定实例的参数。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateInstanceConfigurationsResponse> updateInstanceConfigurations(
        UpdateInstanceConfigurationsRequest &request
    );
    // 设置实例秒级监控
    //
    // 设置实例秒级监控，包括1秒监控和5秒监控。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateInstanceMonitorResponse> updateInstanceMonitor(
        UpdateInstanceMonitorRequest &request
    );
    // 更改数据库代理连接池类型
    //
    // 更改数据库代理连接池类型。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateProxyConnectionPoolTypeResponse> updateProxyConnectionPoolType(
        UpdateProxyConnectionPoolTypeRequest &request
    );
    // 修改代理实例参数
    //
    // 修改数据库代理参数。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateProxyNewConfigurationsResponse> updateProxyNewConfigurations(
        UpdateProxyNewConfigurationsRequest &request
    );
    // 修改读写分离端口号
    //
    // 修改读写分离端口号。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateProxyPortResponse> updateProxyPort(
        UpdateProxyPortRequest &request
    );
    // 修改代理会话一致性
    //
    // 修改代理会话一致性。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateProxySessionConsistenceResponse> updateProxySessionConsistence(
        UpdateProxySessionConsistenceRequest &request
    );
    // 设置proxy事务拆分
    //
    // 设置proxy事务拆分。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateTransactionSplitStatusResponse> updateTransactionSplitStatus(
        UpdateTransactionSplitStatusRequest &request
    );
    // 内核版本升级
    //
    // 内核版本升级。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpgradeGaussMySqlInstanceDatabaseResponse> upgradeGaussMySqlInstanceDatabase(
        UpgradeGaussMySqlInstanceDatabaseRequest &request
    );

    // 删除SQL限流规则
    //
    // 删除SQL限流规则。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteSqlFilterRuleResponse> deleteSqlFilterRule(
        DeleteSqlFilterRuleRequest &request
    );
    // 设置SQL限流规则
    //
    // 设置SQL限流规则。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SetSqlFilterRuleResponse> setSqlFilterRule(
        SetSqlFilterRuleRequest &request
    );
    // 查询SQL限流开关状态
    //
    // 查询SQL限流开关状态。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowSqlFilterControlResponse> showSqlFilterControl(
        ShowSqlFilterControlRequest &request
    );
    // 查询SQL限流规则
    //
    // 查询SQL限流规则。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowSqlFilterRuleResponse> showSqlFilterRule(
        ShowSqlFilterRuleRequest &request
    );
    // 开启或者关闭SQL限流
    //
    // 开启或者关闭SQL限流。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateSqlFilterControlResponse> updateSqlFilterControl(
        UpdateSqlFilterControlRequest &request
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

template class HUAWEICLOUD_GAUSSDB_V3_EXPORT ::HuaweiCloud::Sdk::Core::ClientBuilder<::HuaweiCloud::Sdk::Gaussdb::V3::GaussDBClient>;

#endif // HUAWEICLOUD_SDK_GAUSSDB_V3_GaussDBClient_H_

