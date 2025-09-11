#ifndef HUAWEICLOUD_SDK_DBSS_V1_DbssClient_H_
#define HUAWEICLOUD_SDK_DBSS_V1_DbssClient_H_

#include <huaweicloud/dbss/v1/DbssExport.h>
#include <huaweicloud/core/Client.h>
#include <huaweicloud/core/ClientBuilder.h>


#include <huaweicloud/dbss/v1/model/AddAuditAgentRequest.h>
#include <huaweicloud/dbss/v1/model/AddAuditAgentResponse.h>
#include <huaweicloud/dbss/v1/model/AddAuditDatabaseNewRequest.h>
#include <huaweicloud/dbss/v1/model/AddAuditDatabaseNewResponse.h>
#include <huaweicloud/dbss/v1/model/AddAuditDatabaseRequest.h>
#include <huaweicloud/dbss/v1/model/AddAuditDatabaseResponse.h>
#include <huaweicloud/dbss/v1/model/AddRdsDatabaseNewRequest.h>
#include <huaweicloud/dbss/v1/model/AddRdsDatabaseNewResponse.h>
#include <huaweicloud/dbss/v1/model/AddRdsDatabaseRequest.h>
#include <huaweicloud/dbss/v1/model/AddRdsDatabaseResponse.h>
#include <huaweicloud/dbss/v1/model/AddRdsNoAgentDatabaseRequest.h>
#include <huaweicloud/dbss/v1/model/AddRdsNoAgentDatabaseResponse.h>
#include <huaweicloud/dbss/v1/model/AgentSwitchRequest.h>
#include <huaweicloud/dbss/v1/model/AlarmLogRequest.h>
#include <huaweicloud/dbss/v1/model/AuditAgentRequest.h>
#include <huaweicloud/dbss/v1/model/AuditScopeRequestNew.h>
#include <huaweicloud/dbss/v1/model/AuditScopeSwitchRequestNew.h>
#include <huaweicloud/dbss/v1/model/AuditSqlRequest.h>
#include <huaweicloud/dbss/v1/model/AuditSummaryStatusRequest.h>
#include <huaweicloud/dbss/v1/model/BackupPageRequest.h>
#include <huaweicloud/dbss/v1/model/BackupSwitchRequest.h>
#include <huaweicloud/dbss/v1/model/BatchDeleteAuditScopeRequest.h>
#include <huaweicloud/dbss/v1/model/BatchDeleteAuditScopeResponse.h>
#include <huaweicloud/dbss/v1/model/BatchSetAuditAlarmLogStatusRequest.h>
#include <huaweicloud/dbss/v1/model/BatchSetAuditAlarmLogStatusResponse.h>
#include <huaweicloud/dbss/v1/model/BatchSwitchesRequest.h>
#include <huaweicloud/dbss/v1/model/BatchSwitchesRequestNew.h>
#include <huaweicloud/dbss/v1/model/BindDbEncryptEipRequest.h>
#include <huaweicloud/dbss/v1/model/BindDbEncryptEipResponse.h>
#include <huaweicloud/dbss/v1/model/BindDbOmEipRequest.h>
#include <huaweicloud/dbss/v1/model/BindDbOmEipResponse.h>
#include <huaweicloud/dbss/v1/model/BindEIPRequest.h>
#include <huaweicloud/dbss/v1/model/ChangeDbEncryptSecurityGroupRequest.h>
#include <huaweicloud/dbss/v1/model/ChangeDbEncryptSecurityGroupResponse.h>
#include <huaweicloud/dbss/v1/model/ChangeDbOmSecurityGroupRequest.h>
#include <huaweicloud/dbss/v1/model/ChangeDbOmSecurityGroupResponse.h>
#include <huaweicloud/dbss/v1/model/ChangeNameRequest.h>
#include <huaweicloud/dbss/v1/model/ChangePasswordRequest.h>
#include <huaweicloud/dbss/v1/model/ChangeSecurityGroupRequest.h>
#include <huaweicloud/dbss/v1/model/ChargeOrderDbssNew.h>
#include <huaweicloud/dbss/v1/model/ConfigAlarmTopicRequest.h>
#include <huaweicloud/dbss/v1/model/ConfigReportTopicRequest.h>
#include <huaweicloud/dbss/v1/model/ConfirmUpgradeAuditRequest.h>
#include <huaweicloud/dbss/v1/model/ConfirmUpgradeAuditResponse.h>
#include <huaweicloud/dbss/v1/model/CountDbAccountSessionRequest.h>
#include <huaweicloud/dbss/v1/model/CountDbAccountSessionResponse.h>
#include <huaweicloud/dbss/v1/model/CountDbClientSessionRequest.h>
#include <huaweicloud/dbss/v1/model/CountDbClientSessionResponse.h>
#include <huaweicloud/dbss/v1/model/CountInjectionStatisticsRequest.h>
#include <huaweicloud/dbss/v1/model/CountInjectionStatisticsResponse.h>
#include <huaweicloud/dbss/v1/model/CountOperationStatisticsRequest.h>
#include <huaweicloud/dbss/v1/model/CountOperationStatisticsResponse.h>
#include <huaweicloud/dbss/v1/model/CountRiskTrendStatisticsRequest.h>
#include <huaweicloud/dbss/v1/model/CountRiskTrendStatisticsResponse.h>
#include <huaweicloud/dbss/v1/model/CountSessionStatisticsRequest.h>
#include <huaweicloud/dbss/v1/model/CountSessionStatisticsResponse.h>
#include <huaweicloud/dbss/v1/model/CountSqlStatisticsRequest.h>
#include <huaweicloud/dbss/v1/model/CountSqlStatisticsResponse.h>
#include <huaweicloud/dbss/v1/model/CountSqlTrendStatisticsRequest.h>
#include <huaweicloud/dbss/v1/model/CountSqlTrendStatisticsResponse.h>
#include <huaweicloud/dbss/v1/model/CreateAuditRiskRuleRequest.h>
#include <huaweicloud/dbss/v1/model/CreateAuditRiskRuleResponse.h>
#include <huaweicloud/dbss/v1/model/CreateAuditScopeRuleRequest.h>
#include <huaweicloud/dbss/v1/model/CreateAuditScopeRuleResponse.h>
#include <huaweicloud/dbss/v1/model/CreateDatabaseRequest.h>
#include <huaweicloud/dbss/v1/model/CreateDbEncryptInstancePeriodRequest.h>
#include <huaweicloud/dbss/v1/model/CreateDbEncryptInstancePeriodResponse.h>
#include <huaweicloud/dbss/v1/model/CreateDbOmInstancePeriodRequest.h>
#include <huaweicloud/dbss/v1/model/CreateDbOmInstancePeriodResponse.h>
#include <huaweicloud/dbss/v1/model/CreateInstancePeriodRequest.h>
#include <huaweicloud/dbss/v1/model/CreateInstancesPeriodOrderNewRequest.h>
#include <huaweicloud/dbss/v1/model/CreateInstancesPeriodOrderNewResponse.h>
#include <huaweicloud/dbss/v1/model/CreateInstancesPeriodOrderRequest.h>
#include <huaweicloud/dbss/v1/model/CreateInstancesPeriodOrderResponse.h>
#include <huaweicloud/dbss/v1/model/CreateReportRequest.h>
#include <huaweicloud/dbss/v1/model/CreateReportRequestBody.h>
#include <huaweicloud/dbss/v1/model/CreateReportResponse.h>
#include <huaweicloud/dbss/v1/model/CreateSensitiveMaskRuleRequest.h>
#include <huaweicloud/dbss/v1/model/CreateSensitiveMaskRuleResponse.h>
#include <huaweicloud/dbss/v1/model/DeleteAuditAgentRequest.h>
#include <huaweicloud/dbss/v1/model/DeleteAuditAgentResponse.h>
#include <huaweicloud/dbss/v1/model/DeleteAuditAlarmLogRequest.h>
#include <huaweicloud/dbss/v1/model/DeleteAuditAlarmLogResponse.h>
#include <huaweicloud/dbss/v1/model/DeleteAuditBackupTaskRequest.h>
#include <huaweicloud/dbss/v1/model/DeleteAuditBackupTaskResponse.h>
#include <huaweicloud/dbss/v1/model/DeleteAuditDatabaseNewRequest.h>
#include <huaweicloud/dbss/v1/model/DeleteAuditDatabaseNewResponse.h>
#include <huaweicloud/dbss/v1/model/DeleteAuditDatabaseRequest.h>
#include <huaweicloud/dbss/v1/model/DeleteAuditDatabaseResponse.h>
#include <huaweicloud/dbss/v1/model/DeleteAuditReportRequest.h>
#include <huaweicloud/dbss/v1/model/DeleteAuditReportResponse.h>
#include <huaweicloud/dbss/v1/model/DeleteAuditRuleRiskRequest.h>
#include <huaweicloud/dbss/v1/model/DeleteAuditRuleRiskResponse.h>
#include <huaweicloud/dbss/v1/model/DeleteAuditScopeRequest.h>
#include <huaweicloud/dbss/v1/model/DeleteAuditScopeResponse.h>
#include <huaweicloud/dbss/v1/model/DeleteDbEncryptInstanceRequest.h>
#include <huaweicloud/dbss/v1/model/DeleteDbEncryptInstanceResponse.h>
#include <huaweicloud/dbss/v1/model/DeleteDbOmInstanceRequest.h>
#include <huaweicloud/dbss/v1/model/DeleteDbOmInstanceResponse.h>
#include <huaweicloud/dbss/v1/model/DeleteInstanceDemandRequest.h>
#include <huaweicloud/dbss/v1/model/DeleteInstancesNewRequest.h>
#include <huaweicloud/dbss/v1/model/DeleteInstancesNewResponse.h>
#include <huaweicloud/dbss/v1/model/DeleteInstancesRequest.h>
#include <huaweicloud/dbss/v1/model/DeleteInstancesResponse.h>
#include <huaweicloud/dbss/v1/model/DeleteSensitiveRulesRequest.h>
#include <huaweicloud/dbss/v1/model/DeleteSensitiveRulesResponse.h>
#include <huaweicloud/dbss/v1/model/DownloadAuditAgentRequest.h>
#include <huaweicloud/dbss/v1/model/DownloadAuditAgentResponse.h>
#include <huaweicloud/dbss/v1/model/DownloadAuditReportRequest.h>
#include <huaweicloud/dbss/v1/model/DownloadAuditReportResponse.h>
#include <huaweicloud/dbss/v1/model/GeneralRequest.h>
#include <huaweicloud/dbss/v1/model/ListAlarmTopicConfigInfoNewRequest.h>
#include <huaweicloud/dbss/v1/model/ListAlarmTopicConfigInfoNewResponse.h>
#include <huaweicloud/dbss/v1/model/ListAlarmTopicConfigInfoRequest.h>
#include <huaweicloud/dbss/v1/model/ListAlarmTopicConfigInfoResponse.h>
#include <huaweicloud/dbss/v1/model/ListAuditAgentRequest.h>
#include <huaweicloud/dbss/v1/model/ListAuditAgentResponse.h>
#include <huaweicloud/dbss/v1/model/ListAuditAlarmLogNewRequest.h>
#include <huaweicloud/dbss/v1/model/ListAuditAlarmLogNewResponse.h>
#include <huaweicloud/dbss/v1/model/ListAuditAlarmLogRequest.h>
#include <huaweicloud/dbss/v1/model/ListAuditAlarmLogResponse.h>
#include <huaweicloud/dbss/v1/model/ListAuditBackupInfoRequest.h>
#include <huaweicloud/dbss/v1/model/ListAuditBackupInfoResponse.h>
#include <huaweicloud/dbss/v1/model/ListAuditBackupRiskTemplatesRequest.h>
#include <huaweicloud/dbss/v1/model/ListAuditBackupRiskTemplatesResponse.h>
#include <huaweicloud/dbss/v1/model/ListAuditDatabasesNewRequest.h>
#include <huaweicloud/dbss/v1/model/ListAuditDatabasesNewResponse.h>
#include <huaweicloud/dbss/v1/model/ListAuditDatabasesRequest.h>
#include <huaweicloud/dbss/v1/model/ListAuditDatabasesResponse.h>
#include <huaweicloud/dbss/v1/model/ListAuditInstanceJobsNewRequest.h>
#include <huaweicloud/dbss/v1/model/ListAuditInstanceJobsNewResponse.h>
#include <huaweicloud/dbss/v1/model/ListAuditInstanceJobsRequest.h>
#include <huaweicloud/dbss/v1/model/ListAuditInstanceJobsResponse.h>
#include <huaweicloud/dbss/v1/model/ListAuditInstancesNewRequest.h>
#include <huaweicloud/dbss/v1/model/ListAuditInstancesNewResponse.h>
#include <huaweicloud/dbss/v1/model/ListAuditInstancesRequest.h>
#include <huaweicloud/dbss/v1/model/ListAuditInstancesResponse.h>
#include <huaweicloud/dbss/v1/model/ListAuditObsBucketsRequest.h>
#include <huaweicloud/dbss/v1/model/ListAuditObsBucketsResponse.h>
#include <huaweicloud/dbss/v1/model/ListAuditOperateLogsNewRequest.h>
#include <huaweicloud/dbss/v1/model/ListAuditOperateLogsNewResponse.h>
#include <huaweicloud/dbss/v1/model/ListAuditOperateLogsRequest.h>
#include <huaweicloud/dbss/v1/model/ListAuditOperateLogsResponse.h>
#include <huaweicloud/dbss/v1/model/ListAuditReportTemplatesRequest.h>
#include <huaweicloud/dbss/v1/model/ListAuditReportTemplatesResponse.h>
#include <huaweicloud/dbss/v1/model/ListAuditReportsRequest.h>
#include <huaweicloud/dbss/v1/model/ListAuditReportsResponse.h>
#include <huaweicloud/dbss/v1/model/ListAuditRuleRisksNewRequest.h>
#include <huaweicloud/dbss/v1/model/ListAuditRuleRisksNewResponse.h>
#include <huaweicloud/dbss/v1/model/ListAuditRuleRisksRequest.h>
#include <huaweicloud/dbss/v1/model/ListAuditRuleRisksResponse.h>
#include <huaweicloud/dbss/v1/model/ListAuditRuleScopesNewRequest.h>
#include <huaweicloud/dbss/v1/model/ListAuditRuleScopesNewResponse.h>
#include <huaweicloud/dbss/v1/model/ListAuditRuleScopesRequest.h>
#include <huaweicloud/dbss/v1/model/ListAuditRuleScopesResponse.h>
#include <huaweicloud/dbss/v1/model/ListAuditSensitiveMasksNewRequest.h>
#include <huaweicloud/dbss/v1/model/ListAuditSensitiveMasksNewResponse.h>
#include <huaweicloud/dbss/v1/model/ListAuditSensitiveMasksRequest.h>
#include <huaweicloud/dbss/v1/model/ListAuditSensitiveMasksResponse.h>
#include <huaweicloud/dbss/v1/model/ListAuditSqlsNewRequest.h>
#include <huaweicloud/dbss/v1/model/ListAuditSqlsNewResponse.h>
#include <huaweicloud/dbss/v1/model/ListAuditSqlsRequest.h>
#include <huaweicloud/dbss/v1/model/ListAuditSqlsResponse.h>
#include <huaweicloud/dbss/v1/model/ListAuditSummaryInfosRequest.h>
#include <huaweicloud/dbss/v1/model/ListAuditSummaryInfosResponse.h>
#include <huaweicloud/dbss/v1/model/ListAuditTrendHistoryRequest.h>
#include <huaweicloud/dbss/v1/model/ListAuditTrendHistoryResponse.h>
#include <huaweicloud/dbss/v1/model/ListAvailabilityZoneInfosNewRequest.h>
#include <huaweicloud/dbss/v1/model/ListAvailabilityZoneInfosNewResponse.h>
#include <huaweicloud/dbss/v1/model/ListAvailabilityZoneInfosRequest.h>
#include <huaweicloud/dbss/v1/model/ListAvailabilityZoneInfosResponse.h>
#include <huaweicloud/dbss/v1/model/ListDbEncryptInstancesRequest.h>
#include <huaweicloud/dbss/v1/model/ListDbEncryptInstancesResponse.h>
#include <huaweicloud/dbss/v1/model/ListEcsSpecificationNewRequest.h>
#include <huaweicloud/dbss/v1/model/ListEcsSpecificationNewResponse.h>
#include <huaweicloud/dbss/v1/model/ListEcsSpecificationRequest.h>
#include <huaweicloud/dbss/v1/model/ListEcsSpecificationResponse.h>
#include <huaweicloud/dbss/v1/model/ListInstancesRequest.h>
#include <huaweicloud/dbss/v1/model/ListInstancesResponse.h>
#include <huaweicloud/dbss/v1/model/ListRdsDatabasesRequest.h>
#include <huaweicloud/dbss/v1/model/ListRdsDatabasesResponse.h>
#include <huaweicloud/dbss/v1/model/ListSqlInjectionRulesRequest.h>
#include <huaweicloud/dbss/v1/model/ListSqlInjectionRulesResponse.h>
#include <huaweicloud/dbss/v1/model/MarkAlarmLog.h>
#include <huaweicloud/dbss/v1/model/MaskRuleRequest.h>
#include <huaweicloud/dbss/v1/model/MonitorInfoRequest.h>
#include <huaweicloud/dbss/v1/model/OperateLogGetRequest.h>
#include <huaweicloud/dbss/v1/model/RankRiskRuleNew.h>
#include <huaweicloud/dbss/v1/model/RdsDbRequest.h>
#include <huaweicloud/dbss/v1/model/RdsNoAgentDbRequest.h>
#include <huaweicloud/dbss/v1/model/RebootAuditInstanceNewRequest.h>
#include <huaweicloud/dbss/v1/model/RebootAuditInstanceNewResponse.h>
#include <huaweicloud/dbss/v1/model/RebootAuditInstanceRequest.h>
#include <huaweicloud/dbss/v1/model/RebootAuditInstanceResponse.h>
#include <huaweicloud/dbss/v1/model/RebootDbEncryptInstanceRequest.h>
#include <huaweicloud/dbss/v1/model/RebootDbEncryptInstanceResponse.h>
#include <huaweicloud/dbss/v1/model/RebootDbOmInstanceRequest.h>
#include <huaweicloud/dbss/v1/model/RebootDbOmInstanceResponse.h>
#include <huaweicloud/dbss/v1/model/ReportAccountSessionNew.h>
#include <huaweicloud/dbss/v1/model/ReportClientSessionNew.h>
#include <huaweicloud/dbss/v1/model/ReportGetReportsRequest.h>
#include <huaweicloud/dbss/v1/model/ResetDbEncryptPasswordRequest.h>
#include <huaweicloud/dbss/v1/model/ResetDbEncryptPasswordResponse.h>
#include <huaweicloud/dbss/v1/model/ResetDbOmPasswordRequest.h>
#include <huaweicloud/dbss/v1/model/ResetDbOmPasswordResponse.h>
#include <huaweicloud/dbss/v1/model/RestoreAuditBackupRequest.h>
#include <huaweicloud/dbss/v1/model/RestoreAuditBackupResponse.h>
#include <huaweicloud/dbss/v1/model/RetryAuditBackupTaskRequest.h>
#include <huaweicloud/dbss/v1/model/RetryAuditBackupTaskResponse.h>
#include <huaweicloud/dbss/v1/model/RiskBackupConfig.h>
#include <huaweicloud/dbss/v1/model/RiskBackupTemplate.h>
#include <huaweicloud/dbss/v1/model/RuleAddRiskRuleRequest.h>
#include <huaweicloud/dbss/v1/model/RuleScopeRequest.h>
#include <huaweicloud/dbss/v1/model/SecurityGroupRequest.h>
#include <huaweicloud/dbss/v1/model/ServerIdBean.h>
#include <huaweicloud/dbss/v1/model/SetAlarmTopicConfigInfoNewRequest.h>
#include <huaweicloud/dbss/v1/model/SetAlarmTopicConfigInfoNewResponse.h>
#include <huaweicloud/dbss/v1/model/SetAlarmTopicConfigInfoRequest.h>
#include <huaweicloud/dbss/v1/model/SetAlarmTopicConfigInfoResponse.h>
#include <huaweicloud/dbss/v1/model/SetAuditAlarmLogStatusRequest.h>
#include <huaweicloud/dbss/v1/model/SetAuditAlarmLogStatusResponse.h>
#include <huaweicloud/dbss/v1/model/SetAuditAutoBackupTemplateRequest.h>
#include <huaweicloud/dbss/v1/model/SetAuditAutoBackupTemplateResponse.h>
#include <huaweicloud/dbss/v1/model/SetAuditBackupRiskSwitchRequest.h>
#include <huaweicloud/dbss/v1/model/SetAuditBackupRiskSwitchResponse.h>
#include <huaweicloud/dbss/v1/model/SetAuditBackupSwitchRequest.h>
#include <huaweicloud/dbss/v1/model/SetAuditBackupSwitchResponse.h>
#include <huaweicloud/dbss/v1/model/SetAuditInstanceTimeZoneRequest.h>
#include <huaweicloud/dbss/v1/model/SetAuditInstanceTimeZoneResponse.h>
#include <huaweicloud/dbss/v1/model/SetAuditScopeRuleSwitchRequest.h>
#include <huaweicloud/dbss/v1/model/SetAuditScopeRuleSwitchResponse.h>
#include <huaweicloud/dbss/v1/model/SetRiskOperationPolicyRequest.h>
#include <huaweicloud/dbss/v1/model/SetRiskOperationPolicyResponse.h>
#include <huaweicloud/dbss/v1/model/SetRiskRuleRankRequest.h>
#include <huaweicloud/dbss/v1/model/SetRiskRuleRankResponse.h>
#include <huaweicloud/dbss/v1/model/SetSensitiveMaskRuleSwitchRequest.h>
#include <huaweicloud/dbss/v1/model/SetSensitiveMaskRuleSwitchResponse.h>
#include <huaweicloud/dbss/v1/model/SetSensitiveResultSwitchRequest.h>
#include <huaweicloud/dbss/v1/model/SetSensitiveResultSwitchResponse.h>
#include <huaweicloud/dbss/v1/model/SetSensitiveSwitchRequest.h>
#include <huaweicloud/dbss/v1/model/SetSensitiveSwitchResponse.h>
#include <huaweicloud/dbss/v1/model/ShowAuditBackRiskTemplateRequest.h>
#include <huaweicloud/dbss/v1/model/ShowAuditBackRiskTemplateResponse.h>
#include <huaweicloud/dbss/v1/model/ShowAuditBackupStatusRequest.h>
#include <huaweicloud/dbss/v1/model/ShowAuditBackupStatusResponse.h>
#include <huaweicloud/dbss/v1/model/ShowAuditQuotaNewRequest.h>
#include <huaweicloud/dbss/v1/model/ShowAuditQuotaNewResponse.h>
#include <huaweicloud/dbss/v1/model/ShowAuditQuotaRequest.h>
#include <huaweicloud/dbss/v1/model/ShowAuditQuotaResponse.h>
#include <huaweicloud/dbss/v1/model/ShowAuditRuleRiskNewRequest.h>
#include <huaweicloud/dbss/v1/model/ShowAuditRuleRiskNewResponse.h>
#include <huaweicloud/dbss/v1/model/ShowAuditRuleRiskRequest.h>
#include <huaweicloud/dbss/v1/model/ShowAuditRuleRiskResponse.h>
#include <huaweicloud/dbss/v1/model/ShowAuditStatisticsRequest.h>
#include <huaweicloud/dbss/v1/model/ShowAuditStatisticsResponse.h>
#include <huaweicloud/dbss/v1/model/ShowAuditTaskStatusRequest.h>
#include <huaweicloud/dbss/v1/model/ShowAuditTaskStatusResponse.h>
#include <huaweicloud/dbss/v1/model/ShowAuditTopicReportSchedulerConfigRequest.h>
#include <huaweicloud/dbss/v1/model/ShowAuditTopicReportSchedulerConfigResponse.h>
#include <huaweicloud/dbss/v1/model/ShowAuditUpgradeStatusRequest.h>
#include <huaweicloud/dbss/v1/model/ShowAuditUpgradeStatusResponse.h>
#include <huaweicloud/dbss/v1/model/ShowBackupRiskBucketPathRequest.h>
#include <huaweicloud/dbss/v1/model/ShowBackupRiskBucketPathResponse.h>
#include <huaweicloud/dbss/v1/model/ShowInstanceMonitorInfoRequest.h>
#include <huaweicloud/dbss/v1/model/ShowInstanceMonitorInfoResponse.h>
#include <huaweicloud/dbss/v1/model/ShowInstanceQuotaRequest.h>
#include <huaweicloud/dbss/v1/model/ShowInstanceQuotaResponse.h>
#include <huaweicloud/dbss/v1/model/ShowSensitiveMaskSwitchRequest.h>
#include <huaweicloud/dbss/v1/model/ShowSensitiveMaskSwitchResponse.h>
#include <huaweicloud/dbss/v1/model/ShowSensitiveResultSwitchRequest.h>
#include <huaweicloud/dbss/v1/model/ShowSensitiveResultSwitchResponse.h>
#include <huaweicloud/dbss/v1/model/ShowServerVersionRequest.h>
#include <huaweicloud/dbss/v1/model/ShowServerVersionResponse.h>
#include <huaweicloud/dbss/v1/model/ShowSqlDetailRequest.h>
#include <huaweicloud/dbss/v1/model/ShowSqlDetailResponse.h>
#include <huaweicloud/dbss/v1/model/SqlRuleRequest.h>
#include <huaweicloud/dbss/v1/model/SqlSessionStatisticsRequest.h>
#include <huaweicloud/dbss/v1/model/StartAuditInstanceNewRequest.h>
#include <huaweicloud/dbss/v1/model/StartAuditInstanceNewResponse.h>
#include <huaweicloud/dbss/v1/model/StartAuditInstanceRequest.h>
#include <huaweicloud/dbss/v1/model/StartAuditInstanceResponse.h>
#include <huaweicloud/dbss/v1/model/StartDbEncryptInstanceRequest.h>
#include <huaweicloud/dbss/v1/model/StartDbEncryptInstanceResponse.h>
#include <huaweicloud/dbss/v1/model/StartDbOmInstanceRequest.h>
#include <huaweicloud/dbss/v1/model/StartDbOmInstanceResponse.h>
#include <huaweicloud/dbss/v1/model/StopAuditInstanceNewRequest.h>
#include <huaweicloud/dbss/v1/model/StopAuditInstanceNewResponse.h>
#include <huaweicloud/dbss/v1/model/StopAuditInstanceRequest.h>
#include <huaweicloud/dbss/v1/model/StopAuditInstanceResponse.h>
#include <huaweicloud/dbss/v1/model/StopDbEncryptInstanceRequest.h>
#include <huaweicloud/dbss/v1/model/StopDbEncryptInstanceResponse.h>
#include <huaweicloud/dbss/v1/model/StopDbOmInstanceRequest.h>
#include <huaweicloud/dbss/v1/model/StopDbOmInstanceResponse.h>
#include <huaweicloud/dbss/v1/model/SwitchAgentRequest.h>
#include <huaweicloud/dbss/v1/model/SwitchAgentResponse.h>
#include <huaweicloud/dbss/v1/model/SwitchAuditDatabaseNewRequest.h>
#include <huaweicloud/dbss/v1/model/SwitchAuditDatabaseNewResponse.h>
#include <huaweicloud/dbss/v1/model/SwitchAuditDatabaseRequest.h>
#include <huaweicloud/dbss/v1/model/SwitchAuditDatabaseResponse.h>
#include <huaweicloud/dbss/v1/model/SwitchAuditDbRequest.h>
#include <huaweicloud/dbss/v1/model/SwitchRiskRuleNewRequest.h>
#include <huaweicloud/dbss/v1/model/SwitchRiskRuleNewResponse.h>
#include <huaweicloud/dbss/v1/model/SwitchRiskRuleRequest.h>
#include <huaweicloud/dbss/v1/model/SwitchRiskRuleResponse.h>
#include <huaweicloud/dbss/v1/model/SwitchStatus.h>
#include <huaweicloud/dbss/v1/model/TimezoneRequest.h>
#include <huaweicloud/dbss/v1/model/TrendStatusResponse.h>
#include <huaweicloud/dbss/v1/model/UnbindDbEncryptEipRequest.h>
#include <huaweicloud/dbss/v1/model/UnbindDbEncryptEipResponse.h>
#include <huaweicloud/dbss/v1/model/UnbindDbOmEipRequest.h>
#include <huaweicloud/dbss/v1/model/UnbindDbOmEipResponse.h>
#include <huaweicloud/dbss/v1/model/UpdateAuditBean.h>
#include <huaweicloud/dbss/v1/model/UpdateAuditInstanceNewRequest.h>
#include <huaweicloud/dbss/v1/model/UpdateAuditInstanceNewResponse.h>
#include <huaweicloud/dbss/v1/model/UpdateAuditInstanceRequest.h>
#include <huaweicloud/dbss/v1/model/UpdateAuditInstanceResponse.h>
#include <huaweicloud/dbss/v1/model/UpdateAuditRiskBucketPathRequest.h>
#include <huaweicloud/dbss/v1/model/UpdateAuditRiskBucketPathResponse.h>
#include <huaweicloud/dbss/v1/model/UpdateAuditScopeRuleRequest.h>
#include <huaweicloud/dbss/v1/model/UpdateAuditScopeRuleResponse.h>
#include <huaweicloud/dbss/v1/model/UpdateAuditSecurityGroupNewRequest.h>
#include <huaweicloud/dbss/v1/model/UpdateAuditSecurityGroupNewResponse.h>
#include <huaweicloud/dbss/v1/model/UpdateAuditSecurityGroupRequest.h>
#include <huaweicloud/dbss/v1/model/UpdateAuditSecurityGroupResponse.h>
#include <huaweicloud/dbss/v1/model/UpdateAuditTaskStatusRequest.h>
#include <huaweicloud/dbss/v1/model/UpdateAuditTaskStatusResponse.h>
#include <huaweicloud/dbss/v1/model/UpdateAuditTopicReportSchedulerConfigRequest.h>
#include <huaweicloud/dbss/v1/model/UpdateAuditTopicReportSchedulerConfigResponse.h>
#include <huaweicloud/dbss/v1/model/UpdateDbEncryptInstanceNameRequest.h>
#include <huaweicloud/dbss/v1/model/UpdateDbEncryptInstanceNameResponse.h>
#include <huaweicloud/dbss/v1/model/UpdateDbOmInstanceNameRequest.h>
#include <huaweicloud/dbss/v1/model/UpdateDbOmInstanceNameResponse.h>
#include <huaweicloud/dbss/v1/model/UpdateSensitiveMaskRuleRequest.h>
#include <huaweicloud/dbss/v1/model/UpdateSensitiveMaskRuleResponse.h>
#include <huaweicloud/dbss/v1/model/UploadAuditDbConfigRequest.h>
#include <huaweicloud/dbss/v1/model/UploadAuditDbConfigResponse.h>
#include <string>

#include <huaweicloud/dbss/v1/model/AddAuditAgentNewRequest.h>
#include <huaweicloud/dbss/v1/model/AddAuditAgentNewResponse.h>
#include <huaweicloud/dbss/v1/model/AgentEditRequest.h>
#include <huaweicloud/dbss/v1/model/AgentSwitchRequest.h>
#include <huaweicloud/dbss/v1/model/AuditAgentRequest.h>
#include <huaweicloud/dbss/v1/model/CreateAuditDbAgentRequest.h>
#include <huaweicloud/dbss/v1/model/CreateAuditDbAgentResponse.h>
#include <huaweicloud/dbss/v1/model/DeleteAuditAgentNewRequest.h>
#include <huaweicloud/dbss/v1/model/DeleteAuditAgentNewResponse.h>
#include <huaweicloud/dbss/v1/model/DownloadAuditAgentNewRequest.h>
#include <huaweicloud/dbss/v1/model/DownloadAuditAgentNewResponse.h>
#include <huaweicloud/dbss/v1/model/ListAuditAgentNewRequest.h>
#include <huaweicloud/dbss/v1/model/ListAuditAgentNewResponse.h>
#include <huaweicloud/dbss/v1/model/SwitchAgentNewRequest.h>
#include <huaweicloud/dbss/v1/model/SwitchAgentNewResponse.h>
#include <string>

#include <huaweicloud/dbss/v1/model/AddWhitelistRequest.h>
#include <huaweicloud/dbss/v1/model/BatchAddAuditWhitelistRequest.h>
#include <huaweicloud/dbss/v1/model/BatchAddAuditWhitelistResponse.h>
#include <huaweicloud/dbss/v1/model/CreateAuditSqlRuleRequest.h>
#include <huaweicloud/dbss/v1/model/CreateAuditSqlRuleResponse.h>
#include <huaweicloud/dbss/v1/model/DeleteAuditRuleSqlRequest.h>
#include <huaweicloud/dbss/v1/model/DeleteAuditRuleSqlResponse.h>
#include <huaweicloud/dbss/v1/model/DeleteAuditWhitelistRequest.h>
#include <huaweicloud/dbss/v1/model/DeleteAuditWhitelistResponse.h>
#include <huaweicloud/dbss/v1/model/ListSqlInjectionRulesNewRequest.h>
#include <huaweicloud/dbss/v1/model/ListSqlInjectionRulesNewResponse.h>
#include <huaweicloud/dbss/v1/model/ListWhitelistsRequest.h>
#include <huaweicloud/dbss/v1/model/ListWhitelistsResponse.h>
#include <huaweicloud/dbss/v1/model/RuleAddSqlRequest.h>
#include <huaweicloud/dbss/v1/model/RuleSqlIdRequest.h>
#include <huaweicloud/dbss/v1/model/RuleSqlIdsRequestNew.h>
#include <huaweicloud/dbss/v1/model/SetAuditSqlRuleSwitchRequest.h>
#include <huaweicloud/dbss/v1/model/SetAuditSqlRuleSwitchResponse.h>
#include <huaweicloud/dbss/v1/model/SetSqlRuleRankRequest.h>
#include <huaweicloud/dbss/v1/model/SetSqlRuleRankResponse.h>
#include <huaweicloud/dbss/v1/model/SqlRuleRequest.h>
#include <huaweicloud/dbss/v1/model/UpdateAuditSqlRuleRequest.h>
#include <huaweicloud/dbss/v1/model/UpdateAuditSqlRuleResponse.h>
#include <huaweicloud/dbss/v1/model/UpdateAuditWhitelistRequest.h>
#include <huaweicloud/dbss/v1/model/UpdateAuditWhitelistResponse.h>
#include <huaweicloud/dbss/v1/model/UpdateWhitelistRequest.h>
#include <huaweicloud/dbss/v1/model/WhitelistBatchDeleteRequest.h>
#include <string>

#include <huaweicloud/dbss/v1/model/BatchAddResourceTagRequest.h>
#include <huaweicloud/dbss/v1/model/BatchAddResourceTagResponse.h>
#include <huaweicloud/dbss/v1/model/BatchDeleteResourceTagRequest.h>
#include <huaweicloud/dbss/v1/model/BatchDeleteResourceTagResponse.h>
#include <huaweicloud/dbss/v1/model/CountResourceInstanceByTagRequest.h>
#include <huaweicloud/dbss/v1/model/CountResourceInstanceByTagResponse.h>
#include <huaweicloud/dbss/v1/model/ListAuditTagsRequest.h>
#include <huaweicloud/dbss/v1/model/ListAuditTagsResponse.h>
#include <huaweicloud/dbss/v1/model/ListProjectResourceTagsRequest.h>
#include <huaweicloud/dbss/v1/model/ListProjectResourceTagsResponse.h>
#include <huaweicloud/dbss/v1/model/ListResourceInstanceByTagRequest.h>
#include <huaweicloud/dbss/v1/model/ListResourceInstanceByTagResponse.h>
#include <huaweicloud/dbss/v1/model/ResourceInstanceTagRequest.h>
#include <huaweicloud/dbss/v1/model/ResourceTagDeleteRequest.h>
#include <huaweicloud/dbss/v1/model/ResourceTagRequest.h>
#include <string>

#include <cpprest/details/basic_types.h>
#include <huaweicloud/core/utils/ModelBase.h>
#include <huaweicloud/core/utils/Object.h>
#undef U
#include <boost/optional.hpp>

namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {

using namespace HuaweiCloud::Sdk::Core;
using namespace HuaweiCloud::Sdk::Dbss::V1::Model;

class HUAWEICLOUD_DBSS_V1_EXPORT  DbssClient : public Client
{
public:

    DbssClient();

    virtual ~DbssClient();

    static ClientBuilder<DbssClient> newBuilder();

    // 添加审计数据库Agent[待下线]
    //
    // 添加审计数据库Agent
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddAuditAgentResponse> addAuditAgent(
        AddAuditAgentRequest &request
    );
    // 添加自建数据库[待下线]
    //
    // 添加自建数据库
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddAuditDatabaseResponse> addAuditDatabase(
        AddAuditDatabaseRequest &request
    );
    // 添加自建数据库
    //
    // 添加自建数据库
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddAuditDatabaseNewResponse> addAuditDatabaseNew(
        AddAuditDatabaseNewRequest &request
    );
    // 添加RDS数据库[待下线]
    //
    // 添加RDS数据库
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddRdsDatabaseResponse> addRdsDatabase(
        AddRdsDatabaseRequest &request
    );
    // 添加RDS数据库
    //
    // 添加RDS数据库
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddRdsDatabaseNewResponse> addRdsDatabaseNew(
        AddRdsDatabaseNewRequest &request
    );
    // 添加RDS数据库[待下线]
    //
    // 添加RDS数据库。V1版本已不再维护，待下线
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddRdsNoAgentDatabaseResponse> addRdsNoAgentDatabase(
        AddRdsNoAgentDatabaseRequest &request
    );
    // 审计范围规则操作-删除策略
    //
    // 审计范围规则操作-删除策略
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchDeleteAuditScopeResponse> batchDeleteAuditScope(
        BatchDeleteAuditScopeRequest &request
    );
    // 批量标记
    //
    // 批量标记
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchSetAuditAlarmLogStatusResponse> batchSetAuditAlarmLogStatus(
        BatchSetAuditAlarmLogStatusRequest &request
    );
    // 绑定数据库加密实例的eip
    //
    // 绑定数据库加密实例的eip
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BindDbEncryptEipResponse> bindDbEncryptEip(
        BindDbEncryptEipRequest &request
    );
    // 绑定数据库运维实例的eip
    //
    // 绑定数据库运维实例的eip
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BindDbOmEipResponse> bindDbOmEip(
        BindDbOmEipRequest &request
    );
    // 更改数据库加密实例的安全组
    //
    // 更改数据库加密实例的安全组
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ChangeDbEncryptSecurityGroupResponse> changeDbEncryptSecurityGroup(
        ChangeDbEncryptSecurityGroupRequest &request
    );
    // 更改数据库运维实例的安全组
    //
    // 更改数据库运维实例的安全组
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ChangeDbOmSecurityGroupResponse> changeDbOmSecurityGroup(
        ChangeDbOmSecurityGroupRequest &request
    );
    // 触发审计实例升级
    //
    // 触发审计实例升级
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ConfirmUpgradeAuditResponse> confirmUpgradeAudit(
        ConfirmUpgradeAuditRequest &request
    );
    // 查询数据库用户会话分布
    //
    // 查询数据库用户会话分布
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CountDbAccountSessionResponse> countDbAccountSession(
        CountDbAccountSessionRequest &request
    );
    // 查询客户端会话分布
    //
    // 查询客户端会话分布
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CountDbClientSessionResponse> countDbClientSession(
        CountDbClientSessionRequest &request
    );
    // 获取指定时间段内的sql注入分布统计
    //
    // 获取指定时间段内的sql注入分布统计
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CountInjectionStatisticsResponse> countInjectionStatistics(
        CountInjectionStatisticsRequest &request
    );
    // 获取指定时间段内的风险操作数量分布统计
    //
    // 获取指定时间段内的风险操作数量分布统计
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CountOperationStatisticsResponse> countOperationStatistics(
        CountOperationStatisticsRequest &request
    );
    // 获取指定时间段内的风险分布统计
    //
    // 获取指定时间段内的风险分布统计
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CountRiskTrendStatisticsResponse> countRiskTrendStatistics(
        CountRiskTrendStatisticsRequest &request
    );
    // 获取指定时间段内的查询会话统计
    //
    // 获取指定时间段内的查询会话统计
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CountSessionStatisticsResponse> countSessionStatistics(
        CountSessionStatisticsRequest &request
    );
    // 获取指定时间段内的SQL分布统计
    //
    // 获取指定时间段内的SQL分布统计
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CountSqlStatisticsResponse> countSqlStatistics(
        CountSqlStatisticsRequest &request
    );
    // 获取指定时间段内的sql数量分布统计
    //
    // 获取指定时间段内的sql数量分布统计
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CountSqlTrendStatisticsResponse> countSqlTrendStatistics(
        CountSqlTrendStatisticsRequest &request
    );
    // 添加风险规则
    //
    // 添加风险规则
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateAuditRiskRuleResponse> createAuditRiskRule(
        CreateAuditRiskRuleRequest &request
    );
    // 添加审计范围策略
    //
    // 添加审计范围策略
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateAuditScopeRuleResponse> createAuditScopeRule(
        CreateAuditScopeRuleRequest &request
    );
    // 按包周期方式购买数据库加密实例
    //
    // 按需方式购买数据库加密实例
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateDbEncryptInstancePeriodResponse> createDbEncryptInstancePeriod(
        CreateDbEncryptInstancePeriodRequest &request
    );
    // 包周期购买数据库运维实例
    //
    // 包周期购买数据库运维实例
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateDbOmInstancePeriodResponse> createDbOmInstancePeriod(
        CreateDbOmInstancePeriodRequest &request
    );
    // 包年包月计费模式创建审计实例[待下线]
    //
    // 包年包月计费模式创建审计实例
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateInstancesPeriodOrderResponse> createInstancesPeriodOrder(
        CreateInstancesPeriodOrderRequest &request
    );
    // 包年包月计费模式创建审计实例
    //
    // 包年包月计费模式创建审计实例
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateInstancesPeriodOrderNewResponse> createInstancesPeriodOrderNew(
        CreateInstancesPeriodOrderNewRequest &request
    );
    // 立即生成报表
    //
    // 立即生成报表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateReportResponse> createReport(
        CreateReportRequest &request
    );
    // 增加隐私数据脱敏规则
    //
    // 增加隐私数据脱敏规则
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateSensitiveMaskRuleResponse> createSensitiveMaskRule(
        CreateSensitiveMaskRuleRequest &request
    );
    // 删除数据库Agent[待下线]
    //
    // 删除数据库Agent
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteAuditAgentResponse> deleteAuditAgent(
        DeleteAuditAgentRequest &request
    );
    // 删除告警监控记录
    //
    // 删除告警监控记录
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteAuditAlarmLogResponse> deleteAuditAlarmLog(
        DeleteAuditAlarmLogRequest &request
    );
    // 删除指定备份任务
    //
    // 删除指定备份任务
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteAuditBackupTaskResponse> deleteAuditBackupTask(
        DeleteAuditBackupTaskRequest &request
    );
    // 删除数据库[待下线]
    //
    // 删除数据库
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteAuditDatabaseResponse> deleteAuditDatabase(
        DeleteAuditDatabaseRequest &request
    );
    // 删除数据库
    //
    // 删除数据库
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteAuditDatabaseNewResponse> deleteAuditDatabaseNew(
        DeleteAuditDatabaseNewRequest &request
    );
    // 删除报表
    //
    // 删除报表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteAuditReportResponse> deleteAuditReport(
        DeleteAuditReportRequest &request
    );
    // 删除风险策略
    //
    // 删除风险策略
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteAuditRuleRiskResponse> deleteAuditRuleRisk(
        DeleteAuditRuleRiskRequest &request
    );
    // 删除审计范围策略
    //
    // 删除审计范围策略
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteAuditScopeResponse> deleteAuditScope(
        DeleteAuditScopeRequest &request
    );
    // 删除数据库加密实例
    //
    // 删除数据库加密实例
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteDbEncryptInstanceResponse> deleteDbEncryptInstance(
        DeleteDbEncryptInstanceRequest &request
    );
    // 删除数据库运维实例
    //
    // 删除数据库运维实例
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteDbOmInstanceResponse> deleteDbOmInstance(
        DeleteDbOmInstanceRequest &request
    );
    // 删除审计实例[待下线]
    //
    // 只有按需计费模式实例没有任务时 或 包周期模式实例状态为故障时，才能执行此操作。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteInstancesResponse> deleteInstances(
        DeleteInstancesRequest &request
    );
    // 删除审计实例
    //
    // 只有按需计费模式实例没有任务时 或 包周期模式实例状态为故障时，才能执行此操作。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteInstancesNewResponse> deleteInstancesNew(
        DeleteInstancesNewRequest &request
    );
    // 删除隐私数据脱敏规则
    //
    // 删除隐私数据脱敏规则
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteSensitiveRulesResponse> deleteSensitiveRules(
        DeleteSensitiveRulesRequest &request
    );
    // 下载审计Agent[待下线]
    //
    // 下载审计Agent
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DownloadAuditAgentResponse> downloadAuditAgent(
        DownloadAuditAgentRequest &request
    );
    // 下载报表
    //
    // 下载报表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DownloadAuditReportResponse> downloadAuditReport(
        DownloadAuditReportRequest &request
    );
    // 获取实例告警配置[待下线]
    //
    // 获取实例告警配置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAlarmTopicConfigInfoResponse> listAlarmTopicConfigInfo(
        ListAlarmTopicConfigInfoRequest &request
    );
    // 获取实例告警配置
    //
    // 获取实例告警配置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAlarmTopicConfigInfoNewResponse> listAlarmTopicConfigInfoNew(
        ListAlarmTopicConfigInfoNewRequest &request
    );
    // 查询数据库Agent列表[待下线]
    //
    // 查询数据库Agent列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAuditAgentResponse> listAuditAgent(
        ListAuditAgentRequest &request
    );
    // 查询审计告警信息[待下线]
    //
    // 查询审计告警信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAuditAlarmLogResponse> listAuditAlarmLog(
        ListAuditAlarmLogRequest &request
    );
    // 查询审计告警信息
    //
    // 查询审计告警信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAuditAlarmLogNewResponse> listAuditAlarmLogNew(
        ListAuditAlarmLogNewRequest &request
    );
    // 获取所有备份信息
    //
    // 获取所有备份信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAuditBackupInfoResponse> listAuditBackupInfo(
        ListAuditBackupInfoRequest &request
    );
    // 获取风险导出配置列表
    //
    // 获取风险导出配置列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAuditBackupRiskTemplatesResponse> listAuditBackupRiskTemplates(
        ListAuditBackupRiskTemplatesRequest &request
    );
    // 查询数据库列表[待下线]
    //
    // 查询数据库列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAuditDatabasesResponse> listAuditDatabases(
        ListAuditDatabasesRequest &request
    );
    // 查询数据库列表
    //
    // 查询数据库列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAuditDatabasesNewResponse> listAuditDatabasesNew(
        ListAuditDatabasesNewRequest &request
    );
    // 查询实例创建任务信息[待下线]
    //
    // 查询实例创建任务信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAuditInstanceJobsResponse> listAuditInstanceJobs(
        ListAuditInstanceJobsRequest &request
    );
    // 查询实例创建任务信息
    //
    // 查询实例创建任务信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAuditInstanceJobsNewResponse> listAuditInstanceJobsNew(
        ListAuditInstanceJobsNewRequest &request
    );
    // 查询审计实例列表[待下线]
    //
    // 查询审计实例列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAuditInstancesResponse> listAuditInstances(
        ListAuditInstancesRequest &request
    );
    // 查询审计实例列表
    //
    // 查询审计实例列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAuditInstancesNewResponse> listAuditInstancesNew(
        ListAuditInstancesNewRequest &request
    );
    // 备份或风险导出时，选择obs桶
    //
    // 备份或风险导出时，选择obs桶
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAuditObsBucketsResponse> listAuditObsBuckets(
        ListAuditObsBucketsRequest &request
    );
    // 查询用户操作日志信息[待下线]
    //
    // 查询用户操作日志信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAuditOperateLogsResponse> listAuditOperateLogs(
        ListAuditOperateLogsRequest &request
    );
    // 查询用户操作日志信息
    //
    // 查询用户操作日志信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAuditOperateLogsNewResponse> listAuditOperateLogsNew(
        ListAuditOperateLogsNewRequest &request
    );
    // 获取报表模板
    //
    // 获取报表模板
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAuditReportTemplatesResponse> listAuditReportTemplates(
        ListAuditReportTemplatesRequest &request
    );
    // 查询报表
    //
    // 查询报表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAuditReportsResponse> listAuditReports(
        ListAuditReportsRequest &request
    );
    // 查询风险规则策略[待下线]
    //
    // 查询风险规则策略
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAuditRuleRisksResponse> listAuditRuleRisks(
        ListAuditRuleRisksRequest &request
    );
    // 查询风险规则策略
    //
    // 查询风险规则策略
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAuditRuleRisksNewResponse> listAuditRuleRisksNew(
        ListAuditRuleRisksNewRequest &request
    );
    // 查询审计范围策略列表[待下线]
    //
    // 查询审计范围策略列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAuditRuleScopesResponse> listAuditRuleScopes(
        ListAuditRuleScopesRequest &request
    );
    // 查询审计范围策略列表
    //
    // 查询审计范围策略列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAuditRuleScopesNewResponse> listAuditRuleScopesNew(
        ListAuditRuleScopesNewRequest &request
    );
    // 查询隐私数据脱敏规则[待下线]
    //
    // 查询隐私数据脱敏规则
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAuditSensitiveMasksResponse> listAuditSensitiveMasks(
        ListAuditSensitiveMasksRequest &request
    );
    // 查询隐私数据脱敏规则
    //
    // 查询隐私数据脱敏规则
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAuditSensitiveMasksNewResponse> listAuditSensitiveMasksNew(
        ListAuditSensitiveMasksNewRequest &request
    );
    // 查询审计SQL语句[待下线]
    //
    // 查询审计SQL语句
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAuditSqlsResponse> listAuditSqls(
        ListAuditSqlsRequest &request
    );
    // 查询审计SQL语句
    //
    // 查询审计SQL语句
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAuditSqlsNewResponse> listAuditSqlsNew(
        ListAuditSqlsNewRequest &request
    );
    // 查询审计汇总信息
    //
    // 查询审计汇总信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAuditSummaryInfosResponse> listAuditSummaryInfos(
        ListAuditSummaryInfosRequest &request
    );
    // 查询趋势历史数据
    //
    // 查询趋势历史数据
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAuditTrendHistoryResponse> listAuditTrendHistory(
        ListAuditTrendHistoryRequest &request
    );
    // 查询可用区信息[待下线]
    //
    // 查询可用区信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAvailabilityZoneInfosResponse> listAvailabilityZoneInfos(
        ListAvailabilityZoneInfosRequest &request
    );
    // 查询可用区信息
    //
    // 查询可用区信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAvailabilityZoneInfosNewResponse> listAvailabilityZoneInfosNew(
        ListAvailabilityZoneInfosNewRequest &request
    );
    // 列举数据库加密实例
    //
    // 列举数据库加密实例
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListDbEncryptInstancesResponse> listDbEncryptInstances(
        ListDbEncryptInstancesRequest &request
    );
    // 查询ECS服务器规格信息[待下线]
    //
    // 查询ECS服务器规格信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListEcsSpecificationResponse> listEcsSpecification(
        ListEcsSpecificationRequest &request
    );
    // 查询ECS服务器规格信息
    //
    // 查询ECS服务器规格信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListEcsSpecificationNewResponse> listEcsSpecificationNew(
        ListEcsSpecificationNewRequest &request
    );
    // 获取数据库运维集群实例
    //
    // 获取数据库运维集群实例
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListInstancesResponse> listInstances(
        ListInstancesRequest &request
    );
    // 查询RDS数据库列表
    //
    // 查询RDS数据库列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListRdsDatabasesResponse> listRdsDatabases(
        ListRdsDatabasesRequest &request
    );
    // 查询SQL注入规则策略[待下线]
    //
    // 查询SQL注入规则策略
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListSqlInjectionRulesResponse> listSqlInjectionRules(
        ListSqlInjectionRulesRequest &request
    );
    // 重启审计实例[待下线]
    //
    // 重启审计实例
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RebootAuditInstanceResponse> rebootAuditInstance(
        RebootAuditInstanceRequest &request
    );
    // 重启审计实例
    //
    // 重启审计实例
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RebootAuditInstanceNewResponse> rebootAuditInstanceNew(
        RebootAuditInstanceNewRequest &request
    );
    // 重启数据库加密实例
    //
    // 重启数据库加密实例
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RebootDbEncryptInstanceResponse> rebootDbEncryptInstance(
        RebootDbEncryptInstanceRequest &request
    );
    // 重启数据库运维实例
    //
    // 重启数据库运维实例
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RebootDbOmInstanceResponse> rebootDbOmInstance(
        RebootDbOmInstanceRequest &request
    );
    // 重置数据库加密实例的密码
    //
    // 重置数据库加密实例的密码
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ResetDbEncryptPasswordResponse> resetDbEncryptPassword(
        ResetDbEncryptPasswordRequest &request
    );
    // 重置数据库运维实例的密码
    //
    // 重置数据库运维实例的密码
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ResetDbOmPasswordResponse> resetDbOmPassword(
        ResetDbOmPasswordRequest &request
    );
    // 恢复备份信息
    //
    // 恢复备份信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RestoreAuditBackupResponse> restoreAuditBackup(
        RestoreAuditBackupRequest &request
    );
    // 重试备份任务
    //
    // 重试备份任务
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<RetryAuditBackupTaskResponse> retryAuditBackupTask(
        RetryAuditBackupTaskRequest &request
    );
    // 设置实例告警配置[待下线]
    //
    // 设置实例告警配置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SetAlarmTopicConfigInfoResponse> setAlarmTopicConfigInfo(
        SetAlarmTopicConfigInfoRequest &request
    );
    // 设置实例告警配置
    //
    // 设置实例告警配置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SetAlarmTopicConfigInfoNewResponse> setAlarmTopicConfigInfoNew(
        SetAlarmTopicConfigInfoNewRequest &request
    );
    // 标记监控告警
    //
    // 标记监控告警
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SetAuditAlarmLogStatusResponse> setAuditAlarmLogStatus(
        SetAuditAlarmLogStatusRequest &request
    );
    // 获取备份配置信息
    //
    // 设置备份配置信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SetAuditAutoBackupTemplateResponse> setAuditAutoBackupTemplate(
        SetAuditAutoBackupTemplateRequest &request
    );
    // 风险导出开关(按DomainId)
    //
    // 风险导出开关(按DomainId)
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SetAuditBackupRiskSwitchResponse> setAuditBackupRiskSwitch(
        SetAuditBackupRiskSwitchRequest &request
    );
    // 开启/关闭备份
    //
    // 开启/关闭备份
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SetAuditBackupSwitchResponse> setAuditBackupSwitch(
        SetAuditBackupSwitchRequest &request
    );
    // 配置审计实例时区信息
    //
    // 配置审计实例时区信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SetAuditInstanceTimeZoneResponse> setAuditInstanceTimeZone(
        SetAuditInstanceTimeZoneRequest &request
    );
    // 启用禁用策略
    //
    // 启用禁用策略
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SetAuditScopeRuleSwitchResponse> setAuditScopeRuleSwitch(
        SetAuditScopeRuleSwitchRequest &request
    );
    // 编辑风险操作策略
    //
    // 编辑风险操作策略
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SetRiskOperationPolicyResponse> setRiskOperationPolicy(
        SetRiskOperationPolicyRequest &request
    );
    // 审计实例风险规则排序
    //
    // 审计实例风险规则排序
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SetRiskRuleRankResponse> setRiskRuleRank(
        SetRiskRuleRankRequest &request
    );
    // 启用禁用单条隐私数据脱敏规则
    //
    // 启用禁用隐私数据脱敏规则
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SetSensitiveMaskRuleSwitchResponse> setSensitiveMaskRuleSwitch(
        SetSensitiveMaskRuleSwitchRequest &request
    );
    // 开启关闭结果集存储
    //
    // 开启关闭结果集存储
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SetSensitiveResultSwitchResponse> setSensitiveResultSwitch(
        SetSensitiveResultSwitchRequest &request
    );
    // 开启关闭隐私数据脱敏功能
    //
    // 开启关闭隐私数据脱敏
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SetSensitiveSwitchResponse> setSensitiveSwitch(
        SetSensitiveSwitchRequest &request
    );
    // 获取单个风险导出配置
    //
    // 获取单个风险导出配置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAuditBackRiskTemplateResponse> showAuditBackRiskTemplate(
        ShowAuditBackRiskTemplateRequest &request
    );
    // 获取备份状态
    //
    // 获取备份状态
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAuditBackupStatusResponse> showAuditBackupStatus(
        ShowAuditBackupStatusRequest &request
    );
    // 查询账户配额信息[待下线]
    //
    // 查询账户配额信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAuditQuotaResponse> showAuditQuota(
        ShowAuditQuotaRequest &request
    );
    // 查询账户配额信息
    //
    // 查询账户配额信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAuditQuotaNewResponse> showAuditQuotaNew(
        ShowAuditQuotaNewRequest &request
    );
    // 查询指定风险规则策略[待下线]
    //
    // 查询指定风险规则策略
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAuditRuleRiskResponse> showAuditRuleRisk(
        ShowAuditRuleRiskRequest &request
    );
    // 查询指定风险规则策略
    //
    // 查询指定风险规则策略
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAuditRuleRiskNewResponse> showAuditRuleRiskNew(
        ShowAuditRuleRiskNewRequest &request
    );
    // 获取租户下所有实例的风险汇总信息
    //
    // 获取租户下所有实例的风险汇总信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAuditStatisticsResponse> showAuditStatistics(
        ShowAuditStatisticsRequest &request
    );
    // 获取租户审计信息汇总任务状态
    //
    // 获取租户审计信息汇总任务状态
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAuditTaskStatusResponse> showAuditTaskStatus(
        ShowAuditTaskStatusRequest &request
    );
    // 获取报表的计划任务配置信息（topic方式）
    //
    // 获取报表的计划任务配置信息（topic方式）
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAuditTopicReportSchedulerConfigResponse> showAuditTopicReportSchedulerConfig(
        ShowAuditTopicReportSchedulerConfigRequest &request
    );
    // 查询租户的实例是否可升级
    //
    // 查询租户的实例是否可升级
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowAuditUpgradeStatusResponse> showAuditUpgradeStatus(
        ShowAuditUpgradeStatusRequest &request
    );
    // 获取风险导出桶名和路径
    //
    // 获取风险导出桶名和路径
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowBackupRiskBucketPathResponse> showBackupRiskBucketPath(
        ShowBackupRiskBucketPathRequest &request
    );
    // 获取实例监控数据
    //
    // 获取实例监控数据
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowInstanceMonitorInfoResponse> showInstanceMonitorInfo(
        ShowInstanceMonitorInfoRequest &request
    );
    // 查询加密/运维增强配额
    //
    // 查询加密/运维增强配额
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowInstanceQuotaResponse> showInstanceQuota(
        ShowInstanceQuotaRequest &request
    );
    // 获取隐私数据脱敏开关
    //
    // 获取隐私数据脱敏开关
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowSensitiveMaskSwitchResponse> showSensitiveMaskSwitch(
        ShowSensitiveMaskSwitchRequest &request
    );
    // 获取隐私数据结果集开关
    //
    // 获取隐私数据结果集开关
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowSensitiveResultSwitchResponse> showSensitiveResultSwitch(
        ShowSensitiveResultSwitchRequest &request
    );
    // 获取管理侧版本信息
    //
    // 获取管理侧版本信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowServerVersionResponse> showServerVersion(
        ShowServerVersionRequest &request
    );
    // 获取指定SQL语句的详细信息
    //
    // 获取指定SQL语句的详细信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ShowSqlDetailResponse> showSqlDetail(
        ShowSqlDetailRequest &request
    );
    // 开启审计实例[待下线]
    //
    // 开启审计实例
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<StartAuditInstanceResponse> startAuditInstance(
        StartAuditInstanceRequest &request
    );
    // 开启审计实例
    //
    // 开启审计实例
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<StartAuditInstanceNewResponse> startAuditInstanceNew(
        StartAuditInstanceNewRequest &request
    );
    // 启动数据库加密实例
    //
    // 启动数据库加密实例
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<StartDbEncryptInstanceResponse> startDbEncryptInstance(
        StartDbEncryptInstanceRequest &request
    );
    // 启动数据库运维实例
    //
    // 启动数据库运维实例
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<StartDbOmInstanceResponse> startDbOmInstance(
        StartDbOmInstanceRequest &request
    );
    // 关闭审计实例[待下线]
    //
    // 关闭审计实例
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<StopAuditInstanceResponse> stopAuditInstance(
        StopAuditInstanceRequest &request
    );
    // 关闭审计实例
    //
    // 关闭审计实例
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<StopAuditInstanceNewResponse> stopAuditInstanceNew(
        StopAuditInstanceNewRequest &request
    );
    // 停止数据库加密实例
    //
    // 停止数据库加密实例
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<StopDbEncryptInstanceResponse> stopDbEncryptInstance(
        StopDbEncryptInstanceRequest &request
    );
    // 停止数据库运维实例
    //
    // 停止数据库运维实例
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<StopDbOmInstanceResponse> stopDbOmInstance(
        StopDbOmInstanceRequest &request
    );
    // 开启关闭Agent[待下线]
    //
    // 用于开启和关闭Agent审计的功能，当开启后，开始抓取用户的访问信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SwitchAgentResponse> switchAgent(
        SwitchAgentRequest &request
    );
    // 开启关闭数据库[待下线]
    //
    // 开启关闭数据库
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SwitchAuditDatabaseResponse> switchAuditDatabase(
        SwitchAuditDatabaseRequest &request
    );
    // 开启关闭数据库
    //
    // 开启关闭数据库
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SwitchAuditDatabaseNewResponse> switchAuditDatabaseNew(
        SwitchAuditDatabaseNewRequest &request
    );
    // 开启关闭风险规则[待下线]
    //
    // 开启关闭风险规则
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SwitchRiskRuleResponse> switchRiskRule(
        SwitchRiskRuleRequest &request
    );
    // 开启/关闭风险规则
    //
    // 开启/关闭风险规则
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SwitchRiskRuleNewResponse> switchRiskRuleNew(
        SwitchRiskRuleNewRequest &request
    );
    // 解绑数据库加密实例的eip
    //
    // 解绑数据库加密实例的eip
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UnbindDbEncryptEipResponse> unbindDbEncryptEip(
        UnbindDbEncryptEipRequest &request
    );
    // 解绑数据库运维实例的eip
    //
    // 解绑数据库运维实例的eip
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UnbindDbOmEipResponse> unbindDbOmEip(
        UnbindDbOmEipRequest &request
    );
    // 更新审计实例信息[待下线]
    //
    // 更新审计实例信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateAuditInstanceResponse> updateAuditInstance(
        UpdateAuditInstanceRequest &request
    );
    // 更新审计实例信息
    //
    // 更新审计实例信息
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateAuditInstanceNewResponse> updateAuditInstanceNew(
        UpdateAuditInstanceNewRequest &request
    );
    // 修改风险导出桶名和路径(按DomainId)
    //
    // 修改风险导出桶名和路径(按DomainId)
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateAuditRiskBucketPathResponse> updateAuditRiskBucketPath(
        UpdateAuditRiskBucketPathRequest &request
    );
    // 编辑审计范围规则
    //
    // 编辑审计范围规则
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateAuditScopeRuleResponse> updateAuditScopeRule(
        UpdateAuditScopeRuleRequest &request
    );
    // 修改实例安全组[待下线]
    //
    // 修改实例安全组
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateAuditSecurityGroupResponse> updateAuditSecurityGroup(
        UpdateAuditSecurityGroupRequest &request
    );
    // 修改实例安全组
    //
    // 修改实例安全组
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateAuditSecurityGroupNewResponse> updateAuditSecurityGroupNew(
        UpdateAuditSecurityGroupNewRequest &request
    );
    // 更新租户审计信息汇总任务状态
    //
    // 更新租户审计信息汇总任务状态
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateAuditTaskStatusResponse> updateAuditTaskStatus(
        UpdateAuditTaskStatusRequest &request
    );
    // 更改报表的计划任务配置信息（topic方式）
    //
    // 更改报表的计划任务配置信息（topic方式）
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateAuditTopicReportSchedulerConfigResponse> updateAuditTopicReportSchedulerConfig(
        UpdateAuditTopicReportSchedulerConfigRequest &request
    );
    // 更改数据库加密实例的名称
    //
    // 更改数据库加密实例的名称
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateDbEncryptInstanceNameResponse> updateDbEncryptInstanceName(
        UpdateDbEncryptInstanceNameRequest &request
    );
    // 更改数据库运维实例的名称
    //
    // 更改数据库运维实例的名称
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateDbOmInstanceNameResponse> updateDbOmInstanceName(
        UpdateDbOmInstanceNameRequest &request
    );
    // 修改编辑隐私数据脱敏规则
    //
    // 修改编辑隐私数据脱敏规则
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateSensitiveMaskRuleResponse> updateSensitiveMaskRule(
        UpdateSensitiveMaskRuleRequest &request
    );
    // 往OBS导出审计数据库配置
    //
    // 往OBS导出审计数据库配置
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UploadAuditDbConfigResponse> uploadAuditDbConfig(
        UploadAuditDbConfigRequest &request
    );

    // 添加审计数据库Agent
    //
    // 添加审计数据库Agent
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<AddAuditAgentNewResponse> addAuditAgentNew(
        AddAuditAgentNewRequest &request
    );
    // 指定agent_id方式添加agent
    //
    // 指定agent_id方式添加agent
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateAuditDbAgentResponse> createAuditDbAgent(
        CreateAuditDbAgentRequest &request
    );
    // 删除数据库Agent
    //
    // 删除数据库Agent
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteAuditAgentNewResponse> deleteAuditAgentNew(
        DeleteAuditAgentNewRequest &request
    );
    // 下载审计Agent
    //
    // 下载审计Agent
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DownloadAuditAgentNewResponse> downloadAuditAgentNew(
        DownloadAuditAgentNewRequest &request
    );
    // 查询数据库Agent列表
    //
    // 查询数据库Agent列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAuditAgentNewResponse> listAuditAgentNew(
        ListAuditAgentNewRequest &request
    );
    // 开启/关闭Agent
    //
    // 用于开启和关闭Agent审计的功能，当开启后，开始抓取用户的访问信息。
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SwitchAgentNewResponse> switchAgentNew(
        SwitchAgentNewRequest &request
    );

    // 批量添加白名单
    //
    // 批量添加白名单
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchAddAuditWhitelistResponse> batchAddAuditWhitelist(
        BatchAddAuditWhitelistRequest &request
    );
    // 添加sql自定义规则
    //
    // 添加sql自定义规则
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CreateAuditSqlRuleResponse> createAuditSqlRule(
        CreateAuditSqlRuleRequest &request
    );
    // 删除sql自定义规则
    //
    // 删除sql自定义规则
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteAuditRuleSqlResponse> deleteAuditRuleSql(
        DeleteAuditRuleSqlRequest &request
    );
    // 批量删除白名单
    //
    // 批量删除白名单
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<DeleteAuditWhitelistResponse> deleteAuditWhitelist(
        DeleteAuditWhitelistRequest &request
    );
    // 查询SQL注入规则策略
    //
    // 查询SQL注入规则策略
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListSqlInjectionRulesNewResponse> listSqlInjectionRulesNew(
        ListSqlInjectionRulesNewRequest &request
    );
    // 查询白名单列表
    //
    // 查询白名单列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListWhitelistsResponse> listWhitelists(
        ListWhitelistsRequest &request
    );
    // 开启关闭sql注入策略
    //
    // 开启关闭sql注入策略
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SetAuditSqlRuleSwitchResponse> setAuditSqlRuleSwitch(
        SetAuditSqlRuleSwitchRequest &request
    );
    // sql规则优先级排序
    //
    // sql规则优先级排序
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<SetSqlRuleRankResponse> setSqlRuleRank(
        SetSqlRuleRankRequest &request
    );
    // 编辑sql自定义规则
    //
    // 编辑sql自定义规则
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateAuditSqlRuleResponse> updateAuditSqlRule(
        UpdateAuditSqlRuleRequest &request
    );
    // 修改白名单
    //
    // 修改白名单
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<UpdateAuditWhitelistResponse> updateAuditWhitelist(
        UpdateAuditWhitelistRequest &request
    );

    // 批量添加资源标签
    //
    // 批量添加资源标签
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchAddResourceTagResponse> batchAddResourceTag(
        BatchAddResourceTagRequest &request
    );
    // 批量删除资源标签
    //
    // 批量删除资源标签
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<BatchDeleteResourceTagResponse> batchDeleteResourceTag(
        BatchDeleteResourceTagRequest &request
    );
    // 根据标签查询资源实例数量
    //
    // 根据标签查询资源实例数量
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<CountResourceInstanceByTagResponse> countResourceInstanceByTag(
        CountResourceInstanceByTagRequest &request
    );
    // 获取实例标签
    //
    // 获取实例标签
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListAuditTagsResponse> listAuditTags(
        ListAuditTagsRequest &request
    );
    // 查询项目标签
    //
    // 查询项目标签
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListProjectResourceTagsResponse> listProjectResourceTags(
        ListProjectResourceTagsRequest &request
    );
    // 根据标签查询资源实例列表
    //
    // 根据标签查询资源实例列表
    // 
    // Please refer to HUAWEI cloud API Explorer for details.
    std::shared_ptr<ListResourceInstanceByTagResponse> listResourceInstanceByTag(
        ListResourceInstanceByTagRequest &request
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

template class HUAWEICLOUD_DBSS_V1_EXPORT ::HuaweiCloud::Sdk::Core::ClientBuilder<::HuaweiCloud::Sdk::Dbss::V1::DbssClient>;

#endif // HUAWEICLOUD_SDK_DBSS_V1_DbssClient_H_

