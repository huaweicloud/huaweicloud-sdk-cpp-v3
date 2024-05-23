#ifndef HUAWEICLOUD_SDK_RDS_V3_RdsClient_H_
#define HUAWEICLOUD_SDK_RDS_V3_RdsClient_H_

#include <huaweicloud/rds/v3/RdsExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


#include <huaweicloud/rds/v3/model/AddLogConfigResponseBody.h>
#include <huaweicloud/rds/v3/model/AddPostgresqlHbaConfRequest.h>
#include <huaweicloud/rds/v3/model/AddPostgresqlHbaConfResponse.h>
#include <huaweicloud/rds/v3/model/ApplyConfigurationAsyncRequest.h>
#include <huaweicloud/rds/v3/model/ApplyConfigurationAsyncResponse.h>
#include <huaweicloud/rds/v3/model/ApplyConfigurationRequest.h>
#include <huaweicloud/rds/v3/model/AttachEipRequest.h>
#include <huaweicloud/rds/v3/model/AttachEipResponse.h>
#include <huaweicloud/rds/v3/model/BatchDeleteBackupRequestBody.h>
#include <huaweicloud/rds/v3/model/BatchDeleteManualBackupRequest.h>
#include <huaweicloud/rds/v3/model/BatchDeleteManualBackupResponse.h>
#include <huaweicloud/rds/v3/model/BatchRestoreDatabaseRequest.h>
#include <huaweicloud/rds/v3/model/BatchRestoreDatabaseResponse.h>
#include <huaweicloud/rds/v3/model/BatchRestorePostgreSqlTablesRequest.h>
#include <huaweicloud/rds/v3/model/BatchRestorePostgreSqlTablesResponse.h>
#include <huaweicloud/rds/v3/model/BatchShutdownInsReq.h>
#include <huaweicloud/rds/v3/model/BatchStopInstanceRequest.h>
#include <huaweicloud/rds/v3/model/BatchStopInstanceResponse.h>
#include <huaweicloud/rds/v3/model/BatchTagActionAddRequestBody.h>
#include <huaweicloud/rds/v3/model/BatchTagActionDelRequestBody.h>
#include <huaweicloud/rds/v3/model/BatchTagAddActionRequest.h>
#include <huaweicloud/rds/v3/model/BatchTagAddActionResponse.h>
#include <huaweicloud/rds/v3/model/BatchTagDelActionRequest.h>
#include <huaweicloud/rds/v3/model/BatchTagDelActionResponse.h>
#include <huaweicloud/rds/v3/model/BindEipRequest.h>
#include <huaweicloud/rds/v3/model/BinlogClearPolicyRequestBody.h>
#include <huaweicloud/rds/v3/model/ChangeFailoverModeRequest.h>
#include <huaweicloud/rds/v3/model/ChangeFailoverModeResponse.h>
#include <huaweicloud/rds/v3/model/ChangeFailoverStrategyRequest.h>
#include <huaweicloud/rds/v3/model/ChangeFailoverStrategyResponse.h>
#include <huaweicloud/rds/v3/model/ChangeOpsWindowRequest.h>
#include <huaweicloud/rds/v3/model/ChangeOpsWindowResponse.h>
#include <huaweicloud/rds/v3/model/ConfigurationCopyRequestBody.h>
#include <huaweicloud/rds/v3/model/ConfigurationForCreation.h>
#include <huaweicloud/rds/v3/model/ConfigurationForUpdate.h>
#include <huaweicloud/rds/v3/model/CopyConfigurationRequest.h>
#include <huaweicloud/rds/v3/model/CopyConfigurationResponse.h>
#include <huaweicloud/rds/v3/model/CreateConfigurationRequest.h>
#include <huaweicloud/rds/v3/model/CreateConfigurationResponse.h>
#include <huaweicloud/rds/v3/model/CreateDnsNameRequest.h>
#include <huaweicloud/rds/v3/model/CreateDnsNameRequestBody.h>
#include <huaweicloud/rds/v3/model/CreateDnsNameResponse.h>
#include <huaweicloud/rds/v3/model/CreateInstanceRequest.h>
#include <huaweicloud/rds/v3/model/CreateInstanceResponse.h>
#include <huaweicloud/rds/v3/model/CreateManualBackupRequest.h>
#include <huaweicloud/rds/v3/model/CreateManualBackupRequestBody.h>
#include <huaweicloud/rds/v3/model/CreateManualBackupResponse.h>
#include <huaweicloud/rds/v3/model/CreateMysqlMultiProxyRequest.h>
#include <huaweicloud/rds/v3/model/CreateRdSforMySqlProxyRequest.h>
#include <huaweicloud/rds/v3/model/CreateRdSforMySqlProxyResponse.h>
#include <huaweicloud/rds/v3/model/CreateRestoreInstanceRequest.h>
#include <huaweicloud/rds/v3/model/CreateRestoreInstanceRequestBody.h>
#include <huaweicloud/rds/v3/model/CreateRestoreInstanceResponse.h>
#include <huaweicloud/rds/v3/model/CreateSqlLimitRequest.h>
#include <huaweicloud/rds/v3/model/CreateSqlLimitResponse.h>
#include <huaweicloud/rds/v3/model/CreateSqlLimitRuleReqV3.h>
#include <huaweicloud/rds/v3/model/CreateXelLogDownloadRequest.h>
#include <huaweicloud/rds/v3/model/CreateXelLogDownloadRequestBody.h>
#include <huaweicloud/rds/v3/model/CreateXelLogDownloadResponse.h>
#include <huaweicloud/rds/v3/model/CustomerModifyAutoEnlargePolicyReq.h>
#include <huaweicloud/rds/v3/model/CustomerUpgradeDatabaseVersionReq.h>
#include <huaweicloud/rds/v3/model/CustomerUpgradeDatabaseVersionReqNew.h>
#include <huaweicloud/rds/v3/model/DataIpRequest.h>
#include <huaweicloud/rds/v3/model/DeleteConfigurationRequest.h>
#include <huaweicloud/rds/v3/model/DeleteConfigurationResponse.h>
#include <huaweicloud/rds/v3/model/DeleteInstanceRequest.h>
#include <huaweicloud/rds/v3/model/DeleteInstanceResponse.h>
#include <huaweicloud/rds/v3/model/DeleteJobRequest.h>
#include <huaweicloud/rds/v3/model/DeleteJobResponse.h>
#include <huaweicloud/rds/v3/model/DeleteLogConfigResponseBody.h>
#include <huaweicloud/rds/v3/model/DeleteLogLtsConfigsRequest.h>
#include <huaweicloud/rds/v3/model/DeleteLogLtsConfigsResponse.h>
#include <huaweicloud/rds/v3/model/DeleteManualBackupRequest.h>
#include <huaweicloud/rds/v3/model/DeleteManualBackupResponse.h>
#include <huaweicloud/rds/v3/model/DeletePostgresqlHbaConfRequest.h>
#include <huaweicloud/rds/v3/model/DeletePostgresqlHbaConfResponse.h>
#include <huaweicloud/rds/v3/model/DeleteRdSforMySqlProxyRequest.h>
#include <huaweicloud/rds/v3/model/DeleteRdSforMySqlProxyResponse.h>
#include <huaweicloud/rds/v3/model/DeleteSqlLimitRequest.h>
#include <huaweicloud/rds/v3/model/DeleteSqlLimitResponse.h>
#include <huaweicloud/rds/v3/model/DeleteSqlLimitRuleReqV3.h>
#include <huaweicloud/rds/v3/model/DownloadErrorlogRequest.h>
#include <huaweicloud/rds/v3/model/DownloadErrorlogResponse.h>
#include <huaweicloud/rds/v3/model/DownloadSlowlogRequest.h>
#include <huaweicloud/rds/v3/model/DownloadSlowlogResponse.h>
#include <huaweicloud/rds/v3/model/EnableConfigurationRequest.h>
#include <huaweicloud/rds/v3/model/EnableConfigurationResponse.h>
#include <huaweicloud/rds/v3/model/EnlargeVolumeRequestBody.h>
#include <huaweicloud/rds/v3/model/ErrorResponse.h>
#include <huaweicloud/rds/v3/model/ErrorRsp.h>
#include <huaweicloud/rds/v3/model/ErrorlogForLtsRequest.h>
#include <huaweicloud/rds/v3/model/FailoverModeRequest.h>
#include <huaweicloud/rds/v3/model/FailoverRequest.h>
#include <huaweicloud/rds/v3/model/FailoverStrategyRequest.h>
#include <huaweicloud/rds/v3/model/FollowerMigrateRequest.h>
#include <huaweicloud/rds/v3/model/GenerateAuditlogDownloadLinkRequest.h>
#include <huaweicloud/rds/v3/model/InstanceRequest.h>
#include <huaweicloud/rds/v3/model/InstanceRestartRequsetBody.h>
#include <huaweicloud/rds/v3/model/ListAuditlogsRequest.h>
#include <huaweicloud/rds/v3/model/ListAuditlogsResponse.h>
#include <huaweicloud/rds/v3/model/ListBackupsRequest.h>
#include <huaweicloud/rds/v3/model/ListBackupsResponse.h>
#include <huaweicloud/rds/v3/model/ListCollationsRequest.h>
#include <huaweicloud/rds/v3/model/ListCollationsResponse.h>
#include <huaweicloud/rds/v3/model/ListConfigurationsRequest.h>
#include <huaweicloud/rds/v3/model/ListConfigurationsResponse.h>
#include <huaweicloud/rds/v3/model/ListDatastoresRequest.h>
#include <huaweicloud/rds/v3/model/ListDatastoresResponse.h>
#include <huaweicloud/rds/v3/model/ListDrRelationsRequest.h>
#include <huaweicloud/rds/v3/model/ListDrRelationsResponse.h>
#include <huaweicloud/rds/v3/model/ListEngineFlavorsRequest.h>
#include <huaweicloud/rds/v3/model/ListEngineFlavorsResponse.h>
#include <huaweicloud/rds/v3/model/ListErrorLogsNewRequest.h>
#include <huaweicloud/rds/v3/model/ListErrorLogsNewResponse.h>
#include <huaweicloud/rds/v3/model/ListErrorLogsRequest.h>
#include <huaweicloud/rds/v3/model/ListErrorLogsResponse.h>
#include <huaweicloud/rds/v3/model/ListErrorlogForLtsRequest.h>
#include <huaweicloud/rds/v3/model/ListErrorlogForLtsResponse.h>
#include <huaweicloud/rds/v3/model/ListFlavorsRequest.h>
#include <huaweicloud/rds/v3/model/ListFlavorsResponse.h>
#include <huaweicloud/rds/v3/model/ListHistoryDatabaseRequest.h>
#include <huaweicloud/rds/v3/model/ListHistoryDatabaseResponse.h>
#include <huaweicloud/rds/v3/model/ListInspectionHistoriesRequest.h>
#include <huaweicloud/rds/v3/model/ListInspectionHistoriesResponse.h>
#include <huaweicloud/rds/v3/model/ListInstanceDiagnosisRequest.h>
#include <huaweicloud/rds/v3/model/ListInstanceDiagnosisResponse.h>
#include <huaweicloud/rds/v3/model/ListInstanceParamHistoriesRequest.h>
#include <huaweicloud/rds/v3/model/ListInstanceParamHistoriesResponse.h>
#include <huaweicloud/rds/v3/model/ListInstanceTagsRequest.h>
#include <huaweicloud/rds/v3/model/ListInstanceTagsResponse.h>
#include <huaweicloud/rds/v3/model/ListInstancesInfoDiagnosisRequest.h>
#include <huaweicloud/rds/v3/model/ListInstancesInfoDiagnosisResponse.h>
#include <huaweicloud/rds/v3/model/ListInstancesRequest.h>
#include <huaweicloud/rds/v3/model/ListInstancesResponse.h>
#include <huaweicloud/rds/v3/model/ListInstancesSupportFastRestoreRequest.h>
#include <huaweicloud/rds/v3/model/ListInstancesSupportFastRestoreRequestBody.h>
#include <huaweicloud/rds/v3/model/ListInstancesSupportFastRestoreResponse.h>
#include <huaweicloud/rds/v3/model/ListJobInfoDetailRequest.h>
#include <huaweicloud/rds/v3/model/ListJobInfoDetailResponse.h>
#include <huaweicloud/rds/v3/model/ListJobInfoRequest.h>
#include <huaweicloud/rds/v3/model/ListJobInfoResponse.h>
#include <huaweicloud/rds/v3/model/ListLogLtsConfigsRequest.h>
#include <huaweicloud/rds/v3/model/ListLogLtsConfigsResponse.h>
#include <huaweicloud/rds/v3/model/ListOffSiteBackupsRequest.h>
#include <huaweicloud/rds/v3/model/ListOffSiteBackupsResponse.h>
#include <huaweicloud/rds/v3/model/ListOffSiteInstancesRequest.h>
#include <huaweicloud/rds/v3/model/ListOffSiteInstancesResponse.h>
#include <huaweicloud/rds/v3/model/ListOffSiteRestoreTimesRequest.h>
#include <huaweicloud/rds/v3/model/ListOffSiteRestoreTimesResponse.h>
#include <huaweicloud/rds/v3/model/ListPostgresqlHbaInfoHistoryRequest.h>
#include <huaweicloud/rds/v3/model/ListPostgresqlHbaInfoHistoryResponse.h>
#include <huaweicloud/rds/v3/model/ListPostgresqlHbaInfoRequest.h>
#include <huaweicloud/rds/v3/model/ListPostgresqlHbaInfoResponse.h>
#include <huaweicloud/rds/v3/model/ListPostgresqlListHistoryTablesRequest.h>
#include <huaweicloud/rds/v3/model/ListPostgresqlListHistoryTablesResponse.h>
#include <huaweicloud/rds/v3/model/ListPredefinedTagRequest.h>
#include <huaweicloud/rds/v3/model/ListPredefinedTagResponse.h>
#include <huaweicloud/rds/v3/model/ListProjectTagsRequest.h>
#include <huaweicloud/rds/v3/model/ListProjectTagsResponse.h>
#include <huaweicloud/rds/v3/model/ListRdSforMySqlProxyRequest.h>
#include <huaweicloud/rds/v3/model/ListRdSforMySqlProxyResponse.h>
#include <huaweicloud/rds/v3/model/ListRdSforMysqlProxyFlavorsRequest.h>
#include <huaweicloud/rds/v3/model/ListRdSforMysqlProxyFlavorsResponse.h>
#include <huaweicloud/rds/v3/model/ListRecycleInstancesRequest.h>
#include <huaweicloud/rds/v3/model/ListRecycleInstancesResponse.h>
#include <huaweicloud/rds/v3/model/ListRestoreTimesRequest.h>
#include <huaweicloud/rds/v3/model/ListRestoreTimesResponse.h>
#include <huaweicloud/rds/v3/model/ListSimplifiedInstancesRequest.h>
#include <huaweicloud/rds/v3/model/ListSimplifiedInstancesResponse.h>
#include <huaweicloud/rds/v3/model/ListSlowLogFileRequest.h>
#include <huaweicloud/rds/v3/model/ListSlowLogFileResponse.h>
#include <huaweicloud/rds/v3/model/ListSlowLogStatisticsForLtsRequest.h>
#include <huaweicloud/rds/v3/model/ListSlowLogStatisticsForLtsResponse.h>
#include <huaweicloud/rds/v3/model/ListSlowLogsNewRequest.h>
#include <huaweicloud/rds/v3/model/ListSlowLogsNewResponse.h>
#include <huaweicloud/rds/v3/model/ListSlowLogsRequest.h>
#include <huaweicloud/rds/v3/model/ListSlowLogsResponse.h>
#include <huaweicloud/rds/v3/model/ListSlowlogForLtsRequest.h>
#include <huaweicloud/rds/v3/model/ListSlowlogForLtsResponse.h>
#include <huaweicloud/rds/v3/model/ListSlowlogStatisticsRequest.h>
#include <huaweicloud/rds/v3/model/ListSlowlogStatisticsResponse.h>
#include <huaweicloud/rds/v3/model/ListSqlLimitRequest.h>
#include <huaweicloud/rds/v3/model/ListSqlLimitResponse.h>
#include <huaweicloud/rds/v3/model/ListSslCertDownloadLinkRequest.h>
#include <huaweicloud/rds/v3/model/ListSslCertDownloadLinkResponse.h>
#include <huaweicloud/rds/v3/model/ListStorageTypesRequest.h>
#include <huaweicloud/rds/v3/model/ListStorageTypesResponse.h>
#include <huaweicloud/rds/v3/model/ListUpgradeHistoriesRequest.h>
#include <huaweicloud/rds/v3/model/ListUpgradeHistoriesResponse.h>
#include <huaweicloud/rds/v3/model/ListXellogFilesRequest.h>
#include <huaweicloud/rds/v3/model/ListXellogFilesResponse.h>
#include <huaweicloud/rds/v3/model/MigrateFollowerRequest.h>
#include <huaweicloud/rds/v3/model/MigrateFollowerResponse.h>
#include <huaweicloud/rds/v3/model/ModifiyInstanceNameRequest.h>
#include <huaweicloud/rds/v3/model/ModifyDnsNameRequestBody.h>
#include <huaweicloud/rds/v3/model/ModifyMySqlProxyRouteModeRequest.h>
#include <huaweicloud/rds/v3/model/ModifyPostgresqlHbaConfRequest.h>
#include <huaweicloud/rds/v3/model/ModifyPostgresqlHbaConfResponse.h>
#include <huaweicloud/rds/v3/model/ModifyRdSforMySqlProxyRouteModeRequest.h>
#include <huaweicloud/rds/v3/model/ModifyRdSforMySqlProxyRouteModeResponse.h>
#include <huaweicloud/core/utils/Object.h>
#include <huaweicloud/rds/v3/model/OpsWindowRequest.h>
#include <huaweicloud/rds/v3/model/PostgreSQLHistoryDatabaseRequest.h>
#include <huaweicloud/rds/v3/model/PostgreSQLHistoryTableRequest.h>
#include <huaweicloud/rds/v3/model/PostgreSQLRestoreDatabaseRequest.h>
#include <huaweicloud/rds/v3/model/PostgreSQLRestoreTableRequest.h>
#include <huaweicloud/rds/v3/model/PostgresqlHbaConf.h>
#include <huaweicloud/rds/v3/model/PostgresqlHbaHistory.h>
#include <huaweicloud/rds/v3/model/PostgresqlPreCheckUpgradeMajorVersionReq.h>
#include <huaweicloud/rds/v3/model/RecyclePolicyRequestBody.h>
#include <huaweicloud/rds/v3/model/ReduceVolumeRequestBody.h>
#include <huaweicloud/rds/v3/model/ResizeFlavorRequest.h>
#include <huaweicloud/rds/v3/model/RestoreExistInstanceRequest.h>
#include <huaweicloud/rds/v3/model/RestoreExistInstanceResponse.h>
#include <huaweicloud/rds/v3/model/RestoreExistingInstanceRequestBody.h>
#include <huaweicloud/rds/v3/model/RestoreTablesNewRequest.h>
#include <huaweicloud/rds/v3/model/RestoreTablesNewRequestBody.h>
#include <huaweicloud/rds/v3/model/RestoreTablesNewResponse.h>
#include <huaweicloud/rds/v3/model/RestoreTablesRequest.h>
#include <huaweicloud/rds/v3/model/RestoreTablesRequestBody.h>
#include <huaweicloud/rds/v3/model/RestoreTablesResponse.h>
#include <huaweicloud/rds/v3/model/RestoreToExistingInstanceRequest.h>
#include <huaweicloud/rds/v3/model/RestoreToExistingInstanceRequestBody.h>
#include <huaweicloud/rds/v3/model/RestoreToExistingInstanceResponse.h>
#include <huaweicloud/rds/v3/model/SecondMonitor.h>
#include <huaweicloud/rds/v3/model/SecurityGroupRequest.h>
#include <huaweicloud/rds/v3/model/SetAuditlogPolicyRequest.h>
#include <huaweicloud/rds/v3/model/SetAuditlogPolicyRequestBody.h>
#include <huaweicloud/rds/v3/model/SetAuditlogPolicyResponse.h>
#include <huaweicloud/rds/v3/model/SetAutoEnlargePolicyRequest.h>
#include <huaweicloud/rds/v3/model/SetAutoEnlargePolicyResponse.h>
#include <huaweicloud/rds/v3/model/SetBackupPolicyRequest.h>
#include <huaweicloud/rds/v3/model/SetBackupPolicyRequestBody.h>
#include <huaweicloud/rds/v3/model/SetBackupPolicyResponse.h>
#include <huaweicloud/rds/v3/model/SetBinlogClearPolicyRequest.h>
#include <huaweicloud/rds/v3/model/SetBinlogClearPolicyResponse.h>
#include <huaweicloud/rds/v3/model/SetInstancesProxyRestartRequest.h>
#include <huaweicloud/rds/v3/model/SetInstancesProxyRestartResponse.h>
#include <huaweicloud/rds/v3/model/SetLogLtsConfigsRequest.h>
#include <huaweicloud/rds/v3/model/SetLogLtsConfigsResponse.h>
#include <huaweicloud/rds/v3/model/SetOffSiteBackupPolicyRequest.h>
#include <huaweicloud/rds/v3/model/SetOffSiteBackupPolicyRequestBody.h>
#include <huaweicloud/rds/v3/model/SetOffSiteBackupPolicyResponse.h>
#include <huaweicloud/rds/v3/model/SetSecondLevelMonitorRequest.h>
#include <huaweicloud/rds/v3/model/SetSecondLevelMonitorResponse.h>
#include <huaweicloud/rds/v3/model/SetSecurityGroupRequest.h>
#include <huaweicloud/rds/v3/model/SetSecurityGroupResponse.h>
#include <huaweicloud/rds/v3/model/SetSensitiveSlowLogRequest.h>
#include <huaweicloud/rds/v3/model/SetSensitiveSlowLogResponse.h>
#include <huaweicloud/rds/v3/model/ShowAuditlogDownloadLinkRequest.h>
#include <huaweicloud/rds/v3/model/ShowAuditlogDownloadLinkResponse.h>
#include <huaweicloud/rds/v3/model/ShowAuditlogPolicyRequest.h>
#include <huaweicloud/rds/v3/model/ShowAuditlogPolicyResponse.h>
#include <huaweicloud/rds/v3/model/ShowAutoEnlargePolicyRequest.h>
#include <huaweicloud/rds/v3/model/ShowAutoEnlargePolicyResponse.h>
#include <huaweicloud/rds/v3/model/ShowAvailableVersionRequest.h>
#include <huaweicloud/rds/v3/model/ShowAvailableVersionResponse.h>
#include <huaweicloud/rds/v3/model/ShowBackupDownloadLinkRequest.h>
#include <huaweicloud/rds/v3/model/ShowBackupDownloadLinkResponse.h>
#include <huaweicloud/rds/v3/model/ShowBackupPolicyRequest.h>
#include <huaweicloud/rds/v3/model/ShowBackupPolicyResponse.h>
#include <huaweicloud/rds/v3/model/ShowBinlogClearPolicyRequest.h>
#include <huaweicloud/rds/v3/model/ShowBinlogClearPolicyResponse.h>
#include <huaweicloud/rds/v3/model/ShowConfigurationRequest.h>
#include <huaweicloud/rds/v3/model/ShowConfigurationResponse.h>
#include <huaweicloud/rds/v3/model/ShowDnsNameRequest.h>
#include <huaweicloud/rds/v3/model/ShowDnsNameResponse.h>
#include <huaweicloud/rds/v3/model/ShowDomainNameRequest.h>
#include <huaweicloud/rds/v3/model/ShowDomainNameResponse.h>
#include <huaweicloud/rds/v3/model/ShowDrReplicaStatusRequest.h>
#include <huaweicloud/rds/v3/model/ShowDrReplicaStatusResponse.h>
#include <huaweicloud/rds/v3/model/ShowIncreBackupPolicy1Request.h>
#include <huaweicloud/rds/v3/model/ShowIncreBackupPolicy1Response.h>
#include <huaweicloud/rds/v3/model/ShowInstanceConfigurationRequest.h>
#include <huaweicloud/rds/v3/model/ShowInstanceConfigurationResponse.h>
#include <huaweicloud/rds/v3/model/ShowOffSiteBackupPolicyRequest.h>
#include <huaweicloud/rds/v3/model/ShowOffSiteBackupPolicyResponse.h>
#include <huaweicloud/rds/v3/model/ShowQuotasRequest.h>
#include <huaweicloud/rds/v3/model/ShowQuotasResponse.h>
#include <huaweicloud/rds/v3/model/ShowRecyclePolicyRequest.h>
#include <huaweicloud/rds/v3/model/ShowRecyclePolicyResponse.h>
#include <huaweicloud/rds/v3/model/ShowReplicationStatusRequest.h>
#include <huaweicloud/rds/v3/model/ShowReplicationStatusResponse.h>
#include <huaweicloud/rds/v3/model/ShowSecondLevelMonitoringRequest.h>
#include <huaweicloud/rds/v3/model/ShowSecondLevelMonitoringResponse.h>
#include <huaweicloud/rds/v3/model/ShowStorageUsedSpaceRequest.h>
#include <huaweicloud/rds/v3/model/ShowStorageUsedSpaceResponse.h>
#include <huaweicloud/rds/v3/model/ShowTdeStatusRequest.h>
#include <huaweicloud/rds/v3/model/ShowTdeStatusResponse.h>
#include <huaweicloud/rds/v3/model/ShowUpgradeDbMajorVersionStatusRequest.h>
#include <huaweicloud/rds/v3/model/ShowUpgradeDbMajorVersionStatusResponse.h>
#include <huaweicloud/rds/v3/model/SimplifiedInstancesRequest.h>
#include <huaweicloud/rds/v3/model/Single2Ha.h>
#include <huaweicloud/rds/v3/model/SlowLogStatisticsForLtsRequest.h>
#include <huaweicloud/rds/v3/model/SlowlogDownloadRequest.h>
#include <huaweicloud/rds/v3/model/SlowlogForLtsRequest.h>
#include <huaweicloud/rds/v3/model/SslOptionRequest.h>
#include <huaweicloud/rds/v3/model/StartFailoverRequest.h>
#include <huaweicloud/rds/v3/model/StartFailoverResponse.h>
#include <huaweicloud/rds/v3/model/StartInstanceEnlargeVolumeActionRequest.h>
#include <huaweicloud/rds/v3/model/StartInstanceEnlargeVolumeActionResponse.h>
#include <huaweicloud/rds/v3/model/StartInstanceReduceVolumeActionRequest.h>
#include <huaweicloud/rds/v3/model/StartInstanceReduceVolumeActionResponse.h>
#include <huaweicloud/rds/v3/model/StartInstanceRestartActionRequest.h>
#include <huaweicloud/rds/v3/model/StartInstanceRestartActionResponse.h>
#include <huaweicloud/rds/v3/model/StartInstanceSingleToHaActionRequest.h>
#include <huaweicloud/rds/v3/model/StartInstanceSingleToHaActionResponse.h>
#include <huaweicloud/rds/v3/model/StartRecyclePolicyRequest.h>
#include <huaweicloud/rds/v3/model/StartRecyclePolicyResponse.h>
#include <huaweicloud/rds/v3/model/StartResizeFlavorActionRequest.h>
#include <huaweicloud/rds/v3/model/StartResizeFlavorActionResponse.h>
#include <huaweicloud/rds/v3/model/StartupInstanceRequest.h>
#include <huaweicloud/rds/v3/model/StartupInstanceResponse.h>
#include <huaweicloud/rds/v3/model/StopBackupRequest.h>
#include <huaweicloud/rds/v3/model/StopBackupResponse.h>
#include <huaweicloud/rds/v3/model/StopInstanceRequest.h>
#include <huaweicloud/rds/v3/model/StopInstanceResponse.h>
#include <huaweicloud/rds/v3/model/SwitchSqlLimitControlReqV3.h>
#include <huaweicloud/rds/v3/model/SwitchSqlLimitRequest.h>
#include <huaweicloud/rds/v3/model/SwitchSqlLimitResponse.h>
#include <huaweicloud/rds/v3/model/SwitchSslRequest.h>
#include <huaweicloud/rds/v3/model/SwitchSslResponse.h>
#include <huaweicloud/rds/v3/model/UpdateConfigurationRequest.h>
#include <huaweicloud/rds/v3/model/UpdateConfigurationResponse.h>
#include <huaweicloud/rds/v3/model/UpdateDataIpRequest.h>
#include <huaweicloud/rds/v3/model/UpdateDataIpResponse.h>
#include <huaweicloud/rds/v3/model/UpdateDbPortRequest.h>
#include <huaweicloud/rds/v3/model/UpdateDnsNameRequest.h>
#include <huaweicloud/rds/v3/model/UpdateDnsNameResponse.h>
#include <huaweicloud/rds/v3/model/UpdateIncreBackupPolicy1Request.h>
#include <huaweicloud/rds/v3/model/UpdateIncreBackupPolicy1RequestBody.h>
#include <huaweicloud/rds/v3/model/UpdateIncreBackupPolicy1Response.h>
#include <huaweicloud/rds/v3/model/UpdateInstanceConfigurationAsyncRequest.h>
#include <huaweicloud/rds/v3/model/UpdateInstanceConfigurationAsyncResponse.h>
#include <huaweicloud/rds/v3/model/UpdateInstanceConfigurationRequest.h>
#include <huaweicloud/rds/v3/model/UpdateInstanceConfigurationRequestBody.h>
#include <huaweicloud/rds/v3/model/UpdateInstanceConfigurationResponse.h>
#include <huaweicloud/rds/v3/model/UpdateInstanceNameRequest.h>
#include <huaweicloud/rds/v3/model/UpdateInstanceNameResponse.h>
#include <huaweicloud/rds/v3/model/UpdatePortRequest.h>
#include <huaweicloud/rds/v3/model/UpdatePortResponse.h>
#include <huaweicloud/rds/v3/model/UpdatePostgresqlInstanceAliasRequest.h>
#include <huaweicloud/rds/v3/model/UpdatePostgresqlInstanceAliasResponse.h>
#include <huaweicloud/rds/v3/model/UpdateRdsInstanceAliasRequest.h>
#include <huaweicloud/rds/v3/model/UpdateSqlLimitRequest.h>
#include <huaweicloud/rds/v3/model/UpdateSqlLimitResponse.h>
#include <huaweicloud/rds/v3/model/UpdateSqlLimitRuleReqV3.h>
#include <huaweicloud/rds/v3/model/UpdateTdeStatusRequest.h>
#include <huaweicloud/rds/v3/model/UpdateTdeStatusRequestBody.h>
#include <huaweicloud/rds/v3/model/UpdateTdeStatusResponse.h>
#include <huaweicloud/rds/v3/model/UpgradeDbMajorVersionPreCheckRequest.h>
#include <huaweicloud/rds/v3/model/UpgradeDbMajorVersionPreCheckResponse.h>
#include <huaweicloud/rds/v3/model/UpgradeDbMajorVersionRequest.h>
#include <huaweicloud/rds/v3/model/UpgradeDbMajorVersionResponse.h>
#include <huaweicloud/rds/v3/model/UpgradeDbVersionNewRequest.h>
#include <huaweicloud/rds/v3/model/UpgradeDbVersionNewResponse.h>
#include <huaweicloud/rds/v3/model/UpgradeDbVersionRequest.h>
#include <huaweicloud/rds/v3/model/UpgradeDbVersionResponse.h>
#include <huaweicloud/rds/v3/model/UpgradePgMajorVersion.h>
#include <string>
#include <vector>
#include <cpprest/details/basic_types.h>

#include <huaweicloud/rds/v3/model/ListApiVersionNewRequest.h>
#include <huaweicloud/rds/v3/model/ListApiVersionNewResponse.h>
#include <huaweicloud/rds/v3/model/ListApiVersionRequest.h>
#include <huaweicloud/rds/v3/model/ListApiVersionResponse.h>
#include <huaweicloud/rds/v3/model/ShowApiVersionRequest.h>
#include <huaweicloud/rds/v3/model/ShowApiVersionResponse.h>
#include <string>

#include <huaweicloud/rds/v3/model/AllowDbUserPrivilegeRequest.h>
#include <huaweicloud/rds/v3/model/AllowDbUserPrivilegeResponse.h>
#include <huaweicloud/rds/v3/model/CreateDatabaseRequest.h>
#include <huaweicloud/rds/v3/model/CreateDatabaseResponse.h>
#include <huaweicloud/rds/v3/model/CreateDbUserRequest.h>
#include <huaweicloud/rds/v3/model/CreateDbUserResponse.h>
#include <huaweicloud/rds/v3/model/DatabaseForCreation.h>
#include <huaweicloud/rds/v3/model/DbUserPwdRequest.h>
#include <huaweicloud/rds/v3/model/DeleteDatabaseRequest.h>
#include <huaweicloud/rds/v3/model/DeleteDatabaseResponse.h>
#include <huaweicloud/rds/v3/model/DeleteDbUserRequest.h>
#include <huaweicloud/rds/v3/model/DeleteDbUserResponse.h>
#include <huaweicloud/rds/v3/model/ErrorResponse.h>
#include <huaweicloud/rds/v3/model/GrantRequest.h>
#include <huaweicloud/rds/v3/model/ListAuthorizedDatabasesRequest.h>
#include <huaweicloud/rds/v3/model/ListAuthorizedDatabasesResponse.h>
#include <huaweicloud/rds/v3/model/ListAuthorizedDbUsersRequest.h>
#include <huaweicloud/rds/v3/model/ListAuthorizedDbUsersResponse.h>
#include <huaweicloud/rds/v3/model/ListDatabasesRequest.h>
#include <huaweicloud/rds/v3/model/ListDatabasesResponse.h>
#include <huaweicloud/rds/v3/model/ListDbUsersRequest.h>
#include <huaweicloud/rds/v3/model/ListDbUsersResponse.h>
#include <huaweicloud/rds/v3/model/MysqlReadOnlySwitch.h>
#include <huaweicloud/rds/v3/model/PwdResetRequest.h>
#include <huaweicloud/rds/v3/model/ResetPwdRequest.h>
#include <huaweicloud/rds/v3/model/ResetPwdResponse.h>
#include <huaweicloud/rds/v3/model/RevokeRequest.h>
#include <huaweicloud/rds/v3/model/RevokeRequestBody.h>
#include <huaweicloud/rds/v3/model/RevokeResponse.h>
#include <huaweicloud/rds/v3/model/SetDbUserPwdRequest.h>
#include <huaweicloud/rds/v3/model/SetDbUserPwdResponse.h>
#include <huaweicloud/rds/v3/model/SetHostPrivilegeRequestV3.h>
#include <huaweicloud/rds/v3/model/SetReadOnlySwitchRequest.h>
#include <huaweicloud/rds/v3/model/SetReadOnlySwitchResponse.h>
#include <huaweicloud/rds/v3/model/UpdateDatabaseReq.h>
#include <huaweicloud/rds/v3/model/UpdateDatabaseRequest.h>
#include <huaweicloud/rds/v3/model/UpdateDatabaseResponse.h>
#include <huaweicloud/rds/v3/model/UpdateDbUserCommentRequest.h>
#include <huaweicloud/rds/v3/model/UpdateDbUserCommentResponse.h>
#include <huaweicloud/rds/v3/model/UpdateDbUserReq.h>
#include <huaweicloud/rds/v3/model/UpdateHostPrivilegeRequest.h>
#include <huaweicloud/rds/v3/model/UpdateHostPrivilegeResponse.h>
#include <huaweicloud/rds/v3/model/UserForCreation.h>
#include <string>

#include <huaweicloud/rds/v3/model/AllowDbPrivilegeRequest.h>
#include <huaweicloud/rds/v3/model/AllowDbPrivilegeResponse.h>
#include <huaweicloud/rds/v3/model/ChangeProxyScaleRequest.h>
#include <huaweicloud/rds/v3/model/ChangeProxyScaleResponse.h>
#include <huaweicloud/rds/v3/model/ChangeTheDelayThresholdRequest.h>
#include <huaweicloud/rds/v3/model/ChangeTheDelayThresholdResponse.h>
#include <huaweicloud/rds/v3/model/ChangingTheDelayThresholdRequestBody.h>
#include <huaweicloud/rds/v3/model/CreatePostgresqlDatabaseRequest.h>
#include <huaweicloud/rds/v3/model/CreatePostgresqlDatabaseResponse.h>
#include <huaweicloud/rds/v3/model/CreatePostgresqlDatabaseSchemaRequest.h>
#include <huaweicloud/rds/v3/model/CreatePostgresqlDatabaseSchemaResponse.h>
#include <huaweicloud/rds/v3/model/CreatePostgresqlDbUserRequest.h>
#include <huaweicloud/rds/v3/model/CreatePostgresqlDbUserResponse.h>
#include <huaweicloud/rds/v3/model/CreatePostgresqlExtensionRequest.h>
#include <huaweicloud/rds/v3/model/CreatePostgresqlExtensionResponse.h>
#include <huaweicloud/rds/v3/model/DatabaseUserRoleRequest.h>
#include <huaweicloud/rds/v3/model/DbUserPrivilegeRequest.h>
#include <huaweicloud/rds/v3/model/DbUserPwdRequest.h>
#include <huaweicloud/rds/v3/model/DeletePostgresqlDatabaseRequest.h>
#include <huaweicloud/rds/v3/model/DeletePostgresqlDatabaseResponse.h>
#include <huaweicloud/rds/v3/model/DeletePostgresqlDbUserRequest.h>
#include <huaweicloud/rds/v3/model/DeletePostgresqlDbUserResponse.h>
#include <huaweicloud/rds/v3/model/DeletePostgresqlExtensionRequest.h>
#include <huaweicloud/rds/v3/model/DeletePostgresqlExtensionResponse.h>
#include <huaweicloud/rds/v3/model/ErrorResponse.h>
#include <huaweicloud/rds/v3/model/ExecutePrivilegeDatabaseUserRoleRequest.h>
#include <huaweicloud/rds/v3/model/ExecutePrivilegeDatabaseUserRoleResponse.h>
#include <huaweicloud/rds/v3/model/ExecuteRevokeDatabaseUserRoleRequest.h>
#include <huaweicloud/rds/v3/model/ExecuteRevokeDatabaseUserRoleResponse.h>
#include <huaweicloud/rds/v3/model/ExtensionRequest.h>
#include <huaweicloud/rds/v3/model/ListDatabaseUserRoleRequest.h>
#include <huaweicloud/rds/v3/model/ListDatabaseUserRoleResponse.h>
#include <huaweicloud/rds/v3/model/ListPostgresqlDatabaseSchemasRequest.h>
#include <huaweicloud/rds/v3/model/ListPostgresqlDatabaseSchemasResponse.h>
#include <huaweicloud/rds/v3/model/ListPostgresqlDatabasesRequest.h>
#include <huaweicloud/rds/v3/model/ListPostgresqlDatabasesResponse.h>
#include <huaweicloud/rds/v3/model/ListPostgresqlDbUserPaginatedRequest.h>
#include <huaweicloud/rds/v3/model/ListPostgresqlDbUserPaginatedResponse.h>
#include <huaweicloud/rds/v3/model/ListPostgresqlExtensionRequest.h>
#include <huaweicloud/rds/v3/model/ListPostgresqlExtensionResponse.h>
#include <huaweicloud/rds/v3/model/ModifyParamRequest.h>
#include <huaweicloud/rds/v3/model/ModifyProxyWeightRequest.h>
#include <huaweicloud/rds/v3/model/OpenProxyRequest.h>
#include <huaweicloud/rds/v3/model/PostgresqlDatabaseForCreation.h>
#include <huaweicloud/rds/v3/model/PostgresqlDatabaseSchemaReq.h>
#include <huaweicloud/rds/v3/model/PostgresqlGrantRequest.h>
#include <huaweicloud/rds/v3/model/PostgresqlUserForCreation.h>
#include <huaweicloud/rds/v3/model/RevokePostgresqlDbPrivilegeRequest.h>
#include <huaweicloud/rds/v3/model/RevokePostgresqlDbPrivilegeRequestBody.h>
#include <huaweicloud/rds/v3/model/RevokePostgresqlDbPrivilegeResponse.h>
#include <huaweicloud/rds/v3/model/ScaleProxyRequestBody.h>
#include <huaweicloud/rds/v3/model/SearchQueryScaleComputeFlavorsRequest.h>
#include <huaweicloud/rds/v3/model/SearchQueryScaleComputeFlavorsResponse.h>
#include <huaweicloud/rds/v3/model/SearchQueryScaleFlavorsRequest.h>
#include <huaweicloud/rds/v3/model/SearchQueryScaleFlavorsResponse.h>
#include <huaweicloud/rds/v3/model/SetDatabaseUserPrivilegeReqV3.h>
#include <huaweicloud/rds/v3/model/SetDatabaseUserPrivilegeRequest.h>
#include <huaweicloud/rds/v3/model/SetDatabaseUserPrivilegeResponse.h>
#include <huaweicloud/rds/v3/model/SetPostgresqlDbUserPwdRequest.h>
#include <huaweicloud/rds/v3/model/SetPostgresqlDbUserPwdResponse.h>
#include <huaweicloud/rds/v3/model/ShowInformationAboutDatabaseProxyRequest.h>
#include <huaweicloud/rds/v3/model/ShowInformationAboutDatabaseProxyResponse.h>
#include <huaweicloud/rds/v3/model/ShowPostgresqlParamValueRequest.h>
#include <huaweicloud/rds/v3/model/ShowPostgresqlParamValueResponse.h>
#include <huaweicloud/rds/v3/model/StartDatabaseProxyRequest.h>
#include <huaweicloud/rds/v3/model/StartDatabaseProxyResponse.h>
#include <huaweicloud/rds/v3/model/StopDatabaseProxyRequest.h>
#include <huaweicloud/rds/v3/model/StopDatabaseProxyResponse.h>
#include <huaweicloud/rds/v3/model/UpdateDatabaseOwnerRequest.h>
#include <huaweicloud/rds/v3/model/UpdateDatabaseOwnerRequestBody.h>
#include <huaweicloud/rds/v3/model/UpdateDatabaseOwnerResponse.h>
#include <huaweicloud/rds/v3/model/UpdateDatabaseReq.h>
#include <huaweicloud/rds/v3/model/UpdateDbUserPrivilegeRequest.h>
#include <huaweicloud/rds/v3/model/UpdateDbUserPrivilegeResponse.h>
#include <huaweicloud/rds/v3/model/UpdateDbUserReq.h>
#include <huaweicloud/rds/v3/model/UpdatePostgresqlDatabaseRequest.h>
#include <huaweicloud/rds/v3/model/UpdatePostgresqlDatabaseResponse.h>
#include <huaweicloud/rds/v3/model/UpdatePostgresqlDbUserCommentRequest.h>
#include <huaweicloud/rds/v3/model/UpdatePostgresqlDbUserCommentResponse.h>
#include <huaweicloud/rds/v3/model/UpdatePostgresqlExtensionRequest.h>
#include <huaweicloud/rds/v3/model/UpdatePostgresqlExtensionResponse.h>
#include <huaweicloud/rds/v3/model/UpdatePostgresqlParameterValueRequest.h>
#include <huaweicloud/rds/v3/model/UpdatePostgresqlParameterValueResponse.h>
#include <huaweicloud/rds/v3/model/UpdateReadWeightRequest.h>
#include <huaweicloud/rds/v3/model/UpdateReadWeightResponse.h>
#include <string>

#include <huaweicloud/rds/v3/model/AddMsdtcRequestBody.h>
#include <huaweicloud/rds/v3/model/AllowSqlserverDbUserPrivilegeRequest.h>
#include <huaweicloud/rds/v3/model/AllowSqlserverDbUserPrivilegeResponse.h>
#include <huaweicloud/rds/v3/model/BatchAddMsdtcsRequest.h>
#include <huaweicloud/rds/v3/model/BatchAddMsdtcsResponse.h>
#include <huaweicloud/rds/v3/model/CreateSqlserverDatabaseRequest.h>
#include <huaweicloud/rds/v3/model/CreateSqlserverDatabaseResponse.h>
#include <huaweicloud/rds/v3/model/CreateSqlserverDbUserRequest.h>
#include <huaweicloud/rds/v3/model/CreateSqlserverDbUserResponse.h>
#include <huaweicloud/rds/v3/model/DeleteSqlserverDatabaseExRequest.h>
#include <huaweicloud/rds/v3/model/DeleteSqlserverDatabaseExResponse.h>
#include <huaweicloud/rds/v3/model/DeleteSqlserverDatabaseRequest.h>
#include <huaweicloud/rds/v3/model/DeleteSqlserverDatabaseResponse.h>
#include <huaweicloud/rds/v3/model/DeleteSqlserverDbUserRequest.h>
#include <huaweicloud/rds/v3/model/DeleteSqlserverDbUserResponse.h>
#include <huaweicloud/rds/v3/model/DropDatabaseV3Req.h>
#include <huaweicloud/rds/v3/model/ErrorResponse.h>
#include <huaweicloud/rds/v3/model/ListAuthorizedSqlserverDbUsersRequest.h>
#include <huaweicloud/rds/v3/model/ListAuthorizedSqlserverDbUsersResponse.h>
#include <huaweicloud/rds/v3/model/ListMsdtcHostsRequest.h>
#include <huaweicloud/rds/v3/model/ListMsdtcHostsResponse.h>
#include <huaweicloud/rds/v3/model/ListSqlserverDatabasesRequest.h>
#include <huaweicloud/rds/v3/model/ListSqlserverDatabasesResponse.h>
#include <huaweicloud/rds/v3/model/ListSqlserverDbUsersRequest.h>
#include <huaweicloud/rds/v3/model/ListSqlserverDbUsersResponse.h>
#include <huaweicloud/rds/v3/model/ModifyCollationRequest.h>
#include <huaweicloud/rds/v3/model/ModifyCollationRequestBody.h>
#include <huaweicloud/rds/v3/model/ModifyCollationResponse.h>
#include <huaweicloud/rds/v3/model/RevokeSqlserverDbUserPrivilegeRequest.h>
#include <huaweicloud/rds/v3/model/RevokeSqlserverDbUserPrivilegeResponse.h>
#include <huaweicloud/rds/v3/model/SetInstancesDbShrinkRequest.h>
#include <huaweicloud/rds/v3/model/SetInstancesDbShrinkResponse.h>
#include <huaweicloud/rds/v3/model/SetInstancesNewDbShrinkRequest.h>
#include <huaweicloud/rds/v3/model/SetInstancesNewDbShrinkResponse.h>
#include <huaweicloud/rds/v3/model/SqlserverDatabaseForCreation.h>
#include <huaweicloud/rds/v3/model/SqlserverGrantRequest.h>
#include <huaweicloud/rds/v3/model/SqlserverRevokeRequest.h>
#include <huaweicloud/rds/v3/model/SqlserverUserForCreation.h>
#include <huaweicloud/rds/v3/model/UpdateDBShrinkRequestBody.h>
#include <string>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Object.h>
#undef U
#include <boost/optional.hpp>

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {

using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Rds::V3::Model;

class HUAWEICLOUD_RDS_V3_EXPORT  RdsClient : public Client
{
public:

    RdsClient();

    virtual ~RdsClient();

    static ClientBuilder<RdsClient> newBuilder();

    // 在pg_hba.conf文件最后新增单个或多个配置
    //
    // 以传入配置全量覆盖当前pg_hba.conf文件内容，入参为空时用默认配置覆盖当前文件内容
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddPostgresqlHbaConfResponse> addPostgresqlHbaConf(
        AddPostgresqlHbaConfRequest &request
    );
    // 应用参数模板
    //
    // 应用参数模板。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ApplyConfigurationAsyncResponse> applyConfigurationAsync(
        ApplyConfigurationAsyncRequest &request
    );
    // 绑定和解绑弹性公网IP
    //
    // 绑定和解绑弹性公网IP。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AttachEipResponse> attachEip(
        AttachEipRequest &request
    );
    // 批量删除手动备份
    //
    // 批量删除手动备份。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchDeleteManualBackupResponse> batchDeleteManualBackup(
        BatchDeleteManualBackupRequest &request
    );
    // 库级时间点恢复
    //
    // 库级时间点恢复
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchRestoreDatabaseResponse> batchRestoreDatabase(
        BatchRestoreDatabaseRequest &request
    );
    // 表级时间点恢复（PostgreSQL）
    //
    // 表级时间点恢复（PostgreSQL）
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchRestorePostgreSqlTablesResponse> batchRestorePostgreSqlTables(
        BatchRestorePostgreSqlTablesRequest &request
    );
    // 批量停止实例
    //
    // 批量停止实例
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchStopInstanceResponse> batchStopInstance(
        BatchStopInstanceRequest &request
    );
    // 批量添加标签
    //
    // 批量添加标签。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchTagAddActionResponse> batchTagAddAction(
        BatchTagAddActionRequest &request
    );
    // 批量删除标签
    //
    // 批量删除标签。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchTagDelActionResponse> batchTagDelAction(
        BatchTagDelActionRequest &request
    );
    // 更改主备实例的数据同步方式
    //
    // 更改主备实例的数据同步方式。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ChangeFailoverModeResponse> changeFailoverMode(
        ChangeFailoverModeRequest &request
    );
    // 切换主备实例的倒换策略
    //
    // 切换主备实例的倒换策略.
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ChangeFailoverStrategyResponse> changeFailoverStrategy(
        ChangeFailoverStrategyRequest &request
    );
    // 设置可维护时间段
    //
    // 设置可维护时间段
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ChangeOpsWindowResponse> changeOpsWindow(
        ChangeOpsWindowRequest &request
    );
    // 复制参数模板
    //
    // 复制参数模板
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
    std::shared_ptr<CreateConfigurationResponse> createConfiguration(
        CreateConfigurationRequest &request
    );
    // 申请域名
    //
    // 申请域名
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateDnsNameResponse> createDnsName(
        CreateDnsNameRequest &request
    );
    // 创建数据库实例
    //
    // 创建数据库实例。
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
    // 开启数据库代理
    //
    // 开启数据库代理。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateRdSforMySqlProxyResponse> createRdSforMySqlProxy(
        CreateRdSforMySqlProxyRequest &request
    );
    // 恢复到新实例
    //
    // 恢复到新实例。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateRestoreInstanceResponse> createRestoreInstance(
        CreateRestoreInstanceRequest &request
    );
    // 新增SQL限流
    //
    // 新增SQL限流
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateSqlLimitResponse> createSqlLimit(
        CreateSqlLimitRequest &request
    );
    // 获取扩展日志下载信息
    //
    // 获取扩展日志下载信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateXelLogDownloadResponse> createXelLogDownload(
        CreateXelLogDownloadRequest &request
    );
    // 删除参数模板
    //
    // 删除参数模板。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteConfigurationResponse> deleteConfiguration(
        DeleteConfigurationRequest &request
    );
    // 删除数据库实例
    //
    // 删除数据库实例。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteInstanceResponse> deleteInstance(
        DeleteInstanceRequest &request
    );
    // 删除即时任务
    //
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteJobResponse> deleteJob(
        DeleteJobRequest &request
    );
    // 
    //
    // 解除LTS配置信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteLogLtsConfigsResponse> deleteLogLtsConfigs(
        DeleteLogLtsConfigsRequest &request
    );
    // 删除手动备份
    //
    // 删除手动备份。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteManualBackupResponse> deleteManualBackup(
        DeleteManualBackupRequest &request
    );
    // 删除pg_hba.conf文件的单个或多个配置
    //
    // 删除pg_hba.conf文件的单个或多个配置，以priority做唯一标识
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeletePostgresqlHbaConfResponse> deletePostgresqlHbaConf(
        DeletePostgresqlHbaConfRequest &request
    );
    // 关闭数据库代理
    //
    // 关闭数据库代理。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteRdSforMySqlProxyResponse> deleteRdSforMySqlProxy(
        DeleteRdSforMySqlProxyRequest &request
    );
    // 删除SQL限流
    //
    // 删除SQL限流
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteSqlLimitResponse> deleteSqlLimit(
        DeleteSqlLimitRequest &request
    );
    // 获取错误日志下载链接
    //
    // 获取错误日志下载链接。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DownloadErrorlogResponse> downloadErrorlog(
        DownloadErrorlogRequest &request
    );
    // 获取慢日志下载链接
    //
    // 获取慢日志下载链接。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DownloadSlowlogResponse> downloadSlowlog(
        DownloadSlowlogRequest &request
    );
    // 应用参数模板
    //
    // 应用参数模板。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<EnableConfigurationResponse> enableConfiguration(
        EnableConfigurationRequest &request
    );
    // 获取审计日志列表
    //
    // 获取审计日志列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAuditlogsResponse> listAuditlogs(
        ListAuditlogsRequest &request
    );
    // 获取备份列表
    //
    // 获取备份列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListBackupsResponse> listBackups(
        ListBackupsRequest &request
    );
    // 查询SQLServer可用字符集
    //
    // 查询SQLServer可用字符集
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListCollationsResponse> listCollations(
        ListCollationsRequest &request
    );
    // 获取参数模板列表
    //
    // 获取参数模板列表，包括所有数据库的默认参数模板和用户创建的参数模板。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListConfigurationsResponse> listConfigurations(
        ListConfigurationsRequest &request
    );
    // 查询数据库引擎的版本
    //
    // 查询数据库引擎的版本。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDatastoresResponse> listDatastores(
        ListDatastoresRequest &request
    );
    // 
    //
    // 批量查询容灾实例信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDrRelationsResponse> listDrRelations(
        ListDrRelationsRequest &request
    );
    // 查询实例可变更规格
    //
    // 查询实例可变更规格
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListEngineFlavorsResponse> listEngineFlavors(
        ListEngineFlavorsRequest &request
    );
    // 查询数据库错误日志
    //
    // 查询数据库错误日志。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListErrorLogsResponse> listErrorLogs(
        ListErrorLogsRequest &request
    );
    // 查询数据库错误日志
    //
    // 查询数据库错误日志。(与原v3接口相比修改offset,符合华为云服务开放 API遵从性规范3.0)
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListErrorLogsNewResponse> listErrorLogsNew(
        ListErrorLogsNewRequest &request
    );
    // 
    //
    // 查询实例的错误日志数据。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListErrorlogForLtsResponse> listErrorlogForLts(
        ListErrorlogForLtsRequest &request
    );
    // 查询数据库规格
    //
    // 查询数据库规格。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListFlavorsResponse> listFlavors(
        ListFlavorsRequest &request
    );
    // 查询指定时间点可恢复的库
    //
    // 查询指定时间点可恢复的库
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListHistoryDatabaseResponse> listHistoryDatabase(
        ListHistoryDatabaseRequest &request
    );
    // 
    //
    // 查询实例大版本升级检查历史。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListInspectionHistoriesResponse> listInspectionHistories(
        ListInspectionHistoriesRequest &request
    );
    // 获取诊断后的实例数量
    //
    // 获取诊断后的实例数量
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListInstanceDiagnosisResponse> listInstanceDiagnosis(
        ListInstanceDiagnosisRequest &request
    );
    // 查询实例参数修改历史
    //
    // 实例参数修改历史。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListInstanceParamHistoriesResponse> listInstanceParamHistories(
        ListInstanceParamHistoriesRequest &request
    );
    // 查询实例标签
    //
    // 查询实例标签。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListInstanceTagsResponse> listInstanceTags(
        ListInstanceTagsRequest &request
    );
    // 查询数据库实例列表
    //
    // 查询数据库实例列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListInstancesResponse> listInstances(
        ListInstancesRequest &request
    );
    // 获取指定诊断项的诊断结果
    //
    // 获取指定诊断项的诊断结果
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListInstancesInfoDiagnosisResponse> listInstancesInfoDiagnosis(
        ListInstancesInfoDiagnosisRequest &request
    );
    // 获取实例是否能使用极速恢复
    //
    // 批量获取实例是否能在库表恢复时使用极速恢复。
    // 
    // - 调用接口前，您需要了解API 认证鉴权。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListInstancesSupportFastRestoreResponse> listInstancesSupportFastRestore(
        ListInstancesSupportFastRestoreRequest &request
    );
    // 获取指定ID的任务信息
    //
    // 获取指定ID的任务信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListJobInfoResponse> listJobInfo(
        ListJobInfoRequest &request
    );
    // 获取指定实例和时间范围的任务信息（SQL Server）
    //
    // 获取指定实例和时间范围的任务信息（SQL Server）。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListJobInfoDetailResponse> listJobInfoDetail(
        ListJobInfoDetailRequest &request
    );
    // 
    //
    // 获取LTS配置信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListLogLtsConfigsResponse> listLogLtsConfigs(
        ListLogLtsConfigsRequest &request
    );
    // 查询跨区域备份列表
    //
    // 查询跨区域备份列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListOffSiteBackupsResponse> listOffSiteBackups(
        ListOffSiteBackupsRequest &request
    );
    // 查询跨区域备份实例列表
    //
    // 查询跨区域备份实例列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListOffSiteInstancesResponse> listOffSiteInstances(
        ListOffSiteInstancesRequest &request
    );
    // 查询跨区域备份可恢复时间段
    //
    // 查询跨区域备份可恢复时间段。
    // 如果您备份策略中的保存天数设置较长，建议您传入查询日期“date”。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListOffSiteRestoreTimesResponse> listOffSiteRestoreTimes(
        ListOffSiteRestoreTimesRequest &request
    );
    // 查询实例的pg_hba.conf文件配置
    //
    // 查询实例的pg_hba.conf文件配置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListPostgresqlHbaInfoResponse> listPostgresqlHbaInfo(
        ListPostgresqlHbaInfoRequest &request
    );
    // 查询实例的pg_hba.conf文件修改历史
    //
    // 查询实例的pg_hba.conf文件修改历史
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListPostgresqlHbaInfoHistoryResponse> listPostgresqlHbaInfoHistory(
        ListPostgresqlHbaInfoHistoryRequest &request
    );
    // 查询指定时间点可恢复的表(PostgreSQL)
    //
    // 查询指定时间点可恢复的表(PostgreSQL)
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListPostgresqlListHistoryTablesResponse> listPostgresqlListHistoryTables(
        ListPostgresqlListHistoryTablesRequest &request
    );
    // 
    //
    // 查询预定义标签
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListPredefinedTagResponse> listPredefinedTag(
        ListPredefinedTagRequest &request
    );
    // 查询项目标签
    //
    // 查询项目标签。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListProjectTagsResponse> listProjectTags(
        ListProjectTagsRequest &request
    );
    // 查询数据库代理信息列表
    //
    // 查询数据库代理信息列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListRdSforMySqlProxyResponse> listRdSforMySqlProxy(
        ListRdSforMySqlProxyRequest &request
    );
    // 查询数据库代理规格信息
    //
    // 查询数据库代理规格信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListRdSforMysqlProxyFlavorsResponse> listRdSforMysqlProxyFlavors(
        ListRdSforMysqlProxyFlavorsRequest &request
    );
    // 查询回收站
    //
    // 查询回收站实例信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListRecycleInstancesResponse> listRecycleInstances(
        ListRecycleInstancesRequest &request
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
    // 
    //
    // 获取指定实例详情
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListSimplifiedInstancesResponse> listSimplifiedInstances(
        ListSimplifiedInstancesRequest &request
    );
    // 查询慢日志文件列表
    //
    // 查询慢日志文件列表。
    // 调用该接口取到慢日志文件名后，可以调用接口/v3/{project_id}/instances/{instance_id}/slowlog-download 获取慢日志文件下载链接
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListSlowLogFileResponse> listSlowLogFile(
        ListSlowLogFileRequest &request
    );
    // 
    //
    // 查询实例慢日志的统计数据。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListSlowLogStatisticsForLtsResponse> listSlowLogStatisticsForLts(
        ListSlowLogStatisticsForLtsRequest &request
    );
    // 查询数据库慢日志
    //
    // 查询数据库慢日志。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListSlowLogsResponse> listSlowLogs(
        ListSlowLogsRequest &request
    );
    // 查询数据库慢日志
    //
    // 查询数据库慢日志。(与原v3接口相比修改offset,符合华为云服务开放 API遵从性规范3.0)
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListSlowLogsNewResponse> listSlowLogsNew(
        ListSlowLogsNewRequest &request
    );
    // 
    //
    // 查询实例的慢日志数据。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListSlowlogForLtsResponse> listSlowlogForLts(
        ListSlowlogForLtsRequest &request
    );
    // 获取慢日志统计信息
    //
    // 获取慢日志统计信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListSlowlogStatisticsResponse> listSlowlogStatistics(
        ListSlowlogStatisticsRequest &request
    );
    // 查询SQL限流列表
    //
    // 查询SQL限流列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListSqlLimitResponse> listSqlLimit(
        ListSqlLimitRequest &request
    );
    // 获取SSL证书下载地址
    //
    // 获取SSL证书下载地址
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListSslCertDownloadLinkResponse> listSslCertDownloadLink(
        ListSslCertDownloadLinkRequest &request
    );
    // 查询数据库磁盘类型
    //
    // 查询数据库磁盘类型。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListStorageTypesResponse> listStorageTypes(
        ListStorageTypesRequest &request
    );
    // 
    //
    // 查询实例大版本升级历史信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListUpgradeHistoriesResponse> listUpgradeHistories(
        ListUpgradeHistoriesRequest &request
    );
    // 查询扩展日志文件列表
    //
    // 查询扩展日志文件列表。
    // 查询扩展日志文件列表，可以调用接口/v3/{project_id}/instances/{instance_id}/xellog-download 获取扩展日志下载链接
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListXellogFilesResponse> listXellogFiles(
        ListXellogFilesRequest &request
    );
    // 迁移主备实例的备机
    //
    // 迁移主备实例的备机
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<MigrateFollowerResponse> migrateFollower(
        MigrateFollowerRequest &request
    );
    // 修改pg_hba.conf文件的单个或多个配置
    //
    // 修改/新增pg_hba.conf文件的单个或多个配置，以priority做唯一标识，priority不存在的新增，存在的修改
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ModifyPostgresqlHbaConfResponse> modifyPostgresqlHbaConf(
        ModifyPostgresqlHbaConfRequest &request
    );
    // 设置读写分离路由模式
    //
    // 设置读写分离路由模式。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ModifyRdSforMySqlProxyRouteModeResponse> modifyRdSforMySqlProxyRouteMode(
        ModifyRdSforMySqlProxyRouteModeRequest &request
    );
    // 恢复到已有实例
    //
    // 恢复到已有实例。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RestoreExistInstanceResponse> restoreExistInstance(
        RestoreExistInstanceRequest &request
    );
    // 表级时间点恢复(MySQL)
    //
    // 表级时间点恢复(MySQL)。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RestoreTablesResponse> restoreTables(
        RestoreTablesRequest &request
    );
    // 表级时间点恢复(MySQL)
    //
    // 表级时间点恢复(MySQL)。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RestoreTablesNewResponse> restoreTablesNew(
        RestoreTablesNewRequest &request
    );
    // 恢复到已有实例
    //
    // 恢复到已有实例。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RestoreToExistingInstanceResponse> restoreToExistingInstance(
        RestoreToExistingInstanceRequest &request
    );
    // 设置审计日志策略
    //
    // 设置审计日志策略。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SetAuditlogPolicyResponse> setAuditlogPolicy(
        SetAuditlogPolicyRequest &request
    );
    // 设置自动扩容策略
    //
    // 设置实例存储空间自动扩容策略，按扩容量扣除存储费用。
    // 可用存储空间小于设置值或者10GB时，自动扩容当前存储空间的15%（非10倍数向上取整，账户余额不足，会导致自动扩容失败）。
    // 设置只读实例自动扩容与主实例自动扩容互不影响，对只读实例设置自动扩容时，可选择大于或等于主实例的存储空间。
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
    // 设置binlog本地保留时长
    //
    // 修改指定实例的binlog本地保留时长。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SetBinlogClearPolicyResponse> setBinlogClearPolicy(
        SetBinlogClearPolicyRequest &request
    );
    // 重启数据库代理
    //
    // 重启数据库代理。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SetInstancesProxyRestartResponse> setInstancesProxyRestart(
        SetInstancesProxyRestartRequest &request
    );
    // 
    //
    // 关联LTS配置信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SetLogLtsConfigsResponse> setLogLtsConfigs(
        SetLogLtsConfigsRequest &request
    );
    // 设置跨区域备份策略
    //
    // 设置跨区域备份策略。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SetOffSiteBackupPolicyResponse> setOffSiteBackupPolicy(
        SetOffSiteBackupPolicyRequest &request
    );
    // 设置秒级监控策略
    //
    // 设置实例秒级监控策略，约五分钟后生效，对于1秒监控和5秒监控，计费方式为按需付费（每小时扣费一次）。
    // 设置只读实例秒级监控与主实例互不影响。
    // 规格变更到4U以下的实例，秒级监控功能会自动关闭。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SetSecondLevelMonitorResponse> setSecondLevelMonitor(
        SetSecondLevelMonitorRequest &request
    );
    // 修改安全组
    //
    // 修改安全组
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SetSecurityGroupResponse> setSecurityGroup(
        SetSecurityGroupRequest &request
    );
    // 慢日志敏感信息的开关
    //
    // V3慢日志敏感信息的开关
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SetSensitiveSlowLogResponse> setSensitiveSlowLog(
        SetSensitiveSlowLogRequest &request
    );
    // 生成审计日志下载链接
    //
    // 生成审计日志下载链接。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAuditlogDownloadLinkResponse> showAuditlogDownloadLink(
        ShowAuditlogDownloadLinkRequest &request
    );
    // 查询审计日志策略
    //
    // 查询审计日志策略。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAuditlogPolicyResponse> showAuditlogPolicy(
        ShowAuditlogPolicyRequest &request
    );
    // 查询自动扩容策略
    //
    // 查询实例存储空间自动扩容策略
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAutoEnlargePolicyResponse> showAutoEnlargePolicy(
        ShowAutoEnlargePolicyRequest &request
    );
    // 
    //
    // 查询实例可升级的目标版本
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAvailableVersionResponse> showAvailableVersion(
        ShowAvailableVersionRequest &request
    );
    // 获取备份下载链接
    //
    // 获取备份下载链接。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowBackupDownloadLinkResponse> showBackupDownloadLink(
        ShowBackupDownloadLinkRequest &request
    );
    // 查询自动备份策略
    //
    // 查询自动备份策略。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowBackupPolicyResponse> showBackupPolicy(
        ShowBackupPolicyRequest &request
    );
    // 获取binlog本地保留时长
    //
    // 查寻指定实例的binlog本地保留时长。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowBinlogClearPolicyResponse> showBinlogClearPolicy(
        ShowBinlogClearPolicyRequest &request
    );
    // 获取指定参数模板的参数
    //
    // 获取指定参数模板的参数。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowConfigurationResponse> showConfiguration(
        ShowConfigurationRequest &request
    );
    // 查询实例ipv6域名。
    //
    // 查询实例ipv6域名。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDnsNameResponse> showDnsName(
        ShowDnsNameRequest &request
    );
    // 
    //
    // 查询实例ipv4域名
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDomainNameResponse> showDomainName(
        ShowDomainNameRequest &request
    );
    // 查询跨云容灾复制状态
    //
    // 建立跨云容灾关系后，查询主实例和灾备实例间的复制状态及延迟。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowDrReplicaStatusResponse> showDrReplicaStatus(
        ShowDrReplicaStatusRequest &request
    );
    // 获取增备策略
    //
    // 获取增备策略
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowIncreBackupPolicy1Response> showIncreBackupPolicy1(
        ShowIncreBackupPolicy1Request &request
    );
    // 获取指定实例的参数模板
    //
    // 获取指定实例的参数模板。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowInstanceConfigurationResponse> showInstanceConfiguration(
        ShowInstanceConfigurationRequest &request
    );
    // 查询跨区域备份策略
    //
    // 查询跨区域备份策略。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowOffSiteBackupPolicyResponse> showOffSiteBackupPolicy(
        ShowOffSiteBackupPolicyRequest &request
    );
    // 查询配额
    //
    // 查询当前项目下资源配额情况。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowQuotasResponse> showQuotas(
        ShowQuotasRequest &request
    );
    // 查询回收站的回收策略。
    //
    // 查询回收站的回收策略。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowRecyclePolicyResponse> showRecyclePolicy(
        ShowRecyclePolicyRequest &request
    );
    // 获取实例的复制状态。
    //
    // 获取实例的复制状态。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowReplicationStatusResponse> showReplicationStatus(
        ShowReplicationStatusRequest &request
    );
    // 查询秒级监控策略
    //
    // 查询实例秒级监控策略
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowSecondLevelMonitoringResponse> showSecondLevelMonitoring(
        ShowSecondLevelMonitoringRequest &request
    );
    // 查询实例磁盘空间使用量
    //
    // 查询实例磁盘空间使用量。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowStorageUsedSpaceResponse> showStorageUsedSpace(
        ShowStorageUsedSpaceRequest &request
    );
    // 根据实例id查询sqlserver TDE状态
    //
    // 根据实例id查询sqlserver TDE状态
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowTdeStatusResponse> showTdeStatus(
        ShowTdeStatusRequest &request
    );
    // 
    //
    // 查询大版本检查状态或升级状态。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowUpgradeDbMajorVersionStatusResponse> showUpgradeDbMajorVersionStatus(
        ShowUpgradeDbMajorVersionStatusRequest &request
    );
    // 手动倒换主备
    //
    // 手动倒换主备.
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<StartFailoverResponse> startFailover(
        StartFailoverRequest &request
    );
    // 扩容数据库实例的磁盘空间
    //
    // 扩容数据库实例的磁盘空间。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<StartInstanceEnlargeVolumeActionResponse> startInstanceEnlargeVolumeAction(
        StartInstanceEnlargeVolumeActionRequest &request
    );
    // 数据库实例的磁盘空间缩容
    //
    // 数据库实例的磁盘空间缩容。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<StartInstanceReduceVolumeActionResponse> startInstanceReduceVolumeAction(
        StartInstanceReduceVolumeActionRequest &request
    );
    // 重启数据库实例
    //
    // 重启数据库实例。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<StartInstanceRestartActionResponse> startInstanceRestartAction(
        StartInstanceRestartActionRequest &request
    );
    // 单机转主备实例
    //
    // 单机转主备实例。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<StartInstanceSingleToHaActionResponse> startInstanceSingleToHaAction(
        StartInstanceSingleToHaActionRequest &request
    );
    // 设置回收站策略
    //
    // 设置回收站策略。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<StartRecyclePolicyResponse> startRecyclePolicy(
        StartRecyclePolicyRequest &request
    );
    // 变更数据库实例的规格
    //
    // 变更数据库实例的规格。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<StartResizeFlavorActionResponse> startResizeFlavorAction(
        StartResizeFlavorActionRequest &request
    );
    // 开启实例
    //
    // 停止实例以节省费用，在停止数据库实例后，支持手动重新开启实例。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<StartupInstanceResponse> startupInstance(
        StartupInstanceRequest &request
    );
    // 停止备份
    //
    // 停止创建备份
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<StopBackupResponse> stopBackup(
        StopBackupRequest &request
    );
    // 停止实例
    //
    // 实例进行关机，通过暂时停止按需实例以节省费用，实例默认停止七天。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<StopInstanceResponse> stopInstance(
        StopInstanceRequest &request
    );
    // 开启/关闭/禁用所有SQL限流
    //
    // 开启/关闭/禁用所有SQL限流
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SwitchSqlLimitResponse> switchSqlLimit(
        SwitchSqlLimitRequest &request
    );
    // 设置SSL数据加密
    //
    // 设置SSL数据加密。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SwitchSslResponse> switchSsl(
        SwitchSslRequest &request
    );
    // 修改参数模板参数
    //
    // 修改参数模板参数。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateConfigurationResponse> updateConfiguration(
        UpdateConfigurationRequest &request
    );
    // 修改内网地址
    //
    // 修改内网地址
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateDataIpResponse> updateDataIp(
        UpdateDataIpRequest &request
    );
    // 修改域名
    //
    // 修改域名
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateDnsNameResponse> updateDnsName(
        UpdateDnsNameRequest &request
    );
    // 修改增备策略
    //
    // 修改增备策略
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateIncreBackupPolicy1Response> updateIncreBackupPolicy1(
        UpdateIncreBackupPolicy1Request &request
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
    std::shared_ptr<UpdateInstanceConfigurationAsyncResponse> updateInstanceConfigurationAsync(
        UpdateInstanceConfigurationAsyncRequest &request
    );
    // 修改实例名称
    //
    // 修改实例名称。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateInstanceNameResponse> updateInstanceName(
        UpdateInstanceNameRequest &request
    );
    // 修改数据库端口
    //
    // 修改数据库端口
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdatePortResponse> updatePort(
        UpdatePortRequest &request
    );
    // 修改实例备注信息
    //
    // 修改指定数据库实例的备注信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdatePostgresqlInstanceAliasResponse> updatePostgresqlInstanceAlias(
        UpdatePostgresqlInstanceAliasRequest &request
    );
    // 修改SQL限流
    //
    // 修改SQL限流
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateSqlLimitResponse> updateSqlLimit(
        UpdateSqlLimitRequest &request
    );
    // sqlserverTDE开关
    //
    // sqlserverTDE开关。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateTdeStatusResponse> updateTdeStatus(
        UpdateTdeStatusRequest &request
    );
    // 
    //
    // PostgreSQL数据库升级大版本。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpgradeDbMajorVersionResponse> upgradeDbMajorVersion(
        UpgradeDbMajorVersionRequest &request
    );
    // 
    //
    // 大版本升级前进行升级检查。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpgradeDbMajorVersionPreCheckResponse> upgradeDbMajorVersionPreCheck(
        UpgradeDbMajorVersionPreCheckRequest &request
    );
    // 升级内核小版本
    //
    // 对实例进行小版本升级。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpgradeDbVersionResponse> upgradeDbVersion(
        UpgradeDbVersionRequest &request
    );
    // 升级内核小版本
    //
    // 对实例进行小版本升级。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpgradeDbVersionNewResponse> upgradeDbVersionNew(
        UpgradeDbVersionNewRequest &request
    );

    // 查询API版本列表
    //
    // 查询API版本列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListApiVersionResponse> listApiVersion(
        ListApiVersionRequest &request
    );
    // 查询API版本列表
    //
    // 查询API版本列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListApiVersionNewResponse> listApiVersionNew(
        ListApiVersionNewRequest &request
    );
    // 查询指定的API版本信息
    //
    // 查询指定的API版本信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowApiVersionResponse> showApiVersion(
        ShowApiVersionRequest &request
    );

    // 授权数据库帐号
    //
    // 授权数据库帐号。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AllowDbUserPrivilegeResponse> allowDbUserPrivilege(
        AllowDbUserPrivilegeRequest &request
    );
    // 创建数据库
    //
    // 创建数据库。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateDatabaseResponse> createDatabase(
        CreateDatabaseRequest &request
    );
    // 创建数据库用户
    //
    // 在指定实例中创建数据库帐号。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateDbUserResponse> createDbUser(
        CreateDbUserRequest &request
    );
    // 删除数据库
    //
    // 删除数据库。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteDatabaseResponse> deleteDatabase(
        DeleteDatabaseRequest &request
    );
    // 删除数据库用户
    //
    // 删除数据库用户。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteDbUserResponse> deleteDbUser(
        DeleteDbUserRequest &request
    );
    // 查询指定用户的已授权数据库
    //
    // 查询指定用户的已授权数据库。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAuthorizedDatabasesResponse> listAuthorizedDatabases(
        ListAuthorizedDatabasesRequest &request
    );
    // 查询指定数据库的已授权用户
    //
    // 查询指定数据库的已授权用户。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAuthorizedDbUsersResponse> listAuthorizedDbUsers(
        ListAuthorizedDbUsersRequest &request
    );
    // 查询数据库列表
    //
    // 查询数据库列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDatabasesResponse> listDatabases(
        ListDatabasesRequest &request
    );
    // 查询数据库用户列表
    //
    // 查询数据库用户列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDbUsersResponse> listDbUsers(
        ListDbUsersRequest &request
    );
    // 重置数据库密码
    //
    // 重置数据库密码.
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ResetPwdResponse> resetPwd(
        ResetPwdRequest &request
    );
    // 解除数据库帐号权限
    //
    // 解除数据库帐号权限。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RevokeResponse> revoke(
        RevokeRequest &request
    );
    // 设置数据库账号密码
    //
    // 设置数据库账号密码
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SetDbUserPwdResponse> setDbUserPwd(
        SetDbUserPwdRequest &request
    );
    // 设置数据库用户只读参数
    //
    // 根据业务需求，设置数据库用户只读
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SetReadOnlySwitchResponse> setReadOnlySwitch(
        SetReadOnlySwitchRequest &request
    );
    // 修改指定实例的数据库备注
    //
    // 修改指定实例中的数据库备注。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateDatabaseResponse> updateDatabase(
        UpdateDatabaseRequest &request
    );
    // 修改数据库用户名备注
    //
    // 修改数据库用户名备注
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateDbUserCommentResponse> updateDbUserComment(
        UpdateDbUserCommentRequest &request
    );
    // 修改实例下用户host信息
    //
    // 修改实例下用户host信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateHostPrivilegeResponse> updateHostPrivilege(
        UpdateHostPrivilegeRequest &request
    );

    // 授权数据库帐号
    //
    // 在指定实例的数据库中, 设置帐号的权限。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AllowDbPrivilegeResponse> allowDbPrivilege(
        AllowDbPrivilegeRequest &request
    );
    // 数据库代理规格变更
    //
    // 数据库代理实例进行规格变更。
    // 
    // - 调用接口前，您需要了解API 认证鉴权。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ChangeProxyScaleResponse> changeProxyScale(
        ChangeProxyScaleRequest &request
    );
    // 修改读写分离阈值
    //
    // 修改指定实例的读写分离延时阈值。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ChangeTheDelayThresholdResponse> changeTheDelayThreshold(
        ChangeTheDelayThresholdRequest &request
    );
    // 创建数据库
    //
    // 在指定实例中创建数据库。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreatePostgresqlDatabaseResponse> createPostgresqlDatabase(
        CreatePostgresqlDatabaseRequest &request
    );
    // 创建数据库SCHEMA
    //
    // 在指定实例的数据库中, 创建数据库schema。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreatePostgresqlDatabaseSchemaResponse> createPostgresqlDatabaseSchema(
        CreatePostgresqlDatabaseSchemaRequest &request
    );
    // 创建数据库用户
    //
    // 在指定实例中创建数据库用户。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreatePostgresqlDbUserResponse> createPostgresqlDbUser(
        CreatePostgresqlDbUserRequest &request
    );
    // 创建插件
    //
    // 在指定数据库上创建插件。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreatePostgresqlExtensionResponse> createPostgresqlExtension(
        CreatePostgresqlExtensionRequest &request
    );
    // 删除数据库
    //
    // 删除数据库。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeletePostgresqlDatabaseResponse> deletePostgresqlDatabase(
        DeletePostgresqlDatabaseRequest &request
    );
    // 删除数据库用户
    //
    // 删除数据库用户。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeletePostgresqlDbUserResponse> deletePostgresqlDbUser(
        DeletePostgresqlDbUserRequest &request
    );
    // 删除插件
    //
    // 在指定数据库上删除插件。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeletePostgresqlExtensionResponse> deletePostgresqlExtension(
        DeletePostgresqlExtensionRequest &request
    );
    // 授予用户角色
    //
    // 授予用户角色
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ExecutePrivilegeDatabaseUserRoleResponse> executePrivilegeDatabaseUserRole(
        ExecutePrivilegeDatabaseUserRoleRequest &request
    );
    // 撤回用户角色
    //
    // 撤回用户角色
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ExecuteRevokeDatabaseUserRoleResponse> executeRevokeDatabaseUserRole(
        ExecuteRevokeDatabaseUserRoleRequest &request
    );
    // 查询数据库角色信息
    //
    // 查询数据库角色信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDatabaseUserRoleResponse> listDatabaseUserRole(
        ListDatabaseUserRoleRequest &request
    );
    // 查询数据库SCHEMA列表
    //
    // 查询指定实例的数据库SCHEMA列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListPostgresqlDatabaseSchemasResponse> listPostgresqlDatabaseSchemas(
        ListPostgresqlDatabaseSchemasRequest &request
    );
    // 查询数据库列表
    //
    // 查询指定实例中的数据库列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListPostgresqlDatabasesResponse> listPostgresqlDatabases(
        ListPostgresqlDatabasesRequest &request
    );
    // 查询数据库用户列表
    //
    // 在指定实例中查询数据库用户列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListPostgresqlDbUserPaginatedResponse> listPostgresqlDbUserPaginated(
        ListPostgresqlDbUserPaginatedRequest &request
    );
    // 查询插件
    //
    // 获取指定数据库的插件信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListPostgresqlExtensionResponse> listPostgresqlExtension(
        ListPostgresqlExtensionRequest &request
    );
    // 解除数据库帐号权限
    //
    // 解除数据库帐号权限
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RevokePostgresqlDbPrivilegeResponse> revokePostgresqlDbPrivilege(
        RevokePostgresqlDbPrivilegeRequest &request
    );
    // 查询数据库代理可变更的规格
    //
    // 查询数据库代理可变更的规格信息。
    // 
    // - 调用接口前，您需要了解API 认证鉴权。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SearchQueryScaleComputeFlavorsResponse> searchQueryScaleComputeFlavors(
        SearchQueryScaleComputeFlavorsRequest &request
    );
    // 查询数据库代理可变更的规格
    //
    // 查询数据库代理可变更的规格信息。
    // 
    // - 调用接口前，您需要了解API 认证鉴权。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SearchQueryScaleFlavorsResponse> searchQueryScaleFlavors(
        SearchQueryScaleFlavorsRequest &request
    );
    // 设置数据库用户权限
    //
    // 设置数据库用户权限：只读或可读写。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SetDatabaseUserPrivilegeResponse> setDatabaseUserPrivilege(
        SetDatabaseUserPrivilegeRequest &request
    );
    // 重置数据库帐号密码
    //
    // 重置指定数据库帐号的密码。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SetPostgresqlDbUserPwdResponse> setPostgresqlDbUserPwd(
        SetPostgresqlDbUserPwdRequest &request
    );
    // 查询数据库代理信息
    //
    // 查询指定实例的数据库代理详细信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowInformationAboutDatabaseProxyResponse> showInformationAboutDatabaseProxy(
        ShowInformationAboutDatabaseProxyRequest &request
    );
    // 获取实例指定参数的值
    //
    // 获取实例指定参数的值。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowPostgresqlParamValueResponse> showPostgresqlParamValue(
        ShowPostgresqlParamValueRequest &request
    );
    // 开启数据库代理
    //
    // 为指定实例开启数据库代理。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<StartDatabaseProxyResponse> startDatabaseProxy(
        StartDatabaseProxyRequest &request
    );
    // 关闭数据库代理
    //
    // 为指定实例关闭数据库代理。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<StopDatabaseProxyResponse> stopDatabaseProxy(
        StopDatabaseProxyRequest &request
    );
    // 修改数据库owner
    //
    // 修改数据库owner
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateDatabaseOwnerResponse> updateDatabaseOwner(
        UpdateDatabaseOwnerRequest &request
    );
    // 
    //
    // 数据库帐号授权。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateDbUserPrivilegeResponse> updateDbUserPrivilege(
        UpdateDbUserPrivilegeRequest &request
    );
    // 修改指定实例的数据库备注
    //
    // 修改指定实例中的数据库备注。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdatePostgresqlDatabaseResponse> updatePostgresqlDatabase(
        UpdatePostgresqlDatabaseRequest &request
    );
    // 修改数据库用户名备注
    //
    // 修改数据库用户名备注
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdatePostgresqlDbUserCommentResponse> updatePostgresqlDbUserComment(
        UpdatePostgresqlDbUserCommentRequest &request
    );
    // 更新插件
    //
    // 在指定数据库上更新插件。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdatePostgresqlExtensionResponse> updatePostgresqlExtension(
        UpdatePostgresqlExtensionRequest &request
    );
    // 修改实例指定参数的值
    //
    // 修改实例指定参数的值。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdatePostgresqlParameterValueResponse> updatePostgresqlParameterValue(
        UpdatePostgresqlParameterValueRequest &request
    );
    // 修改读写分离权重
    //
    // 修改指定实例的读写分离权重。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateReadWeightResponse> updateReadWeight(
        UpdateReadWeightRequest &request
    );

    // 授权数据库帐号
    //
    // 授权数据库帐号。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AllowSqlserverDbUserPrivilegeResponse> allowSqlserverDbUserPrivilege(
        AllowSqlserverDbUserPrivilegeRequest &request
    );
    // 添加MSDTC
    //
    // 添加MSDTC相关主机host地址
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchAddMsdtcsResponse> batchAddMsdtcs(
        BatchAddMsdtcsRequest &request
    );
    // 创建数据库
    //
    // 创建数据库。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateSqlserverDatabaseResponse> createSqlserverDatabase(
        CreateSqlserverDatabaseRequest &request
    );
    // 创建数据库用户
    //
    // 创建数据库用户。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateSqlserverDbUserResponse> createSqlserverDbUser(
        CreateSqlserverDbUserRequest &request
    );
    // 删除数据库
    //
    // 删除数据库。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteSqlserverDatabaseResponse> deleteSqlserverDatabase(
        DeleteSqlserverDatabaseRequest &request
    );
    // 删除数据库
    //
    // 删除数据库。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteSqlserverDatabaseExResponse> deleteSqlserverDatabaseEx(
        DeleteSqlserverDatabaseExRequest &request
    );
    // 删除数据库用户
    //
    // 删除数据库用户。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteSqlserverDbUserResponse> deleteSqlserverDbUser(
        DeleteSqlserverDbUserRequest &request
    );
    // 查询指定数据库的已授权用户
    //
    // 查询指定数据库的已授权用户。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAuthorizedSqlserverDbUsersResponse> listAuthorizedSqlserverDbUsers(
        ListAuthorizedSqlserverDbUsersRequest &request
    );
    // 查询MSDTC的hosts信息
    //
    // 查询MSDTC的hosts信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListMsdtcHostsResponse> listMsdtcHosts(
        ListMsdtcHostsRequest &request
    );
    // 查询数据库列表
    //
    // 查询数据库列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListSqlserverDatabasesResponse> listSqlserverDatabases(
        ListSqlserverDatabasesRequest &request
    );
    // 查询数据库用户列表
    //
    // 查询数据库用户列表。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListSqlserverDbUsersResponse> listSqlserverDbUsers(
        ListSqlserverDbUsersRequest &request
    );
    // 修改实例字符集
    //
    // 修改实例字符集。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ModifyCollationResponse> modifyCollation(
        ModifyCollationRequest &request
    );
    // 解除数据库帐号权限
    //
    // 解除数据库帐号权限。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RevokeSqlserverDbUserPrivilegeResponse> revokeSqlserverDbUserPrivilege(
        RevokeSqlserverDbUserPrivilegeRequest &request
    );
    // 收缩数据库日志
    //
    // 收缩数据库日志
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SetInstancesDbShrinkResponse> setInstancesDbShrink(
        SetInstancesDbShrinkRequest &request
    );
    // 收缩数据库日志
    //
    // 收缩数据库日志
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SetInstancesNewDbShrinkResponse> setInstancesNewDbShrink(
        SetInstancesNewDbShrinkRequest &request
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

template class HUAWEICLOUD_RDS_V3_EXPORT ::HuaweiCloud::Sdk::Core::ClientBuilder<::HuaweiCloud::Sdk::Rds::V3::RdsClient>;

#endif // HUAWEICLOUD_SDK_RDS_V3_RdsClient_H_

