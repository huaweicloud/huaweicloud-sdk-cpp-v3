# 3.1.130 2025-04-03

### HuaweiCloud SDK GaussDB

- _接口版本_
  - V3
- _新增特性_
  - 支持接口`UpdateTaurusNodeDataIp`
- _解决问题_
  - 无
- _特性变更_
  - 无

# 3.1.129 2025-03-27

### HuaweiCloud SDK CBR

- _接口版本_
  - V1
- _新增特性_
  - 支持接口`ChangeVaultChargeMode`
- _解决问题_
  - 无
- _特性变更_
  - **ChangeOrder**
    - 响应参数变更
      - `* retCode: string -> number`

### HuaweiCloud SDK ECS

- _接口版本_
  - V2
- _新增特性_
  - 支持接口`ListScheduledEvents`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK KMS

- _接口版本_
  - V2
- _新增特性_
  - 支持接口`CreateRsaDatakeyPair`、`CreateEcDatakeyPair`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK KVS

- _接口版本_
  - V1
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **UpdateKv**
    - 请求参数变更
      - `+ update_fields.upsert`

### HuaweiCloud SDK VOD

- _接口版本_
  - V1
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **UpdateStorageMode**
    - 请求参数变更
      - `+ X-Sdk-Date`
  - **ModifySubtitle**
    - 请求参数变更
      - `+ X-Sdk-Date`
      - `+ delete_subtitles.type: enum value [SRT]`
      - `+ add_subtitles.type: enum value [SRT]`
  - **DeleteTranscodeProduct**
    - 请求参数变更
      - `+ X-Sdk-Date`

# 3.1.128 2025-03-20

### HuaweiCloud SDK AAD

- _接口版本_
  - V2
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **UpgradeInstanceSpec**
    - 请求参数变更
      - `+ upgrade_data.basic_qps`

### HuaweiCloud SDK ECS

- _接口版本_
  - V2
- _新增特性_
  - 支持接口`ListServerVolumeAttachments`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK EVS

- _接口版本_
  - V2
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListVolumes**
    - 请求参数变更
      - `+ not_metadata`

### HuaweiCloud SDK KVS

- _接口版本_
  - V1
- _新增特性_
  - 支持接口`DeleteTable`
- _解决问题_
  - 无
- _特性变更_
  - **CreateTable**
    - 请求参数变更
      - `+ sse_specification`
    - 响应参数变更
      - `+ sse_specification`
  - **DescribeTable**
    - 响应参数变更
      - `+ sse_specification`

### HuaweiCloud SDK Live

- _接口版本_
  - V1
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **UpdateDomain**
    - 响应参数变更
      - `+ pull_protocol`
      - `+ service_area: enum value [global]`
  - **CreateDomain**
    - 请求参数变更
      - `+ pull_protocol`
      - `+ service_area: enum value [global]`
    - 响应参数变更
      - `+ pull_protocol`
      - `+ service_area: enum value [global]`
  - **ShowDomain**
    - 响应参数变更
      - `+ domain_info.pull_protocol`
      - `+ domain_info.service_area: enum value [global]`

# 3.1.127 2025-03-13

### HuaweiCloud SDK KVS

- _接口版本_
  - V1
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **PutKv**
    - 请求参数变更
      - `+ condition_expression.single_kv_expression`
  - **UpdateKv**
    - 请求参数变更
      - `+ condition_expression.single_kv_expression`
  - **DeleteKv**
    - 请求参数变更
      - `+ condition_expression.single_kv_expression`
  - **ScanKv**
    - 请求参数变更
      - `+ filter_expression.single_kv_expression`
  - **ScanSkeyKv**
    - 请求参数变更
      - `+ filter_expression.single_kv_expression`

### HuaweiCloud SDK RDS

- _接口版本_
  - V3
- _新增特性_
  - 支持接口`ListVolumeInfo`
- _解决问题_
  - 无
- _特性变更_
  - 无

# 3.1.126 2025-03-06

### HuaweiCloud SDK CFW

- _接口版本_
  - V1
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListAclRules**
    - 响应参数变更
      - `+ data.records.applications`

### HuaweiCloud SDK DRS

- _接口版本_
  - V5
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - 废弃以下接口：
    - `CollectDbObjectsAsync`
    - `BatchTagAction`
    - `ListProjectTags`
    - `ShowInstanceTags`
    - `ListDbObjects`

### HuaweiCloud SDK ECS

- _接口版本_
  - V2
- _新增特性_
  - 支持接口`UpdateServerInterface`
- _解决问题_
  - 无
- _特性变更_
  - 废弃接口`NovaListAvailabilityZones`

### HuaweiCloud SDK GaussDBforNoSQL

- _接口版本_
  - V3
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListFlavorInfos**
    - 请求参数变更
      - `+ mode`
      - `+ product_type`
  - **ShowQuotas**
    - 请求参数变更
      - `+ product_type`
  - **ListRecycleInstances**
    - 响应参数变更
      - `+ instances.product_type`
  - **CreateInstance**
    - 请求参数变更
      - `+ product_type`
  - **ListInstances**
    - 响应参数变更
      - `+ instances.product_type`

### HuaweiCloud SDK GaussDBforopenGauss

- _接口版本_
  - V3
- _新增特性_
  - 支持以下接口：
    - `ListScheduleTask`
    - `CancelScheduleTask`
    - `DeleteScheduleTask`
    - `ListInstanceEngineDetail`
    - `CreateScheduleTask`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK OCR

- _接口版本_
  - V1
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **RecognizeBankReceipt**
    - 请求参数变更
      - `+ single_orientation_mode`
      - `+ erase_seal`

# 3.1.125 2025-02-27

### HuaweiCloud SDK CSMS

- _接口版本_
  - V1
- _新增特性_
  - 支持接口`UpdateUserPassword`
- _解决问题_
  - 无
- _特性变更_
  - **BatchImportSecrets**
    - 请求参数变更
      - `- total`

### HuaweiCloud SDK GaussDB

- _接口版本_
  - V3
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListStarRocksDbParameters**
    - 请求参数变更
      - `+ main_task_name`

### HuaweiCloud SDK Live

- _接口版本_
  - V1
- _新增特性_
  - 支持接口`ListScheduleRecordTasks`、`CreateScheduleRecordTasks`、`DeleteScheduleRecordTasks`
- _解决问题_
  - 无
- _特性变更_
  - **UpdateSnapshotConfig**
    - 请求参数变更
      - `+ image_access_protocol`
      - `+ image_access_domain`
  - **CreateSnapshotConfig**
    - 请求参数变更
      - `+ image_access_protocol`
      - `+ image_access_domain`
  - **ListSnapshotConfigs**
    - 响应参数变更
      - `+ snapshot_config_list.image_access_protocol`
      - `+ snapshot_config_list.image_access_domain`

### HuaweiCloud SDK OCR

- _接口版本_
  - V1
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **RecognizeVatInvoice**
    - 响应参数变更
      - `+ result.passenger_travel_item_list`

### HuaweiCloud SDK VPC

- _接口版本_
  - V2
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListPorts**
    - 请求参数变更
      - `* id: string -> list<string>`

# 3.1.124 2025-02-20

### HuaweiCloud SDK CDN

- _接口版本_
  - V2
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ShowDomainFullConfig**
    - 响应参数变更
      - `+ configs.client_cert.status`
      - `- configs.client_cert.validation`
  - **UpdateDomainFullConfig**
    - 请求参数变更
      - `+ configs.client_cert.status`
      - `- configs.client_cert.validation`

### HuaweiCloud SDK CSMS

- _接口版本_
  - V1
- _新增特性_
  - 支持接口`BatchImportSecrets`、`ShowUserDetail`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK DRS

- _接口版本_
  - V5
- _新增特性_
  - 支持接口`ShowTimeline`
- _解决问题_
  - 无
- _特性变更_
  - **ShowDataProgress**
    - 响应参数变更
      - `+ data_process_info.process_rule_level`
  - **UpdateDataProgress**
    - 请求参数变更
      - `+ data_process_info.process_rule_level`
  - **CheckDataFilter**
    - 请求参数变更
      - `+ data_process_info.process_rule_level`
  - **ListAsyncJobDetail**
    - 响应参数变更
      - `+ jobs.diagnoses`
      - `+ jobs.repair_progress_info`
      - `+ jobs.repair_detail_info`
      - `+ jobs.repair_export_status`
  - **ShowJobDetail**
    - 请求参数变更
      - `+ type: enum value [diagnosis,diagnosis_history,repair_progress,repair_detail,repair_export_status]`
    - 响应参数变更
      - `+ job.diagnoses`
      - `+ job.repair_progress_info`
      - `+ job.repair_detail_info`
      - `+ job.repair_export_status`
  - **ExecuteJobAction**
    - 请求参数变更
      - `+ job.action_name: enum value [diagnosis：一键诊断。,start_repair：开始数据修复。,stop_repair：停止数据修复。]`
      - `+ job.action_params.repair_info`
      - `+ job.action_params.compare_task_param.data_process_info.process_rule_level`
  - **BatchExecuteJobActions**
    - 请求参数变更
      - `+ jobs.action_name: enum value [diagnosis：一键诊断。,start_repair：开始数据修复。,stop_repair：停止数据修复。]`
      - `+ jobs.action_params.repair_info`
      - `+ jobs.action_params.compare_task_param.data_process_info.process_rule_level`

### HuaweiCloud SDK OCR

- _接口版本_
  - V1
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **RecognizeFlightItinerary**
    - 响应参数变更
      - `+ result.gp_number`

# 3.1.123 2025-02-13

### HuaweiCloud SDK CDN

- _接口版本_
  - V2
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ShowDomainFullConfig**
    - 响应参数变更
      - `+ configs.client_cert`
  - **UpdateDomainFullConfig**
    - 请求参数变更
      - `+ configs.client_cert`

### HuaweiCloud SDK Live

- _接口版本_
  - V1
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ModifyOttChannelInfoInput**
    - 请求参数变更
      - `+ input.audio_selectors.selector_settings.audio_hls_selection`
  - **ModifyOttChannelInfoEndPoints**
    - 请求参数变更
      - `+ endpoints.dash_package.suggested_presentation_delay`
      - `+ endpoints.dash_package.minimum_update_period`
      - `+ endpoints.dash_package.min_buffer_time`
  - **CreateOttChannelInfo**
    - 请求参数变更
      - `+ input.audio_selectors.selector_settings.audio_hls_selection`
      - `+ endpoints.dash_package.suggested_presentation_delay`
      - `+ endpoints.dash_package.minimum_update_period`
      - `+ endpoints.dash_package.min_buffer_time`
  - **ListOttChannelInfo**
    - 响应参数变更
      - `+ channels.input.audio_selectors.selector_settings.audio_hls_selection`
      - `+ channels.endpoints.dash_package.suggested_presentation_delay`
      - `+ channels.endpoints.dash_package.minimum_update_period`
      - `+ channels.endpoints.dash_package.min_buffer_time`

### HuaweiCloud SDK MPC

- _接口版本_
  - V1
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **UpdateTemplateGroup**
    - 请求参数变更
      - `+ videos.stream_name`
  - **ListTemplateGroup**
    - 响应参数变更
      - `+ template_group_list.videos.stream_name`
  - **CreateTemplateGroup**
    - 请求参数变更
      - `+ videos.stream_name`
    - 响应参数变更
      - `+ template_group.videos.stream_name`
  - **UpdateTransTemplate**
    - 请求参数变更
      - `+ video.stream_name`
  - **CreateTransTemplate**
    - 请求参数变更
      - `+ video.stream_name`
  - **ListTemplate**
    - 响应参数变更
      - `+ template_array.template.video.stream_name`
  - **CreateTranscodingTask**
    - 请求参数变更
      - `+ additional_manifests`
      - `+ av_parameters.video.stream_name`
  - **ListTranscodingTask**
    - 响应参数变更
      - `+ task_array.additional_manifests`
      - `+ task_array.av_parameters.video.stream_name`
      - `+ task_array.transcode_detail.replace_sub_index`
      - `+ task_array.transcode_detail.input_file.manifest_name`
  - **ListTranscodeDetail**
    - 响应参数变更
      - `+ task_array.media_detail.replace_sub_index`
      - `+ task_array.media_detail.output_video_paras.manifest_name`
  - **CreateEditingJob**
    - 请求参数变更
      - `+ concats.av_parameters.video.stream_name`
  - **ListEditingJob**
    - 响应参数变更
      - `+ jobs.output_file_info.meta_data.manifest_name`
      - `+ jobs.edit_task_req.concats.av_parameters.video.stream_name`

### HuaweiCloud SDK SMN

- _接口版本_
  - V2
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListTopicAttributes**
    - 响应参数变更
      - `* attributes.access_policy: object<AccessPolicy> -> string`
  - **DeleteNotifyPolicy**
    - 响应参数变更
      - `+ request_id`
  - **UpdateNotifyPolicy**
    - 响应参数变更
      - `+ request_id`

# 3.1.122 2025-02-06

### HuaweiCloud SDK RDS

- _接口版本_
  - V3
- _新增特性_
  - 支持接口`ShowDatabaseLevelDatabase`、`ShowAutoUpgradePolicy`、`SetAutoUpgradePolicy`
- _解决问题_
  - 无
- _特性变更_
  - **CreateInstance**
    - 请求参数变更
      - `+ is_auto_upgrade`
  - **CreateRestoreInstance**
    - 请求参数变更
      - `+ is_auto_upgrade`

# 3.1.121 2025-01-23

### HuaweiCloud SDK KVS

- _接口版本_
  - V1
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **CreateTable**
    - 请求参数变更
      - `+ ttl_specification`
      - `- ttl_options`
    - 响应参数变更
      - `+ ttl_specification`
  - **DescribeTable**
    - 响应参数变更
      - `+ ttl_specification`
      - `- ttl_options`

# 3.1.120 2025-01-16

### HuaweiCloud SDK CodeArtsDeploy

- _接口版本_
  - V2
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListHostClusters**
    - 响应参数变更
      - `+ result.is_proxy_mode`
      - `- result.created_by`
      - `+ result.permission.can_copy`
  - **ShowHostClusterDetail**
    - 响应参数变更
      - `+ result.permission.can_copy`

### HuaweiCloud SDK GaussDB

- _接口版本_
  - V3
- _新增特性_
  - 支持接口`UpgradeSrKernelVersion`、`ListStarRocksDataReplicationConfigByDataBase`、`ModifyDataSync`
- _解决问题_
  - 无
- _特性变更_
  - **ListStarRocksDbParameters**
    - 请求参数变更
      - `+ add_task_scenario`
    - 响应参数变更
      - `+ db_parameters.is_modifiable`

### HuaweiCloud SDK OCR

- _接口版本_
  - V1
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **RecognizeVehicleLicense**
    - 请求参数变更
      - `+ recognize_electronic_license`
    - 响应参数变更
      - `+ result.type`
      - `+ result.color`
      - `+ result.mandatory_scrapping_date`
      - `+ result.status`

### HuaweiCloud SDK SMN

- _接口版本_
  - V2
- _新增特性_
  - 支持接口`ShowNotifyPolicy`、`CreateNotifyPolicy`、`UpdateNotifyPolicy`、`DeleteNotifyPolicy`
- _解决问题_
  - 无
- _特性变更_
  - **PublishMessage**
    - 请求参数变更
      - `+ locale`
  - **AddSubscription**
    - 请求参数变更
      - `+ subscriptions`
      - `+ extension.header`
      - `+ extension.app_key`
      - `+ extension.app_secret`
      - `+ extension.robot_code`
  - **ListResourceInstances**
    - 请求参数变更
      - `+ without_any_tag`
  - **ListTopicAttributes**
    - 请求参数变更
      - `* name: required -> optional`

# 3.1.119 2025-01-09

### HuaweiCloud SDK DRS

- _接口版本_
  - V5
- _新增特性_
  - 支持接口`ShowAgencyInfo`、`UpdateAgencyPolicy`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK IMS

- _接口版本_
  - V2
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListImages**
    - 响应参数变更
      - `+ images.os_shutdown_timeout`
  - **UpdateImage**
    - 响应参数变更
      - `+ os_shutdown_timeout`

### HuaweiCloud SDK VPC

- _接口版本_
  - V3
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListSecurityGroupRules**
    - 请求参数变更
      - `+ priority`
      - `+ ethertype`
      - `+ remote_address_group_id`
      - `+ enabled`
    - 响应参数变更
      - `+ security_group_rules.enabled`
  - **CreateSecurityGroupRule**
    - 请求参数变更
      - `+ security_group_rule.enabled`
    - 响应参数变更
      - `+ security_group_rule.enabled`
  - **ShowSecurityGroupRule**
    - 响应参数变更
      - `+ security_group_rule.enabled`
  - **BatchCreateSecurityGroupRules**
    - 请求参数变更
      - `+ security_group_rules.enabled`
    - 响应参数变更
      - `+ security_group_rules.enabled`
  - **CreateSecurityGroup**
    - 响应参数变更
      - `+ security_group.security_group_rules.enabled`
  - **ShowSecurityGroup**
    - 响应参数变更
      - `+ security_group.security_group_rules.enabled`
  - **UpdateSecurityGroup**
    - 响应参数变更
      - `+ security_group.security_group_rules.enabled`

# 3.1.118 2025-01-02

### HuaweiCloud SDK CFW

- _接口版本_
  - V1
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ShowIpsUpdateTime**
    - 响应参数变更
      - `- trace_id`
      - `- error_description`
      - `- job_id`
      - `- error_code`
      - `- fail_reason`
      - `- order_id`
  - **ListCustomerIps**
    - 响应参数变更
      - `* data: object<PageInfo«CustomerIpsListVO»> -> object<HttpListCustomerIpsResponseData>`

### HuaweiCloud SDK RDS

- _接口版本_
  - V3
- _新增特性_
  - 支持接口`ListReadOnlyReplayDatabase`、`RestoreLogReplayDatabase`
- _解决问题_
  - 无
- _特性变更_
  - **ListAuditlogs**
    - 响应参数变更
      - `* auditlogs.size: int64 -> double`
  - **ListDrInfos**
    - 响应参数变更
      - `+ instance_dr_infos.build_process`

### HuaweiCloud SDK VPC

- _接口版本_
  - V3
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListVpcs**
    - 请求参数变更
      - `+ enterprise_project_id`

# 3.1.117 2024-12-26

### HuaweiCloud SDK CBR

- _接口版本_
  - V1
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListVault**
    - 响应参数变更
      - `+ vaults.billing.object_type: enum value [turbo]`
      - `+ vaults.billing.spec_code: enum value [vault.backup.turbo.normal,vault.backup.database.normal,vault.hybrid.server.normal,vault.replication.server.normal]`
  - **CreateVault**
    - 响应参数变更
      - `+ vault.billing.object_type: enum value [turbo]`
      - `+ vault.billing.spec_code: enum value [vault.backup.turbo.normal,vault.backup.database.normal,vault.hybrid.server.normal,vault.replication.server.normal]`
  - **ShowVault**
    - 响应参数变更
      - `+ vault.billing.object_type: enum value [turbo]`
      - `+ vault.billing.spec_code: enum value [vault.backup.turbo.normal,vault.backup.database.normal,vault.hybrid.server.normal,vault.replication.server.normal]`
  - **UpdateVault**
    - 响应参数变更
      - `+ vault.billing.object_type: enum value [turbo]`
      - `+ vault.billing.spec_code: enum value [vault.backup.turbo.normal,vault.backup.database.normal,vault.hybrid.server.normal,vault.replication.server.normal]`
  - **ListExternalVault**
    - 响应参数变更
      - `+ vaults.billing.object_type: enum value [turbo]`
      - `+ vaults.billing.spec_code: enum value [vault.backup.turbo.normal,vault.backup.database.normal,vault.hybrid.server.normal,vault.replication.server.normal]`
  - **ListProtectable**
    - 响应参数变更
      - `+ instances.protectable.vault.billing.object_type: enum value [turbo]`
      - `+ instances.protectable.vault.billing.spec_code: enum value [vault.backup.turbo.normal,vault.backup.database.normal,vault.hybrid.server.normal,vault.replication.server.normal]`
  - **ShowProtectable**
    - 响应参数变更
      - `+ instance.protectable.vault.billing.object_type: enum value [turbo]`
      - `+ instance.protectable.vault.billing.spec_code: enum value [vault.backup.turbo.normal,vault.backup.database.normal,vault.hybrid.server.normal,vault.replication.server.normal]`
  - **ShowVaultResourceInstances**
    - 请求参数变更
      - `+ object_type: enum value [turbo,workspace,vmware,rds,file]`
    - 响应参数变更
      - `+ resources.resource_detail.vault.billing.object_type: enum value [turbo]`
      - `+ resources.resource_detail.vault.billing.spec_code: enum value [vault.backup.turbo.normal,vault.backup.database.normal,vault.hybrid.server.normal,vault.replication.server.normal]`

### HuaweiCloud SDK CFW

- _接口版本_
  - V1
- _新增特性_
  - 支持以下接口：
    - `ShowDomainSetDetail`
    - `ListDomainParseIp`
    - `BatchDeleteDomainSet`
    - `ListRegions`
    - `ShowImportStatus`
    - `ShowAntiVirusSwitch`
    - `UpdateAntiVirusSwitch`
    - `ShowAntiVirusRule`
    - `UpdateAntiVirusRule`
    - `ShowAlarmConfig`
    - `UpdateAlarmConfig`
    - `ListAlarmWhitelist`
    - `SwitchAutoProtectStatus`
    - `ShowAutoProtectStatus`
    - `ListProjectTags`
    - `ChangeIpsRuleMode`
    - `UpdateAdvancedIpsRule`
    - `ListIpsRules`
    - `ListIpsRules1`
    - `ShowIpsUpdateTime`
    - `ListCustomerIps`
    - `ListResourceTags`
    - `SaveTags`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK GaussDBforopenGauss

- _接口版本_
  - V3
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **AllowDbRolePrivileges**
    - 请求参数变更
      - `+ user.name`
      - `+ user.schema`
      - `+ user.readonly`
      - `+ user.default_privilege_grantee`
      - `* user: object -> object<GaussDBforOpenGaussRoleAttributes>`
  - **ListDatabaseRoles**
    - 响应参数变更
      - `* total_count: int64 -> int32`
      - `+ roles.attribute.rolsuper`
      - `+ roles.attribute.rolinherit`
      - `+ roles.attribute.rolcreaterole`
      - `+ roles.attribute.rolcreatedb`
      - `+ roles.attribute.rolcanlogin`
      - `+ roles.attribute.rolconnlimit`
      - `+ roles.attribute.rolreplication`
      - `+ roles.attribute.rolbypassrls`
      - `+ roles.attribute.rolpassworddeadline`
      - `* roles.attribute: object -> object<GaussDBListDatabaseRolesPriv>`

### HuaweiCloud SDK IMS

- _接口版本_
  - V2
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **CreateImage**
    - 请求参数变更
      - `+ hw_firmware_type`
  - **ImportImageQuick**
    - 请求参数变更
      - `+ hw_firmware_type`

### HuaweiCloud SDK LTS

- _接口版本_
  - V2
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListLogStreams**
    - 请求参数变更
      - `- offset`
      - `- limit`
  - **CreateLogGroup**
    - 请求参数变更
      - `+ log_group_name_alias`
  - **UpdateLogStream**
    - 请求参数变更
      - `- ttl_in_days: enum value [7]`
  - **UpdateTransfer**
    - 请求参数变更
      - `+ log_transfer_info.log_transfer_detail.lts_tags`
      - `+ log_transfer_info.log_transfer_detail.stream_tags`
      - `+ log_transfer_info.log_transfer_detail.struct_fields`
      - `+ log_transfer_info.log_transfer_detail.invalid_field_value`
    - 响应参数变更
      - `+ log_transfer_info.log_transfer_detail.lts_tags`
      - `+ log_transfer_info.log_transfer_detail.stream_tags`
      - `+ log_transfer_info.log_transfer_detail.struct_fields`
      - `+ log_transfer_info.log_transfer_detail.invalid_field_value`
  - **CreateTransfer**
    - 请求参数变更
      - `+ log_transfer_info.log_transfer_detail.lts_tags`
      - `+ log_transfer_info.log_transfer_detail.stream_tags`
      - `+ log_transfer_info.log_transfer_detail.struct_fields`
      - `+ log_transfer_info.log_transfer_detail.invalid_field_value`
    - 响应参数变更
      - `+ log_transfer_info.log_transfer_detail.lts_tags`
      - `+ log_transfer_info.log_transfer_detail.stream_tags`
      - `+ log_transfer_info.log_transfer_detail.struct_fields`
      - `+ log_transfer_info.log_transfer_detail.invalid_field_value`
  - **DeleteTransfer**
    - 响应参数变更
      - `+ log_transfer_info.log_transfer_detail.lts_tags`
      - `+ log_transfer_info.log_transfer_detail.stream_tags`
      - `+ log_transfer_info.log_transfer_detail.struct_fields`
      - `+ log_transfer_info.log_transfer_detail.invalid_field_value`
  - **ListTransfers**
    - 响应参数变更
      - `+ log_transfers.log_transfer_info.log_transfer_detail.lts_tags`
      - `+ log_transfers.log_transfer_info.log_transfer_detail.stream_tags`
      - `+ log_transfers.log_transfer_info.log_transfer_detail.struct_fields`
      - `+ log_transfers.log_transfer_info.log_transfer_detail.invalid_field_value`
  - **UpdateAccessConfig**
    - 请求参数变更
      - `+ access_config_name`

### HuaweiCloud SDK RDS

- _接口版本_
  - V3
- _新增特性_
  - 支持接口`ListDrInfos`
- _解决问题_
  - 无
- _特性变更_
  - **ListUpdateBackupEnhancePolicy**
    - 响应参数变更
      - `* policies.retention_days: string -> int32`

# 3.1.116 2024-12-19

### HuaweiCloud SDK AAD

- _接口版本_
  - V2
- _新增特性_
  - 支持接口`AddWafWhiteIpRule`、`DeleteWafWhiteIpRule`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK EVS

- _接口版本_
  - V2
- _新增特性_
  - 支持接口`UnsubscribePostpaidVolume`
- _解决问题_
  - 无
- _特性变更_
  - **CinderListQuotas**
    - 响应参数变更
      - `+ quota_set.gigabytes_ESSD`
      - `+ quota_set.snapshots_ESSD`
      - `+ quota_set.volumes_ESSD`

### HuaweiCloud SDK GaussDBforopenGauss

- _接口版本_
  - V3
- _新增特性_
  - 支持以下接口：
    - `ListRestorableInstancesDetails`
    - `ListRecycleInstancesDetails`
    - `ShowParameterGroupDetail`
    - `ShowSourceInstanceDetail`
    - `AllowDbRolePrivileges`
    - `ListDatabaseRoles`
    - `CreateDbRole`
    - `ListDatastoresDetails`
    - `ListDatabaseInstances`
    - `ListParameterGroupTemplates`
    - `ShowInstanceParamGroupDetail`
    - `ShowUpgradeCandidateVersionsDetails`
    - `BatchShowUpgradeCandidateVersions`
    - `ListFlavorsDetails`
    - `ListBackupsDetails`
    - `SyncLimitData`
    - `DeleteDatabaseSchema`
    - `CreateDatabaseInstance`
- _解决问题_
  - 无
- _特性变更_
  - **ShowUpgradeCandidateVersions**
    - 响应参数变更
      - `* hotfix_upgrade_infos: object<HotfixUpgradeInfos> -> list<HotfixUpgradeInfos>`
      - `* hotfix_rollback_infos: object<HotfixRollbackInfos> -> list<HotfixRollbackInfos>`

### HuaweiCloud SDK IMS

- _接口版本_
  - V2
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ImportImageQuick**
    - 请求参数变更
      - `+ license_type`

### HuaweiCloud SDK OCR

- _接口版本_
  - V1
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **RecognizeAutoClassification**
    - 请求参数变更
      - `+ pdf_page_number`
  - **RecognizeSmartDocumentRecognizer**
    - 请求参数变更
      - `+ erase_seal`

### HuaweiCloud SDK RDS

- _接口版本_
  - V3
- _新增特性_
  - 支持接口`ListUpdateBackupEnhancePolicy`
- _解决问题_
  - 无
- _特性变更_
  - 无

# 3.1.115 2024-12-12

### HuaweiCloud SDK CDN

- _接口版本_
  - V2
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ShowDomainFullConfig**
    - 响应参数变更
      - `+ configs.cache_rules.force_cache`
  - **UpdateDomainFullConfig**
    - 请求参数变更
      - `+ configs.cache_rules.force_cache`

### HuaweiCloud SDK CSMS

- _接口版本_
  - V1
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListUsers**
    - 请求参数变更
      - `+ user_info`
      - `- user_name`

### HuaweiCloud SDK DDS

- _接口版本_
  - V3
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ResizeInstance**
    - 请求参数变更
      - `+ resize.target_ids`

### HuaweiCloud SDK GaussDB

- _接口版本_
  - V3
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **CreateStarrocksInstance**
    - 请求参数变更
      - `+ pay_info`
      - `+ region_code`

### HuaweiCloud SDK LTS

- _接口版本_
  - V2
- _新增特性_
  - 支持接口`ListLogContext`
- _解决问题_
  - 无
- _特性变更_
  - **CreateLogStreamIndex**
    - 请求参数变更
      - `+ fields.ltsSubFieldsInfoList`
      - `+ fields.fieldType: enum value [json]`
  - **ListAccessConfig**
    - 响应参数变更
      - `+ result.access_config_detail.repeat_collect`
      - `+ result.access_config_detail.system_fields`
      - `+ result.access_config_detail.custom_key_value`
      - `+ result.access_config_detail.includeLabelsLogical`
      - `+ result.access_config_detail.excludeLabelsLogical`
      - `+ result.access_config_detail.includeK8sLabelsLogical`
      - `+ result.access_config_detail.excludeK8sLabelsLogical`
      - `+ result.access_config_detail.includeEnvsLogical`
      - `+ result.access_config_detail.excludeEnvsLogical`
  - **UpdateAccessConfig**
    - 请求参数变更
      - `+ access_config_detail.system_fields`
      - `+ access_config_detail.custom_key_value`
      - `+ access_config_detail.includeLabelsLogical`
      - `+ access_config_detail.excludeLabelsLogical`
      - `+ access_config_detail.includeK8sLabelsLogical`
      - `+ access_config_detail.excludeK8sLabelsLogical`
      - `+ access_config_detail.includeEnvsLogical`
      - `+ access_config_detail.excludeEnvsLogical`
    - 响应参数变更
      - `+ access_config_detail.repeat_collect`
      - `+ access_config_detail.system_fields`
      - `+ access_config_detail.custom_key_value`
      - `+ access_config_detail.includeLabelsLogical`
      - `+ access_config_detail.excludeLabelsLogical`
      - `+ access_config_detail.includeK8sLabelsLogical`
      - `+ access_config_detail.excludeK8sLabelsLogical`
      - `+ access_config_detail.includeEnvsLogical`
      - `+ access_config_detail.excludeEnvsLogical`
  - **CreateAccessConfig**
    - 请求参数变更
      - `+ access_config_detail.repeat_collect`
      - `+ access_config_detail.system_fields`
      - `+ access_config_detail.custom_key_value`
      - `+ access_config_detail.includeLabelsLogical`
      - `+ access_config_detail.excludeLabelsLogical`
      - `+ access_config_detail.includeK8sLabelsLogical`
      - `+ access_config_detail.excludeK8sLabelsLogical`
      - `+ access_config_detail.includeEnvsLogical`
      - `+ access_config_detail.excludeEnvsLogical`
    - 响应参数变更
      - `+ access_config_detail.repeat_collect`
      - `+ access_config_detail.system_fields`
      - `+ access_config_detail.custom_key_value`
      - `+ access_config_detail.includeLabelsLogical`
      - `+ access_config_detail.excludeLabelsLogical`
      - `+ access_config_detail.includeK8sLabelsLogical`
      - `+ access_config_detail.excludeK8sLabelsLogical`
      - `+ access_config_detail.includeEnvsLogical`
      - `+ access_config_detail.excludeEnvsLogical`
  - **DeleteAccessConfig**
    - 响应参数变更
      - `+ result.access_config_detail.repeat_collect`
      - `+ result.access_config_detail.system_fields`
      - `+ result.access_config_detail.custom_key_value`
      - `+ result.access_config_detail.includeLabelsLogical`
      - `+ result.access_config_detail.excludeLabelsLogical`
      - `+ result.access_config_detail.includeK8sLabelsLogical`
      - `+ result.access_config_detail.excludeK8sLabelsLogical`
      - `+ result.access_config_detail.includeEnvsLogical`
      - `+ result.access_config_detail.excludeEnvsLogical`

# 3.1.114 2024-12-10

### HuaweiCloud SDK CSMS

- _接口版本_
  - V1
- _新增特性_
  - 支持以下接口：
    - `ListUsers`
    - `ListGrants`
    - `UpdateGrant`
    - `CreateGrants`
    - `DeleteGrant`
    - `GenerateRandomPassword`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK DBSS

- _接口版本_
  - V1
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListRdsDatabases**
    - 请求参数变更
      - `+ db_type: enum value [ORACLE,DAMENG,KINGBASE]`
  - **SwitchAuditDatabase**
    - 响应参数变更
      - `+ status`
      - `- result`

### HuaweiCloud SDK IMS

- _接口版本_
  - V2
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListImages**
    - 响应参数变更
      - `+ images.__support_kvm_hi1822_hisriov`
      - `+ images.__support_kvm_hi1822_hivirtionet`
  - **UpdateImage**
    - 响应参数变更
      - `+ __support_kvm_hi1822_hisriov`
      - `+ __support_kvm_hi1822_hivirtionet`

# 3.1.113 2024-12-05

### HuaweiCloud SDK CTS

- _接口版本_
  - V3
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListTraces**
    - 响应参数变更
      - `+ traces.read_only`
      - `+ traces.operation_id`

### HuaweiCloud SDK DDS

- _接口版本_
  - V3
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ShowInstanceConfigurationModifyHistory**
    - 请求参数变更
      - `+ entity_id`

### HuaweiCloud SDK DRS

- _接口版本_
  - V5
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListAsyncJobDetail**
    - 响应参数变更
      - `+ jobs.compare_result.data_compare_task_list.dynamic_compare_delay`
  - **ShowJobDetail**
    - 响应参数变更
      - `+ job.compare_result.data_compare_task_list.dynamic_compare_delay`

### HuaweiCloud SDK GaussDBforNoSQL

- _接口版本_
  - V3
- _新增特性_
  - 支持以下接口：
    - `SwitchOver`
    - `BatchDeleteManualBackup`
    - `ShowDisasterRecoverySettings`
    - `SetDisasterRecoverySettings`
    - `ShowRedisHotKeys`
    - `ShowRedisDisabledCommands`
    - `SaveRedisDisabledCommands`
    - `DeleteRedisDisabledCommands`
    - `ListInstanceSessions`
    - `ClearInstanceSessions`
- _解决问题_
  - 无
- _特性变更_
  - 无

# 3.1.112 2024-11-28

### HuaweiCloud SDK CBR

- _接口版本_
  - V1
- _新增特性_
  - 支持接口`ChangeOrder`
- _解决问题_
  - 无
- _特性变更_
  - **AddAgentPath**
    - 请求参数变更
      - `+ exclude_path`
  - **AddMember**
    - 请求参数变更
      - `+ domains`
  - **ShowAgent**
    - 响应参数变更
      - `+ agent.paths.exclude_paths`
  - **UpdateAgent**
    - 响应参数变更
      - `+ agent.paths.exclude_paths`
  - **ListAgent**
    - 响应参数变更
      - `+ agents.paths.exclude_paths`
  - **RegisterAgent**
    - 响应参数变更
      - `+ agent.paths.exclude_paths`
  - **ShowBackup**
    - 响应参数变更
      - `+ backup.version`
      - `- backup.image_type: enum value [backup,replication]`
      - `- backup.resource_type: enum value [OS::Nova::Server,OS::Cinder::Volume,OS::Workspace::DesktopV2]`
  - **UpdateBackup**
    - 响应参数变更
      - `+ backup.version`
      - `- backup.image_type: enum value [backup,replication]`
      - `- backup.resource_type: enum value [OS::Nova::Server,OS::Cinder::Volume,OS::Workspace::DesktopV2]`
  - **ListBackups**
    - 响应参数变更
      - `+ backups.version`
      - `- backups.image_type: enum value [backup,replication]`
      - `- backups.resource_type: enum value [OS::Nova::Server,OS::Cinder::Volume,OS::Workspace::DesktopV2]`
  - **ListOrganizationPolicies**
    - 请求参数变更
      - `+ limit`
      - `+ offset`
  - **ListProtectable**
    - 请求参数变更
      - `+ protectable_type: enum value [turbo,workspace,workspace_v2]`

### HuaweiCloud SDK CSMS

- _接口版本_
  - V1
- _新增特性_
  - 支持接口`ListSecretTask`、`ShowAgency`、`CreateAgency`、`ShowSecretFunctionTemplates`
- _解决问题_
  - 无
- _特性变更_
  - **RotateSecret**
    - 响应参数变更
      - `+ rotation_task_id`
  - **ListSecrets**
    - 响应参数变更
      - `+ secrets.rotation_func_urn`
      - `+ secrets.secret_type: enum value [COMMON,RDS-FG,GaussDB-FG]`
  - **CreateSecret**
    - 请求参数变更
      - `+ rotation_func_urn`
      - `+ secret_type: enum value [COMMON,RDS-FG,GaussDB-FG]`
    - 响应参数变更
      - `+ secret.rotation_func_urn`
      - `+ secret.secret_type: enum value [COMMON,RDS-FG,GaussDB-FG]`
  - **ShowSecret**
    - 响应参数变更
      - `+ secret.rotation_func_urn`
      - `+ secret.secret_type: enum value [COMMON,RDS-FG,GaussDB-FG]`
  - **UpdateSecret**
    - 请求参数变更
      - `+ rotation_func_urn`
    - 响应参数变更
      - `+ secret.rotation_func_urn`
      - `+ secret.secret_type: enum value [COMMON,RDS-FG,GaussDB-FG]`
  - **UploadSecretBlob**
    - 响应参数变更
      - `+ secret.rotation_func_urn`
      - `+ secret.secret_type: enum value [COMMON,RDS-FG,GaussDB-FG]`
  - **DeleteSecretForSchedule**
    - 响应参数变更
      - `+ secret.rotation_func_urn`
      - `+ secret.secret_type: enum value [COMMON,RDS-FG,GaussDB-FG]`
  - **RestoreSecret**
    - 响应参数变更
      - `+ secret.rotation_func_urn`
      - `+ secret.secret_type: enum value [COMMON,RDS-FG,GaussDB-FG]`
  - **ListNotificationRecords**
    - 请求参数变更
      - `- limit`
      - `- marker`
    - 响应参数变更
      - `+ records.trigger_event_type: enum value [SECRET_VERSION_CREATED,SECRET_VERSION_EXPIRED,SECRET_ROTATED,SECRET_DELETED,SECRET_ROTATED_FAILED]`
      - `+ records.secret_type: enum value [COMMON,RDS-FG,GaussDB-FG]`
      - `+ records.notification_status: enum value [SUCCESS,FAIL,INVALID]`
  - **ListResourceInstances**
    - 响应参数变更
      - `+ resources.resource_detail.rotation_func_urn`
      - `+ resources.resource_detail.secret_type: enum value [COMMON,RDS-FG,GaussDB-FG]`
  - **ListSecretEvents**
    - 响应参数变更
      - `+ events.event_types: enum value [SECRET_ROTATED_FAILED]`
  - **CreateSecretEvent**
    - 请求参数变更
      - `+ event_types: enum value [SECRET_VERSION_CREATED,SECRET_VERSION_EXPIRED,SECRET_ROTATED,SECRET_DELETED,SECRET_ROTATED_FAILED]`
    - 响应参数变更
      - `+ event.event_types: enum value [SECRET_ROTATED_FAILED]`
  - **ShowSecretEvent**
    - 响应参数变更
      - `+ event.event_types: enum value [SECRET_ROTATED_FAILED]`
  - **UpdateSecretEvent**
    - 请求参数变更
      - `+ event_types: enum value [SECRET_VERSION_CREATED,SECRET_VERSION_EXPIRED,SECRET_ROTATED,SECRET_DELETED,SECRET_ROTATED_FAILED]`
    - 响应参数变更
      - `+ event.event_types: enum value [SECRET_ROTATED_FAILED]`

### HuaweiCloud SDK GaussDB

- _接口版本_
  - V3
- _新增特性_
  - 支持接口`ShowSlowLogStatistics`、`DownloadSlowLogFile`、`ShowMultiTenant`、`UpdateMultiTenant`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK GaussDBforNoSQL

- _接口版本_
  - V3
- _新增特性_
  - 支持以下接口：
    - `ShowRedisPitrPolicy`
    - `SetRedisPitrPolicy`
    - `ListRedisPitrRestoreTime`
    - `ShowRedisPitrInfo`
    - `RestoreRedisPitr`
    - `StopBackup`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK KMS

- _接口版本_
  - V2
- _新增特性_
  - 支持接口`AssociateAlias`、`ListAliases`、`CreateAlias`、`DeleteAlias`
- _解决问题_
  - 无
- _特性变更_
  - **ListSupportRegions**
    - 请求参数变更
      - `+ limit`
      - `+ offset`

### HuaweiCloud SDK Live

- _接口版本_
  - V2
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListSingleStreamDetail**
    - 响应参数变更
      - `- audio_framerate`

### HuaweiCloud SDK OCR

- _接口版本_
  - V1
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **RecognizeGeneralText**
    - 请求参数变更
      - `+ pdf_page_number`

### HuaweiCloud SDK RDS

- _接口版本_
  - V3
- _新增特性_
  - 支持接口`CopyDatabase`、`DeleteMsdtcLocalHost`
- _解决问题_
  - 无
- _特性变更_
  - **ListFlavorsResize**
    - 响应参数变更
      - `* flavor_groups.compute_flavors: object<ComputeFlavor> -> list<ComputeFlavor>`

### HuaweiCloud SDK VOD

- _接口版本_
  - V1
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListTopStatistics**
    - 响应参数变更
      - `+ top_urls.duration_ms`
  - **ListAssetList**
    - 响应参数变更
      - `+ assets.duration_ms`
  - **ModifySubtitle**
    - 请求参数变更
      - `+ repackage_mode`
      - `+ delete_mode`
  - **ShowTakeOverAssetDetails**
    - 响应参数变更
      - `+ base_info.meta_data.duration_ms`
  - **PublishAssets**
    - 响应参数变更
      - `+ asset_info_array.base_info.meta_data.duration_ms`
  - **UnpublishAssets**
    - 响应参数变更
      - `+ asset_info_array.base_info.meta_data.duration_ms`
  - **ShowAssetMeta**
    - 响应参数变更
      - `+ asset_info_array.base_info.meta_data.duration_ms`
  - **ShowAssetDetail**
    - 响应参数变更
      - `+ base_info.meta_data.duration_ms`
  - **ShowTakeOverTaskDetails**
    - 响应参数变更
      - `+ assets.base_info.meta_data.duration_ms`

# 3.1.111 2024-11-21

### HuaweiCloud SDK DDS

- _接口版本_
  - V3
- _新增特性_
  - 支持以下接口：
    - `ValidateConfigurationName`
    - `ShowInstanceConfigurationModifyHistory`
    - `SetAutoEnlargePolicies`
    - `BatchDeleteBackup`
    - `ShowAutoEnlargePolicy`
    - `ListScheduledTasks`
    - `CancelScheduledTask`
    - `BatchUpgradeDatabaseVersion`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK EVS

- _接口版本_
  - V2
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - 移除接口`ChangeVolumeChargeMode`、`UnsubscribePostpaidVolume`
  - **RetypeVolume**
    - 请求参数变更
      - `+ os-retype.iops`
      - `+ os-retype.throughput`

### HuaweiCloud SDK GaussDBforNoSQL

- _接口版本_
  - V3
- _新增特性_
  - 支持以下接口：
    - `ShowBackupPolicies`
    - `ApplyConfigurationToInstances`
    - `UpdateInstanceConfigurations`
    - `CreateDbCacheMapping`
    - `DeleteDbCacheMapping`
    - `UpdateDbCacheRule`
    - `CreateDbCacheRule`
    - `DeleteDbCacheRule`
    - `ListDbCacheMappings`
    - `ListDbCacheRules`
    - `ShowSecondLevelMonitoringStatus`
    - `SwitchSecondLevelMonitoring`
    - `SetInstanceDataDump`
    - `ListInstanceMaintenanceWindow`
    - `ModifyInstanceMaintenanceWindow`
    - `ListNosqlTaskList`
    - `CancelInstanceScheduleWindow`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK GaussDBforopenGauss

- _接口版本_
  - V3
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **CreateLimitTask**
    - 响应参数变更
      - `+ job_id`
      - `- jobId`
      - `* key_words: list<string> -> string`
  - **UpdateLimitTask**
    - 响应参数变更
      - `+ job_id`
      - `- jobId`

# 3.1.110 2024-11-14

### HuaweiCloud SDK DDS

- _接口版本_
  - V3
- _新增特性_
  - 支持以下接口：
    - `ValidateConfigurationName`
    - `ShowInstanceConfigurationModifyHistory`
    - `SetAutoEnlargePolicies`
    - `BatchDeleteBackup`
    - `ShowAutoEnlargePolicy`
    - `ListScheduledTasks`
    - `CancelScheduledTask`
    - `BatchUpgradeDatabaseVersion`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK EVS

- _接口版本_
  - V2
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - 移除接口`ChangeVolumeChargeMode`、`UnsubscribePostpaidVolume`
  - **RetypeVolume**
    - 请求参数变更
      - `+ os-retype.iops`
      - `+ os-retype.throughput`

### HuaweiCloud SDK GaussDBforNoSQL

- _接口版本_
  - V3
- _新增特性_
  - 支持以下接口：
    - `ShowBackupPolicies`
    - `ApplyConfigurationToInstances`
    - `UpdateInstanceConfigurations`
    - `CreateDbCacheMapping`
    - `DeleteDbCacheMapping`
    - `UpdateDbCacheRule`
    - `CreateDbCacheRule`
    - `DeleteDbCacheRule`
    - `ListDbCacheMappings`
    - `ListDbCacheRules`
    - `ShowSecondLevelMonitoringStatus`
    - `SwitchSecondLevelMonitoring`
    - `SetInstanceDataDump`
    - `ListInstanceMaintenanceWindow`
    - `ModifyInstanceMaintenanceWindow`
    - `ListNosqlTaskList`
    - `CancelInstanceScheduleWindow`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK GaussDBforopenGauss

- _接口版本_
  - V3
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **CreateLimitTask**
    - 响应参数变更
      - `+ job_id`
      - `- jobId`
      - `* key_words: list<string> -> string`
  - **UpdateLimitTask**
    - 响应参数变更
      - `+ job_id`
      - `- jobId`

# 3.1.109 2024-11-07

### HuaweiCloud SDK AAD

- _接口版本_
  - V2
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **UpgradeInstanceSpec**
    - 请求参数变更
      - `+ upgrade_data.elastic_service_bandwidth_type`
      - `+ upgrade_data.elastic_service_bandwidth`

### HuaweiCloud SDK GaussDBforNoSQL

- _接口版本_
  - V3
- _新增特性_
  - 支持接口`BatchUpgradeDatabaseVersion`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK KVS

- _接口版本_
  - V1
- _新增特性_
  - 支持接口`CheckHealth`
- _解决问题_
  - 无
- _特性变更_
  - **CreateTable**
    - 请求参数变更
      - `+ ttl_options`
  - **DescribeTable**
    - 响应参数变更
      - `+ ttl_options`

### HuaweiCloud SDK MPC

- _接口版本_
  - V1
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **CreateExtractTask**
    - 请求参数变更
      - `+ encryption`
  - **CreateTranscodingTask**
    - 请求参数变更
      - `+ av_parameters.video.crf`
      - `+ av_parameters.video.max_bitrate`
  - **ListTranscodingTask**
    - 响应参数变更
      - `+ task_array.av_parameters.video.crf`
      - `+ task_array.av_parameters.video.max_bitrate`
  - **CreateEditingJob**
    - 请求参数变更
      - `+ concats.av_parameters.video.crf`
      - `+ concats.av_parameters.video.max_bitrate`
  - **ListEditingJob**
    - 响应参数变更
      - `+ jobs.edit_task_req.concats.av_parameters.video.crf`
      - `+ jobs.edit_task_req.concats.av_parameters.video.max_bitrate`

# 3.1.108 2024-10-31

### HuaweiCloud SDK CFW

- _接口版本_
  - V1
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ChangeEastWestFirewallStatus**
    - 响应参数变更
      - `- trace_id`
      - `* data: object -> object<ChangeEastWestFirewallStatusResponseData>`
  - **AddServiceSet**
    - 响应参数变更
      - `+ data.name`
      - `* data: object -> object<ServiceSetId>`
  - **ListJob**
    - 响应参数变更
      - `- error_msg`
      - `- error_code`
      - `* data: object -> object<GetCreateFirewallJobResponseData>`
  - **ListAddressSets**
    - 请求参数变更
      - `+ address_type: enum value [0,1]`
  - **BatchUpdateAclRuleActions**
    - 请求参数变更
      - `+ fw_instance_id`
  - **ListDnsServers**
    - 请求参数变更
      - `* fw_instance_id: required -> optional`
  - **ChangeIpsSwitchStatus**
    - 请求参数变更
      - `- X-Language`
      - `- ips_type: enum value [1]`
  - **UpdateAclRuleOrder**
    - 响应参数变更
      - `- data.name`
      - `* data: object<RuleId> -> object<OrderRuleId>`
  - **AddBlackWhiteList**
    - 响应参数变更
      - `* data: object<IdObject> -> object<BlackWhiteListId>`
  - **UpdateBlackWhiteList**
    - 响应参数变更
      - `* data: object<IdObject> -> object<BlackWhiteListId>`
  - **DeleteBlackWhiteList**
    - 响应参数变更
      - `* data: object<IdObject> -> object<BlackWhiteListId>`
  - **UpdateServiceSet**
    - 响应参数变更
      - `+ data.name`
      - `* data: object -> object<ServiceSetId>`
  - **DeleteServiceSet**
    - 响应参数变更
      - `* data: object<IdObject> -> object<ServiceSetId>`
  - **DeleteServiceItem**
    - 响应参数变更
      - `* data: object<IdObject> -> object<DeleteServiceItemResponseBodyData>`
  - **ListEipCount**
    - 响应参数变更
      - `- data.object_id`
  - **ChangeEipStatus**
    - 响应参数变更
      - `+ data.fail_eip_list`
  - **DeleteAddressItem**
    - 响应参数变更
      - `* data: object<IdObject> -> object<AddressItemId>`
  - **AddAddressSet**
    - 请求参数变更
      - `- address_type: enum value [0,1]`
    - 响应参数变更
      - `* data: object<IdObject> -> object<AddressSetId>`
  - **ListAddressSetDetail**
    - 响应参数变更
      - `- data.address_type: enum value [0,1]`
  - **UpdateAddressSet**
    - 响应参数变更
      - `+ data.name`
  - **DeleteAddressSet**
    - 响应参数变更
      - `* data: object<IdObject> -> object<AddressSetId>`
  - **AddDomainSet**
    - 请求参数变更
      - `* fw_instance_id: optional -> required`
  - **DeleteDomains**
    - 请求参数变更
      - `+ fw_instance_id`
  - **ListCaptureTask**
    - 请求参数变更
      - `* fw_instance_id: optional -> required`
    - 响应参数变更
      - `* data: list<HttpQueryCaptureTaskResponseData> -> object<HttpQueryCaptureTaskResponseData>`
  - **CreateCaptureTask**
    - 响应参数变更
      - `* data: object<IdObject> -> object<CaptureTaskId>`
  - **DeleteCaptureTask**
    - 响应参数变更
      - `* data: object<IdObject> -> object<CaptureTaskId>`
  - **CancelCaptureTask**
    - 响应参数变更
      - `* data: object<IdObject> -> object<CaptureTaskId>`
  - **ListEastWestFirewall**
    - 响应参数变更
      - `- data.er_associated_subnet`
      - `- data.ew_vpc_route_limit`
      - `- data.firewall_associated_subnets.status`
      - `- data.er.state`
      - `- data.er.enterprise_project_id`
      - `- data.er.enable_ipv6`
      - `- data.inspection_vpc.status`
  - **AddAclRule**
    - 请求参数变更
      - `- rules.applicationsJsonString`
  - **UpdateAclRule**
    - 请求参数变更
      - `- sequence`
      - `- applicationsJsonString`
  - **ListAclRules**
    - 请求参数变更
      - `+ address_type: enum value [2]`
  - **ListEips**
    - 请求参数变更
      - `+ status: enum value [null,0,1]`
      - `+ sync: enum value [0,1]`
    - 响应参数变更
      - `- data.records.owner`
  - **AddAddressItem**
    - 请求参数变更
      - `- address_items.name`
    - 响应参数变更
      - `- data.items.name`
      - `* data.items: list<IdObject> -> list<AddressItemIdWithoutName>`
  - **ListDomains**
    - 响应参数变更
      - `- data.records.dns_ips`
  - **ListFirewallDetail**
    - 请求参数变更
      - `+ service_type: enum value [0,1]`
    - 响应参数变更
      - `- data.records.status: enum value [-1,0,1,2,3,4,5,6,7,8,9,10,11]`
  - **ListDomainSets**
    - 响应参数变更
      - `- data.records.message`

### HuaweiCloud SDK DRS

- _接口版本_
  - V5
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListAsyncJobDetail**
    - 响应参数变更
      - `- jobs.compare_result.data_compare_task_list.dynamic_compare_delay`
      - `* jobs.compare_result.data_compare_task_list.report_remain_seconds: string -> int64`
  - **ShowJobDetail**
    - 响应参数变更
      - `- job.compare_result.data_compare_task_list.dynamic_compare_delay`
      - `* job.compare_result.data_compare_task_list.report_remain_seconds: string -> int64`

### HuaweiCloud SDK GaussDBforopenGauss

- _接口版本_
  - V3
- _新增特性_
  - 支持以下接口：
    - `UpdateMysqlCompatibility`
    - `StartMysqlCompatibility`
    - `StopInstance`
    - `ListLimitTask`
    - `CreateLimitTask`
    - `ShowLimitTask`
    - `UpdateLimitTask`
    - `DeleteLimitTask`
    - `ListNodeLimitSqlModel`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK KVS

- _接口版本_
  - V1
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **UpdateKv**
    - 请求参数变更
      - `+ update_fields.insert`
  - **ScanKv**
    - 响应参数变更
      - `* returned_count: int32 -> int64`
  - **ScanSkeyKv**
    - 响应参数变更
      - `* returned_count: int32 -> int64`

### HuaweiCloud SDK LTS

- _接口版本_
  - V2
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListLogStreams**
    - 响应参数变更
      - `+ log_streams.log_stream_name_alias`
      - `+ log_streams.whether_log_storage`
      - `+ log_streams.hot_cold_separation`
      - `+ log_streams.auth_web_tracking`
      - `+ log_streams.ttl_in_days`
      - `+ log_streams.hot_storage_days`
  - **ListLogStream**
    - 响应参数变更
      - `+ log_streams.log_stream_name_alias`
      - `+ log_streams.whether_log_storage`
      - `+ log_streams.hot_cold_separation`
      - `+ log_streams.auth_web_tracking`
      - `+ log_streams.ttl_in_days`
      - `+ log_streams.hot_storage_days`
  - **ListLogs**
    - 响应参数变更
      - `* analysisLogs: list<map<string, string>> -> list<object>`
  - **ShowNotificationTemplate**
    - 响应参数变更
      - `+ templates.topic`
  - **ListActiveOrHistoryAlarms**
    - 响应参数变更
      - `+ events.metadata.log_group_name`
      - `+ events.metadata.log_stream_name`
  - **DeleteActiveAlarms**
    - 请求参数变更
      - `+ events.metadata.log_group_name`
      - `+ events.metadata.log_stream_name`
  - **UpdateNotificationTemplate**
    - 请求参数变更
      - `+ templates.topic`
    - 响应参数变更
      - `+ templates.topic`
  - **CreateNotificationTemplate**
    - 请求参数变更
      - `+ templates.topic`
    - 响应参数变更
      - `+ templates.topic`
  - **ListNotificationTemplates**
    - 响应参数变更
      - `+ results.templates.topic`
  - **ListAccessConfig**
    - 响应参数变更
      - `+ processor_type`
      - `+ component_id`
      - `+ environment_id`
      - `+ processors`
      - `+ application_id`
      - `+ encoding_format`
      - `+ demo_log`
      - `+ incremental_collect`
      - `+ demo_fields`
      - `+ result.encoding_format`
      - `+ result.incremental_collect`
      - `+ result.processor_type`
      - `+ result.demo_log`
      - `+ result.demo_fields`
      - `+ result.processors`
      - `+ result.application_id`
      - `+ result.environment_id`
      - `+ result.component_id`
  - **UpdateAccessConfig**
    - 请求参数变更
      - `+ incremental_collect`
      - `+ encoding_format`
      - `+ processor_type`
      - `+ demo_log`
      - `+ demo_fields`
      - `+ processors`
      - `+ application_id`
      - `+ environment_id`
      - `+ component_id`
    - 响应参数变更
      - `+ processor_type`
      - `+ component_id`
      - `+ environment_id`
      - `+ processors`
      - `+ application_id`
      - `+ encoding_format`
      - `+ demo_log`
      - `+ incremental_collect`
      - `+ demo_fields`
  - **CreateAccessConfig**
    - 请求参数变更
      - `+ incremental_collect`
      - `+ encoding_format`
      - `+ processor_type`
      - `+ demo_log`
      - `+ demo_fields`
      - `+ processors`
      - `+ application_id`
      - `+ environment_id`
      - `+ component_id`
      - `+ access_config_type_source`
    - 响应参数变更
      - `+ processor_type`
      - `+ component_id`
      - `+ environment_id`
      - `+ processors`
      - `+ application_id`
      - `+ encoding_format`
      - `+ demo_log`
      - `+ incremental_collect`
      - `+ demo_fields`
  - **DeleteAccessConfig**
    - 响应参数变更
      - `+ processor_type`
      - `+ component_id`
      - `+ environment_id`
      - `+ processors`
      - `+ application_id`
      - `+ encoding_format`
      - `+ demo_log`
      - `+ incremental_collect`
      - `+ demo_fields`
      - `+ result.encoding_format`
      - `+ result.incremental_collect`
      - `+ result.processor_type`
      - `+ result.demo_log`
      - `+ result.demo_fields`
      - `+ result.processors`
      - `+ result.application_id`
      - `+ result.environment_id`
      - `+ result.component_id`

### HuaweiCloud SDK OCR

- _接口版本_
  - V1
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **RecognizeSmartDocumentRecognizer**
    - 请求参数变更
      - `+ language`

### HuaweiCloud SDK RDS

- _接口版本_
  - V3
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListDbUsers**
    - 响应参数变更
      - `+ users.databases`
      - `+ users.hosts`
  - **ListSqlserverDbUsers**
    - 响应参数变更
      - `+ users.databases`
      - `+ users.hosts`

### HuaweiCloud SDK VOD

- _接口版本_
  - V1
- _新增特性_
  - 支持接口`ShowStorageModeType`、`UpdateStorageModeType`
- _解决问题_
  - 无
- _特性变更_
  - 无

# 3.1.107 2024-10-24

### HuaweiCloud SDK DRS

- _接口版本_
  - V5
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListAsyncJobDetail**
    - 响应参数变更
      - `+ jobs.compare_result.data_compare_task_list.options`
      - `+ jobs.compare_result.data_compare_task_list.dynamic_compare_delay`
  - **ShowJobDetail**
    - 响应参数变更
      - `+ job.compare_result.data_compare_task_list.options`
      - `+ job.compare_result.data_compare_task_list.dynamic_compare_delay`

### HuaweiCloud SDK GaussDB

- _接口版本_
  - V3
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **CheckTableConfig**
    - 请求参数变更
      - `+ target_database_name`
      - `+ is_create_task`

### HuaweiCloud SDK RAM

- _接口版本_
  - V1
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **EnableOrganizationShare**
    - 请求参数变更
      - `+ X-Security-Token`
  - **DisableOrganizationShare**
    - 请求参数变更
      - `+ X-Security-Token`
  - **ShowOrganizationShare**
    - 请求参数变更
      - `+ X-Security-Token`
  - **AssociateResourceSharePermission**
    - 请求参数变更
      - `+ X-Security-Token`
  - **DisassociateResourceSharePermission**
    - 请求参数变更
      - `+ X-Security-Token`
  - **AcceptResourceShareInvitation**
    - 请求参数变更
      - `+ X-Security-Token`
  - **RejectResourceShareInvitation**
    - 请求参数变更
      - `+ X-Security-Token`
  - **SearchResourceShareInvitation**
    - 请求参数变更
      - `+ X-Security-Token`
  - **ListPermissions**
    - 请求参数变更
      - `+ X-Security-Token`
  - **ShowPermission**
    - 请求参数变更
      - `+ X-Security-Token`
  - **AssociateResourceShare**
    - 请求参数变更
      - `+ X-Security-Token`
  - **DisassociateResourceShare**
    - 请求参数变更
      - `+ X-Security-Token`
  - **SearchResourceShareAssociations**
    - 请求参数变更
      - `+ X-Security-Token`
  - **ListResourceShareTags**
    - 请求参数变更
      - `+ X-Security-Token`
  - **SearchResourceShareCountByTags**
    - 请求参数变更
      - `+ X-Security-Token`
  - **BatchCreateResourceShareTags**
    - 请求参数变更
      - `+ X-Security-Token`
  - **BatchDeleteResourceShareTags**
    - 请求参数变更
      - `+ X-Security-Token`
  - **ListResourceSharePermissions**
    - 请求参数变更
      - `+ X-Security-Token`
  - **SearchSharedResources**
    - 请求参数变更
      - `+ X-Security-Token`
  - **SearchSharedPrincipals**
    - 请求参数变更
      - `+ X-Security-Token`
  - **ListResourceTypes**
    - 请求参数变更
      - `+ X-Security-Token`
  - **ListPermissionVersions**
    - 请求参数变更
      - `+ X-Security-Token`
  - **CreateResourceShare**
    - 请求参数变更
      - `+ X-Security-Token`
  - **SearchResourceShares**
    - 请求参数变更
      - `+ X-Security-Token`
  - **DeleteResourceShare**
    - 请求参数变更
      - `+ X-Security-Token`
  - **UpdateResourceShare**
    - 请求参数变更
      - `+ X-Security-Token`
  - **ListResourceSharesByTags**
    - 请求参数变更
      - `+ X-Security-Token`
  - **ListQuota**
    - 请求参数变更
      - `+ X-Security-Token`

# 3.1.106 2024-10-17

### HuaweiCloud SDK CDN

- _接口版本_
  - V2
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **CreateDomain**
    - 请求参数变更
      - `+ domain.sources.http_port`
      - `+ domain.sources.https_port`

### HuaweiCloud SDK DBSS

- _接口版本_
  - V1
- _新增特性_
  - 支持以下接口：
    - `AddAuditDatabase`
    - `AddRdsDatabase`
    - `ListRdsDatabases`
    - `DeleteAuditDatabase`
    - `SwitchAuditDatabase`
    - `DownloadAuditAgent`
    - `DeleteAuditAgent`
    - `ListAuditSummaryInfos`
    - `StartAuditInstance`
    - `StopAuditInstance`
    - `RebootAuditInstance`
    - `UpdateAuditInstance`
    - `ListAuditAlarmLog`
    - `ListAuditSqls`
    - `ListAuditAgent`
    - `AddAuditAgent`
    - `DeleteInstances`
- _解决问题_
  - 无
- _特性变更_
  - **ShowAuditQuota**
    - 响应参数变更
      - `- quota`
  - **ListAuditRuleRisks**
    - 请求参数变更
      - `+ risk_levels: enum value [LOW,MEDIUM,HIGH,NO_RISK]`
    - 响应参数变更
      - `+ rules.rule_type`
  - **ListProjectResourceTags**
    - 请求参数变更
      - `+ resource_type: enum value [auditInstance]`
  - **BatchAddResourceTag**
    - 请求参数变更
      - `+ resource_type: enum value [auditInstance]`
      - `* tags: list<KeyValueBean> -> list<object>`
      - `* sys_tags: list<KeyValueBean> -> list<object>`
  - **BatchDeleteResourceTag**
    - 请求参数变更
      - `+ resource_type: enum value [auditInstance]`
      - `* tags: list<KeyValueBean> -> list<object>`
      - `* sys_tags: list<KeyValueBean> -> list<object>`
      - `* body: object<ResourceTagRequest> -> object<ResourceTagDeleteRequest>`
  - **UpdateAuditSecurityGroup**
    - 请求参数变更
      - `+ instance_id`
      - `- resource_id`
  - **SwitchAgent**
    - 请求参数变更
      - `+ status: enum value [0,1]`
  - **ListEcsSpecification**
    - 响应参数变更
      - `+ specification.az_type`
  - **ListAuditInstanceJobs**
    - 响应参数变更
      - `+ jobs.resource_id`
  - **ListAuditOperateLogs**
    - 请求参数变更
      - `+ action`
      - `- operate_name`
      - `+ result: enum value [success,fail]`
      - `+ time.time_range: enum value [HALF_HOUR, HOUR, THREE_HOUR, TWELVE_HOUR, DAY, WEEK, MONTH]`
  - **ListResourceInstanceByTag**
    - 请求参数变更
      - `+ resource_type: enum value [auditInstance]`
  - **CountResourceInstanceByTag**
    - 请求参数变更
      - `+ resource_type: enum value [auditInstance]`
  - **ListAuditDatabases**
    - 响应参数变更
      - `+ databases.database.rds_audit_switch_mismatch`
      - `+ databases.database.rds_id`
      - `+ databases.database.rds_obj_info`
      - `+ databases.database.dws_obj_info`
      - `+ databases.database.clouddb_obj_info`

### HuaweiCloud SDK ECS

- _接口版本_
  - V2
- _新增特性_
  - 支持接口`NovaShowFlavorExtraSpecs`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK KVS

- _接口版本_
  - V1
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ScanSkeyKv**
    - 请求参数变更
      - `+ return_count_only`

# 3.1.105 2024-10-10

### HuaweiCloud SDK AAD

- _接口版本_
  - V1
- _新增特性_
  - 支持接口`AssociateIpToPolicyAndPackage`、`DisassociateIpFromPolicyAndPackage`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK DRS

- _接口版本_
  - V3
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **BatchListJobDetails**
    - 响应参数变更
      - `* results.node_num: string -> int32`

### HuaweiCloud SDK DRS

- _接口版本_
  - V5
- _新增特性_
  - 支持以下接口：
    - `ListReplicationJobs`
    - `CreateReplicationJob`
    - `ShowReplicationJob`
    - `UpdateReplicationJob`
    - `DeleteReplicationJob`
    - `ChangeToPeriod`
    - `ListConnections`
    - `CreateConnection`
    - `ModifyConnection`
    - `DeleteConnection`
    - `ListJobDdls`
    - `CleanAlarms`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK EVS

- _接口版本_
  - V2
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ShowVolume**
    - 响应参数变更
      - `- volume.snapshot_policy_id`
  - **ListVolumes**
    - 请求参数变更
      - `- snapshot_policy_id`
    - 响应参数变更
      - `- volumes.snapshot_policy_id`

### HuaweiCloud SDK GaussDB

- _接口版本_
  - V3
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **CreateStarrocksInstance**
    - 请求参数变更
      - `+ security_group_id`
  - **CheckStarrocksParams**
    - 响应参数变更
      - `+ differences`
      - `- check_starrocks_params_responce`

### HuaweiCloud SDK KVS

- _接口版本_
  - V1
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **CreateTable**
    - 请求参数变更
      - `+ bill_mode`
      - `+ provisioned_throughput`
      - `+ global_secondary_index_schema.provisioned_throughput`
      - `- pre_split_key_options.hash_count`
    - 响应参数变更
      - `+ bill_mode`
      - `+ provisioned_throughput`
      - `+ global_secondary_index_schema.provisioned_throughput`
      - `- pre_split_key_options.hash_count`
  - **DescribeTable**
    - 响应参数变更
      - `+ global_secondary_index_schema.provisioned_throughput`

### HuaweiCloud SDK RDS

- _接口版本_
  - V3
- _新增特性_
  - 支持接口`ShowRecoveryTimeWindow`、`UpdateToPeriod`
- _解决问题_
  - 无
- _特性变更_
  - 无

# 3.1.104 2024-09-26

### HuaweiCloud SDK DDS

- _接口版本_
  - V3
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ResizeInstance**
    - 请求参数变更
      - `+ resize.target_type: enum value [config,readonly]`

### HuaweiCloud SDK Live

- _接口版本_
  - V1
- _新增特性_
  - 支持以下接口：
    - `ListHarvestTask`
    - `ModifyHarvestTask`
    - `CreateHarvestTask`
    - `DeleteHarvestTask`
    - `UpdateHarvestJobStatus`
- _解决问题_
  - 无
- _特性变更_
  - 无

# 3.1.103 2024-09-23

### HuaweiCloud SDK CDN

- _接口版本_
  - V2
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **UpdateDomainMultiCertificates**
    - 请求参数变更
      - `+ https.scm_certificate_id`
  - **ShowDomainFullConfig**
    - 响应参数变更
      - `+ configs.user_agent_filter.include_empty`
      - `+ configs.https.scm_certificate_id`
      - `+ configs.https.certificates.certificate_source`
      - `+ configs.https.certificates.scm_certificate_id`
  - **UpdateDomainFullConfig**
    - 请求参数变更
      - `+ configs.user_agent_filter.include_empty`
      - `+ configs.https.scm_certificate_id`
      - `+ configs.https.certificates.certificate_source`
      - `+ configs.https.certificates.scm_certificate_id`

### HuaweiCloud SDK DDS

- _接口版本_
  - V3
- _新增特性_
  - 支持接口`ListDatabases`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK ECS

- _接口版本_
  - V2
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListServersDetails**
    - 请求参数变更
      - `+ marker`

### HuaweiCloud SDK EVS

- _接口版本_
  - V2
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ShowVolume**
    - 响应参数变更
      - `+ volume.snapshot_policy_id`
  - **ListVolumes**
    - 请求参数变更
      - `+ snapshot_policy_id`
    - 响应参数变更
      - `+ volumes.snapshot_policy_id`

### HuaweiCloud SDK Organizations

- _接口版本_
  - V1
- _新增特性_
  - 支持接口`UpdateAccount`
- _解决问题_
  - 无
- _特性变更_
  - **LeaveOrganization**
    - 请求参数变更
      - `+ X-Security-Token`
  - **CloseAccount**
    - 请求参数变更
      - `+ X-Security-Token`
  - **RemoveAccount**
    - 请求参数变更
      - `+ X-Security-Token`
  - **MoveAccount**
    - 请求参数变更
      - `+ X-Security-Token`
  - **EnableTrustedService**
    - 请求参数变更
      - `+ X-Security-Token`
  - **DisableTrustedService**
    - 请求参数变更
      - `+ X-Security-Token`
  - **RegisterDelegatedAdministrator**
    - 请求参数变更
      - `+ X-Security-Token`
  - **DeregisterDelegatedAdministrator**
    - 请求参数变更
      - `+ X-Security-Token`
  - **AttachPolicy**
    - 请求参数变更
      - `+ X-Security-Token`
  - **DetachPolicy**
    - 请求参数变更
      - `+ X-Security-Token`
  - **ShowEffectivePolicies**
    - 请求参数变更
      - `+ X-Security-Token`
  - **UntagResource**
    - 请求参数变更
      - `+ X-Security-Token`
  - **ListServices**
    - 请求参数变更
      - `+ X-Security-Token`
  - **DeleteOrganization**
    - 请求参数变更
      - `+ X-Security-Token`
  - **ShowOrganization**
    - 请求参数变更
      - `+ X-Security-Token`
  - **CreateOrganization**
    - 请求参数变更
      - `+ X-Security-Token`
  - **ListOrganizationalUnits**
    - 请求参数变更
      - `+ X-Security-Token`
  - **CreateOrganizationalUnit**
    - 请求参数变更
      - `+ X-Security-Token`
  - **DeleteOrganizationalUnit**
    - 请求参数变更
      - `+ X-Security-Token`
  - **ShowOrganizationalUnit**
    - 请求参数变更
      - `+ X-Security-Token`
  - **UpdateOrganizationalUnit**
    - 请求参数变更
      - `+ X-Security-Token`
      - `- X-Auth-Token`
  - **ListAccounts**
    - 请求参数变更
      - `+ X-Security-Token`
      - `+ with_register_contact_info`
    - 响应参数变更
      - `+ accounts.mobile_phone`
      - `+ accounts.intl_number_prefix`
      - `+ accounts.email`
      - `+ accounts.description`
  - **CreateAccount**
    - 请求参数变更
      - `+ X-Security-Token`
      - `+ description`
  - **ShowAccount**
    - 请求参数变更
      - `+ X-Security-Token`
      - `+ with_register_contact_info`
    - 响应参数变更
      - `+ account.mobile_phone`
      - `+ account.intl_number_prefix`
      - `+ account.email`
      - `+ account.description`
  - **ListCreateAccountStatuses**
    - 请求参数变更
      - `+ X-Security-Token`
  - **ShowCreateAccountStatus**
    - 请求参数变更
      - `+ X-Security-Token`
  - **ListCloseAccountStatuses**
    - 请求参数变更
      - `+ X-Security-Token`
  - **ListTrustedServices**
    - 请求参数变更
      - `+ X-Security-Token`
  - **ListDelegatedServices**
    - 请求参数变更
      - `+ X-Security-Token`
  - **ListDelegatedAdministrators**
    - 请求参数变更
      - `+ X-Security-Token`
  - **ListEntitiesForPolicy**
    - 请求参数变更
      - `+ X-Security-Token`
  - **ListTagsForResource**
    - 请求参数变更
      - `+ X-Security-Token`
  - **TagResource**
    - 请求参数变更
      - `+ X-Security-Token`
  - **ListEntities**
    - 请求参数变更
      - `+ X-Security-Token`
  - **ListTagPolicyServices**
    - 请求参数变更
      - `+ X-Security-Token`
  - **ListTagResources**
    - 请求参数变更
      - `+ X-Security-Token`
  - **CreateTagResource**
    - 请求参数变更
      - `+ X-Security-Token`
  - **DeleteTagResource**
    - 请求参数变更
      - `+ X-Security-Token`
  - **ShowResourceInstancesCount**
    - 请求参数变更
      - `+ X-Security-Token`
  - **ListResourceTags**
    - 请求参数变更
      - `+ X-Security-Token`
  - **ListRoots**
    - 请求参数变更
      - `+ X-Security-Token`
  - **InviteAccount**
    - 请求参数变更
      - `+ X-Security-Token`
    - 响应参数变更
      - `+ handshake.expired_at`
  - **ShowHandshake**
    - 请求参数变更
      - `+ X-Security-Token`
    - 响应参数变更
      - `+ handshake.expired_at`
  - **AcceptHandshake**
    - 请求参数变更
      - `+ X-Security-Token`
    - 响应参数变更
      - `+ handshake.expired_at`
  - **DeclineHandshake**
    - 请求参数变更
      - `+ X-Security-Token`
    - 响应参数变更
      - `+ handshake.expired_at`
  - **CancelHandshake**
    - 请求参数变更
      - `+ X-Security-Token`
    - 响应参数变更
      - `+ handshake.expired_at`
  - **ListReceivedHandshakes**
    - 请求参数变更
      - `+ X-Security-Token`
    - 响应参数变更
      - `+ handshakes.expired_at`
  - **ListHandshakes**
    - 请求参数变更
      - `+ X-Security-Token`
    - 响应参数变更
      - `+ handshakes.expired_at`
  - **ListPolicies**
    - 请求参数变更
      - `+ X-Security-Token`
  - **CreatePolicy**
    - 请求参数变更
      - `+ X-Security-Token`
  - **DeletePolicy**
    - 请求参数变更
      - `+ X-Security-Token`
  - **ShowPolicy**
    - 请求参数变更
      - `+ X-Security-Token`
  - **UpdatePolicy**
    - 请求参数变更
      - `+ X-Security-Token`
      - `- X-Auth-Token`
  - **EnablePolicyType**
    - 请求参数变更
      - `+ X-Security-Token`
  - **DisablePolicyType**
    - 请求参数变更
      - `+ X-Security-Token`
  - **ListResourceInstances**
    - 请求参数变更
      - `+ X-Security-Token`
  - **ListQuotas**
    - 请求参数变更
      - `+ X-Security-Token`

# 3.1.102 2024-09-12

### HuaweiCloud SDK KVS

- _接口版本_
  - V1
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ScanKv**
    - 请求参数变更
      - `+ sample_segments_count`
      - `+ return_count_only`
    - 响应参数变更
      - `+ returned_segment_items`

# 3.1.101 2024-09-05

### HuaweiCloud SDK ECS

- _接口版本_
  - V2
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListCloudServers**
    - 请求参数变更
      - `+ marker`
    - 响应参数变更
      - `- count`
      - `+ servers.launched_at`
      - `- servers.launched`
      - `+ servers.security_groups.id`
      - `+ servers.volumes_attached.size`
      - `+ servers.flavor.gpus`
      - `+ servers.flavor.asic_accelerators`
      - `- servers.flavor.root_gb`
      - `- servers.flavor.ephemeral_gb`
      - `- servers.flavor.extra_specs`

### HuaweiCloud SDK Live

- _接口版本_
  - V1
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ShowDomainHttpsCert**
    - 响应参数变更
      - `+ tls_certificate`
      - `+ gm_certificate`
  - **UpdateDomainHttpsCert**
    - 请求参数变更
      - `+ tls_certificate`
      - `+ gm_certificate`

### HuaweiCloud SDK VPC

- _接口版本_
  - V3
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **CreateSubNetworkInterface**
    - 请求参数变更
      - `- sub_network_interface.instance_id`
      - `- sub_network_interface.instance_type`
      - `- sub_network_interface.tags`
  - **BatchCreateSubNetworkInterface**
    - 请求参数变更
      - `- sub_network_interface.instance_id`
      - `- sub_network_interface.instance_type`
      - `- sub_network_interface.tags`

# 3.1.100 2024-08-29

### HuaweiCloud SDK ECS

- _接口版本_
  - V2
- _新增特性_
  - 支持接口`ListCloudServers`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK EIP

- _接口版本_
  - V3
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListCommonPools**
    - 请求参数变更
      - `* fields: string -> list<string>`
  - **ListShareBandwidthTypes**
    - 请求参数变更
      - `* fields: string -> list<string>`
  - **ListTenantVpcIgws**
    - 请求参数变更
      - `* fields: string -> list<string>`
  - **CreateTenantVpcIgw**
    - 请求参数变更
      - `* fields: string -> list<string>`
  - **ShowInternalVpcIgw**
    - 请求参数变更
      - `* fields: string -> list<string>`
  - **UpdateTenantVpcIgw**
    - 请求参数变更
      - `* fields: string -> list<string>`
  - **ListEipBandwidths**
    - 请求参数变更
      - `+ fields`
  - **ListBandwidth**
    - 请求参数变更
      - `+ fields`
  - **ListPublicipPool**
    - 请求参数变更
      - `* fields: string -> list<string>`
  - **ShowPublicipPool**
    - 请求参数变更
      - `* fields: string -> list<string>`
  - **ListProjectGeipBindings**
    - 请求参数变更
      - `* fields: string -> list<string>`

### HuaweiCloud SDK EVS

- _接口版本_
  - V2
- _新增特性_
  - 支持接口`RetypeVolume`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK GaussDBforopenGauss

- _接口版本_
  - V3
- _新增特性_
  - 支持接口`CreateGaussDbInstance`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK RDS

- _接口版本_
  - V3
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **CreateManualBackup**
    - 请求参数变更
      - `+ backup_database_individually`

### HuaweiCloud SDK VPC

- _接口版本_
  - V3
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **AddSecurityGroups**
    - 响应参数变更
      - `+ port.extra_dhcp_opts.opt_name`
      - `+ port.extra_dhcp_opts.opt_value`
      - `* port.extra_dhcp_opts: list<object> -> list<ExtraDhcpOpt>`
  - **RemoveSecurityGroups**
    - 响应参数变更
      - `+ port.extra_dhcp_opts.opt_name`
      - `+ port.extra_dhcp_opts.opt_value`
      - `* port.extra_dhcp_opts: list<object> -> list<ExtraDhcpOpt>`

# 3.1.99 2024-08-22

### HuaweiCloud SDK DRS

- _接口版本_
  - V5
- _新增特性_
  - 支持接口`UploadUserJdbcDriver`、`SyncUserJdbcDriver`、`ListUserJdbcDrivers`、`DeleteUserJdbcDriver`
- _解决问题_
  - 无
- _特性变更_
  - **CreateJob**
    - 请求参数变更
      - `+ job.base_info.engine_type: enum value [mysql-to-mysql]`
      - `+ job.source_endpoint.db_type: enum value [mysql]`
    - 响应参数变更
      - `+ is_clone_job`
      - `+ create_time`
      - `+ name`
      - `+ id`
      - `+ status`
      - `- job`
  - **BatchCreateJobsAsync**
    - 请求参数变更
      - `+ jobs.policy_config.is_create_table_with_index`
      - `+ jobs.base_info.engine_type: enum value [mysql-to-mysql]`
      - `+ jobs.source_endpoint.db_type: enum value [mysql]`
  - **ListAsyncJobDetail**
    - 响应参数变更
      - `+ jobs.status: enum value [CREATING,CREATE_FAILED,CONFIGURATION,STARTJOBING,WAITING_FOR_START,START_JOB_FAILED,PAUSING,FULL_TRANSFER_STARTED,FULL_TRANSFER_FAILED,FULL_TRANSFER_COMPLETE,INCRE_TRANSFER_STARTED,INCRE_TRANSFER_FAILED,RELEASE_RESOURCE_STARTED,RELEASE_RESOURCE_FAILED,RELEASE_RESOURCE_COMPLETE,REBUILD_NODE_STARTED,REBUILD_NODE_FAILED,CHANGE_JOB_STARTED,CHANGE_JOB_FAILED,DELETED,CHILD_TRANSFER_STARTING,CHILD_TRANSFER_STARTED,CHILD_TRANSFER_COMPLETE,CHILD_TRANSFER_FAILED,RELEASE_CHILD_TRANSFER_STARTED,RELEASE_CHILD_TRANSFER_COMPLETE,NODE_UPGRADE_START,NODE_UPGRADE_COMPLETE,NODE_UPGRADE_FAILED]`
      - `+ jobs.policy_config.is_create_table_with_index`
      - `+ jobs.base_info.engine_type: enum value [mysql-to-mysql]`
      - `+ jobs.source_endpoint.db_type: enum value [mysql]`
  - **UpdateBatchAsyncJobs**
    - 请求参数变更
      - `+ jobs.params.policy_config.is_create_table_with_index`
      - `+ jobs.params.base_info.engine_type: enum value [mysql-to-mysql]`
      - `+ jobs.params.source_endpoint.db_type: enum value [mysql]`
  - **ShowJobDetail**
    - 响应参数变更
      - `+ job.status: enum value [CREATING,CREATE_FAILED,CONFIGURATION,STARTJOBING,WAITING_FOR_START,START_JOB_FAILED,PAUSING,FULL_TRANSFER_STARTED,FULL_TRANSFER_FAILED,FULL_TRANSFER_COMPLETE,INCRE_TRANSFER_STARTED,INCRE_TRANSFER_FAILED,RELEASE_RESOURCE_STARTED,RELEASE_RESOURCE_FAILED,RELEASE_RESOURCE_COMPLETE,REBUILD_NODE_STARTED,REBUILD_NODE_FAILED,CHANGE_JOB_STARTED,CHANGE_JOB_FAILED,DELETED,CHILD_TRANSFER_STARTING,CHILD_TRANSFER_STARTED,CHILD_TRANSFER_COMPLETE,CHILD_TRANSFER_FAILED,RELEASE_CHILD_TRANSFER_STARTED,RELEASE_CHILD_TRANSFER_COMPLETE,NODE_UPGRADE_START,NODE_UPGRADE_COMPLETE,NODE_UPGRADE_FAILED]`
      - `+ job.policy_config.is_create_table_with_index`
      - `+ job.base_info.engine_type: enum value [mysql-to-mysql]`
      - `+ job.source_endpoint.db_type: enum value [mysql]`
  - **UpdateJob**
    - 请求参数变更
      - `+ job.params.policy_config.is_create_table_with_index`
      - `+ job.params.base_info.engine_type: enum value [mysql-to-mysql]`
      - `+ job.params.source_endpoint.db_type: enum value [mysql]`
  - **ExecuteJobAction**
    - 请求参数变更
      - `+ job.action_params.is_only_init_task`
      - `+ job.action_params.endpoints.db_type: enum value [mysql]`
  - **BatchExecuteJobActions**
    - 请求参数变更
      - `+ jobs.action_params.is_only_init_task`
      - `+ jobs.action_params.endpoints.db_type: enum value [mysql]`

### HuaweiCloud SDK GaussDBforopenGauss

- _接口版本_
  - V3
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **CreateDbInstance**
    - 请求参数变更
      - `+ ha.instance_mode`

### HuaweiCloud SDK KMS

- _接口版本_
  - V2
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **CreateDatakey**
    - 请求参数变更
      - `+ additional_authenticated_data`
  - **CreateDatakeyWithoutPlaintext**
    - 请求参数变更
      - `+ additional_authenticated_data`
  - **EncryptDatakey**
    - 请求参数变更
      - `+ additional_authenticated_data`
  - **DecryptDatakey**
    - 请求参数变更
      - `+ additional_authenticated_data`
  - **EncryptData**
    - 请求参数变更
      - `+ additional_authenticated_data`
  - **DecryptData**
    - 请求参数变更
      - `+ additional_authenticated_data`

# 3.1.98 2024-08-15

### HuaweiCloud SDK EIP

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **UpdatePrePaidBandwidth**
    - 请求参数变更
      - `+ extendParam.period_type`
      - `+ extendParam.period_num`
  - **ListEipBandwidths**
    - 响应参数变更
      - `* eip_bandwidths.tenant_id: uuid -> string`
  - **ListProjectGeipBindings**
    - 响应参数变更
      - `* geip_bindings.vnic.vni: int32 -> string`

### HuaweiCloud SDK GaussDBforopenGauss

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **CreateInstance**
    - 请求参数变更
      - `+ ha.instance_mode`
  - **ShowBatchUpgradeCandidateVersions**
    - 响应参数变更
      - `+ hotfix_rollback_infos`

### HuaweiCloud SDK IMS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListImages**
    - 请求参数变更
      - `+ visibility: enum value [shared]`
    - 响应参数变更
      - `+ images.visibility: enum value [shared]`
  - **UpdateImage**
    - 响应参数变更
      - `+ visibility: enum value [shared]`

### HuaweiCloud SDK LTS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListLogs**
    - 请求参数变更
      - `+ query`
      - `+ is_analysis_query`
    - 响应参数变更
      - `+ analysisLogs`

### HuaweiCloud SDK OCR

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **RecognizeTransportationLicense**
    - 响应参数变更
      - `+ result.expiry_date`
      - `+ result.review_expiry_date`
      - `+ result.assessed_technical_level`

# 3.1.97 2024-08-08

### HuaweiCloud SDK KVS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **PutKv**
    - 请求参数变更
      - `+ condition_expression.multi_field_expression`
      - `+ condition_expression.composed_expression`
  - **UpdateKv**
    - 请求参数变更
      - `+ condition_expression.multi_field_expression`
      - `+ condition_expression.composed_expression`
  - **DeleteKv**
    - 请求参数变更
      - `+ condition_expression.multi_field_expression`
      - `+ condition_expression.composed_expression`
  - **ScanKv**
    - 请求参数变更
      - `+ filter_expression.multi_field_expression`
      - `+ filter_expression.composed_expression`
  - **ScanSkeyKv**
    - 请求参数变更
      - `+ filter_expression.multi_field_expression`
      - `+ filter_expression.composed_expression`

### HuaweiCloud SDK OCR

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **RecognizeSmartDocumentRecognizer**
    - 请求参数变更
      - `+ single_orientation_mode`

### HuaweiCloud SDK VPC

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListSubNetworkInterfaces**
    - 响应参数变更
      - `+ sub_network_interfaces.allowed_address_pairs`
      - `+ sub_network_interfaces.state`
      - `+ sub_network_interfaces.instance_id`
      - `+ sub_network_interfaces.instance_type`
      - `+ sub_network_interfaces.scope`
      - `* sub_network_interfaces.tags: list<string> -> list<ResourceTag>`
  - **CreateSubNetworkInterface**
    - 请求参数变更
      - `+ sub_network_interface.allowed_address_pairs`
      - `+ sub_network_interface.instance_id`
      - `+ sub_network_interface.instance_type`
      - `+ sub_network_interface.tags`
    - 响应参数变更
      - `+ sub_network_interface.allowed_address_pairs`
      - `+ sub_network_interface.state`
      - `+ sub_network_interface.instance_id`
      - `+ sub_network_interface.instance_type`
      - `+ sub_network_interface.scope`
      - `* sub_network_interface.tags: list<string> -> list<ResourceTag>`
  - **BatchCreateSubNetworkInterface**
    - 请求参数变更
      - `+ sub_network_interface.allowed_address_pairs`
      - `+ sub_network_interface.instance_id`
      - `+ sub_network_interface.instance_type`
      - `+ sub_network_interface.tags`
    - 响应参数变更
      - `+ sub_network_interfaces.allowed_address_pairs`
      - `+ sub_network_interfaces.state`
      - `+ sub_network_interfaces.instance_id`
      - `+ sub_network_interfaces.instance_type`
      - `+ sub_network_interfaces.scope`
      - `* sub_network_interfaces.tags: list<string> -> list<ResourceTag>`
  - **ShowSubNetworkInterface**
    - 响应参数变更
      - `+ sub_network_interface.allowed_address_pairs`
      - `+ sub_network_interface.state`
      - `+ sub_network_interface.instance_id`
      - `+ sub_network_interface.instance_type`
      - `+ sub_network_interface.scope`
      - `* sub_network_interface.tags: list<string> -> list<ResourceTag>`
  - **UpdateSubNetworkInterface**
    - 请求参数变更
      - `+ sub_network_interface.allowed_address_pairs`
    - 响应参数变更
      - `+ sub_network_interface.allowed_address_pairs`
      - `+ sub_network_interface.state`
      - `+ sub_network_interface.instance_id`
      - `+ sub_network_interface.instance_type`
      - `+ sub_network_interface.scope`
      - `* sub_network_interface.tags: list<string> -> list<ResourceTag>`
  - **MigrateSubNetworkInterface**
    - 响应参数变更
      - `+ sub_network_interfaces.allowed_address_pairs`
      - `+ sub_network_interfaces.state`
      - `+ sub_network_interfaces.instance_id`
      - `+ sub_network_interfaces.instance_type`
      - `+ sub_network_interfaces.scope`
      - `* sub_network_interfaces.tags: list<string> -> list<ResourceTag>`
  - **UpdateTrafficMirrorSession**
    - 请求参数变更
      - `- traffic_mirror_session.type`

# 3.1.96 2024-08-01

### HuaweiCloud SDK LTS

- _新增特性_
  - 支持以下接口：
    - `ListConsumerGroup`
    - `CreateConsumerGroup`
    - `ConsumerGroupHeartBeat`
    - `ShowLogStreamShards`
    - `ListDetailsConsumerGroup`
    - `UpdateCheckPoint`
    - `DeleteConsumerGroup`
    - `ShowCursorByTime`
    - `ShowCursorTime`
- _解决问题_
  - 无
- _特性变更_
  - 无

# 3.1.95 2024-07-25

### HuaweiCloud SDK OCR

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **RecognizeCambodianIdCard**
    - 请求参数变更
      - `+ detect_reproduce`
    - 响应参数变更
      - `+ result.detect_reproduce_result`
      - `+ result.score_info.reproduce_score`

# 3.1.94 2024-07-18

### HuaweiCloud SDK CTS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListTraces**
    - 请求参数变更
      - `+ access_key_id`
      - `+ enterprise_project_id`
    - 响应参数变更
      - `+ traces.enterprise_project_id`
      - `+ traces.resource_account_id`
      - `+ traces.user.user_name`
      - `+ traces.user.account_id`
      - `+ traces.user.access_key_id`
      - `+ traces.user.principal_urn`
      - `+ traces.user.principal_id`
      - `+ traces.user.principal_is_root_user`
      - `+ traces.user.type`
      - `+ traces.user.invoked_by`
      - `+ traces.user.session_context`

### HuaweiCloud SDK DRS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **BatchCreateJobs**
    - 请求参数变更
      - `+ jobs.node_type: enum value [micro,small,medium,xlarge,2xlarge]`
  - **BatchUpdateJob**
    - 请求参数变更
      - `+ jobs.node_type: enum value [micro,small,medium,xlarge,2xlarge]`

### HuaweiCloud SDK ECS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ShowServer**
    - 响应参数变更
      - `+ server.flavor.gpus`
      - `+ server.flavor.asic_accelerators`
  - **ListServersDetails**
    - 响应参数变更
      - `+ servers.flavor.gpus`
      - `+ servers.flavor.asic_accelerators`

### HuaweiCloud SDK EVS

- _新增特性_
  - 支持接口`ChangeVolumeChargeMode`、`UnsubscribePostpaidVolume`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK IMS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListImages**
    - 请求参数变更
      - `+ __platform: enum value [Huawei Cloud EulerOS]`

### HuaweiCloud SDK KMS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListKeys**
    - 响应参数变更
      - `- key_details.key_label`
  - **ListKeyDetail**
    - 响应参数变更
      - `- key_info.key_label`
  - **ListKmsByTags**
    - 响应参数变更
      - `- resources.resource_detail.key_label`

### HuaweiCloud SDK KVS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **PutKv**
    - 请求参数变更
      - `- condition_expression.multi_field_expression`
  - **UpdateKv**
    - 请求参数变更
      - `- condition_expression.multi_field_expression`
  - **DeleteKv**
    - 请求参数变更
      - `- condition_expression.multi_field_expression`
  - **ScanKv**
    - 请求参数变更
      - `- filter_expression.multi_field_expression`
  - **ScanSkeyKv**
    - 请求参数变更
      - `- filter_expression.multi_field_expression`

### HuaweiCloud SDK Live

- _新增特性_
  - 支持接口`ListPlayDomainStreamInfo`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK VOD

- _新增特性_
  - 支持接口`DeleteTranscodeProduct`
- _解决问题_
  - 无
- _特性变更_
  - **ShowVodStatistics**
    - 响应参数变更
      - `+ sample_data.storage_warm`
      - `+ sample_data.storage_cold`

# 3.1.93 2024-07-11

### HuaweiCloud SDK CDN

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - 废弃以下接口：
    - `ShowBlackWhiteList`
    - `UpdateBlackWhiteList`
    - `UpdatePrivateBucketAccess`
    - `BatchDeleteTags`
    - `ShowOriginHost`
    - `UpdateOriginHost`
    - `UpdateRangeSwitch`
    - `UpdateFollow302Switch`
    - `ShowRefer`
    - `UpdateRefer`
    - `ShowIpInfo`
    - `ShowResponseHeader`
    - `UpdateResponseHeader`
    - `CreateRefreshTasks`
    - `CreatePreheatingTasks`
    - `ShowHistoryTasks`
    - `ShowHistoryTaskDetails`
    - `ShowUrlTaskInfo`
    - `ShowQuota`
    - `ShowTags`
    - `CreateTags`
    - `CreateDomain`
    - `ShowDomainDetail`
    - `DeleteDomain`
    - `EnableDomain`
    - `DisableDomain`
    - `UpdateDomainOrigin`
    - `ShowHttpInfo`
    - `UpdateHttpsInfo`
    - `UpdateDomainMultiCertificates`
    - `ShowCertificatesHttpsInfo`
    - `ShowCacheRules`
    - `UpdateCacheRules`
  - **ListCdnDomainTopRefers**
    - 响应参数变更
      - `- top_refer_summary.ratio`

### HuaweiCloud SDK CodeArtsDeploy

- _新增特性_
  - 支持以下接口：
    - `ListHostGroupPermissions`
    - `UpdateHostGroupPermissions`
    - `CheckWhetherHostGroupCanBeCreated`
    - `ListEnvironmentPermissions`
    - `UpdateEnvironmentPermission`
    - `CopyHostsToTarget`
    - `BatchDeleteHosts`
    - `ListAssociateEnvironmentsInfos`
    - `ListHostGroupBaseInfos`
    - `ListEnvironmentHosts`
    - `CopyApplication`
    - `BatchDeleteApp`
    - `ListApplicationPermissions`
    - `BatchUpdateApplicationPermissions`
    - `BatchUpdatePermissionLevel`
    - `ListAppGroups`
    - `CreateAppGroups`
    - `UpdateAppGroups`
    - `DeleteAppGroups`
    - `MoveAppGroups`
    - `MoveAppToGroup`
    - `CheckIsDuplicateAppName`
    - `CheckCanCreate`
    - `UpdateAppDisableStatus`
    - `UpdateHostCluster`
    - `DeleteHostCluster`
    - `UpdateHostInfo`
    - `DeleteHost`
    - `UpdateEnvironment`
    - `UpdateAppInfo`
- _解决问题_
  - 无
- _特性变更_
  - **CreateApp**
    - 请求参数变更
      - `+ arrange_infos.operation_list.id`

### HuaweiCloud SDK ECS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListFlavors**
    - 响应参数变更
      - `+ flavors.os_extra_specs.info:gpus`
      - `+ flavors.os_extra_specs.info:asic_accelerators`
  - **ListResizeFlavors**
    - 响应参数变更
      - `+ flavors.extra_specs.info:gpus`
      - `+ flavors.extra_specs.info:asic_accelerators`

### HuaweiCloud SDK GaussDBforopenGauss

- _新增特性_
  - 支持以下接口：
    - `ListSupportKernelPlugins`
    - `ListKernelPlugins`
    - `SetKernelPluginLicense`
    - `InstallKernelPlugin`
    - `ListPluginExtensions`
    - `ResumePluginExtensions`
- _解决问题_
  - 无
- _特性变更_
  - **RestoreInstance**
    - 请求参数变更
      - `- source.table_list`
      - `- source.schema_type`

### HuaweiCloud SDK Live

- _新增特性_
  - 支持以下接口：
    - `ShowRefererChain`
    - `SetRefererChain`
    - `DeleteRefererChain`
    - `ListHlsConfig`
    - `UpdateHlsConfig`
- _解决问题_
  - 无
- _特性变更_
  - **ShowPullSourcesConfig**
    - 响应参数变更
      - `+ source_port`
  - **UpdatePullSourcesConfig**
    - 请求参数变更
      - `+ source_port`

### HuaweiCloud SDK OCR

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **RecognizeBankReceipt**
    - 请求参数变更
      - `+ page_num`

# 3.1.92 2024-07-04

### HuaweiCloud SDK CDN

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ShowDomainFullConfig**
    - 响应参数变更
      - `+ configs.url_auth.time_arg`
  - **UpdateDomainFullConfig**
    - 请求参数变更
      - `+ configs.url_auth.time_arg`

### HuaweiCloud SDK GaussDB

- _新增特性_
  - 支持以下接口：
    - `ResizeStarRocksFlavor`
    - `ShowStarrocksParams`
    - `UpdateStarrocksParams`
    - `SyncStarRocksUsers`
    - `CheckStarrocksParams`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK GaussDBforopenGauss

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListInstances**
    - 响应参数变更
      - `+ instances.datastore.target_version`
      - `+ instances.datastore.hotfix_finished_times`
  - **ListInstancesDetails**
    - 响应参数变更
      - `+ instances.datastore.target_version`
      - `+ instances.datastore.hotfix_finished_times`

### HuaweiCloud SDK KMS

- _新增特性_
  - 支持接口`UpdatePrimaryRegion`、`ReplicateKey`、`ListSupportRegions`
- _解决问题_
  - 无
- _特性变更_
  - **ListKeys**
    - 响应参数变更
      - `- key_details.partition_type`
  - **ListKeyDetail**
    - 响应参数变更
      - `- key_info.partition_type`
  - **ListKmsByTags**
    - 响应参数变更
      - `- resources.resource_detail.partition_type`

### HuaweiCloud SDK OCR

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **RecognizeCambodianIdCard**
    - 请求参数变更
      - `+ detect_border_integrity`
      - `+ detect_blocking_within_border`
      - `+ detect_blur`
      - `+ detect_glare`
      - `+ return_adjusted_image`
      - `+ detect_tampering`
    - 响应参数变更
      - `+ result.adjusted_image`
      - `+ result.detect_border_integrity_result`
      - `+ result.detect_blocking_within_border_result`
      - `+ result.detect_blur_result`
      - `+ result.detect_glare_result`
      - `+ result.detect_tampering_result`
      - `+ result.score_info`

### HuaweiCloud SDK RDS

- _新增特性_
  - 支持接口`CreateInstanceIam5`、`UnlockNodeReadonlyStatus`、`DeleteDisasterRecovery`、`ListFlavorsResize`
- _解决问题_
  - 无
- _特性变更_
  - 无

# 3.1.91 2024-06-27

### HuaweiCloud SDK CFW

- _新增特性_
  - 支持以下接口：
    - `CreateTag`
    - `DeleteTag`
    - `ListCaptureTask`
    - `CreateCaptureTask`
    - `DeleteCaptureTask`
    - `ListCaptureResult`
    - `CancelCaptureTask`
- _解决问题_
  - 无
- _特性变更_
  - **ListFlowLogs**
    - 请求参数变更
      - `+ src_province_name`
      - `+ dst_province_name`
      - `+ src_city_name`
      - `+ dst_city_name`
      - `+ protocol: enum value [6,17,1,58]`
    - 响应参数变更
      - `+ data.records.dst_province_id`
      - `+ data.records.dst_province_name`
      - `+ data.records.dst_city_id`
      - `+ data.records.dst_city_name`
      - `+ data.records.src_province_id`
      - `+ data.records.src_province_name`
      - `+ data.records.src_city_id`
      - `+ data.records.src_city_name`
  - **ListAccessControlLogs**
    - 请求参数变更
      - `+ src_province_name`
      - `+ dst_province_name`
      - `+ src_city_name`
      - `+ dst_city_name`
    - 响应参数变更
      - `+ data.records.src_province_id`
      - `+ data.records.src_province_name`
      - `+ data.records.src_city_id`
      - `+ data.records.src_city_name`
      - `+ data.records.dst_province_id`
      - `+ data.records.dst_province_name`
      - `+ data.records.dst_city_id`
      - `+ data.records.dst_city_name`
  - **ListBlackWhiteLists**
    - 请求参数变更
      - `+ address_type: enum value [0,1,2]`
    - 响应参数变更
      - `- data.object_id`
  - **AddServiceSet**
    - 响应参数变更
      - `- data.name`
      - `* data: object<IdObject> -> object`
  - **ListDomainParseDetail**
    - 请求参数变更
      - `* address_type: string -> int32`
  - **UpdateDnsServers**
    - 请求参数变更
      - `* fw_instance_id: optional -> required`
  - **ListDnsServers**
    - 请求参数变更
      - `* fw_instance_id: optional -> required`
  - **ChangeIpsSwitchStatus**
    - 响应参数变更
      - `- trace_id`
  - **ListAttackLogs**
    - 请求参数变更
      - `+ src_province_name`
      - `+ dst_province_name`
      - `+ src_city_name`
      - `+ dst_city_name`
      - `- source`
      - `+ protocol: enum value [6,17,1,58]`
      - `+ action: enum value [0,1]`
      - `+ direction: enum value [0,1]`
    - 响应参数变更
      - `+ data.records.src_province_id`
      - `+ data.records.src_province_name`
      - `+ data.records.src_city_id`
      - `+ data.records.src_city_name`
      - `+ data.records.dst_province_id`
      - `+ data.records.dst_province_name`
      - `+ data.records.dst_city_id`
      - `+ data.records.dst_city_name`
      - `- data.records.dst_host`
      - `* data.records.hit_time: int32 -> int64`
  - **UpdateBlackWhiteList**
    - 请求参数变更
      - `- list_type`
      - `- object_id`
  - **ChangeIpsProtectMode**
    - 响应参数变更
      - `- data.name`
      - `* data: object<IdObject> -> object`
  - **UpdateServiceSet**
    - 响应参数变更
      - `- data.name`
      - `* data: object<IdObject> -> object`
  - **ListServiceItems**
    - 响应参数变更
      - `- data.records.name`
  - **AddServiceItems**
    - 请求参数变更
      - `- service_items.item_id`
      - `- service_items.name`
    - 响应参数变更
      - `- data.items.name`
      - `* data.items: list<IdObject> -> list<object>`
  - **CreateFirewall**
    - 请求参数变更
      - `- X-Trace-Id`
  - **UpdateAddressSet**
    - 请求参数变更
      - `- address_type`
  - **UpdateDomainSet**
    - 请求参数变更
      - `* fw_instance_id: optional -> required`
      - `- set_id`
      - `- domain_set_type`
  - **ListProtectedVpcs**
    - 响应参数变更
      - `- trace_id`
      - `- data.protect_vpcs.id`
      - `- data.protect_vpcs.name`
      - `- data.protect_vpcs.virsubnet_id`
      - `- data.protect_vpcs.state`
      - `- data.protect_vpcs.created_at`
      - `- data.protect_vpcs.updated_at`
      - `- data.protect_vpcs.tags`
      - `- data.protect_vpcs.description`
      - `- data.protect_vpcs.project_id`
      - `- data.protect_vpcs.vpc_project_id`
      - `- data.protect_vpcs.enterprise_project_id`
  - **CreateEastWestFirewall**
    - 响应参数变更
      - `+ data.er`
      - `+ data.inspertion_vpc`
      - `- data.name`
      - `* data: object<IdObject> -> object<CreateEWFirewallResp>`
  - **ListEastWestFirewall**
    - 请求参数变更
      - `* fw_instance_id: optional -> required`
    - 响应参数变更
      - `+ data.er.attachment_id`
  - **AddAclRule**
    - 请求参数变更
      - `- rules.profile`
      - `+ rules.source.address_group`
      - `* rules.service.service_group_names: list<AddressGroupVO> -> list<ServiceGroupVO>`
  - **UpdateAclRule**
    - 请求参数变更
      - `- profile`
      - `+ source.address_group_names.address_set_type`
      - `- source.address_group_names.protocols`
      - `- source.address_group_names.service_set_type`
  - **ListAclRules**
    - 请求参数变更
      - `- protocol`
    - 响应参数变更
      - `- data.records.sequence`
      - `- data.records.source.predefined_group`
      - `+ data.records.source.address_group_names.address_set_type`
      - `- data.records.source.address_group_names.protocols`
      - `- data.records.source.address_group_names.service_set_type`
      - `* data.records.source: object<RuleAddressDto> -> object<RuleAddressDtoForResponse>`
      - `- data.records.service.predefined_group`
      - `* data.records.service: object<RuleServiceDto> -> object<RuleServiceDtoForResponse>`
  - **ListServiceSets**
    - 响应参数变更
      - `- data.records.status`
  - **ListDomains**
    - 请求参数变更
      - `- description`
      - `- set_id`
  - **ListFirewallDetail**
    - 响应参数变更
      - `- data.records.flavor.session_concurrent`
      - `- data.records.flavor.session_create`
      - `- data.records.flavor.total_rule_count`
      - `- data.records.flavor.used_rule_count`
      - `- data.records.flavor.vpc_bandwith`
  - **ListFirewallList**
    - 响应参数变更
      - `- data.records.flavor.session_concurrent`
      - `- data.records.flavor.session_create`
      - `- data.records.flavor.total_rule_count`
      - `- data.records.flavor.used_rule_count`
      - `- data.records.flavor.vpc_bandwith`

### HuaweiCloud SDK DRS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **BatchCreateJobs**
    - 请求参数变更
      - `+ jobs.is_open_fast_clean`
  - **BatchListJobDetails**
    - 响应参数变更
      - `+ results.is_open_fast_clean`
  - **ShowDbObjectTemplateResult**
    - 请求参数变更
      - `+ file_export_object_level`
  - **DownloadDbObjectTemplate**
    - 请求参数变更
      - `+ file_import_db_level: enum value [column]`
  - **UploadDbObjectTemplate**
    - 请求参数变更
      - `+ file_import_db_level: enum value [column]`
  - **ShowDbObjectTemplateProgress**
    - 请求参数变更
      - `+ type`
  - **ShowSupportObjectType**
    - 响应参数变更
      - `+ is_import_cloumn`
  - **ShowReplayResults**
    - 请求参数变更
      - `+ is_sample`
      - `+ error_type`
      - `+ sql_template_md5`
      - `+ type: enum value [error_classification]`
    - 响应参数变更
      - `+ error_classifications`
      - `+ slow_sql_templates.sql_template_md5`
      - `+ error_sql_templates.sql_template_md5`
  - **CreateJob**
    - 请求参数变更
      - `+ job.base_info.is_open_fast_clean`
      - `+ job.source_endpoint.endpoint.endpoint_name: enum value [postgresql,ecs_postgresql,cloud_postgresql,mongodb,ecs_mongodb,cloud_mongodb]`
  - **BatchCreateJobsAsync**
    - 请求参数变更
      - `+ jobs.base_info.is_open_fast_clean`
      - `+ jobs.source_endpoint.endpoint.endpoint_name: enum value [postgresql,ecs_postgresql,cloud_postgresql,mongodb,ecs_mongodb,cloud_mongodb]`
  - **ListAsyncJobDetail**
    - 响应参数变更
      - `+ jobs.base_info.is_open_fast_clean`
      - `+ jobs.source_endpoint.endpoint.endpoint_name: enum value [postgresql,ecs_postgresql,cloud_postgresql,mongodb,ecs_mongodb,cloud_mongodb]`
  - **UpdateBatchAsyncJobs**
    - 请求参数变更
      - `+ jobs.params.base_info.is_open_fast_clean`
      - `+ jobs.params.source_endpoint.endpoint.endpoint_name: enum value [postgresql,ecs_postgresql,cloud_postgresql,mongodb,ecs_mongodb,cloud_mongodb]`
  - **ShowJobDetail**
    - 响应参数变更
      - `+ job.base_info.is_open_fast_clean`
      - `+ job.source_endpoint.endpoint.endpoint_name: enum value [postgresql,ecs_postgresql,cloud_postgresql,mongodb,ecs_mongodb,cloud_mongodb]`
  - **UpdateJob**
    - 请求参数变更
      - `+ job.params.base_info.is_open_fast_clean`
      - `+ job.params.source_endpoint.endpoint.endpoint_name: enum value [postgresql,ecs_postgresql,cloud_postgresql,mongodb,ecs_mongodb,cloud_mongodb]`
  - **ExecuteJobAction**
    - 请求参数变更
      - `+ job.action_name: enum value [set_readonly]`
      - `+ job.action_params.endpoints.endpoint.endpoint_name: enum value [postgresql,ecs_postgresql,cloud_postgresql,mongodb,ecs_mongodb,cloud_mongodb]`
  - **BatchExecuteJobActions**
    - 请求参数变更
      - `+ jobs.action_name: enum value [set_readonly]`
      - `+ jobs.action_params.endpoints.endpoint.endpoint_name: enum value [postgresql,ecs_postgresql,cloud_postgresql,mongodb,ecs_mongodb,cloud_mongodb]`

### HuaweiCloud SDK ECS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListFlavors**
    - 响应参数变更
      - `+ flavors.os_extra_specs.network_interface:traffic_mirroring_supported`
      - `+ flavors.os_extra_specs.security:enclave_supported`
  - **ListResizeFlavors**
    - 响应参数变更
      - `+ flavors.extra_specs.network_interface:traffic_mirroring_supported`
      - `+ flavors.extra_specs.security:enclave_supported`

### HuaweiCloud SDK GaussDB

- _新增特性_
  - 支持以下接口：
    - `ResumeStarRocksDataReplication`
    - `PauseStarRocksDataReplication`
    - `ListClickHouseInstanceNode`
    - `ShowClickHouseSlowLogDetail`
    - `ShowClickHouseSlowLogSensitiveStatus`
    - `UpdateClickHouseSlowLogSensitiveStatus`
    - `ShowClickHouseLtsConfig`
    - `UpdateClickHouseLtsConfig`
    - `DeleteClickHouseLtsConfig`
    - `CheckClickHouseDataBaseConfig`
    - `CheckClickHouseTableConfig`
    - `ListClickHouseDataBase`
    - `ListClickHouseDataBaseReplicationConfig`
    - `ListClickHouseDataBaseParameter`
    - `CreateClickHouseInstance`
    - `ListClickHouseInstance`
    - `DeleteClickHouseInstance`
    - `ResizeClickHouseInstance`
    - `RebootClickHouseInstance`
    - `ShowClickHouseDatabaseUser`
    - `CreateClickHouseDatabaseUser`
    - `UpdateClickHouseDatabaseUserPassword`
    - `UpdateClickHouseDatabaseUserPermission`
    - `ListClickHouseDataBaseReplication`
    - `CreateClickHouseDataBaseReplication`
    - `DeleteClickHouseDataBaseReplication`
    - `UpdateClickHouseDataBaseConfig`
    - `DeleteClickHouseDataBaseConfig`
    - `ResizeClickHouseFlavor`
    - `DeleteClickHouseDatabaseUser`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK GaussDBforopenGauss

- _新增特性_
  - 支持以下接口：
    - `SetNewBackupPolicy`
    - `ListInstanceDetails`
    - `ShowBatchUpgradeCandidateVersions`
    - `UpgradeInstancesVersion`
    - `ConfirmRestoredData`
- _解决问题_
  - 无
- _特性变更_
  - **CreateInstance**
    - 请求参数变更
      - `- replica_num: enum value [2]`
  - **CreateDbInstance**
    - 请求参数变更
      - `- replica_num: enum value [2]`

### HuaweiCloud SDK KVS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **GetKv**
    - 响应参数变更
      - `- kv_blob_data`
  - **PutKv**
    - 请求参数变更
      - `- kv_blob`
      - `- condition_expression.single_kv_expression`
      - `- condition_expression.composed_expression`
  - **UpdateKv**
    - 请求参数变更
      - `- kv_options`
      - `- update_blob`
      - `- condition_expression.single_kv_expression`
      - `- condition_expression.composed_expression`
  - **DeleteKv**
    - 请求参数变更
      - `- condition_expression.single_kv_expression`
      - `- condition_expression.composed_expression`
  - **ScanKv**
    - 请求参数变更
      - `- filter_expression.single_kv_expression`
      - `- filter_expression.composed_expression`
    - 响应参数变更
      - `- returned_kv_items.kv_blob_data`
  - **ScanSkeyKv**
    - 请求参数变更
      - `- filter_expression.single_kv_expression`
      - `- filter_expression.composed_expression`
    - 响应参数变更
      - `- returned_kv_items.kv_blob_data`
  - **BatchWriteKv**
    - 请求参数变更
      - `- table_opers.kv_opers.put_kv.kv_blob`

### HuaweiCloud SDK VPC

- _新增特性_
  - 支持以下接口：
    - `CountPortsByTags`
    - `ListPortsByTags`
    - `ShowPortTags`
    - `CreatePortTag`
    - `ListPortTags`
    - `BatchCreatePortTags`
    - `DeletePortTag`
    - `BatchDeletePortTags`
- _解决问题_
  - 无
- _特性变更_
  - **ListFirewallTags**
    - 请求参数变更
      - `+ limit`
      - `+ offset`
    - 响应参数变更
      - `+ total_count`
      - `* tags: object<ListTag> -> list<ListTag>`
  - **ShowFirewallTags**
    - 响应参数变更
      - `- sys_tags`
      - `* tags: object<ResourceTag> -> list<ResourceTag>`
  - **BatchDeleteFirewallTags**
    - 请求参数变更
      - `* tags: list<ResourceTag> -> list<DeleteResourceTagRequestBody>`

# 3.1.90 2024-06-13

### HuaweiCloud SDK ECS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ShowServer**
    - 响应参数变更
      - `- server.fault.code`
      - `- server.fault.created`
      - `- server.fault.message`
      - `- server.fault.details`
      - `* server.fault: object<ServerFault> -> object`
  - **ListServersDetails**
    - 响应参数变更
      - `- servers.fault.code`
      - `- servers.fault.created`
      - `- servers.fault.message`
      - `- servers.fault.details`
      - `* servers.fault: object<ServerFault> -> object`

### HuaweiCloud SDK EIP

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **DisassociatePublicips**
    - 响应参数变更
      - `- publicip.associate_instance_type: enum value [null]`
  - **AssociatePublicips**
    - 响应参数变更
      - `- publicip.associate_instance_type: enum value [null]`
  - **UpdatePublicip**
    - 请求参数变更
      - `+ publicip.associate_instance_type: enum value [VPN]`
      - `- publicip.associate_instance_type: enum value []`
    - 响应参数变更
      - `- publicip.associate_instance_type: enum value [null]`

### HuaweiCloud SDK GaussDB

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ShowDedicatedResourceInfo**
    - 响应参数变更
      - `+ resource_name`
      - `- name`

### HuaweiCloud SDK KVS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **PutKv**
    - 请求参数变更
      - `- condition_expression.composed_expression.expressions.single_kv_expression`
      - `- condition_expression.composed_expression.expressions.multi_field_expression`
  - **UpdateKv**
    - 请求参数变更
      - `- condition_expression.composed_expression.expressions.single_kv_expression`
      - `- condition_expression.composed_expression.expressions.multi_field_expression`
  - **DeleteKv**
    - 请求参数变更
      - `- condition_expression.composed_expression.expressions.single_kv_expression`
      - `- condition_expression.composed_expression.expressions.multi_field_expression`
  - **ScanKv**
    - 请求参数变更
      - `- filter_expression.composed_expression.expressions.single_kv_expression`
      - `- filter_expression.composed_expression.expressions.multi_field_expression`
  - **ScanSkeyKv**
    - 请求参数变更
      - `- filter_expression.composed_expression.expressions.single_kv_expression`
      - `- filter_expression.composed_expression.expressions.multi_field_expression`

### HuaweiCloud SDK RDS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ShowReplayDelayStatus**
    - 响应参数变更
      - `+ delay_time_value_range`

### HuaweiCloud SDK VPC

- _新增特性_
  - 支持以下接口：
    - `ListSecurityGroupsByTags`
    - `BatchCreateSecurityGroupTags`
    - `BatchDeleteSecurityGroupTags`
    - `ShowSecurityGroupTags`
    - `CreateSecurityGroupTag`
    - `DeleteSecurityGroupTag`
    - `ListSecurityGroupTags`
- _解决问题_
  - 无
- _特性变更_
  - 无

# 3.1.89 2024-06-06

### HuaweiCloud SDK ECS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ChangeVpc**
    - 请求参数变更
      - `* nic.security_groups: object<ChangeVpcSecurityGroups> -> list<ChangeVpcSecurityGroups>`
  - **ListFlavors**
    - 响应参数变更
      - `+ flavors.os_extra_specs.cond:storage:type`
  - **ListResizeFlavors**
    - 响应参数变更
      - `+ flavors.extra_specs.cond:storage:type`

### HuaweiCloud SDK GaussDB

- _新增特性_
  - 支持以下接口：
    - `ShowLtsConfigs`
    - `CreateLtsConfigs`
    - `DeleteLtsConfigs`
    - `ShowRecyclePolicy`
    - `SetRecyclePolicy`
    - `ListRecycleInstances`
    - `ShowSlowlogSensitiveStatus`
    - `UpdateSlowlogSensitiveSwitch`
    - `RestartProxyInstance`
    - `RenameInstanceNode`
    - `ShowAutoScalingHistory`
    - `UpdateServerlessPolicy`
    - `ModifyNodePriority`
    - `ShowInstanceEip`
    - `ListParamsTemplateApplyHistory`
    - `ShowProxyConfigurations`
- _解决问题_
  - 无
- _特性变更_
  - **ShowProxyIpgroup**
    - 响应参数变更
      - `+ ip_group.id`
      - `+ ip_group.name`
      - `+ ip_group.ip_list`
      - `* ip_group: object -> object<ProxyIpGroupDetail>`
  - **UpdateGaussMySqlInstanceName**
    - 请求参数变更
      - `+ is_modify_node_name`

### HuaweiCloud SDK GaussDBforNoSQL

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **OfflineNodes**
    - 响应参数变更
      - `+ job_id`

### HuaweiCloud SDK GaussDBforopenGauss

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListAvailableFlavors**
    - 响应参数变更
      - `+ flavors.spec_code`
      - `- flavors.spec_cpde`
  - **ListRestorableInstances**
    - 响应参数变更
      - `* instances.version: number -> string`
  - **ListDbUsers**
    - 响应参数变更
      - `+ users.attribute`
      - `+ users.lock_status`
      - `- users.attributes`
  - **ShowUpgradeCandidateVersions**
    - 响应参数变更
      - `+ hotfix_upgrade_infos`
      - `+ hotfix_rollback_infos`

### HuaweiCloud SDK LTS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **CreateLogStreamIndex**
    - 请求参数变更
      - `+ sqlAnalysisEnable`

### HuaweiCloud SDK RDS

- _新增特性_
  - 支持接口`ShowReplayDelayStatus`、`SwitchLogReplay`、`ListShareBackups`
- _解决问题_
  - 无
- _特性变更_
  - **ListBackups**
    - 请求参数变更
      - `+ status`

# 3.1.88 2024-05-30

### HuaweiCloud SDK CDN

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ShowHistoryTaskDetails**
    - 响应参数变更
      - `+ urls.fail_classify`
      - `+ urls.fail_desc`
  - **ListDomains**
    - 响应参数变更
      - `+ domains.sources.obs_bucket_type`
  - **CreateDomain**
    - 请求参数变更
      - `+ domain.sources.obs_bucket_type`
      - `* domain.sources: list<Sources> -> list<SourcesRequestBody>`
    - 响应参数变更
      - `+ domain.sources.obs_bucket_type`
  - **DeleteDomain**
    - 响应参数变更
      - `+ domain.sources.obs_bucket_type`
  - **EnableDomain**
    - 响应参数变更
      - `+ domain.sources.obs_bucket_type`
  - **DisableDomain**
    - 响应参数变更
      - `+ domain.sources.obs_bucket_type`
  - **ShowDomainFullConfig**
    - 响应参数变更
      - `+ configs.access_area_filter`
      - `* configs.sources: list<SourcesConfig> -> list<SourcesConfigResponseBody>`
  - **UpdateDomainFullConfig**
    - 请求参数变更
      - `+ configs.access_area_filter`

### HuaweiCloud SDK ECS

- _新增特性_
  - 支持接口`ChangeServerNetworkInterface`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK GaussDB

- _新增特性_
  - 支持接口`UpgradeProxyVersion`、`UpdateProxyName`、`ShowProxyIpgroup`、`ShowProxyVersion`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK GaussDBforopenGauss

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **SearchAutoEnlargePolicy**
    - 响应参数变更
      - `+ step_percent`
      - `+ step_size`
  - **UpdateInstanceConfiguration**
    - 响应参数变更
      - `+ job_id`
  - **CreateConfigurationTemplate**
    - 请求参数变更
      - `+ datastore.instance_mode: enum value [ha:readonly]`
  - **ListDatabases**
    - 响应参数变更
      - `+ databases.datctype`
      - `+ databases.compatibility_type`
  - **ListTasks**
    - 响应参数变更
      - `+ tasks.created_at`
      - `+ tasks.ended_at`
  - **ListComponentInfos**
    - 响应参数变更
      - `+ nodes.components.type`
      - `+ nodes.components.detail`
  - **ShowUpgradeCandidateVersions**
    - 响应参数变更
      - `+ upgrade_type_list.is_parallel_upgrade`

### HuaweiCloud SDK VPC

- _新增特性_
  - 支持以下接口：
    - `ListClouddcnSubnets`
    - `CreateClouddcnSubnet`
    - `ShowClouddcnSubnet`
    - `UpdateClouddcnSubnet`
    - `DeleteClouddcnSubnet`
    - `ShowClouddcnSubnetsTags`
    - `AddClouddcnSubnetsTags`
    - `ListClouddcnSubnetsFilterTags`
    - `DeleteClouddcnSubnetsTag`
    - `ListClouddcnSubnetsCountFilterTags`
    - `ListClouddcnSubnetsTags`
    - `BatchDeleteClouddcnSubnetsTags`
    - `BatchCreateClouddcnSubnetsTags`
- _解决问题_
  - 无
- _特性变更_
  - **ListSecurityGroups**
    - 响应参数变更
      - `+ security_groups.tags`
  - **CreateSecurityGroup**
    - 请求参数变更
      - `+ security_group.tags`
    - 响应参数变更
      - `+ security_group.tags`
  - **ShowSecurityGroup**
    - 响应参数变更
      - `+ security_group.tags`
  - **UpdateSecurityGroup**
    - 响应参数变更
      - `+ security_group.tags`
  - **CreateFirewall**
    - 请求参数变更
      - `+ firewall.tags`

# 3.1.87 2024-05-23

### HuaweiCloud SDK GaussDBforNoSQL

- _新增特性_
  - 支持接口`ShowRedisBigKeys`、`ShowPasswordlessConfig`、`UpdatePasswordlessConfig`
- _解决问题_
  - 无
- _特性变更_
  - **OfflineNodes**
    - 请求参数变更
      - `* x-auth-token: optional -> required`

### HuaweiCloud SDK RDS

- _新增特性_
  - 支持接口`DownloadErrorlog`
- _解决问题_
  - 无
- _特性变更_
  - 无

# 3.1.86 2024-05-16

### HuaweiCloud SDK CDN

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - 废弃接口`UpdateDomainFullConfig`、`ShowDomainFullConfig`
  - **ShowDomainFullConfig**
    - 响应参数变更
      - `+ configs.https.enc_certificate_value`
      - `+ configs.https.certificates`
  - **UpdateDomainFullConfig**
    - 请求参数变更
      - `+ configs.https.enc_certificate_value`
      - `+ configs.https.enc_private_key`
      - `+ configs.https.certificates`

### HuaweiCloud SDK GaussDB

- _新增特性_
  - 支持以下接口：
    - `CreateStarrocksInstance`
    - `ListStarrocksInstanceInfo`
    - `DeleteStarrocksInstance`
    - `RestartStarrocksInstance`
    - `RestartStarrocksNode`
    - `CheckStarRocksResource`
    - `ListHtapDataStore`
    - `ListHtapStorageType`
    - `ListHtapFlavor`
    - `ListHtapInstanceInfo`
    - `ShowStarRocksDatabaseUser`
    - `CreateStarRocksDatabaseUser`
    - `DeleteStarRocksDatabaseUser`
    - `UpdateStarRocksDatabaseUserPassword`
    - `UpdateStarRocksDatabaseUserPermission`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK GaussDBforopenGauss

- _新增特性_
  - 支持接口`RestoreInstance`
- _解决问题_
  - 无
- _特性变更_
  - **CreateDbInstance**
    - 请求参数变更
      - `+ enable_single_float_ip`

### HuaweiCloud SDK LTS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListLogs**
    - 请求参数变更
      - `+ __time__`
  - **ListStructuredLogsWithTimeRange**
    - 请求参数变更
      - `* time_range.start_time: string -> int64`
      - `* time_range.end_time: string -> int64`

### HuaweiCloud SDK OCR

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **RecognizeSmartDocumentRecognizer**
    - 请求参数变更
      - `+ pdf_page_number`

# 3.1.85 2024-05-09

### HuaweiCloud SDK DRS

- _新增特性_
  - 支持以下接口：
    - `ListObejectLevelCompareOverview`
    - `CreateObjectLevelCompareJob`
    - `ListObejectLevelCompareDetail`
    - `ListContentCompareDifference`
    - `DownloadCompareResultFile`
    - `CreateCompareResultFile`
    - `ShowHealthCompareJobDetail`
    - `ShowHealthObjectCompareJobOverview`
    - `UpdateComparePolicy`
- _解决问题_
  - 无
- _特性变更_
  - **BatchCreateJobs**
    - 请求参数变更
      - `+ jobs.source_endpoint.kafka_security_config`
  - **BatchValidateConnections**
    - 请求参数变更
      - `+ jobs.kafka_security_config.endpoint_algorithm`
      - `+ jobs.kafka_security_config.sasl_mechanism`
      - `+ jobs.kafka_security_config.delegation_tokens`
      - `+ jobs.kafka_security_config.enable_key_store`
      - `+ jobs.kafka_security_config.key_store_key`
      - `+ jobs.kafka_security_config.key_store_key_name`
      - `+ jobs.kafka_security_config.key_store_password`
      - `+ jobs.kafka_security_config.set_private_key_password`
      - `+ jobs.kafka_security_config.key_password`
      - `+ jobs.kafka_security_config.type: enum value [SASL_PLAINTEXT,SSL]`
  - **ShowJobList**
    - 响应参数变更
      - `+ jobs.children.job_direction: enum value [no-dbs]`
      - `- jobs.children.job_direction: enum value [non-dbs]`
  - **BatchUpdateJob**
    - 请求参数变更
      - `+ jobs.source_endpoint.kafka_security_config`
  - **BatchListJobDetails**
    - 响应参数变更
      - `+ results.source_endpoint.kafka_security_config`
  - **ListAsyncJobDetail**
    - 响应参数变更
      - `+ jobs.is_writable`
      - `+ jobs.compare_result.content_diff_detail_info`
      - `+ jobs.compare_result.content_compare_overview_infos.status: enum value [WAIT_FOR_COMPARE,CANCELED]`
  - **UpdateBatchAsyncJobs**
    - 请求参数变更
      - `+ jobs.type: enum value [notify]`
  - **ShowJobDetail**
    - 请求参数变更
      - `+ type: enum value [is_writable,cloud_connection]`
    - 响应参数变更
      - `+ job.is_writable`
      - `+ job.compare_result.content_diff_detail_info`
      - `+ job.compare_result.content_compare_overview_infos.status: enum value [WAIT_FOR_COMPARE,CANCELED]`
  - **UpdateJob**
    - 请求参数变更
      - `+ job.type: enum value [notify]`
  - **ExecuteJobAction**
    - 请求参数变更
      - `+ job.action_name: enum value [set_writable,cloud_connection]`
      - `+ job.action_params.replay_config`
  - **BatchExecuteJobActions**
    - 请求参数变更
      - `+ jobs.action_name: enum value [set_writable,cloud_connection]`
      - `+ jobs.action_params.replay_config`

### HuaweiCloud SDK ECS

- _新增特性_
  - 支持接口`ChangeVpc`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK GaussDB

- _新增特性_
  - 支持以下接口：
    - `ListStarRocksDataReplications`
    - `CreateStarRocksDataReplication`
    - `DeleteStarRocksDataReplication`
    - `CheckDataBaseConfig`
    - `CheckTableConfig`
    - `ListStarRocksDataReplicationConfig`
    - `ListStarRocksDbParameters`
    - `ListStarRocksDataBases`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK MPC

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **CreateTranscodingTask**
    - 请求参数变更
      - `+ video_process.hls_segment_type`

# 3.1.84 2024-04-30

### HuaweiCloud SDK KVS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **GetKv**
    - 请求参数变更
      - `- projection_fields`
      - `- projection_blob`
  - **UpdateKv**
    - 请求参数变更
      - `- projection_fields`
      - `- projection_blob`
  - **DeleteKv**
    - 请求参数变更
      - `- projection_fields`
      - `- projection_blob`
  - **ScanKv**
    - 请求参数变更
      - `- projection_fields`
      - `- projection_blob`
  - **ScanSkeyKv**
    - 请求参数变更
      - `- projection_fields`
      - `- projection_blob`

# 3.1.83 2024-04-25

### HuaweiCloud SDK AAD

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ShowUnblockRecord**
    - 响应参数变更
      - `* unblock_record.block_id: string -> int64`

### HuaweiCloud SDK CodeArtsDeploy

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ShowDeployTaskDetail**
    - 响应参数变更
      - `+ is_disable`
      - `+ can_disable`
  - **ListDeployTasks**
    - 响应参数变更
      - `+ is_disable`
      - `+ can_disable`
      - `+ result.can_disable`
      - `+ result.is_disable`
  - **ListAllApp**
    - 响应参数变更
      - `+ result.is_disable`
      - `+ result.can_disable`
  - **ShowAppDetailById**
    - 响应参数变更
      - `+ result.is_disable`
      - `+ result.can_disable`
      - `+ result.arrange_infos.can_disable`
      - `+ result.arrange_infos.is_disable`

### HuaweiCloud SDK GaussDBforNoSQL

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListInstances**
    - 响应参数变更
      - `+ instances.availability_zone`

### HuaweiCloud SDK OCR

- _新增特性_
  - 支持接口`RecognizeBankReceipt`
- _解决问题_
  - 无
- _特性变更_
  - **RecognizeBusinessLicense**
    - 响应参数变更
      - `+ result.organization_form`
  - **RecognizeSmartDocumentRecognizer**
    - 请求参数变更
      - `+ formula`
    - 响应参数变更
      - `+ result.formula_result`

### HuaweiCloud SDK VPC

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **CreateFirewall**
    - 响应参数变更
      - `+ firewall.ingress_rules.enabled`
  - **ShowFirewall**
    - 响应参数变更
      - `+ firewall.ingress_rules.enabled`
  - **UpdateFirewall**
    - 响应参数变更
      - `+ firewall.ingress_rules.enabled`
  - **UpdateFirewallRules**
    - 请求参数变更
      - `+ firewall.ingress_rules.enabled`
    - 响应参数变更
      - `+ firewall.ingress_rules.enabled`
  - **AddFirewallRules**
    - 请求参数变更
      - `+ firewall.ingress_rules.enabled`
    - 响应参数变更
      - `+ firewall.ingress_rules.enabled`
  - **RemoveFirewallRules**
    - 响应参数变更
      - `+ firewall.ingress_rules.enabled`
  - **AssociateSubnetFirewall**
    - 响应参数变更
      - `+ firewall.ingress_rules.enabled`
  - **DisassociateSubnetFirewall**
    - 响应参数变更
      - `+ firewall.ingress_rules.enabled`

# 3.1.82 2024-04-18

### HuaweiCloud SDK GaussDBforopenGauss

- _新增特性_
  - 支持接口`ListTopIoTraffics`、`ShowErrorLogSwitchStatus`、`ListInstanceErrorLogs`、`DeleteInstanceTag`
- _解决问题_
  - 无
- _特性变更_
  - 移除接口`ShowInstancesStatistics`
  - **UpgradeInstanceVersion**
    - 请求参数变更
      - `+ upgrade_action`
      - `- upgrde_action`
      - `- is_parallel_upgrade`
  - **ShowBackupPolicy**
    - 响应参数变更
      - `* backup_policy.differential_period: string -> int32`

### HuaweiCloud SDK TMS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **DeleteResourceTag**
    - 请求参数变更
      - `+ tags.value`

# 3.1.81 2024-04-11

### HuaweiCloud SDK CDN

- _新增特性_
  - 支持接口`ShowQuota`
- _解决问题_
  - 无
- _特性变更_
  - **ShowDomainFullConfig**
    - 响应参数变更
      - `+ configs.sni`
      - `+ configs.request_url_rewrite`
      - `+ configs.browser_cache_rules`
  - **UpdateDomainFullConfig**
    - 请求参数变更
      - `+ configs.sni`
      - `+ configs.request_url_rewrite`
      - `+ configs.browser_cache_rules`

### HuaweiCloud SDK DRS

- _新增特性_
  - 支持以下接口：
    - `ListDataLevelTableCompareJobs`
    - `CreateDataLevelTableCompareJob`
    - `DeleteCompareJob`
    - `StartPromptlyDataLevelTableCompareJob`
    - `ListDataCompareOverview`
    - `ListDataCompareDetail`
    - `ListContentCompareOverview`
    - `ListContentCompareDetail`
    - `ListsAgencyPermissions`
    - `ShowReplayResults`
- _解决问题_
  - 无
- _特性变更_
  - **ShowDataFilteringResult**
    - 响应参数变更
      - `+ db_object_filtering_result.source`
      - `+ db_object_filtering_result.target_result`
      - `+ db_object_filtering_result.source_result`
      - `+ db_object_filtering_result.target_message`
      - `+ db_object_filtering_result.source_message`
  - **ShowDataProgress**
    - 响应参数变更
      - `+ data_process_info.source`
  - **UpdateDataProgress**
    - 请求参数变更
      - `+ data_process_info.source`
  - **CheckDataFilter**
    - 请求参数变更
      - `+ data_process_info.source`
  - **ExecuteJobAction**
    - 请求参数变更
      - `+ job.action_params.compare_task_param.data_process_info`
  - **BatchExecuteJobActions**
    - 请求参数变更
      - `+ jobs.action_params.compare_task_param.data_process_info`

### HuaweiCloud SDK GaussDBforopenGauss

- _新增特性_
  - 支持以下接口：
    - `ShowInstancesStatistics`
    - `ShowSlowLogDownload`
    - `CreateSlowLogDownload`
    - `UpgradeInstanceVersion`
    - `SearchAutoEnlargePolicy`
    - `ListCnInfosBeforeReduce`
    - `StartInstance`
    - `ShowUpgradeCandidateVersions`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK RDS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - 移除接口`ShowReplayDelayStatus`、`SwitchLogReplay`
  - **StartResizeFlavorAction**
    - 请求参数变更
      - `+ resize_flavor.is_delay`
  - **ListPostgresqlDatabases**
    - 请求参数变更
      - `+ db`

# 3.1.80 2024-04-03

### HuaweiCloud SDK CFW

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListFlowLogs**
    - 请求参数变更
      - `+ src_region_name`
      - `+ dst_region_name`
    - 响应参数变更
      - `+ data.records.dst_region_id`
      - `+ data.records.dst_region_name`
      - `+ data.records.src_region_id`
      - `+ data.records.src_region_name`
  - **ListAccessControlLogs**
    - 请求参数变更
      - `+ src_region_name`
      - `+ dst_region_name`
  - **ListAddressSets**
    - 请求参数变更
      - `+ address_set_type`
  - **ListAttackLogs**
    - 请求参数变更
      - `+ attack_rule_id`
      - `+ src_region_name`
      - `+ dst_region_name`
  - **UpdateAclRuleOrder**
    - 请求参数变更
      - `+ bottom`
  - **ListServiceSetDetail**
    - 请求参数变更
      - `+ query_service_set_type`
  - **AddAclRule**
    - 请求参数变更
      - `+ rules.applications`
      - `+ rules.applicationsJsonString`
      - `+ rules.profile`
      - `+ rules.sequence.bottom`
      - `+ rules.source.address_set_type`
      - `+ rules.source.predefined_group`
      - `- rules.source.address_group`
      - `- rules.source.address_group_names`
      - `* rules.source: object<RuleAddressDto> -> object<RuleAddressDtoForRequest>`
      - `+ rules.service.protocols`
      - `+ rules.service.predefined_group`
      - `+ rules.service.service_set_type`
      - `+ rules.service.service_group_names.protocols`
      - `+ rules.service.service_group_names.service_set_type`
  - **UpdateAclRule**
    - 请求参数变更
      - `+ applications`
      - `+ applicationsJsonString`
      - `+ profile`
      - `+ sequence.bottom`
      - `+ source.address_set_type`
      - `+ source.predefined_group`
      - `+ source.address_group_names.protocols`
      - `+ source.address_group_names.service_set_type`
      - `+ service.protocols`
      - `+ service.predefined_group`
      - `+ service.service_set_type`
  - **ListAclRules**
    - 请求参数变更
      - `+ application`
    - 响应参数变更
      - `+ data.records.sequence.bottom`
      - `+ data.records.source.address_set_type`
      - `+ data.records.source.predefined_group`
      - `+ data.records.source.address_group_names.protocols`
      - `+ data.records.source.address_group_names.service_set_type`
      - `+ data.records.service.protocols`
      - `+ data.records.service.predefined_group`
      - `+ data.records.service.service_set_type`
  - **ListServiceItems**
    - 请求参数变更
      - `+ query_service_set_type`
  - **ListAddressItems**
    - 请求参数变更
      - `+ query_address_set_type`
  - **ListServiceSets**
    - 请求参数变更
      - `+ query_service_set_type`
  - **ListDomainSets**
    - 响应参数变更
      - `+ data.records.rules`
  - **ListFirewallDetail**
    - 请求参数变更
      - `+ name`
    - 响应参数变更
      - `+ data.records.tags`
      - `+ data.records.flavor.default_bandwidth`
      - `+ data.records.flavor.default_eip_count`
      - `+ data.records.flavor.default_log_storage`
      - `+ data.records.flavor.default_vpc_count`
  - **ListFirewallList**
    - 响应参数变更
      - `+ data.records.tags`
      - `+ data.records.flavor.default_bandwidth`
      - `+ data.records.flavor.default_eip_count`
      - `+ data.records.flavor.default_log_storage`
      - `+ data.records.flavor.default_vpc_count`

### HuaweiCloud SDK ECS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - 移除接口`ShowServerAutoRecovery`、`RegisterServerAutoRecovery`
  - **ResizePostPaidServer**
    - 请求参数变更
      - `+ resize.cpu_options`
  - **ShowServer**
    - 响应参数变更
      - `+ server.cpu_options.hw:cpu_threads: enum value [1,2]`
  - **ListServersDetails**
    - 响应参数变更
      - `+ servers.cpu_options.hw:cpu_threads: enum value [1,2]`
  - **ChangeServerOsWithCloudInit**
    - 请求参数变更
      - `+ os-change.isAutoPay`
  - **ChangeServerOsWithoutCloudInit**
    - 请求参数变更
      - `+ os-change.isAutoPay`
  - **ResizeServer**
    - 请求参数变更
      - `+ resize.cpu_options`
  - **CreateServers**
    - 请求参数变更
      - `+ server.cpu_options`
  - **CreatePostPaidServers**
    - 请求参数变更
      - `+ server.cpu_options`

### HuaweiCloud SDK EIP

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListTenantVpcIgws**
    - 请求参数变更
      - `+ offset`
      - `+ marker`
  - **ListProjectGeipBindings**
    - 请求参数变更
      - `+ offset`
      - `+ marker`
    - 响应参数变更
      - `+ geip_bindings.instance_type`
      - `+ geip_bindings.instance_id`
      - `- geip_bindings.binding_instance_type`
      - `- geip_bindings.binding_instance_id`
      - `+ geip_bindings.gcbandwidth.id`
      - `+ geip_bindings.gcbandwidth.admin_status`
      - `+ geip_bindings.gcbandwidth.size`
      - `+ geip_bindings.gcbandwidth.short_id`
      - `+ geip_bindings.gcbandwidth.sla_level`
      - `+ geip_bindings.gcbandwidth.dscp`
      - `* geip_bindings.gcbandwidth: object -> object<BackboneBandwidthResp>`
      - `+ geip_bindings.vnic.private_ip_address`
      - `+ geip_bindings.vnic.device_id`
      - `+ geip_bindings.vnic.device_owner`
      - `+ geip_bindings.vnic.vpc_id`
      - `+ geip_bindings.vnic.port_id`
      - `+ geip_bindings.vnic.mac`
      - `+ geip_bindings.vnic.vtep`
      - `+ geip_bindings.vnic.vni`
      - `+ geip_bindings.vnic.instance_id`
      - `+ geip_bindings.vnic.instance_type`
      - `+ geip_bindings.vnic.port_profile`
      - `* geip_bindings.vnic: object -> object<InstanceVnicResp>`

### HuaweiCloud SDK GEIP

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **CountGlobalEips**
    - 响应参数变更
      - `+ global_eip`
      - `- global_eips`
      - `- page_info`
  - **BatchCreateGlobalEip**
    - 响应参数变更
      - `+ global_eips`
      - `- global_eip`
  - **CountGlobalEipSegment**
    - 响应参数变更
      - `+ global_eip_segment`
      - `- global_eip_segments`

### HuaweiCloud SDK KMS

- _新增特性_
  - 支持接口`GenerateMac`、`VerifyMac`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK RDS

- _新增特性_
  - 支持接口`ShowReplayDelayStatus`、`SwitchLogReplay`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK VPC

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListSubNetworkInterfaces**
    - 响应参数变更
      - `+ sub_network_interfaces.security_enabled`
  - **CreateSubNetworkInterface**
    - 响应参数变更
      - `+ sub_network_interface.security_enabled`
  - **BatchCreateSubNetworkInterface**
    - 响应参数变更
      - `+ sub_network_interfaces.security_enabled`
  - **ShowSubNetworkInterface**
    - 响应参数变更
      - `+ sub_network_interface.security_enabled`
  - **UpdateSubNetworkInterface**
    - 响应参数变更
      - `+ sub_network_interface.security_enabled`
  - **MigrateSubNetworkInterface**
    - 响应参数变更
      - `+ sub_network_interfaces.security_enabled`

# 3.1.79 2024-03-28

### HuaweiCloud SDK CBR

- _新增特性_
  - 支持以下接口：
    - `ListOrganizationPolicies`
    - `CreateOrganizationPolicy`
    - `ShowOrganizationPolicy`
    - `UpdateOrganizationPolicy`
    - `DeleteOrganizationPolicy`
    - `ListOrganizationPolicyDetail`
- _解决问题_
  - 无
- _特性变更_
  - **ShowBackup**
    - 响应参数变更
      - `+ backup.incremental`
      - `- backup.extend_info.incremental`
  - **UpdateBackup**
    - 响应参数变更
      - `+ backup.incremental`
      - `- backup.extend_info.incremental`
  - **ListBackups**
    - 响应参数变更
      - `+ backups.incremental`
      - `- backups.extend_info.incremental`
  - **ListVault**
    - 响应参数变更
      - `- sys_lock_source_service`
  - **CreateVault**
    - 请求参数变更
      - `+ vault.sys_lock_source_service`
  - **ListExternalVault**
    - 响应参数变更
      - `- sys_lock_source_service`

### HuaweiCloud SDK CFW

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListFlowLogs**
    - 响应参数变更
      - `* data.records.bytes: int32 -> double`

### HuaweiCloud SDK CTS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **UpdateTracker**
    - 请求参数变更
      - `+ agency_name`
  - **CreateTracker**
    - 请求参数变更
      - `+ agency_name`
    - 响应参数变更
      - `+ agency_name`
  - **ListTrackers**
    - 响应参数变更
      - `+ trackers.agency_name`
  - **UpdateNotification**
    - 请求参数变更
      - `+ agency_name`
    - 响应参数变更
      - `+ agency_name`
  - **CreateNotification**
    - 请求参数变更
      - `+ agency_name`
    - 响应参数变更
      - `+ agency_name`
  - **ListNotifications**
    - 响应参数变更
      - `+ notifications.agency_name`

### HuaweiCloud SDK OCR

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **RecognizeMvsInvoice**
    - 响应参数变更
      - `+ result.reverse_issue`
  - **RecognizeThailandLicensePlate**
    - 响应参数变更
      - `+ result.province`

### HuaweiCloud SDK RDS

- _新增特性_
  - 支持接口`BatchStopInstance`
- _解决问题_
  - 无
- _特性变更_
  - 无

# 3.1.78 2024-03-21

### HuaweiCloud SDK CDN

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ShowVerifyDomainOwnerInfo**
    - 响应参数变更
      - `+ file_verify_domains`

### HuaweiCloud SDK CodeArtsDeploy

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **CreateApp**
    - 请求参数变更
      - `+ group_id`

### HuaweiCloud SDK DRS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ShowPositionResult**
    - 响应参数变更
      - `+ status`

### HuaweiCloud SDK GEIP

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListSupportMasks**
    - 响应参数变更
      - `+ support_masks.ip_version: enum value [4,6]`
  - **ListGlobalEips**
    - 响应参数变更
      - `+ global_eips.ip_version: enum value [4,6]`
  - **DetachInternetBandwidth**
    - 响应参数变更
      - `+ global_eip.ip_version: enum value [4,6]`
  - **BatchCreateGlobalEip**
    - 响应参数变更
      - `+ global_eip.ip_version: enum value [4,6]`
  - **ShowGlobalEip**
    - 响应参数变更
      - `+ global_eip.ip_version: enum value [4,6]`
  - **AttachInternetBandwidth**
    - 响应参数变更
      - `+ global_eip.ip_version: enum value [4,6]`
  - **ListGlobalEipSegments**
    - 响应参数变更
      - `+ global_eip_segments.ip_version: enum value [4,6]`
  - **ShowGlobalEipSegment**
    - 响应参数变更
      - `+ global_eip_segment.ip_version: enum value [4,6]`
  - **ListGeipPools**
    - 响应参数变更
      - `+ geip_pools.ip_version: enum value [4,6]`

### HuaweiCloud SDK Live

- _新增特性_
  - 支持以下接口：
    - `ListOttChannelInfo`
    - `CreateOttChannelInfo`
    - `DeleteOttChannelInfo`
    - `ModifyOttChannelInfoEndPoints`
    - `ModifyOttChannelInfoInput`
    - `ModifyOttChannelInfoRecordSettings`
    - `ModifyOttChannelInfoGeneral`
    - `ModifyOttChannelInfoStats`
    - `ModifyOttChannelInfoEncoderSettings`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK OCR

- _新增特性_
  - 支持接口`RecognizeHouseholdRegister`
- _解决问题_
  - 无
- _特性变更_
  - **RecognizeSmartDocumentRecognizer**
    - 请求参数变更
      - `+ form`
      - `+ kv_map`
    - 响应参数变更
      - `+ result.form_result`
      - `+ result.layout_result.layout_block_list.table_id`
      - `+ result.layout_result.layout_block_list.form_id`

### HuaweiCloud SDK RDS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ShowAutoEnlargePolicy**
    - 响应参数变更
      - `+ step_percent`
  - **SetAutoEnlargePolicy**
    - 请求参数变更
      - `+ step_percent`

# 3.1.77 2024-03-14

### HuaweiCloud SDK DRS

- _新增特性_
  - 支持接口`ListAvailableNodeTypes`
- _解决问题_
  - 无
- _特性变更_
  - **BatchSetPolicy**
    - 请求参数变更
      - `+ jobs.ddl_topic`
  - **BatchCreateJobs**
    - 请求参数变更
      - `+ jobs.public_ip_list`
  - **ShowJobList**
    - 响应参数变更
      - `+ jobs.children.job_direction: enum value [non-dbs]`
      - `- jobs.children.job_direction: enum value [no-dbs]`
  - **BatchListJobDetails**
    - 响应参数变更
      - `+ results.public_ip_list`
      - `+ results.bind_public_ip_state`
      - `+ results.children`
  - **ShowUpdateObjectSavingStatus**
    - 响应参数变更
      - `+ job_id`
  - **CollectDbObjectsAsync**
    - 响应参数变更
      - `+ job_id`
  - **ShowDataProcessingRulesResult**
    - 响应参数变更
      - `+ job_id`
  - **CollectDbObjectsInfo**
    - 响应参数变更
      - `+ job_id`
  - **CollectPositionAsync**
    - 响应参数变更
      - `+ job_id`
  - **CollectColumns**
    - 响应参数变更
      - `+ job_id`
  - **CreateJob**
    - 请求参数变更
      - `+ job.public_ip_list`
  - **BatchCreateJobsAsync**
    - 请求参数变更
      - `+ jobs.public_ip_list`
  - **UpdateDataProgress**
    - 响应参数变更
      - `+ job_id`
  - **CheckDataFilter**
    - 响应参数变更
      - `+ job_id`
  - **ListAsyncJobDetail**
    - 响应参数变更
      - `+ jobs.public_ip_list`
      - `+ jobs.bind_public_ip_state`
      - `+ jobs.children`
  - **ShowJobDetail**
    - 响应参数变更
      - `+ job.public_ip_list`
      - `+ job.bind_public_ip_state`
      - `+ job.children`
  - **ExecuteJobAction**
    - 请求参数变更
      - `+ job.action_name: enum value [bind_eip,unbind_eip]`
      - `+ job.action_params.public_ip_config`
  - **BatchExecuteJobActions**
    - 请求参数变更
      - `+ jobs.action_name: enum value [bind_eip,unbind_eip]`
      - `+ jobs.action_params.public_ip_config`

### HuaweiCloud SDK RDS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ShowBinlogClearPolicy**
    - 响应参数变更
      - `+ binlog_clear_type`

# 3.1.76 2024-03-07

### HuaweiCloud SDK GaussDBforNoSQL

- _新增特性_
  - 支持接口`UpdateDatabases`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK OCR

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **RecognizeIdCard**
    - 请求参数变更
      - `+ return_portrait_image`
      - `+ return_adjusted_image`
    - 响应参数变更
      - `+ result.portrait_image`
      - `+ result.adjusted_image`
      - `+ result.front.portrait_image`
      - `+ result.front.adjusted_image`
      - `+ result.back.adjusted_image`

### HuaweiCloud SDK RDS

- _新增特性_
  - 支持以下接口：
    - `ShowStorageUsedSpace`
    - `SwitchSqlLimit`
    - `UpdateSqlLimit`
    - `ListSqlLimit`
    - `CreateSqlLimit`
    - `DeleteSqlLimit`
- _解决问题_
  - 无
- _特性变更_
  - **ListInstances**
    - 响应参数变更
      - `* instances.volume: object<Volume> -> object<VolumeForInstanceResponse>`
  - **CreateRestoreInstance**
    - 请求参数变更
      - `- replica_of_id`
      - `- unchangeable_param`

# 3.1.75 2024-02-29

### HuaweiCloud SDK CFW

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListAddressSets**
    - 请求参数变更
      - `+ query_address_set_type`
    - 响应参数变更
      - `+ data.records.object_id`
      - `+ data.records.address_set_type`
  - **UpdateAclRuleOrder**
    - 响应参数变更
      - `+ data.name`
  - **AddBlackWhiteList**
    - 响应参数变更
      - `+ data.name`
  - **UpdateBlackWhiteList**
    - 响应参数变更
      - `+ data.name`
  - **DeleteBlackWhiteList**
    - 响应参数变更
      - `+ data.name`
  - **ChangeIpsProtectMode**
    - 响应参数变更
      - `+ data.name`
  - **AddServiceSet**
    - 响应参数变更
      - `+ data.name`
  - **ListServiceSetDetail**
    - 响应参数变更
      - `+ data.service_set_type`
  - **UpdateServiceSet**
    - 响应参数变更
      - `+ data.name`
  - **DeleteServiceSet**
    - 响应参数变更
      - `+ data.name`
  - **DeleteServiceItem**
    - 响应参数变更
      - `+ data.name`
  - **CreateFirewall**
    - 请求参数变更
      - `- flavor.version: enum value [Platinum]`
    - 响应参数变更
      - `- data.flavor.version: enum value [Platinum]`
  - **ChangeEipStatus**
    - 响应参数变更
      - `+ data.id`
  - **DeleteAddressItem**
    - 响应参数变更
      - `+ data.name`
  - **AddAddressSet**
    - 响应参数变更
      - `+ data.name`
  - **ListAddressSetDetail**
    - 请求参数变更
      - `+ query_address_set_type`
    - 响应参数变更
      - `+ data.address_set_type`
  - **UpdateAddressSet**
    - 响应参数变更
      - `* data: object<IdObject> -> object<UpdateAddressSetResponseData>`
  - **DeleteAddressSet**
    - 响应参数变更
      - `+ data.name`
  - **CreateEastWestFirewall**
    - 响应参数变更
      - `+ data.name`
  - **ListEastWestFirewall**
    - 响应参数变更
      - `+ data.protect_infos.status`
  - **AddAclRule**
    - 响应参数变更
      - `+ data.rules.name`
  - **DeleteAclRule**
    - 响应参数变更
      - `+ data.name`
  - **UpdateAclRule**
    - 响应参数变更
      - `+ data.name`
  - **ListAclRules**
    - 响应参数变更
      - `+ data.records.created_date`
      - `+ data.records.last_open_time`
  - **AddServiceItems**
    - 响应参数变更
      - `+ data.items.name`
  - **AddAddressItem**
    - 响应参数变更
      - `+ data.items.name`
  - **ListServiceSets**
    - 响应参数变更
      - `+ data.records.service_set_type`
      - `+ data.records.project_id`
      - `+ data.records.protocols`
  - **ListProtectedVpcs**
    - 响应参数变更
      - `+ data.total_assets`
  - **ListFirewallDetail**
    - 响应参数变更
      - `+ data.records.is_available_obs`
      - `+ data.records.is_support_threat_tags`
  - **ListFirewallList**
    - 响应参数变更
      - `+ is_support_postpaid`
      - `+ is_support_buy_professional`
      - `+ has_ndr`
      - `+ is_support_basic_version`

### HuaweiCloud SDK KVS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - 移除接口`RenameKv`、`BatchGetKv`、`TransactWriteSkeyKv`

### HuaweiCloud SDK LTS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **CreateLogStream**
    - 请求参数变更
      - `+ log_stream_name_alias`
      - `+ enterprise_project_name`

# 3.1.74 2024-02-22

### HuaweiCloud SDK GaussDB

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ModifyGaussMySqlProxyRouteMode**
    - 请求参数变更
      - `+ new_node_auto_add_status`
      - `+ new_node_weight`

### HuaweiCloud SDK GaussDBforopenGauss

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListRecycleInstances**
    - 响应参数变更
      - `+ instances.engine_name`
      - `+ instances.volume_size`
      - `+ instances.enterprise_project_name`
      - `+ instances.backup_level`

### HuaweiCloud SDK IMS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListImages**
    - 响应参数变更
      - `+ images.__image_displayname`
  - **UpdateImage**
    - 响应参数变更
      - `+ __image_displayname`

### HuaweiCloud SDK OCR

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **RecognizeTrainTicket**
    - 响应参数变更
      - `+ result.invoice_style`
      - `+ result.issue_date`
      - `+ result.discount_mark`
      - `+ result.serial_number`
      - `+ result.tax_amount`
      - `+ result.tax_rate`
      - `+ result.air_conditioning`
      - `+ result.original_invoice_number`
      - `+ result.unified_social_credit_code`
      - `+ result.buyer_name`
      - `+ result.total_amount_excluding_tax`
      - `+ result.invoice_number`
      - `+ result.seal_mark`
      - `+ result.title`
      - `+ result.area`
      - `+ result.receipt_number`
      - `+ result.amount_in_figures`
      - `+ result.amount_in_words`

# 3.1.73 2024-02-07

### HuaweiCloud SDK GEIP

- _新增特性_
  - 支持全域弹性公网IP服务
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK EIP

- _新增特性_
  - 支持以下接口：
    - `ListTenantVpcIgws`
    - `CreateTenantVpcIgw`
    - `ShowInternalVpcIgw`
    - `UpdateTenantVpcIgw`
    - `DeleteTenantVpcIgw`
    - `ListProjectGeipBindings`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK GaussDB

- _新增特性_
  - 支持接口`UpdateNewNodeAutoAddSwitch`
- _解决问题_
  - 无
- _特性变更_
  - **CreateGaussMySqlProxy**
    - 请求参数变更
      - `+ new_node_auto_add_status`
      - `+ new_node_weight`
  - **ShowGaussMySqlProxyList**
    - 响应参数变更
      - `+ proxy_list.proxy.new_node_auto_add_status`
      - `+ proxy_list.proxy.new_node_weight`

### HuaweiCloud SDK GaussDBforopenGauss

- _新增特性_
  - 支持接口`StopBackup`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK RDS

- _新增特性_
  - 支持以下接口：
    - `UpdateDatabaseOwner`
    - `ExecutePrivilegeDatabaseUserRole`
    - `ExecuteRevokeDatabaseUserRole`
    - `ListDatabaseUserRole`
    - `UpdatePostgresqlExtension`
- _解决问题_
  - 无
- _特性变更_
  - **ListPostgresqlExtension**
    - 响应参数变更
      - `+ extensions.version_update`

# 3.1.72 2024-02-01

### HuaweiCloud SDK CDN

- _新增特性_
  - 支持接口`ShowLogs`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK GaussDB

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **CreateGaussMySqlInstance**
    - 请求参数变更
      - `+ tde_info`
  - **ShowGaussMySqlInstanceInfoUnifyStatus**
    - 响应参数变更
      - `+ instance.tde_info`
  - **ListGaussMySqlInstanceDetailInfoUnifyStatus**
    - 响应参数变更
      - `+ instances.tde_info`

### HuaweiCloud SDK RDS

- _新增特性_
  - 支持以下接口：
    - `StartInstanceReduceVolumeAction`
    - `UpdateHostPrivilege`
    - `ShowIncreBackupPolicy1`
    - `UpdateIncreBackupPolicy1`
    - `ListRdSforMySqlProxy`
    - `DeleteRdSforMySqlProxy`
    - `ModifyRdSforMySqlProxyRouteMode`
    - `RestartRdSforMysqlProxy`
    - `ListRdSforMysqlProxyFlavors`
    - `CreateRdSforMySqlProxy`
- _解决问题_
  - 无
- _特性变更_
  - **SetAuditlogPolicy**
    - 请求参数变更
      - `+ audit_types`
  - **CreateDbUser**
    - 请求参数变更
      - `+ is_privilege`

# 3.1.71 2024-01-25

### HuaweiCloud SDK GaussDB

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **CreateGaussMySqlReadonlyNode**
    - 请求参数变更
      - `+ availability_zones`

### HuaweiCloud SDK OCR

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **RecognizeAutoClassification**
    - 请求参数变更
      - `+ detect_seal`
    - 响应参数变更
      - `+ result.seal_mark`
  - **RecognizeVatInvoice**
    - 响应参数变更
      - `+ result.province`
      - `+ result.city`
      - `+ result.belong_buyer_name`
      - `+ result.belong_seller_name`
      - `+ result.belong_vat_code`
      - `+ result.belong_number`
      - `+ result.belong_pages`
      - `+ result.belong_current_page`
      - `+ result.belong_remarks`
      - `+ result.belong_issue_date`
      - `+ result.sales_mark`
      - `+ result.belong_sum_amount`
      - `+ result.belong_sum_tax`
      - `+ result.belong_subtotal_amount`
      - `+ result.belong_subtotal_tax`
      - `+ result.belong_discount_amount`
      - `+ result.belong_discount_tax`
      - `+ result.belong_item_list`

### HuaweiCloud SDK RDS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListFlavors**
    - 请求参数变更
      - `+ is_serverless`
  - **ListInstances**
    - 响应参数变更
      - `+ instances.serverless_info`
  - **CreateInstance**
    - 请求参数变更
      - `+ serverless_info`
  - **CreateRestoreInstance**
    - 请求参数变更
      - `+ serverless_info`

### HuaweiCloud SDK VOD

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **CreateAssetByFileUpload**
    - 请求参数变更
      - `* category_id: string -> int32`
  - **CreateAssetProcessTask**
    - 请求参数变更
      - `+ hls_storage_type`
  - **ListTopStatistics**
    - 响应参数变更
      - `- top_urls.duration_ms`
  - **ListAssetList**
    - 响应参数变更
      - `- assets.duration_ms`
  - **ShowTakeOverAssetDetails**
    - 响应参数变更
      - `- base_info.meta_data.duration_ms`
  - **PublishAssets**
    - 响应参数变更
      - `- asset_info_array.base_info.meta_data.duration_ms`
  - **UnpublishAssets**
    - 响应参数变更
      - `- asset_info_array.base_info.meta_data.duration_ms`
  - **ShowAssetMeta**
    - 响应参数变更
      - `- asset_info_array.base_info.meta_data.duration_ms`
  - **ShowAssetDetail**
    - 响应参数变更
      - `- base_info.meta_data.duration_ms`
  - **ShowTakeOverTaskDetails**
    - 响应参数变更
      - `- assets.base_info.meta_data.duration_ms`

# 3.1.70 2024-01-18

### HuaweiCloud SDK CDN

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ShowTopUrl**
    - 请求参数变更
      - `+ service_area: enum value [global]`

### HuaweiCloud SDK CDN

- _新增特性_
  - 支持接口`ListCdnDomainTopRefers`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK KVS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - 移除接口`TransactGetKv`

### HuaweiCloud SDK OCR

- _新增特性_
  - 支持接口`RecognizeSeal`
- _解决问题_
  - 无
- _特性变更_
  - **RecognizeFlightItinerary**
    - 响应参数变更
      - `+ result.tax`
      - `+ result.tax_rate`
      - `+ result.buyer_name`
      - `+ result.buyer_id`
      - `+ result.number`
      - `+ result.international_flag`
      - `+ result.issue_status`

### HuaweiCloud SDK RDS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ShowAuditlogPolicy**
    - 响应参数变更
      - `+ all_audit_log_action`
      - `+ audit_types`
  - **ListRecycleInstances**
    - 响应参数变更
      - `+ instances.is_serverless`

# 3.1.69 2024-01-11

### HuaweiCloud SDK DRS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **BatchValidateConnections**
    - 请求参数变更
      - `+ jobs.customized_dns`

### HuaweiCloud SDK DRS

- _新增特性_
  - 支持以下接口：
    - `BatchCreateTags`
    - `BatchDeleteTags`
    - `ListInstanceByTags`
    - `CountInstanceByTags`
    - `ListInstanceTags`
    - `ListTags`
    - `UpdateJobConfigurations`
    - `ListJobParameters`
    - `ListJobHistoryParameters`
- _解决问题_
  - 无
- _特性变更_
  - **ListLinks**
    - 响应参数变更
      - `+ job_links.engine_type: enum value [redis-to-gaussredis,rediscluster-to-gaussredis]`
  - **ListJobs**
    - 请求参数变更
      - `+ engine_type: enum value [redis-to-gaussredis,rediscluster-to-gaussredis]`
    - 响应参数变更
      - `+ jobs.engine_type: enum value [redis-to-gaussredis,rediscluster-to-gaussredis]`
      - `+ jobs.children.engine_type: enum value [redis-to-gaussredis,rediscluster-to-gaussredis]`
  - **CreateJob**
    - 请求参数变更
      - `+ job.base_info.engine_type: enum value [redis-to-gaussredis,rediscluster-to-gaussredis]`
      - `+ job.source_endpoint.customized_dns`
      - `+ job.source_endpoint.db_type: enum value [redis,rediscluster,gaussredis]`
      - `+ job.source_endpoint.endpoint.endpoint_name: enum value [redis,ecs_redis,rediscluster,ecs_rediscluster,cloud_gaussdb_redis]`
      - `+ job.source_endpoint.config.node_num`
  - **BatchCreateJobsAsync**
    - 请求参数变更
      - `+ jobs.base_info.engine_type: enum value [redis-to-gaussredis,rediscluster-to-gaussredis]`
      - `+ jobs.source_endpoint.customized_dns`
      - `+ jobs.source_endpoint.db_type: enum value [redis,rediscluster,gaussredis]`
      - `+ jobs.source_endpoint.endpoint.endpoint_name: enum value [redis,ecs_redis,rediscluster,ecs_rediscluster,cloud_gaussdb_redis]`
      - `+ jobs.source_endpoint.config.node_num`
  - **ListAsyncJobDetail**
    - 响应参数变更
      - `+ jobs.base_info.engine_type: enum value [redis-to-gaussredis,rediscluster-to-gaussredis]`
      - `+ jobs.source_endpoint.customized_dns`
      - `+ jobs.source_endpoint.db_type: enum value [redis,rediscluster,gaussredis]`
      - `+ jobs.source_endpoint.endpoint.endpoint_name: enum value [redis,ecs_redis,rediscluster,ecs_rediscluster,cloud_gaussdb_redis]`
      - `+ jobs.source_endpoint.config.node_num`
  - **UpdateBatchAsyncJobs**
    - 请求参数变更
      - `+ jobs.params.base_info.engine_type: enum value [redis-to-gaussredis,rediscluster-to-gaussredis]`
      - `+ jobs.params.source_endpoint.customized_dns`
      - `+ jobs.params.source_endpoint.db_type: enum value [redis,rediscluster,gaussredis]`
      - `+ jobs.params.source_endpoint.endpoint.endpoint_name: enum value [redis,ecs_redis,rediscluster,ecs_rediscluster,cloud_gaussdb_redis]`
      - `+ jobs.params.source_endpoint.config.node_num`
  - **ShowJobDetail**
    - 响应参数变更
      - `+ job.base_info.engine_type: enum value [redis-to-gaussredis,rediscluster-to-gaussredis]`
      - `+ job.source_endpoint.customized_dns`
      - `+ job.source_endpoint.db_type: enum value [redis,rediscluster,gaussredis]`
      - `+ job.source_endpoint.endpoint.endpoint_name: enum value [redis,ecs_redis,rediscluster,ecs_rediscluster,cloud_gaussdb_redis]`
      - `+ job.source_endpoint.config.node_num`
  - **UpdateJob**
    - 请求参数变更
      - `+ job.params.base_info.engine_type: enum value [redis-to-gaussredis,rediscluster-to-gaussredis]`
      - `+ job.params.source_endpoint.customized_dns`
      - `+ job.params.source_endpoint.db_type: enum value [redis,rediscluster,gaussredis]`
      - `+ job.params.source_endpoint.endpoint.endpoint_name: enum value [redis,ecs_redis,rediscluster,ecs_rediscluster,cloud_gaussdb_redis]`
      - `+ job.params.source_endpoint.config.node_num`
  - **ExecuteJobAction**
    - 请求参数变更
      - `+ job.action_name: enum value [column_limit,reload_parameters]`
      - `+ job.action_params.endpoints.customized_dns`
      - `+ job.action_params.endpoints.db_type: enum value [redis,rediscluster,gaussredis]`
      - `+ job.action_params.endpoints.endpoint.endpoint_name: enum value [redis,ecs_redis,rediscluster,ecs_rediscluster,cloud_gaussdb_redis]`
      - `+ job.action_params.endpoints.config.node_num`
  - **BatchExecuteJobActions**
    - 请求参数变更
      - `+ jobs.action_name: enum value [column_limit,reload_parameters]`
      - `+ jobs.action_params.endpoints.customized_dns`
      - `+ jobs.action_params.endpoints.db_type: enum value [redis,rediscluster,gaussredis]`
      - `+ jobs.action_params.endpoints.endpoint.endpoint_name: enum value [redis,ecs_redis,rediscluster,ecs_rediscluster,cloud_gaussdb_redis]`
      - `+ jobs.action_params.endpoints.config.node_num`

### HuaweiCloud SDK ECS

- _新增特性_
  - 支持接口`NovaShowServerInterface`
- _解决问题_
  - 无
- _特性变更_
  - **UpdateServer**
    - 响应参数变更
      - `+ server.OS-EXT-SRV-ATTR:user_data`

### HuaweiCloud SDK KVS

- _新增特性_
  - 支持接口`ListStore`、`TransactWriteSkeyKv`、`TransactGetKv`
- _解决问题_
  - 无
- _特性变更_
  - **CreateTable**
    - 请求参数变更
      - `+ global_secondary_index_schema`
      - `+ pre_split_key_options`
      - `+ local_secondary_index_schema`
      - `+ table_name`
      - `+ primary_key_schema`
      - `- TableName`
      - `- Temporary`
      - `- Global2ndIndexSchema`
      - `- PrimaryKeySchema`
      - `- Local2ndIndexSchema`
      - `- PreSplitKeyOptions`
    - 响应参数变更
      - `+ global_secondary_index_schema`
      - `+ pre_split_key_options`
      - `+ local_secondary_index_schema`
      - `+ table_name`
      - `+ primary_key_schema`
      - `- TableName`
      - `- Temporary`
      - `- Global2ndIndexSchema`
      - `- PrimaryKeySchema`
      - `- Local2ndIndexSchema`
      - `- PreSplitKeyOptions`
  - **DescribeTable**
    - 请求参数变更
      - `+ table_name`
      - `- TableName`
    - 响应参数变更
      - `+ run_time_info`
      - `+ global_secondary_index_schema`
      - `+ local_secondary_index_schema`
      - `+ table_name`
      - `+ primary_key_schema`
      - `- TableName`
      - `- Global2ndIndexSchema`
      - `- RuntimeInfo`
      - `- PrimaryKeySchema`
      - `- Local2ndIndexSchema`
  - **ListTable**
    - 请求参数变更
      - `+ cursor_name`
      - `+ limit`
      - `- CursorName`
      - `- LimitNum`
    - 响应参数变更
      - `+ table_names`
      - `+ cursor_name`
      - `- CursorName`
      - `- TableNameList`
  - **PutKv**
    - 请求参数变更
      - `+ table_name`
      - `+ condition_expression`
      - `+ kv_doc`
      - `+ kv_blob`
      - `- TableName`
      - `- ConditionExpression`
      - `- KvDoc`
      - `- KvBlob`
  - **GetKv**
    - 请求参数变更
      - `+ table_name`
      - `+ primary_key`
      - `+ projection_fields`
      - `+ projection_blob`
      - `- TableName`
      - `- Consistency`
      - `- PrimaryKey`
      - `- ProjectionFields`
      - `- ReturnPartialBlob`
    - 响应参数变更
      - `+ kv_doc`
      - `+ kv_blob_data`
      - `- KvDoc`
      - `- KvBlobData`
  - **UpdateKv**
    - 请求参数变更
      - `+ table_name`
      - `+ primary_key`
      - `+ condition_expression`
      - `+ kv_options`
      - `+ update_fields`
      - `+ projection_fields`
      - `+ update_blob`
      - `+ projection_blob`
      - `- TableName`
      - `- PrimaryKey`
      - `- ConditionExpression`
      - `- KvOptions`
      - `- UpdateFields`
      - `- ProjectionFields`
      - `- UpdateBlob`
      - `- ReturnPartialBlob`
    - 响应参数变更
      - `+ kv_doc`
      - `+ kv_blob_data`
      - `- KvFields`
      - `- KvBlobData`
  - **DeleteKv**
    - 请求参数变更
      - `+ table_name`
      - `+ primary_key`
      - `+ condition_expression`
      - `+ projection_fields`
      - `+ projection_blob`
      - `- TableName`
      - `- PrimaryKey`
      - `- ConditionExpression`
      - `- ExpressionVarDefine`
      - `- ProjectionFields`
      - `- ReturnPartialBlob`
    - 响应参数变更
      - `+ kv_doc`
      - `+ kv_blob_data`
      - `- KvDoc`
      - `- KvBlobData`
  - **ScanKv**
    - 请求参数变更
      - `+ table_name`
      - `+ hint_index_name`
      - `+ limit`
      - `+ start_key`
      - `+ end_key`
      - `+ filter_expression`
      - `+ projection_fields`
      - `+ projection_blob`
      - `- TableName`
      - `- StrongConsistent`
      - `- HintIndex`
      - `- LimitNum`
      - `- StartKey`
      - `- EndKey`
      - `- FilterExpression`
      - `- FilterVarDefine`
      - `- ProjectionFields`
      - `- ReturnPartialBlob`
    - 响应参数变更
      - `+ returned_count`
      - `+ returned_kv_items`
      - `+ cursor_key`
      - `+ filtered_count`
      - `- KvArray`
      - `- ReturnedCount`
      - `- CursorKey`
      - `- FilteredCount`
  - **ScanSkeyKv**
    - 请求参数变更
      - `+ table_name`
      - `+ hint_index_name`
      - `+ limit`
      - `+ shard_key`
      - `+ start_sort_key`
      - `+ end_sort_key`
      - `+ filter_expression`
      - `+ projection_fields`
      - `+ projection_blob`
      - `- TableName`
      - `- StrongConsistent`
      - `- HintIndex`
      - `- LimitNum`
      - `- ShardKey`
      - `- StartSortKey`
      - `- EndSortKey`
      - `- FilterExpression`
      - `- FilterVarDefine`
      - `- ProjectionFields`
      - `- ReturnPartialBlob`
    - 响应参数变更
      - `+ returned_count`
      - `+ returned_kv_items`
      - `+ cursor_sort_key`
      - `+ filtered_count`
      - `- CursorSortKey`
      - `- KvArray`
      - `- ReturnedCount`
      - `- FilteredCount`
  - **BatchWriteKv**
    - 请求参数变更
      - `+ table_opers`
      - `- TableOpers`
    - 响应参数变更
      - `+ unprocessed_opers`
      - `- UnprocessedOpers`
  - **RenameKv**
    - 请求参数变更
      - `+ table_name`
      - `+ primary_key`
      - `+ new_sort_key`
      - `+ kv_options`
      - `+ update_blob_attr`
      - `- TableName`
      - `- PrimaryKey`
      - `- NewSortKey`
      - `- KvOptions`
      - `- UpdateBlobAttr`
      - `- ReturnBlobAttr`
    - 响应参数变更
      - `+ old_primary_key`
      - `+ kv_blob_attr`
      - `- KvBlobAttr`
      - `- KvDoc`
      - `- OldPrimaryKey`
  - **BatchGetKv**
    - 请求参数变更
      - `+ batch_get_kv_opers`
      - `- TableOpers`
    - 响应参数变更
      - `+ returned_kv_items_of_all`
      - `+ exception_opers`
      - `- Exceptions`
      - `- TableKvArray`

### HuaweiCloud SDK MPC

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListTranscodingTask**
    - 响应参数变更
      - `+ task_array.progress`
  - **ListTranscodeDetail**
    - 响应参数变更
      - `+ task_array.progress`

### HuaweiCloud SDK OCR

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **RecognizeIdCard**
    - 请求参数变更
      - `+ detect_tampering`
      - `+ detect_border_integrity`
      - `+ detect_blocking_within_border`
      - `+ detect_blur`
      - `+ detect_interim`
      - `+ detect_glare`
    - 响应参数变更
      - `+ result.detect_tampering_result`
      - `+ result.detect_border_integrity_result`
      - `+ result.detect_blocking_within_border_result`
      - `+ result.detect_blur_result`
      - `+ result.detect_interim_result`
      - `+ result.detect_glare_result`
      - `+ result.score_info`
      - `+ result.front`
      - `+ result.back`
      - `+ result.verification_result.valid_validity_period`

### HuaweiCloud SDK RDS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListInstances**
    - 请求参数变更
      - `+ eps_id`
  - **BatchRestoreDatabase**
    - 请求参数变更
      - `+ instances.is_fast_restore`

### HuaweiCloud SDK VPC

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ShowAddressGroup**
    - 响应参数变更
      - `+ address_group.ip_extra_set`
  - **UpdateAddressGroup**
    - 请求参数变更
      - `+ address_group.ip_extra_set`
    - 响应参数变更
      - `+ address_group.ip_extra_set`
  - **ListAddressGroup**
    - 响应参数变更
      - `+ address_groups.ip_extra_set`
  - **CreateAddressGroup**
    - 请求参数变更
      - `+ address_group.ip_extra_set`
    - 响应参数变更
      - `+ address_group.ip_extra_set`

# 3.1.68 2024-01-04

### HuaweiCloud SDK MPC

- _新增特性_
  - 支持接口`ShowTenantAccessInfo`、`UpdateTenantAccessInfo`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK RDS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **SetOffSiteBackupPolicy**
    - 请求参数变更
      - `* policy_para: list<OffSiteBackupPolicy> -> object<OffSiteBackupPolicy>`

### HuaweiCloud SDK SMN

- _新增特性_
  - 支持以下接口：
    - `PublishHttpDetect`
    - `ShowHttpDetectResult`
    - `BatchUpdateSubscriptionsFilterPolices`
    - `BatchCreateSubscriptionsFilterPolices`
    - `BatchDeleteSubscriptionsFilterPolices`
    - `AddSubscriptionFromSubscriptionUser`
- _解决问题_
  - 无
- _特性变更_
  - 废弃以下接口：
    - `ListApplicationAttributes`
    - `UpdateApplication`
    - `DeleteApplication`
    - `ListApplicationEndpointAttributes`
    - `UpdateApplicationEndpoint`
    - `DeleteApplicationEndpoint`
    - `PublishAppMessage`
    - `CreateApplication`
    - `ListApplications`
    - `CreateApplicationEndpoint`
    - `ListApplicationEndpoints`
  - **PublishMessage**
    - 请求参数变更
      - `+ message_attributes`
  - **ListTopics**
    - 请求参数变更
      - `+ fuzzy_display_name`
  - **ListSubscriptions**
    - 请求参数变更
      - `+ fuzzy_remark`
    - 响应参数变更
      - `+ subscriptions.filter_polices`
  - **ListSubscriptionsByTopic**
    - 请求参数变更
      - `+ fuzzy_remark`
    - 响应参数变更
      - `+ subscriptions.filter_polices`

### HuaweiCloud SDK VPC

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListPorts**
    - 响应参数变更
      - `+ ports.ipv6_bandwidth_id`
  - **CreatePort**
    - 响应参数变更
      - `+ port.ipv6_bandwidth_id`
  - **ShowPort**
    - 响应参数变更
      - `+ port.ipv6_bandwidth_id`
  - **UpdatePort**
    - 响应参数变更
      - `+ port.ipv6_bandwidth_id`

# 3.1.67 2023-12-27

### HuaweiCloud SDK AAD

- _新增特性_
  - 支持以下接口：
    - `CreateAadDomain`
    - `CreateCertificate`
    - `ModifyDomainWebSwitch`
    - `ListSourceIps`
    - `AddBlackWhiteIpList`
    - `DeleteBlackWhiteIpList`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK CSMS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListResourceInstances**
    - 响应参数变更
      - `+ resources.sys_tags`

### HuaweiCloud SDK DDS

- _新增特性_
  - 支持接口`ShowClientNetwork`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK GaussDBforNoSQL

- _新增特性_
  - 支持接口`ListJobs`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK RDS

- _新增特性_
  - 支持接口`SetInstancesNewDbShrink`、`StopBackup`
- _解决问题_
  - 无
- _特性变更_
  - 无

# 3.1.66 2023-12-21

### HuaweiCloud SDK CloudTable

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **CreateCloudTableCluster**
    - 请求参数变更
      - `+ cluster_name`
      - `+ datastore`
      - `+ availability_zone`
      - `+ nics`
      - `+ cluster_info`
      - `+ enterprise_project_id`
      - `+ vpc_id`
      - `+ dbuser`
      - `+ dbuserpwd`
      - `- cluster`
      - `* body: object<CreateClusterRequestBody> -> object<CreateClusterReqBody>`
    - 响应参数变更
      - `+ jobId`
      - `+ getJobEndpoint`
  - **CreateCluster**
    - 请求参数变更
      - `* cluster.instance.nics: list<Nics> -> list<nic>`

### HuaweiCloud SDK DRS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **BatchCreateJobs**
    - 请求参数变更
      - `+ jobs.engine_type: enum value [mysql-to-kafka,taurus-to-kafka,gaussdbv5ha-to-kafka]`
      - `+ jobs.source_endpoint.db_type: enum value [taurus]`
  - **BatchValidateConnections**
    - 请求参数变更
      - `+ jobs.db_type: enum value [taurus]`
  - **ShowJobList**
    - 请求参数变更
      - `+ engine_type: enum value [gaussdbv5,postgresql,mysql-to-kafka,taurus-to-kafka,gaussdbv5ha-to-kafka]`
  - **BatchUpdateJob**
    - 请求参数变更
      - `+ jobs.engine_type: enum value [gaussdbv5,postgresql,mysql-to-kafka,taurus-to-kafka,gaussdbv5ha-to-kafka]`
      - `+ jobs.source_endpoint.db_type: enum value [taurus]`
  - **BatchListJobDetails**
    - 响应参数变更
      - `+ results.source_endpoint.db_type: enum value [taurus]`
      - `+ results.inst_info.engine_type: enum value [gaussdbv5,postgresql,mysql-to-kafka,taurus-to-kafka,gaussdbv5ha-to-kafka]`
  - **ShowJobDetail**
    - 请求参数变更
      - `+ type: enum value [compare]`
      - `+ type: enum value [comapre]`
      - `+ query_type: enum value [diff]`

### HuaweiCloud SDK ECS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **BatchCreateServerTags**
    - 请求参数变更
      - `* tags: list<ServerTag> -> list<BatchAddServerTag>`
  - **UpdateServer**
    - 请求参数变更
      - `+ server.user_data`

### HuaweiCloud SDK EIP

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - 移除接口`UpdateDisassociatePublicip`、`UpdateAssociatePublicip`

### HuaweiCloud SDK IVS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **DetectStandardByNameAndId**
    - 请求参数变更
      - `+ data.req_data.detail`
      - `+ data.req_data.crop`
  - **DetectStandardByIdCardImage**
    - 请求参数变更
      - `+ data.req_data.detail`
      - `+ data.req_data.crop`
  - **DetectStandardByVideoAndIdCardImage**
    - 请求参数变更
      - `+ data.req_data.detail`
  - **DetectStandardByVideoAndNameAndId**
    - 请求参数变更
      - `+ data.req_data.detail`

### HuaweiCloud SDK MPC

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **CreateTranscodingTask**
    - 请求参数变更
      - `+ video_process.hls_storage_type`

### HuaweiCloud SDK TICS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ShowAgentDetail**
    - 响应参数变更
      - `* agent_deploy.aom_flag: byte -> boolean`
      - `* agent_deploy.bcs_flag: byte -> boolean`
      - `* agent_deploy.high_avail: byte -> boolean`
      - `+ agent_deploy_detail.ief_instance_id`
      - `+ agent_deploy_node.agent_vpcep_eps_id`
      - `+ agent_deploy_node.league_server_ip_security_group_rule`
      - `+ agent_deploy_node.league_server_snat_ip`
      - `+ agent_deploy_node.server_to_agent_vpcep_epi_id`
      - `+ agent_deploy_node.server_to_agent_vpcep_epi_ip`
      - `+ agent_deploy_node.snat_rule_id`

### HuaweiCloud SDK VOD

- _新增特性_
  - 支持接口`ListAssetDailySummaryLog`、`UpdateStorageMode`、`ShowVodRetrieval`
- _解决问题_
  - 无
- _特性变更_
  - **ShowTakeOverAssetDetails**
    - 响应参数变更
      - `+ transcode_info.output.group_id`
      - `+ transcode_info.output.group_name`
  - **PublishAssets**
    - 响应参数变更
      - `+ asset_info_array.is_multi_transcode`
      - `+ asset_info_array.play_info_array.group_id`
      - `+ asset_info_array.play_info_array.group_name`
  - **UnpublishAssets**
    - 响应参数变更
      - `+ asset_info_array.is_multi_transcode`
      - `+ asset_info_array.play_info_array.group_id`
      - `+ asset_info_array.play_info_array.group_name`
  - **ShowAssetMeta**
    - 响应参数变更
      - `+ asset_info_array.is_multi_transcode`
      - `+ asset_info_array.play_info_array.group_id`
      - `+ asset_info_array.play_info_array.group_name`
  - **ShowAssetDetail**
    - 响应参数变更
      - `+ transcode_info.output.group_id`
      - `+ transcode_info.output.group_name`
  - **ShowTakeOverTaskDetails**
    - 响应参数变更
      - `+ assets.transcode_info.output.group_id`
      - `+ assets.transcode_info.output.group_name`

# 3.1.65 2023-12-14

### HuaweiCloud SDK CFW

- _新增特性_
  - 支持接口`CreateFirewall`、`ListJob`、`DeleteFirewall`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK CloudTable

- _新增特性_
  - 支持接口`CreateCloudTableCluster`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK Live

- _新增特性_
  - 支持以下接口：
    - `ListDelayConfig`
    - `UpdateDelayConfig`
    - `ShowPullSourcesConfig`
    - `UpdatePullSourcesConfig`
    - `ListGeoBlockingConfig`
    - `UpdateGeoBlockingConfig`
    - `CreateUrlAuthchain`
    - `ListIpAuthList`
    - `UpdateIpAuthList`
    - `ListPublishTemplate`
    - `UpdatePublishTemplate`
    - `DeletePublishTemplate`
- _解决问题_
  - 无
- _特性变更_
  - **ListRecordContents**
    - 请求参数变更
      - `+ record_type: enum value [PLAN_RECORD,ON_DEMAND_RECORD]`
    - 响应参数变更
      - `- record_contents.record_type: enum value [PLAN_RECORD,ON_DEMAND_RECORD]`

### HuaweiCloud SDK LTS

- _新增特性_
  - 支持接口`CreateAgencyAccess`
- _解决问题_
  - 无
- _特性变更_
  - **ListSqlAlarmRules**
    - 响应参数变更
      - `+ sql_alarm_rules.is_css_sql`
      - `+ sql_alarm_rules.notification_frequency`
      - `+ sql_alarm_rules.alarm_action_rule_name`
      - `+ sql_alarm_rules.status: enum value [RUNNING 启用,STOPPING 停止]`
      - `- sql_alarm_rules.status: enum value [RUNNING,STOPPING]`
      - `* sql_alarm_rules.frequency: object<Frequency> -> object<FrequencyRespBody>`
  - **UpdateSqlAlarmRule**
    - 请求参数变更
      - `+ is_css_sql`
      - `+ notification_frequency`
      - `+ alarm_action_rule_name`
      - `* frequency: object<Frequency> -> object<CreateSqlAlarmRuleFrequency>`
    - 响应参数变更
      - `+ is_css_sql`
      - `+ alarm_action_rule_name`
      - `+ notification_frequency`
      - `+ language: enum value [zh-cn,en-us]`
      - `* frequency: object<Frequency> -> object<FrequencyRespBody>`
  - **CreateSqlAlarmRule**
    - 请求参数变更
      - `+ is_css_sql`
      - `+ notification_frequency`
      - `+ alarm_action_rule_name`
      - `* frequency: object<Frequency> -> object<CreateSqlAlarmRuleFrequency>`
  - **ListKeywordsAlarmRules**
    - 响应参数变更
      - `+ keywords_alarm_rules.notification_frequency`
      - `+ keywords_alarm_rules.alarm_action_rule_name`
      - `+ keywords_alarm_rules.status: enum value [RUNNING  启用,STOPPING  停止]`
      - `- keywords_alarm_rules.status: enum value [RUNNING,STOPPING]`
  - **UpdateKeywordsAlarmRule**
    - 请求参数变更
      - `+ notification_frequency`
      - `+ alarm_action_rule_name`
    - 响应参数变更
      - `+ alarm_action_rule_name`
      - `+ notification_frequency`
      - `+ language: enum value [zh-cn,en-us]`
      - `- keywords_requests.search_time_range_unit: enum value [minute]`
      - `* keywords_requests: list<KeywordsRequest> -> list<KeywordsResBody>`
      - `* frequency: object<Frequency> -> object<FrequencyRespBody>`
  - **CreateKeywordsAlarmRule**
    - 请求参数变更
      - `+ notification_frequency`
      - `+ alarm_action_rule_name`
      - `+ keywords_alarm_level: enum value [Critical]`
      - `- keywords_alarm_level: enum value [CRITICAL]`

### HuaweiCloud SDK RDS

- _新增特性_
  - 支持接口`ListLogLtsConfigs`、`SetLogLtsConfigs`、`DeleteLogLtsConfigs`
- _解决问题_
  - 无
- _特性变更_
  - 无

# 3.1.64 2023-12-07

### HuaweiCloud SDK GaussDB

- _新增特性_
  - 支持接口`ListGaussMySqlInstancesUnifyStatus`、`ShowGaussMySqlInstanceInfoUnifyStatus`、`ListGaussMySqlInstanceDetailInfoUnifyStatus`、`SwitchGaussMySqlProxySsl`
- _解决问题_
  - 无
- _特性变更_
  - **ShowGaussMySqlProxyList**
    - 响应参数变更
      - `+ proxy_list.proxy.ssl_option`

### HuaweiCloud SDK GaussDBforNoSQL

- _新增特性_
  - 支持接口`OfflineNodes`
- _解决问题_
  - 无
- _特性变更_
  - **ListLtsConfigs**
    - 响应参数变更
      - `* instance_lts_configs.instance.supported_log_types: string -> list<string>`

# 3.1.63 2023-11-30

### HuaweiCloud SDK EIP

- _新增特性_
  - 支持接口`BatchModifyBandwidth`、`ListEipBandwidths`、`ListBandwidthsLimit`、`UpdatePublicip`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK GaussDBforNoSQL

- _新增特性_
  - 支持接口`ListInfluxdbSlowLogs`
- _解决问题_
  - 无
- _特性变更_
  - **ListLtsConfigs**
    - 响应参数变更
      - `+ instance_lts_configs.instance.supported_log_types`

### HuaweiCloud SDK RDS

- _新增特性_
  - 支持接口`SetInstancesDbShrink`
- _解决问题_
  - 无
- _特性变更_
  - **UpgradeDbMajorVersion**
    - 响应参数变更
      - `+ job_id`
  - **ShowUpgradeDbMajorVersionStatus**
    - 响应参数变更
      - `+ check_expiration_time`
      - `- report_expiration_time`
  - **StartResizeFlavorAction**
    - 响应参数变更
      - `+ order_id`
  - **StartInstanceEnlargeVolumeAction**
    - 响应参数变更
      - `+ order_id`
  - **StartInstanceSingleToHaAction**
    - 响应参数变更
      - `+ order_id`
  - **ListHistoryDatabase**
    - 请求参数变更
      - `+ engine`
      - `- database_name`

### HuaweiCloud SDK SIS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **RecognizeFlashAsr**
    - 请求参数变更
      - `* obs_bucket_name: optional -> required`
      - `* obs_object_key: optional -> required`

# 3.1.62 2023-11-23

### HuaweiCloud SDK CFW

- _新增特性_
  - 支持接口`ListLogConfig`、`UpdateLogConfig`、`AddLogConfig`、`CreateEastWestFirewall`
- _解决问题_
  - 无
- _特性变更_
  - **ListFlowLogs**
    - 响应参数变更
      - `* data.records.start_time: int32 -> int64`
      - `* data.records.end_time: int32 -> int64`
      - `* data.records.src_port: string -> int32`
      - `* data.records.dst_port: string -> int32`
  - **ListAccessControlLogs**
    - 响应参数变更
      - `* data.records.hit_time: int32 -> int64`
      - `* data.records.src_port: string -> int32`
      - `* data.records.dst_port: string -> int32`
  - **ChangeIpsSwitchStatus**
    - 请求参数变更
      - `+ X-Language`
  - **ListAttackLogs**
    - 响应参数变更
      - `* data.records.event_time: string -> int64`
      - `* data.records.attack_rule_id: int32 -> string`
      - `* data.records.packet: object<Packet> -> string`

# 3.1.61 2023-11-23

### HuaweiCloud SDK DDS

- _新增特性_
  - 支持以下接口：
    - `ListLtsConfigs`
    - `UpdateLtsConfig`
    - `DeleteLtsConfig`
    - `ListLtsErrorLogs`
    - `ShowKillOpRuleRuleList`
    - `UpdateKillOpRule`
    - `CreateKillOpRule`
    - `DeleteKillOpRuleList`
    - `SwitchInstancePrimary`
    - `DeleteReadonlyNode`
    - `StopBackup`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK DRS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **BatchDeleteJobs**
    - 请求参数变更
      - `+ jobs.is_show_breakpoint_position`
  - **BatchSetPolicy**
    - 请求参数变更
      - `+ jobs.file_and_position`
      - `+ jobs.gtid_set`
  - **BatchListProgresses**
    - 响应参数变更
      - `+ results.incre_trans_delay_millis`
  - **ShowJobList**
    - 请求参数变更
      - `+ instance_ids`
      - `+ instance_ip`

### HuaweiCloud SDK DRS

- _新增特性_
  - 支持接口`UploadJdbcDriver`、`ListJdbcDrivers`、`DeleteJdbcDriver`、`SyncJdbcDriver`
- _解决问题_
  - 无
- _特性变更_
  - **BatchCreateJobsAsync**
    - 请求参数变更
      - `+ jobs.policy_config.dml_types`
  - **ListAsyncJobDetail**
    - 响应参数变更
      - `+ jobs.connection_management`
      - `+ jobs.policy_config.dml_types`
  - **UpdateBatchAsyncJobs**
    - 请求参数变更
      - `+ jobs.params.policy_config.dml_types`
  - **ShowJobDetail**
    - 响应参数变更
      - `+ job.connection_management`
      - `+ job.policy_config.dml_types`
  - **UpdateJob**
    - 请求参数变更
      - `+ job.params.policy_config.dml_types`

### HuaweiCloud SDK GaussDB

- _新增特性_
  - 支持接口`ShowRestoreTables`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK GaussDBforNoSQL

- _新增特性_
  - 支持以下接口：
    - `ShowElbIpGroup`
    - `SwitchIpGroup`
    - `ListInstancesSession`
    - `DeleteInstancesSession`
    - `ListInstancesSessionStatistics`
    - `ResetParamGroupTemplate`
    - `ListRedisSlowLogs`
    - `ListCassandraSlowLogs`
    - `ListMongodbSlowLogs`
    - `ListLtsConfigs`
    - `SaveLtsConfigs`
    - `DeleteLtsConfigs`
    - `ListRestoreDatabases`
    - `ListRestoreTables`
    - `ListMongodbErrorLogs`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK OCR

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **RecognizeIdCard**
    - 请求参数变更
      - `+ return_portrait_location`
    - 响应参数变更
      - `+ result.portrait_location`

### HuaweiCloud SDK RDS

- _新增特性_
  - 支持以下接口：
    - `UpgradeDbMajorVersion`
    - `ShowAvailableVersion`
    - `UpgradeDbMajorVersionPreCheck`
    - `ListInspectionHistories`
    - `ListUpgradeHistories`
    - `ShowUpgradeDbMajorVersionStatus`
    - `UpdateTdeStatus`
    - `ShowTdeStatus`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK VOD

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **CreateAssetByFileUpload**
    - 请求参数变更
      - `+ thumbnail.quantity`
      - `+ thumbnail.quantity_time`
      - `+ thumbnail.type: enum value [quantity]`
  - **PublishAssetFromObs**
    - 请求参数变更
      - `+ thumbnail.quantity`
      - `+ thumbnail.quantity_time`
      - `+ thumbnail.type: enum value [quantity]`
  - **CreateAssetProcessTask**
    - 请求参数变更
      - `+ thumbnail.quantity`
      - `+ thumbnail.quantity_time`
      - `+ thumbnail.type: enum value [quantity]`
  - **ListTopStatistics**
    - 响应参数变更
      - `+ top_urls.duration_ms`
  - **UploadMetaDataByUrl**
    - 请求参数变更
      - `+ upload_metadatas.thumbnail.quantity`
      - `+ upload_metadatas.thumbnail.quantity_time`
      - `+ upload_metadatas.thumbnail.type: enum value [quantity]`
  - **ListAssetList**
    - 响应参数变更
      - `+ assets.duration_ms`
  - **ShowTakeOverAssetDetails**
    - 响应参数变更
      - `+ base_info.meta_data.duration_ms`
  - **PublishAssets**
    - 响应参数变更
      - `+ asset_info_array.base_info.meta_data.duration_ms`
  - **UnpublishAssets**
    - 响应参数变更
      - `+ asset_info_array.base_info.meta_data.duration_ms`
  - **ShowAssetMeta**
    - 响应参数变更
      - `+ asset_info_array.base_info.meta_data.duration_ms`
  - **ShowAssetDetail**
    - 响应参数变更
      - `+ base_info.meta_data.duration_ms`
      - `+ thumbnail_info.quantity`
  - **ShowTakeOverTaskDetails**
    - 响应参数变更
      - `+ assets.base_info.meta_data.duration_ms`

# 3.1.60 2023-11-16

### HuaweiCloud SDK CDN

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ShowDomainFullConfig**
    - 响应参数变更
      - `+ configs.business_type`
      - `+ configs.service_area`
      - `+ configs.remark`
      - `+ configs.flexible_origin`
      - `+ configs.slice_etag_status`
      - `+ configs.origin_receive_timeout`
      - `+ configs.remote_auth`
      - `+ configs.websocket`
      - `+ configs.video_seek`
      - `+ configs.request_limit_rules`
      - `+ configs.ip_frequency_limit`
      - `+ configs.hsts`
      - `+ configs.quic`
      - `+ configs.url_auth.sign_method`
      - `+ configs.url_auth.match_type`
      - `+ configs.url_auth.inherit_config`
      - `+ configs.url_auth.key`
      - `+ configs.url_auth.backup_key`
      - `+ configs.url_auth.sign_arg`
      - `+ configs.https.expire_time`
      - `+ configs.https.certificate_type`
      - `+ configs.https.ocsp_stapling_status`
      - `+ configs.sources.weight`
      - `+ configs.sources.obs_bucket_type`
      - `+ configs.sources.bucket_access_key`
      - `+ configs.sources.bucket_secret_key`
      - `+ configs.sources.bucket_region`
      - `+ configs.sources.bucket_name`
      - `+ configs.compress.file_type`
      - `+ configs.user_agent_filter.ua_list`
  - **UpdateDomainFullConfig**
    - 请求参数变更
      - `+ configs.sources.weight`
      - `+ configs.sources.obs_bucket_type`
      - `+ configs.sources.bucket_access_key`
      - `+ configs.sources.bucket_secret_key`
      - `+ configs.sources.bucket_region`
      - `+ configs.sources.bucket_name`
      - `+ configs.compress.file_type`
      - `+ configs.user_agent_filter.ua_list`

### HuaweiCloud SDK CodeArtsBuild

- _新增特性_
  - 支持以下接口：
    - `DownloadBuildLog`
    - `DownloadTaskLog`
    - `ShowFlowGraph`
    - `ShowRecordDetail`
    - `ShowOutputInfo`
    - `StopJob`
    - `CreateBuildJob`
    - `UpdateBuildJob`
    - `ListTemplates`
    - `CreateTemplates`
    - `DeleteTemplates`
    - `ListNotice`
    - `UpdateNotice`
    - `DisableNotice`
    - `ListJobConfig`
- _解决问题_
  - 无
- _特性变更_
  - **ShowRecordInfo**
    - 响应参数变更
      - `+ result.duration`

### HuaweiCloud SDK CSMS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListSecretTags**
    - 响应参数变更
      - `+ sys_tags.value`
      - `- sys_tags.values`
  - **ListNotificationRecords**
    - 请求参数变更
      - `+ limit`
      - `+ marker`

### HuaweiCloud SDK GaussDB

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **CreateGaussMySqlInstance**
    - 响应参数变更
      - `* instance.volume.size: string -> int32`

### HuaweiCloud SDK LTS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListTopnTrafficStatistics**
    - 响应参数变更
      - `+ results.cold_storage`

### HuaweiCloud SDK OCR

- _新增特性_
  - 支持接口`RecognizePeruIdCard`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK RDS

- _新增特性_
  - 支持接口`RevokePostgresqlDbPrivilege`
- _解决问题_
  - 无
- _特性变更_
  - 无

# 3.1.59 2023-11-13

### HuaweiCloud SDK LTS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **Createfavorite**
    - 请求参数变更
      - `+ is_global`
    - 响应参数变更
      - `+ is_global`

### HuaweiCloud SDK RDS

- _新增特性_
  - 支持接口`ListPostgresqlListHistoryTables`、`ListHistoryDatabase`、`BatchRestorePostgreSqlTables`、`BatchRestoreDatabase`
- _解决问题_
  - 无
- _特性变更_
  - 移除接口`ListInstancesResourceMetrics`、`ListInstancesRecommendation`

# 3.1.58 2023-11-09

### HuaweiCloud SDK TICS

- _新增特性_
  - 支持可信智能计算服务
- _解决问题_
  - 无
- _特性变更_
  - 无

# 3.1.57 2023-11-02

### HuaweiCloud SDK CSMS

- _新增特性_
  - 支持接口`RotateSecret`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK DRS

- _新增特性_
  - 支持接口`CollectPositionAsync`、`ShowPositionResult`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK GaussDB

- _新增特性_
  - 支持以下接口：
    - `ShowIntelligentDiagnosisAbnormalCountOfInstances`
    - `ShowIntelligentDiagnosisInstanceInfosPerMetric`
    - `ShrinkGaussMySqlProxy`
    - `ShowInstanceDatabaseVersion`
    - `CopyInstanceConfigurations`
    - `ShowAutoScalingPolicy`
    - `UpdateAutoScalingPolicy`
    - `CheckResource`
    - `UpdateInstanceConfigurations`
- _解决问题_
  - 无
- _特性变更_
  - **DeleteGaussMySqlBackup**
    - 响应参数变更
      - `+ backup_id`
      - `+ backup_name`
      - `- job_id`
  - **CreateGaussMySqlProxy**
    - 请求参数变更
      - `+ subnet_id`
  - **ShowGaussMySqlBackupList**
    - 请求参数变更
      - `+ name`
      - `+ instance_name`
    - 响应参数变更
      - `+ backups.instance_name`
      - `- backups.status: enum value [BUILDING,COMPLETED,FAILED,AVAILABLE]`
      - `- backups.type: enum value [auto,manual]`
  - **ShowGaussMySqlProxyList**
    - 响应参数变更
      - `+ proxy_list.proxy.subnet_id`

### HuaweiCloud SDK GaussDBforopenGauss

- _新增特性_
  - 支持接口`DeleteDatabase`
- _解决问题_
  - 无
- _特性变更_
  - **ListInstances**
    - 请求参数变更
      - `+ charge_mode`
  - **ListInstancesDetails**
    - 请求参数变更
      - `+ charge_mode`

# 3.1.56 2023-10-26

### HuaweiCloud SDK CDN

- _新增特性_
  - 支持以下接口：
    - `CreateRefreshTasks`
    - `CreatePreheatingTasks`
    - `ShowHistoryTasks`
    - `ShowHistoryTaskDetails`
    - `ShowUrlTaskInfo`
- _解决问题_
  - 无
- _特性变更_
  - **CreateRefreshTasks**
    - 请求参数变更
      - `+ refresh_task.zh_url_encode`
  - **CreatePreheatingTasks**
    - 请求参数变更
      - `+ preheating_task.zh_url_encode`

### HuaweiCloud SDK OCR

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **RecognizeGeneralTable**
    - 请求参数变更
      - `+ with_borders`

### HuaweiCloud SDK RDS

- _新增特性_
  - 支持接口`ListInstanceDiagnosis`、`ListInstancesInfoDiagnosis`
- _解决问题_
  - 无
- _特性变更_
  - 无

# 3.1.55 2023-10-19

### HuaweiCloud SDK CBR

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListAgent**
    - 请求参数变更
      - `* agent_id: string -> list<string>`
  - **ListVault**
    - 请求参数变更
      - `* id: string -> list<string>`

### HuaweiCloud SDK CFW

- _新增特性_
  - 支持以下接口：
    - `ListDomainSets`
    - `AddDomainSet`
    - `UpdateDomainSet`
    - `DeleteDomainSet`
    - `ListFirewallList`
    - `BatchUpdateAclRuleActions`
    - `ListRuleAclTags`
    - `AddDomains`
    - `DeleteDomains`
    - `ListDomains`
    - `BatchDeleteAclRules`
    - `BatchDeleteServiceItems`
    - `BatchDeleteAddressItems`
- _解决问题_
  - 无
- _特性变更_
  - **ListFlowLogs**
    - 请求参数变更
      - `+ dst_host`
    - 响应参数变更
      - `+ data.records.dst_host`
  - **ListAccessControlLogs**
    - 请求参数变更
      - `+ dst_host`
      - `+ rule_name`
      - `+ action`
    - 响应参数变更
      - `+ data.records.src_region_id`
      - `+ data.records.src_region_name`
      - `+ data.records.dst_region_id`
      - `+ data.records.dst_region_name`
      - `+ data.records.dst_host`
  - **ListBlackWhiteLists**
    - 响应参数变更
      - `+ data.records.description`
  - **ListDomainParseDetail**
    - 请求参数变更
      - `+ address_type`
  - **UpdateDnsServers**
    - 请求参数变更
      - `+ health_check_domain_name`
  - **ListDnsServers**
    - 响应参数变更
      - `+ data.health_check_domain_name`
  - **ListAttackLogs**
    - 请求参数变更
      - `+ dst_host`
      - `+ log_type`
    - 响应参数变更
      - `+ data.records.dst_host`
      - `+ data.records.src_region_id`
      - `+ data.records.src_region_name`
      - `+ data.records.dst_region_id`
      - `+ data.records.dst_region_name`
  - **UpdateAclRule**
    - 请求参数变更
      - `+ tag`
      - `+ source.region_list_json`
      - `+ source.region_list`
      - `+ source.domain_set_id`
      - `+ source.domain_set_name`
      - `+ source.ip_address`
      - `+ source.address_group`
      - `+ source.address_group_names`
      - `+ service.custom_service`
      - `+ service.service_group`
      - `+ service.service_group_names`
  - **ListAclRules**
    - 请求参数变更
      - `+ tags_id`
      - `+ source`
      - `+ destination`
      - `+ service`
    - 响应参数变更
      - `+ data.records.tag`
      - `+ data.records.source.region_list_json`
      - `+ data.records.source.region_list`
      - `+ data.records.source.domain_set_id`
      - `+ data.records.source.domain_set_name`
      - `+ data.records.source.ip_address`
      - `+ data.records.source.address_group`
      - `+ data.records.source.address_group_names`
      - `+ data.records.service.custom_service`
      - `+ data.records.service.service_group`
      - `+ data.records.service.service_group_names`
  - **AddBlackWhiteList**
    - 请求参数变更
      - `+ description`
  - **UpdateBlackWhiteList**
    - 请求参数变更
      - `+ description`
  - **ListEipCount**
    - 响应参数变更
      - `+ data.eip_protected_self`
  - **ChangeEipStatus**
    - 响应参数变更
      - `+ data.object_id`
      - `+ data.fail_eip_id_list`
      - `- data.id`
      - `* data: object<IdObject> -> object<EIPSwitchStatusVO>`
  - **ListEastWestFirewall**
    - 响应参数变更
      - `+ data.mode`
      - `+ data.ew_vpc_route_limit`
      - `+ data.er_associated_subnet.ipv6_enable`
      - `+ data.protect_infos.protected_resource_mode`
  - **AddAclRule**
    - 请求参数变更
      - `+ rules.tag`
      - `+ rules.source.region_list_json`
      - `+ rules.source.region_list`
      - `+ rules.source.domain_set_id`
      - `+ rules.source.domain_set_name`
      - `+ rules.source.ip_address`
      - `+ rules.source.address_group`
      - `+ rules.source.address_group_names`
      - `+ rules.service.custom_service`
      - `+ rules.service.service_group`
      - `+ rules.service.service_group_names`
  - **ListEips**
    - 请求参数变更
      - `+ tags`
    - 响应参数变更
      - `+ data.records.object_id`
      - `+ data.records.tags`
      - `+ data.records.domain_id`
      - `+ data.records.owner`
      - `+ data.records.fw_domain_id`
  - **AddAddressItem**
    - 响应参数变更
      - `+ data.covered_ip`
  - **ListFirewallDetail**
    - 响应参数变更
      - `+ data.records.resource_id`
      - `+ data.records.support_url_filtering`
      - `+ data.records.flavor.session_concurrent`
      - `+ data.records.flavor.session_create`
      - `+ data.records.flavor.total_rule_count`
      - `+ data.records.flavor.used_rule_count`
      - `+ data.records.flavor.vpc_bandwith`

### HuaweiCloud SDK CodeArtsBuild

- _新增特性_
  - 支持以下接口：
    - `DownloadLogByRecordId`
    - `ShowRecordInfo`
    - `StopBuildJob`
    - `DeleteBuildJob`
    - `DisableBuildJob`
    - `ResumeBuildJob`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK ECS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ReinstallServerWithCloudInit**
    - 请求参数变更
      - `+ os-reinstall.metadata.BYOL`
  - **ChangeServerOsWithCloudInit**
    - 请求参数变更
      - `+ os-change.metadata.BYOL`
  - **ChangeServerOsWithoutCloudInit**
    - 请求参数变更
      - `+ os-change.metadata.BYOL`

### HuaweiCloud SDK GaussDB

- _新增特性_
  - 支持以下接口：
    - `UpdateProxyNewConfigurations`
    - `CopyConfigurations`
    - `ListConfigurationsDifferences`
    - `ListConfigurationsInstances`
    - `ListModifyHistory`
    - `ListEnterpriseProjects`
    - `SwitchAccessControl`
    - `CreateAccessControl`
    - `DeleteScheduleTasK`
    - `ListInstanceConfigurations`
    - `ShowGaussMySqlIncrementalBackupList`
    - `UpdateBackupOffsitePolicy`
    - `CreateRestoreTables`
- _解决问题_
  - 无
- _特性变更_
  - **ListGaussMySqlDatabase**
    - 请求参数变更
      - `+ name`
      - `+ charset`

### HuaweiCloud SDK KVS

- _新增特性_
  - 支持接口`ListTable`、`BatchGetKv`
- _解决问题_
  - 无
- _特性变更_
  - **UpdateKv**
    - 请求参数变更
      - `* UpdateBlob.Blobdata: int32 -> bson-binary`
  - **BatchWriteKv**
    - 请求参数变更
      - `+ TableOpers.KvOpers.GetKv`

### HuaweiCloud SDK LTS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListStructuredLogsWithTimeRange**
    - 响应参数变更
      - `+ result`
      - `- context`

### HuaweiCloud SDK SIS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - 移除接口`RunAudioAssessment`、`RunMultiModalAssessment`

### HuaweiCloud SDK VPC

- _新增特性_
  - 支持接口`BatchCreateSecurityGroupRules`
- _解决问题_
  - 无
- _特性变更_
  - 无

# 3.1.54 2023-10-12

### HuaweiCloud SDK CDN

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ShowHistoryTasks**
    - 请求参数变更
      - `+ task_type`
  - **ShowUrlTaskInfo**
    - 响应参数变更
      - `+ result.mode`

### HuaweiCloud SDK CodeArtsDeploy

- _新增特性_
  - 支持接口`ShowExecutionParams`
- _解决问题_
  - 无
- _特性变更_
  - **ListAllApp**
    - 请求参数变更
      - `+ states`
      - `+ group_id`

### HuaweiCloud SDK CTS

- _新增特性_
  - 支持以下接口：
    - `ListOperations`
    - `BatchCreateResourceTags`
    - `BatchDeleteResourceTags`
    - `ListUserResources`
    - `CheckObsBuckets`
    - `ListTraceResources`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK ECS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ReinstallServerWithoutCloudInit**
    - 请求参数变更
      - `+ os-reinstall.metadata.BYOL`
  - **ListFlavors**
    - 响应参数变更
      - `+ flavors.os_extra_specs.quota:vif_max_num`
      - `+ flavors.os_extra_specs.quota:sub_network_interface_max_num`
  - **ListResizeFlavors**
    - 响应参数变更
      - `+ flavors.extra_specs.quota:vif_max_num`
      - `+ flavors.extra_specs.quota:sub_network_interface_max_num`

### HuaweiCloud SDK GaussDBforopenGauss

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListInstances**
    - 响应参数变更
      - `+ instances.datastore.complete_version`
      - `+ instances.datastore.hotfix_versions`
  - **ListInstancesDetails**
    - 响应参数变更
      - `+ instances.datastore.complete_version`
      - `+ instances.datastore.hotfix_versions`

### HuaweiCloud SDK IMS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ShowJob**
    - 响应参数变更
      - `+ entities.addition_error_code`
      - `+ entities.addition_error_msg`
      - `+ entities.error_code`
      - `+ entities.error`
      - `+ entities.alarm_code`

### HuaweiCloud SDK OCR

- _新增特性_
  - 支持接口`RecognizeColombiaIdCard`
- _解决问题_
  - 无
- _特性变更_
  - **RecognizeVehicleLicense**
    - 响应参数变更
      - `+ result.energy_type`
      - `+ result.front`
      - `+ result.back`
  - **RecognizeWebImage**
    - 请求参数变更
      - `+ detect_text_direction`

### HuaweiCloud SDK RDS

- _新增特性_
  - 支持以下接口：
    - `ListPostgresqlHbaInfo`
    - `ModifyPostgresqlHbaConf`
    - `AddPostgresqlHbaConf`
    - `DeletePostgresqlHbaConf`
    - `ListPostgresqlHbaInfoHistory`
- _解决问题_
  - 无
- _特性变更_
  - **UpgradeDbVersionNew**
    - 请求参数变更
      - `+ is_delayed`
      - `- delay`

### HuaweiCloud SDK VPC

- _新增特性_
  - 支持以下接口：
    - `ListTrafficMirrorSessions`
    - `CreateTrafficMirrorSession`
    - `ShowTrafficMirrorSession`
    - `UpdateTrafficMirrorSession`
    - `DeleteTrafficMirrorSession`
    - `RemoveSourcesFromTrafficMirrorSession`
    - `AddSourcesToTrafficMirrorSession`
    - `ListTrafficMirrorFilters`
    - `CreateTrafficMirrorFilter`
    - `ShowTrafficMirrorFilter`
    - `UpdateTrafficMirrorFilter`
    - `DeleteTrafficMirrorFilter`
    - `ListTrafficMirrorFilterRules`
    - `CreateTrafficMirrorFilterRule`
    - `ShowTrafficMirrorFilterRule`
    - `UpdateTrafficMirrorFilterRule`
    - `DeleteTrafficMirrorFilterRule`
- _解决问题_
  - 无
- _特性变更_
  - 无

# 3.1.53 2023-09-19

### HuaweiCloud SDK CTS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **UpdateTracker**
    - 请求参数变更
      - `+ is_organization_tracker`
      - `+ management_event_selector`
  - **CreateTracker**
    - 请求参数变更
      - `+ is_organization_tracker`
      - `+ management_event_selector`
    - 响应参数变更
      - `+ is_organization_tracker`
      - `+ management_event_selector`
  - **ListTrackers**
    - 响应参数变更
      - `+ trackers.is_organization_tracker`
      - `+ trackers.management_event_selector`

### HuaweiCloud SDK GaussDBforNoSQL

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **CreateInstance**
    - 请求参数变更
      - `+ availability_zone_detail`

### HuaweiCloud SDK Live

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **UpdateTranscodingsTemplate**
    - 请求参数变更
      - `+ quality_info.bitrate_adaptive`
      - `+ quality_info.i_frame_policy`
  - **CreateTranscodingsTemplate**
    - 请求参数变更
      - `+ quality_info.bitrate_adaptive`
      - `+ quality_info.i_frame_policy`
  - **ShowTranscodingsTemplate**
    - 响应参数变更
      - `+ templates.quality_info.bitrate_adaptive`
      - `+ templates.quality_info.i_frame_policy`

### HuaweiCloud SDK LTS

- _新增特性_
  - 支持以下接口：
    - `ShowLogConvergeConfig`
    - `ShowAdminConfig`
    - `UpdateSwitch`
    - `ShowMemberGroupAndStream`
    - `UpdateLogConvergeConfig`
- _解决问题_
  - 无
- _特性变更_
  - **ListCharts**
    - 响应参数变更
      - `+ config.can_sort`
      - `+ config.can_search`
      - `+ config.page_size`
      - `* config: object -> object<ChartConfig>`
  - **ShowNotificationTemplate**
    - 响应参数变更
      - `+ create_time`
      - `+ project_id`
      - `+ templates`
      - `+ modify_time`
      - `+ name`
      - `+ source`
      - `+ type`
      - `+ locale`
      - `+ desc`
      - `- body`
  - **DeleteTransfer**
    - 响应参数变更
      - `+ log_transfer_info.log_transfer_detail.obs_period`
      - `+ log_transfer_info.log_transfer_detail.obs_encrypted_id`
      - `+ log_transfer_info.log_transfer_detail.obs_prefix_name`
      - `+ log_transfer_info.log_transfer_detail.obs_period_unit`
      - `+ log_transfer_info.log_transfer_detail.obs_transfer_path`
      - `+ log_transfer_info.log_transfer_detail.obs_eps_id`
      - `+ log_transfer_info.log_transfer_detail.obs_bucket_name`
      - `+ log_transfer_info.log_transfer_detail.obs_encrypted_enable`
      - `+ log_transfer_info.log_transfer_detail.obs_dir_pre_fix_name`
      - `+ log_transfer_info.log_transfer_detail.dis_id`
      - `+ log_transfer_info.log_transfer_detail.dis_name`
      - `+ log_transfer_info.log_transfer_detail.kafka_id`
      - `+ log_transfer_info.log_transfer_detail.kafka_topic`
      - `+ log_transfer_info.log_transfer_detail.obs_time_zone`
      - `+ log_transfer_info.log_transfer_detail.obs_time_zone_id`
      - `+ log_transfer_info.log_transfer_detail.tags`
      - `* log_transfer_info.log_transfer_detail: object -> object<TransferDetail>`
  - **ListTransfers**
    - 响应参数变更
      - `+ log_transfers.log_transfer_info.log_transfer_detail.obs_period`
      - `+ log_transfers.log_transfer_info.log_transfer_detail.obs_encrypted_id`
      - `+ log_transfers.log_transfer_info.log_transfer_detail.obs_prefix_name`
      - `+ log_transfers.log_transfer_info.log_transfer_detail.obs_period_unit`
      - `+ log_transfers.log_transfer_info.log_transfer_detail.obs_transfer_path`
      - `+ log_transfers.log_transfer_info.log_transfer_detail.obs_eps_id`
      - `+ log_transfers.log_transfer_info.log_transfer_detail.obs_bucket_name`
      - `+ log_transfers.log_transfer_info.log_transfer_detail.obs_encrypted_enable`
      - `+ log_transfers.log_transfer_info.log_transfer_detail.obs_dir_pre_fix_name`
      - `+ log_transfers.log_transfer_info.log_transfer_detail.dis_id`
      - `+ log_transfers.log_transfer_info.log_transfer_detail.dis_name`
      - `+ log_transfers.log_transfer_info.log_transfer_detail.kafka_id`
      - `+ log_transfers.log_transfer_info.log_transfer_detail.kafka_topic`
      - `+ log_transfers.log_transfer_info.log_transfer_detail.obs_time_zone`
      - `+ log_transfers.log_transfer_info.log_transfer_detail.obs_time_zone_id`
      - `+ log_transfers.log_transfer_info.log_transfer_detail.tags`
      - `* log_transfers.log_transfer_info.log_transfer_detail: object -> object<TransferDetail>`
  - **UpdateTransfer**
    - 响应参数变更
      - `+ log_transfer_info.log_transfer_detail.obs_period`
      - `+ log_transfer_info.log_transfer_detail.obs_encrypted_id`
      - `+ log_transfer_info.log_transfer_detail.obs_prefix_name`
      - `+ log_transfer_info.log_transfer_detail.obs_period_unit`
      - `+ log_transfer_info.log_transfer_detail.obs_transfer_path`
      - `+ log_transfer_info.log_transfer_detail.obs_eps_id`
      - `+ log_transfer_info.log_transfer_detail.obs_bucket_name`
      - `+ log_transfer_info.log_transfer_detail.obs_encrypted_enable`
      - `+ log_transfer_info.log_transfer_detail.obs_dir_pre_fix_name`
      - `+ log_transfer_info.log_transfer_detail.dis_id`
      - `+ log_transfer_info.log_transfer_detail.dis_name`
      - `+ log_transfer_info.log_transfer_detail.kafka_id`
      - `+ log_transfer_info.log_transfer_detail.kafka_topic`
      - `+ log_transfer_info.log_transfer_detail.obs_time_zone`
      - `+ log_transfer_info.log_transfer_detail.obs_time_zone_id`
      - `+ log_transfer_info.log_transfer_detail.tags`
      - `* log_transfer_info.log_transfer_detail: object -> object<TransferDetail>`
  - **CreateTransfer**
    - 响应参数变更
      - `+ log_transfer_info.log_transfer_detail.obs_period`
      - `+ log_transfer_info.log_transfer_detail.obs_encrypted_id`
      - `+ log_transfer_info.log_transfer_detail.obs_prefix_name`
      - `+ log_transfer_info.log_transfer_detail.obs_period_unit`
      - `+ log_transfer_info.log_transfer_detail.obs_transfer_path`
      - `+ log_transfer_info.log_transfer_detail.obs_eps_id`
      - `+ log_transfer_info.log_transfer_detail.obs_bucket_name`
      - `+ log_transfer_info.log_transfer_detail.obs_encrypted_enable`
      - `+ log_transfer_info.log_transfer_detail.obs_dir_pre_fix_name`
      - `+ log_transfer_info.log_transfer_detail.dis_id`
      - `+ log_transfer_info.log_transfer_detail.dis_name`
      - `+ log_transfer_info.log_transfer_detail.kafka_id`
      - `+ log_transfer_info.log_transfer_detail.kafka_topic`
      - `+ log_transfer_info.log_transfer_detail.obs_time_zone`
      - `+ log_transfer_info.log_transfer_detail.obs_time_zone_id`
      - `+ log_transfer_info.log_transfer_detail.tags`
      - `* log_transfer_info.log_transfer_detail: object -> object<TransferDetail>`
  - **ListNotificationTemplates**
    - 响应参数变更
      - `+ create_time`
      - `+ project_id`
      - `+ templates`
      - `+ modify_time`
      - `+ name`
      - `+ source`
      - `+ type`
      - `+ locale`
      - `+ desc`
      - `- body`
  - **UpdateSqlAlarmRule**
    - 请求参数变更
      - `+ frequency.type`
      - `+ frequency.cron_expr`
      - `+ frequency.hour_of_day`
      - `+ frequency.day_of_week`
      - `+ frequency.fixed_rate`
      - `+ frequency.fixed_rate_unit`
      - `* frequency: object -> object<Frequency>`
      - `+ notification_save_rule.language`
      - `+ notification_save_rule.timezone`
      - `+ notification_save_rule.user_name`
      - `+ notification_save_rule.topics`
      - `+ notification_save_rule.template_name`
      - `* notification_save_rule: object -> object<SqlNotificationSaveRule>`
    - 响应参数变更
      - `+ frequency.type`
      - `+ frequency.cron_expr`
      - `+ frequency.hour_of_day`
      - `+ frequency.day_of_week`
      - `+ frequency.fixed_rate`
      - `+ frequency.fixed_rate_unit`
      - `* frequency: object -> object<Frequency>`
  - **CreateSqlAlarmRule**
    - 请求参数变更
      - `+ frequency.type`
      - `+ frequency.cron_expr`
      - `+ frequency.hour_of_day`
      - `+ frequency.day_of_week`
      - `+ frequency.fixed_rate`
      - `+ frequency.fixed_rate_unit`
      - `* frequency: object -> object<Frequency>`
      - `+ notification_save_rule.language`
      - `+ notification_save_rule.timezone`
      - `+ notification_save_rule.user_name`
      - `+ notification_save_rule.topics`
      - `+ notification_save_rule.template_name`
      - `* notification_save_rule: object -> object<SqlNotificationSaveRule>`
  - **ListSqlAlarmRules**
    - 响应参数变更
      - `+ sql_alarm_rules.frequency.type`
      - `+ sql_alarm_rules.frequency.cron_expr`
      - `+ sql_alarm_rules.frequency.hour_of_day`
      - `+ sql_alarm_rules.frequency.day_of_week`
      - `+ sql_alarm_rules.frequency.fixed_rate`
      - `+ sql_alarm_rules.frequency.fixed_rate_unit`
      - `* sql_alarm_rules.frequency: object -> object<Frequency>`
  - **UpdateKeywordsAlarmRule**
    - 请求参数变更
      - `+ frequency.type`
      - `+ frequency.cron_expr`
      - `+ frequency.hour_of_day`
      - `+ frequency.day_of_week`
      - `+ frequency.fixed_rate`
      - `+ frequency.fixed_rate_unit`
      - `* frequency: object -> object<Frequency>`
      - `+ notification_save_rule.language`
      - `+ notification_save_rule.timezone`
      - `+ notification_save_rule.user_name`
      - `+ notification_save_rule.topics`
      - `+ notification_save_rule.template_name`
      - `* notification_save_rule: object -> object<SqlNotificationSaveRule>`
  - **CreateKeywordsAlarmRule**
    - 请求参数变更
      - `+ notification_save_rule.language`
      - `+ notification_save_rule.timezone`
      - `+ notification_save_rule.user_name`
      - `+ notification_save_rule.topics`
      - `+ notification_save_rule.template_name`
      - `* notification_save_rule: object -> object<SqlNotificationSaveRule>`
  - **ListKeywordsAlarmRules**
    - 响应参数变更
      - `+ keywords_alarm_rules.frequency.type`
      - `+ keywords_alarm_rules.frequency.cron_expr`
      - `+ keywords_alarm_rules.frequency.hour_of_day`
      - `+ keywords_alarm_rules.frequency.day_of_week`
      - `+ keywords_alarm_rules.frequency.fixed_rate`
      - `+ keywords_alarm_rules.frequency.fixed_rate_unit`
      - `* keywords_alarm_rules.frequency: object -> object<Frequency>`

### HuaweiCloud SDK OCR

- _新增特性_
  - 支持接口`RecognizeVehicleCertificate`、`RecognizeAcceptanceBill`、`RecognizeRealEstateCertificate`、`RecognizeVietnamIdCard`
- _解决问题_
  - 无
- _特性变更_
  - 无

# 3.1.52 2023-09-14

### HuaweiCloud SDK CBR

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **CreateVault**
    - 请求参数变更
      - `- vault.billing.promotion_info`
      - `- vault.billing.purchase_mode`
      - `- vault.billing.order_id`
  - **CreatePostPaidVault**
    - 请求参数变更
      - `- vault.billing.promotion_info`
      - `- vault.billing.purchase_mode`
      - `- vault.billing.order_id`

### HuaweiCloud SDK CodeArtsDeploy

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ShowAppDetailById**
    - 响应参数变更
      - `* result.arrange_infos: object -> list<TaskV2Info>`
  - **ListNewHosts**
    - 响应参数变更
      - `+ result.permission.can_copy`
      - `- result.permission.can_connection_test`
      - `* result.permission: object<PermissionHostDetail> -> object<PermissionHostDetailNew>`
  - **ShowHostDetail**
    - 响应参数变更
      - `* result.proxy_host: string -> object<HostInfoDetail>`
      - `+ result.permission.can_copy`
      - `- result.permission.can_connection_test`
      - `* result.permission: object<PermissionHostDetail> -> object<PermissionHostDetailNew>`

### HuaweiCloud SDK CSMS

- _新增特性_
  - 支持以下接口：
    - `ListSecretEvents`
    - `CreateSecretEvent`
    - `ShowSecretEvent`
    - `UpdateSecretEvent`
    - `DeleteSecretEvent`
    - `ListNotificationRecords`
    - `UpdateVersion`
- _解决问题_
  - 无
- _特性变更_
  - **ListSecrets**
    - 请求参数变更
      - `+ event_name`
    - 响应参数变更
      - `+ secrets.secret_type`
      - `+ secrets.auto_rotation`
      - `+ secrets.rotation_period`
      - `+ secrets.rotation_config`
      - `+ secrets.rotation_time`
      - `+ secrets.next_rotation_time`
      - `+ secrets.event_subscriptions`
      - `+ secrets.enterprise_project_id`
  - **CreateSecret**
    - 请求参数变更
      - `+ secret_type`
      - `+ auto_rotation`
      - `+ rotation_period`
      - `+ rotation_config`
      - `+ event_subscriptions`
      - `+ enterprise_project_id`
    - 响应参数变更
      - `+ secret.secret_type`
      - `+ secret.auto_rotation`
      - `+ secret.rotation_period`
      - `+ secret.rotation_config`
      - `+ secret.rotation_time`
      - `+ secret.next_rotation_time`
      - `+ secret.event_subscriptions`
      - `+ secret.enterprise_project_id`
  - **ShowSecret**
    - 响应参数变更
      - `+ secret.secret_type`
      - `+ secret.auto_rotation`
      - `+ secret.rotation_period`
      - `+ secret.rotation_config`
      - `+ secret.rotation_time`
      - `+ secret.next_rotation_time`
      - `+ secret.event_subscriptions`
      - `+ secret.enterprise_project_id`
  - **UpdateSecret**
    - 请求参数变更
      - `+ auto_rotation`
      - `+ rotation_period`
      - `+ event_subscriptions`
    - 响应参数变更
      - `+ secret.secret_type`
      - `+ secret.auto_rotation`
      - `+ secret.rotation_period`
      - `+ secret.rotation_config`
      - `+ secret.rotation_time`
      - `+ secret.next_rotation_time`
      - `+ secret.event_subscriptions`
      - `+ secret.enterprise_project_id`
  - **UploadSecretBlob**
    - 响应参数变更
      - `+ secret.secret_type`
      - `+ secret.auto_rotation`
      - `+ secret.rotation_period`
      - `+ secret.rotation_config`
      - `+ secret.rotation_time`
      - `+ secret.next_rotation_time`
      - `+ secret.event_subscriptions`
      - `+ secret.enterprise_project_id`
  - **ListSecretVersions**
    - 响应参数变更
      - `+ version_metadatas.expire_time`
  - **CreateSecretVersion**
    - 请求参数变更
      - `+ expire_time`
    - 响应参数变更
      - `+ version_metadata.expire_time`
  - **DeleteSecretForSchedule**
    - 响应参数变更
      - `+ secret.secret_type`
      - `+ secret.auto_rotation`
      - `+ secret.rotation_period`
      - `+ secret.rotation_config`
      - `+ secret.rotation_time`
      - `+ secret.next_rotation_time`
      - `+ secret.event_subscriptions`
      - `+ secret.enterprise_project_id`
  - **RestoreSecret**
    - 响应参数变更
      - `+ secret.secret_type`
      - `+ secret.auto_rotation`
      - `+ secret.rotation_period`
      - `+ secret.rotation_config`
      - `+ secret.rotation_time`
      - `+ secret.next_rotation_time`
      - `+ secret.event_subscriptions`
      - `+ secret.enterprise_project_id`
  - **ListSecretTags**
    - 响应参数变更
      - `* sys_tags: list<TagItem> -> list<SysTag>`
  - **ListProjectSecretsTags**
    - 响应参数变更
      - `* tags: list<Tag> -> list<TagResponse>`
  - **ShowSecretVersion**
    - 响应参数变更
      - `+ version.version_metadata.expire_time`
  - **ListResourceInstances**
    - 请求参数变更
      - `* matches: list<TagItem> -> list<TagMatches>`
    - 响应参数变更
      - `- resources.sys_tags`
      - `+ resources.resource_detail.secret_type`
      - `+ resources.resource_detail.auto_rotation`
      - `+ resources.resource_detail.rotation_period`
      - `+ resources.resource_detail.rotation_config`
      - `+ resources.resource_detail.rotation_time`
      - `+ resources.resource_detail.next_rotation_time`
      - `+ resources.resource_detail.event_subscriptions`
      - `+ resources.resource_detail.enterprise_project_id`

### HuaweiCloud SDK EVS

- _新增特性_
  - 支持接口`ModifyVolumeQoS`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK GaussDB

- _新增特性_
  - 支持接口`ListAuditLogDownloadLink`
- _解决问题_
  - 无
- _特性变更_
  - **CreateGaussMySqlInstance**
    - 响应参数变更
      - `+ instance.volume`

### HuaweiCloud SDK LTS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListCharts**
    - 响应参数变更
      - `- config.can_sort`
      - `- config.can_search`
      - `- config.page_size`
  - **ShowNotificationTemplate**
    - 响应参数变更
      - `+ body`
      - `- create_time`
      - `- project_id`
      - `- templates`
      - `- modify_time`
      - `- name`
      - `- source`
      - `- type`
      - `- locale`
      - `- desc`
  - **ListLogStream**
    - 请求参数变更
      - `- tag`
    - 响应参数变更
      - `* log_streams: list<LogStream> -> list<LogStreamResBody>`
  - **ListStructuredLogsWithTimeRange**
    - 响应参数变更
      - `+ context`
      - `- body`
  - **DeleteTransfer**
    - 响应参数变更
      - `- log_transfer_info.log_transfer_detail.obs_period`
      - `- log_transfer_info.log_transfer_detail.obs_encrypted_id`
      - `- log_transfer_info.log_transfer_detail.obs_prefix_name`
      - `- log_transfer_info.log_transfer_detail.obs_period_unit`
      - `- log_transfer_info.log_transfer_detail.obs_transfer_path`
      - `- log_transfer_info.log_transfer_detail.obs_eps_id`
      - `- log_transfer_info.log_transfer_detail.obs_bucket_name`
      - `- log_transfer_info.log_transfer_detail.obs_encrypted_enable`
      - `- log_transfer_info.log_transfer_detail.obs_dir_pre_fix_name`
      - `- log_transfer_info.log_transfer_detail.dis_id`
      - `- log_transfer_info.log_transfer_detail.dis_name`
      - `- log_transfer_info.log_transfer_detail.kafka_id`
      - `- log_transfer_info.log_transfer_detail.kafka_topic`
      - `- log_transfer_info.log_transfer_detail.obs_time_zone`
      - `- log_transfer_info.log_transfer_detail.obs_time_zone_id`
      - `- log_transfer_info.log_transfer_detail.tags`
  - **ListTransfers**
    - 响应参数变更
      - `- log_transfers.log_transfer_info.log_transfer_detail.obs_period`
      - `- log_transfers.log_transfer_info.log_transfer_detail.obs_encrypted_id`
      - `- log_transfers.log_transfer_info.log_transfer_detail.obs_prefix_name`
      - `- log_transfers.log_transfer_info.log_transfer_detail.obs_period_unit`
      - `- log_transfers.log_transfer_info.log_transfer_detail.obs_transfer_path`
      - `- log_transfers.log_transfer_info.log_transfer_detail.obs_eps_id`
      - `- log_transfers.log_transfer_info.log_transfer_detail.obs_bucket_name`
      - `- log_transfers.log_transfer_info.log_transfer_detail.obs_encrypted_enable`
      - `- log_transfers.log_transfer_info.log_transfer_detail.obs_dir_pre_fix_name`
      - `- log_transfers.log_transfer_info.log_transfer_detail.dis_id`
      - `- log_transfers.log_transfer_info.log_transfer_detail.dis_name`
      - `- log_transfers.log_transfer_info.log_transfer_detail.kafka_id`
      - `- log_transfers.log_transfer_info.log_transfer_detail.kafka_topic`
      - `- log_transfers.log_transfer_info.log_transfer_detail.obs_time_zone`
      - `- log_transfers.log_transfer_info.log_transfer_detail.obs_time_zone_id`
      - `- log_transfers.log_transfer_info.log_transfer_detail.tags`
  - **UpdateTransfer**
    - 响应参数变更
      - `- log_transfer_info.log_transfer_detail.obs_period`
      - `- log_transfer_info.log_transfer_detail.obs_encrypted_id`
      - `- log_transfer_info.log_transfer_detail.obs_prefix_name`
      - `- log_transfer_info.log_transfer_detail.obs_period_unit`
      - `- log_transfer_info.log_transfer_detail.obs_transfer_path`
      - `- log_transfer_info.log_transfer_detail.obs_eps_id`
      - `- log_transfer_info.log_transfer_detail.obs_bucket_name`
      - `- log_transfer_info.log_transfer_detail.obs_encrypted_enable`
      - `- log_transfer_info.log_transfer_detail.obs_dir_pre_fix_name`
      - `- log_transfer_info.log_transfer_detail.dis_id`
      - `- log_transfer_info.log_transfer_detail.dis_name`
      - `- log_transfer_info.log_transfer_detail.kafka_id`
      - `- log_transfer_info.log_transfer_detail.kafka_topic`
      - `- log_transfer_info.log_transfer_detail.obs_time_zone`
      - `- log_transfer_info.log_transfer_detail.obs_time_zone_id`
      - `- log_transfer_info.log_transfer_detail.tags`
  - **CreateTransfer**
    - 响应参数变更
      - `- log_transfer_info.log_transfer_detail.obs_period`
      - `- log_transfer_info.log_transfer_detail.obs_encrypted_id`
      - `- log_transfer_info.log_transfer_detail.obs_prefix_name`
      - `- log_transfer_info.log_transfer_detail.obs_period_unit`
      - `- log_transfer_info.log_transfer_detail.obs_transfer_path`
      - `- log_transfer_info.log_transfer_detail.obs_eps_id`
      - `- log_transfer_info.log_transfer_detail.obs_bucket_name`
      - `- log_transfer_info.log_transfer_detail.obs_encrypted_enable`
      - `- log_transfer_info.log_transfer_detail.obs_dir_pre_fix_name`
      - `- log_transfer_info.log_transfer_detail.dis_id`
      - `- log_transfer_info.log_transfer_detail.dis_name`
      - `- log_transfer_info.log_transfer_detail.kafka_id`
      - `- log_transfer_info.log_transfer_detail.kafka_topic`
      - `- log_transfer_info.log_transfer_detail.obs_time_zone`
      - `- log_transfer_info.log_transfer_detail.obs_time_zone_id`
      - `- log_transfer_info.log_transfer_detail.tags`
  - **ListNotificationTemplates**
    - 响应参数变更
      - `+ body`
      - `- create_time`
      - `- project_id`
      - `- templates`
      - `- modify_time`
      - `- name`
      - `- source`
      - `- type`
      - `- locale`
      - `- desc`
  - **UpdateSqlAlarmRule**
    - 请求参数变更
      - `- frequency.type`
      - `- frequency.cron_expr`
      - `- frequency.hour_of_day`
      - `- frequency.day_of_week`
      - `- frequency.fixed_rate`
      - `- frequency.fixed_rate_unit`
      - `- notification_save_rule.language`
      - `- notification_save_rule.timezone`
      - `- notification_save_rule.user_name`
      - `- notification_save_rule.topics`
      - `- notification_save_rule.template_name`
    - 响应参数变更
      - `- frequency.type`
      - `- frequency.cron_expr`
      - `- frequency.hour_of_day`
      - `- frequency.day_of_week`
      - `- frequency.fixed_rate`
      - `- frequency.fixed_rate_unit`
  - **CreateSqlAlarmRule**
    - 请求参数变更
      - `- frequency.type`
      - `- frequency.cron_expr`
      - `- frequency.hour_of_day`
      - `- frequency.day_of_week`
      - `- frequency.fixed_rate`
      - `- frequency.fixed_rate_unit`
      - `- notification_save_rule.language`
      - `- notification_save_rule.timezone`
      - `- notification_save_rule.user_name`
      - `- notification_save_rule.topics`
      - `- notification_save_rule.template_name`
  - **ListSqlAlarmRules**
    - 响应参数变更
      - `- sql_alarm_rules.frequency.type`
      - `- sql_alarm_rules.frequency.cron_expr`
      - `- sql_alarm_rules.frequency.hour_of_day`
      - `- sql_alarm_rules.frequency.day_of_week`
      - `- sql_alarm_rules.frequency.fixed_rate`
      - `- sql_alarm_rules.frequency.fixed_rate_unit`
  - **UpdateKeywordsAlarmRule**
    - 请求参数变更
      - `- frequency.type`
      - `- frequency.cron_expr`
      - `- frequency.hour_of_day`
      - `- frequency.day_of_week`
      - `- frequency.fixed_rate`
      - `- frequency.fixed_rate_unit`
      - `- notification_save_rule.language`
      - `- notification_save_rule.timezone`
      - `- notification_save_rule.user_name`
      - `- notification_save_rule.topics`
      - `- notification_save_rule.template_name`
  - **CreateKeywordsAlarmRule**
    - 请求参数变更
      - `- notification_save_rule.language`
      - `- notification_save_rule.timezone`
      - `- notification_save_rule.user_name`
      - `- notification_save_rule.topics`
      - `- notification_save_rule.template_name`
  - **ListKeywordsAlarmRules**
    - 响应参数变更
      - `- keywords_alarm_rules.frequency.type`
      - `- keywords_alarm_rules.frequency.cron_expr`
      - `- keywords_alarm_rules.frequency.hour_of_day`
      - `- keywords_alarm_rules.frequency.day_of_week`
      - `- keywords_alarm_rules.frequency.fixed_rate`
      - `- keywords_alarm_rules.frequency.fixed_rate_unit`

### HuaweiCloud SDK RDS

- _新增特性_
  - 支持接口`RestoreTablesNew`、`UpgradeDbVersionNew`
- _解决问题_
  - 无
- _特性变更_
  - 无

# 3.1.51 2023-09-07

### HuaweiCloud SDK DRS

- _新增特性_
  - 支持以下接口：
    - `StopJobAction`
    - `ShowDataProgress`
    - `UpdateDataProgress`
    - `ShowDataProcessingRulesResult`
    - `CheckDataFilter`
    - `ShowDataFilteringResult`
    - `CollectColumns`
    - `ShowColumnInfoResult`
    - `BatchStopJobsAction`
    - `ExportOperationInfo`
    - `BatchTagAction`
    - `ListProjectTags`
    - `ShowInstanceTags`
    - `UpdateStartPosition`
    - `ShowMonitorData`
    - `ShowSupportObjectType`
    - `ShowIncrementComponentsDetail`
    - `CollectDbObjectsInfo`
    - `ShowDbObjectsList`
- _解决问题_
  - 无
- _特性变更_
  - **ShowDbObjectTemplateResult**
    - 请求参数变更
      - `+ type: enum value [change]`
  - **ShowUpdateObjectSavingStatus**
    - 请求参数变更
      - `+ X-Language: enum value [en-us,zh-cn]`
  - **ShowObjectMapping**
    - 请求参数变更
      - `+ X-Language: enum value [en-us,zh-cn]`
  - **ListJobs**
    - 请求参数变更
      - `+ instance_ids`
      - `+ instance_ip`
  - **ShowDbObjectCollectionStatus**
    - 请求参数变更
      - `+ X-Language: enum value [en-us,zh-cn]`
  - **UpdateBatchAsyncJobs**
    - 请求参数变更
      - `+ jobs.type: enum value [re_create,expired_days]`
  - **UpdateJob**
    - 请求参数变更
      - `+ job.type: enum value [re_create,expired_days]`

### HuaweiCloud SDK RDS

- _新增特性_
  - 支持接口`ListInstancesResourceMetrics`、`ListInstancesRecommendation`
- _解决问题_
  - 无
- _特性变更_
  - 无

# 3.1.50 2023-08-31

### HuaweiCloud SDK CodeArtsDeploy

- _新增特性_
  - 支持以下接口：
    - `ListHostClusters`
    - `CreateHostCluster`
    - `ShowHostClusterDetail`
    - `ListNewHosts`
    - `CreateHost`
    - `ShowHostDetail`
    - `ListEnvironments`
    - `CreateEnvironment`
    - `ShowEnvironmentDetail`
    - `DeleteEnvironment`
    - `ImportHostToEnvironment`
    - `DeleteHostFromEnvironment`
    - `ListAllApp`
    - `CreateApp`
    - `ShowAppDetailById`
    - `DeleteApplication`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK ECS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ShowJob**
    - 响应参数变更
      - `+ entities.server_id`
      - `+ entities.nic_id`
  - **CreateServers**
    - 请求参数变更
      - `+ server.extendparam.CB_CSBS_BACKUP`

### HuaweiCloud SDK FRS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **DetectFaceByFile**
    - 响应参数变更
      - `+ faces.attributes.gender`
  - **DetectFaceByFileIntl**
    - 响应参数变更
      - `+ faces.attributes.gender`
  - **DetectFaceByUrl**
    - 响应参数变更
      - `+ faces.attributes.gender`
  - **DetectFaceByUrlIntl**
    - 响应参数变更
      - `+ faces.attributes.gender`
  - **DetectFaceByBase64**
    - 响应参数变更
      - `+ faces.attributes.gender`
  - **DetectFaceByBase64Intl**
    - 响应参数变更
      - `+ faces.attributes.gender`

### HuaweiCloud SDK OCR

- _新增特性_
  - 支持接口`RecognizeSmartDocumentRecognizer`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK RDS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListInstances**
    - 响应参数变更
      - `+ instances.public_dns_names`

# 3.1.49 2023-08-24

### HuaweiCloud SDK Core

- _新增特性_
  - 无
- _解决问题_
  - 修复由于path参数中含有中文导致编码错误的问题
  - 修复针对int64类型参数反序列化失败的问题
- _特性变更_
  - 无

### HuaweiCloud SDK CBR

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListJarPackageHostInfo**
    - 响应参数变更
      - `* data_list.record_time: int32 -> int64`

### HuaweiCloud SDK IMS

- _新增特性_
  - 支持以下接口：
    - `ListAimMsgTemplate`
    - `CreateAimMsgTemplate`
    - `ShowAimMsgTemplateVariable`
    - `SendAimBatchMessages`
    - `SendAimBatchDifferentMessages`
    - `DeleteAimMsgSignature`
    - `ShowAimMsgTemplateDetail`
    - `UpdateAimMsgTemplate`
    - `DeleteAimMsgTemplate`
    - `ListAimMsgSignature`
    - `AddAimMsgSignature`
    - `ListAimMsgApp`
    - `CreateSmsApp`
    - `ListAimMsgAppDetail`
    - `UpdateAimMsgApp`
    - `ShowAimMsgSignatureFileInfo`
    - `UploadAimMsgSignatureFile`
    - `ListAimMsgSignatureDetail`
    - `UpdateAimMsgSignature`
- _解决问题_
  - 无
- _特性变更_
  - **ListAimResolveDetails**
    - 请求参数变更
      - `+ task_name`
    - 响应参数变更
      - `+ resolve_details.task_name`
  - **ListResolveTasks**
    - 请求参数变更
      - `+ task_name`
    - 响应参数变更
      - `+ resolve_tasks.task_name`

### HuaweiCloud SDK LTS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListNatGateways**
    - 响应参数变更
      - `+ nat_gateways.session_conf`
  - **CreateNatGateway**
    - 请求参数变更
      - `+ nat_gateway.session_conf`
    - 响应参数变更
      - `+ nat_gateway.session_conf`
  - **ShowNatGateway**
    - 响应参数变更
      - `+ nat_gateway.session_conf`
  - **UpdateNatGateway**
    - 请求参数变更
      - `+ nat_gateway.session_conf`
    - 响应参数变更
      - `+ nat_gateway.session_conf`

### HuaweiCloud SDK OCR

- _新增特性_
  - 支持接口`ShowLoginType`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK SIS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **RunTts**
    - 请求参数变更
      - `+ config.property: enum value [chinese_huaxiaoman_common,chinese_huaxiaofang_common,chinese_huaxiaojun_common]`

### HuaweiCloud SDK VPC

# 3.1.48 2023-08-21

### HuaweiCloud SDK KMS

- _新增特性_
  - 支持数据加密服务-密钥管理
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK LTS

- _新增特性_
  - 支持接口`DeleteDashboard`
- _解决问题_
  - 无
- _特性变更_
  - **CreateDashBoard**
    - 响应参数变更
      - `* last_update_time: string -> int64`
      - `* useSystemTemplate: string -> boolean`
  - **CreateLogStream**
    - 请求参数变更
      - `- enterprise_project_name`
      - `- log_stream_name: enum value [lts-stream-13ci]`
      - `* ttl_in_days: string -> int32`
      - `* tags: list<tagsBody> -> object<tagsBody>`
  - **ListAccessConfig**
    - 响应参数变更
      - `+ cluster_id`
      - `+ result.cluster_id`
  - **UpdateAccessConfig**
    - 请求参数变更
      - `+ cluster_id`
    - 响应参数变更
      - `+ cluster_id`
  - **CreateAccessConfig**
    - 请求参数变更
      - `+ cluster_id`
    - 响应参数变更
      - `+ cluster_id`
  - **DeleteAccessConfig**
    - 响应参数变更
      - `+ cluster_id`
      - `+ result.cluster_id`

# 3.1.47 2023-08-17

### HuaweiCloud SDK CodeArtsBuild

- _新增特性_
  - 支持编译构建服务
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK ECS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **CreateServers**
    - 请求参数变更
      - `+ server.root_volume.iops`
      - `+ server.root_volume.throughput`
      - `+ server.root_volume.volumetype: enum value [GPSSD2,ESSD2]`
      - `+ server.data_volumes.iops`
      - `+ server.data_volumes.throughput`
      - `+ server.data_volumes.volumetype: enum value [GPSSD2,ESSD2]`
  - **CreatePostPaidServers**
    - 请求参数变更
      - `+ server.data_volumes.iops`
      - `+ server.data_volumes.throughput`
      - `+ server.data_volumes.volumetype: enum value [GPSSD2,ESSD2]`
      - `+ server.root_volume.iops`
      - `+ server.root_volume.throughput`
      - `+ server.root_volume.volumetype: enum value [GPSSD2,ESSD2]`

### HuaweiCloud SDK GaussDB

- _新增特性_
  - 支持接口`ModifyGaussMysqlDns`、`CreateGaussMysqlDns`
- _解决问题_
  - 无
- _特性变更_
  - **ShowGaussMySqlInstanceInfo**
    - 响应参数变更
      - `+ instance.private_dns_names`
  - **ListGaussMySqlInstanceDetailInfo**
    - 响应参数变更
      - `+ instances.private_dns_names`

### HuaweiCloud SDK Live

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListSnapshotConfigs**
    - 响应参数变更
      - `* body: object<LiveSnapshotConfig> -> list<LiveSnapshotConfig>`

### HuaweiCloud SDK MPC

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **CreateThumbnailsTask**
    - 请求参数变更
      - `+ thumbnail_para.dots_ms`
      - `+ thumbnail_para.type: enum value [DOTS_MS]`
  - **CreateTranscodingTask**
    - 请求参数变更
      - `+ thumbnail.params.dots_ms`
      - `+ thumbnail.params.type: enum value [DOTS_MS]`

### HuaweiCloud SDK VPC

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **CreateSecurityGroupRule**
    - 请求参数变更
      - `+ security_group_rule.remote_address_group_id`
  - **NeutronCreateSecurityGroupRule**
    - 请求参数变更
      - `+ security_group_rule.remote_address_group_id`

# 3.1.46 2023-08-10

### HuaweiCloud SDK CodeArtsDeploy

- _新增特性_
  - 支持部署服务
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK GaussDB

- _新增特性_
  - 支持接口`UpdateProxyPort`、`DescribeBackupEncryptStatus`、`ModifyBackupEncryptStatus`
- _解决问题_
  - 无
- _特性变更_
  - **UpdateProxySessionConsistence**
    - 请求参数变更
      - `+ consistence_mode`
  - **CreateGaussMySqlInstance**
    - 请求参数变更
      - `* datastore: object<MysqlDatastore> -> object<MysqlDatastoreInReq>`
    - 响应参数变更
      - `* instance.datastore: object<MysqlDatastore> -> object<MysqlDatastoreInRes>`
  - **ShowGaussMySqlBackupList**
    - 响应参数变更
      - `- backups.datastore.kernel_version`
      - `* backups.datastore: object<MysqlDatastore> -> object<MysqlDatastoreInBackup>`
  - **ShowGaussMySqlProxyList**
    - 响应参数变更
      - `+ proxy_list.proxy.consistence_mode`

### HuaweiCloud SDK OCR

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **RecognizeMyanmarIdcard**
    - 请求参数变更
      - `+ return_translation`
    - 响应参数变更
      - `+ result.translation_info`

### HuaweiCloud SDK RDS

- _新增特性_
  - 支持接口`ListXellogFiles`、`CreateXelLogDownload`
- _解决问题_
  - 无
- _特性变更_
  - 无

# 3.1.45 2023-08-03

### HuaweiCloud SDK RDS

- _新增特性_
  - 支持云数据库服务
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK CDN

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ShowDomainDetailByName**
    - 响应参数变更
      - `- domain.sources.weight`
      - `* domain.sources: list<SourcesConfig> -> list<SourcesDomainConfig>`
  - **ShowDomainFullConfig**
    - 响应参数变更
      - `+ configs.remark`
      - `+ configs.ip_frequency_limit`
      - `+ configs.hsts`
      - `+ configs.quic`
      - `+ configs.url_auth.inherit_config`
      - `+ configs.sources.bucket_access_key`
      - `+ configs.sources.bucket_secret_key`
      - `+ configs.sources.bucket_region`
      - `+ configs.sources.bucket_name`
      - `+ configs.request_limit_rules.priority`
      - `+ configs.request_limit_rules.match_type`
      - `+ configs.request_limit_rules.match_value`
  - **UpdateDomainFullConfig**
    - 请求参数变更
      - `+ configs.remark`
      - `+ configs.ip_frequency_limit`
      - `+ configs.hsts`
      - `+ configs.quic`
      - `+ configs.url_auth.inherit_config`
      - `+ configs.sources.bucket_access_key`
      - `+ configs.sources.bucket_secret_key`
      - `+ configs.sources.bucket_region`
      - `+ configs.sources.bucket_name`
      - `+ configs.request_limit_rules.priority`
      - `+ configs.request_limit_rules.match_type`
      - `+ configs.request_limit_rules.match_value`

### HuaweiCloud SDK CTS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **DeleteTracker**
    - 请求参数变更
      - `+ tracker_type: enum value [system]`

### HuaweiCloud SDK GaussDB

- _新增特性_
  - 支持接口`ModifyGaussMySqlProxyRouteMode`
- _解决问题_
  - 无
- _特性变更_
  - **ShowGaussMySqlEngineVersion**
    - 响应参数变更
      - `+ datastores.version`
      - `+ datastores.kernel_version`
  - **CreateGaussMySqlProxy**
    - 请求参数变更
      - `+ route_mode`
  - **CreateGaussMySqlInstance**
    - 请求参数变更
      - `+ datastore.kernel_version`
    - 响应参数变更
      - `+ instance.datastore.kernel_version`
  - **ShowGaussMySqlBackupList**
    - 响应参数变更
      - `+ backups.datastore.kernel_version`
  - **ShowGaussMySqlProxyList**
    - 响应参数变更
      - `+ proxy_list.proxy.route_mode`
      - `+ proxy_list.proxy.balance_route_mode_enabled`

### HuaweiCloud SDK GaussDBforopenGauss

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListInstances**
    - 响应参数变更
      - `+ instances.backup_used_space`
  - **ListComponentInfos**
    - 请求参数变更
      - `+ component_type`
      - `+ availability_zone_id`
    - 响应参数变更
      - `+ nodes.name`
      - `+ nodes.availability_zone_id`
      - `+ nodes.description`
      - `+ nodes.status`
      - `+ nodes.components.distributed_id`
  - **ListInstancesDetails**
    - 响应参数变更
      - `+ instances.backup_used_space`

### HuaweiCloud SDK VPC

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListPorts**
    - 请求参数变更
      - `+ enable_efi`
    - 响应参数变更
      - `+ ports.enable_efi`
  - **CreatePort**
    - 响应参数变更
      - `+ port.enable_efi`
  - **ShowPort**
    - 响应参数变更
      - `+ port.enable_efi`
  - **UpdatePort**
    - 响应参数变更
      - `+ port.enable_efi`

# 3.1.44 2023-07-27

### HuaweiCloud SDK DRS

- _新增特性_
  - 支持以下接口：
    - `DownloadBatchCreateTemplate`
    - `ImportBatchCreateJobs`
    - `CopyJob`
    - `ShowMetering`
    - `ShowDirtyData`
    - `ShowComparePolicy`
    - `ShowHealthCompareJobList`
    - `ShowProgressData`
    - `ShowObjectMapping`
    - `ShowActions`
    - `ValidateJobName`
    - `ShowEnterpriseProject`
- _解决问题_
  - 无
- _特性变更_
  - **DownloadDbObjectTemplate**
    - 请求参数变更
      - `+ file_import_db_level`
  - **UploadDbObjectTemplate**
    - 请求参数变更
      - `+ file_import_db_level`
  - **ListAsyncJobs**
    - 响应参数变更
      - `+ jobs.status: enum value [AUTO_PARAM_VALIDATE_SUCCESS,COMMIT_SUCCESS]`
      - `- jobs.status: enum value [ASYNC_JOB_CREATING,ASYNC_JOB_CREATE_FAILED,ASYNC_JOB_COMPLETED]`
  - **CreateJob**
    - 请求参数变更
      - `+ job.node_info.base_info`
    - 响应参数变更
      - `+ is_clone_job`
      - `+ create_time`
      - `+ name`
      - `+ id`
      - `+ status`
      - `+ job.is_clone_job`
  - **BatchCreateJobsAsync**
    - 请求参数变更
      - `+ jobs.node_info.base_info`
  - **ListAsyncJobDetail**
    - 响应参数变更
      - `+ jobs.support_import_file_resp`
      - `+ jobs.instance_features`
      - `+ jobs.task_version`
      - `+ jobs.node_info.base_info`
  - **UpdateBatchAsyncJobs**
    - 请求参数变更
      - `+ jobs.type: enum value [policy]`
      - `- jobs.type: enum value [policy_config]`
      - `+ jobs.params.node_info.base_info`
  - **ShowJobDetail**
    - 请求参数变更
      - `+ type: enum value [file]`
    - 响应参数变更
      - `+ job.support_import_file_resp`
      - `+ job.instance_features`
      - `+ job.task_version`
      - `+ job.node_info.base_info`
  - **UpdateJob**
    - 请求参数变更
      - `+ job.type: enum value [policy]`
      - `- job.type: enum value [policy_config]`
      - `+ job.params.node_info.base_info`

### HuaweiCloud SDK EIP

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **AttachShareBandwidth**
    - 响应参数变更
      - `+ publicip.vnic.vtep`
      - `+ publicip.vnic.vni`
      - `+ publicip.vnic.port_profile`
  - **DetachShareBandwidth**
    - 响应参数变更
      - `+ publicip.vnic.vtep`
      - `+ publicip.vnic.vni`
      - `+ publicip.vnic.port_profile`
  - **EnableNat64**
    - 响应参数变更
      - `+ publicip.vnic.vtep`
      - `+ publicip.vnic.vni`
      - `+ publicip.vnic.port_profile`
  - **DisableNat64**
    - 响应参数变更
      - `+ publicip.vnic.vtep`
      - `+ publicip.vnic.vni`
      - `+ publicip.vnic.port_profile`
  - **AttachBatchPublicIp**
    - 响应参数变更
      - `+ publicips.publicip.vnic.vtep`
      - `+ publicips.publicip.vnic.vni`
      - `+ publicips.publicip.vnic.port_profile`
  - **DetachBatchPublicIp**
    - 响应参数变更
      - `+ publicips.publicip.vnic.vtep`
      - `+ publicips.publicip.vnic.vni`
      - `+ publicips.publicip.vnic.port_profile`

### HuaweiCloud SDK GaussDBforNoSQL

- _新增特性_
  - 支持接口`ShowInstanceBiactiveRegions`
- _解决问题_
  - 无
- _特性变更_
  - **ListConfigurations**
    - 响应参数变更
      - `+ quota`
      - `+ configurations.mode`
  - **ListConfigurationTemplates**
    - 响应参数变更
      - `+ quota`
      - `+ configurations.mode`
  - **ShowInstanceConfiguration**
    - 响应参数变更
      - `+ mode`
      - `+ id`
  - **ListConfigurationDatastores**
    - 响应参数变更
      - `+ datastores.mode`
  - **ShowQuotas**
    - 请求参数变更
      - `+ datastore_type`
      - `+ mode`
  - **ListInstances**
    - 响应参数变更
      - `+ instances.datastore.whole_version`

### HuaweiCloud SDK GaussDBforopenGauss

- _新增特性_
  - 支持接口`DownloadBackup`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK LTS

- _新增特性_
  - 支持接口`UpdateLogStream`
- _解决问题_
  - 无
- _特性变更_
  - **UpdateLogGroup**
    - 请求参数变更
      - `+ tags`
  - **CreateLogGroup**
    - 请求参数变更
      - `+ tags`
  - **CreateLogStream**
    - 请求参数变更
      - `+ enterprise_project_name`
      - `+ ttl_in_days`
      - `+ tags`
      - `+ log_stream_name: enum value [lts-stream-13ci]`

# 3.1.43 2023-07-20

### HuaweiCloud SDK GaussDBforopenGauss

- _新增特性_
  - 支持云数据库 GaussDB服务
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK GaussDB

- _新增特性_
  - 支持云数据库 GaussDB服务
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK GaussDBforNoSQL

- _新增特性_
  - 支持云数据库 GaussDB NoSQL服务
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK DDS

- _新增特性_
  - 支持文档数据库服务
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK EIP

- _新增特性_
  - 支持以下接口：
    - `AttachShareBandwidth`
    - `AttachBatchPublicIp`
    - `DetachShareBandwidth`
    - `DetachBatchPublicIp`
    - `EnableNat64`
    - `DisableNat64`
    - `ListBandwidth`
- _解决问题_
  - 无
- _特性变更_
  - 无

# 3.1.42 2023-07-13

### HuaweiCloud SDK SIS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **PushTranscriberJobs**
    - 请求参数变更
      - `+ Enterprise-Project-Id`

### HuaweiCloud SDK VPC

- _新增特性_
  - 支持以下接口：
    - `ListApiVersion`
    - `NeutronListPorts`
    - `NeutronCreatePort`
    - `NeutronShowPort`
    - `NeutronUpdatePort`
    - `NeutronDeletePort`
    - `NeutronListNetworks`
    - `NeutronCreateNetwork`
    - `NeutronShowNetwork`
    - `NeutronUpdateNetwork`
    - `NeutronDeleteNetwork`
    - `NeutronListSubnets`
    - `NeutronCreateSubnet`
    - `NeutronShowSubnet`
    - `NeutronUpdateSubnet`
    - `NeutronDeleteSubnet`
    - `NeutronListRouters`
    - `NeutronCreateRouter`
    - `NeutronShowRouter`
    - `NeutronUpdateRouter`
    - `NeutronDeleteRouter`
    - `NeutronAddRouterInterface`
    - `NeutronRemoveRouterInterface`
- _解决问题_
  - 无
- _特性变更_
  - 无

# 3.1.41 2023-07-06

### HuaweiCloud SDK EVS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **CreateVolume**
    - 请求参数变更
      - `+ volume.iops`
      - `+ volume.throughput`
      - `+ volume.volume_type: enum value [GPSSD2,ESSD2]`

### HuaweiCloud SDK LTS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **UpdateSqlAlarmRule**
    - 请求参数变更
      - `+ notification_save_rule.template_name`
  - **CreateSqlAlarmRule**
    - 请求参数变更
      - `+ notification_save_rule.template_name`
  - **UpdateKeywordsAlarmRule**
    - 请求参数变更
      - `+ notification_save_rule.template_name`
  - **CreateKeywordsAlarmRule**
    - 请求参数变更
      - `+ notification_save_rule.template_name`
  - **ListAccessConfig**
    - 响应参数变更
      - `+ log_split`
      - `+ binary_collect`
      - `+ result.log_split`
      - `+ result.binary_collect`
      - `+ result.access_config_type: enum value [K8S_CCE]`
      - `+ result.access_config_detail.stdout`
      - `+ result.access_config_detail.stderr`
      - `+ result.access_config_detail.pathType`
      - `+ result.access_config_detail.namespaceRegex`
      - `+ result.access_config_detail.podNameRegex`
      - `+ result.access_config_detail.containerNameRegex`
      - `+ result.access_config_detail.includeLabels`
      - `+ result.access_config_detail.excludeLabels`
      - `+ result.access_config_detail.includeEnvs`
      - `+ result.access_config_detail.excludeEnvs`
      - `+ result.access_config_detail.logLabels`
      - `+ result.access_config_detail.logEnvs`
      - `+ result.access_config_detail.includeK8sLabels`
      - `+ result.access_config_detail.excludeK8sLabels`
      - `+ result.access_config_detail.logK8s`
      - `* result.access_config_detail.format.single: object<AccessConfigFormatSingle> -> object<AccessConfigFormatSingleCreate>`
      - `* result.access_config_detail.format.multi: object<AccessConfigFormatMutil> -> object<AccessConfigFormatMutilCreate>`
      - `* result.access_config_detail.format: object<AccessConfigFormat> -> object<AccessConfigFormatCreate>`
      - `* result.access_config_detail.windows_log_info: object<AccessConfigWindowsLogInfo> -> object<AccessConfigWindowsLogInfoCreate>`
      - `* result.access_config_detail: object<AccessConfigDeatil> -> object<AccessConfigDeatilCreate>`
  - **UpdateAccessConfig**
    - 请求参数变更
      - `+ log_split`
      - `+ binary_collect`
      - `+ access_config_detail.stdout`
      - `+ access_config_detail.stderr`
      - `+ access_config_detail.pathType`
      - `+ access_config_detail.namespaceRegex`
      - `+ access_config_detail.podNameRegex`
      - `+ access_config_detail.containerNameRegex`
      - `+ access_config_detail.includeLabels`
      - `+ access_config_detail.excludeLabels`
      - `+ access_config_detail.includeEnvs`
      - `+ access_config_detail.excludeEnvs`
      - `+ access_config_detail.logLabels`
      - `+ access_config_detail.logEnvs`
      - `+ access_config_detail.includeK8sLabels`
      - `+ access_config_detail.excludeK8sLabels`
      - `+ access_config_detail.logK8s`
      - `* access_config_detail.format.single: object<AccessConfigFormatSingle> -> object<AccessConfigFormatSingleCreate>`
      - `* access_config_detail.format.multi: object<AccessConfigFormatMutil> -> object<AccessConfigFormatMutilCreate>`
      - `* access_config_detail.format: object<AccessConfigFormat> -> object<AccessConfigFormatCreate>`
      - `* access_config_detail.windows_log_info: object<AccessConfigWindowsLogInfo> -> object<AccessConfigWindowsLogInfoCreate>`
      - `* access_config_detail: object<AccessConfigDeatil> -> object<AccessConfigDeatilCreate>`
    - 响应参数变更
      - `+ log_split`
      - `+ binary_collect`
      - `+ access_config_type: enum value [K8S_CCE]`
      - `+ access_config_detail.stdout`
      - `+ access_config_detail.stderr`
      - `+ access_config_detail.pathType`
      - `+ access_config_detail.namespaceRegex`
      - `+ access_config_detail.podNameRegex`
      - `+ access_config_detail.containerNameRegex`
      - `+ access_config_detail.includeLabels`
      - `+ access_config_detail.excludeLabels`
      - `+ access_config_detail.includeEnvs`
      - `+ access_config_detail.excludeEnvs`
      - `+ access_config_detail.logLabels`
      - `+ access_config_detail.logEnvs`
      - `+ access_config_detail.includeK8sLabels`
      - `+ access_config_detail.excludeK8sLabels`
      - `+ access_config_detail.logK8s`
      - `* access_config_detail.format.single: object<AccessConfigFormatSingle> -> object<AccessConfigFormatSingleCreate>`
      - `* access_config_detail.format.multi: object<AccessConfigFormatMutil> -> object<AccessConfigFormatMutilCreate>`
      - `* access_config_detail.format: object<AccessConfigFormat> -> object<AccessConfigFormatCreate>`
      - `* access_config_detail.windows_log_info: object<AccessConfigWindowsLogInfo> -> object<AccessConfigWindowsLogInfoCreate>`
      - `* access_config_detail: object<AccessConfigDeatil> -> object<AccessConfigDeatilCreate>`
  - **CreateAccessConfig**
    - 请求参数变更
      - `+ binary_collect`
      - `+ log_split`
      - `+ access_config_type: enum value [K8S_CCE]`
      - `+ access_config_detail.stdout`
      - `+ access_config_detail.stderr`
      - `+ access_config_detail.pathType`
      - `+ access_config_detail.namespaceRegex`
      - `+ access_config_detail.podNameRegex`
      - `+ access_config_detail.containerNameRegex`
      - `+ access_config_detail.includeLabels`
      - `+ access_config_detail.excludeLabels`
      - `+ access_config_detail.includeEnvs`
      - `+ access_config_detail.excludeEnvs`
      - `+ access_config_detail.logLabels`
      - `+ access_config_detail.logEnvs`
      - `+ access_config_detail.includeK8sLabels`
      - `+ access_config_detail.excludeK8sLabels`
      - `+ access_config_detail.logK8s`
    - 响应参数变更
      - `+ log_split`
      - `+ binary_collect`
      - `+ access_config_type: enum value [K8S_CCE]`
      - `+ access_config_detail.stdout`
      - `+ access_config_detail.stderr`
      - `+ access_config_detail.pathType`
      - `+ access_config_detail.namespaceRegex`
      - `+ access_config_detail.podNameRegex`
      - `+ access_config_detail.containerNameRegex`
      - `+ access_config_detail.includeLabels`
      - `+ access_config_detail.excludeLabels`
      - `+ access_config_detail.includeEnvs`
      - `+ access_config_detail.excludeEnvs`
      - `+ access_config_detail.logLabels`
      - `+ access_config_detail.logEnvs`
      - `+ access_config_detail.includeK8sLabels`
      - `+ access_config_detail.excludeK8sLabels`
      - `+ access_config_detail.logK8s`
      - `* access_config_detail.format.single: object<AccessConfigFormatSingle> -> object<AccessConfigFormatSingleCreate>`
      - `* access_config_detail.format.multi: object<AccessConfigFormatMutil> -> object<AccessConfigFormatMutilCreate>`
      - `* access_config_detail.format: object<AccessConfigFormat> -> object<AccessConfigFormatCreate>`
      - `* access_config_detail.windows_log_info: object<AccessConfigWindowsLogInfo> -> object<AccessConfigWindowsLogInfoCreate>`
      - `* access_config_detail: object<AccessConfigDeatil> -> object<AccessConfigDeatilCreate>`
  - **DeleteAccessConfig**
    - 响应参数变更
      - `+ log_split`
      - `+ binary_collect`
      - `+ result.log_split`
      - `+ result.binary_collect`
      - `+ result.access_config_type: enum value [K8S_CCE]`
      - `+ result.access_config_detail.stdout`
      - `+ result.access_config_detail.stderr`
      - `+ result.access_config_detail.pathType`
      - `+ result.access_config_detail.namespaceRegex`
      - `+ result.access_config_detail.podNameRegex`
      - `+ result.access_config_detail.containerNameRegex`
      - `+ result.access_config_detail.includeLabels`
      - `+ result.access_config_detail.excludeLabels`
      - `+ result.access_config_detail.includeEnvs`
      - `+ result.access_config_detail.excludeEnvs`
      - `+ result.access_config_detail.logLabels`
      - `+ result.access_config_detail.logEnvs`
      - `+ result.access_config_detail.includeK8sLabels`
      - `+ result.access_config_detail.excludeK8sLabels`
      - `+ result.access_config_detail.logK8s`
      - `* result.access_config_detail.format.single: object<AccessConfigFormatSingle> -> object<AccessConfigFormatSingleCreate>`
      - `* result.access_config_detail.format.multi: object<AccessConfigFormatMutil> -> object<AccessConfigFormatMutilCreate>`
      - `* result.access_config_detail.format: object<AccessConfigFormat> -> object<AccessConfigFormatCreate>`
      - `* result.access_config_detail.windows_log_info: object<AccessConfigWindowsLogInfo> -> object<AccessConfigWindowsLogInfoCreate>`
      - `* result.access_config_detail: object<AccessConfigDeatil> -> object<AccessConfigDeatilCreate>`

### HuaweiCloud SDK VPC

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListSecurityGroupRules**
    - 请求参数变更
      - `+ remote_ip_prefix`

# 3.1.40 2023-06-29

### HuaweiCloud SDK IdentityCenter

- _新增特性_
  - 支持IAM 身份中心服务
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK WorkspaceApp

- _新增特性_
  - 支持云应用服务
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK Config

- _新增特性_
  - 支持配置审计服务
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK VPC

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ShowAddressGroup**
    - 响应参数变更
      - `+ address_group.tags`
  - **UpdateAddressGroup**
    - 响应参数变更
      - `+ address_group.tags`
  - **ListAddressGroup**
    - 响应参数变更
      - `+ address_groups.tags`
  - **CreateAddressGroup**
    - 响应参数变更
      - `+ address_group.tags`

# 3.1.39 2023-06-21

### HuaweiCloud SDK CloudRTC

- _新增特性_
  - 支持华为云实时音视频服务
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK CFW

- _新增特性_
  - 支持云防火墙服务
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK CloudTable

- _新增特性_
  - 支持以下接口：
    - `EnableComponent`
    - `ExpandClusterComponent`
    - `RebootCloudTableCluster`
    - `ShowClusterSetting`
    - `UpdateClusterSetting`
- _解决问题_
  - 无
- _特性变更_
  - 无

# 3.1.38 2023-06-15

### HuaweiCloud SDK CBR

- _新增特性_
    - 支持云备份服务
- _解决问题_
    - 无
- _特性变更_
    - 无

### HuaweiCloud SDK Live

- _新增特性_
    - 支持视频直播服务
- _解决问题_
    - 无
- _特性变更_
    - 无

### HuaweiCloud SDK OCR

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **RecognizeGeneralText**
    - 请求参数变更
      - `+ single_orientation_mode`

### HuaweiCloud SDK SIS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ShowVocabularies**
    - 请求参数变更
      - `+ offset`
      - `+ limit`

# 3.1.37 2023-06-08

### HuaweiCloud SDK ECS

- _新增特性_
  - 支持接口`ChangeServerChargeMode`
- _解决问题_
  - 无
- _特性变更_
  - **CreateServers**
    - 请求参数变更
      - `+ server.nics.allowed_address_pairs`
  - **CreatePostPaidServers**
    - 请求参数变更
      - `+ server.nics.allowed_address_pairs`

### HuaweiCloud SDK TMS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListResource**
    - 响应参数变更
      - `+ resources.tags`

### HuaweiCloud SDK VPC

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ShowAddressGroup**
    - 响应参数变更
      - `+ address_group.enterprise_project_id`
  - **UpdateAddressGroup**
    - 响应参数变更
      - `+ address_group.enterprise_project_id`
  - **ListAddressGroup**
    - 请求参数变更
      - `+ enterprise_project_id`
    - 响应参数变更
      - `+ address_groups.enterprise_project_id`
  - **CreateAddressGroup**
    - 请求参数变更
      - `+ address_group.enterprise_project_id`
    - 响应参数变更
      - `+ address_group.enterprise_project_id`

# 3.1.36 2023-06-01

### HuaweiCloud SDK VOD

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **CreateAssetByFileUpload**
    - 请求参数变更
      - `+ review.interval`
      - `+ review.politics`
      - `+ review.terrorism`
      - `+ review.porn`
  - **PublishAssetFromObs**
    - 请求参数变更
      - `+ review.interval`
      - `+ review.politics`
      - `+ review.terrorism`
      - `+ review.porn`
  - **CreateAssetReviewTask**
    - 请求参数变更
      - `+ review.interval`
      - `+ review.politics`
      - `+ review.terrorism`
      - `+ review.porn`
    - 响应参数变更
      - `+ review.interval`
      - `+ review.politics`
      - `+ review.terrorism`
      - `+ review.porn`
  - **UploadMetaDataByUrl**
    - 请求参数变更
      - `+ upload_metadatas.review.interval`
      - `+ upload_metadatas.review.politics`
      - `+ upload_metadatas.review.terrorism`
      - `+ upload_metadatas.review.porn`

### HuaweiCloud SDK VPC

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **CreateVpcPeering**
    - 请求参数变更
      - `+ peering.description`

# 3.1.35 2023-05-25

### HuaweiCloud SDK ECS

- _新增特性_
  - 支持接口`ListFlavorSellPolicies`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK EIP

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListPublicipsByTags**
    - 响应参数变更
      - `+ resources.resource_detail`
      - `- resources.resouce_detail`
  - **AddPublicipsIntoSharedBandwidth**
    - 响应参数变更
      - `+ bandwidth.enable_bandwidth_rules`
      - `+ bandwidth.rule_quota`
      - `+ bandwidth.bandwidth_rules`

### HuaweiCloud SDK VPC

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **CreateVpc**
    - 请求参数变更
      - `+ vpc.tags`
  - **CreateSubnet**
    - 请求参数变更
      - `+ subnet.tags`
    - **ShowAddressGroup**
    - 响应参数变更
      - `+ address_group.max_capacity`
      - `+ address_group.status`
      - `+ address_group.status_message`
  - **UpdateAddressGroup**
    - 请求参数变更
      - `+ address_group.max_capacity`
    - 响应参数变更
      - `+ address_group.max_capacity`
      - `+ address_group.status`
      - `+ address_group.status_message`
  - **ListAddressGroup**
    - 响应参数变更
      - `+ address_groups.max_capacity`
      - `+ address_groups.status`
      - `+ address_groups.status_message`
  - **CreateAddressGroup**
    - 请求参数变更
      - `+ address_group.max_capacity`
    - 响应参数变更
      - `+ address_group.max_capacity`
      - `+ address_group.status`
      - `+ address_group.status_message`

# 3.1.34 2023-05-18

### HuaweiCloud SDK ECS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **CreateServers**
    - 请求参数变更
      - `+ server.root_volume.metadata`
      - `- server.root_volume.extendparam.__system__encrypted`
      - `- server.root_volume.extendparam.__system__cmkid`
      - `+ server.data_volumes.delete_on_termination`
  - **CreatePostPaidServers**
    - 请求参数变更
      - `+ server.data_volumes.delete_on_termination`
      - `+ server.root_volume.metadata`
      - `- server.root_volume.extendparam.__system__encrypted`
      - `- server.root_volume.extendparam.__system__cmkid`

# 3.1.33 2023-05-11

### HuaweiCloud SDK ECS

- _新增特性_
  - 支持接口`NovaAttachInterface`
- _解决问题_
  - 无
- _特性变更_
  - **ReinstallServerWithoutCloudInit**
    - 请求参数变更
      - `+ os-reinstall.metadata`
  - **ChangeServerOsWithoutCloudInit**
    - 请求参数变更
      - `+ os-change.metadata`
  - **ReinstallServerWithCloudInit**
    - 请求参数变更
      - `+ os-reinstall.metadata.__system__encrypted`
      - `+ os-reinstall.metadata.__system__cmkid`
  - **ChangeServerOsWithCloudInit**
    - 请求参数变更
      - `+ os-change.metadata.__system__encrypted`
      - `+ os-change.metadata.__system__cmkid`
  - **CreateServers**
    - 请求参数变更
      - `+ server.root_volume.extendparam.__system__encrypted`
      - `+ server.root_volume.extendparam.__system__cmkid`
  - **CreatePostPaidServers**
    - 请求参数变更
      - `+ server.root_volume.extendparam.__system__encrypted`
      - `+ server.root_volume.extendparam.__system__cmkid`

### HuaweiCloud SDK IMS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListImages**
    - 请求参数变更
      - `+ __imagetype: enum value [market]`

### HuaweiCloud SDK LTS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **UpdateAomMappingRules**
    - 请求参数变更
      - `* body: object<AomMappingRequestInfo> -> object<UpdateAomMappingRequest>`

# 3.1.32 2023-04-27

### HuaweiCloud SDK LTS

- _新增特性_
    - 支持云日志服务
- _解决问题_
    - 无
- _特性变更_
    - 无

### HuaweiCloud SDK CSMS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListResourceInstances**
    - 响应参数变更
      - `+ resources.sys_tags`

# 3.1.31 2023-04-20

### HuaweiCloud SDK OCR

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **RecognizeDriverLicense**
    - 响应参数变更
      - `+ result.front`
      - `+ result.back`
  - **RecognizeThailandIdcard**
    - 响应参数变更
      - `+ result.type`
      - `+ result.name_en`
      - `+ result.ref_number`
      - `+ result.confidence.name_en`
      - `+ result.confidence.ref_number`

### HuaweiCloud SDK VPC

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListVpcsByTags**
    - 响应参数变更
      - `+ resources.resource_detail`
      - `- resources.resouce_detail`
  - **ListSubnetsByTags**
    - 响应参数变更
      - `+ resources.resource_detail`
      - `- resources.resouce_detail`
  - **UpdateRouteTable**
    - 请求参数变更
      - `+ routetable.routes.add`
      - `+ routetable.routes.mod`
      - `+ routetable.routes.del`
      - `* routetable.routes: map<string, list<RouteTableRoute>> -> object<RouteTableRouteAction>`

# 3.1.30 2023-04-13

### HuaweiCloud SDK EVS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ShowVolume**
    - 响应参数变更
      - `+ volume.iops`
      - `+ volume.throughput`
  - **ListVolumes**
    - 响应参数变更
      - `+ volumes.iops`
      - `+ volumes.throughput`

### HuaweiCloud SDK SIS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **RecognizeShortAudio**
    - 请求参数变更
      - `+ config.property: enum value [english_8k_common,english_16k_common]`
  - **CollectTranscriberJob**
    - 响应参数变更
      - `+ job_id`

# 3.1.29 2023-04-06

### HuaweiCloud SDK OCR

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **RecognizeFinancialStatement**
    - 请求参数变更
      - `+ return_rectification_matrix`
    - 响应参数变更
      - `+ result.rectification_matrix`

# 3.1.28 2023-03-30

### HuaweiCloud SDK VOD

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **PublishAssetFromObs**
    - 请求参数变更
      - `+ video_type: enum value [RMVB,WEBM]`

# 3.1.27 2023-03-23

### HuaweiCloud SDK EPS

- _新增特性_
  - 支持企业管理服务
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK TMS

- _新增特性_
  - 支持标签管理服务
- _解决问题_
  - 无
- _特性变更_
  - 无

# 3.1.26 2023-03-16

### HuaweiCloud SDK EIP

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListBandwidthPkg**
    - 请求参数变更
      - `+ limit`
      - `+ marker`
      - `+ offset`
  - **ListCommonPools**
    - 请求参数变更
      - `+ limit`
      - `+ offset`
  - **ListShareBandwidthTypes**
    - 请求参数变更
      - `+ marker`
      - `+ offset`

### HuaweiCloud SDK IVS

- _新增特性_
  - 支持接口`DetectStandardByVideoAndIdCardImage`、`DetectStandardByVideoAndNameAndId`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK OCR

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **RecognizeMvsInvoice**
    - 请求参数变更
      - `+ return_text_location`
      - `+ return_confidence`
      - `+ type`
    - 响应参数变更
      - `+ result.buyer_address`
      - `+ result.buyer_phone`
      - `+ result.licence_plate_number`
      - `+ result.registration_number`
      - `+ result.dept_motor_vehicles`
      - `+ result.auction_org_name`
      - `+ result.auction_org_address`
      - `+ result.auction_org_id`
      - `+ result.auction_org_bank_account`
      - `+ result.auction_org_phone`
      - `+ result.used_vehicle_market_name`
      - `+ result.used_vehicle_market_id`
      - `+ result.used_vehicle_market_address`
      - `+ result.used_vehicle_market_bank_account`
      - `+ result.used_vehicle_market_phone`
      - `+ result.remark`
      - `+ result.drawer_name`
      - `+ result.type`
      - `+ result.text_location`
      - `+ result.confidence`

# 3.1.25 2023-03-09

### HuaweiCloud SDK OCR

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - 接口`RecognizeAutoClassification`新增请求参数 `extended_parameters`

# 3.1.24 2023-03-07

### HuaweiCloud SDK VOD

- _新增特性_
  - 支持接口`ModifySubtitle`
- _解决问题_
  - 无
- _特性变更_
  - 无

# 3.1.23 2023-02-23

### HuaweiCloud SDK Core

- _新增特性_
  - 无
- _解决问题_
  - 修复在linux arm64平台上编译错误的问题
- _特性变更_
  - 无

# 3.1.22 2023-02-16

### HuaweiCloud SDK FRS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - 接口`DetectLiveByUrl`新增请求参数 `nod_threshold`
  - 接口`DetectLiveByUrlIntl`新增请求参数 `nod_threshold`
  - 接口`DetectLiveByFile`新增请求参数 `nod_threshold`
  - 接口`DetectLiveByFileIntl`新增请求参数 `nod_threshold`
  - 接口`DetectLiveByBase64`新增请求参数 `nod_threshold`
  - 接口`DetectLiveByBase64Intl`新增请求参数 `nod_threshold`

# 3.1.21 2023-02-09

### HuaweiCloud SDK OCR

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - 接口`RecognizeTollInvoice`:
    - 新增请求参数 `return_text_location`
    - 新增响应参数 `text_location`

# 3.1.20 2023-02-02

### HuaweiCloud SDK IMS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - 接口`CreateImage`请求参数`type`新增枚举值`IsoImage`

# 3.1.19 2023-01-12

### HuaweiCloud SDK FRS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - 接口`DetectLiveByUrl`新增请求参数 `Enterprise-Project-Id`
  - 接口`DetectLiveByUrlIntl`新增请求参数 `Enterprise-Project-Id`
  - 接口`DetectLiveFaceByUrl`新增请求参数 `Enterprise-Project-Id`
  - 接口`DetectLiveByFile`新增请求参数 `Enterprise-Project-Id`
  - 接口`DetectLiveByFileIntl`新增请求参数 `Enterprise-Project-Id`
  - 接口`DetectLiveFaceByFile`新增请求参数 `Enterprise-Project-Id`
  - 接口`DetectLiveByBase64`新增请求参数 `Enterprise-Project-Id`
  - 接口`DetectLiveByBase64Intl`新增请求参数 `Enterprise-Project-Id`
  - 接口`DetectLiveFaceByBase64`新增请求参数 `Enterprise-Project-Id`
  - 接口`SearchFaceByFaceId`新增请求参数 `Enterprise-Project-Id`
  - 接口`DetectFaceByFile`新增请求参数 `Enterprise-Project-Id`
  - 接口`DetectFaceByFileIntl`新增请求参数 `Enterprise-Project-Id`
  - 接口`UpdateFace`新增请求参数 `Enterprise-Project-Id`
  - 接口`DeleteFaceByExternalImageId`新增请求参数 `Enterprise-Project-Id`
  - 接口`ShowFacesByLimit`新增请求参数 `Enterprise-Project-Id`
  - 接口`CompareFaceByFile`新增请求参数 `Enterprise-Project-Id`
  - 接口`DeleteFaceByFaceId`新增请求参数 `Enterprise-Project-Id`
  - 接口`ShowFacesByFaceId`新增请求参数 `Enterprise-Project-Id`
  - 接口`AddFacesByBase64`新增请求参数 `Enterprise-Project-Id`
  - 接口`DetectFaceByUrl`新增请求参数 `Enterprise-Project-Id`
  - 接口`DetectFaceByUrlIntl`新增请求参数 `Enterprise-Project-Id`
  - 接口`DeleteFaceSet`新增请求参数 `Enterprise-Project-Id`
  - 接口`ShowFaceSet`新增请求参数 `Enterprise-Project-Id`
  - 接口`CompareFaceByBase64`新增请求参数 `Enterprise-Project-Id`
  - 接口`DetectFaceByBase64`新增请求参数 `Enterprise-Project-Id`
  - 接口`DetectFaceByBase64Intl`新增请求参数 `Enterprise-Project-Id`
  - 接口`CreateFaceSet`新增请求参数 `Enterprise-Project-Id`
  - 接口`ShowAllFaceSets`新增请求参数 `Enterprise-Project-Id`
  - 接口`SearchFaceByFile`新增请求参数 `Enterprise-Project-Id`
  - 接口`AddFacesByUrl`新增请求参数 `Enterprise-Project-Id`
  - 接口`AddFacesByFile`新增请求参数 `Enterprise-Project-Id`
  - 接口`SearchFaceByUrl`新增请求参数 `Enterprise-Project-Id`
  - 接口`SearchFaceByBase64`新增请求参数 `Enterprise-Project-Id`
  - 接口`CompareFaceByUrl`新增请求参数 `Enterprise-Project-Id`
  - 接口`BatchDeleteFaces`新增请求参数 `Enterprise-Project-Id`

### HuaweiCloud SDK IVS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - 接口`DetectStandardByIdCardImage`新增请求参数 `Enterprise-Project-Id`
  - 接口`DetectStandardByNameAndId`新增请求参数 `Enterprise-Project-Id`
  - 接口`DetectExtentionByNameAndId`新增请求参数 `Enterprise-Project-Id`
  - 接口`DetectExtentionByIdCardImage`新增请求参数 `Enterprise-Project-Id`

### HuaweiCloud SDK OCR

- _新增特性_
  - 支持接口`RecognizeCustomTemplate`
- _解决问题_
  - 无
- _特性变更_
  - 接口`RecognizeGeneralTable`:
    - 新增请求参数 `return_char_location`、`return_rectification_matrix`
    - 新增响应参数 `char_list`
  - 接口`RecognizeGeneralText`新增请求参数 `language`
  - 接口`RecognizeWebImage`:
    - 新增响应参数 `extracted_data`
    - 移除响应参数 `extracted_data`、`contact_info`、`image_size`、`height`、`width`、`name`、`phone`、`province`、`city`、`district`、`detail_address`

# 3.1.18 2023-01-05

### HuaweiCloud SDK VPC

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - 接口`ListPorts`:
    - 新增请求参数 `security_groups`
    - 请求参数`fixed_ips`类型调整 `string` -> `array`

# 3.1.17 2022-12-29

### HuaweiCloud SDK EIP

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - 接口`ChangeBandwidthToPeriod`新增请求参数 `extendParam`
  - 接口`ChangePublicipToPeriod`新增请求参数 `extendParam`
  - 接口`ListBandwidthPkg`:
    - 新增响应参数 `tenantId`
    - 移除响应参数 `tenant_id`
  - 接口`UpdateAssociatePublicip`请求参数`associate_instance_type`、`associate_instance_id`改为必填
  - 接口`AssociatePublicips`请求参数`associate_instance_type`、`associate_instance_id`改为必填

### HuaweiCloud SDK IMS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - 接口`ShowJob`新增响应参数 `sub_jobs_result`、`sub_jobs_list`
  - 接口`ShowJobProgress`新增响应参数 `sub_jobs_result`、`sub_jobs_list`

### HuaweiCloud SDK VOD

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - 接口`UpdateTranscodeTemplate`请求参数`name`改为非必填
  - 接口`UpdateTemplateGroupCollection`:
    - 请求参数`collection_id`改为必填
    - 请求参数`name`、`template_group_list`改为非必填

### HuaweiCloud SDK VPC

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - 接口`ListVpcs`新增响应参数 `tenant_id`、`created_at`、`updated_at`
  - 接口`CreateVpc`新增响应参数 `tenant_id`、`created_at`、`updated_at`
  - 接口`ShowVpc`新增响应参数 `tenant_id`、`created_at`、`updated_at`
  - 接口`UpdateVpc`新增响应参数 `tenant_id`、`created_at`、`updated_at`
  - 接口`ListSubnets`新增响应参数 `tenant_id`、`created_at`、`updated_at`
  - 接口`CreateSubnet`新增响应参数 `tenant_id`、`created_at`、`updated_at`
  - 接口`ShowSubnet`新增响应参数 `tenant_id`、`created_at`、`updated_at`
  - 接口`ListRouteTables`新增响应参数 `created_at`、`updated_at`
  - 接口`CreateRouteTable`新增响应参数 `created_at`、`updated_at`
  - 接口`ShowRouteTable`新增响应参数 `created_at`、`updated_at`
  - 接口`UpdateRouteTable`新增响应参数 `created_at`、`updated_at`
  - 接口`AssociateRouteTable`新增响应参数 `created_at`、`updated_at`
  - 接口`DisassociateRouteTable`新增响应参数 `created_at`、`updated_at`

# 3.1.16 2022-12-26

### HuaweiCloud SDK VOD

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - 接口`UpdateTranscodeTemplate`请求参数`group_id`、`name`、`bitrate`、`frame_rate`、`video_codec`、`format`、`hls_interval`改为必填
  - 接口`ListTranscodeTemplate`响应参数`bitrate`、`frame_rate`、`video_codec`、`format`、`hls_interval`改为必填
  - 接口`CreateTranscodeTemplate`请求参数`name`、`bitrate`、`frame_rate`、`video_codec`、`format`、`hls_interval`改为必填
  - 接口`UpdateTemplateGroupCollection`请求参数`name`、`template_group_list`改为必填
  - 接口`CreateTemplateGroupCollection`请求参数`name`、`template_group_list`改为必填

# 3.1.15 2022-12-22

### HuaweiCloud SDK IMS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - 接口`CopyImageCrossRegion`新增请求参数 `vault_id`

# 3.1.14 2022-12-19

### HuaweiCloud SDK ECS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - 接口`ListServersDetails`新增请求参数 `server_id`

### HuaweiCloud SDK EIP

- _新增特性_
  - 支持接口`ShowResourcesJobDetail`、`ChangeBandwidthToPeriod`、`ChangePublicipToPeriod`
- _解决问题_
  - 无
- _特性变更_
  - 无

# 3.1.13 2022-12-15

### HuaweiCloud SDK ECS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - 接口`ListServersDetails`新增请求参数 `server_id`

### HuaweiCloud SDK EIP

- _新增特性_
  - 支持接口`ShowResourcesJobDetail`、`ChangeBandwidthToPeriod`、`ChangePublicipToPeriod`
- _解决问题_
  - 无
- _特性变更_
  - 无

# 3.1.12 2022-12-08

### HuaweiCloud SDK EIP

- _新增特性_
  - 支持以下接口：
    - `ListBandwidthPkg`
    - `CountPublicIp`
    - `ShowPublicIpType`
    - `CountPublicIpInstance`
    - `BatchCreatePublicips`
    - `BatchDeletePublicIp`
    - `BatchDisassociatePublicips`
    - `CountEipAvailableResources`
- _解决问题_
  - 无
- _特性变更_
  - 接口`AssociatePublicips`请求参数`associate_instance_type`移除枚举值``
  - 接口`UpdateAssociatePublicip`请求参数`associate_instance_type`移除枚举值``

# 3.1.11 2022-11-30

### HuaweiCloud SDK EIP

- _新增特性_
  - 支持接口`DisassociatePublicips`、`AssociatePublicips`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK SIS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - 接口`PushTranscriberJobs`请求参数`property`新增枚举值`chinese_8k_general`
  - 接口`RunTts`请求参数`property`新增枚举值`chinese_huaxiaoru_common`、`chinese_huaxiaohan_common`、`chinese_huaxiaoning_common`、`chinese_huaxiaozhen_common`、`english_alvin_common`、`english_amy_common`

# 3.1.10 2022-11-24

### HuaweiCloud SDK OCR

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - 接口`RecognizeHealthCode`新增响应参数 `test_interval`

# 3.1.9 2022-11-17

### HuaweiCloud SDK ECS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - 接口`RegisterServerMonitor`请求参数`monitorMetrics`类型调整 `string` -> `enum`

### HuaweiCloud SDK EIP

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - 接口`DisassociatePublicips`请求参数`associate_instance_type`新增枚举值`VPN`
  - 接口`AssociatePublicips`请求参数`associate_instance_type`新增枚举值`VPN`

### HuaweiCloud SDK OCR

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - 接口`RecognizeGeneralTable`新增请求参数 `Enterprise-Project-Id`
  - 接口`RecognizeVatInvoice`新增请求参数 `Enterprise-Project-Id`
  - 接口`RecognizeInvoiceVerification`新增请求参数 `Enterprise-Project-Id`
  - 接口`RecognizeGeneralText`新增请求参数 `Enterprise-Project-Id`
  - 接口`RecognizeWebImage`新增请求参数 `Enterprise-Project-Id`
  - 接口`RecognizeHealthCode`新增请求参数 `Enterprise-Project-Id`
  - 接口`RecognizeQuotaInvoice`新增请求参数 `Enterprise-Project-Id`
  - 接口`RecognizeIdCard`新增请求参数 `Enterprise-Project-Id`
  - 接口`RecognizeHandwriting`新增请求参数 `Enterprise-Project-Id`
  - 接口`RecognizeVehicleLicense`新增请求参数 `Enterprise-Project-Id`
  - 接口`RecognizeTransportationLicense`新增请求参数 `Enterprise-Project-Id`
  - 接口`RecognizeTaxiInvoice`新增请求参数 `Enterprise-Project-Id`
  - 接口`RecognizeAutoClassification`新增请求参数 `Enterprise-Project-Id`
  - 接口`RecognizeTollInvoice`新增请求参数 `Enterprise-Project-Id`
  - 接口`RecognizeMvsInvoice`新增请求参数 `Enterprise-Project-Id`
  - 接口`RecognizeLicensePlate`新增请求参数 `Enterprise-Project-Id`
  - 接口`RecognizeFlightItinerary`新增请求参数 `Enterprise-Project-Id`
  - 接口`RecognizeBusinessLicense`新增请求参数 `Enterprise-Project-Id`
  - 接口`RecognizeDriverLicense`新增请求参数 `Enterprise-Project-Id`
  - 接口`RecognizeBusinessCard`新增请求参数 `Enterprise-Project-Id`
  - 接口`RecognizeTrainTicket`新增请求参数 `Enterprise-Project-Id`
  - 接口`RecognizeVin`新增请求参数 `Enterprise-Project-Id`
  - 接口`RecognizePassport`新增请求参数 `Enterprise-Project-Id`
  - 接口`RecognizeBankcard`新增请求参数 `Enterprise-Project-Id`
  - 接口`RecognizeInsurancePolicy`新增请求参数 `Enterprise-Project-Id`
  - 接口`RecognizeFinancialStatement`新增请求参数 `Enterprise-Project-Id`
  - 接口`RecognizeQualificationCertificate`新增请求参数 `Enterprise-Project-Id`
  - 接口`RecognizeThailandIdcard`新增请求参数 `Enterprise-Project-Id`
  - 接口`RecognizeMyanmarIdcard`新增请求参数 `Enterprise-Project-Id`
  - 接口`RecognizeMyanmarDriverLicense`:
    - 新增请求参数 `Enterprise-Project-Id`
    - 新增响应参数 `birth`、`birth`
    - 移除响应参数 `Birth`、`Birth`
  - 接口`RecognizeChileIdCard`新增请求参数 `Enterprise-Project-Id`
  - 接口`RecognizeThailandLicensePlate`新增请求参数 `Enterprise-Project-Id`
  - 接口`RecognizeWaybillElectronic`新增请求参数 `Enterprise-Project-Id`
  - 接口`RecognizePcrTestRecord`新增请求参数 `Enterprise-Project-Id`
  - 接口`RecognizeIdDocument`:
    - 新增请求参数 `Enterprise-Project-Id`
    - 响应参数`result`类型调整 `object` -> `object`
  - 接口`RecognizeHkIdCard`新增请求参数 `Enterprise-Project-Id`
  - 接口`RecognizeCambodianIdCard`新增请求参数 `Enterprise-Project-Id`
  - 接口`RecognizeExitEntryPermit`新增请求参数 `Enterprise-Project-Id`
  - 接口`RecognizeMainlandTravelPermit`新增请求参数 `Enterprise-Project-Id`
  - 接口`RecognizeMacaoIdCard`新增请求参数 `Enterprise-Project-Id`

### HuaweiCloud SDK VPC

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - 接口`CreateSubnet`:
    - 请求参数`opt_name`新增枚举值`addresstime`
    - 响应参数`opt_name`新增枚举值`addresstime`
  - 接口`ListSubnets`响应参数`opt_name`新增枚举值`addresstime`
  - 接口`ShowSubnet`响应参数`opt_name`新增枚举值`addresstime`
  - 接口`UpdateSubnet`请求参数`opt_name`新增枚举值`addresstime`

# 3.1.8 2022-11-14

### HuaweiCloud SDK CSMS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - 接口`ListSecretTags`新增响应参数 `sys_tags`

# 3.1.7 2022-11-03

### HuaweiCloud SDK ECS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - 接口`NovaCreateServers`请求参数`destination_type`改为非必填

### HuaweiCloud SDK OCR

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - 接口`RecognizeGeneralText`:
    - 新增请求参数 `character_mode`
    - 新增响应参数 `confidence`、`char_list`
  - 接口`RecognizeThailandIdcard`:
    - 新增请求参数 `return_text_location`
    - 新增响应参数 `text_location`

# 3.1.6 2022-11-02

### HuaweiCloud SDK ECS

- _新增特性_
  - 支持接口`UpdateServerBlockDevice`、`RegisterServerMonitor`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK SIS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - 接口`PushTranscriberJobs`请求参数`property`新增枚举值`sichuan_8k_common`
  - 接口`RunTts`请求参数`property`新增枚举值`chinese_huaxiaolong_common`、`chinese_huaxiaorui_common`

# 3.1.5 2022-10-27

### HuaweiCloud SDK ECS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - 接口`CreateServers`新增请求参数 `X-Client-Token`、`batch_create_in_multi_az`
  - 接口`CreatePostPaidServers`新增请求参数 `X-Client-Token`

### HuaweiCloud SDK IMS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - 接口`ListTags`请求参数`__imagetype`新增枚举值`market`
  - 接口`GlanceListImages`:
    - 请求参数`__imagetype`新增枚举值`market`
    - 响应参数`__imagetype`新增枚举值`market`
  - 接口`GlanceShowImage`响应参数`__imagetype`新增枚举值`market`
  - 接口`GlanceUpdateImage`响应参数`__imagetype`新增枚举值`market`

# 3.1.4 2022-09-28

### HuaweiCloud SDK OCR

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - 接口`RecognizeHealthCode`新增响应参数 `type`、`idcard_number`、`phone_number`、`province`、`city`、`vaccination_status`、`pcr_test_result`、`pcr_test_organization`、`pcr_test_time`、`pcr_sampling_time`、`reached_city`

# 3.1.3 2022-09-22

### HuaweiCloud SDK EIP

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - 接口`CreatePublicip`新增请求参数 `port_id`
  - 接口`CreatePrePaidPublicip`新增请求参数 `port_id`

### HuaweiCloud SDK OCR

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - 接口`RecognizeIdCard`:
    - 新增请求参数 `detect_copy`
    - 新增响应参数 `detect_copy_result`

### HuaweiCloud SDK VOD

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - 接口`PublishAssets`新增响应参数 `pack_type`、`pack_type`
  - 接口`UnpublishAssets`新增响应参数 `pack_type`、`pack_type`
  - 接口`ShowAssetMeta`新增响应参数 `pack_type`、`pack_type`
  - 接口`ShowAssetDetail`新增响应参数 `pack_type`、`pack_type`
  - 接口`ShowTakeOverTaskDetails`新增响应参数 `pack_type`、`pack_type`
  - 接口`ShowTakeOverAssetDetails`新增响应参数 `pack_type`、`pack_type`

# 3.1.2 2022-09-15

### HuaweiCloud SDK EVS

- _新增特性_
  - 支持以下接口：
    - `ShowVersion`
    - `ListVersions`
    - `CinderShowVolumeTransfer`
    - `CinderDeleteVolumeTransfer`
    - `CinderListVolumeTransfers`
    - `CinderCreateVolumeTransfer`
    - `CinderAcceptVolumeTransfer`
- _解决问题_
  - 无
- _特性变更_
  - 无

# 3.1.1 2022-09-08

### HuaweiCloud SDK EVS

- _新增特性_
  - 支持以下接口：
    - `ShowVersion`
    - `ListVersions`
    - `CinderShowVolumeTransfer`
    - `CinderDeleteVolumeTransfer`
    - `CinderListVolumeTransfers`
    - `CinderCreateVolumeTransfer`
    - `CinderAcceptVolumeTransfer`
- _解决问题_
  - 无
- _特性变更_
  - 无

# 3.0.43-rc 2022-08-29

### HuaweiCloud SDK ECS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - 接口`CreatePostPaidServers`新增请求参数 `batch_create_in_multi_az`

### HuaweiCloud SDK IMS

- _新增特性_
  - 支持接口`ShowJobProgress`
- _解决问题_
  - 无
- _特性变更_
  - 无

# 3.0.42-beta 2022-08-25

### HuaweiCloud SDK OCR

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - 接口`RecognizeWebImage`:
    - 新增请求参数 `detect_font`
    - 新增响应参数 `font_list`、`font_scores`

### HuaweiCloud SDK VOD

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - 接口`CheckMd5Duplication`请求参数`size`类型调整 `int32` -> `int64`

# 3.0.41-beta 2022-08-18

### HuaweiCloud SDK ECS

- _新增特性_
  - 支持接口`ListServersByTag`
- _解决问题_
  - 无
- _特性变更_
  - 接口`NovaCreateServers`请求参数`destination_type`改为必填

### HuaweiCloud SDK OCR

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - 接口`RecognizeIdCard`:
    - 新增请求参数 `detect_reproduce`
    - 新增响应参数 `detect_reproduce_result`

### HuaweiCloud SDK VOD

- _新增特性_
  - 支持以下接口：
    - `ListTranscodeTemplate`
    - `UpdateTranscodeTemplate`
    - `CreateTranscodeTemplate`
    - `DeleteTranscodeTemplate`
    - `ListTemplateGroupCollection`
    - `UpdateTemplateGroupCollection`
    - `CreateTemplateGroupCollection`
    - `DeleteTemplateGroupCollection`
- _解决问题_
  - 无
- _特性变更_
  - 无

# 3.0.40-beta 2022-08-11

### HuaweiCloud SDK CSMS

- _新增特性_
  - 支持接口`UploadSecretBlob`、`DownloadSecretBlob`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK OCR

- _新增特性_
  - 支持接口`RecognizeMacaoIdCard`
- _解决问题_
  - 无
- _特性变更_
  - 无

# 3.0.39-beta 2022-08-02

### HuaweiCloud SDK SIS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - 接口`RecognizeShortAudio`请求参数`audio_format`新增枚举值`auto`

# 3.0.38-beta 2022-07-28

### HuaweiCloud SDK DRS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - 接口`BatchCreateJobs`请求参数`db_type`、`db_type`、`key`、`value`、`key`、`value`改为非必填
  - 接口`BatchSetObjects`请求参数`id`、`object_type`、`object_name`改为非必填
  - 接口`BatchUpdateJob`请求参数`name`、`alarm_to_user`、`db_type`、`db_type`、`node_type`、`engine_type`、`net_type`、`store_db_info`、`key`、`value`改为非必填
  - 接口`BatchListJobDetails`响应参数`db_type`、`db_type`、`db_type`、`db_type`改为非必填
  - 接口`BatchChangeData`请求参数`id`、`select`改为非必填

# 3.0.37-beta 2022-07-21

### HuaweiCloud SDK VPC

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - 接口`NeutronListSecurityGroupRules`新增响应参数 `security_group_rules_links`

# 3.0.36-beta 2022-07-14

### HuaweiCloud SDK EIP

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - 接口`ListPublicips`响应参数`create_time`类型调整 `date-time` -> `string`
  - 接口`ShowPublicip`响应参数`create_time`类型调整 `date-time` -> `string`

### HuaweiCloud SDK VPC

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - 接口`ListPorts`新增响应参数 `port_filter`、`ovs_hybrid_plug`
  - 接口`UpdatePort`新增响应参数 `port_filter`、`ovs_hybrid_plug`
  - 接口`ShowPort`新增响应参数 `port_filter`、`ovs_hybrid_plug`
  - 接口`CreateSecurityGroup`新增响应参数 `remote_address_group_id`
  - 接口`ListSecurityGroups`新增响应参数 `remote_address_group_id`
  - 接口`ShowSecurityGroup`新增响应参数 `remote_address_group_id`
  - 接口`ListSecurityGroupRules`新增响应参数 `remote_address_group_id`
  - 接口`ShowSecurityGroupRule`新增响应参数 `remote_address_group_id`
  - 接口`NeutronListSecurityGroups`新增响应参数 `remote_address_group_id`
  - 接口`NeutronUpdateSecurityGroup`新增响应参数 `remote_address_group_id`
  - 接口`NeutronShowSecurityGroup`新增响应参数 `remote_address_group_id`
  - 接口`NeutronListSecurityGroupRules`新增响应参数 `remote_address_group_id`
  - 接口`NeutronShowSecurityGroupRule`新增响应参数 `remote_address_group_id`

# 3.0.35-beta 2022-07-07

### HuaweiCloud SDK OCR

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - 接口`RecognizeVatInvoice`新增响应参数 `title`

### HuaweiCloud SDK SIS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - 接口`RecognizeShortAudio`请求参数`property`新增枚举值`chinese_16k_travel`
  - 接口`PushTranscriberJobs`请求参数`property`新增枚举值`chinese_16k_media`
  - 接口`CollectTranscriberJob`新增响应参数 `audio_duration`
  - 接口`RunTts`请求参数`property`新增枚举值`chinese_huaxiaomei_common`、`chinese_huaxiaofei_common`

# 3.0.34-beta 2022-06-30

### HuaweiCloud SDK OCR

- _新增特性_
  - 支持接口`RecognizeHkIdCard`、`RecognizeCambodianIdCard`、`RecognizeExitEntryPermit`、`RecognizeMainlandTravelPermit`
- _解决问题_
  - 无
- _特性变更_
  - 接口`RecognizeGeneralText`响应参数`direction`类型调整 `int32` -> `float`

# 3.0.33-beta 2022-06-19

### HuaweiCloud SDK OCR

- _新增特性_
  - 支持接口`RecognizeIdDocument`
- _解决问题_
  - 无
- _特性变更_
  - 无

# 3.0.32-beta 2022-06-02

### HuaweiCloud SDK OCR

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - 接口`RecognizeHealthCode`新增响应参数 `words_block_count`、`words_block_list`
  - 接口`RecognizePcrTestRecord`响应参数`confidence`类型调整 `float` -> `object`

# 3.0.31-beta 2022-05-26

### HuaweiCloud SDK ECS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - 接口`AttachServerVolume`新增请求参数 `volume_type`、`hw:passthrough`

# 3.0.30-beta 2022-05-19

### HuaweiCloud SDK ECS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - 接口`ResizeServer`新增请求参数 `dry_run`
  - 接口`ResizePostPaidServer`新增请求参数 `dry_run`
  - 接口`AttachServerVolume`新增请求参数 `dry_run`

### HuaweiCloud SDK VOD

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - 接口`UploadMetaDataByUrl`请求参数`video_type`新增枚举值`M3U8`
  - 接口`PublishAssets`新增响应参数 `sign_url`
  - 接口`UnpublishAssets`新增响应参数 `sign_url`
  - 接口`ShowAssetMeta`新增响应参数 `sign_url`
  - 接口`ShowAssetDetail`新增响应参数 `sign_url`
  - 接口`ShowTakeOverTaskDetails`新增响应参数 `sign_url`
  - 接口`ShowTakeOverAssetDetails`新增响应参数 `sign_url`

### HuaweiCloud SDK VPC

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - 接口`ListPorts`响应参数`device_owner`新增枚举值`neutron:VIP_PORT`, 移除枚举值`network:VIP_PORT`
  - 接口`UpdatePort`响应参数`device_owner`新增枚举值`neutron:VIP_PORT`, 移除枚举值`network:VIP_PORT`
  - 接口`ShowPort`响应参数`device_owner`新增枚举值`neutron:VIP_PORT`, 移除枚举值`network:VIP_PORT`

# 3.0.29-beta 2022-05-12

### HuaweiCloud SDK FRS

- _新增特性_
  - 支持以下接口：
    - `DetectLiveByUrlIntl`
    - `DetectLiveByFileIntl`
    - `DetectLiveByBase64Intl`
    - `DetectFaceByFileIntl`
    - `DetectFaceByUrlIntl`
    - `DetectFaceByBase64Intl`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK OCR

- _新增特性_
  - 支持接口`RecognizeHealthCode`
- _解决问题_
  - 无
- _特性变更_
  - 无

# 3.0.28-beta 2022-04-28

### HuaweiCloud SDK OCR

- _新增特性_
  - 无
- _解决问题_
  - 修复接口`RecognizeMyanmarDriverLicense`的响应体类型错误的问题
- _特性变更_
  - 无

# 3.0.27-beta 2022-04-14

### HuaweiCloud SDK CSMS

- _新增特性_
  - 支持云凭据管理服务
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK ECS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - 接口`ListServersDetails`新增请求参数 `ip_eq`

# 3.0.26-beta 2022-04-07

### HuaweiCloud SDK OCR

- _新增特性_
  - 支持接口`RecognizeWaybillElectronic`
- _解决问题_
  - 无
- _特性变更_
  - 接口`RecognizeVatInvoice`新增响应参数 `print_code`
  - 接口`RecognizeVehicleLicense`:
    - 新增请求参数 `return_text_location`
    - 新增响应参数 `text_location`
  - 接口`RecognizeTaxiInvoice`:
    - 新增请求参数 `return_text_location`
    - 新增响应参数 `text_location`
  - 接口`RecognizeDriverLicense`新增响应参数 `type`、`accumulated_scores`、`status`、`generation_date`、`current_time`
  - 接口`RecognizeTrainTicket`:
    - 新增请求参数 `return_text_location`
    - 新增响应参数 `text_location`
  - 接口`RecognizeBankcard`:
    - 新增请求参数 `return_text_location`
    - 新增响应参数 `text_location`

# 3.0.25-beta 2022-03-25

### HuaweiCloud SDK IMS

- _新增特性_
  - 支持接口`ListVersions`、`ShowVersion`
- _解决问题_
  - 无
- _特性变更_
  - 接口`CreateDataImage`请求参数`os_type`改为非必填

### HuaweiCloud SDK OCR

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - 接口`RecognizeVatInvoice`:
    - 新增请求参数 `return_text_location`
    - 新增响应参数 `text_location`
  - 接口`RecognizeIdCard`:
    - 新增请求参数 `return_text_location`
    - 新增响应参数 `text_location`
  - 接口`RecognizeDriverLicense`:
    - 新增请求参数 `return_text_location`
    - 新增响应参数 `text_location`

# 3.0.24-beta 2022-03-07

### HuaweiCloud SDK EIP

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - 接口`CreatePrePaidPublicip`的请求参数`ip_version`类型变更： `integer` -> `enum`
  
# 3.0.23-beta 2022-02-25

### HuaweiCloud SDK VOD

- _新增特性_
  - 支持接口`ListDomainLogs`
- _解决问题_
  - 无
- _特性变更_
  - 接口`DeleteAssets`新增请求参数 `delete_type`

### HuaweiCloud SDK VPC

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - 接口`NeutronListSubnets`新增响应参数`subnetpool_id`

# 3.0.22-beta 2022-01-10

### HuaweiCloud SDK IMS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - 接口`GlanceListImages`响应参数`active_at`改为非必填
  - 接口`GlanceShowImage`响应参数`active_at`改为非必填
  - 接口`GlanceUpdateImage`响应参数`active_at`改为非必填

# 3.0.21-beta 2021-12-25

### HuaweiCloud SDK ECS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - 接口`NovaListServerActions`移除响应参数`updated_at`

# 3.0.20-beta 2021-12-17

### HuaweiCloud SDK OCR

- _新增特性_
  - 支持以下接口：
    - `RecognizeThailandIdcard`
    - `RecognizeMyanmarIdcard`
    - `RecognizeMyanmarDriverLicense`
    - `RecognizeChileIdCard`
    - `RecognizeThailandLicensePlate`
- _解决问题_
  - 无
- _特性变更_
  - 无

# 3.0.19-beta 2021-12-10

### HuaweiCloud SDK FRS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - 接口`DetectFaceByFile`移除响应参数 `landmark`、`gender`、`yaw_angle`、`roll_angle`、`pitch_angle`、`headpose`、`smile`、`skin`、`ethnic`
  - 接口`DetectFaceByUrl`移除响应参数 `landmark`、`gender`、`yaw_angle`、`roll_angle`、`pitch_angle`、`headpose`、`smile`、`skin`、`ethnic`
  - 接口`DetectFaceByBase64`移除响应参数 `landmark`、`gender`、`yaw_angle`、`roll_angle`、`pitch_angle`、`headpose`、`smile`、`skin`、`ethnic`

# 3.0.18-beta 2021-11-29

### HuaweiCloud SDK EVS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - 移除接口`CinderExportToImage`

### HuaweiCloud SDK ECS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - 接口`NovaShowServer`和`NovaListServersDetails`新增响应参数`os:scheduler_hints`

# 3.0.17-beta 2021-11-25

### HuaweiCloud SDK Core

- _新增特性_
  - 支持region管理，用户新建客户端时可以通过Region传入或者{Service}Region的valueOf来获取region信息，无需自己配置endpoint。配置Region后，支持自动回填ProjectId/DomainId。
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK EIP

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - 接口`CreatePrePaidPublicip`、`CreatePublicip`新增请求和响应参数`alias`
  - 接口`ShowPublicip`、`UpdatePublicip`新增响应参数`alias`

### HuaweiCloud SDK OCR

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - 接口`RecognizeHandwriting`移除响应参数`extracted_data`

### HuaweiCloud SDK SIS

- _新增特性_
  - 支持语音交互服务
- _解决问题_
  - 无
- _特性变更_
  - 无

# 3.0.16-beta 2021-11-12

### HuaweiCloud SDK IMS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - 接口`ShowJob`新增响应参数`results`

### HuaweiCloud SDK OCR

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - 接口`RecognizeGeneralTable`新增响应参数`confidence`

### HuaweiCloud SDK VPC

- _新增特性_
  - 支持接口（V3）: `AddVpcExtendCidr`、`RemoveVpcExtendCidr`、`ListVpcs`、`ShowVpc`
- _解决问题_
  - 无
- _特性变更_
  - 无

# 3.0.15-beta 2021-10-25

### HuaweiCloud SDK EIP

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - 接口`CreateSharedBandwidth`新增请求参数`bandwidth_type`

### HuaweiCloud SDK FRS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - 接口`AddFacesByFile`、`AddFacesByBase64`、`AddFacesByUrl`新增请求参数`single`

### HuaweiCloud SDK IMS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - 接口`ShowJob`新增响应参数`current_task`、`image_name`、`process_percent`

### HuaweiCloud SDK OCR

- _新增特性_
  - 新增接口`RecognizeInsurancePolicy`、`RecognizeFinancialStatement`、`RecognizeQualificationCertificate`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK SDRS

- _新增特性_
  - 支持存储容灾服务
- _解决问题_
  - 无
- _特性变更_
  - 无

# 3.0.14-beta 2021-10-19

### HuaweiCloud SDK EIP

- _新增特性_
  - 支持以下接口：
    - `ListCommonPools`
    - `ListPublicBorderGroups`
    - `ListPublicipPool`
    - `ShowPublicipPool`
    - `ListShareBandwidthTypes`
- _解决问题_
  - 无
- _特性变更_
  - 接口`ListPublicips`新增请求参数`allow_share_bandwidth_type_any`
  - 接口`NeutronListFloatingIps`的请求参数`limit`的类型调整： `string` -> `integer`
  - 接口`NeutronUpdateFloatingIp`请求体的名称调整： `floatingip` -> `NeutronUpdateFloatingIpRequestBody`
  - 接口`ShowPublicip`新增响应参数`allow_share_bandwidth_types`

# 3.0.13-beta 2021-10-11

### HuaweiCloud SDK ECS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - 接口`DisassociateServerVirtualIp`的请求参数`reverse_binding`改为非必填

### HuaweiCloud SDK FRS

- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - 接口`DetectFaceByFile`、`DetectFaceByBase64`、`DetectFaceByUrl`的请求参数`attributes`可选值调整为`2,4,6,7,8,11,12,13,21`

# 3.0.12-beta 2021-09-29

### HuaweiCloud SDK ECS

- _新增特性_
  - 支持以下接口:
    - `ListServerTags`
    - `BatchAttachSharableVolumes`
    - `ShowServerAutoRecovery`
    - `BatchResetServersPassword`
    - `ReinstallServerWithoutCloudInit`
    - `ChangeServerOsWithoutCloudInit`
    - `BatchUpdateServersName`
    - `ShowServerPassword`
    - `AssociateServerVirtualIp`
    - `MigrateServer`
    - `ShowServerBlockDevice`
    - `DisassociateServerVirtualIp`
- _解决问题_
  - 无
- _特性变更_
  - 无

# 3.0.11-beta 2021-09-24

### HuaweiCloud SDK IVS

- _新增特性_
  - 支持人证核身服务
- _解决问题_
  - 无
- _特性变更_
  - 无

# 3.0.10-beta 2021-09-16

### HuaweiCloud SDK IMS
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - 接口`CreateDataImage`新增非必填的请求参数`__support_amd`
  - 接口`ListImages`新增响应参数`__support_amd`

### HuaweiCloud SDK OCR
- _新增特性_
  - 支持接口`RecognizeInvoiceVerification`
- _解决问题_
  - 无
- _特性变更_
  - 无

# 3.0.9-beta 2021-09-10

## HuaweiCloud SDK EVS
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - 接口`CreateVolume`的请求参数`size`改为必填

### HuaweiCloud SDK FRS

- _新增特性_
  - 支持人脸识别服务
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK OCR

- _新增特性_
    - 支持文字识别服务
- _解决问题_
    - 无
- _特性变更_
    - 无

### HuaweiCloud SDK VOD

- _新增特性_
    - 支持视频点播服务
- _解决问题_
    - 无
- _特性变更_
    - 无

# 3.0.8-beta 2021-03-19

### HuaweiCloud SDK ECS

- _新增特性_
    - 无
- _解决问题_
    - 解决 ListFlavors 接口响应体反序列化出错的问题
- _特性变更_
    - 无

# 3.0.7-beta 2021-03-15

### HuaweiCloud SDK ECS

- _新增特性_
    - 新增支持接口：查询云服务器组详情 `ShowServerGroup`
- _解决问题_
    - 无
- _特性变更_
    - 云服务器获取密码接口名调整：`ShowWindowsServerPasswordResponseBody` → `ShowServerPasswordResponseBody`
    - 云服务器清除密码接口名调整：`DeleteWindowsServerPassword` → `DeleteServerPassword`

### HuaweiCloud SDK IAM

- _新增特性_
    - 新增支持接口：
        - 查询身份提供商详情 `KeystoneShowIdentityProvider`
        - 注册身份提供商 `KeystoneCreateIdentityProvider`
        - 更新身份提供商 `KeystoneUpdateIdentityProvider`
        - 删除身份提供商 `KeystoneDeleteIdentityProvider`
        - 获取联邦认证token(OpenId Connect Id token方式) `CreateTokenWithIdToken`
- _解决问题_
    - 无
- _特性变更_
    - 下线接口：获取联邦认证unscoped token `CreateUnscopeTokenByIdpInitiated`

### HuaweiCloud SDK IMS

- _新增特性_
    - 新增支持接口：
        - 按标签查询镜像 `ListImageByTags`
        - 查询租户所有镜像标签 `ListImagesTags`
        - 查询镜像标签 `ListImageTags`
        - 添加镜像标签 `AddImageTag`
        - 删除镜像标签 `DeleteImageTag`
- _解决问题_
    - 无
- _特性变更_
    - 无

# 3.0.6-beta 2021-02-27

### HuaweiCloud SDK Core

- _新增特性_
    - 无
- _解决问题_
    - 无
- _特性变更_
    - 优化 README 文档描述及 CHANGELOG 日志格式

# 3.0.5-beta 2021-02-07

### HuaweiCloud SDK IMS

- _新增特性_
    - 无
- _解决问题_
    - 无
- _特性变更_
    - 查询镜像支持的OS列表(ListOsVersions)接口返回体属性 `os_bit` 数据类型调整：string → int32

# 3.0.4-beta 2021-01-30

### HuaweiCloud SDK ECS

- _新增特性_
    - 无
- _解决问题_
    - 无
- _特性变更_
    - 接口名称调整: UpdateAutoTerminateTimeServer → UpdateServerAutoTerminateTime

### HuaweiCloud SDK EVS

- _新增特性_
    - 无
- _解决问题_
    - 无
- _特性变更_
    - 创建云硬盘接口支持指定专属存储池ID
    - 查询配额相关接口属性 `allocated` 类型调整: string → int

# 3.0.3-beta 2021-01-25

### HuaweiCloud SDK Core

- _新增特性_
    - 无
- _解决问题_
    - 支持创建默认Config
- _特性变更_
    - 设置默认ConnectionTimeout为60秒
    - 设置默认ReadTimeout为120秒

### HuaweiCloud SDK ECS

- _新增特性_
    - 新增支持接口：修改云服务器云主机销毁时间
- _解决问题_
    - 无
- _特性变更_
    - 无

# 3.0.2-beta 2021-01-15

### HuaweiCloud SDK Core

- _新增特性_
    - 支持多版本
- _解决问题_
    - 无
- _特性变更_
    - 无

# 3.0.1-beta 2020-12-31

### 首次发布

- _已支持服务_
    - 弹性云服务器（ECS）
    - 弹性公网IP服务（EIP）
    - 虚拟私有云服务（VPC）
