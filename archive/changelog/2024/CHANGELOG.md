# 3.1.117 2024-12-26

### HuaweiCloud SDK CBR

- _API Version_
  - V1
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListVault**
    - changes of response param
      - `+ vaults.billing.object_type: enum value [turbo]`
      - `+ vaults.billing.spec_code: enum value [vault.backup.turbo.normal,vault.backup.database.normal,vault.hybrid.server.normal,vault.replication.server.normal]`
  - **CreateVault**
    - changes of response param
      - `+ vault.billing.object_type: enum value [turbo]`
      - `+ vault.billing.spec_code: enum value [vault.backup.turbo.normal,vault.backup.database.normal,vault.hybrid.server.normal,vault.replication.server.normal]`
  - **ShowVault**
    - changes of response param
      - `+ vault.billing.object_type: enum value [turbo]`
      - `+ vault.billing.spec_code: enum value [vault.backup.turbo.normal,vault.backup.database.normal,vault.hybrid.server.normal,vault.replication.server.normal]`
  - **UpdateVault**
    - changes of response param
      - `+ vault.billing.object_type: enum value [turbo]`
      - `+ vault.billing.spec_code: enum value [vault.backup.turbo.normal,vault.backup.database.normal,vault.hybrid.server.normal,vault.replication.server.normal]`
  - **ListExternalVault**
    - changes of response param
      - `+ vaults.billing.object_type: enum value [turbo]`
      - `+ vaults.billing.spec_code: enum value [vault.backup.turbo.normal,vault.backup.database.normal,vault.hybrid.server.normal,vault.replication.server.normal]`
  - **ListProtectable**
    - changes of response param
      - `+ instances.protectable.vault.billing.object_type: enum value [turbo]`
      - `+ instances.protectable.vault.billing.spec_code: enum value [vault.backup.turbo.normal,vault.backup.database.normal,vault.hybrid.server.normal,vault.replication.server.normal]`
  - **ShowProtectable**
    - changes of response param
      - `+ instance.protectable.vault.billing.object_type: enum value [turbo]`
      - `+ instance.protectable.vault.billing.spec_code: enum value [vault.backup.turbo.normal,vault.backup.database.normal,vault.hybrid.server.normal,vault.replication.server.normal]`
  - **ShowVaultResourceInstances**
    - changes of request param
      - `+ object_type: enum value [turbo,workspace,vmware,rds,file]`
    - changes of response param
      - `+ resources.resource_detail.vault.billing.object_type: enum value [turbo]`
      - `+ resources.resource_detail.vault.billing.spec_code: enum value [vault.backup.turbo.normal,vault.backup.database.normal,vault.hybrid.server.normal,vault.replication.server.normal]`

### HuaweiCloud SDK CFW

- _API Version_
  - V1
- _Features_
  - Support the following APIs:
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
  - **AllowDbRolePrivileges**
    - changes of request param
      - `+ user.name`
      - `+ user.schema`
      - `+ user.readonly`
      - `+ user.default_privilege_grantee`
      - `* user: object -> object<GaussDBforOpenGaussRoleAttributes>`
  - **ListDatabaseRoles**
    - changes of response param
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

- _API Version_
  - V2
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **CreateImage**
    - changes of request param
      - `+ hw_firmware_type`
  - **ImportImageQuick**
    - changes of request param
      - `+ hw_firmware_type`

### HuaweiCloud SDK LTS

- _API Version_
  - V2
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListLogStreams**
    - changes of request param
      - `- offset`
      - `- limit`
  - **CreateLogGroup**
    - changes of request param
      - `+ log_group_name_alias`
  - **UpdateLogStream**
    - changes of request param
      - `- ttl_in_days: enum value [7]`
  - **UpdateTransfer**
    - changes of request param
      - `+ log_transfer_info.log_transfer_detail.lts_tags`
      - `+ log_transfer_info.log_transfer_detail.stream_tags`
      - `+ log_transfer_info.log_transfer_detail.struct_fields`
      - `+ log_transfer_info.log_transfer_detail.invalid_field_value`
    - changes of response param
      - `+ log_transfer_info.log_transfer_detail.lts_tags`
      - `+ log_transfer_info.log_transfer_detail.stream_tags`
      - `+ log_transfer_info.log_transfer_detail.struct_fields`
      - `+ log_transfer_info.log_transfer_detail.invalid_field_value`
  - **CreateTransfer**
    - changes of request param
      - `+ log_transfer_info.log_transfer_detail.lts_tags`
      - `+ log_transfer_info.log_transfer_detail.stream_tags`
      - `+ log_transfer_info.log_transfer_detail.struct_fields`
      - `+ log_transfer_info.log_transfer_detail.invalid_field_value`
    - changes of response param
      - `+ log_transfer_info.log_transfer_detail.lts_tags`
      - `+ log_transfer_info.log_transfer_detail.stream_tags`
      - `+ log_transfer_info.log_transfer_detail.struct_fields`
      - `+ log_transfer_info.log_transfer_detail.invalid_field_value`
  - **DeleteTransfer**
    - changes of response param
      - `+ log_transfer_info.log_transfer_detail.lts_tags`
      - `+ log_transfer_info.log_transfer_detail.stream_tags`
      - `+ log_transfer_info.log_transfer_detail.struct_fields`
      - `+ log_transfer_info.log_transfer_detail.invalid_field_value`
  - **ListTransfers**
    - changes of response param
      - `+ log_transfers.log_transfer_info.log_transfer_detail.lts_tags`
      - `+ log_transfers.log_transfer_info.log_transfer_detail.stream_tags`
      - `+ log_transfers.log_transfer_info.log_transfer_detail.struct_fields`
      - `+ log_transfers.log_transfer_info.log_transfer_detail.invalid_field_value`
  - **UpdateAccessConfig**
    - changes of request param
      - `+ access_config_name`

### HuaweiCloud SDK RDS

- _API Version_
  - V3
- _Features_
  - Support the API `ListDrInfos`
- _Bug Fix_
  - None
- _Change_
  - **ListUpdateBackupEnhancePolicy**
    - changes of response param
      - `* policies.retention_days: string -> int32`

# 3.1.116 2024-12-19

### HuaweiCloud SDK AAD

- _API Version_
  - V2
- _Features_
  - Support the APIs `AddWafWhiteIpRule`, `DeleteWafWhiteIpRule`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK EVS

- _API Version_
  - V2
- _Features_
  - Support the API `UnsubscribePostpaidVolume`
- _Bug Fix_
  - None
- _Change_
  - **CinderListQuotas**
    - changes of response param
      - `+ quota_set.gigabytes_ESSD`
      - `+ quota_set.snapshots_ESSD`
      - `+ quota_set.volumes_ESSD`

### HuaweiCloud SDK GaussDBforopenGauss

- _API Version_
  - V3
- _Features_
  - Support the following APIs:
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
- _Bug Fix_
  - None
- _Change_
  - **ShowUpgradeCandidateVersions**
    - changes of response param
      - `* hotfix_upgrade_infos: object<HotfixUpgradeInfos> -> list<HotfixUpgradeInfos>`
      - `* hotfix_rollback_infos: object<HotfixRollbackInfos> -> list<HotfixRollbackInfos>`

### HuaweiCloud SDK IMS

- _API Version_
  - V2
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ImportImageQuick**
    - changes of request param
      - `+ license_type`

### HuaweiCloud SDK OCR

- _API Version_
  - V1
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **RecognizeAutoClassification**
    - changes of request param
      - `+ pdf_page_number`
  - **RecognizeSmartDocumentRecognizer**
    - changes of request param
      - `+ erase_seal`

### HuaweiCloud SDK RDS

- _API Version_
  - V3
- _Features_
  - Support the API `ListUpdateBackupEnhancePolicy`
- _Bug Fix_
  - None
- _Change_
  - None

# 3.1.115 2024-12-12

### HuaweiCloud SDK CDN

- _API Version_
  - V2
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ShowDomainFullConfig**
    - changes of response param
      - `+ configs.cache_rules.force_cache`
  - **UpdateDomainFullConfig**
    - changes of request param
      - `+ configs.cache_rules.force_cache`

### HuaweiCloud SDK CSMS

- _API Version_
  - V1
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListUsers**
    - changes of request param
      - `+ user_info`
      - `- user_name`

### HuaweiCloud SDK DDS

- _API Version_
  - V3
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ResizeInstance**
    - changes of request param
      - `+ resize.target_ids`

### HuaweiCloud SDK GaussDB

- _API Version_
  - V3
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **CreateStarrocksInstance**
    - changes of request param
      - `+ pay_info`
      - `+ region_code`

### HuaweiCloud SDK LTS

- _API Version_
  - V2
- _Features_
  - Support the API `ListLogContext`
- _Bug Fix_
  - None
- _Change_
  - **CreateLogStreamIndex**
    - changes of request param
      - `+ fields.ltsSubFieldsInfoList`
      - `+ fields.fieldType: enum value [json]`
  - **ListAccessConfig**
    - changes of response param
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
    - changes of request param
      - `+ access_config_detail.system_fields`
      - `+ access_config_detail.custom_key_value`
      - `+ access_config_detail.includeLabelsLogical`
      - `+ access_config_detail.excludeLabelsLogical`
      - `+ access_config_detail.includeK8sLabelsLogical`
      - `+ access_config_detail.excludeK8sLabelsLogical`
      - `+ access_config_detail.includeEnvsLogical`
      - `+ access_config_detail.excludeEnvsLogical`
    - changes of response param
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
    - changes of request param
      - `+ access_config_detail.repeat_collect`
      - `+ access_config_detail.system_fields`
      - `+ access_config_detail.custom_key_value`
      - `+ access_config_detail.includeLabelsLogical`
      - `+ access_config_detail.excludeLabelsLogical`
      - `+ access_config_detail.includeK8sLabelsLogical`
      - `+ access_config_detail.excludeK8sLabelsLogical`
      - `+ access_config_detail.includeEnvsLogical`
      - `+ access_config_detail.excludeEnvsLogical`
    - changes of response param
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
    - changes of response param
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

- _API Version_
  - V1
- _Features_
  - Support the following APIs:
    - `ListUsers`
    - `ListGrants`
    - `UpdateGrant`
    - `CreateGrants`
    - `DeleteGrant`
    - `GenerateRandomPassword`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK DBSS

- _API Version_
  - V1
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListRdsDatabases**
    - changes of request param
      - `+ db_type: enum value [ORACLE,DAMENG,KINGBASE]`
  - **SwitchAuditDatabase**
    - changes of response param
      - `+ status`
      - `- result`

### HuaweiCloud SDK IMS

- _API Version_
  - V2
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListImages**
    - changes of response param
      - `+ images.__support_kvm_hi1822_hisriov`
      - `+ images.__support_kvm_hi1822_hivirtionet`
  - **UpdateImage**
    - changes of response param
      - `+ __support_kvm_hi1822_hisriov`
      - `+ __support_kvm_hi1822_hivirtionet`

# 3.1.113 2024-12-05

### HuaweiCloud SDK CTS

- _API Version_
  - V3
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListTraces**
    - changes of response param
      - `+ traces.read_only`
      - `+ traces.operation_id`

### HuaweiCloud SDK DDS

- _API Version_
  - V3
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ShowInstanceConfigurationModifyHistory**
    - changes of request param
      - `+ entity_id`

### HuaweiCloud SDK DRS

- _API Version_
  - V5
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListAsyncJobDetail**
    - changes of response param
      - `+ jobs.compare_result.data_compare_task_list.dynamic_compare_delay`
  - **ShowJobDetail**
    - changes of response param
      - `+ job.compare_result.data_compare_task_list.dynamic_compare_delay`

### HuaweiCloud SDK GaussDBforNoSQL

- _API Version_
  - V3
- _Features_
  - Support the following APIs:
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
- _Bug Fix_
  - None
- _Change_
  - None

# 3.1.112 2024-11-28

### HuaweiCloud SDK CBR

- _API Version_
  - V1
- _Features_
  - Support the API `ChangeOrder`
- _Bug Fix_
  - None
- _Change_
  - **AddAgentPath**
    - changes of request param
      - `+ exclude_path`
  - **AddMember**
    - changes of request param
      - `+ domains`
  - **ShowAgent**
    - changes of response param
      - `+ agent.paths.exclude_paths`
  - **UpdateAgent**
    - changes of response param
      - `+ agent.paths.exclude_paths`
  - **ListAgent**
    - changes of response param
      - `+ agents.paths.exclude_paths`
  - **RegisterAgent**
    - changes of response param
      - `+ agent.paths.exclude_paths`
  - **ShowBackup**
    - changes of response param
      - `+ backup.version`
      - `- backup.image_type: enum value [backup,replication]`
      - `- backup.resource_type: enum value [OS::Nova::Server,OS::Cinder::Volume,OS::Workspace::DesktopV2]`
  - **UpdateBackup**
    - changes of response param
      - `+ backup.version`
      - `- backup.image_type: enum value [backup,replication]`
      - `- backup.resource_type: enum value [OS::Nova::Server,OS::Cinder::Volume,OS::Workspace::DesktopV2]`
  - **ListBackups**
    - changes of response param
      - `+ backups.version`
      - `- backups.image_type: enum value [backup,replication]`
      - `- backups.resource_type: enum value [OS::Nova::Server,OS::Cinder::Volume,OS::Workspace::DesktopV2]`
  - **ListOrganizationPolicies**
    - changes of request param
      - `+ limit`
      - `+ offset`
  - **ListProtectable**
    - changes of request param
      - `+ protectable_type: enum value [turbo,workspace,workspace_v2]`

### HuaweiCloud SDK CSMS

- _API Version_
  - V1
- _Features_
  - Support the APIs `ListSecretTask`, `ShowAgency`, `CreateAgency`, `ShowSecretFunctionTemplates`
- _Bug Fix_
  - None
- _Change_
  - **RotateSecret**
    - changes of response param
      - `+ rotation_task_id`
  - **ListSecrets**
    - changes of response param
      - `+ secrets.rotation_func_urn`
      - `+ secrets.secret_type: enum value [COMMON,RDS-FG,GaussDB-FG]`
  - **CreateSecret**
    - changes of request param
      - `+ rotation_func_urn`
      - `+ secret_type: enum value [COMMON,RDS-FG,GaussDB-FG]`
    - changes of response param
      - `+ secret.rotation_func_urn`
      - `+ secret.secret_type: enum value [COMMON,RDS-FG,GaussDB-FG]`
  - **ShowSecret**
    - changes of response param
      - `+ secret.rotation_func_urn`
      - `+ secret.secret_type: enum value [COMMON,RDS-FG,GaussDB-FG]`
  - **UpdateSecret**
    - changes of request param
      - `+ rotation_func_urn`
    - changes of response param
      - `+ secret.rotation_func_urn`
      - `+ secret.secret_type: enum value [COMMON,RDS-FG,GaussDB-FG]`
  - **UploadSecretBlob**
    - changes of response param
      - `+ secret.rotation_func_urn`
      - `+ secret.secret_type: enum value [COMMON,RDS-FG,GaussDB-FG]`
  - **DeleteSecretForSchedule**
    - changes of response param
      - `+ secret.rotation_func_urn`
      - `+ secret.secret_type: enum value [COMMON,RDS-FG,GaussDB-FG]`
  - **RestoreSecret**
    - changes of response param
      - `+ secret.rotation_func_urn`
      - `+ secret.secret_type: enum value [COMMON,RDS-FG,GaussDB-FG]`
  - **ListNotificationRecords**
    - changes of request param
      - `- limit`
      - `- marker`
    - changes of response param
      - `+ records.trigger_event_type: enum value [SECRET_VERSION_CREATED,SECRET_VERSION_EXPIRED,SECRET_ROTATED,SECRET_DELETED,SECRET_ROTATED_FAILED]`
      - `+ records.secret_type: enum value [COMMON,RDS-FG,GaussDB-FG]`
      - `+ records.notification_status: enum value [SUCCESS,FAIL,INVALID]`
  - **ListResourceInstances**
    - changes of response param
      - `+ resources.resource_detail.rotation_func_urn`
      - `+ resources.resource_detail.secret_type: enum value [COMMON,RDS-FG,GaussDB-FG]`
  - **ListSecretEvents**
    - changes of response param
      - `+ events.event_types: enum value [SECRET_ROTATED_FAILED]`
  - **CreateSecretEvent**
    - changes of request param
      - `+ event_types: enum value [SECRET_VERSION_CREATED,SECRET_VERSION_EXPIRED,SECRET_ROTATED,SECRET_DELETED,SECRET_ROTATED_FAILED]`
    - changes of response param
      - `+ event.event_types: enum value [SECRET_ROTATED_FAILED]`
  - **ShowSecretEvent**
    - changes of response param
      - `+ event.event_types: enum value [SECRET_ROTATED_FAILED]`
  - **UpdateSecretEvent**
    - changes of request param
      - `+ event_types: enum value [SECRET_VERSION_CREATED,SECRET_VERSION_EXPIRED,SECRET_ROTATED,SECRET_DELETED,SECRET_ROTATED_FAILED]`
    - changes of response param
      - `+ event.event_types: enum value [SECRET_ROTATED_FAILED]`

### HuaweiCloud SDK GaussDB

- _API Version_
  - V3
- _Features_
  - Support the APIs `ShowSlowLogStatistics`, `DownloadSlowLogFile`, `ShowMultiTenant`, `UpdateMultiTenant`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK GaussDBforNoSQL

- _API Version_
  - V3
- _Features_
  - Support the following APIs:
    - `ShowRedisPitrPolicy`
    - `SetRedisPitrPolicy`
    - `ListRedisPitrRestoreTime`
    - `ShowRedisPitrInfo`
    - `RestoreRedisPitr`
    - `StopBackup`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK KMS

- _API Version_
  - V2
- _Features_
  - Support the APIs `AssociateAlias`, `ListAliases`, `CreateAlias`, `DeleteAlias`
- _Bug Fix_
  - None
- _Change_
  - **ListSupportRegions**
    - changes of request param
      - `+ limit`
      - `+ offset`

### HuaweiCloud SDK Live

- _API Version_
  - V2
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListSingleStreamDetail**
    - changes of response param
      - `- audio_framerate`

### HuaweiCloud SDK OCR

- _API Version_
  - V1
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **RecognizeGeneralText**
    - changes of request param
      - `+ pdf_page_number`

### HuaweiCloud SDK RDS

- _API Version_
  - V3
- _Features_
  - Support the APIs `CopyDatabase`, `DeleteMsdtcLocalHost`
- _Bug Fix_
  - None
- _Change_
  - **ListFlavorsResize**
    - changes of response param
      - `* flavor_groups.compute_flavors: object<ComputeFlavor> -> list<ComputeFlavor>`

### HuaweiCloud SDK VOD

- _API Version_
  - V1
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListTopStatistics**
    - changes of response param
      - `+ top_urls.duration_ms`
  - **ListAssetList**
    - changes of response param
      - `+ assets.duration_ms`
  - **ModifySubtitle**
    - changes of request param
      - `+ repackage_mode`
      - `+ delete_mode`
  - **ShowTakeOverAssetDetails**
    - changes of response param
      - `+ base_info.meta_data.duration_ms`
  - **PublishAssets**
    - changes of response param
      - `+ asset_info_array.base_info.meta_data.duration_ms`
  - **UnpublishAssets**
    - changes of response param
      - `+ asset_info_array.base_info.meta_data.duration_ms`
  - **ShowAssetMeta**
    - changes of response param
      - `+ asset_info_array.base_info.meta_data.duration_ms`
  - **ShowAssetDetail**
    - changes of response param
      - `+ base_info.meta_data.duration_ms`
  - **ShowTakeOverTaskDetails**
    - changes of response param
      - `+ assets.base_info.meta_data.duration_ms`

# 3.1.111 2024-11-21

### HuaweiCloud SDK DDS

- _API Version_
  - V3
- _Features_
  - Support the following APIs:
    - `ValidateConfigurationName`
    - `ShowInstanceConfigurationModifyHistory`
    - `SetAutoEnlargePolicies`
    - `BatchDeleteBackup`
    - `ShowAutoEnlargePolicy`
    - `ListScheduledTasks`
    - `CancelScheduledTask`
    - `BatchUpgradeDatabaseVersion`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK EVS

- _API Version_
  - V2
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - Remove the APIs `ChangeVolumeChargeMode`, `UnsubscribePostpaidVolume`
  - **RetypeVolume**
    - changes of request param
      - `+ os-retype.iops`
      - `+ os-retype.throughput`

### HuaweiCloud SDK GaussDBforNoSQL

- _API Version_
  - V3
- _Features_
  - Support the following APIs:
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
  - **CreateLimitTask**
    - changes of response param
      - `+ job_id`
      - `- jobId`
      - `* key_words: list<string> -> string`
  - **UpdateLimitTask**
    - changes of response param
      - `+ job_id`
      - `- jobId`

# 3.1.110 2024-11-14

### HuaweiCloud SDK DDS

- _API Version_
  - V3
- _Features_
  - Support the following APIs:
    - `ValidateConfigurationName`
    - `ShowInstanceConfigurationModifyHistory`
    - `SetAutoEnlargePolicies`
    - `BatchDeleteBackup`
    - `ShowAutoEnlargePolicy`
    - `ListScheduledTasks`
    - `CancelScheduledTask`
    - `BatchUpgradeDatabaseVersion`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK EVS

- _API Version_
  - V2
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - Remove the APIs `ChangeVolumeChargeMode`, `UnsubscribePostpaidVolume`
  - **RetypeVolume**
    - changes of request param
      - `+ os-retype.iops`
      - `+ os-retype.throughput`

### HuaweiCloud SDK GaussDBforNoSQL

- _API Version_
  - V3
- _Features_
  - Support the following APIs:
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
  - **CreateLimitTask**
    - changes of response param
      - `+ job_id`
      - `- jobId`
      - `* key_words: list<string> -> string`
  - **UpdateLimitTask**
    - changes of response param
      - `+ job_id`
      - `- jobId`

# 3.1.109 2024-11-07

### HuaweiCloud SDK AAD

- _API Version_
  - V2
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **UpgradeInstanceSpec**
    - changes of request param
      - `+ upgrade_data.elastic_service_bandwidth_type`
      - `+ upgrade_data.elastic_service_bandwidth`

### HuaweiCloud SDK GaussDBforNoSQL

- _API Version_
  - V3
- _Features_
  - Support the API `BatchUpgradeDatabaseVersion`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK KVS

- _API Version_
  - V1
- _Features_
  - Support the API `CheckHealth`
- _Bug Fix_
  - None
- _Change_
  - **CreateTable**
    - changes of request param
      - `+ ttl_options`
  - **DescribeTable**
    - changes of response param
      - `+ ttl_options`

### HuaweiCloud SDK MPC

- _API Version_
  - V1
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **CreateExtractTask**
    - changes of request param
      - `+ encryption`
  - **CreateTranscodingTask**
    - changes of request param
      - `+ av_parameters.video.crf`
      - `+ av_parameters.video.max_bitrate`
  - **ListTranscodingTask**
    - changes of response param
      - `+ task_array.av_parameters.video.crf`
      - `+ task_array.av_parameters.video.max_bitrate`
  - **CreateEditingJob**
    - changes of request param
      - `+ concats.av_parameters.video.crf`
      - `+ concats.av_parameters.video.max_bitrate`
  - **ListEditingJob**
    - changes of response param
      - `+ jobs.edit_task_req.concats.av_parameters.video.crf`
      - `+ jobs.edit_task_req.concats.av_parameters.video.max_bitrate`

# 3.1.108 2024-10-31

### HuaweiCloud SDK CFW

- _API Version_
  - V1
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ChangeEastWestFirewallStatus**
    - changes of response param
      - `- trace_id`
      - `* data: object -> object<ChangeEastWestFirewallStatusResponseData>`
  - **AddServiceSet**
    - changes of response param
      - `+ data.name`
      - `* data: object -> object<ServiceSetId>`
  - **ListJob**
    - changes of response param
      - `- error_msg`
      - `- error_code`
      - `* data: object -> object<GetCreateFirewallJobResponseData>`
  - **ListAddressSets**
    - changes of request param
      - `+ address_type: enum value [0,1]`
  - **BatchUpdateAclRuleActions**
    - changes of request param
      - `+ fw_instance_id`
  - **ListDnsServers**
    - changes of request param
      - `* fw_instance_id: required -> optional`
  - **ChangeIpsSwitchStatus**
    - changes of request param
      - `- X-Language`
      - `- ips_type: enum value [1]`
  - **UpdateAclRuleOrder**
    - changes of response param
      - `- data.name`
      - `* data: object<RuleId> -> object<OrderRuleId>`
  - **AddBlackWhiteList**
    - changes of response param
      - `* data: object<IdObject> -> object<BlackWhiteListId>`
  - **UpdateBlackWhiteList**
    - changes of response param
      - `* data: object<IdObject> -> object<BlackWhiteListId>`
  - **DeleteBlackWhiteList**
    - changes of response param
      - `* data: object<IdObject> -> object<BlackWhiteListId>`
  - **UpdateServiceSet**
    - changes of response param
      - `+ data.name`
      - `* data: object -> object<ServiceSetId>`
  - **DeleteServiceSet**
    - changes of response param
      - `* data: object<IdObject> -> object<ServiceSetId>`
  - **DeleteServiceItem**
    - changes of response param
      - `* data: object<IdObject> -> object<DeleteServiceItemResponseBodyData>`
  - **ListEipCount**
    - changes of response param
      - `- data.object_id`
  - **ChangeEipStatus**
    - changes of response param
      - `+ data.fail_eip_list`
  - **DeleteAddressItem**
    - changes of response param
      - `* data: object<IdObject> -> object<AddressItemId>`
  - **AddAddressSet**
    - changes of request param
      - `- address_type: enum value [0,1]`
    - changes of response param
      - `* data: object<IdObject> -> object<AddressSetId>`
  - **ListAddressSetDetail**
    - changes of response param
      - `- data.address_type: enum value [0,1]`
  - **UpdateAddressSet**
    - changes of response param
      - `+ data.name`
  - **DeleteAddressSet**
    - changes of response param
      - `* data: object<IdObject> -> object<AddressSetId>`
  - **AddDomainSet**
    - changes of request param
      - `* fw_instance_id: optional -> required`
  - **DeleteDomains**
    - changes of request param
      - `+ fw_instance_id`
  - **ListCaptureTask**
    - changes of request param
      - `* fw_instance_id: optional -> required`
    - changes of response param
      - `* data: list<HttpQueryCaptureTaskResponseData> -> object<HttpQueryCaptureTaskResponseData>`
  - **CreateCaptureTask**
    - changes of response param
      - `* data: object<IdObject> -> object<CaptureTaskId>`
  - **DeleteCaptureTask**
    - changes of response param
      - `* data: object<IdObject> -> object<CaptureTaskId>`
  - **CancelCaptureTask**
    - changes of response param
      - `* data: object<IdObject> -> object<CaptureTaskId>`
  - **ListEastWestFirewall**
    - changes of response param
      - `- data.er_associated_subnet`
      - `- data.ew_vpc_route_limit`
      - `- data.firewall_associated_subnets.status`
      - `- data.er.state`
      - `- data.er.enterprise_project_id`
      - `- data.er.enable_ipv6`
      - `- data.inspection_vpc.status`
  - **AddAclRule**
    - changes of request param
      - `- rules.applicationsJsonString`
  - **UpdateAclRule**
    - changes of request param
      - `- sequence`
      - `- applicationsJsonString`
  - **ListAclRules**
    - changes of request param
      - `+ address_type: enum value [2]`
  - **ListEips**
    - changes of request param
      - `+ status: enum value [null,0,1]`
      - `+ sync: enum value [0,1]`
    - changes of response param
      - `- data.records.owner`
  - **AddAddressItem**
    - changes of request param
      - `- address_items.name`
    - changes of response param
      - `- data.items.name`
      - `* data.items: list<IdObject> -> list<AddressItemIdWithoutName>`
  - **ListDomains**
    - changes of response param
      - `- data.records.dns_ips`
  - **ListFirewallDetail**
    - changes of request param
      - `+ service_type: enum value [0,1]`
    - changes of response param
      - `- data.records.status: enum value [-1,0,1,2,3,4,5,6,7,8,9,10,11]`
  - **ListDomainSets**
    - changes of response param
      - `- data.records.message`

### HuaweiCloud SDK DRS

- _API Version_
  - V5
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListAsyncJobDetail**
    - changes of response param
      - `- jobs.compare_result.data_compare_task_list.dynamic_compare_delay`
      - `* jobs.compare_result.data_compare_task_list.report_remain_seconds: string -> int64`
  - **ShowJobDetail**
    - changes of response param
      - `- job.compare_result.data_compare_task_list.dynamic_compare_delay`
      - `* job.compare_result.data_compare_task_list.report_remain_seconds: string -> int64`

### HuaweiCloud SDK GaussDBforopenGauss

- _API Version_
  - V3
- _Features_
  - Support the following APIs:
    - `UpdateMysqlCompatibility`
    - `StartMysqlCompatibility`
    - `StopInstance`
    - `ListLimitTask`
    - `CreateLimitTask`
    - `ShowLimitTask`
    - `UpdateLimitTask`
    - `DeleteLimitTask`
    - `ListNodeLimitSqlModel`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK KVS

- _API Version_
  - V1
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **UpdateKv**
    - changes of request param
      - `+ update_fields.insert`
  - **ScanKv**
    - changes of response param
      - `* returned_count: int32 -> int64`
  - **ScanSkeyKv**
    - changes of response param
      - `* returned_count: int32 -> int64`

### HuaweiCloud SDK LTS

- _API Version_
  - V2
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListLogStreams**
    - changes of response param
      - `+ log_streams.log_stream_name_alias`
      - `+ log_streams.whether_log_storage`
      - `+ log_streams.hot_cold_separation`
      - `+ log_streams.auth_web_tracking`
      - `+ log_streams.ttl_in_days`
      - `+ log_streams.hot_storage_days`
  - **ListLogStream**
    - changes of response param
      - `+ log_streams.log_stream_name_alias`
      - `+ log_streams.whether_log_storage`
      - `+ log_streams.hot_cold_separation`
      - `+ log_streams.auth_web_tracking`
      - `+ log_streams.ttl_in_days`
      - `+ log_streams.hot_storage_days`
  - **ListLogs**
    - changes of response param
      - `* analysisLogs: list<map<string, string>> -> list<object>`
  - **ShowNotificationTemplate**
    - changes of response param
      - `+ templates.topic`
  - **ListActiveOrHistoryAlarms**
    - changes of response param
      - `+ events.metadata.log_group_name`
      - `+ events.metadata.log_stream_name`
  - **DeleteActiveAlarms**
    - changes of request param
      - `+ events.metadata.log_group_name`
      - `+ events.metadata.log_stream_name`
  - **UpdateNotificationTemplate**
    - changes of request param
      - `+ templates.topic`
    - changes of response param
      - `+ templates.topic`
  - **CreateNotificationTemplate**
    - changes of request param
      - `+ templates.topic`
    - changes of response param
      - `+ templates.topic`
  - **ListNotificationTemplates**
    - changes of response param
      - `+ results.templates.topic`
  - **ListAccessConfig**
    - changes of response param
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
    - changes of request param
      - `+ incremental_collect`
      - `+ encoding_format`
      - `+ processor_type`
      - `+ demo_log`
      - `+ demo_fields`
      - `+ processors`
      - `+ application_id`
      - `+ environment_id`
      - `+ component_id`
    - changes of response param
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
    - changes of request param
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
    - changes of response param
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
    - changes of response param
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

- _API Version_
  - V1
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **RecognizeSmartDocumentRecognizer**
    - changes of request param
      - `+ language`

### HuaweiCloud SDK RDS

- _API Version_
  - V3
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListDbUsers**
    - changes of response param
      - `+ users.databases`
      - `+ users.hosts`
  - **ListSqlserverDbUsers**
    - changes of response param
      - `+ users.databases`
      - `+ users.hosts`

### HuaweiCloud SDK VOD

- _API Version_
  - V1
- _Features_
  - Support the APIs `ShowStorageModeType`, `UpdateStorageModeType`
- _Bug Fix_
  - None
- _Change_
  - None

# 3.1.107 2024-10-24

### HuaweiCloud SDK DRS

- _API Version_
  - V5
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListAsyncJobDetail**
    - changes of response param
      - `+ jobs.compare_result.data_compare_task_list.options`
      - `+ jobs.compare_result.data_compare_task_list.dynamic_compare_delay`
  - **ShowJobDetail**
    - changes of response param
      - `+ job.compare_result.data_compare_task_list.options`
      - `+ job.compare_result.data_compare_task_list.dynamic_compare_delay`

### HuaweiCloud SDK GaussDB

- _API Version_
  - V3
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **CheckTableConfig**
    - changes of request param
      - `+ target_database_name`
      - `+ is_create_task`

### HuaweiCloud SDK RAM

- _API Version_
  - V1
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **EnableOrganizationShare**
    - changes of request param
      - `+ X-Security-Token`
  - **DisableOrganizationShare**
    - changes of request param
      - `+ X-Security-Token`
  - **ShowOrganizationShare**
    - changes of request param
      - `+ X-Security-Token`
  - **AssociateResourceSharePermission**
    - changes of request param
      - `+ X-Security-Token`
  - **DisassociateResourceSharePermission**
    - changes of request param
      - `+ X-Security-Token`
  - **AcceptResourceShareInvitation**
    - changes of request param
      - `+ X-Security-Token`
  - **RejectResourceShareInvitation**
    - changes of request param
      - `+ X-Security-Token`
  - **SearchResourceShareInvitation**
    - changes of request param
      - `+ X-Security-Token`
  - **ListPermissions**
    - changes of request param
      - `+ X-Security-Token`
  - **ShowPermission**
    - changes of request param
      - `+ X-Security-Token`
  - **AssociateResourceShare**
    - changes of request param
      - `+ X-Security-Token`
  - **DisassociateResourceShare**
    - changes of request param
      - `+ X-Security-Token`
  - **SearchResourceShareAssociations**
    - changes of request param
      - `+ X-Security-Token`
  - **ListResourceShareTags**
    - changes of request param
      - `+ X-Security-Token`
  - **SearchResourceShareCountByTags**
    - changes of request param
      - `+ X-Security-Token`
  - **BatchCreateResourceShareTags**
    - changes of request param
      - `+ X-Security-Token`
  - **BatchDeleteResourceShareTags**
    - changes of request param
      - `+ X-Security-Token`
  - **ListResourceSharePermissions**
    - changes of request param
      - `+ X-Security-Token`
  - **SearchSharedResources**
    - changes of request param
      - `+ X-Security-Token`
  - **SearchSharedPrincipals**
    - changes of request param
      - `+ X-Security-Token`
  - **ListResourceTypes**
    - changes of request param
      - `+ X-Security-Token`
  - **ListPermissionVersions**
    - changes of request param
      - `+ X-Security-Token`
  - **CreateResourceShare**
    - changes of request param
      - `+ X-Security-Token`
  - **SearchResourceShares**
    - changes of request param
      - `+ X-Security-Token`
  - **DeleteResourceShare**
    - changes of request param
      - `+ X-Security-Token`
  - **UpdateResourceShare**
    - changes of request param
      - `+ X-Security-Token`
  - **ListResourceSharesByTags**
    - changes of request param
      - `+ X-Security-Token`
  - **ListQuota**
    - changes of request param
      - `+ X-Security-Token`

# 3.1.106 2024-10-17

### HuaweiCloud SDK CDN

- _API Version_
  - V2
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **CreateDomain**
    - changes of request param
      - `+ domain.sources.http_port`
      - `+ domain.sources.https_port`

### HuaweiCloud SDK DBSS

- _API Version_
  - V1
- _Features_
  - Support the following APIs:
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
- _Bug Fix_
  - None
- _Change_
  - **ShowAuditQuota**
    - changes of response param
      - `- quota`
  - **ListAuditRuleRisks**
    - changes of request param
      - `+ risk_levels: enum value [LOW,MEDIUM,HIGH,NO_RISK]`
    - changes of response param
      - `+ rules.rule_type`
  - **ListProjectResourceTags**
    - changes of request param
      - `+ resource_type: enum value [auditInstance]`
  - **BatchAddResourceTag**
    - changes of request param
      - `+ resource_type: enum value [auditInstance]`
      - `* tags: list<KeyValueBean> -> list<object>`
      - `* sys_tags: list<KeyValueBean> -> list<object>`
  - **BatchDeleteResourceTag**
    - changes of request param
      - `+ resource_type: enum value [auditInstance]`
      - `* tags: list<KeyValueBean> -> list<object>`
      - `* sys_tags: list<KeyValueBean> -> list<object>`
      - `* body: object<ResourceTagRequest> -> object<ResourceTagDeleteRequest>`
  - **UpdateAuditSecurityGroup**
    - changes of request param
      - `+ instance_id`
      - `- resource_id`
  - **SwitchAgent**
    - changes of request param
      - `+ status: enum value [0,1]`
  - **ListEcsSpecification**
    - changes of response param
      - `+ specification.az_type`
  - **ListAuditInstanceJobs**
    - changes of response param
      - `+ jobs.resource_id`
  - **ListAuditOperateLogs**
    - changes of request param
      - `+ action`
      - `- operate_name`
      - `+ result: enum value [success,fail]`
      - `+ time.time_range: enum value [HALF_HOUR, HOUR, THREE_HOUR, TWELVE_HOUR, DAY, WEEK, MONTH]`
  - **ListResourceInstanceByTag**
    - changes of request param
      - `+ resource_type: enum value [auditInstance]`
  - **CountResourceInstanceByTag**
    - changes of request param
      - `+ resource_type: enum value [auditInstance]`
  - **ListAuditDatabases**
    - changes of response param
      - `+ databases.database.rds_audit_switch_mismatch`
      - `+ databases.database.rds_id`
      - `+ databases.database.rds_obj_info`
      - `+ databases.database.dws_obj_info`
      - `+ databases.database.clouddb_obj_info`

### HuaweiCloud SDK ECS

- _API Version_
  - V2
- _Features_
  - Support the API `NovaShowFlavorExtraSpecs`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK KVS

- _API Version_
  - V1
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ScanSkeyKv**
    - changes of request param
      - `+ return_count_only`

# 3.1.105 2024-10-10

### HuaweiCloud SDK AAD

- _API Version_
  - V1
- _Features_
  - Support the APIs `AssociateIpToPolicyAndPackage`, `DisassociateIpFromPolicyAndPackage`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK DRS

- _API Version_
  - V3
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **BatchListJobDetails**
    - changes of response param
      - `* results.node_num: string -> int32`

### HuaweiCloud SDK DRS

- _API Version_
  - V5
- _Features_
  - Support the following APIs:
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
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK EVS

- _API Version_
  - V2
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ShowVolume**
    - changes of response param
      - `- volume.snapshot_policy_id`
  - **ListVolumes**
    - changes of request param
      - `- snapshot_policy_id`
    - changes of response param
      - `- volumes.snapshot_policy_id`

### HuaweiCloud SDK GaussDB

- _API Version_
  - V3
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **CreateStarrocksInstance**
    - changes of request param
      - `+ security_group_id`
  - **CheckStarrocksParams**
    - changes of response param
      - `+ differences`
      - `- check_starrocks_params_responce`

### HuaweiCloud SDK KVS

- _API Version_
  - V1
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **CreateTable**
    - changes of request param
      - `+ bill_mode`
      - `+ provisioned_throughput`
      - `+ global_secondary_index_schema.provisioned_throughput`
      - `- pre_split_key_options.hash_count`
    - changes of response param
      - `+ bill_mode`
      - `+ provisioned_throughput`
      - `+ global_secondary_index_schema.provisioned_throughput`
      - `- pre_split_key_options.hash_count`
  - **DescribeTable**
    - changes of response param
      - `+ global_secondary_index_schema.provisioned_throughput`

### HuaweiCloud SDK RDS

- _API Version_
  - V3
- _Features_
  - Support the APIs `ShowRecoveryTimeWindow`, `UpdateToPeriod`
- _Bug Fix_
  - None
- _Change_
  - None

# 3.1.104 2024-09-26

### HuaweiCloud SDK DDS

- _API Version_
  - V3
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ResizeInstance**
    - changes of request param
      - `+ resize.target_type: enum value [config,readonly]`

### HuaweiCloud SDK Live

- _API Version_
  - V1
- _Features_
  - Support the following APIs:
    - `ListHarvestTask`
    - `ModifyHarvestTask`
    - `CreateHarvestTask`
    - `DeleteHarvestTask`
    - `UpdateHarvestJobStatus`
- _Bug Fix_
  - None
- _Change_
  - None

# 3.1.103 2024-09-23

### HuaweiCloud SDK CDN

- _API Version_
  - V2
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **UpdateDomainMultiCertificates**
    - changes of request param
      - `+ https.scm_certificate_id`
  - **ShowDomainFullConfig**
    - changes of response param
      - `+ configs.user_agent_filter.include_empty`
      - `+ configs.https.scm_certificate_id`
      - `+ configs.https.certificates.certificate_source`
      - `+ configs.https.certificates.scm_certificate_id`
  - **UpdateDomainFullConfig**
    - changes of request param
      - `+ configs.user_agent_filter.include_empty`
      - `+ configs.https.scm_certificate_id`
      - `+ configs.https.certificates.certificate_source`
      - `+ configs.https.certificates.scm_certificate_id`

### HuaweiCloud SDK DDS

- _API Version_
  - V3
- _Features_
  - Support the API `ListDatabases`
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
  - **ListServersDetails**
    - changes of request param
      - `+ marker`

### HuaweiCloud SDK EVS

- _API Version_
  - V2
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ShowVolume**
    - changes of response param
      - `+ volume.snapshot_policy_id`
  - **ListVolumes**
    - changes of request param
      - `+ snapshot_policy_id`
    - changes of response param
      - `+ volumes.snapshot_policy_id`

### HuaweiCloud SDK Organizations

- _API Version_
  - V1
- _Features_
  - Support the API `UpdateAccount`
- _Bug Fix_
  - None
- _Change_
  - **LeaveOrganization**
    - changes of request param
      - `+ X-Security-Token`
  - **CloseAccount**
    - changes of request param
      - `+ X-Security-Token`
  - **RemoveAccount**
    - changes of request param
      - `+ X-Security-Token`
  - **MoveAccount**
    - changes of request param
      - `+ X-Security-Token`
  - **EnableTrustedService**
    - changes of request param
      - `+ X-Security-Token`
  - **DisableTrustedService**
    - changes of request param
      - `+ X-Security-Token`
  - **RegisterDelegatedAdministrator**
    - changes of request param
      - `+ X-Security-Token`
  - **DeregisterDelegatedAdministrator**
    - changes of request param
      - `+ X-Security-Token`
  - **AttachPolicy**
    - changes of request param
      - `+ X-Security-Token`
  - **DetachPolicy**
    - changes of request param
      - `+ X-Security-Token`
  - **ShowEffectivePolicies**
    - changes of request param
      - `+ X-Security-Token`
  - **UntagResource**
    - changes of request param
      - `+ X-Security-Token`
  - **ListServices**
    - changes of request param
      - `+ X-Security-Token`
  - **DeleteOrganization**
    - changes of request param
      - `+ X-Security-Token`
  - **ShowOrganization**
    - changes of request param
      - `+ X-Security-Token`
  - **CreateOrganization**
    - changes of request param
      - `+ X-Security-Token`
  - **ListOrganizationalUnits**
    - changes of request param
      - `+ X-Security-Token`
  - **CreateOrganizationalUnit**
    - changes of request param
      - `+ X-Security-Token`
  - **DeleteOrganizationalUnit**
    - changes of request param
      - `+ X-Security-Token`
  - **ShowOrganizationalUnit**
    - changes of request param
      - `+ X-Security-Token`
  - **UpdateOrganizationalUnit**
    - changes of request param
      - `+ X-Security-Token`
      - `- X-Auth-Token`
  - **ListAccounts**
    - changes of request param
      - `+ X-Security-Token`
      - `+ with_register_contact_info`
    - changes of response param
      - `+ accounts.mobile_phone`
      - `+ accounts.intl_number_prefix`
      - `+ accounts.email`
      - `+ accounts.description`
  - **CreateAccount**
    - changes of request param
      - `+ X-Security-Token`
      - `+ description`
  - **ShowAccount**
    - changes of request param
      - `+ X-Security-Token`
      - `+ with_register_contact_info`
    - changes of response param
      - `+ account.mobile_phone`
      - `+ account.intl_number_prefix`
      - `+ account.email`
      - `+ account.description`
  - **ListCreateAccountStatuses**
    - changes of request param
      - `+ X-Security-Token`
  - **ShowCreateAccountStatus**
    - changes of request param
      - `+ X-Security-Token`
  - **ListCloseAccountStatuses**
    - changes of request param
      - `+ X-Security-Token`
  - **ListTrustedServices**
    - changes of request param
      - `+ X-Security-Token`
  - **ListDelegatedServices**
    - changes of request param
      - `+ X-Security-Token`
  - **ListDelegatedAdministrators**
    - changes of request param
      - `+ X-Security-Token`
  - **ListEntitiesForPolicy**
    - changes of request param
      - `+ X-Security-Token`
  - **ListTagsForResource**
    - changes of request param
      - `+ X-Security-Token`
  - **TagResource**
    - changes of request param
      - `+ X-Security-Token`
  - **ListEntities**
    - changes of request param
      - `+ X-Security-Token`
  - **ListTagPolicyServices**
    - changes of request param
      - `+ X-Security-Token`
  - **ListTagResources**
    - changes of request param
      - `+ X-Security-Token`
  - **CreateTagResource**
    - changes of request param
      - `+ X-Security-Token`
  - **DeleteTagResource**
    - changes of request param
      - `+ X-Security-Token`
  - **ShowResourceInstancesCount**
    - changes of request param
      - `+ X-Security-Token`
  - **ListResourceTags**
    - changes of request param
      - `+ X-Security-Token`
  - **ListRoots**
    - changes of request param
      - `+ X-Security-Token`
  - **InviteAccount**
    - changes of request param
      - `+ X-Security-Token`
    - changes of response param
      - `+ handshake.expired_at`
  - **ShowHandshake**
    - changes of request param
      - `+ X-Security-Token`
    - changes of response param
      - `+ handshake.expired_at`
  - **AcceptHandshake**
    - changes of request param
      - `+ X-Security-Token`
    - changes of response param
      - `+ handshake.expired_at`
  - **DeclineHandshake**
    - changes of request param
      - `+ X-Security-Token`
    - changes of response param
      - `+ handshake.expired_at`
  - **CancelHandshake**
    - changes of request param
      - `+ X-Security-Token`
    - changes of response param
      - `+ handshake.expired_at`
  - **ListReceivedHandshakes**
    - changes of request param
      - `+ X-Security-Token`
    - changes of response param
      - `+ handshakes.expired_at`
  - **ListHandshakes**
    - changes of request param
      - `+ X-Security-Token`
    - changes of response param
      - `+ handshakes.expired_at`
  - **ListPolicies**
    - changes of request param
      - `+ X-Security-Token`
  - **CreatePolicy**
    - changes of request param
      - `+ X-Security-Token`
  - **DeletePolicy**
    - changes of request param
      - `+ X-Security-Token`
  - **ShowPolicy**
    - changes of request param
      - `+ X-Security-Token`
  - **UpdatePolicy**
    - changes of request param
      - `+ X-Security-Token`
      - `- X-Auth-Token`
  - **EnablePolicyType**
    - changes of request param
      - `+ X-Security-Token`
  - **DisablePolicyType**
    - changes of request param
      - `+ X-Security-Token`
  - **ListResourceInstances**
    - changes of request param
      - `+ X-Security-Token`
  - **ListQuotas**
    - changes of request param
      - `+ X-Security-Token`

# 3.1.102 2024-09-12

### HuaweiCloud SDK KVS

- _API Version_
  - V1
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ScanKv**
    - changes of request param
      - `+ sample_segments_count`
      - `+ return_count_only`
    - changes of response param
      - `+ returned_segment_items`

# 3.1.101 2024-09-05

### HuaweiCloud SDK ECS

- _API Version_
  - V2
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListCloudServers**
    - changes of request param
      - `+ marker`
    - changes of response param
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

- _API Version_
  - V1
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ShowDomainHttpsCert**
    - changes of response param
      - `+ tls_certificate`
      - `+ gm_certificate`
  - **UpdateDomainHttpsCert**
    - changes of request param
      - `+ tls_certificate`
      - `+ gm_certificate`

### HuaweiCloud SDK VPC

- _API Version_
  - V3
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **CreateSubNetworkInterface**
    - changes of request param
      - `- sub_network_interface.instance_id`
      - `- sub_network_interface.instance_type`
      - `- sub_network_interface.tags`
  - **BatchCreateSubNetworkInterface**
    - changes of request param
      - `- sub_network_interface.instance_id`
      - `- sub_network_interface.instance_type`
      - `- sub_network_interface.tags`

# 3.1.100 2024-08-29

### HuaweiCloud SDK ECS

- _API Version_
  - V2
- _Features_
  - Support the API `ListCloudServers`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK EIP

- _API Version_
  - V3
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListCommonPools**
    - changes of request param
      - `* fields: string -> list<string>`
  - **ListShareBandwidthTypes**
    - changes of request param
      - `* fields: string -> list<string>`
  - **ListTenantVpcIgws**
    - changes of request param
      - `* fields: string -> list<string>`
  - **CreateTenantVpcIgw**
    - changes of request param
      - `* fields: string -> list<string>`
  - **ShowInternalVpcIgw**
    - changes of request param
      - `* fields: string -> list<string>`
  - **UpdateTenantVpcIgw**
    - changes of request param
      - `* fields: string -> list<string>`
  - **ListEipBandwidths**
    - changes of request param
      - `+ fields`
  - **ListBandwidth**
    - changes of request param
      - `+ fields`
  - **ListPublicipPool**
    - changes of request param
      - `* fields: string -> list<string>`
  - **ShowPublicipPool**
    - changes of request param
      - `* fields: string -> list<string>`
  - **ListProjectGeipBindings**
    - changes of request param
      - `* fields: string -> list<string>`

### HuaweiCloud SDK EVS

- _API Version_
  - V2
- _Features_
  - Support the API `RetypeVolume`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK GaussDBforopenGauss

- _API Version_
  - V3
- _Features_
  - Support the API `CreateGaussDbInstance`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK RDS

- _API Version_
  - V3
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **CreateManualBackup**
    - changes of request param
      - `+ backup_database_individually`

### HuaweiCloud SDK VPC

- _API Version_
  - V3
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **AddSecurityGroups**
    - changes of response param
      - `+ port.extra_dhcp_opts.opt_name`
      - `+ port.extra_dhcp_opts.opt_value`
      - `* port.extra_dhcp_opts: list<object> -> list<ExtraDhcpOpt>`
  - **RemoveSecurityGroups**
    - changes of response param
      - `+ port.extra_dhcp_opts.opt_name`
      - `+ port.extra_dhcp_opts.opt_value`
      - `* port.extra_dhcp_opts: list<object> -> list<ExtraDhcpOpt>`

# 3.1.99 2024-08-22

### HuaweiCloud SDK DRS

- _API Version_
  - V5
- _Features_
  - Support the APIs `UploadUserJdbcDriver`, `SyncUserJdbcDriver`, `ListUserJdbcDrivers`, `DeleteUserJdbcDriver`
- _Bug Fix_
  - None
- _Change_
  - **CreateJob**
    - changes of request param
      - `+ job.base_info.engine_type: enum value [mysql-to-mysql]`
      - `+ job.source_endpoint.db_type: enum value [mysql]`
    - changes of response param
      - `+ is_clone_job`
      - `+ create_time`
      - `+ name`
      - `+ id`
      - `+ status`
      - `- job`
  - **BatchCreateJobsAsync**
    - changes of request param
      - `+ jobs.policy_config.is_create_table_with_index`
      - `+ jobs.base_info.engine_type: enum value [mysql-to-mysql]`
      - `+ jobs.source_endpoint.db_type: enum value [mysql]`
  - **ListAsyncJobDetail**
    - changes of response param
      - `+ jobs.status: enum value [CREATING,CREATE_FAILED,CONFIGURATION,STARTJOBING,WAITING_FOR_START,START_JOB_FAILED,PAUSING,FULL_TRANSFER_STARTED,FULL_TRANSFER_FAILED,FULL_TRANSFER_COMPLETE,INCRE_TRANSFER_STARTED,INCRE_TRANSFER_FAILED,RELEASE_RESOURCE_STARTED,RELEASE_RESOURCE_FAILED,RELEASE_RESOURCE_COMPLETE,REBUILD_NODE_STARTED,REBUILD_NODE_FAILED,CHANGE_JOB_STARTED,CHANGE_JOB_FAILED,DELETED,CHILD_TRANSFER_STARTING,CHILD_TRANSFER_STARTED,CHILD_TRANSFER_COMPLETE,CHILD_TRANSFER_FAILED,RELEASE_CHILD_TRANSFER_STARTED,RELEASE_CHILD_TRANSFER_COMPLETE,NODE_UPGRADE_START,NODE_UPGRADE_COMPLETE,NODE_UPGRADE_FAILED]`
      - `+ jobs.policy_config.is_create_table_with_index`
      - `+ jobs.base_info.engine_type: enum value [mysql-to-mysql]`
      - `+ jobs.source_endpoint.db_type: enum value [mysql]`
  - **UpdateBatchAsyncJobs**
    - changes of request param
      - `+ jobs.params.policy_config.is_create_table_with_index`
      - `+ jobs.params.base_info.engine_type: enum value [mysql-to-mysql]`
      - `+ jobs.params.source_endpoint.db_type: enum value [mysql]`
  - **ShowJobDetail**
    - changes of response param
      - `+ job.status: enum value [CREATING,CREATE_FAILED,CONFIGURATION,STARTJOBING,WAITING_FOR_START,START_JOB_FAILED,PAUSING,FULL_TRANSFER_STARTED,FULL_TRANSFER_FAILED,FULL_TRANSFER_COMPLETE,INCRE_TRANSFER_STARTED,INCRE_TRANSFER_FAILED,RELEASE_RESOURCE_STARTED,RELEASE_RESOURCE_FAILED,RELEASE_RESOURCE_COMPLETE,REBUILD_NODE_STARTED,REBUILD_NODE_FAILED,CHANGE_JOB_STARTED,CHANGE_JOB_FAILED,DELETED,CHILD_TRANSFER_STARTING,CHILD_TRANSFER_STARTED,CHILD_TRANSFER_COMPLETE,CHILD_TRANSFER_FAILED,RELEASE_CHILD_TRANSFER_STARTED,RELEASE_CHILD_TRANSFER_COMPLETE,NODE_UPGRADE_START,NODE_UPGRADE_COMPLETE,NODE_UPGRADE_FAILED]`
      - `+ job.policy_config.is_create_table_with_index`
      - `+ job.base_info.engine_type: enum value [mysql-to-mysql]`
      - `+ job.source_endpoint.db_type: enum value [mysql]`
  - **UpdateJob**
    - changes of request param
      - `+ job.params.policy_config.is_create_table_with_index`
      - `+ job.params.base_info.engine_type: enum value [mysql-to-mysql]`
      - `+ job.params.source_endpoint.db_type: enum value [mysql]`
  - **ExecuteJobAction**
    - changes of request param
      - `+ job.action_params.is_only_init_task`
      - `+ job.action_params.endpoints.db_type: enum value [mysql]`
  - **BatchExecuteJobActions**
    - changes of request param
      - `+ jobs.action_params.is_only_init_task`
      - `+ jobs.action_params.endpoints.db_type: enum value [mysql]`

### HuaweiCloud SDK GaussDBforopenGauss

- _API Version_
  - V3
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **CreateDbInstance**
    - changes of request param
      - `+ ha.instance_mode`

### HuaweiCloud SDK KMS

- _API Version_
  - V2
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **CreateDatakey**
    - changes of request param
      - `+ additional_authenticated_data`
  - **CreateDatakeyWithoutPlaintext**
    - changes of request param
      - `+ additional_authenticated_data`
  - **EncryptDatakey**
    - changes of request param
      - `+ additional_authenticated_data`
  - **DecryptDatakey**
    - changes of request param
      - `+ additional_authenticated_data`
  - **EncryptData**
    - changes of request param
      - `+ additional_authenticated_data`
  - **DecryptData**
    - changes of request param
      - `+ additional_authenticated_data`

# 3.1.98 2024-08-15

### HuaweiCloud SDK EIP

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **UpdatePrePaidBandwidth**
    - changes of request param
      - `+ extendParam.period_type`
      - `+ extendParam.period_num`
  - **ListEipBandwidths**
    - changes of response param
      - `* eip_bandwidths.tenant_id: uuid -> string`
  - **ListProjectGeipBindings**
    - changes of response param
      - `* geip_bindings.vnic.vni: int32 -> string`

### HuaweiCloud SDK GaussDBforopenGauss

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **CreateInstance**
    - changes of request param
      - `+ ha.instance_mode`
  - **ShowBatchUpgradeCandidateVersions**
    - changes of response param
      - `+ hotfix_rollback_infos`

### HuaweiCloud SDK IMS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListImages**
    - changes of request param
      - `+ visibility: enum value [shared]`
    - changes of response param
      - `+ images.visibility: enum value [shared]`
  - **UpdateImage**
    - changes of response param
      - `+ visibility: enum value [shared]`

### HuaweiCloud SDK LTS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListLogs**
    - changes of request param
      - `+ query`
      - `+ is_analysis_query`
    - changes of response param
      - `+ analysisLogs`

### HuaweiCloud SDK OCR

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **RecognizeTransportationLicense**
    - changes of response param
      - `+ result.expiry_date`
      - `+ result.review_expiry_date`
      - `+ result.assessed_technical_level`

# 3.1.97 2024-08-08

### HuaweiCloud SDK KVS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **PutKv**
    - changes of request param
      - `+ condition_expression.multi_field_expression`
      - `+ condition_expression.composed_expression`
  - **UpdateKv**
    - changes of request param
      - `+ condition_expression.multi_field_expression`
      - `+ condition_expression.composed_expression`
  - **DeleteKv**
    - changes of request param
      - `+ condition_expression.multi_field_expression`
      - `+ condition_expression.composed_expression`
  - **ScanKv**
    - changes of request param
      - `+ filter_expression.multi_field_expression`
      - `+ filter_expression.composed_expression`
  - **ScanSkeyKv**
    - changes of request param
      - `+ filter_expression.multi_field_expression`
      - `+ filter_expression.composed_expression`

### HuaweiCloud SDK OCR

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **RecognizeSmartDocumentRecognizer**
    - changes of request param
      - `+ single_orientation_mode`

### HuaweiCloud SDK VPC

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListSubNetworkInterfaces**
    - changes of response param
      - `+ sub_network_interfaces.allowed_address_pairs`
      - `+ sub_network_interfaces.state`
      - `+ sub_network_interfaces.instance_id`
      - `+ sub_network_interfaces.instance_type`
      - `+ sub_network_interfaces.scope`
      - `* sub_network_interfaces.tags: list<string> -> list<ResourceTag>`
  - **CreateSubNetworkInterface**
    - changes of request param
      - `+ sub_network_interface.allowed_address_pairs`
      - `+ sub_network_interface.instance_id`
      - `+ sub_network_interface.instance_type`
      - `+ sub_network_interface.tags`
    - changes of response param
      - `+ sub_network_interface.allowed_address_pairs`
      - `+ sub_network_interface.state`
      - `+ sub_network_interface.instance_id`
      - `+ sub_network_interface.instance_type`
      - `+ sub_network_interface.scope`
      - `* sub_network_interface.tags: list<string> -> list<ResourceTag>`
  - **BatchCreateSubNetworkInterface**
    - changes of request param
      - `+ sub_network_interface.allowed_address_pairs`
      - `+ sub_network_interface.instance_id`
      - `+ sub_network_interface.instance_type`
      - `+ sub_network_interface.tags`
    - changes of response param
      - `+ sub_network_interfaces.allowed_address_pairs`
      - `+ sub_network_interfaces.state`
      - `+ sub_network_interfaces.instance_id`
      - `+ sub_network_interfaces.instance_type`
      - `+ sub_network_interfaces.scope`
      - `* sub_network_interfaces.tags: list<string> -> list<ResourceTag>`
  - **ShowSubNetworkInterface**
    - changes of response param
      - `+ sub_network_interface.allowed_address_pairs`
      - `+ sub_network_interface.state`
      - `+ sub_network_interface.instance_id`
      - `+ sub_network_interface.instance_type`
      - `+ sub_network_interface.scope`
      - `* sub_network_interface.tags: list<string> -> list<ResourceTag>`
  - **UpdateSubNetworkInterface**
    - changes of request param
      - `+ sub_network_interface.allowed_address_pairs`
    - changes of response param
      - `+ sub_network_interface.allowed_address_pairs`
      - `+ sub_network_interface.state`
      - `+ sub_network_interface.instance_id`
      - `+ sub_network_interface.instance_type`
      - `+ sub_network_interface.scope`
      - `* sub_network_interface.tags: list<string> -> list<ResourceTag>`
  - **MigrateSubNetworkInterface**
    - changes of response param
      - `+ sub_network_interfaces.allowed_address_pairs`
      - `+ sub_network_interfaces.state`
      - `+ sub_network_interfaces.instance_id`
      - `+ sub_network_interfaces.instance_type`
      - `+ sub_network_interfaces.scope`
      - `* sub_network_interfaces.tags: list<string> -> list<ResourceTag>`
  - **UpdateTrafficMirrorSession**
    - changes of request param
      - `- traffic_mirror_session.type`

# 3.1.96 2024-08-01

### HuaweiCloud SDK LTS

- _Features_
  - Support the following APIs:
    - `ListConsumerGroup`
    - `CreateConsumerGroup`
    - `ConsumerGroupHeartBeat`
    - `ShowLogStreamShards`
    - `ListDetailsConsumerGroup`
    - `UpdateCheckPoint`
    - `DeleteConsumerGroup`
    - `ShowCursorByTime`
    - `ShowCursorTime`
- _Bug Fix_
  - None
- _Change_
  - None

# 3.1.95 2024-07-25

### HuaweiCloud SDK OCR

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **RecognizeCambodianIdCard**
    - changes of request param
      - `+ detect_reproduce`
    - changes of response param
      - `+ result.detect_reproduce_result`
      - `+ result.score_info.reproduce_score`

# 3.1.94 2024-07-18

### HuaweiCloud SDK CTS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListTraces**
    - changes of request param
      - `+ access_key_id`
      - `+ enterprise_project_id`
    - changes of response param
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

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **BatchCreateJobs**
    - changes of request param
      - `+ jobs.node_type: enum value [micro,small,medium,xlarge,2xlarge]`
  - **BatchUpdateJob**
    - changes of request param
      - `+ jobs.node_type: enum value [micro,small,medium,xlarge,2xlarge]`

### HuaweiCloud SDK ECS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ShowServer**
    - changes of response param
      - `+ server.flavor.gpus`
      - `+ server.flavor.asic_accelerators`
  - **ListServersDetails**
    - changes of response param
      - `+ servers.flavor.gpus`
      - `+ servers.flavor.asic_accelerators`

### HuaweiCloud SDK EVS

- _Features_
  - Support the APIs `ChangeVolumeChargeMode`, `UnsubscribePostpaidVolume`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK IMS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListImages**
    - changes of request param
      - `+ __platform: enum value [Huawei Cloud EulerOS]`

### HuaweiCloud SDK KMS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListKeys**
    - changes of response param
      - `- key_details.key_label`
  - **ListKeyDetail**
    - changes of response param
      - `- key_info.key_label`
  - **ListKmsByTags**
    - changes of response param
      - `- resources.resource_detail.key_label`

### HuaweiCloud SDK KVS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **PutKv**
    - changes of request param
      - `- condition_expression.multi_field_expression`
  - **UpdateKv**
    - changes of request param
      - `- condition_expression.multi_field_expression`
  - **DeleteKv**
    - changes of request param
      - `- condition_expression.multi_field_expression`
  - **ScanKv**
    - changes of request param
      - `- filter_expression.multi_field_expression`
  - **ScanSkeyKv**
    - changes of request param
      - `- filter_expression.multi_field_expression`

### HuaweiCloud SDK Live

- _Features_
  - Support the API `ListPlayDomainStreamInfo`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK VOD

- _Features_
  - Support the API `DeleteTranscodeProduct`
- _Bug Fix_
  - None
- _Change_
  - **ShowVodStatistics**
    - changes of response param
      - `+ sample_data.storage_warm`
      - `+ sample_data.storage_cold`

# 3.1.93 2024-07-11

### HuaweiCloud SDK CDN

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - Deprecate the following APIs:
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
    - changes of response param
      - `- top_refer_summary.ratio`

### HuaweiCloud SDK CodeArtsDeploy

- _Features_
  - Support the following APIs:
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
- _Bug Fix_
  - None
- _Change_
  - **CreateApp**
    - changes of request param
      - `+ arrange_infos.operation_list.id`

### HuaweiCloud SDK ECS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListFlavors**
    - changes of response param
      - `+ flavors.os_extra_specs.info:gpus`
      - `+ flavors.os_extra_specs.info:asic_accelerators`
  - **ListResizeFlavors**
    - changes of response param
      - `+ flavors.extra_specs.info:gpus`
      - `+ flavors.extra_specs.info:asic_accelerators`

### HuaweiCloud SDK GaussDBforopenGauss

- _Features_
  - Support the following APIs:
    - `ListSupportKernelPlugins`
    - `ListKernelPlugins`
    - `SetKernelPluginLicense`
    - `InstallKernelPlugin`
    - `ListPluginExtensions`
    - `ResumePluginExtensions`
- _Bug Fix_
  - None
- _Change_
  - **RestoreInstance**
    - changes of request param
      - `- source.table_list`
      - `- source.schema_type`

### HuaweiCloud SDK Live

- _Features_
  - Support the following APIs:
    - `ShowRefererChain`
    - `SetRefererChain`
    - `DeleteRefererChain`
    - `ListHlsConfig`
    - `UpdateHlsConfig`
- _Bug Fix_
  - None
- _Change_
  - **ShowPullSourcesConfig**
    - changes of response param
      - `+ source_port`
  - **UpdatePullSourcesConfig**
    - changes of request param
      - `+ source_port`

### HuaweiCloud SDK OCR

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **RecognizeBankReceipt**
    - changes of request param
      - `+ page_num`

# 3.1.92 2024-07-04

### HuaweiCloud SDK CDN

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ShowDomainFullConfig**
    - changes of response param
      - `+ configs.url_auth.time_arg`
  - **UpdateDomainFullConfig**
    - changes of request param
      - `+ configs.url_auth.time_arg`

### HuaweiCloud SDK GaussDB

- _Features_
  - Support the following APIs:
    - `ResizeStarRocksFlavor`
    - `ShowStarrocksParams`
    - `UpdateStarrocksParams`
    - `SyncStarRocksUsers`
    - `CheckStarrocksParams`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK GaussDBforopenGauss

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListInstances**
    - changes of response param
      - `+ instances.datastore.target_version`
      - `+ instances.datastore.hotfix_finished_times`
  - **ListInstancesDetails**
    - changes of response param
      - `+ instances.datastore.target_version`
      - `+ instances.datastore.hotfix_finished_times`

### HuaweiCloud SDK KMS

- _Features_
  - Support the APIs `UpdatePrimaryRegion`, `ReplicateKey`, `ListSupportRegions`
- _Bug Fix_
  - None
- _Change_
  - **ListKeys**
    - changes of response param
      - `- key_details.partition_type`
  - **ListKeyDetail**
    - changes of response param
      - `- key_info.partition_type`
  - **ListKmsByTags**
    - changes of response param
      - `- resources.resource_detail.partition_type`

### HuaweiCloud SDK OCR

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **RecognizeCambodianIdCard**
    - changes of request param
      - `+ detect_border_integrity`
      - `+ detect_blocking_within_border`
      - `+ detect_blur`
      - `+ detect_glare`
      - `+ return_adjusted_image`
      - `+ detect_tampering`
    - changes of response param
      - `+ result.adjusted_image`
      - `+ result.detect_border_integrity_result`
      - `+ result.detect_blocking_within_border_result`
      - `+ result.detect_blur_result`
      - `+ result.detect_glare_result`
      - `+ result.detect_tampering_result`
      - `+ result.score_info`

### HuaweiCloud SDK RDS

- _Features_
  - Support the APIs `CreateInstanceIam5`, `UnlockNodeReadonlyStatus`, `DeleteDisasterRecovery`, `ListFlavorsResize`
- _Bug Fix_
  - None
- _Change_
  - None

# 3.1.91 2024-06-27

### HuaweiCloud SDK CFW

- _Features_
  - Support the following APIs:
    - `CreateTag`
    - `DeleteTag`
    - `ListCaptureTask`
    - `CreateCaptureTask`
    - `DeleteCaptureTask`
    - `ListCaptureResult`
    - `CancelCaptureTask`
- _Bug Fix_
  - None
- _Change_
  - **ListFlowLogs**
    - changes of request param
      - `+ src_province_name`
      - `+ dst_province_name`
      - `+ src_city_name`
      - `+ dst_city_name`
      - `+ protocol: enum value [6,17,1,58]`
    - changes of response param
      - `+ data.records.dst_province_id`
      - `+ data.records.dst_province_name`
      - `+ data.records.dst_city_id`
      - `+ data.records.dst_city_name`
      - `+ data.records.src_province_id`
      - `+ data.records.src_province_name`
      - `+ data.records.src_city_id`
      - `+ data.records.src_city_name`
  - **ListAccessControlLogs**
    - changes of request param
      - `+ src_province_name`
      - `+ dst_province_name`
      - `+ src_city_name`
      - `+ dst_city_name`
    - changes of response param
      - `+ data.records.src_province_id`
      - `+ data.records.src_province_name`
      - `+ data.records.src_city_id`
      - `+ data.records.src_city_name`
      - `+ data.records.dst_province_id`
      - `+ data.records.dst_province_name`
      - `+ data.records.dst_city_id`
      - `+ data.records.dst_city_name`
  - **ListBlackWhiteLists**
    - changes of request param
      - `+ address_type: enum value [0,1,2]`
    - changes of response param
      - `- data.object_id`
  - **AddServiceSet**
    - changes of response param
      - `- data.name`
      - `* data: object<IdObject> -> object`
  - **ListDomainParseDetail**
    - changes of request param
      - `* address_type: string -> int32`
  - **UpdateDnsServers**
    - changes of request param
      - `* fw_instance_id: optional -> required`
  - **ListDnsServers**
    - changes of request param
      - `* fw_instance_id: optional -> required`
  - **ChangeIpsSwitchStatus**
    - changes of response param
      - `- trace_id`
  - **ListAttackLogs**
    - changes of request param
      - `+ src_province_name`
      - `+ dst_province_name`
      - `+ src_city_name`
      - `+ dst_city_name`
      - `- source`
      - `+ protocol: enum value [6,17,1,58]`
      - `+ action: enum value [0,1]`
      - `+ direction: enum value [0,1]`
    - changes of response param
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
    - changes of request param
      - `- list_type`
      - `- object_id`
  - **ChangeIpsProtectMode**
    - changes of response param
      - `- data.name`
      - `* data: object<IdObject> -> object`
  - **UpdateServiceSet**
    - changes of response param
      - `- data.name`
      - `* data: object<IdObject> -> object`
  - **ListServiceItems**
    - changes of response param
      - `- data.records.name`
  - **AddServiceItems**
    - changes of request param
      - `- service_items.item_id`
      - `- service_items.name`
    - changes of response param
      - `- data.items.name`
      - `* data.items: list<IdObject> -> list<object>`
  - **CreateFirewall**
    - changes of request param
      - `- X-Trace-Id`
  - **UpdateAddressSet**
    - changes of request param
      - `- address_type`
  - **UpdateDomainSet**
    - changes of request param
      - `* fw_instance_id: optional -> required`
      - `- set_id`
      - `- domain_set_type`
  - **ListProtectedVpcs**
    - changes of response param
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
    - changes of response param
      - `+ data.er`
      - `+ data.inspertion_vpc`
      - `- data.name`
      - `* data: object<IdObject> -> object<CreateEWFirewallResp>`
  - **ListEastWestFirewall**
    - changes of request param
      - `* fw_instance_id: optional -> required`
    - changes of response param
      - `+ data.er.attachment_id`
  - **AddAclRule**
    - changes of request param
      - `- rules.profile`
      - `+ rules.source.address_group`
      - `* rules.service.service_group_names: list<AddressGroupVO> -> list<ServiceGroupVO>`
  - **UpdateAclRule**
    - changes of request param
      - `- profile`
      - `+ source.address_group_names.address_set_type`
      - `- source.address_group_names.protocols`
      - `- source.address_group_names.service_set_type`
  - **ListAclRules**
    - changes of request param
      - `- protocol`
    - changes of response param
      - `- data.records.sequence`
      - `- data.records.source.predefined_group`
      - `+ data.records.source.address_group_names.address_set_type`
      - `- data.records.source.address_group_names.protocols`
      - `- data.records.source.address_group_names.service_set_type`
      - `* data.records.source: object<RuleAddressDto> -> object<RuleAddressDtoForResponse>`
      - `- data.records.service.predefined_group`
      - `* data.records.service: object<RuleServiceDto> -> object<RuleServiceDtoForResponse>`
  - **ListServiceSets**
    - changes of response param
      - `- data.records.status`
  - **ListDomains**
    - changes of request param
      - `- description`
      - `- set_id`
  - **ListFirewallDetail**
    - changes of response param
      - `- data.records.flavor.session_concurrent`
      - `- data.records.flavor.session_create`
      - `- data.records.flavor.total_rule_count`
      - `- data.records.flavor.used_rule_count`
      - `- data.records.flavor.vpc_bandwith`
  - **ListFirewallList**
    - changes of response param
      - `- data.records.flavor.session_concurrent`
      - `- data.records.flavor.session_create`
      - `- data.records.flavor.total_rule_count`
      - `- data.records.flavor.used_rule_count`
      - `- data.records.flavor.vpc_bandwith`

### HuaweiCloud SDK DRS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **BatchCreateJobs**
    - changes of request param
      - `+ jobs.is_open_fast_clean`
  - **BatchListJobDetails**
    - changes of response param
      - `+ results.is_open_fast_clean`
  - **ShowDbObjectTemplateResult**
    - changes of request param
      - `+ file_export_object_level`
  - **DownloadDbObjectTemplate**
    - changes of request param
      - `+ file_import_db_level: enum value [column]`
  - **UploadDbObjectTemplate**
    - changes of request param
      - `+ file_import_db_level: enum value [column]`
  - **ShowDbObjectTemplateProgress**
    - changes of request param
      - `+ type`
  - **ShowSupportObjectType**
    - changes of response param
      - `+ is_import_cloumn`
  - **ShowReplayResults**
    - changes of request param
      - `+ is_sample`
      - `+ error_type`
      - `+ sql_template_md5`
      - `+ type: enum value [error_classification]`
    - changes of response param
      - `+ error_classifications`
      - `+ slow_sql_templates.sql_template_md5`
      - `+ error_sql_templates.sql_template_md5`
  - **CreateJob**
    - changes of request param
      - `+ job.base_info.is_open_fast_clean`
      - `+ job.source_endpoint.endpoint.endpoint_name: enum value [postgresql,ecs_postgresql,cloud_postgresql,mongodb,ecs_mongodb,cloud_mongodb]`
  - **BatchCreateJobsAsync**
    - changes of request param
      - `+ jobs.base_info.is_open_fast_clean`
      - `+ jobs.source_endpoint.endpoint.endpoint_name: enum value [postgresql,ecs_postgresql,cloud_postgresql,mongodb,ecs_mongodb,cloud_mongodb]`
  - **ListAsyncJobDetail**
    - changes of response param
      - `+ jobs.base_info.is_open_fast_clean`
      - `+ jobs.source_endpoint.endpoint.endpoint_name: enum value [postgresql,ecs_postgresql,cloud_postgresql,mongodb,ecs_mongodb,cloud_mongodb]`
  - **UpdateBatchAsyncJobs**
    - changes of request param
      - `+ jobs.params.base_info.is_open_fast_clean`
      - `+ jobs.params.source_endpoint.endpoint.endpoint_name: enum value [postgresql,ecs_postgresql,cloud_postgresql,mongodb,ecs_mongodb,cloud_mongodb]`
  - **ShowJobDetail**
    - changes of response param
      - `+ job.base_info.is_open_fast_clean`
      - `+ job.source_endpoint.endpoint.endpoint_name: enum value [postgresql,ecs_postgresql,cloud_postgresql,mongodb,ecs_mongodb,cloud_mongodb]`
  - **UpdateJob**
    - changes of request param
      - `+ job.params.base_info.is_open_fast_clean`
      - `+ job.params.source_endpoint.endpoint.endpoint_name: enum value [postgresql,ecs_postgresql,cloud_postgresql,mongodb,ecs_mongodb,cloud_mongodb]`
  - **ExecuteJobAction**
    - changes of request param
      - `+ job.action_name: enum value [set_readonly]`
      - `+ job.action_params.endpoints.endpoint.endpoint_name: enum value [postgresql,ecs_postgresql,cloud_postgresql,mongodb,ecs_mongodb,cloud_mongodb]`
  - **BatchExecuteJobActions**
    - changes of request param
      - `+ jobs.action_name: enum value [set_readonly]`
      - `+ jobs.action_params.endpoints.endpoint.endpoint_name: enum value [postgresql,ecs_postgresql,cloud_postgresql,mongodb,ecs_mongodb,cloud_mongodb]`

### HuaweiCloud SDK ECS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListFlavors**
    - changes of response param
      - `+ flavors.os_extra_specs.network_interface:traffic_mirroring_supported`
      - `+ flavors.os_extra_specs.security:enclave_supported`
  - **ListResizeFlavors**
    - changes of response param
      - `+ flavors.extra_specs.network_interface:traffic_mirroring_supported`
      - `+ flavors.extra_specs.security:enclave_supported`

### HuaweiCloud SDK GaussDB

- _Features_
  - Support the following APIs:
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
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK GaussDBforopenGauss

- _Features_
  - Support the following APIs:
    - `SetNewBackupPolicy`
    - `ListInstanceDetails`
    - `ShowBatchUpgradeCandidateVersions`
    - `UpgradeInstancesVersion`
    - `ConfirmRestoredData`
- _Bug Fix_
  - None
- _Change_
  - **CreateInstance**
    - changes of request param
      - `- replica_num: enum value [2]`
  - **CreateDbInstance**
    - changes of request param
      - `- replica_num: enum value [2]`

### HuaweiCloud SDK KVS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **GetKv**
    - changes of response param
      - `- kv_blob_data`
  - **PutKv**
    - changes of request param
      - `- kv_blob`
      - `- condition_expression.single_kv_expression`
      - `- condition_expression.composed_expression`
  - **UpdateKv**
    - changes of request param
      - `- kv_options`
      - `- update_blob`
      - `- condition_expression.single_kv_expression`
      - `- condition_expression.composed_expression`
  - **DeleteKv**
    - changes of request param
      - `- condition_expression.single_kv_expression`
      - `- condition_expression.composed_expression`
  - **ScanKv**
    - changes of request param
      - `- filter_expression.single_kv_expression`
      - `- filter_expression.composed_expression`
    - changes of response param
      - `- returned_kv_items.kv_blob_data`
  - **ScanSkeyKv**
    - changes of request param
      - `- filter_expression.single_kv_expression`
      - `- filter_expression.composed_expression`
    - changes of response param
      - `- returned_kv_items.kv_blob_data`
  - **BatchWriteKv**
    - changes of request param
      - `- table_opers.kv_opers.put_kv.kv_blob`

### HuaweiCloud SDK VPC

- _Features_
  - Support the following APIs:
    - `CountPortsByTags`
    - `ListPortsByTags`
    - `ShowPortTags`
    - `CreatePortTag`
    - `ListPortTags`
    - `BatchCreatePortTags`
    - `DeletePortTag`
    - `BatchDeletePortTags`
- _Bug Fix_
  - None
- _Change_
  - **ListFirewallTags**
    - changes of request param
      - `+ limit`
      - `+ offset`
    - changes of response param
      - `+ total_count`
      - `* tags: object<ListTag> -> list<ListTag>`
  - **ShowFirewallTags**
    - changes of response param
      - `- sys_tags`
      - `* tags: object<ResourceTag> -> list<ResourceTag>`
  - **BatchDeleteFirewallTags**
    - changes of request param
      - `* tags: list<ResourceTag> -> list<DeleteResourceTagRequestBody>`

# 3.1.90 2024-06-13

### HuaweiCloud SDK ECS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ShowServer**
    - changes of response param
      - `- server.fault.code`
      - `- server.fault.created`
      - `- server.fault.message`
      - `- server.fault.details`
      - `* server.fault: object<ServerFault> -> object`
  - **ListServersDetails**
    - changes of response param
      - `- servers.fault.code`
      - `- servers.fault.created`
      - `- servers.fault.message`
      - `- servers.fault.details`
      - `* servers.fault: object<ServerFault> -> object`

### HuaweiCloud SDK EIP

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **DisassociatePublicips**
    - changes of response param
      - `- publicip.associate_instance_type: enum value [null]`
  - **AssociatePublicips**
    - changes of response param
      - `- publicip.associate_instance_type: enum value [null]`
  - **UpdatePublicip**
    - changes of request param
      - `+ publicip.associate_instance_type: enum value [VPN]`
      - `- publicip.associate_instance_type: enum value []`
    - changes of response param
      - `- publicip.associate_instance_type: enum value [null]`

### HuaweiCloud SDK GaussDB

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ShowDedicatedResourceInfo**
    - changes of response param
      - `+ resource_name`
      - `- name`

### HuaweiCloud SDK KVS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **PutKv**
    - changes of request param
      - `- condition_expression.composed_expression.expressions.single_kv_expression`
      - `- condition_expression.composed_expression.expressions.multi_field_expression`
  - **UpdateKv**
    - changes of request param
      - `- condition_expression.composed_expression.expressions.single_kv_expression`
      - `- condition_expression.composed_expression.expressions.multi_field_expression`
  - **DeleteKv**
    - changes of request param
      - `- condition_expression.composed_expression.expressions.single_kv_expression`
      - `- condition_expression.composed_expression.expressions.multi_field_expression`
  - **ScanKv**
    - changes of request param
      - `- filter_expression.composed_expression.expressions.single_kv_expression`
      - `- filter_expression.composed_expression.expressions.multi_field_expression`
  - **ScanSkeyKv**
    - changes of request param
      - `- filter_expression.composed_expression.expressions.single_kv_expression`
      - `- filter_expression.composed_expression.expressions.multi_field_expression`

### HuaweiCloud SDK RDS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ShowReplayDelayStatus**
    - changes of response param
      - `+ delay_time_value_range`

### HuaweiCloud SDK VPC

- _Features_
  - Support the following APIs:
    - `ListSecurityGroupsByTags`
    - `BatchCreateSecurityGroupTags`
    - `BatchDeleteSecurityGroupTags`
    - `ShowSecurityGroupTags`
    - `CreateSecurityGroupTag`
    - `DeleteSecurityGroupTag`
    - `ListSecurityGroupTags`
- _Bug Fix_
  - None
- _Change_
  - None

# 3.1.89 2024-06-06

### HuaweiCloud SDK ECS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ChangeVpc**
    - changes of request param
      - `* nic.security_groups: object<ChangeVpcSecurityGroups> -> list<ChangeVpcSecurityGroups>`
  - **ListFlavors**
    - changes of response param
      - `+ flavors.os_extra_specs.cond:storage:type`
  - **ListResizeFlavors**
    - changes of response param
      - `+ flavors.extra_specs.cond:storage:type`

### HuaweiCloud SDK GaussDB

- _Features_
  - Support the following APIs:
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
- _Bug Fix_
  - None
- _Change_
  - **ShowProxyIpgroup**
    - changes of response param
      - `+ ip_group.id`
      - `+ ip_group.name`
      - `+ ip_group.ip_list`
      - `* ip_group: object -> object<ProxyIpGroupDetail>`
  - **UpdateGaussMySqlInstanceName**
    - changes of request param
      - `+ is_modify_node_name`

### HuaweiCloud SDK GaussDBforNoSQL

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **OfflineNodes**
    - changes of response param
      - `+ job_id`

### HuaweiCloud SDK GaussDBforopenGauss

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListAvailableFlavors**
    - changes of response param
      - `+ flavors.spec_code`
      - `- flavors.spec_cpde`
  - **ListRestorableInstances**
    - changes of response param
      - `* instances.version: number -> string`
  - **ListDbUsers**
    - changes of response param
      - `+ users.attribute`
      - `+ users.lock_status`
      - `- users.attributes`
  - **ShowUpgradeCandidateVersions**
    - changes of response param
      - `+ hotfix_upgrade_infos`
      - `+ hotfix_rollback_infos`

### HuaweiCloud SDK LTS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **CreateLogStreamIndex**
    - changes of request param
      - `+ sqlAnalysisEnable`

### HuaweiCloud SDK RDS

- _Features_
  - Support the APIs `ShowReplayDelayStatus`, `SwitchLogReplay`, `ListShareBackups`
- _Bug Fix_
  - None
- _Change_
  - **ListBackups**
    - changes of request param
      - `+ status`

# 3.1.88 2024-05-30

### HuaweiCloud SDK CDN

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ShowHistoryTaskDetails**
    - changes of response param
      - `+ urls.fail_classify`
      - `+ urls.fail_desc`
  - **ListDomains**
    - changes of response param
      - `+ domains.sources.obs_bucket_type`
  - **CreateDomain**
    - changes of request param
      - `+ domain.sources.obs_bucket_type`
      - `* domain.sources: list<Sources> -> list<SourcesRequestBody>`
    - changes of response param
      - `+ domain.sources.obs_bucket_type`
  - **DeleteDomain**
    - changes of response param
      - `+ domain.sources.obs_bucket_type`
  - **EnableDomain**
    - changes of response param
      - `+ domain.sources.obs_bucket_type`
  - **DisableDomain**
    - changes of response param
      - `+ domain.sources.obs_bucket_type`
  - **ShowDomainFullConfig**
    - changes of response param
      - `+ configs.access_area_filter`
      - `* configs.sources: list<SourcesConfig> -> list<SourcesConfigResponseBody>`
  - **UpdateDomainFullConfig**
    - changes of request param
      - `+ configs.access_area_filter`

### HuaweiCloud SDK ECS

- _Features_
  - Support the API `ChangeServerNetworkInterface`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK GaussDB

- _Features_
  - Support the APIs `UpgradeProxyVersion`, `UpdateProxyName`, `ShowProxyIpgroup`, `ShowProxyVersion`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK GaussDBforopenGauss

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **SearchAutoEnlargePolicy**
    - changes of response param
      - `+ step_percent`
      - `+ step_size`
  - **UpdateInstanceConfiguration**
    - changes of response param
      - `+ job_id`
  - **CreateConfigurationTemplate**
    - changes of request param
      - `+ datastore.instance_mode: enum value [ha:readonly]`
  - **ListDatabases**
    - changes of response param
      - `+ databases.datctype`
      - `+ databases.compatibility_type`
  - **ListTasks**
    - changes of response param
      - `+ tasks.created_at`
      - `+ tasks.ended_at`
  - **ListComponentInfos**
    - changes of response param
      - `+ nodes.components.type`
      - `+ nodes.components.detail`
  - **ShowUpgradeCandidateVersions**
    - changes of response param
      - `+ upgrade_type_list.is_parallel_upgrade`

### HuaweiCloud SDK VPC

- _Features_
  - Support the following APIs:
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
- _Bug Fix_
  - None
- _Change_
  - **ListSecurityGroups**
    - changes of response param
      - `+ security_groups.tags`
  - **CreateSecurityGroup**
    - changes of request param
      - `+ security_group.tags`
    - changes of response param
      - `+ security_group.tags`
  - **ShowSecurityGroup**
    - changes of response param
      - `+ security_group.tags`
  - **UpdateSecurityGroup**
    - changes of response param
      - `+ security_group.tags`
  - **CreateFirewall**
    - changes of request param
      - `+ firewall.tags`

# 3.1.87 2024-05-23

### HuaweiCloud SDK GaussDBforNoSQL

- _Features_
  - Support the APIs `ShowRedisBigKeys`, `ShowPasswordlessConfig`, `UpdatePasswordlessConfig`
- _Bug Fix_
  - None
- _Change_
  - **OfflineNodes**
    - changes of request param
      - `* x-auth-token: optional -> required`

### HuaweiCloud SDK RDS

- _Features_
  - Support the API `DownloadErrorlog`
- _Bug Fix_
  - None
- _Change_
  - None

# 3.1.86 2024-05-16

### HuaweiCloud SDK CDN

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - Deprecate the APIs `UpdateDomainFullConfig`, `ShowDomainFullConfig`
  - **ShowDomainFullConfig**
    - changes of response param
      - `+ configs.https.enc_certificate_value`
      - `+ configs.https.certificates`
  - **UpdateDomainFullConfig**
    - changes of request param
      - `+ configs.https.enc_certificate_value`
      - `+ configs.https.enc_private_key`
      - `+ configs.https.certificates`

### HuaweiCloud SDK GaussDB

- _Features_
  - Support the following APIs:
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
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK GaussDBforopenGauss

- _Features_
  - Support the API `RestoreInstance`
- _Bug Fix_
  - None
- _Change_
  - **CreateDbInstance**
    - changes of request param
      - `+ enable_single_float_ip`

### HuaweiCloud SDK LTS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListLogs**
    - changes of request param
      - `+ __time__`
  - **ListStructuredLogsWithTimeRange**
    - changes of request param
      - `* time_range.start_time: string -> int64`
      - `* time_range.end_time: string -> int64`

### HuaweiCloud SDK OCR

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **RecognizeSmartDocumentRecognizer**
    - changes of request param
      - `+ pdf_page_number`

# 3.1.85 2024-05-09

### HuaweiCloud SDK DRS

- _Features_
  - Support the following APIs:
    - `ListObejectLevelCompareOverview`
    - `CreateObjectLevelCompareJob`
    - `ListObejectLevelCompareDetail`
    - `ListContentCompareDifference`
    - `DownloadCompareResultFile`
    - `CreateCompareResultFile`
    - `ShowHealthCompareJobDetail`
    - `ShowHealthObjectCompareJobOverview`
    - `UpdateComparePolicy`
- _Bug Fix_
  - None
- _Change_
  - **BatchCreateJobs**
    - changes of request param
      - `+ jobs.source_endpoint.kafka_security_config`
  - **BatchValidateConnections**
    - changes of request param
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
    - changes of response param
      - `+ jobs.children.job_direction: enum value [no-dbs]`
      - `- jobs.children.job_direction: enum value [non-dbs]`
  - **BatchUpdateJob**
    - changes of request param
      - `+ jobs.source_endpoint.kafka_security_config`
  - **BatchListJobDetails**
    - changes of response param
      - `+ results.source_endpoint.kafka_security_config`
  - **ListAsyncJobDetail**
    - changes of response param
      - `+ jobs.is_writable`
      - `+ jobs.compare_result.content_diff_detail_info`
      - `+ jobs.compare_result.content_compare_overview_infos.status: enum value [WAIT_FOR_COMPARE,CANCELED]`
  - **UpdateBatchAsyncJobs**
    - changes of request param
      - `+ jobs.type: enum value [notify]`
  - **ShowJobDetail**
    - changes of request param
      - `+ type: enum value [is_writable,cloud_connection]`
    - changes of response param
      - `+ job.is_writable`
      - `+ job.compare_result.content_diff_detail_info`
      - `+ job.compare_result.content_compare_overview_infos.status: enum value [WAIT_FOR_COMPARE,CANCELED]`
  - **UpdateJob**
    - changes of request param
      - `+ job.type: enum value [notify]`
  - **ExecuteJobAction**
    - changes of request param
      - `+ job.action_name: enum value [set_writable,cloud_connection]`
      - `+ job.action_params.replay_config`
  - **BatchExecuteJobActions**
    - changes of request param
      - `+ jobs.action_name: enum value [set_writable,cloud_connection]`
      - `+ jobs.action_params.replay_config`

### HuaweiCloud SDK ECS

- _Features_
  - Support the API `ChangeVpc`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK GaussDB

- _Features_
  - Support the following APIs:
    - `ListStarRocksDataReplications`
    - `CreateStarRocksDataReplication`
    - `DeleteStarRocksDataReplication`
    - `CheckDataBaseConfig`
    - `CheckTableConfig`
    - `ListStarRocksDataReplicationConfig`
    - `ListStarRocksDbParameters`
    - `ListStarRocksDataBases`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK MPC

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **CreateTranscodingTask**
    - changes of request param
      - `+ video_process.hls_segment_type`

# 3.1.84 2024-04-30

### HuaweiCloud SDK KVS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **GetKv**
    - changes of request param
      - `- projection_fields`
      - `- projection_blob`
  - **UpdateKv**
    - changes of request param
      - `- projection_fields`
      - `- projection_blob`
  - **DeleteKv**
    - changes of request param
      - `- projection_fields`
      - `- projection_blob`
  - **ScanKv**
    - changes of request param
      - `- projection_fields`
      - `- projection_blob`
  - **ScanSkeyKv**
    - changes of request param
      - `- projection_fields`
      - `- projection_blob`

# 3.1.83 2024-04-25

### HuaweiCloud SDK AAD

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ShowUnblockRecord**
    - changes of response param
      - `* unblock_record.block_id: string -> int64`

### HuaweiCloud SDK CodeArtsDeploy

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ShowDeployTaskDetail**
    - changes of response param
      - `+ is_disable`
      - `+ can_disable`
  - **ListDeployTasks**
    - changes of response param
      - `+ is_disable`
      - `+ can_disable`
      - `+ result.can_disable`
      - `+ result.is_disable`
  - **ListAllApp**
    - changes of response param
      - `+ result.is_disable`
      - `+ result.can_disable`
  - **ShowAppDetailById**
    - changes of response param
      - `+ result.is_disable`
      - `+ result.can_disable`
      - `+ result.arrange_infos.can_disable`
      - `+ result.arrange_infos.is_disable`

### HuaweiCloud SDK GaussDBforNoSQL

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListInstances**
    - changes of response param
      - `+ instances.availability_zone`

### HuaweiCloud SDK OCR

- _Features_
  - Support the API `RecognizeBankReceipt`
- _Bug Fix_
  - None
- _Change_
  - **RecognizeBusinessLicense**
    - changes of response param
      - `+ result.organization_form`
  - **RecognizeSmartDocumentRecognizer**
    - changes of request param
      - `+ formula`
    - changes of response param
      - `+ result.formula_result`

### HuaweiCloud SDK VPC

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **CreateFirewall**
    - changes of response param
      - `+ firewall.ingress_rules.enabled`
  - **ShowFirewall**
    - changes of response param
      - `+ firewall.ingress_rules.enabled`
  - **UpdateFirewall**
    - changes of response param
      - `+ firewall.ingress_rules.enabled`
  - **UpdateFirewallRules**
    - changes of request param
      - `+ firewall.ingress_rules.enabled`
    - changes of response param
      - `+ firewall.ingress_rules.enabled`
  - **AddFirewallRules**
    - changes of request param
      - `+ firewall.ingress_rules.enabled`
    - changes of response param
      - `+ firewall.ingress_rules.enabled`
  - **RemoveFirewallRules**
    - changes of response param
      - `+ firewall.ingress_rules.enabled`
  - **AssociateSubnetFirewall**
    - changes of response param
      - `+ firewall.ingress_rules.enabled`
  - **DisassociateSubnetFirewall**
    - changes of response param
      - `+ firewall.ingress_rules.enabled`

# 3.1.82 2024-04-18

### HuaweiCloud SDK GaussDBforopenGauss

- _Features_
  - Support the APIs `ListTopIoTraffics`, `ShowErrorLogSwitchStatus`, `ListInstanceErrorLogs`, `DeleteInstanceTag`
- _Bug Fix_
  - None
- _Change_
  - Remove the API `ShowInstancesStatistics`
  - **UpgradeInstanceVersion**
    - changes of request param
      - `+ upgrade_action`
      - `- upgrde_action`
      - `- is_parallel_upgrade`
  - **ShowBackupPolicy**
    - changes of response param
      - `* backup_policy.differential_period: string -> int32`

### HuaweiCloud SDK TMS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **DeleteResourceTag**
    - changes of request param
      - `+ tags.value`

# 3.1.81 2024-04-11

### HuaweiCloud SDK CDN

- _Features_
  - Support the API `ShowQuota`
- _Bug Fix_
  - None
- _Change_
  - **ShowDomainFullConfig**
    - changes of response param
      - `+ configs.sni`
      - `+ configs.request_url_rewrite`
      - `+ configs.browser_cache_rules`
  - **UpdateDomainFullConfig**
    - changes of request param
      - `+ configs.sni`
      - `+ configs.request_url_rewrite`
      - `+ configs.browser_cache_rules`

### HuaweiCloud SDK DRS

- _Features_
  - Support the following APIs:
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
- _Bug Fix_
  - None
- _Change_
  - **ShowDataFilteringResult**
    - changes of response param
      - `+ db_object_filtering_result.source`
      - `+ db_object_filtering_result.target_result`
      - `+ db_object_filtering_result.source_result`
      - `+ db_object_filtering_result.target_message`
      - `+ db_object_filtering_result.source_message`
  - **ShowDataProgress**
    - changes of response param
      - `+ data_process_info.source`
  - **UpdateDataProgress**
    - changes of request param
      - `+ data_process_info.source`
  - **CheckDataFilter**
    - changes of request param
      - `+ data_process_info.source`
  - **ExecuteJobAction**
    - changes of request param
      - `+ job.action_params.compare_task_param.data_process_info`
  - **BatchExecuteJobActions**
    - changes of request param
      - `+ jobs.action_params.compare_task_param.data_process_info`

### HuaweiCloud SDK GaussDBforopenGauss

- _Features_
  - Support the following APIs:
    - `ShowInstancesStatistics`
    - `ShowSlowLogDownload`
    - `CreateSlowLogDownload`
    - `UpgradeInstanceVersion`
    - `SearchAutoEnlargePolicy`
    - `ListCnInfosBeforeReduce`
    - `StartInstance`
    - `ShowUpgradeCandidateVersions`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK RDS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - Remove the APIs `ShowReplayDelayStatus`, `SwitchLogReplay`
  - **StartResizeFlavorAction**
    - changes of request param
      - `+ resize_flavor.is_delay`
  - **ListPostgresqlDatabases**
    - changes of request param
      - `+ db`

# 3.1.80 2024-04-03

### HuaweiCloud SDK CFW

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListFlowLogs**
    - changes of request param
      - `+ src_region_name`
      - `+ dst_region_name`
    - changes of response param
      - `+ data.records.dst_region_id`
      - `+ data.records.dst_region_name`
      - `+ data.records.src_region_id`
      - `+ data.records.src_region_name`
  - **ListAccessControlLogs**
    - changes of request param
      - `+ src_region_name`
      - `+ dst_region_name`
  - **ListAddressSets**
    - changes of request param
      - `+ address_set_type`
  - **ListAttackLogs**
    - changes of request param
      - `+ attack_rule_id`
      - `+ src_region_name`
      - `+ dst_region_name`
  - **UpdateAclRuleOrder**
    - changes of request param
      - `+ bottom`
  - **ListServiceSetDetail**
    - changes of request param
      - `+ query_service_set_type`
  - **AddAclRule**
    - changes of request param
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
    - changes of request param
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
    - changes of request param
      - `+ application`
    - changes of response param
      - `+ data.records.sequence.bottom`
      - `+ data.records.source.address_set_type`
      - `+ data.records.source.predefined_group`
      - `+ data.records.source.address_group_names.protocols`
      - `+ data.records.source.address_group_names.service_set_type`
      - `+ data.records.service.protocols`
      - `+ data.records.service.predefined_group`
      - `+ data.records.service.service_set_type`
  - **ListServiceItems**
    - changes of request param
      - `+ query_service_set_type`
  - **ListAddressItems**
    - changes of request param
      - `+ query_address_set_type`
  - **ListServiceSets**
    - changes of request param
      - `+ query_service_set_type`
  - **ListDomainSets**
    - changes of response param
      - `+ data.records.rules`
  - **ListFirewallDetail**
    - changes of request param
      - `+ name`
    - changes of response param
      - `+ data.records.tags`
      - `+ data.records.flavor.default_bandwidth`
      - `+ data.records.flavor.default_eip_count`
      - `+ data.records.flavor.default_log_storage`
      - `+ data.records.flavor.default_vpc_count`
  - **ListFirewallList**
    - changes of response param
      - `+ data.records.tags`
      - `+ data.records.flavor.default_bandwidth`
      - `+ data.records.flavor.default_eip_count`
      - `+ data.records.flavor.default_log_storage`
      - `+ data.records.flavor.default_vpc_count`

### HuaweiCloud SDK ECS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - Remove the APIs `ShowServerAutoRecovery`, `RegisterServerAutoRecovery`
  - **ResizePostPaidServer**
    - changes of request param
      - `+ resize.cpu_options`
  - **ShowServer**
    - changes of response param
      - `+ server.cpu_options.hw:cpu_threads: enum value [1,2]`
  - **ListServersDetails**
    - changes of response param
      - `+ servers.cpu_options.hw:cpu_threads: enum value [1,2]`
  - **ChangeServerOsWithCloudInit**
    - changes of request param
      - `+ os-change.isAutoPay`
  - **ChangeServerOsWithoutCloudInit**
    - changes of request param
      - `+ os-change.isAutoPay`
  - **ResizeServer**
    - changes of request param
      - `+ resize.cpu_options`
  - **CreateServers**
    - changes of request param
      - `+ server.cpu_options`
  - **CreatePostPaidServers**
    - changes of request param
      - `+ server.cpu_options`

### HuaweiCloud SDK EIP

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListTenantVpcIgws**
    - changes of request param
      - `+ offset`
      - `+ marker`
  - **ListProjectGeipBindings**
    - changes of request param
      - `+ offset`
      - `+ marker`
    - changes of response param
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

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **CountGlobalEips**
    - changes of response param
      - `+ global_eip`
      - `- global_eips`
      - `- page_info`
  - **BatchCreateGlobalEip**
    - changes of response param
      - `+ global_eips`
      - `- global_eip`
  - **CountGlobalEipSegment**
    - changes of response param
      - `+ global_eip_segment`
      - `- global_eip_segments`

### HuaweiCloud SDK KMS

- _Features_
  - Support the APIs `GenerateMac`, `VerifyMac`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK RDS

- _Features_
  - Support the APIs `ShowReplayDelayStatus`, `SwitchLogReplay`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK VPC

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListSubNetworkInterfaces**
    - changes of response param
      - `+ sub_network_interfaces.security_enabled`
  - **CreateSubNetworkInterface**
    - changes of response param
      - `+ sub_network_interface.security_enabled`
  - **BatchCreateSubNetworkInterface**
    - changes of response param
      - `+ sub_network_interfaces.security_enabled`
  - **ShowSubNetworkInterface**
    - changes of response param
      - `+ sub_network_interface.security_enabled`
  - **UpdateSubNetworkInterface**
    - changes of response param
      - `+ sub_network_interface.security_enabled`
  - **MigrateSubNetworkInterface**
    - changes of response param
      - `+ sub_network_interfaces.security_enabled`

# 3.1.79 2024-03-28

### HuaweiCloud SDK CBR

- _Features_
  - Support the following APIs:
    - `ListOrganizationPolicies`
    - `CreateOrganizationPolicy`
    - `ShowOrganizationPolicy`
    - `UpdateOrganizationPolicy`
    - `DeleteOrganizationPolicy`
    - `ListOrganizationPolicyDetail`
- _Bug Fix_
  - None
- _Change_
  - **ShowBackup**
    - changes of response param
      - `+ backup.incremental`
      - `- backup.extend_info.incremental`
  - **UpdateBackup**
    - changes of response param
      - `+ backup.incremental`
      - `- backup.extend_info.incremental`
  - **ListBackups**
    - changes of response param
      - `+ backups.incremental`
      - `- backups.extend_info.incremental`
  - **ListVault**
    - changes of response param
      - `- sys_lock_source_service`
  - **CreateVault**
    - changes of request param
      - `+ vault.sys_lock_source_service`
  - **ListExternalVault**
    - changes of response param
      - `- sys_lock_source_service`

### HuaweiCloud SDK CFW

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListFlowLogs**
    - changes of response param
      - `* data.records.bytes: int32 -> double`

### HuaweiCloud SDK CTS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **UpdateTracker**
    - changes of request param
      - `+ agency_name`
  - **CreateTracker**
    - changes of request param
      - `+ agency_name`
    - changes of response param
      - `+ agency_name`
  - **ListTrackers**
    - changes of response param
      - `+ trackers.agency_name`
  - **UpdateNotification**
    - changes of request param
      - `+ agency_name`
    - changes of response param
      - `+ agency_name`
  - **CreateNotification**
    - changes of request param
      - `+ agency_name`
    - changes of response param
      - `+ agency_name`
  - **ListNotifications**
    - changes of response param
      - `+ notifications.agency_name`

### HuaweiCloud SDK OCR

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **RecognizeMvsInvoice**
    - changes of response param
      - `+ result.reverse_issue`
  - **RecognizeThailandLicensePlate**
    - changes of response param
      - `+ result.province`

### HuaweiCloud SDK RDS

- _Features_
  - Support the API `BatchStopInstance`
- _Bug Fix_
  - None
- _Change_
  - None

# 3.1.78 2024-03-21

### HuaweiCloud SDK CDN

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ShowVerifyDomainOwnerInfo**
    - changes of response param
      - `+ file_verify_domains`

### HuaweiCloud SDK CodeArtsDeploy

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **CreateApp**
    - changes of request param
      - `+ group_id`

### HuaweiCloud SDK DRS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ShowPositionResult**
    - changes of response param
      - `+ status`

### HuaweiCloud SDK GEIP

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListSupportMasks**
    - changes of response param
      - `+ support_masks.ip_version: enum value [4,6]`
  - **ListGlobalEips**
    - changes of response param
      - `+ global_eips.ip_version: enum value [4,6]`
  - **DetachInternetBandwidth**
    - changes of response param
      - `+ global_eip.ip_version: enum value [4,6]`
  - **BatchCreateGlobalEip**
    - changes of response param
      - `+ global_eip.ip_version: enum value [4,6]`
  - **ShowGlobalEip**
    - changes of response param
      - `+ global_eip.ip_version: enum value [4,6]`
  - **AttachInternetBandwidth**
    - changes of response param
      - `+ global_eip.ip_version: enum value [4,6]`
  - **ListGlobalEipSegments**
    - changes of response param
      - `+ global_eip_segments.ip_version: enum value [4,6]`
  - **ShowGlobalEipSegment**
    - changes of response param
      - `+ global_eip_segment.ip_version: enum value [4,6]`
  - **ListGeipPools**
    - changes of response param
      - `+ geip_pools.ip_version: enum value [4,6]`

### HuaweiCloud SDK Live

- _Features_
  - Support the following APIs:
    - `ListOttChannelInfo`
    - `CreateOttChannelInfo`
    - `DeleteOttChannelInfo`
    - `ModifyOttChannelInfoEndPoints`
    - `ModifyOttChannelInfoInput`
    - `ModifyOttChannelInfoRecordSettings`
    - `ModifyOttChannelInfoGeneral`
    - `ModifyOttChannelInfoStats`
    - `ModifyOttChannelInfoEncoderSettings`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK OCR

- _Features_
  - Support the API `RecognizeHouseholdRegister`
- _Bug Fix_
  - None
- _Change_
  - **RecognizeSmartDocumentRecognizer**
    - changes of request param
      - `+ form`
      - `+ kv_map`
    - changes of response param
      - `+ result.form_result`
      - `+ result.layout_result.layout_block_list.table_id`
      - `+ result.layout_result.layout_block_list.form_id`

### HuaweiCloud SDK RDS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ShowAutoEnlargePolicy**
    - changes of response param
      - `+ step_percent`
  - **SetAutoEnlargePolicy**
    - changes of request param
      - `+ step_percent`

# 3.1.77 2024-03-14

### HuaweiCloud SDK DRS

- _Features_
  - Support the API `ListAvailableNodeTypes`
- _Bug Fix_
  - None
- _Change_
  - **BatchSetPolicy**
    - changes of request param
      - `+ jobs.ddl_topic`
  - **BatchCreateJobs**
    - changes of request param
      - `+ jobs.public_ip_list`
  - **ShowJobList**
    - changes of response param
      - `+ jobs.children.job_direction: enum value [non-dbs]`
      - `- jobs.children.job_direction: enum value [no-dbs]`
  - **BatchListJobDetails**
    - changes of response param
      - `+ results.public_ip_list`
      - `+ results.bind_public_ip_state`
      - `+ results.children`
  - **ShowUpdateObjectSavingStatus**
    - changes of response param
      - `+ job_id`
  - **CollectDbObjectsAsync**
    - changes of response param
      - `+ job_id`
  - **ShowDataProcessingRulesResult**
    - changes of response param
      - `+ job_id`
  - **CollectDbObjectsInfo**
    - changes of response param
      - `+ job_id`
  - **CollectPositionAsync**
    - changes of response param
      - `+ job_id`
  - **CollectColumns**
    - changes of response param
      - `+ job_id`
  - **CreateJob**
    - changes of request param
      - `+ job.public_ip_list`
  - **BatchCreateJobsAsync**
    - changes of request param
      - `+ jobs.public_ip_list`
  - **UpdateDataProgress**
    - changes of response param
      - `+ job_id`
  - **CheckDataFilter**
    - changes of response param
      - `+ job_id`
  - **ListAsyncJobDetail**
    - changes of response param
      - `+ jobs.public_ip_list`
      - `+ jobs.bind_public_ip_state`
      - `+ jobs.children`
  - **ShowJobDetail**
    - changes of response param
      - `+ job.public_ip_list`
      - `+ job.bind_public_ip_state`
      - `+ job.children`
  - **ExecuteJobAction**
    - changes of request param
      - `+ job.action_name: enum value [bind_eip,unbind_eip]`
      - `+ job.action_params.public_ip_config`
  - **BatchExecuteJobActions**
    - changes of request param
      - `+ jobs.action_name: enum value [bind_eip,unbind_eip]`
      - `+ jobs.action_params.public_ip_config`

### HuaweiCloud SDK RDS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ShowBinlogClearPolicy**
    - changes of response param
      - `+ binlog_clear_type`

# 3.1.76 2024-03-07

### HuaweiCloud SDK GaussDBforNoSQL

- _Features_
  - Support the API `UpdateDatabases`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK OCR

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **RecognizeIdCard**
    - changes of request param
      - `+ return_portrait_image`
      - `+ return_adjusted_image`
    - changes of response param
      - `+ result.portrait_image`
      - `+ result.adjusted_image`
      - `+ result.front.portrait_image`
      - `+ result.front.adjusted_image`
      - `+ result.back.adjusted_image`

### HuaweiCloud SDK RDS

- _Features_
  - Support the following APIs:
    - `ShowStorageUsedSpace`
    - `SwitchSqlLimit`
    - `UpdateSqlLimit`
    - `ListSqlLimit`
    - `CreateSqlLimit`
    - `DeleteSqlLimit`
- _Bug Fix_
  - None
- _Change_
  - **ListInstances**
    - changes of response param
      - `* instances.volume: object<Volume> -> object<VolumeForInstanceResponse>`
  - **CreateRestoreInstance**
    - changes of request param
      - `- replica_of_id`
      - `- unchangeable_param`

# 3.1.75 2024-02-29

### HuaweiCloud SDK CFW

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListAddressSets**
    - changes of request param
      - `+ query_address_set_type`
    - changes of response param
      - `+ data.records.object_id`
      - `+ data.records.address_set_type`
  - **UpdateAclRuleOrder**
    - changes of response param
      - `+ data.name`
  - **AddBlackWhiteList**
    - changes of response param
      - `+ data.name`
  - **UpdateBlackWhiteList**
    - changes of response param
      - `+ data.name`
  - **DeleteBlackWhiteList**
    - changes of response param
      - `+ data.name`
  - **ChangeIpsProtectMode**
    - changes of response param
      - `+ data.name`
  - **AddServiceSet**
    - changes of response param
      - `+ data.name`
  - **ListServiceSetDetail**
    - changes of response param
      - `+ data.service_set_type`
  - **UpdateServiceSet**
    - changes of response param
      - `+ data.name`
  - **DeleteServiceSet**
    - changes of response param
      - `+ data.name`
  - **DeleteServiceItem**
    - changes of response param
      - `+ data.name`
  - **CreateFirewall**
    - changes of request param
      - `- flavor.version: enum value [Platinum]`
    - changes of response param
      - `- data.flavor.version: enum value [Platinum]`
  - **ChangeEipStatus**
    - changes of response param
      - `+ data.id`
  - **DeleteAddressItem**
    - changes of response param
      - `+ data.name`
  - **AddAddressSet**
    - changes of response param
      - `+ data.name`
  - **ListAddressSetDetail**
    - changes of request param
      - `+ query_address_set_type`
    - changes of response param
      - `+ data.address_set_type`
  - **UpdateAddressSet**
    - changes of response param
      - `* data: object<IdObject> -> object<UpdateAddressSetResponseData>`
  - **DeleteAddressSet**
    - changes of response param
      - `+ data.name`
  - **CreateEastWestFirewall**
    - changes of response param
      - `+ data.name`
  - **ListEastWestFirewall**
    - changes of response param
      - `+ data.protect_infos.status`
  - **AddAclRule**
    - changes of response param
      - `+ data.rules.name`
  - **DeleteAclRule**
    - changes of response param
      - `+ data.name`
  - **UpdateAclRule**
    - changes of response param
      - `+ data.name`
  - **ListAclRules**
    - changes of response param
      - `+ data.records.created_date`
      - `+ data.records.last_open_time`
  - **AddServiceItems**
    - changes of response param
      - `+ data.items.name`
  - **AddAddressItem**
    - changes of response param
      - `+ data.items.name`
  - **ListServiceSets**
    - changes of response param
      - `+ data.records.service_set_type`
      - `+ data.records.project_id`
      - `+ data.records.protocols`
  - **ListProtectedVpcs**
    - changes of response param
      - `+ data.total_assets`
  - **ListFirewallDetail**
    - changes of response param
      - `+ data.records.is_available_obs`
      - `+ data.records.is_support_threat_tags`
  - **ListFirewallList**
    - changes of response param
      - `+ is_support_postpaid`
      - `+ is_support_buy_professional`
      - `+ has_ndr`
      - `+ is_support_basic_version`

### HuaweiCloud SDK KVS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - Remove the APIs `RenameKv`, `BatchGetKv`, `TransactWriteSkeyKv`

### HuaweiCloud SDK LTS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **CreateLogStream**
    - changes of request param
      - `+ log_stream_name_alias`
      - `+ enterprise_project_name`

# 3.1.74 2024-02-22

### HuaweiCloud SDK GaussDB

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ModifyGaussMySqlProxyRouteMode**
    - changes of request param
      - `+ new_node_auto_add_status`
      - `+ new_node_weight`

### HuaweiCloud SDK GaussDBforopenGauss

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListRecycleInstances**
    - changes of response param
      - `+ instances.engine_name`
      - `+ instances.volume_size`
      - `+ instances.enterprise_project_name`
      - `+ instances.backup_level`

### HuaweiCloud SDK IMS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListImages**
    - changes of response param
      - `+ images.__image_displayname`
  - **UpdateImage**
    - changes of response param
      - `+ __image_displayname`

### HuaweiCloud SDK OCR

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **RecognizeTrainTicket**
    - changes of response param
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

- _Features_
  - Support `GEIP`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK EIP

- _Features_
  - Support the following APIs:
    - `ListTenantVpcIgws`
    - `CreateTenantVpcIgw`
    - `ShowInternalVpcIgw`
    - `UpdateTenantVpcIgw`
    - `DeleteTenantVpcIgw`
    - `ListProjectGeipBindings`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK GaussDB

- _Features_
  - Support the API `UpdateNewNodeAutoAddSwitch`
- _Bug Fix_
  - None
- _Change_
  - **CreateGaussMySqlProxy**
    - changes of request param
      - `+ new_node_auto_add_status`
      - `+ new_node_weight`
  - **ShowGaussMySqlProxyList**
    - changes of response param
      - `+ proxy_list.proxy.new_node_auto_add_status`
      - `+ proxy_list.proxy.new_node_weight`

### HuaweiCloud SDK GaussDBforopenGauss

- _Features_
  - Support the API `StopBackup`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK RDS

- _Features_
  - Support the following APIs:
    - `UpdateDatabaseOwner`
    - `ExecutePrivilegeDatabaseUserRole`
    - `ExecuteRevokeDatabaseUserRole`
    - `ListDatabaseUserRole`
    - `UpdatePostgresqlExtension`
- _Bug Fix_
  - None
- _Change_
  - **ListPostgresqlExtension**
    - changes of response param
      - `+ extensions.version_update`

# 3.1.72 2024-02-01

### HuaweiCloud SDK CDN

- _Features_
  - Support the API `ShowLogs`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK GaussDB

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **CreateGaussMySqlInstance**
    - changes of request param
      - `+ tde_info`
  - **ShowGaussMySqlInstanceInfoUnifyStatus**
    - changes of response param
      - `+ instance.tde_info`
  - **ListGaussMySqlInstanceDetailInfoUnifyStatus**
    - changes of response param
      - `+ instances.tde_info`

### HuaweiCloud SDK RDS

- _Features_
  - Support the following APIs:
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
- _Bug Fix_
  - None
- _Change_
  - **SetAuditlogPolicy**
    - changes of request param
      - `+ audit_types`
  - **CreateDbUser**
    - changes of request param
      - `+ is_privilege`

# 3.1.71 2024-01-25

### HuaweiCloud SDK GaussDB

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **CreateGaussMySqlReadonlyNode**
    - changes of request param
      - `+ availability_zones`

### HuaweiCloud SDK OCR

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **RecognizeAutoClassification**
    - changes of request param
      - `+ detect_seal`
    - changes of response param
      - `+ result.seal_mark`
  - **RecognizeVatInvoice**
    - changes of response param
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

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListFlavors**
    - changes of request param
      - `+ is_serverless`
  - **ListInstances**
    - changes of response param
      - `+ instances.serverless_info`
  - **CreateInstance**
    - changes of request param
      - `+ serverless_info`
  - **CreateRestoreInstance**
    - changes of request param
      - `+ serverless_info`

### HuaweiCloud SDK VOD

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **CreateAssetByFileUpload**
    - changes of request param
      - `* category_id: string -> int32`
  - **CreateAssetProcessTask**
    - changes of request param
      - `+ hls_storage_type`
  - **ListTopStatistics**
    - changes of response param
      - `- top_urls.duration_ms`
  - **ListAssetList**
    - changes of response param
      - `- assets.duration_ms`
  - **ShowTakeOverAssetDetails**
    - changes of response param
      - `- base_info.meta_data.duration_ms`
  - **PublishAssets**
    - changes of response param
      - `- asset_info_array.base_info.meta_data.duration_ms`
  - **UnpublishAssets**
    - changes of response param
      - `- asset_info_array.base_info.meta_data.duration_ms`
  - **ShowAssetMeta**
    - changes of response param
      - `- asset_info_array.base_info.meta_data.duration_ms`
  - **ShowAssetDetail**
    - changes of response param
      - `- base_info.meta_data.duration_ms`
  - **ShowTakeOverTaskDetails**
    - changes of response param
      - `- assets.base_info.meta_data.duration_ms`

# 3.1.70 2024-01-18

### HuaweiCloud SDK CDN

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ShowTopUrl**
    - changes of request param
      - `+ service_area: enum value [global]`

### HuaweiCloud SDK CDN

- _Features_
  - Support the API `ListCdnDomainTopRefers`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK KVS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - Remove the API `TransactGetKv`

### HuaweiCloud SDK OCR

- _Features_
  - Support the API `RecognizeSeal`
- _Bug Fix_
  - None
- _Change_
  - **RecognizeFlightItinerary**
    - changes of response param
      - `+ result.tax`
      - `+ result.tax_rate`
      - `+ result.buyer_name`
      - `+ result.buyer_id`
      - `+ result.number`
      - `+ result.international_flag`
      - `+ result.issue_status`

### HuaweiCloud SDK RDS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ShowAuditlogPolicy**
    - changes of response param
      - `+ all_audit_log_action`
      - `+ audit_types`
  - **ListRecycleInstances**
    - changes of response param
      - `+ instances.is_serverless`

# 3.1.69 2024-01-11

### HuaweiCloud SDK DRS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **BatchValidateConnections**
    - changes of request param
      - `+ jobs.customized_dns`

### HuaweiCloud SDK DRS

- _Features_
  - Support the following APIs:
    - `BatchCreateTags`
    - `BatchDeleteTags`
    - `ListInstanceByTags`
    - `CountInstanceByTags`
    - `ListInstanceTags`
    - `ListTags`
    - `UpdateJobConfigurations`
    - `ListJobParameters`
    - `ListJobHistoryParameters`
- _Bug Fix_
  - None
- _Change_
  - **ListLinks**
    - changes of response param
      - `+ job_links.engine_type: enum value [redis-to-gaussredis,rediscluster-to-gaussredis]`
  - **ListJobs**
    - changes of request param
      - `+ engine_type: enum value [redis-to-gaussredis,rediscluster-to-gaussredis]`
    - changes of response param
      - `+ jobs.engine_type: enum value [redis-to-gaussredis,rediscluster-to-gaussredis]`
      - `+ jobs.children.engine_type: enum value [redis-to-gaussredis,rediscluster-to-gaussredis]`
  - **CreateJob**
    - changes of request param
      - `+ job.base_info.engine_type: enum value [redis-to-gaussredis,rediscluster-to-gaussredis]`
      - `+ job.source_endpoint.customized_dns`
      - `+ job.source_endpoint.db_type: enum value [redis,rediscluster,gaussredis]`
      - `+ job.source_endpoint.endpoint.endpoint_name: enum value [redis,ecs_redis,rediscluster,ecs_rediscluster,cloud_gaussdb_redis]`
      - `+ job.source_endpoint.config.node_num`
  - **BatchCreateJobsAsync**
    - changes of request param
      - `+ jobs.base_info.engine_type: enum value [redis-to-gaussredis,rediscluster-to-gaussredis]`
      - `+ jobs.source_endpoint.customized_dns`
      - `+ jobs.source_endpoint.db_type: enum value [redis,rediscluster,gaussredis]`
      - `+ jobs.source_endpoint.endpoint.endpoint_name: enum value [redis,ecs_redis,rediscluster,ecs_rediscluster,cloud_gaussdb_redis]`
      - `+ jobs.source_endpoint.config.node_num`
  - **ListAsyncJobDetail**
    - changes of response param
      - `+ jobs.base_info.engine_type: enum value [redis-to-gaussredis,rediscluster-to-gaussredis]`
      - `+ jobs.source_endpoint.customized_dns`
      - `+ jobs.source_endpoint.db_type: enum value [redis,rediscluster,gaussredis]`
      - `+ jobs.source_endpoint.endpoint.endpoint_name: enum value [redis,ecs_redis,rediscluster,ecs_rediscluster,cloud_gaussdb_redis]`
      - `+ jobs.source_endpoint.config.node_num`
  - **UpdateBatchAsyncJobs**
    - changes of request param
      - `+ jobs.params.base_info.engine_type: enum value [redis-to-gaussredis,rediscluster-to-gaussredis]`
      - `+ jobs.params.source_endpoint.customized_dns`
      - `+ jobs.params.source_endpoint.db_type: enum value [redis,rediscluster,gaussredis]`
      - `+ jobs.params.source_endpoint.endpoint.endpoint_name: enum value [redis,ecs_redis,rediscluster,ecs_rediscluster,cloud_gaussdb_redis]`
      - `+ jobs.params.source_endpoint.config.node_num`
  - **ShowJobDetail**
    - changes of response param
      - `+ job.base_info.engine_type: enum value [redis-to-gaussredis,rediscluster-to-gaussredis]`
      - `+ job.source_endpoint.customized_dns`
      - `+ job.source_endpoint.db_type: enum value [redis,rediscluster,gaussredis]`
      - `+ job.source_endpoint.endpoint.endpoint_name: enum value [redis,ecs_redis,rediscluster,ecs_rediscluster,cloud_gaussdb_redis]`
      - `+ job.source_endpoint.config.node_num`
  - **UpdateJob**
    - changes of request param
      - `+ job.params.base_info.engine_type: enum value [redis-to-gaussredis,rediscluster-to-gaussredis]`
      - `+ job.params.source_endpoint.customized_dns`
      - `+ job.params.source_endpoint.db_type: enum value [redis,rediscluster,gaussredis]`
      - `+ job.params.source_endpoint.endpoint.endpoint_name: enum value [redis,ecs_redis,rediscluster,ecs_rediscluster,cloud_gaussdb_redis]`
      - `+ job.params.source_endpoint.config.node_num`
  - **ExecuteJobAction**
    - changes of request param
      - `+ job.action_name: enum value [column_limit,reload_parameters]`
      - `+ job.action_params.endpoints.customized_dns`
      - `+ job.action_params.endpoints.db_type: enum value [redis,rediscluster,gaussredis]`
      - `+ job.action_params.endpoints.endpoint.endpoint_name: enum value [redis,ecs_redis,rediscluster,ecs_rediscluster,cloud_gaussdb_redis]`
      - `+ job.action_params.endpoints.config.node_num`
  - **BatchExecuteJobActions**
    - changes of request param
      - `+ jobs.action_name: enum value [column_limit,reload_parameters]`
      - `+ jobs.action_params.endpoints.customized_dns`
      - `+ jobs.action_params.endpoints.db_type: enum value [redis,rediscluster,gaussredis]`
      - `+ jobs.action_params.endpoints.endpoint.endpoint_name: enum value [redis,ecs_redis,rediscluster,ecs_rediscluster,cloud_gaussdb_redis]`
      - `+ jobs.action_params.endpoints.config.node_num`

### HuaweiCloud SDK ECS

- _Features_
  - Support the API `NovaShowServerInterface`
- _Bug Fix_
  - None
- _Change_
  - **UpdateServer**
    - changes of response param
      - `+ server.OS-EXT-SRV-ATTR:user_data`

### HuaweiCloud SDK KVS

- _Features_
  - Support the APIs `ListStore`, `TransactWriteSkeyKv`, `TransactGetKv`
- _Bug Fix_
  - None
- _Change_
  - **CreateTable**
    - changes of request param
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
    - changes of response param
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
    - changes of request param
      - `+ table_name`
      - `- TableName`
    - changes of response param
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
    - changes of request param
      - `+ cursor_name`
      - `+ limit`
      - `- CursorName`
      - `- LimitNum`
    - changes of response param
      - `+ table_names`
      - `+ cursor_name`
      - `- CursorName`
      - `- TableNameList`
  - **PutKv**
    - changes of request param
      - `+ table_name`
      - `+ condition_expression`
      - `+ kv_doc`
      - `+ kv_blob`
      - `- TableName`
      - `- ConditionExpression`
      - `- KvDoc`
      - `- KvBlob`
  - **GetKv**
    - changes of request param
      - `+ table_name`
      - `+ primary_key`
      - `+ projection_fields`
      - `+ projection_blob`
      - `- TableName`
      - `- Consistency`
      - `- PrimaryKey`
      - `- ProjectionFields`
      - `- ReturnPartialBlob`
    - changes of response param
      - `+ kv_doc`
      - `+ kv_blob_data`
      - `- KvDoc`
      - `- KvBlobData`
  - **UpdateKv**
    - changes of request param
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
    - changes of response param
      - `+ kv_doc`
      - `+ kv_blob_data`
      - `- KvFields`
      - `- KvBlobData`
  - **DeleteKv**
    - changes of request param
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
    - changes of response param
      - `+ kv_doc`
      - `+ kv_blob_data`
      - `- KvDoc`
      - `- KvBlobData`
  - **ScanKv**
    - changes of request param
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
    - changes of response param
      - `+ returned_count`
      - `+ returned_kv_items`
      - `+ cursor_key`
      - `+ filtered_count`
      - `- KvArray`
      - `- ReturnedCount`
      - `- CursorKey`
      - `- FilteredCount`
  - **ScanSkeyKv**
    - changes of request param
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
    - changes of response param
      - `+ returned_count`
      - `+ returned_kv_items`
      - `+ cursor_sort_key`
      - `+ filtered_count`
      - `- CursorSortKey`
      - `- KvArray`
      - `- ReturnedCount`
      - `- FilteredCount`
  - **BatchWriteKv**
    - changes of request param
      - `+ table_opers`
      - `- TableOpers`
    - changes of response param
      - `+ unprocessed_opers`
      - `- UnprocessedOpers`
  - **RenameKv**
    - changes of request param
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
    - changes of response param
      - `+ old_primary_key`
      - `+ kv_blob_attr`
      - `- KvBlobAttr`
      - `- KvDoc`
      - `- OldPrimaryKey`
  - **BatchGetKv**
    - changes of request param
      - `+ batch_get_kv_opers`
      - `- TableOpers`
    - changes of response param
      - `+ returned_kv_items_of_all`
      - `+ exception_opers`
      - `- Exceptions`
      - `- TableKvArray`

### HuaweiCloud SDK MPC

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListTranscodingTask**
    - changes of response param
      - `+ task_array.progress`
  - **ListTranscodeDetail**
    - changes of response param
      - `+ task_array.progress`

### HuaweiCloud SDK OCR

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **RecognizeIdCard**
    - changes of request param
      - `+ detect_tampering`
      - `+ detect_border_integrity`
      - `+ detect_blocking_within_border`
      - `+ detect_blur`
      - `+ detect_interim`
      - `+ detect_glare`
    - changes of response param
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

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListInstances**
    - changes of request param
      - `+ eps_id`
  - **BatchRestoreDatabase**
    - changes of request param
      - `+ instances.is_fast_restore`

### HuaweiCloud SDK VPC

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ShowAddressGroup**
    - changes of response param
      - `+ address_group.ip_extra_set`
  - **UpdateAddressGroup**
    - changes of request param
      - `+ address_group.ip_extra_set`
    - changes of response param
      - `+ address_group.ip_extra_set`
  - **ListAddressGroup**
    - changes of response param
      - `+ address_groups.ip_extra_set`
  - **CreateAddressGroup**
    - changes of request param
      - `+ address_group.ip_extra_set`
    - changes of response param
      - `+ address_group.ip_extra_set`

# 3.1.68 2024-01-04

### HuaweiCloud SDK MPC

- _Features_
  - Support the APIs `ShowTenantAccessInfo`, `UpdateTenantAccessInfo`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK RDS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **SetOffSiteBackupPolicy**
    - changes of request param
      - `* policy_para: list<OffSiteBackupPolicy> -> object<OffSiteBackupPolicy>`

### HuaweiCloud SDK SMN

- _Features_
  - Support the following APIs:
    - `PublishHttpDetect`
    - `ShowHttpDetectResult`
    - `BatchUpdateSubscriptionsFilterPolices`
    - `BatchCreateSubscriptionsFilterPolices`
    - `BatchDeleteSubscriptionsFilterPolices`
    - `AddSubscriptionFromSubscriptionUser`
- _Bug Fix_
  - None
- _Change_
  - Deprecate the following APIs:
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
    - changes of request param
      - `+ message_attributes`
  - **ListTopics**
    - changes of request param
      - `+ fuzzy_display_name`
  - **ListSubscriptions**
    - changes of request param
      - `+ fuzzy_remark`
    - changes of response param
      - `+ subscriptions.filter_polices`
  - **ListSubscriptionsByTopic**
    - changes of request param
      - `+ fuzzy_remark`
    - changes of response param
      - `+ subscriptions.filter_polices`

### HuaweiCloud SDK VPC

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListPorts**
    - changes of response param
      - `+ ports.ipv6_bandwidth_id`
  - **CreatePort**
    - changes of response param
      - `+ port.ipv6_bandwidth_id`
  - **ShowPort**
    - changes of response param
      - `+ port.ipv6_bandwidth_id`
  - **UpdatePort**
    - changes of response param
      - `+ port.ipv6_bandwidth_id`

