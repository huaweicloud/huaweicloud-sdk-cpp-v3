# 3.1.185 2026-04-30

### HuaweiCloud SDK CodeArtsPipeline

- _API Version_
  - V2
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListPipelineRuns**
    - changes of request param
      - `+ update_time`
  - **ShowStepOutputs**
    - changes of response param
      - `* step_outputs.output_result.value: string -> object`
  - **ShowPipelineRunDetail**
    - changes of response param
      - `+ sources.params.build_params.virtual_merge_branch`
      - `+ sources.params.build_params.virtual_merge_commitId`
      - `+ stages.pre.daily_build_number`

### HuaweiCloud SDK CPCS

- _API Version_
  - V1
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ShowClusterAccessKeyList**
    - changes of request param
      - `+ limit`
      - `+ offset`
      - `- page_size`
      - `- page_num`
  - **SwitchCpcsToken**
    - changes of request param
      - `+ app_id`
      - `- auth`
      - `- scope`
    - changes of response param
      - `+ token`
      - `- roles`
      - `- ak`
      - `- expired_at`
      - `- issued_at`
      - `- user`
  - **ShowAuditLog**
    - changes of request param
      - `+ limit`
      - `+ offset`
      - `- page_size`
      - `- page_num`
    - changes of response param
      - `+ audit_records.status`
      - `+ audit_records.failure_message`
      - `+ audit_records.verification`
      - `- audit_records.operate_status`
      - `- audit_records.operate_message`
      - `- audit_records.audit_status`
  - **ShowResourceDetailCertificate**
    - changes of request param
      - `+ limit`
      - `+ offset`
      - `- page_size`
      - `- page_num`
  - **ShowResourceDetailAccessKey**
    - changes of request param
      - `+ limit`
      - `+ offset`
      - `- page_size`
      - `- page_num`
  - **ListCcspTenantImages**
    - changes of request param
      - `+ limit`
      - `+ offset`
      - `- page_size`
      - `- page_num`
  - **ShowCcspInstanceInfo**
    - changes of request param
      - `+ limit`
      - `+ offset`
      - `- page_size`
      - `- page_num`
  - **ShowCcspClusterList**
    - changes of request param
      - `+ limit`
      - `+ offset`
      - `- page_size`
      - `- page_num`
  - **ShowAssociationList**
    - changes of request param
      - `+ limit`
      - `+ offset`
      - `- page_size`
      - `- page_num`
  - **ShowAppAccessKeyList**
    - changes of request param
      - `+ limit`
      - `+ offset`
      - `- page_size`
      - `- page_num`
  - **ShowAppList**
    - changes of request param
      - `+ limit`
      - `+ offset`
      - `- page_size`
      - `- page_num`

### HuaweiCloud SDK DRS

- _API Version_
  - V5
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ShowChildNum**
    - changes of request param
      - `+ db_type: enum value [ddm]`
      - `+ db_type: enum value [ ddm]`
  - **ListDbObjects**
    - changes of response param
      - `+ status: enum value [failed,pending]`
      - `- status: enum value [ failed, pending]`
  - **ShowDbObjectCollectionStatus**
    - changes of response param
      - `+ status: enum value [failed,pending]`
      - `- status: enum value [ failed, pending]`
  - **ShowDbObjectsList**
    - changes of response param
      - `+ status: enum value [failed,pending]`
      - `- status: enum value [ failed, pending]`
  - **ShowDataProgress**
    - changes of response param
      - `+ data_process_info.filter_conditions.filtering_type: enum value [configConditionalFilter]`
      - `- data_process_info.filter_conditions.filtering_type: enum value [ configConditionalFilter]`
  - **UpdateDataProgress**
    - changes of request param
      - `+ data_process_info.filter_conditions.filtering_type: enum value [configConditionalFilter]`
      - `- data_process_info.filter_conditions.filtering_type: enum value [ configConditionalFilter]`
  - **CheckDataFilter**
    - changes of request param
      - `+ data_process_info.filter_conditions.filtering_type: enum value [configConditionalFilter]`
      - `- data_process_info.filter_conditions.filtering_type: enum value [ configConditionalFilter]`
  - **ExecuteJobAction**
    - changes of request param
      - `+ job.action_params.compare_task_param.data_process_info.filter_conditions.filtering_type: enum value [configConditionalFilter]`
      - `- job.action_params.compare_task_param.data_process_info.filter_conditions.filtering_type: enum value [ configConditionalFilter]`
  - **BatchExecuteJobActions**
    - changes of request param
      - `+ jobs.action_params.compare_task_param.data_process_info.filter_conditions.filtering_type: enum value [configConditionalFilter]`
      - `- jobs.action_params.compare_task_param.data_process_info.filter_conditions.filtering_type: enum value [ configConditionalFilter]`

### HuaweiCloud SDK RDS

- _API Version_
  - V3
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **SetAuditlogPolicy**
    - changes of request param
      - `+ databases`

# 3.1.184 2026-04-24

### HuaweiCloud SDK DRS

- _API Version_
  - V5
- _Features_
  - Support the following APIs:
    - `ShowSubscriptionDetail`
    - `DeleteSubscription`
    - `ShowCompareUsersDetail`
    - `ShowSmnTopicInfo`
    - `ShowChildNum`
    - `CreateSubscription`
    - `UpdateSubscriptionInfo`
    - `ShowReplayReportExportStatus`
    - `ExportReplayReport`
    - `ListSupportLinks`
    - `ListExtraColumns`
    - `PauseCompareJobs`
    - `RestartCompareJobs`
- _Bug Fix_
  - None
- _Change_
  - **UpdateComparePolicy**
    - changes of request param
      - `+ compare_policy: enum value [normal,manyToOne]`
  - **ShowObjectMapping**
    - changes of response param
      - `+ object_mapping_list.object_name`
  - **ListJobs**
    - changes of request param
      - `+ sort_key: enum value [name,status,create_time,net_type,job_direction,pay_mode]`

### HuaweiCloud SDK GaussDBforopenGauss

- _API Version_
  - V3
- _Features_
  - Support the APIs `ListDNatInfo`, `BindDNat`
- _Bug Fix_
  - None
- _Change_
  - None

# 3.1.183 2026-04-09

### HuaweiCloud SDK Cloudtest

- _API Version_
  - V1
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **BatchAddCaseResultInTask**
    - changes of request param
      - `* test_case_uris: string -> list<string>`

### HuaweiCloud SDK GaussDBforopenGauss

- _API Version_
  - V3
- _Features_
  - Support the APIs `SwitchLoggerReplicaAvailabilityZones`, `ChangeDemand2Period`, `SwitchLoggerReplica`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK IoTDA

- _API Version_
  - V5
- _Features_
  - Support the API `ConfirmBatchTask`
- _Bug Fix_
  - None
- _Change_
  - **CreateBatchTask**
    - changes of request param
      - `+ need_confirm`
    - changes of response param
      - `+ need_confirm`
  - **ListBatchTasks**
    - changes of response param
      - `+ need_confirm`
      - `+ batchtasks.need_confirm`
  - **ShowBatchTask**
    - changes of response param
      - `+ need_confirm`
      - `+ batchtask.need_confirm`

### HuaweiCloud SDK LTS

- _API Version_
  - V2
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListAccessConfig**
    - changes of response param
      - `+ result.access_config_detail.combine_stdout`
  - **UpdateAccessConfig**
    - changes of request param
      - `+ access_config_detail.combine_stdout`
    - changes of response param
      - `+ access_config_detail.combine_stdout`
  - **CreateAccessConfig**
    - changes of request param
      - `+ access_config_detail.combine_stdout`
    - changes of response param
      - `+ access_config_detail.combine_stdout`
  - **DeleteAccessConfig**
    - changes of response param
      - `+ result.access_config_detail.combine_stdout`

# 3.1.182 2026-04-02

### HuaweiCloud SDK GaussDBforopenGauss

- _API Version_
  - V3
- _Features_
  - Support the API `ModifySecurityGroup`
- _Bug Fix_
  - None
- _Change_
  - None

# 3.1.181 2026-03-26

### HuaweiCloud SDK CDN

- _API Version_
  - V2
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ShowDomainLocationStats**
    - changes of request param
      - `+ ip_version`

### HuaweiCloud SDK Cloudtest

- _API Version_
  - V1
- _Features_
  - Support the API `BatchAddCaseResultInTask`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK ECS

- _API Version_
  - V2
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ShowServer**
    - changes of response param
      - `+ server.capacity_reservation_id`
      - `+ server.capacity_reservation_specification`
      - `+ server.spod_id`
      - `+ server.enclave_options`
  - **ListServersDetails**
    - changes of response param
      - `+ servers.capacity_reservation_id`
      - `+ servers.capacity_reservation_specification`
      - `+ servers.spod_id`
      - `+ servers.enclave_options`
  - **ListRecycleBinServers**
    - changes of response param
      - `+ servers.capacity_reservation_id`
      - `+ servers.capacity_reservation_specification`
      - `+ servers.spod_id`
      - `+ servers.enclave_options`

### HuaweiCloud SDK GaussDB

- _API Version_
  - V3
- _Features_
  - Support the following APIs:
    - `ShowHtapProcessList`
    - `DeleteHtapProcessList`
    - `ShowInstanceBackups`
    - `DeleteAutoSqlLimiting`
    - `UpdateStarRockLtsConfig`
    - `DeleteStarRockLtsConfig`
- _Bug Fix_
  - None
- _Change_
  - **ListRecycleInstances**
    - changes of response param
      - `+ instances.recycle_backups`
      - `- instances.recycle_bakcups`
  - **ListImmediateJobs**
    - changes of response param
      - `+ jobs.show_detail`
      - `+ jobs.action_names`
  - **CreateGaussMySqlInstance**
    - changes of request param
      - `+ volume.type`

### HuaweiCloud SDK RDS

- _API Version_
  - V3
- _Features_
  - Support the APIs `ShowBackupConfig`, `ChangeBackupConfig`
- _Bug Fix_
  - None
- _Change_
  - None

# 3.1.180 2026-03-19

### HuaweiCloud SDK AAD

- _API Version_
  - V2
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ShowDDoSPeak**
    - changes of response param
      - `* utime: int32 -> int64`
  - **ListWafBandwidth**
    - changes of response param
      - `* curve.time: int32 -> int64`
  - **ListWafQps**
    - changes of response param
      - `* curve.time: int32 -> int64`
  - **ListWafGeoIpRule**
    - changes of response param
      - `* items.timestamp: int32 -> int64`
  - **ShowInstanceByInstanceId**
    - changes of response param
      - `* expire_time: int32 -> int64`
      - `* create_time: int32 -> int64`
      - `* current_time: int32 -> int64`
  - **ListDDoSBlackHoleEvent**
    - changes of response param
      - `* items.start_time: int32 -> int64`
      - `* items.end_time: int32 -> int64`
  - **ListWafAttackEvent**
    - changes of response param
      - `* list.time: int32 -> int64`
  - **ListDDoSConnectionNumber**
    - changes of response param
      - `* data.list.time: int32 -> int64`

### HuaweiCloud SDK GaussDBforopenGauss

- _API Version_
  - V3
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **CreateSqlLimitTask**
    - changes of request param
      - `+ node_infos.sql_ids`
      - `- node_infos.sql_id`
      - `* node_infos: list<CreateLimitTaskNodeOption> -> list<CreateSqlLimitTaskNodeOption>`
  - **ListWdrSnapshotsCollectResults**
    - changes of response param
      - `* wdr_snapshots.obs_bucket.port: string -> int32`
  - **ShowFullSql**
    - changes of response param
      - `+ components.sql`
  - **ListSchemaVolumes**
    - changes of response param
      - `+ schema_volumes.schema_name`
      - `- schema_volumes.nsp_name`
  - **ListFullSqlSwitches**
    - changes of response param
      - `+ allowed_sql_types.prefixes`
  - **ListLtsConfigs**
    - changes of request param
      - `+ instance_id`
      - `- instance_id`

### HuaweiCloud SDK RGC

- _API Version_
  - V1
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ShowTemplateDeployParams**
    - changes of response param
      - `+ variables.latest_param`

# 3.1.179 2026-03-12

### HuaweiCloud SDK DRS

- _API Version_
  - V3
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **BatchDeleteJobs**
    - changes of request param
      - `+ jobs.delete_type: enum value [roll_back_upgrade_active_standby]`

### HuaweiCloud SDK DRS

- _API Version_
  - V5
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **DownloadDbObjectTemplate**
    - changes of request param
      - `+ file_import_db_level: enum value [partition]`
  - **UploadDbObjectTemplate**
    - changes of request param
      - `+ file_import_mapping_type`
      - `+ file_import_db_level: enum value [partition]`

### HuaweiCloud SDK FunctionGraph

- _API Version_
  - V2
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **CreateDependencyVersion**
    - changes of request param
      - `+ runtime: enum value [PHP8.3]`
    - changes of response param
      - `+ runtime: enum value [PHP8.3]`
  - **ShowDependencyVersion**
    - changes of response param
      - `+ runtime: enum value [PHP8.3]`
  - **ListDependencies**
    - changes of response param
      - `+ dependencies.runtime: enum value [PHP8.3]`
  - **ListDependencyVersion**
    - changes of response param
      - `+ dependencies.runtime: enum value [PHP8.3]`
  - **ShowFunctionCode**
    - changes of response param
      - `+ runtime: enum value [PHP8.3]`
      - `+ dependencies.runtime: enum value [PHP8.3]`
  - **UpdateFunctionCode**
    - changes of response param
      - `+ runtime: enum value [PHP8.3]`
      - `+ dependencies.runtime: enum value [PHP8.3]`
  - **ImportFunction**
    - changes of response param
      - `+ runtime: enum value [PHP8.3]`
  - **ListFunctions**
    - changes of response param
      - `+ functions.runtime: enum value [PHP8.3]`
  - **CreateFunction**
    - changes of request param
      - `+ runtime: enum value [PHP8.3]`
    - changes of response param
      - `+ runtime: enum value [PHP8.3]`
      - `+ dependencies.runtime: enum value [PHP8.3]`
  - **ShowFunctionConfig**
    - changes of response param
      - `+ runtime: enum value [PHP8.3]`
      - `+ dependencies.runtime: enum value [PHP8.3]`
  - **UpdateFunctionConfig**
    - changes of request param
      - `+ runtime: enum value [PHP8.3]`
    - changes of response param
      - `+ runtime: enum value [PHP8.3]`
      - `+ dependencies.runtime: enum value [PHP8.3]`
  - **UpdateFunctionMaxInstanceConfig**
    - changes of response param
      - `+ runtime: enum value [PHP8.3]`
      - `+ dependencies.runtime: enum value [PHP8.3]`
  - **ListBridgeFunctions**
    - changes of response param
      - `+ runtime: enum value [PHP8.3]`
  - **CreateFunctionVersion**
    - changes of response param
      - `+ runtime: enum value [PHP8.3]`
      - `+ dependencies.runtime: enum value [PHP8.3]`
  - **ListFunctionVersions**
    - changes of response param
      - `+ versions.runtime: enum value [PHP8.3]`

### HuaweiCloud SDK GaussDBforopenGauss

- _API Version_
  - V3
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ShowConfiguration**
    - changes of response param
      - `- backup_node_info`
  - **ResizeInstanceFlavor**
    - changes of request param
      - `+ cn_concurrent_resize_num`
      - `+ dn_concurrent_resize_num`
      - `* body: object<OpenGaussResizeRequest> -> object<OpenGaussResizeRequestBody>`
  - **ResizeInstancesFlavor**
    - changes of request param
      - `+ cn_concurrent_resize_num`
      - `+ dn_concurrent_resize_num`
      - `* body: object<OpenGaussResizeRequest> -> object<OpenGaussResizeRequestBody>`
  - **ShowInstanceConfiguration**
    - changes of response param
      - `+ configuration_parameters.readonly`
      - `* configuration_parameters: list<ConfigurationParameter> -> list<ConfigurationParameterResult>`
  - **ShowInstanceParamGroup**
    - changes of response param
      - `+ configuration_parameters.readonly`
      - `* configuration_parameters: list<ConfigurationParameter> -> list<ConfigurationParameterResult>`
  - **ShowInstanceParamGroupDetail**
    - changes of response param
      - `+ configuration_parameters.readonly`
      - `* configuration_parameters: list<ConfigurationParameter> -> list<ConfigurationParameterResult>`
  - **ListWdrSnapshotsCollectResults**
    - changes of request param
      - `+ job_end_time`
      - `+ job_start_time`
      - `+ status`
      - `+ wdr_type`
    - changes of response param
      - `+ wdr_snapshots.job_create_time`
      - `+ wdr_snapshots.start_snapshot_id`
      - `+ wdr_snapshots.end_snapshot_id`
      - `+ wdr_snapshots.file_name`
      - `+ wdr_snapshots.file_path`
      - `+ wdr_snapshots.obs_bucket`
  - **ListWaitEvent**
    - changes of request param
      - `* wait_event_query_info.block_count: string -> int32`
      - `* wait_event_query_info: object<WaitEventQueryInfo> -> object<WaitEventQueryInfoOption>`
  - **ShowRedistributionParameters**
    - changes of response param
      - `* expansion_parameters.type: object -> string`
  - **ShowFullSql**
    - changes of response param
      - `+ trace_statistics.hit_rate`
      - `+ trace_statistics.db_time`
      - `+ trace_statistics.cpu_time`
      - `+ trace_statistics.io_time`
      - `+ trace_statistics.execution_time`
      - `+ trace_statistics.scan_rows`
      - `+ trace_statistics.update_rows`
      - `+ trace_statistics.insert_rows`
      - `+ trace_statistics.delete_rows`
      - `* trace_statistics: object -> object<FullSqlTraceStatisticsResult>`
      - `+ components.start_time`
      - `+ components.finish_time`
      - `+ components.n_returned_rows`
      - `- components.begin_time`
      - `- components.end_time`
      - `- components.n_return_rows`
  - **ListTopTableVolumes**
    - changes of response param
      - `+ job_id`
      - `+ node_id`
  - **ListFullSqlSwitches**
    - changes of response param
      - `- allowed_sql_types.prefixes`

### HuaweiCloud SDK MetaStudio

- _API Version_
  - V1
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ShowHotQuestion**
    - changes of response param
      - `+ language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai,fr]`
  - **UpdateHotQuestion**
    - changes of response param
      - `+ language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai,fr]`
  - **ShowPacifyWords**
    - changes of response param
      - `+ language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai,fr]`
  - **UpdatePacifyWords**
    - changes of response param
      - `+ language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai,fr]`
  - **UpdatePacifyWordsSwitch**
    - changes of request param
      - `+ language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai,fr]`
  - **UpdatePacifyWordsTriggerTime**
    - changes of request param
      - `+ language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai,fr]`
  - **ShowWelcomeSpeech**
    - changes of response param
      - `+ language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai,fr]`
  - **UpdateWelcomeSpeech**
    - changes of response param
      - `+ language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai,fr]`
  - **UpdateWelcomeSpeechSwitch**
    - changes of request param
      - `+ language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai,fr]`
  - **CreateInteractiveChat**
    - changes of request param
      - `+ language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai,fr]`
  - **ShowKnowledgeLibrary**
    - changes of response param
      - `+ language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai,fr]`
  - **StartSmartChatJob**
    - changes of response param
      - `+ language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai,fr]`
  - **ShowSmartChatJob**
    - changes of response param
      - `+ language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai,fr]`
  - **CreateHotQuestion**
    - changes of request param
      - `+ language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai,fr]`
    - changes of response param
      - `+ language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai,fr]`
  - **ListHotQuestion**
    - changes of response param
      - `+ data.language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai,fr]`
  - **ListHotWords**
    - changes of response param
      - `+ data.language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai,fr]`
  - **CreateHotWords**
    - changes of request param
      - `+ sis_hot_words.language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai,fr]`
    - changes of response param
      - `+ language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai,fr]`
  - **ShowHotWords**
    - changes of response param
      - `+ language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai,fr]`
  - **UpdateHotWords**
    - changes of request param
      - `+ sis_hot_words.language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai,fr]`
    - changes of response param
      - `+ language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai,fr]`
  - **CreatePacifyWords**
    - changes of request param
      - `+ language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai,fr]`
    - changes of response param
      - `+ language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai,fr]`
  - **ListPacifyWords**
    - changes of response param
      - `+ data.language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai,fr]`
  - **ListRobot**
    - changes of response param
      - `+ data.language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai,fr]`
  - **CreateRobot**
    - changes of request param
      - `+ language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai,fr]`
  - **ShowRobot**
    - changes of response param
      - `+ language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai,fr]`
  - **UpdateRobot**
    - changes of request param
      - `+ language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai,fr]`
  - **CreateWelcomeSpeech**
    - changes of request param
      - `+ language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai,fr]`
    - changes of response param
      - `+ language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai,fr]`
  - **ListWelcomeSpeech**
    - changes of response param
      - `+ data.language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai,fr]`
  - **ShowInstruction**
    - changes of response param
      - `+ reply_words_list.language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai,fr]`
  - **UpdateInstruction**
    - changes of request param
      - `+ reply_words_list.language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai,fr]`
  - **CreateKnowledgeLibrary**
    - changes of request param
      - `+ language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai,fr]`
  - **ListKnowledgeLibrary**
    - changes of response param
      - `+ data.language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai,fr]`
  - **CreateInstruction**
    - changes of request param
      - `+ reply_words_list.language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai,fr]`
  - **ListInstruction**
    - changes of response param
      - `+ data.reply_words_list.language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai,fr]`
  - **ShowRole**
    - changes of response param
      - `+ role_business_list.language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai,fr]`
  - **UpdateRole**
    - changes of request param
      - `+ role_business_list.language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai,fr]`
  - **CreateRole**
    - changes of request param
      - `+ role_business_list.language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai,fr]`
  - **ListRole**
    - changes of response param
      - `+ data.role_business_list.language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai,fr]`

### HuaweiCloud SDK Organizations

- _API Version_
  - V1
- _Features_
  - Support the following APIs:
    - `ShowDryRunConfig`
    - `UpdateDryRunConfig`
    - `ListDryRunPolicies`
    - `CreateDryRunPolicy`
    - `ShowDryRunPolicy`
    - `DeleteDryRunPolicy`
    - `UpdateDryRunPolicy`
    - `AttachDryRunPolicy`
    - `DetachDryRunPolicy`
    - `ListEntitiesForDryRunPolicy`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK VOD

- _API Version_
  - V1
- _Features_
  - Support the APIs `ListThumbnailInfo`, `DeleteThumbnails`, `ListThumbnailDetails`
- _Bug Fix_
  - None
- _Change_
  - None

# 3.1.178 2026-03-03

### HuaweiCloud SDK Core

- _Features_
  - None
- _Bug Fix_
  - Resolve the header file issue on which FunctionGraph depends.
- _Change_
  - None

# 3.1.177 2026-03-03

### HuaweiCloud SDK Core

- _Features_
  - None
- _Bug Fix_
  - Resolve the header file issue on which KVS depends.
- _Change_
  - Removing some useless APIs.

# 3.1.176 2026-02-12

### HuaweiCloud SDK Core

- _Features_
  - None
- _Bug Fix_
  - Optimize the content of README
- _Change_
  - None

### HuaweiCloud SDK CodeArtsPipeline

- _API Version_
  - V2
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ShowPipelineRunDetail**
    - changes of response param
      - `+ pause_time`
      - `+ stages.pause_time`

# 3.1.175 2026-02-11

### HuaweiCloud SDK Core

- _Features_
  - None
- _Bug Fix_
  - Optimize the description of third-party library dependencies in README
  - Optimize the build example description in README
  - Optimize the content of `CMakeLists.txt`
  - Resolve some compilation warnings
- _Change_
  - None

# 3.1.174 2026-02-10

### HuaweiCloud SDK Core

- _Features_
  - None
- _Bug Fix_
  - Fix incorrect comments in the CMake script within the readme
  - Add `rttr` to the list of third‑party library dependencies in the readme
  - Include examples of renaming outputs in the readme
  - Recommend version numbers for building `spdlog` from source in the readme
  - Fix C++ validation test cases
  - Correct regular expression syntax
  - Add line breaks at the end of files in `CMakeLists.txt`
  - Fix spelling errors in code generation
  - Revise prompt messages in `CMakeLists.txt`
- _Change_
  - None

### HuaweiCloud SDK CCE

- _Features_
  - None
- _Bug Fix_
  - Fix the circular dependency
- _Change_
  - None

# 3.1.173 2026-02-05

### HuaweiCloud SDK RDS

- _API Version_
  - V3
- _Features_
  - Support the API `DeleteBackupSelection`
- _Bug Fix_
  - None
- _Change_
  - None

# 3.1.172 2026-01-29

### HuaweiCloud SDK CodeArtsArtifact

- _API Version_
  - V2
- _Features_
  - Support the following APIs:
    - `ListUserPrivileges`
    - `ShowProjectRelatedRepository`
    - `ShowVersionList`
    - `ShowProjectVersionsCount`
    - `ShowRepositoryRolesPrivilege`
    - `UpdateRepoRolesPrivilege`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK GaussDBforNoSQL

- _API Version_
  - V3
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ShowApplicableInstances**
    - changes of request param
      - `+ instance_name`
      - `+ instance_id`

### HuaweiCloud SDK Live

- _API Version_
  - V1
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListCesDimsInfo**
    - changes of response param
      - `+ query.region`
  - **ShowChannelStatistic**
    - changes of request param
      - `+ region_type`
    - changes of response param
      - `+ scte35.scte35_info.region_type`
      - `+ scte35.scte35_info.region`
  - **ShowFlowDetail**
    - changes of response param
      - `+ sources.health_status`
  - **ModifyFlowSources**
    - changes of request param
      - `+ source.health_status`
    - changes of response param
      - `+ source.health_status`
  - **CreateFlows**
    - changes of request param
      - `+ sources.health_status`
    - changes of response param
      - `+ flow.sources.health_status`
  - **ModifyOttChannelInfoEndPoints**
    - changes of request param
      - `+ endpoints.dash_package.id`
      - `+ endpoints.dash_package.manifest_selection`
      - `+ endpoints.mss_package.id`
      - `+ endpoints.mss_package.manifest_selection`
      - `+ endpoints.hls_package.id`
      - `+ endpoints.hls_package.manifest_selection`
  - **CreateOttChannelInfo**
    - changes of request param
      - `+ endpoints.dash_package.id`
      - `+ endpoints.dash_package.manifest_selection`
      - `+ endpoints.mss_package.id`
      - `+ endpoints.mss_package.manifest_selection`
      - `+ endpoints.hls_package.id`
      - `+ endpoints.hls_package.manifest_selection`
  - **ListOttChannelInfo**
    - changes of response param
      - `+ channels.endpoints.dash_package.id`
      - `+ channels.endpoints.dash_package.manifest_selection`
      - `+ channels.endpoints.mss_package.id`
      - `+ channels.endpoints.mss_package.manifest_selection`
      - `+ channels.endpoints.hls_package.id`
      - `+ channels.endpoints.hls_package.manifest_selection`

### HuaweiCloud SDK ProjectMan

- _API Version_
  - V4
- _Features_
  - Support the APIs `DownloadIpdImageInIssue`, `UploadIpdImageInIssue`, `DeleteIpdImageInIssue`
- _Bug Fix_
  - None
- _Change_
  - **ListIpdProjectIssues**
    - changes of response param
      - `+ result.issues`
      - `+ result.total`
      - `* result: object -> object<IssueListResult>`

### HuaweiCloud SDK VPC

- _API Version_
  - V2
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListPorts**
    - changes of response param
      - `* ports.binding:vif_details.vlan_id: string -> int32`
  - **CreatePort**
    - changes of response param
      - `* port.binding:vif_details.vlan_id: string -> int32`
  - **ShowPort**
    - changes of response param
      - `* port.binding:vif_details.vlan_id: string -> int32`
  - **UpdatePort**
    - changes of response param
      - `* port.binding:vif_details.vlan_id: string -> int32`
  - **NeutronListPorts**
    - changes of response param
      - `* ports.binding:vif_details.vlan_id: string -> int32`
  - **NeutronCreatePort**
    - changes of response param
      - `* port.binding:vif_details.vlan_id: string -> int32`
  - **NeutronShowPort**
    - changes of response param
      - `* port.binding:vif_details.vlan_id: string -> int32`
  - **NeutronUpdatePort**
    - changes of response param
      - `* port.binding:vif_details.vlan_id: string -> int32`

### HuaweiCloud SDK VPC

- _API Version_
  - V3
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListPorts**
    - changes of response param
      - `* ports.binding:vif_details.vlan_id: string -> int32`
  - **ShowPort**
    - changes of response param
      - `* port.binding:vif_details.vlan_id: string -> int32`
  - **AddSecurityGroups**
    - changes of response param
      - `* port.binding:vif_details.vlan_id: string -> int32`
  - **RemoveSecurityGroups**
    - changes of response param
      - `* port.binding:vif_details.vlan_id: string -> int32`

# 3.1.171 2026-01-22

### HuaweiCloud SDK CDN

- _API Version_
  - V2
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ShowDomainCountryStat**
    - changes of response param
      - `+ result`
  - **SetStatsConfig**
    - changes of request param
      - `- expired_time`
  - **ShowStatsConfigs**
    - changes of response param
      - `- data.expired_time`

### HuaweiCloud SDK CFW

- _API Version_
  - V1
- _Features_
  - Support the following APIs:
    - `ImportRuleAcl`
    - `ExportRuleAcl`
    - `DownloadImportTemplate`
    - `DownloadExportResult`
    - `ShowExportStatus`
    - `DownloadImportResult`
    - `ListAclRuleHitStatus`
    - `BatchDeleteAddressSets`
    - `AddCustomDnsServer`
    - `ListDomainResolveIp`
    - `SwitchFirewallEipProtection`
    - `AddEipAlarmWhitelist`
    - `ListPrivateNetworkSegments`
    - `UpdatePrivateNetworkSegment`
    - `BatchCreatePrivateNetworkSegments`
    - `BatchDeletePrivateNetworkSegments`
    - `UpdateFirewallName`
    - `ShowConfigQuota`
    - `ShowSnFirewallProtectionStatus`
    - `BatchDeleteCustomerIps`
    - `BatchUpdateCustomerIpsAction`
    - `UpdateIpsWhitelist`
    - `ListIpsWhitelists`
    - `BatchCreateIpsWhitelist`
    - `BatchDeleteIpsWhitelist`
    - `BatchRemoveAccounts`
    - `ListSchedules`
    - `CreateSchedule`
    - `UpdateSchedule`
    - `DeleteSchedule`
    - `BatchDeleteSchedules`
    - `ListReportHistory`
    - `BatchDeleteServiceSets`
    - `BatchCreateBlackWhiteList`
    - `BatchDeleteBlackWhiteLists`
    - `CreateCustomerIps`
    - `BatchAddAccounts`
- _Bug Fix_
  - None
- _Change_
  - **DeleteAddressItem**
    - changes of response param
      - `+ data`
  - **ListBlackWhiteLists**
    - changes of response param
      - `+ data.records.created_date`
      - `+ data.records.modified_date`
  - **UpdateObjectConfigDesc**
    - changes of request param
      - `* body: object<ObjectInfoDto> -> object<UpdateObjectConfigDesc>`
  - **ListRegions**
    - changes of response param
      - `* data: object -> list<IpRegionResponseBodyData>`
  - **ShowImportStatus**
    - changes of response param
      - `+ data.id`
      - `+ data.status`
      - `* data: object -> object<ShowImportStatusId>`
  - **ListLogs**
    - changes of response param
      - `* data.records.dst_region_id: object -> string`
  - **ListDnsServers**
    - changes of response param
      - `+ data.status`
  - **CreateFirewall**
    - changes of request param
      - `- X-Client-Token`
  - **ListAlarmWhitelist**
    - changes of response param
      - `- data.endRow`
      - `- data.hasNextPage`
      - `- data.hasPreviousPage`
      - `- data.isFirstPage`
      - `- data.isLastPage`
      - `- data.navigateFirstPage`
      - `- data.navigateLastPage`
      - `- data.navigatePages`
      - `- data.navigatepageNums`
      - `- data.nextPage`
      - `- data.pageNum`
      - `- data.pageSize`
      - `- data.prePage`
      - `- data.startRow`
      - `- data.total`
      - `+ data.list.eip_id`
      - `+ data.list.fw_instance_id`
      - `+ data.list.object_id`
      - `+ data.list.public_ip`
      - `+ data.list.public_ipv6`
      - `+ data.list.type`
      - `* data.list: list<object> -> list<EipInfo>`
      - `* data: object<PageInfo> -> object<HttpListAlarmWhiteListResponseData>`
  - **ListCustomerIps**
    - changes of request param
      - `* object_id: required -> optional`
  - **ShowCustomerIpsInfo**
    - changes of request param
      - `* object_id: required -> optional`
  - **ListFlowStatistic**
    - changes of response param
      - `+ data.records.agg_start_time`
      - `+ data.records.agg_end_time`
  - **ListAclRules**
    - changes of response param
      - `+ data.up_rules_count`
      - `+ data.records.modified_date`
  - **ListEips**
    - changes of response param
      - `+ data.records.bypass_status`
  - **ShowAntiVirusRule**
    - changes of request param
      - `* engine_type: required -> optional`
  - **DeleteIpBlacklist**
    - changes of response param
      - `- data`

### HuaweiCloud SDK DDS

- _API Version_
  - V3
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **UpdateEntityConfiguration**
    - changes of request param
      - `- x-auth-token`
  - **ListTasks**
    - changes of request param
      - `+ id`

### HuaweiCloud SDK EIP

- _API Version_
  - V3
- _Features_
  - Support the API `ShowPublicipPoolTypes`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK GEIP

- _API Version_
  - V3
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **CountGlobalEipSegment**
    - changes of request param
      - `- limit`
      - `- offset`
      - `- marker`
      - `- page_reverse`
  - **ListSupportMasks**
    - changes of request param
      - `* mask: list<integer> -> int32`

### HuaweiCloud SDK Live

- _API Version_
  - V1
- _Features_
  - Support the following APIs:
    - `ShowCertificateInfo`
    - `ShowDomainVerification`
    - `CheckDomainVerification`
    - `ListPullTasks`
    - `ModifyPullTask`
    - `CreatePullTask`
    - `DeletePullTask`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK Live

- _API Version_
  - V2
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListBandwidthDetail**
    - changes of request param
      - `+ ip_type`

# 3.1.170 2026-01-15

### HuaweiCloud SDK CDN

- _API Version_
  - V2
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **UpdateRuleNew**
    - changes of request param
      - `+ actions.request_limit_rule`
      - `- actions.request_limit_rules`
  - **ShowDomainTemplate**
    - changes of response param
      - `+ templates`
      - `- temlates`
  - **CreateRuleNew**
    - changes of request param
      - `+ actions.request_limit_rule`
      - `- actions.request_limit_rules`
  - **ListRuleDetails**
    - changes of response param
      - `+ rules.actions.request_limit_rule`
      - `- rules.actions.request_limit_rules`
  - **UpdateFullRule**
    - changes of request param
      - `+ rules.actions.request_limit_rule`
      - `- rules.actions.request_limit_rules`

### HuaweiCloud SDK DBSS

- _API Version_
  - V1
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListEcsSpecificationNew**
    - changes of response param
      - `+ specifications`
      - `- specification`
  - **ListAuditRuleRisksNew**
    - changes of request param
      - `+ offset`
      - `+ limit`

### HuaweiCloud SDK DRS

- _API Version_
  - V3
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **BatchStartJobs**
    - changes of request param
      - `+ jobs.is_auto_create_compare`
  - **BatchListJobDetails**
    - changes of response param
      - `+ results.job_kernel_direction`

### HuaweiCloud SDK DRS

- _API Version_
  - V5
- _Features_
  - Support the following APIs:
    - `ShowSubscriptionLists`
    - `ShowColumnInfos`
    - `DeleteColumnInfos`
    - `ShowReplayProgress`
    - `ModifyColumnInfos`
- _Bug Fix_
  - None
- _Change_
  - **ShowSupportObjectType**
    - changes of response param
      - `+ import_mapping_type`
      - `+ is_import_unique_key`
  - **ShowDirtyData**
    - changes of request param
      - `+ anonymize_mode`
      - `+ task_mode`
  - **ShowProgressData**
    - changes of request param
      - `+ search_name`
  - **ListTags**
    - changes of request param
      - `+ resource_type: enum value [verify]`
  - **ListAsyncJobDetail**
    - changes of response param
      - `+ jobs.job_kernel_direction`
  - **ShowJobDetail**
    - changes of request param
      - `+ log_level`
    - changes of response param
      - `+ job.job_kernel_direction`
  - **ExecuteJobAction**
    - changes of request param
      - `+ job.action_params.is_auto_create_compare`
  - **BatchExecuteJobActions**
    - changes of request param
      - `+ jobs.action_params.is_auto_create_compare`

### HuaweiCloud SDK EPS

- _API Version_
  - V1
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListEnterpriseProject**
    - changes of request param
      - `+ type`

### HuaweiCloud SDK VPC

- _API Version_
  - V2
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListPorts**
    - changes of response param
      - `+ ports.binding:vif_details.vlan_id`
      - `+ ports.binding:vif_details.parent_id`
      - `+ ports.binding:vif_details.parent_device_id`
  - **CreatePort**
    - changes of response param
      - `+ port.binding:vif_details.vlan_id`
      - `+ port.binding:vif_details.parent_id`
      - `+ port.binding:vif_details.parent_device_id`
  - **ShowPort**
    - changes of response param
      - `+ port.binding:vif_details.vlan_id`
      - `+ port.binding:vif_details.parent_id`
      - `+ port.binding:vif_details.parent_device_id`
  - **UpdatePort**
    - changes of response param
      - `+ port.binding:vif_details.vlan_id`
      - `+ port.binding:vif_details.parent_id`
      - `+ port.binding:vif_details.parent_device_id`
  - **NeutronListPorts**
    - changes of response param
      - `+ ports.binding:vif_details.vlan_id`
      - `+ ports.binding:vif_details.parent_id`
      - `+ ports.binding:vif_details.parent_device_id`
  - **NeutronCreatePort**
    - changes of response param
      - `+ port.binding:vif_details.vlan_id`
      - `+ port.binding:vif_details.parent_id`
      - `+ port.binding:vif_details.parent_device_id`
  - **NeutronShowPort**
    - changes of response param
      - `+ port.binding:vif_details.vlan_id`
      - `+ port.binding:vif_details.parent_id`
      - `+ port.binding:vif_details.parent_device_id`
  - **NeutronUpdatePort**
    - changes of response param
      - `+ port.binding:vif_details.vlan_id`
      - `+ port.binding:vif_details.parent_id`
      - `+ port.binding:vif_details.parent_device_id`

### HuaweiCloud SDK VPC

- _API Version_
  - V3
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListPorts**
    - changes of response param
      - `+ ports.binding:vif_details.vlan_id`
      - `+ ports.binding:vif_details.parent_id`
      - `+ ports.binding:vif_details.parent_device_id`
  - **ShowPort**
    - changes of response param
      - `+ port.binding:vif_details.vlan_id`
      - `+ port.binding:vif_details.parent_id`
      - `+ port.binding:vif_details.parent_device_id`
  - **AddSecurityGroups**
    - changes of response param
      - `+ port.binding:vif_details.vlan_id`
      - `+ port.binding:vif_details.parent_id`
      - `+ port.binding:vif_details.parent_device_id`
  - **RemoveSecurityGroups**
    - changes of response param
      - `+ port.binding:vif_details.vlan_id`
      - `+ port.binding:vif_details.parent_id`
      - `+ port.binding:vif_details.parent_device_id`

# 3.1.169 2026-01-08

### HuaweiCloud SDK CCE

- _API Version_
  - V3
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ShowNode**
    - changes of response param
      - `+ spec.extendParam.serverMetadataHttpTokens`
  - **UpdateNode**
    - changes of response param
      - `+ spec.extendParam.serverMetadataHttpTokens`
  - **DeleteNode**
    - changes of response param
      - `+ spec.extendParam.serverMetadataHttpTokens`
  - **CreateNode**
    - changes of request param
      - `+ spec.extendParam.serverMetadataHttpTokens`
    - changes of response param
      - `+ spec.extendParam.serverMetadataHttpTokens`
  - **ListNodes**
    - changes of response param
      - `+ items.spec.extendParam.serverMetadataHttpTokens`
  - **ShowNodePool**
    - changes of response param
      - `+ spec.nodeTemplate.extendParam.serverMetadataHttpTokens`
  - **UpdateNodePool**
    - changes of response param
      - `+ spec.nodeTemplate.extendParam.serverMetadataHttpTokens`
  - **DeleteNodePool**
    - changes of response param
      - `+ spec.nodeTemplate.extendParam.serverMetadataHttpTokens`
  - **UpgradeNodePool**
    - changes of request param
      - `+ spec.nodeTemplate.extendParam.serverMetadataHttpTokens`
  - **CreateNodePool**
    - changes of request param
      - `+ spec.nodeTemplate.extendParam.serverMetadataHttpTokens`
    - changes of response param
      - `+ spec.nodeTemplate.extendParam.serverMetadataHttpTokens`
  - **ListNodePools**
    - changes of response param
      - `+ items.spec.nodeTemplate.extendParam.serverMetadataHttpTokens`
  - **ListHyperNodes**
    - changes of response param
      - `+ hyperNodeList.spec.nodeTemplate.extendParam.serverMetadataHttpTokens`

### HuaweiCloud SDK CDN

- _API Version_
  - V2
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ShowDomainStats**
    - changes of response param
      - `+ start_time`
      - `+ stat_type`
      - `+ end_time`
      - `+ action`
      - `+ interval`

### HuaweiCloud SDK Cloudtest

- _API Version_
  - V1
- _Features_
  - Support the API `DownloadStepImageNew`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK GaussDBforopenGauss

- _API Version_
  - V3
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListTransaction**
    - changes of request param
      - `+ transaction_query_info`
      - `- transaction_query_option`
    - changes of response param
      - `+ rows`
      - `- rows_info`
  - **ShowRedistributionParameters**
    - changes of response param
      - `+ expansion_parameters`
      - `- redistribution_parameters`
  - **ShowEpsRemainingQuota**
    - changes of response param
      - `+ eps_remaining_quotas`
      - `- eps_quota_remaining`
  - **ListSqlLimitTask**
    - changes of response param
      - `* limit_task_list.instance_id: object -> string`
  - **ListEnhanceFullSqls**
    - changes of request param
      - `+ node_id`
  - **ExportFullSqlList**
    - changes of request param
      - `+ node_id`
  - **ListFullSqlSwitches**
    - changes of response param
      - `+ full_sql_switches`
      - `- full_sql_switchs`
      - `+ allowed_sql_types.category`
      - `+ allowed_sql_types.prefixes`
      - `+ allowed_sql_types.is_preset`
      - `- allowed_sql_types.is_open`
      - `- allowed_sql_types.begin_time`
  - **ListSlowSqls**
    - changes of response param
      - `+ slow_sql_infos.db_name`
      - `+ slow_sql_infos.schema_name`
  - **ModifyHbaConf**
    - changes of request param
      - `+ before_conf.type`
      - `+ before_conf.database`
      - `+ before_conf.user`
      - `+ before_conf.address`
      - `+ before_conf.method`
      - `* before_conf: object -> object<BeforeHbaConfOption>`
      - `+ after_conf.type`
      - `+ after_conf.database`
      - `+ after_conf.user`
      - `+ after_conf.address`
      - `+ after_conf.method`
      - `* after_conf: object -> object<AfterHbaConfOption>`
  - **BatchSetBackupPolicy**
    - changes of request param
      - `* backup_policy: object<BackupPolicyInfo> -> object<BatchSetBackupPolicyOption>`
  - **ListWaitEvent**
    - changes of response param
      - `* rows: object<WaitEventResult> -> list<WaitEventResult>`
  - **ListHbaInfoHistory**
    - changes of response param
      - `+ hba_histories.id`
  - **ListMetricDatas**
    - changes of response param
      - `+ instances.nodes.role`

### HuaweiCloud SDK MPC

- _API Version_
  - V1
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **CreateThumbnailsTask**
    - changes of request param
      - `+ thumbnail_para.amount`
      - `+ thumbnail_para.threshold`
  - **UpdateWatermarkTemplate**
    - changes of request param
      - `+ random_time_min`
      - `+ random_time_max`
  - **CreateWatermarkTemplate**
    - changes of request param
      - `+ random_time_min`
      - `+ random_time_max`
  - **ListWatermarkTemplate**
    - changes of response param
      - `+ templates.random_time_min`
      - `+ templates.random_time_max`
  - **ListRemuxTask**
    - changes of response param
      - `+ tasks.output_metadata.md5`
      - `+ tasks.output_metadata.video.duration`
      - `+ tasks.output_metadata.video.duration_ms`
      - `+ tasks.output_metadata.video.rotate`
      - `+ tasks.output_metadata.audio.duration`
      - `+ tasks.output_metadata.audio.duration_ms`
  - **CreateExtractTask**
    - changes of response param
      - `+ metadata.md5`
      - `+ metadata.video.duration`
      - `+ metadata.video.duration_ms`
      - `+ metadata.video.rotate`
      - `+ metadata.audio.duration`
      - `+ metadata.audio.duration_ms`
  - **ListExtractTask**
    - changes of response param
      - `+ tasks.metadata.md5`
      - `+ tasks.metadata.video.duration`
      - `+ tasks.metadata.video.duration_ms`
      - `+ tasks.metadata.video.rotate`
      - `+ tasks.metadata.audio.duration`
      - `+ tasks.metadata.audio.duration_ms`
  - **CreateMbTasksReport**
    - changes of request param
      - `+ parameter.metadata.md5`
      - `+ parameter.metadata.video.duration`
      - `+ parameter.metadata.video.duration_ms`
      - `+ parameter.metadata.video.rotate`
      - `+ parameter.metadata.audio.duration`
      - `+ parameter.metadata.audio.duration_ms`
  - **CreateTranscodingTask**
    - changes of request param
      - `+ trans_template_list`
      - `+ thumbnails`
      - `+ image_sprites`
      - `+ pipeline_id`
      - `+ av_parameters.output`
      - `+ av_parameters.output_filename`
      - `+ watermarks.image_watermark.random_time_min`
      - `+ watermarks.image_watermark.random_time_max`
      - `+ watermarks.text_watermark.random_time_min`
      - `+ watermarks.text_watermark.random_time_max`
      - `+ thumbnail.params.amount`
      - `+ thumbnail.params.threshold`
      - `+ video_process.fill_type`
  - **ListTranscodingTask**
    - changes of response param
      - `+ task_array.thumbnails_info`
      - `+ task_array.image_sprite_info`
      - `+ task_array.av_parameters.output`
      - `+ task_array.av_parameters.output_filename`
      - `+ task_array.transcode_detail.input_file.md5`
      - `+ task_array.transcode_detail.input_file.video_info.duration`
      - `+ task_array.transcode_detail.input_file.video_info.duration_ms`
      - `+ task_array.transcode_detail.input_file.video_info.rotate`
      - `+ task_array.transcode_detail.input_file.audio_info.duration`
      - `+ task_array.transcode_detail.input_file.audio_info.duration_ms`
  - **ListTranscodeDetail**
    - changes of response param
      - `+ task_array.media_detail.origin_para.video.duration`
      - `+ task_array.media_detail.origin_para.video.duration_ms`
      - `+ task_array.media_detail.origin_para.video.rotate`
      - `+ task_array.media_detail.origin_para.audio.duration`
      - `+ task_array.media_detail.origin_para.audio.duration_ms`
  - **CreateEditingJob**
    - changes of request param
      - `+ image_watermark_settings.random_time_min`
      - `+ image_watermark_settings.random_time_max`
      - `+ concats.av_parameters.output`
      - `+ concats.av_parameters.output_filename`
  - **ListEditingJob**
    - changes of response param
      - `+ jobs.output_file_info.meta_data.md5`
      - `+ jobs.output_file_info.meta_data.video_info.duration`
      - `+ jobs.output_file_info.meta_data.video_info.duration_ms`
      - `+ jobs.output_file_info.meta_data.video_info.rotate`
      - `+ jobs.output_file_info.meta_data.audio_info.duration`
      - `+ jobs.output_file_info.meta_data.audio_info.duration_ms`
      - `+ jobs.edit_task_req.image_watermark_settings.random_time_min`
      - `+ jobs.edit_task_req.image_watermark_settings.random_time_max`
      - `+ jobs.edit_task_req.concats.av_parameters.output`
      - `+ jobs.edit_task_req.concats.av_parameters.output_filename`

### HuaweiCloud SDK RDS

- _API Version_
  - V3
- _Features_
  - Support the API `UpdateTimeZone`
- _Bug Fix_
  - None
- _Change_
  - **ListBackups**
    - changes of response param
      - `+ backups.min_data_volume_capacity_for_restore`

### HuaweiCloud SDK VOD

- _API Version_
  - V1
- _Features_
  - Support the APIs `ListCategoryInfo`, `ListAssetTaskInfo`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK VPC

- _API Version_
  - V3
- _Features_
  - Support the following APIs:
    - `ListAddressGroupsDependency`
    - `ListPorts`
    - `ShowPort`
    - `ListVirsubnets`
    - `ShowVirsubnet`
    - `ShowQuota`
- _Bug Fix_
  - None
- _Change_
  - **AddSecurityGroups**
    - changes of response param
      - `* port.extra_dhcp_opts: list<ExtraDhcpOpt> -> list<PortExtraDhcpOpt>`
      - `* port.tags: list<ResourceTag> -> list<ResponseTag>`
  - **RemoveSecurityGroups**
    - changes of response param
      - `* port.extra_dhcp_opts: list<ExtraDhcpOpt> -> list<PortExtraDhcpOpt>`
      - `* port.tags: list<ResourceTag> -> list<ResponseTag>`

