# 3.1.168 2025-12-25

### HuaweiCloud SDK CCE

- _API Version_
  - V3
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ShowCluster**
    - changes of response param
      - `+ spec.hostNetwork.autoGenerateSecurityGroupHardeningConfig`
      - `+ spec.containerNetwork.enableContainerCIDRsReservation`
  - **UpdateCluster**
    - changes of request param
      - `+ spec.containerNetwork.containercidrs`
    - changes of response param
      - `+ spec.hostNetwork.autoGenerateSecurityGroupHardeningConfig`
      - `+ spec.containerNetwork.enableContainerCIDRsReservation`
  - **DeleteCluster**
    - changes of response param
      - `+ spec.hostNetwork.autoGenerateSecurityGroupHardeningConfig`
      - `+ spec.containerNetwork.enableContainerCIDRsReservation`
  - **CreateCluster**
    - changes of request param
      - `+ spec.hostNetwork.autoGenerateSecurityGroupHardeningConfig`
      - `+ spec.containerNetwork.enableContainerCIDRsReservation`
    - changes of response param
      - `+ spec.hostNetwork.autoGenerateSecurityGroupHardeningConfig`
      - `+ spec.containerNetwork.enableContainerCIDRsReservation`
  - **ListClusters**
    - changes of response param
      - `+ items.spec.hostNetwork.autoGenerateSecurityGroupHardeningConfig`
      - `+ items.spec.containerNetwork.enableContainerCIDRsReservation`
  - **ShowNode**
    - changes of response param
      - `+ spec.extendParam.containerBaseSize`
      - `+ spec.extendParam.kubeReservedCpu`
      - `+ spec.extendParam.systemReservedCpu`
      - `+ spec.extendParam.kubeReservedPid`
      - `+ spec.extendParam.systemReservedPid`
      - `+ spec.extendParam.kubeReservedStorage`
      - `+ spec.extendParam.systemReservedStorage`
  - **UpdateNode**
    - changes of response param
      - `+ spec.extendParam.containerBaseSize`
      - `+ spec.extendParam.kubeReservedCpu`
      - `+ spec.extendParam.systemReservedCpu`
      - `+ spec.extendParam.kubeReservedPid`
      - `+ spec.extendParam.systemReservedPid`
      - `+ spec.extendParam.kubeReservedStorage`
      - `+ spec.extendParam.systemReservedStorage`
  - **DeleteNode**
    - changes of response param
      - `+ spec.extendParam.containerBaseSize`
      - `+ spec.extendParam.kubeReservedCpu`
      - `+ spec.extendParam.systemReservedCpu`
      - `+ spec.extendParam.kubeReservedPid`
      - `+ spec.extendParam.systemReservedPid`
      - `+ spec.extendParam.kubeReservedStorage`
      - `+ spec.extendParam.systemReservedStorage`
  - **CreateNode**
    - changes of request param
      - `+ spec.extendParam.containerBaseSize`
      - `+ spec.extendParam.kubeReservedCpu`
      - `+ spec.extendParam.systemReservedCpu`
      - `+ spec.extendParam.kubeReservedPid`
      - `+ spec.extendParam.systemReservedPid`
      - `+ spec.extendParam.kubeReservedStorage`
      - `+ spec.extendParam.systemReservedStorage`
    - changes of response param
      - `+ spec.extendParam.containerBaseSize`
      - `+ spec.extendParam.kubeReservedCpu`
      - `+ spec.extendParam.systemReservedCpu`
      - `+ spec.extendParam.kubeReservedPid`
      - `+ spec.extendParam.systemReservedPid`
      - `+ spec.extendParam.kubeReservedStorage`
      - `+ spec.extendParam.systemReservedStorage`
  - **ListNodes**
    - changes of response param
      - `+ items.spec.extendParam.containerBaseSize`
      - `+ items.spec.extendParam.kubeReservedCpu`
      - `+ items.spec.extendParam.systemReservedCpu`
      - `+ items.spec.extendParam.kubeReservedPid`
      - `+ items.spec.extendParam.systemReservedPid`
      - `+ items.spec.extendParam.kubeReservedStorage`
      - `+ items.spec.extendParam.systemReservedStorage`
  - **ShowNodePool**
    - changes of response param
      - `+ spec.nodeTemplate.configurationsOverride`
      - `+ spec.nodeTemplate.extendParam.containerBaseSize`
      - `+ spec.nodeTemplate.extendParam.kubeReservedCpu`
      - `+ spec.nodeTemplate.extendParam.systemReservedCpu`
      - `+ spec.nodeTemplate.extendParam.kubeReservedPid`
      - `+ spec.nodeTemplate.extendParam.systemReservedPid`
      - `+ spec.nodeTemplate.extendParam.kubeReservedStorage`
      - `+ spec.nodeTemplate.extendParam.systemReservedStorage`
  - **UpdateNodePool**
    - changes of response param
      - `+ status.configurationSyncedNodeCount`
      - `+ spec.nodeTemplate.configurationsOverride`
      - `+ spec.nodeTemplate.extendParam.containerBaseSize`
      - `+ spec.nodeTemplate.extendParam.kubeReservedCpu`
      - `+ spec.nodeTemplate.extendParam.systemReservedCpu`
      - `+ spec.nodeTemplate.extendParam.kubeReservedPid`
      - `+ spec.nodeTemplate.extendParam.systemReservedPid`
      - `+ spec.nodeTemplate.extendParam.kubeReservedStorage`
      - `+ spec.nodeTemplate.extendParam.systemReservedStorage`
  - **DeleteNodePool**
    - changes of response param
      - `+ spec.nodeTemplate.configurationsOverride`
      - `+ spec.nodeTemplate.extendParam.containerBaseSize`
      - `+ spec.nodeTemplate.extendParam.kubeReservedCpu`
      - `+ spec.nodeTemplate.extendParam.systemReservedCpu`
      - `+ spec.nodeTemplate.extendParam.kubeReservedPid`
      - `+ spec.nodeTemplate.extendParam.systemReservedPid`
      - `+ spec.nodeTemplate.extendParam.kubeReservedStorage`
      - `+ spec.nodeTemplate.extendParam.systemReservedStorage`
  - **UpgradeNodePool**
    - changes of request param
      - `+ spec.nodeTemplate.configurationsOverride`
      - `+ spec.nodeTemplate.extendParam.containerBaseSize`
      - `+ spec.nodeTemplate.extendParam.kubeReservedCpu`
      - `+ spec.nodeTemplate.extendParam.systemReservedCpu`
      - `+ spec.nodeTemplate.extendParam.kubeReservedPid`
      - `+ spec.nodeTemplate.extendParam.systemReservedPid`
      - `+ spec.nodeTemplate.extendParam.kubeReservedStorage`
      - `+ spec.nodeTemplate.extendParam.systemReservedStorage`
  - **CreateNodePool**
    - changes of request param
      - `+ spec.nodeTemplate.configurationsOverride`
      - `+ spec.nodeTemplate.extendParam.containerBaseSize`
      - `+ spec.nodeTemplate.extendParam.kubeReservedCpu`
      - `+ spec.nodeTemplate.extendParam.systemReservedCpu`
      - `+ spec.nodeTemplate.extendParam.kubeReservedPid`
      - `+ spec.nodeTemplate.extendParam.systemReservedPid`
      - `+ spec.nodeTemplate.extendParam.kubeReservedStorage`
      - `+ spec.nodeTemplate.extendParam.systemReservedStorage`
    - changes of response param
      - `+ status.configurationSyncedNodeCount`
      - `+ spec.nodeTemplate.configurationsOverride`
      - `+ spec.nodeTemplate.extendParam.containerBaseSize`
      - `+ spec.nodeTemplate.extendParam.kubeReservedCpu`
      - `+ spec.nodeTemplate.extendParam.systemReservedCpu`
      - `+ spec.nodeTemplate.extendParam.kubeReservedPid`
      - `+ spec.nodeTemplate.extendParam.systemReservedPid`
      - `+ spec.nodeTemplate.extendParam.kubeReservedStorage`
      - `+ spec.nodeTemplate.extendParam.systemReservedStorage`
  - **ListNodePools**
    - changes of response param
      - `+ items.spec.nodeTemplate.configurationsOverride`
      - `+ items.spec.nodeTemplate.extendParam.containerBaseSize`
      - `+ items.spec.nodeTemplate.extendParam.kubeReservedCpu`
      - `+ items.spec.nodeTemplate.extendParam.systemReservedCpu`
      - `+ items.spec.nodeTemplate.extendParam.kubeReservedPid`
      - `+ items.spec.nodeTemplate.extendParam.systemReservedPid`
      - `+ items.spec.nodeTemplate.extendParam.kubeReservedStorage`
      - `+ items.spec.nodeTemplate.extendParam.systemReservedStorage`
  - **ListHyperNodes**
    - changes of response param
      - `+ hyperNodeList.spec.nodeTemplate.extendParam.containerBaseSize`
      - `+ hyperNodeList.spec.nodeTemplate.extendParam.kubeReservedCpu`
      - `+ hyperNodeList.spec.nodeTemplate.extendParam.systemReservedCpu`
      - `+ hyperNodeList.spec.nodeTemplate.extendParam.kubeReservedPid`
      - `+ hyperNodeList.spec.nodeTemplate.extendParam.systemReservedPid`
      - `+ hyperNodeList.spec.nodeTemplate.extendParam.kubeReservedStorage`
      - `+ hyperNodeList.spec.nodeTemplate.extendParam.systemReservedStorage`

### HuaweiCloud SDK CodeArtsArtifact

- _API Version_
  - V2
- _Features_
  - Support the following APIs:
    - `ShowPackageDataDetail`
    - `ShowPackageInfo`
    - `ShowAutoDeleteJobSettings`
    - `DeleteCompletelyUpdateFileState`
    - `ListFileBuildArchives`
    - `ListMavenList`
    - `ListProjectUsers`
    - `ListChildProxyRepositoriesList`
    - `ListNetProxy`
    - `ListDomainIpConfig`
    - `ListSecGuardList`
    - `ShowOpenSourceEnabled`
    - `ShowRepoUserInfo`
    - `ListMavenUser`
    - `ShowUserTicket`
    - `ListProjectRolePermissions`
    - `ShowMultiRolesUserPermissions`
    - `ListCapacityMessageSetting`
    - `ListFiles`
    - `ShowLatestVersionFilesCount`
    - `ListLatestVersionFiles`
    - `ShowFileDetail`
    - `ShowFileDetailByFullName`
    - `ShowDomainReleaseRepoStorage`
    - `ShowProjectStorageInfo`
- _Bug Fix_
  - None
- _Change_
  - **BatchDeleteTrashes**
    - changes of request param
      - `+ format`
      - `- fomat`
  - **SearchArtifacts**
    - changes of request param
      - `* in_project: string -> boolean`
  - **UpdateArtifactory**
    - changes of request param
      - `+ project_id`

### HuaweiCloud SDK CodeArtsRepo

- _API Version_
  - V4
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListTenantRepositories**
    - changes of response param
      - `+ status: enum value [0,3,4,5,7]`
  - **BatchUpdateRepositoryFilePushPermissions**
    - changes of request param
      - `* permissions.actions.user_ids: list<null> -> list<integer>`
  - **CreateFilePushPermission**
    - changes of request param
      - `* actions.user_ids: list<null> -> list<integer>`
  - **BatchUpdateProtectedBranches**
    - changes of request param
      - `* actions.user_ids: list<null> -> list<integer>`
  - **BatchCreateProtectedBranch**
    - changes of request param
      - `* actions.user_ids: list<null> -> list<integer>`
  - **UpdateProtectedBranch**
    - changes of request param
      - `* user_ids: list<null> -> list<integer>`
  - **BatchUpdateProtectedTags**
    - changes of request param
      - `* actions.user_ids: list<null> -> list<integer>`
  - **BatchCreateProtectedTags**
    - changes of request param
      - `* actions.user_ids: list<null> -> list<integer>`
  - **UpdateProtectedTag**
    - changes of request param
      - `* user_ids: list<null> -> list<integer>`

### HuaweiCloud SDK DDS

- _API Version_
  - V3
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **CreateConfiguration**
    - changes of request param
      - `+ entity_id`
  - **ShowConfigurationAppliedHistory**
    - changes of response param
      - `+ total_count`
  - **ListBackups**
    - changes of request param
      - `+ order_field`
      - `+ order_rule`
      - `+ backup_status`
      - `+ backup_name`
      - `+ backup_description`
      - `+ instance_name`
    - changes of response param
      - `+ backups.instance_status`
      - `+ backups.instance_mode`
      - `+ backups.is_instance_restoring`
      - `+ backups.backup_method`
      - `+ backups.kms_enable`
      - `+ backups.deletable`

### HuaweiCloud SDK GaussDBforNoSQL

- _API Version_
  - V3
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ShowModifyHistory**
    - changes of request param
      - `* offset: string -> int32`
      - `* limit: string -> int32`
    - changes of response param
      - `* histories.applied: string -> boolean`

### HuaweiCloud SDK IMS

- _API Version_
  - V2
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListImageMembers**
    - changes of request param
      - `+ limit`
      - `+ marker`
    - changes of response param
      - `+ page_info`
  - **GlanceListImageMembers**
    - changes of request param
      - `+ limit`
      - `+ marker`
    - changes of response param
      - `+ page_info`

### HuaweiCloud SDK Live

- _API Version_
  - V2
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListSingleStreamBitrate**
    - changes of request param
      - `+ type`
  - **ListHistoryStreams**
    - changes of request param
      - `* domain: string -> list<string>`

### HuaweiCloud SDK MetaStudio

- _API Version_
  - V1
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ShowAsyncTtsJob**
    - changes of response param
      - `+ code`
      - `+ message`
  - **ShowPacifyWordsSwitch**
    - changes of request param
      - `+ language: enum value [fr]`
  - **ShowPacifyWordsTriggerTime**
    - changes of request param
      - `+ language: enum value [fr]`
  - **ShowWelcomeSpeechSwitch**
    - changes of request param
      - `+ language: enum value [fr]`
  - **ShowTtsAuditionFile**
    - changes of response param
      - `+ code`
  - **ListSmartChatJob**
    - changes of response param
      - `+ smart_chat_jobs.default_language: enum value [fr]`
      - `+ smart_chat_jobs.voice_config_list.language: enum value [fr]`
  - **StartSmartChatJob**
    - changes of response param
      - `+ default_language: enum value [fr]`
      - `+ voice_config_list.language: enum value [fr]`
  - **ShowSmartChatJob**
    - changes of response param
      - `+ default_language: enum value [fr]`
      - `+ voice_config_list.language: enum value [fr]`
  - **ListHotWords**
    - changes of request param
      - `+ language: enum value [fr]`
  - **ListPacifyWords**
    - changes of request param
      - `+ language: enum value [fr]`
  - **ListWelcomeSpeech**
    - changes of request param
      - `+ language: enum value [fr]`
  - **CreateDigitalHumanBusinessCard**
    - changes of request param
      - `+ card_image_config.id_card_image1`
      - `+ card_image_config.id_card_image2`
      - `+ card_image_config.authorize_use_human_image`
  - **UpdateDigitalHumanBusinessCard**
    - changes of request param
      - `+ card_image_config.id_card_image1`
      - `+ card_image_config.id_card_image2`
      - `+ card_image_config.authorize_use_human_image`
  - **CreatePhotoDigitalHumanVideo**
    - changes of request param
      - `+ id_card_image1`
      - `+ id_card_image2`
      - `+ authorize_use_human_image`

# 3.1.167 2025-12-18

### HuaweiCloud SDK CodeArtsDeploy

- _API Version_
  - V2
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListEnvironments**
    - changes of response param
      - `+ result.project_id`
  - **ShowEnvironmentDetail**
    - changes of response param
      - `+ result.project_id`

### HuaweiCloud SDK DDS

- _API Version_
  - V3
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **RestartInstance**
    - changes of request param
      - `+ is_serial`
      - `+ is_force`
  - **ListAuditlogs**
    - changes of response param
      - `+ total_size`

### HuaweiCloud SDK GaussDB

- _API Version_
  - V3
- _Features_
  - Support the following APIs:
    - `ShowHistoricalSqlFilterRule`
    - `SetAutoSqlLimiting`
    - `ShowSqlAutoSqlLimiting`
    - `ShowAutoSqlLimitingLog`
    - `BatchDeleteBackup`
- _Bug Fix_
  - None
- _Change_
  - **ShowProxyVersion**
    - changes of response param
      - `+ risk`
  - **SwitchGaussMySqlConfiguration**
    - changes of response param
      - `+ param_group_name`
  - **ShowInstanceMonitorExtend**
    - changes of response param
      - `+ allow`
  - **ListRecycleInstances**
    - changes of response param
      - `* total_count: string -> int32`
      - `+ instances.recycle_bakcups`
      - `* instances.create_at: int32 -> int64`
      - `* instances.deleted_at: int32 -> int64`
  - **ListScheduleJobs**
    - changes of request param
      - `+ instance_id`
    - changes of response param
      - `+ schedules.proxy_id`
      - `+ schedules.proxy_name`
  - **ShowBackupRestoreTime**
    - changes of request param
      - `+ date`
      - `+ start_time`
      - `+ end_time`
  - **ShowGaussMySqlIncrementalBackupList**
    - changes of request param
      - `+ display_offsite_backup`
    - changes of response param
      - `+ backups.backup_type`
  - **ShowGaussMySqlProxyFlavors**
    - changes of request param
      - `+ query_type`
      - `+ proxy_id`
  - **ShowGaussMySqlProxyList**
    - changes of response param
      - `+ proxy_list.htap_nodes`
      - `+ proxy_list.proxy.type`
      - `+ proxy_list.proxy.created_at`
      - `+ proxy_list.proxy.updated_at`
      - `+ proxy_list.proxy.support_ap_node`

### HuaweiCloud SDK GaussDBforNoSQL

- _API Version_
  - V3
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **CreateConfiguration**
    - changes of request param
      - `+ instance_id`
  - **ShowApplyHistory**
    - changes of response param
      - `+ total_count`

### HuaweiCloud SDK GaussDBforopenGauss

- _API Version_
  - V3
- _Features_
  - Support the API `BatchDeleteInstanceTag`
- _Bug Fix_
  - None
- _Change_
  - **ShowDeploymentForm**
    - changes of request param
      - `+ consistency`
      - `+ consistency_protocol`
      - `+ engine_version`
    - changes of response param
      - `+ max_shard_count`
      - `+ each_shard_num`
      - `+ each_expand_nodes`
  - **ListRestorableInstancesDetails**
    - changes of request param
      - `+ backup_restore_type`
      - `+ source_backup_schema`
      - `+ target_instance_id`
      - `+ instance_name`

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
      - `+ image_layout`
      - `+ character_mode`
    - changes of response param
      - `+ result.ocr_result.words_block_list.char_list`
      - `+ result.layout_result.layout_block_list.formula_id`
      - `+ result.formula_result.formula_list.type`

### HuaweiCloud SDK RDS

- _API Version_
  - V3
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListSqlStatistics**
    - changes of response param
      - `+ list.canUse`
      - `- list.can_use`
      - `* list.query_id: int64 -> string`

### HuaweiCloud SDK VPC

- _API Version_
  - V3
- _Features_
  - Support the following APIs:
    - `ListVirsubnetCidrReservations`
    - `CreateVirsubnetCidrReservation`
    - `ShowVirsubnetCidrReservation`
    - `UpdateVirsubnetCidrReservation`
    - `DeleteVirsubnetCidrReservation`
- _Bug Fix_
  - None
- _Change_
  - **ListFirewall**
    - changes of response param
      - `+ firewalls.type`

# 3.1.166 2025-12-11

### HuaweiCloud SDK CodeArtsDeploy

- _API Version_
  - V2
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListEnvironments**
    - changes of response param
      - `+ result.project_id`
  - **ShowEnvironmentDetail**
    - changes of response param
      - `+ result.project_id`

### HuaweiCloud SDK DDS

- _API Version_
  - V3
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **RestartInstance**
    - changes of request param
      - `+ is_serial`
      - `+ is_force`
  - **ListAuditlogs**
    - changes of response param
      - `+ total_size`

### HuaweiCloud SDK GaussDB

- _API Version_
  - V3
- _Features_
  - Support the following APIs:
    - `ShowHistoricalSqlFilterRule`
    - `SetAutoSqlLimiting`
    - `ShowSqlAutoSqlLimiting`
    - `ShowAutoSqlLimitingLog`
    - `BatchDeleteBackup`
- _Bug Fix_
  - None
- _Change_
  - **ShowProxyVersion**
    - changes of response param
      - `+ risk`
  - **SwitchGaussMySqlConfiguration**
    - changes of response param
      - `+ param_group_name`
  - **ShowInstanceMonitorExtend**
    - changes of response param
      - `+ allow`
  - **ListRecycleInstances**
    - changes of response param
      - `* total_count: string -> int32`
      - `+ instances.recycle_bakcups`
      - `* instances.create_at: int32 -> int64`
      - `* instances.deleted_at: int32 -> int64`
  - **ListScheduleJobs**
    - changes of request param
      - `+ instance_id`
    - changes of response param
      - `+ schedules.proxy_id`
      - `+ schedules.proxy_name`
  - **ShowBackupRestoreTime**
    - changes of request param
      - `+ date`
      - `+ start_time`
      - `+ end_time`
  - **ShowGaussMySqlIncrementalBackupList**
    - changes of request param
      - `+ display_offsite_backup`
    - changes of response param
      - `+ backups.backup_type`
  - **ShowGaussMySqlProxyFlavors**
    - changes of request param
      - `+ query_type`
      - `+ proxy_id`
  - **ShowGaussMySqlProxyList**
    - changes of response param
      - `+ proxy_list.htap_nodes`
      - `+ proxy_list.proxy.type`
      - `+ proxy_list.proxy.created_at`
      - `+ proxy_list.proxy.updated_at`
      - `+ proxy_list.proxy.support_ap_node`

### HuaweiCloud SDK GaussDBforNoSQL

- _API Version_
  - V3
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **CreateConfiguration**
    - changes of request param
      - `+ instance_id`
  - **ShowApplyHistory**
    - changes of response param
      - `+ total_count`

### HuaweiCloud SDK GaussDBforopenGauss

- _API Version_
  - V3
- _Features_
  - Support the API `BatchDeleteInstanceTag`
- _Bug Fix_
  - None
- _Change_
  - **ShowDeploymentForm**
    - changes of request param
      - `+ consistency`
      - `+ consistency_protocol`
      - `+ engine_version`
    - changes of response param
      - `+ max_shard_count`
      - `+ each_shard_num`
      - `+ each_expand_nodes`
  - **ListRestorableInstancesDetails**
    - changes of request param
      - `+ backup_restore_type`
      - `+ source_backup_schema`
      - `+ target_instance_id`
      - `+ instance_name`

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
      - `+ image_layout`
      - `+ character_mode`
    - changes of response param
      - `+ result.ocr_result.words_block_list.char_list`
      - `+ result.layout_result.layout_block_list.formula_id`
      - `+ result.formula_result.formula_list.type`

### HuaweiCloud SDK RDS

- _API Version_
  - V3
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListSqlStatistics**
    - changes of response param
      - `+ list.canUse`
      - `- list.can_use`
      - `* list.query_id: int64 -> string`

### HuaweiCloud SDK VPC

- _API Version_
  - V3
- _Features_
  - Support the following APIs:
    - `ListVirsubnetCidrReservations`
    - `CreateVirsubnetCidrReservation`
    - `ShowVirsubnetCidrReservation`
    - `UpdateVirsubnetCidrReservation`
    - `DeleteVirsubnetCidrReservation`
- _Bug Fix_
  - None
- _Change_
  - **ListFirewall**
    - changes of response param
      - `+ firewalls.type`

# 3.1.165 2025-12-04

### HuaweiCloud SDK AAD

- _API Version_
  - V1
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **UpdateLtsConfig**
    - changes of request param
      - `* enterprise_project_id: optional -> required`

### HuaweiCloud SDK DDS

- _API Version_
  - V3
- _Features_
  - Support the APIs `RestoreNewInstance`, `ListInstances`
- _Bug Fix_
  - None
- _Change_
  - **CreateInstance**
    - changes of request param
      - `+ datastore`
      - `+ region`
      - `+ port`
      - `+ mode`
      - `+ tags`
      - `- restore_point`
      - `+ flavor.storage`
      - `* flavor: list<RestoreNewInstanceFlavorOption> -> list<CreateInstanceFlavorOption>`
      - `* body: object<RestoreNewInstanceRequestBody> -> object<CreateInstanceRequestBody>`
    - changes of response param
      - `+ tags`
      - `+ port`
      - `+ flavor.storage`
      - `* flavor: list<RestoreNewInstanceFlavorOption> -> list<CreateInstanceFlavorOption>`

### HuaweiCloud SDK GaussDB

- _API Version_
  - V3
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **RestartStarrocksInstance**
    - changes of response param
      - `+ workflow_id`
      - `- job_id`
  - **RestartStarrocksNode**
    - changes of response param
      - `+ workflow_id`
      - `- job_id`
  - **DeleteStarrocksInstance**
    - changes of response param
      - `+ workflow_id`
      - `- job_id`

### HuaweiCloud SDK Live

- _API Version_
  - V2
- _Features_
  - Support the API `ListCarouselTaskDetail`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK LTS

- _API Version_
  - V2
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListLogs**
    - changes of request param
      - `+ scroll_id`
  - **ListLogContext**
    - changes of request param
      - `+ scroll_id`

### HuaweiCloud SDK MetaStudio

- _API Version_
  - V1
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - Remove the following APIs:
    - `ListVideoMotionCaptureJobs`
    - `CreateVideoMotionCaptureJob`
    - `ShowVideoMotionCaptureJob`
    - `StopVideoMotionCaptureJob`
    - `ExecuteVideoMotionCaptureCommand`
  - **ShowLlmConfig**
    - changes of response param
      - `+ model`
  - **UpdateLlmConfig**
    - changes of request param
      - `+ model`
  - **CreateLlmConfig**
    - changes of request param
      - `+ model`
  - **ListLlmConfig**
    - changes of response param
      - `+ model`
      - `+ data.model`

### HuaweiCloud SDK RDS

- _API Version_
  - V3
- _Features_
  - Support the following APIs:
    - `BatchDeleteInstance`
    - `ShowIntelligentKillSessionStatistic`
    - `ListPackLogInfos`
    - `CompareConfiguration`
    - `ResetConfiguration`
    - `ShowAutoCesAlarm`
    - `ListScheduleEvents`
    - `BatchExecuteEvents`
    - `ShowRebuildSlaveStatus`
    - `CreateRebuildSlave`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK SMN

- _API Version_
  - V2
- _Features_
  - Support the following APIs:
    - `ShowKmsKey`
    - `CreateKmsKey`
    - `UpdateKmsKey`
    - `DeleteKmsKey`
    - `ListTopicsWithAssociatedResources`
    - `SubscribeTopic`
    - `UnsubscribeTopic`
    - `ListCloudServices`
    - `DownloadHttpSignCert`
- _Bug Fix_
  - None
- _Change_
  - **ListTopics**
    - changes of response param
      - `+ topics.create_time`
      - `+ topics.update_time`
  - **ListTopicAttributes**
    - changes of response param
      - `+ attributes.create_time`
      - `+ attributes.update_time`

### HuaweiCloud SDK VOD

- _API Version_
  - V1
- _Features_
  - Support the API `ListCdnStatistics`
- _Bug Fix_
  - None
- _Change_
  - None

# 3.1.164 2025-11-27

### HuaweiCloud SDK CCE

- _API Version_
  - V3
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **CreateKubernetesClusterCert**
    - changes of request param
      - `* expire_at: date -> string`

### HuaweiCloud SDK CDN

- _API Version_
  - V2
- _Features_
  - Support the following APIs:
    - `ListExportTasks`
    - `CreateExportTask`
    - `ShowSpecialUser`
    - `ExportStatsOpen`
    - `ListCdnDomainTopPath`
    - `ShowDomainCountryStat`
    - `CreateAccessControlTask`
    - `ListAccessControlTask`
    - `ListBanUrl`
    - `ListDomainConfigs`
    - `ListSpecialConfiguration`
    - `CreateDomainByDuplicate`
- _Bug Fix_
  - None
- _Change_
  - **ShowStatsConfigs**
    - changes of request param
      - `+ limit`
      - `+ offset`

### HuaweiCloud SDK Cloudtest

- _API Version_
  - V1
- _Features_
  - Support the API `BatchUpdateTestCasesInDiffVersion`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK DDS

- _API Version_
  - V3
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - Remove the APIs `RestoreNewInstance`, `ListInstances`
  - **ShowBackupDownloadLink**
    - changes of request param
      - `- X-Language`
    - changes of response param
      - `+ group_id`
      - `+ group_name`
  - **RestoreNewInstance**
    - changes of request param
      - `+ restore_point`
      - `- datastore`
      - `- region`
      - `- port`
      - `- mode`
      - `- tags`
      - `- flavor.storage`
      - `* flavor: list<CreateInstanceFlavorOption> -> list<RestoreNewInstanceFlavorOption>`
      - `* body: object<CreateInstanceRequestBody> -> object<RestoreNewInstanceRequestBody>`
    - changes of response param
      - `- tags`
      - `- port`
      - `- flavor.storage`
      - `* flavor: list<CreateInstanceFlavorOption> -> list<RestoreNewInstanceFlavorOption>`
  - **ShowInstanceConfigurationModifyHistory**
    - changes of response param
      - `+ total_count`

### HuaweiCloud SDK EVS

- _API Version_
  - V2
- _Features_
  - Support the following APIs:
    - `ListVolumesInRecycle`
    - `ShowVolumeInRecycle`
    - `DeleteVolumeInRecycle`
    - `RevertVolumeInRecycle`
    - `ShowRecyclePolicy`
    - `UpdateRecyclePolicy`
- _Bug Fix_
  - None
- _Change_
  - **UpdateVolume**
    - changes of response param
      - `- metadata.full_clone`
  - **ListVolumesByTags**
    - changes of response param
      - `- resources.resource_detail.metadata.full_clone`

### HuaweiCloud SDK GA

- _API Version_
  - V1
- _Features_
  - Support the API `ListByoipPools`
- _Bug Fix_
  - None
- _Change_
  - **ListEndpoints**
    - changes of response param
      - `+ endpoints.resource_type: enum value [ECS,ELB,CUSTOM_IP,CUSTOM_DOMAIN_NAME,CUSTOM_EIP]`
  - **CreateEndpoint**
    - changes of request param
      - `+ endpoint.resource_type: enum value [ECS,ELB,CUSTOM_IP,CUSTOM_DOMAIN_NAME,CUSTOM_EIP]`
    - changes of response param
      - `+ endpoint.resource_type: enum value [ECS,ELB,CUSTOM_IP,CUSTOM_DOMAIN_NAME,CUSTOM_EIP]`
  - **ShowEndpoint**
    - changes of response param
      - `+ endpoint.resource_type: enum value [ECS,ELB,CUSTOM_IP,CUSTOM_DOMAIN_NAME,CUSTOM_EIP]`
  - **UpdateEndpoint**
    - changes of response param
      - `+ endpoint.resource_type: enum value [ECS,ELB,CUSTOM_IP,CUSTOM_DOMAIN_NAME,CUSTOM_EIP]`
  - **ListHealthChecks**
    - changes of response param
      - `+ health_checks.protocol: enum value [UDP]`
  - **CreateHealthCheck**
    - changes of request param
      - `+ health_check.protocol: enum value [UDP]`
    - changes of response param
      - `+ health_check.protocol: enum value [UDP]`
  - **ShowHealthCheck**
    - changes of response param
      - `+ health_check.protocol: enum value [UDP]`
  - **UpdateHealthCheck**
    - changes of request param
      - `+ health_check.protocol: enum value [UDP]`
    - changes of response param
      - `+ health_check.protocol: enum value [UDP]`
  - **ListAccelerators**
    - changes of response param
      - `+ accelerators.ip_sets.ip_type: enum value [IPV6]`
  - **CreateAccelerator**
    - changes of response param
      - `+ accelerator.ip_sets.ip_type: enum value [IPV6]`
  - **ShowAccelerator**
    - changes of response param
      - `+ accelerator.ip_sets.ip_type: enum value [IPV6]`
  - **UpdateAccelerator**
    - changes of response param
      - `+ accelerator.ip_sets.ip_type: enum value [IPV6]`

### HuaweiCloud SDK GaussDBforNoSQL

- _API Version_
  - V3
- _Features_
  - Support the API `ListSslCertDownloadAddresses`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK GaussDBforopenGauss

- _API Version_
  - V3
- _Features_
  - Support the API `SwitchLogCollectionStatus`
- _Bug Fix_
  - None
- _Change_
  - **ShowErrorLogSwitchStatus**
    - changes of request param
      - `+ X-Language: enum value [zh-cn,en-us]`

### HuaweiCloud SDK IoTDA

- _API Version_
  - V5
- _Features_
  - Support the following APIs:
    - `ListExportTasks`
    - `CreateExportTask`
    - `DeleteExportTask`
    - `ShowExportTask`
    - `ShowCertificate`
- _Bug Fix_
  - None
- _Change_
  - **ShowRuleAction**
    - changes of response param
      - `+ channel_detail.mqtt_device_forwarding`
  - **UpdateRuleAction**
    - changes of request param
      - `+ channel_detail.mqtt_device_forwarding`
    - changes of response param
      - `+ channel_detail.mqtt_device_forwarding`
  - **CreateRuleAction**
    - changes of request param
      - `+ channel_detail.mqtt_device_forwarding`
    - changes of response param
      - `+ channel_detail.mqtt_device_forwarding`
  - **ListRuleActions**
    - changes of response param
      - `+ actions.channel_detail.mqtt_device_forwarding`

### HuaweiCloud SDK RDS

- _API Version_
  - V3
- _Features_
  - Support the following APIs:
    - `ListRemoteDb`
    - `ListReplicationErrors`
    - `UpdateStatistics`
    - `RestartDbAgentJob`
    - `ModifyDbAgentJob`
    - `SwitchDbAgentJob`
    - `CreateDistribution`
    - `BatchModifyPublication`
    - `CreatePublication`
- _Bug Fix_
  - None
- _Change_
  - **GetInstancesNoIndexTables**
    - changes of request param
      - `+ offset`
      - `+ limit`

# 3.1.163 2025-11-20

### HuaweiCloud SDK AAD

- _API Version_
  - V1
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListDomain**
    - changes of request param
      - `+ limit`
      - `+ offset`
  - **ListInstanceIpRule**
    - changes of request param
      - `+ limit`
      - `+ offset`

### HuaweiCloud SDK AAD

- _API Version_
  - V2
- _Features_
  - Support the following APIs:
    - `UpdateForwardRule`
    - `ShowDomainNameConfig`
    - `UpdateDomainConfig`
    - `ShowDomainDetail`
    - `ListGlobalConfig`
    - `ShowInstanceByInstanceId`
    - `ListSourceIp`
    - `ShowAlarmConfig`
    - `ShowDDoSPeak`
    - `ListDDoSBlackHoleEvent`
- _Bug Fix_
  - None
- _Change_
  - **ListInstanceDomains**
    - changes of request param
      - `+ limit`
      - `+ offset`
  - **ListWafQps**
    - changes of request param
      - `+ limit`
      - `+ offset`
  - **ListDDoSConnectionNumber**
    - changes of request param
      - `+ limit`
      - `+ offset`

### HuaweiCloud SDK CCE

- _API Version_
  - V3
- _Features_
  - Support the APIs `ListAddonPrecheckTasks`, `ListHyperNodes`
- _Bug Fix_
  - None
- _Change_
  - **CreateKubernetesClusterCert**
    - changes of request param
      - `+ expire_at`
      - `* body: object<CertDuration> -> object<ClusterCertDuration>`
  - **ShowCluster**
    - changes of response param
      - `+ spec.agencyName`
      - `+ spec.enableAutoResizing`
  - **UpdateCluster**
    - changes of request param
      - `+ spec.agencyName`
      - `+ spec.enableAutoResizing`
    - changes of response param
      - `+ spec.agencyName`
      - `+ spec.enableAutoResizing`
  - **DeleteCluster**
    - changes of response param
      - `+ spec.agencyName`
      - `+ spec.enableAutoResizing`
  - **ShowAutopilotCluster**
    - changes of response param
      - `+ spec.enableMasterVolumeEncryption`
      - `+ spec.enableDistMgt`
      - `+ spec.deletionProtection`
  - **UpdateAutopilotCluster**
    - changes of response param
      - `+ spec.enableMasterVolumeEncryption`
      - `+ spec.enableDistMgt`
      - `+ spec.deletionProtection`
  - **DeleteAutopilotCluster**
    - changes of response param
      - `+ spec.enableMasterVolumeEncryption`
      - `+ spec.enableDistMgt`
      - `+ spec.deletionProtection`
  - **CreateCluster**
    - changes of request param
      - `+ spec.agencyName`
      - `+ spec.enableAutoResizing`
    - changes of response param
      - `+ spec.agencyName`
      - `+ spec.enableAutoResizing`
  - **ListClusters**
    - changes of response param
      - `+ items.spec.agencyName`
      - `+ items.spec.enableAutoResizing`
  - **CreateAutopilotCluster**
    - changes of request param
      - `+ spec.enableMasterVolumeEncryption`
      - `+ spec.enableDistMgt`
      - `+ spec.deletionProtection`
    - changes of response param
      - `+ spec.enableMasterVolumeEncryption`
      - `+ spec.enableDistMgt`
      - `+ spec.deletionProtection`
  - **ListAutopilotClusters**
    - changes of response param
      - `+ items.spec.enableMasterVolumeEncryption`
      - `+ items.spec.enableDistMgt`
      - `+ items.spec.deletionProtection`
  - **ShowNode**
    - changes of response param
      - `+ metadata.ownerReference.hyperNodeName`
      - `+ metadata.ownerReference.hyperNodeID`
  - **UpdateNode**
    - changes of response param
      - `+ metadata.ownerReference.hyperNodeName`
      - `+ metadata.ownerReference.hyperNodeID`
  - **DeleteNode**
    - changes of response param
      - `+ metadata.ownerReference.hyperNodeName`
      - `+ metadata.ownerReference.hyperNodeID`
  - **CreateNode**
    - changes of request param
      - `+ metadata.ownerReference.hyperNodeName`
      - `+ metadata.ownerReference.hyperNodeID`
    - changes of response param
      - `+ metadata.ownerReference.hyperNodeName`
      - `+ metadata.ownerReference.hyperNodeID`
  - **ListNodes**
    - changes of response param
      - `+ items.metadata.ownerReference.hyperNodeName`
      - `+ items.metadata.ownerReference.hyperNodeID`

### HuaweiCloud SDK IoTDA

- _API Version_
  - V5
- _Features_
  - Support the following APIs:
    - `ListDomainConfigurations`
    - `CreateDomainConfiguration`
    - `ShowDomainConfiguration`
    - `UpdateDomainConfiguration`
    - `DeleteDomainConfiguration`
    - `ListServerCertificate`
    - `CreateServerCertificate`
    - `ShowServerCertificate`
    - `DeleteServerCertificate`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK Live

- _API Version_
  - V2
- _Features_
  - Support the API `ListTranscodeTaskDetail`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK LTS

- _API Version_
  - V2
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ShowNotificationTemplate**
    - changes of response param
      - `- locale: enum value [zh-cn,en-us]`
      - `+ templates.sendType`
      - `+ templates.version`
      - `- templates.sub_type: enum value [sms,dingding,wechat,webhook,email]`
      - `* templates: list<SubTemplate> -> list<SubTemplateResBody>`
  - **ListLogContext**
    - changes of request param
      - `+ backwards_size`
      - `+ forwards_size`
      - `- backwardsSize`
      - `- forwardsSize`
  - **UpdateNotificationTemplate**
    - changes of response param
      - `- locale: enum value [zh-cn,en-us]`
      - `+ templates.sendType`
      - `+ templates.version`
      - `- templates.sub_type: enum value [sms,dingding,wechat,webhook,email]`
      - `* templates: list<SubTemplate> -> list<SubTemplateResBody>`
  - **ListNotificationTemplates**
    - changes of response param
      - `- results.locale: enum value [zh-cn,en-us]`
      - `+ results.templates.sendType`
      - `+ results.templates.version`
      - `- results.templates.sub_type: enum value [sms,dingding,wechat,webhook,email]`
      - `* results.templates: list<SubTemplate> -> list<SubTemplateResBody>`

### HuaweiCloud SDK MetaStudio

- _API Version_
  - V1
- _Features_
  - Support the following APIs:
    - `ListTransferAssetJobs`
    - `TransferAsset`
    - `ShowTransferAssetJob`
    - `ExecuteTransferAssetAction`
    - `Download2dModelTraningEncryptFile`
    - `ShowTenantServiceConfigs`
    - `UpdateTenantServiceConfigs`
    - `ShowTenantAssginRecord`
    - `ShowTenantNoticeConfiguration`
    - `SetTenantNoticeConfiguration`
    - `ShowTenantUserConfiguration`
    - `SetTenantUserConfiguration`
    - `DeleteTenantUserConfiguration`
    - `BindUserAssetResource`
    - `ListUserQuotas`
    - `CreateUserQuotas`
    - `UpdateUserQuotas`
    - `DeleteUserQuotas`
    - `CreateTtsOnceCode`
    - `ShowSmartLiveUserConfig`
- _Bug Fix_
  - None
- _Change_
  - Remove the following APIs:
    - `ListTtsaJobs`
    - `CreateTtsa`
    - `CreateFacialAnimations`
    - `ListFacialAnimationsData`
    - `ListTtsaData`
  - **List2dModelTrainingJob**
    - changes of request param
      - `+ update_since`
      - `+ update_until`
      - `+ is_live_copy`
      - `+ train_location`
      - `+ is_ondemand_resource`
    - changes of response param
      - `+ jobs.is_live_copy`
      - `+ jobs.is_fast_flexus`
      - `+ jobs.optional_training_location`
      - `+ jobs.is_background_replacement`
      - `+ jobs.is_ondemand_resource`
      - `+ jobs.state: enum value [WAIT_TEST_VIDEO_CHECK,TEST_VIDEO_CHECK_PROCESSING,TEST_VIDEO_CHECK_SUCCESS,TEST_VIDEO_CHECK_FAILED,VIDEO_ANALYZE_PROCESSING,VIDEO_ANALYZE_SUCCESS,VIDEO_ANALYZE_FAILED,ACTION_MARKING,ACTION_MARK_SUCCESS,ACTION_MARK_FAILED,ACTION_MARK_UPLOADED,WAIT_GENERATE_ACTION_MARK,MANUL_STOP_ACTION_MARK]`
      - `+ jobs.model_version: enum value [V3.3]`
  - **Create2dModelTrainingJob**
    - changes of request param
      - `+ is_ondemand_resource`
      - `+ is_fast_flexus`
      - `+ is_live_copy`
      - `+ model_version: enum value [V3.3]`
  - **Execute2dModelTrainingCommandByUser**
    - changes of request param
      - `+ operation_reason`
      - `+ command: enum value [CONFIRM_AUTHORIZATION_LETTER,DELETE_JOB_VIDEO]`
    - changes of response param
      - `+ error_info`
  - **ShowLivePlatformAccessType**
    - changes of request param
      - `+ offset`
      - `+ limit`
  - **Update2dModelTrainingJob**
    - changes of request param
      - `+ is_fast_flexus`
      - `+ voice_properties`
  - **Show2dModelTrainingJob**
    - changes of response param
      - `+ external_action_json_data_download_url`
      - `+ is_fast_flexus`
      - `+ markable_action_video_download_url`
      - `+ voice_properties`
      - `+ train_video_rotation_state`
      - `+ action_video_rotation_state`
      - `+ is_ondemand_resource`
      - `+ sub_training_job_info`
      - `+ is_live_copy`
      - `+ action_mark_file_download_url`
      - `+ action_mark_file_upload_url`
      - `+ optional_training_location`
      - `+ state: enum value [WAIT_TEST_VIDEO_CHECK,TEST_VIDEO_CHECK_PROCESSING,TEST_VIDEO_CHECK_SUCCESS,TEST_VIDEO_CHECK_FAILED,VIDEO_ANALYZE_PROCESSING,VIDEO_ANALYZE_SUCCESS,VIDEO_ANALYZE_FAILED,ACTION_MARKING,ACTION_MARK_SUCCESS,ACTION_MARK_FAILED,ACTION_MARK_UPLOADED,WAIT_GENERATE_ACTION_MARK,MANUL_STOP_ACTION_MARK]`
      - `+ model_version: enum value [V3.3]`
      - `+ operation_logs.redo_reasons`
      - `+ operation_logs.log_type: enum value [ADMIN_UPDATE_TRAIN_LOCATION,ADMIN_UPDATE_JOB_PRIORITY,SYSTEM_WAIT_ASSET_SYNC,SYSTEM_ANALYSE_FILE_INFO,ADMIN_UPDATE_INFERENCE_DATA_CHAT_PROCESS_VIDEO,ADMIN_UPLOAD_JSON_DATA,ADMIN_DELETE_JSON_DATA,ADMIN_UPDATE_TRAIN_TIME,MAKE_TEST_VIDEO,ADMIN_SET_FLEXUS_RETRY_COUNT,USER_DELETE_JOB_VIDEO,ADMIN_SET_VIDEO_ROTATION_ANGLE,ADMIN_RE_SET_VIDEO_ROTATION_ANGLE,SYSTEM_SET_VIDEO_ROTATION_ANGLE_SUCCESS,SYSTEM_SET_VIDEO_ROTATION_ANGLE_FAILED,COMPILE_JOB_IS_CONSUME,RESTART_TEST_VIDEO_CHECK,SKIP_TEST_VIDEO_CHECK,WAIT_TEST_VIDEO_CHECK,TEST_VIDEO_CHECK_PROCESSING,TEST_VIDEO_CHECK_SUCCESS,TEST_VIDEO_CHECK_FAILED,REDO_INFERENCE_PREPROCESSING,REDO_TRAINING_PREPROCESSING,REDO_TRAINING,REDO_ACTION_DATA_GENERATE,REDO_ACTION_ORI_GENERATE,VIDEO_ANALYZE_PROCESSING,VIDEO_ANALYZE_SUCCESS,VIDEO_ANALYZE_FAILED,ADMIN_RESOLUTION_NORMALIZE,SYSTEM_SET_RESOLUTION_NORMALIZE_SUCCESS,SYSTEM_SET_RESOLUTION_NORMALIZE_FAILED,SYSTEM_ACTION_MARK_PREPROCESS_FAILED,SYSTEM_ACTION_MARK_PREPROCESSING,SYSTEM_ACTION_MARK_PREPROCESS_SUCCESS,REDO_ACTION_MARK,CONFIRM_ACTION_MARK,MANUL_STOP_ACTION_MARK,SYSTEM_INFERENCE_DATA_REASSEMBLE_WAITING,SYSTEM_INFERENCE_DATA_REASSEMBLE_PROCESSING,TIME_OUT_RETRY]`
      - `+ allocated_resource.charge_mode: enum value [ON_DEMAND]`

### HuaweiCloud SDK RDS

- _API Version_
  - V3
- _Features_
  - Support the following APIs:
    - `ListDbAgentJobHistorys`
    - `RefreshPublicationSnapshot`
    - `RefreshSubscription`
    - `SyncReplicationMetadata`
    - `ListDbAgentJobHistorySteps`
- _Bug Fix_
  - None
- _Change_
  - **StartInstanceReduceVolumeAction**
    - changes of request param
      - `+ reduce_volume.is_delay`
  - **CreateInstance**
    - changes of request param
      - `+ auto_enlarge_strategy`

# 3.1.162 2025-11-13

### HuaweiCloud SDK AAD

- _API Version_
  - V1
- _Features_
  - Support the APIs `ShowLtsConfig`, `UpdateLtsConfig`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK CodeArtsRepo

- _API Version_
  - V4
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListMergeRequestVersions**
    - changes of request param
      - `+ offset`
      - `+ limit`
  - **ListMergeRequestEvaluations**
    - changes of request param
      - `+ offset`
      - `+ limit`

### HuaweiCloud SDK ECS

- _API Version_
  - V2
- _Features_
  - Support the APIs `BatchAddServerGroupMember`, `BatchDeleteServerGroupMember`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK GaussDB

- _API Version_
  - V3
- _Features_
  - Support the APIs `DownloadImportExcelTemplate`, `UploadImportExcelTemplate`
- _Bug Fix_
  - None
- _Change_
  - **RestartStarrocksInstance**
    - changes of response param
      - `+ job_id`
      - `- workflow_id`
  - **RestartStarrocksNode**
    - changes of response param
      - `+ job_id`
      - `- workflow_id`
  - **ModifyStarRocksSecurityGroup**
    - changes of response param
      - `+ job_id`
      - `- workflow_id`
  - **ShowHtapLtsConfig**
    - changes of response param
      - `+ instance_lts_configs.instance.mode`
  - **DeleteStarrocksInstance**
    - changes of response param
      - `+ job_id`
      - `- workflow_id`
  - **ShowTaskDetails**
    - changes of response param
      - `+ sub_task_list.status`
  - **ShowProxyFlavorsByAzCode**
    - changes of response param
      - `+ proxy_flavor_groups.proxy_flavors.id`
  - **ShowSqlFilterRule**
    - changes of response param
      - `+ sql_filter_rules.patterns.cur_concurrency`
      - `+ sql_filter_rules.patterns.cur_reject`
      - `+ sql_filter_rules.patterns.create_at`
      - `+ sql_filter_rules.patterns.expire_at`
  - **SetSqlFilterRule**
    - changes of request param
      - `+ sql_filter_rules.rules.patterns.expire_at`

### HuaweiCloud SDK Live

- _API Version_
  - V1
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **CreateOttChannelInfo**
    - changes of request param
      - `+ mode`
      - `+ region`
  - **ListOttChannelInfo**
    - changes of response param
      - `+ channels.mode`
      - `+ channels.region`

### HuaweiCloud SDK LTS

- _API Version_
  - V2
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ShowNotificationTemplate**
    - changes of response param
      - `- templates.sendType`
      - `- templates.version`
  - **UpdateSqlAlarmRule**
    - changes of request param
      - `+ enterprise_project_id`
      - `+ sql_requests.custom_date`
      - `+ sql_requests.is_time_range_relative`
      - `- sql_requests.sql_request_title`
    - changes of response param
      - `+ recovery_policy`
      - `+ tags`
      - `+ trigger_condition_count`
      - `+ trigger_condition_frequency`
      - `+ whether_recovery_policy`
      - `- create_time`
      - `- topics`
      - `- language`
      - `- update_time`
      - `- indexId`
      - `- id`
      - `+ sql_requests.custom_date`
      - `+ sql_requests.is_time_range_relative`
      - `- sql_requests.search_time_range_unit: enum value [minute,hour]`
      - `* sql_requests: list<SqlRequest> -> list<SqlRequestResponse>`
  - **CreateSqlAlarmRule**
    - changes of request param
      - `+ enterprise_project_id`
      - `+ sql_requests.custom_date`
      - `+ sql_requests.is_time_range_relative`
      - `- sql_requests.sql_request_title`
  - **ListSqlAlarmRules**
    - changes of response param
      - `+ sql_alarm_rules.sql_requests.custom_date`
      - `+ sql_alarm_rules.sql_requests.is_time_range_relative`
      - `- sql_alarm_rules.sql_requests.search_time_range_unit: enum value [minute,hour]`
      - `* sql_alarm_rules.sql_requests: list<SqlRequest> -> list<SqlRequestResponse>`
  - **UpdateKeywordsAlarmRule**
    - changes of request param
      - `+ enterprise_project_id`
      - `+ keywords_requests.custom_date`
      - `+ keywords_requests.is_time_range_relative`
    - changes of response param
      - `+ keywords_requests.custom_date`
      - `+ keywords_requests.is_time_range_relative`
  - **CreateKeywordsAlarmRule**
    - changes of request param
      - `+ enterprise_project_id`
      - `+ keywords_requests.custom_date`
      - `+ keywords_requests.is_time_range_relative`
  - **ListKeywordsAlarmRules**
    - changes of response param
      - `+ keywords_alarm_rules.tags`
      - `- keywords_alarm_rules.keywords_alarm_send`
      - `- keywords_alarm_rules.topics`
      - `- keywords_alarm_rules.template_name`
      - `+ keywords_alarm_rules.keywords_requests.custom_date`
      - `+ keywords_alarm_rules.keywords_requests.is_time_range_relative`
      - `- keywords_alarm_rules.keywords_requests.condition: enum value [>=,<=,<,>]`
      - `- keywords_alarm_rules.keywords_requests.search_time_range_unit: enum value [minute]`
      - `* keywords_alarm_rules.keywords_requests: list<KeywordsRequest> -> list<KeywordsRequestResponse>`
  - **UpdateNotificationTemplate**
    - changes of request param
      - `- templates`
      - `- name`
      - `- source`
      - `- type`
      - `- locale`
      - `- desc`
      - `- templates.sendType`
      - `- templates.version`
      - `+ templates.sub_type: enum value [voice]`
      - `* templates: list<SubTemplate> -> list<UpdateSubTemplate>`
    - changes of response param
      - `- templates.sendType`
      - `- templates.version`
  - **CreateNotificationTemplate**
    - changes of request param
      - `- templates.sendType`
      - `- templates.version`
  - **ListNotificationTemplates**
    - changes of response param
      - `- results.templates.sendType`
      - `- results.templates.version`

### HuaweiCloud SDK MetaStudio

- _API Version_
  - V1
- _Features_
  - Support the following APIs:
    - `ShowUsageData`
    - `ShowSummaryUsageData`
    - `ShowAudioRecordConfig`
    - `UpdateAudioRecordConfig`
    - `CreateAudioRecordConfig`
    - `DeleteAudioRecordConfig`
    - `ShowLiveWarningInfo`
    - `ListInsertCommands`
    - `ListInteractionRuleGroupsSummary`
    - `CreateInteractionRule`
    - `UpdateInteractionRule`
    - `DeleteInteractionRule`
    - `ShowLivePlatformAccessType`
    - `UpdateSmartLiveUserConfig`
    - `ShowEncryptFile`
    - `CreateTrainingThirdPartyJob`
    - `ShowUserReviewAttachmentUploadingAddress`
    - `CreateShortJob`
    - `ShowShortJob`
    - `CommitShortJob`
    - `ShowVoiceTrainingQuotas`
    - `ShowInteractionRuleGroup`
- _Bug Fix_
  - None
- _Change_
  - **ListAssetSummary**
    - changes of response param
      - `+ asset_list.block_reason_code`
  - **ShowSubtitleFile**
    - changes of response param
      - `+ subtitle_file_info.error_info`
  - **CreateSmartChatRoom**
    - changes of request param
      - `+ enable_semantic_action`
  - **ShowSmartChatRoom**
    - changes of response param
      - `+ enable_semantic_action`
  - **UpdateSmartChatRoom**
    - changes of request param
      - `+ enable_semantic_action`
    - changes of response param
      - `+ enable_semantic_action`

### HuaweiCloud SDK RDS

- _API Version_
  - V3
- _Features_
  - Support the following APIs:
    - `CollectPublicationMonitor`
    - `CollectSubscriptionMonitor`
    - `ValidateInstanceConnection`
    - `ListReplicationProfiles`
    - `ListPublications4Subscription`
    - `ListDbAgentJobs`
    - `DeleteDistribution`
    - `ListSubscriptions`
    - `BatchModifySubscription`
    - `DeleteSubscription`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK VPC

- _API Version_
  - V2
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListVpcs**
    - changes of response param
      - `+ vpcs.block_service_endpoint_states`
      - `+ vpcs.enable_network_address_usage_metrics`
  - **CreateVpc**
    - changes of request param
      - `+ vpc.block_service_endpoint_states`
      - `+ vpc.enable_network_address_usage_metrics`
    - changes of response param
      - `+ vpc.block_service_endpoint_states`
      - `+ vpc.enable_network_address_usage_metrics`
  - **ShowVpc**
    - changes of response param
      - `+ vpc.block_service_endpoint_states`
      - `+ vpc.enable_network_address_usage_metrics`
  - **UpdateVpc**
    - changes of request param
      - `+ vpc.enable_network_address_usage_metrics`
    - changes of response param
      - `+ vpc.block_service_endpoint_states`
      - `+ vpc.enable_network_address_usage_metrics`
  - **ListSubnets**
    - changes of response param
      - `+ subnets.enable_network_address_usage_metrics`
      - `+ subnets.available_ip_address_count`
  - **CreateSubnet**
    - changes of request param
      - `+ subnet.enable_network_address_usage_metrics`
    - changes of response param
      - `+ subnet.enable_network_address_usage_metrics`
      - `+ subnet.available_ip_address_count`
  - **ShowSubnet**
    - changes of response param
      - `+ subnet.enable_network_address_usage_metrics`
      - `+ subnet.available_ip_address_count`
  - **UpdateSubnet**
    - changes of request param
      - `+ subnet.enable_network_address_usage_metrics`

### HuaweiCloud SDK VPC

- _API Version_
  - V3
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListVpcs**
    - changes of response param
      - `+ vpcs.block_service_endpoint_states`
      - `+ vpcs.enable_network_address_usage_metrics`
  - **CreateVpc**
    - changes of response param
      - `+ vpc.block_service_endpoint_states`
      - `+ vpc.enable_network_address_usage_metrics`
  - **ShowVpc**
    - changes of response param
      - `+ vpc.block_service_endpoint_states`
      - `+ vpc.enable_network_address_usage_metrics`
  - **UpdateVpc**
    - changes of response param
      - `+ vpc.block_service_endpoint_states`
      - `+ vpc.enable_network_address_usage_metrics`
  - **RemoveVpcExtendCidr**
    - changes of response param
      - `+ vpc.block_service_endpoint_states`
      - `+ vpc.enable_network_address_usage_metrics`
  - **AddVpcExtendCidr**
    - changes of response param
      - `+ vpc.block_service_endpoint_states`
      - `+ vpc.enable_network_address_usage_metrics`
  - **CreateFirewall**
    - changes of request param
      - `+ firewall.type`
    - changes of response param
      - `+ firewall.type`
  - **ShowFirewall**
    - changes of response param
      - `+ firewall.type`
  - **UpdateFirewall**
    - changes of request param
      - `+ dry_run`
    - changes of response param
      - `+ firewall.type`
  - **UpdateFirewallRules**
    - changes of request param
      - `+ dry_run`
    - changes of response param
      - `+ firewall.type`
  - **AddFirewallRules**
    - changes of request param
      - `+ dry_run`
    - changes of response param
      - `+ firewall.type`
  - **RemoveFirewallRules**
    - changes of request param
      - `+ dry_run`
    - changes of response param
      - `+ firewall.type`
  - **AssociateSubnetFirewall**
    - changes of request param
      - `+ dry_run`
    - changes of response param
      - `+ firewall.type`
  - **DisassociateSubnetFirewall**
    - changes of request param
      - `+ dry_run`
    - changes of response param
      - `+ firewall.type`
  - **ListTrafficMirrorFilters**
    - changes of response param
      - `+ traffic_mirror_filters.type`
  - **CreateTrafficMirrorFilter**
    - changes of response param
      - `+ traffic_mirror_filter.type`
  - **ShowTrafficMirrorFilter**
    - changes of response param
      - `+ traffic_mirror_filter.type`
  - **UpdateTrafficMirrorFilter**
    - changes of response param
      - `+ traffic_mirror_filter.type`
  - **AddSecurityGroups**
    - changes of request param
      - `+ dry_run`
    - changes of response param
      - `+ port.binding:vif_details.primary_interface`
      - `+ port.binding:vif_details.port_filter`
      - `+ port.binding:vif_details.ovs_hybrid_plug`
      - `* port.binding:vif_details: object -> object<BindingVifDetails>`
      - `* port.tags: list<string> -> list<ResourceTag>`
  - **RemoveSecurityGroups**
    - changes of request param
      - `+ dry_run`
    - changes of response param
      - `+ port.binding:vif_details.primary_interface`
      - `+ port.binding:vif_details.port_filter`
      - `+ port.binding:vif_details.ovs_hybrid_plug`
      - `* port.binding:vif_details: object -> object<BindingVifDetails>`
      - `* port.tags: list<string> -> list<ResourceTag>`

# 3.1.161 2025-11-06

### HuaweiCloud SDK LTS

- _API Version_
  - V2
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **UpdateStructConfig**
    - changes of request param
      - `- demo_fields`
      - `- tag_fields`
      - `- quick_analysis`
  - **CreateStructConfig**
    - changes of request param
      - `- demo_fields`
      - `- tag_fields`
      - `- quick_analysis`
  - **UpdateSqlAlarmRule**
    - changes of request param
      - `+ tags`
      - `- sql_alarm_send`
      - `- sql_alarm_send_code`
      - `- notification_save_rule`
  - **CreateSqlAlarmRule**
    - changes of request param
      - `+ tags`
      - `- sql_alarm_send`
      - `- notification_save_rule`
  - **UpdateKeywordsAlarmRule**
    - changes of request param
      - `+ tags`
      - `- keywords_alarm_send`
      - `- keywords_alarm_send_code`
      - `- notification_save_rule`
  - **CreateKeywordsAlarmRule**
    - changes of request param
      - `+ tags`
      - `- keywords_alarm_send`
      - `- notification_save_rule`
  - **UpdateTransfer**
    - changes of request param
      - `+ log_group_id`
      - `+ log_streams`
  - **ListLogStreamIndex**
    - changes of response param
      - `+ fields.fieldAnalysisAlias`
      - `+ fields.ltsSubFieldsInfoList.fieldAnalysisAlias`
      - `- fields.ltsSubFieldsInfoList.caseSensitive`
      - `- fields.ltsSubFieldsInfoList.includeChinese`
      - `- fields.ltsSubFieldsInfoList.tokenizer`
      - `- fields.ltsSubFieldsInfoList.ascii`
  - **CreateLogStreamIndex**
    - changes of request param
      - `+ fastAnalysisSampleCount`
      - `+ fields.fieldAnalysisAlias`
      - `+ fields.ltsSubFieldsInfoList.fieldAnalysisAlias`
      - `- fields.ltsSubFieldsInfoList.caseSensitive`
      - `- fields.ltsSubFieldsInfoList.includeChinese`
      - `- fields.ltsSubFieldsInfoList.tokenizer`
      - `- fields.ltsSubFieldsInfoList.ascii`
  - **CreateAccessConfig**
    - changes of request param
      - `+ recursive_depth`

### HuaweiCloud SDK OCR

- _API Version_
  - V1
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **RecognizeVehicleLicense**
    - changes of response param
      - `+ result.front.alarm_result`
      - `+ result.front.alarm_confidence`
      - `+ result.back.alarm_result`
      - `+ result.back.alarm_confidence`

### HuaweiCloud SDK RDS

- _API Version_
  - V3
- _Features_
  - Support the APIs `CreateIntelligentKillSession`, `ShowIntelligentKillSessionHistory`, `ListAutoScalingPolicy`
- _Bug Fix_
  - None
- _Change_
  - None

# 3.1.160 2025-10-30

### HuaweiCloud SDK CBR

- _API Version_
  - V1
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **CopyBackup**
    - changes of request param
      - `+ replicate.cross_account_urn`
  - **CopyCheckpoint**
    - changes of request param
      - `+ replicate.cross_account_urn`
  - **ListPolicies**
    - changes of response param
      - `+ policies.operation_definition.cross_account_urn`
  - **CreatePolicy**
    - changes of request param
      - `+ policy.operation_definition.cross_account_urn`
    - changes of response param
      - `+ policy.operation_definition.cross_account_urn`
  - **ShowPolicy**
    - changes of response param
      - `+ policy.operation_definition.cross_account_urn`
  - **UpdatePolicy**
    - changes of request param
      - `+ policy.operation_definition.cross_account_urn`
    - changes of response param
      - `+ policy.operation_definition.cross_account_urn`
  - **ListOrganizationPolicies**
    - changes of response param
      - `+ policies.policy_operation_definition.cross_account_urn`
  - **CreateOrganizationPolicy**
    - changes of request param
      - `+ policy.policy_operation_definition.cross_account_urn`
    - changes of response param
      - `+ policy.policy_operation_definition.cross_account_urn`
  - **ShowOrganizationPolicy**
    - changes of response param
      - `+ policy.policy_operation_definition.cross_account_urn`
  - **UpdateOrganizationPolicy**
    - changes of request param
      - `+ policy.policy_operation_definition.cross_account_urn`
    - changes of response param
      - `+ policy.policy_operation_definition.cross_account_urn`

### HuaweiCloud SDK DRS

- _API Version_
  - V3
- _Features_
  - Support the APIs `QueryTuningParams`, `SelectGroupAndStream`, `ModifyGroupAndStream`
- _Bug Fix_
  - None
- _Change_
  - **BatchStartJobs**
    - changes of request param
      - `+ jobs.is_only_init_task`
  - **UpdateTuningParams**
    - changes of response param
      - `+ full_sync.range`

### HuaweiCloud SDK GaussDB

- _API Version_
  - V3
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ModifyDataSync**
    - changes of request param
      - `+ is_instance_level_sync`
      - `+ database_repl_scope`
      - `+ is_support_reg_exp`
  - **BatchUpgradeDatabases**
    - changes of request param
      - `- is_skip_validate`

### HuaweiCloud SDK GaussDBforNoSQL

- _API Version_
  - V3
- _Features_
  - Support the APIs `ShowAutoNodeExpansionPolicy`, `ModifyAutoNodeExpansionPolicy`
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
  - **ListRealTimeSessions**
    - changes of response param
      - `+ sessions.client_port`
      - `+ sessions.query_id`
      - `+ sessions.transaction_time_cost`
      - `+ sessions.trace_id`
      - `+ sessions.global_session_id`
      - `+ sessions.top_transaction_id`
      - `+ sessions.current_transaction_id`
      - `+ sessions.xlog_quantity_pretty`
      - `+ sessions.wait_status`
      - `+ sessions.lwt_id`
      - `+ sessions.thread_name`
      - `+ sessions.lock_mode`
      - `+ sessions.parent_session_id`
      - `+ sessions.smp_id`
      - `+ sessions.lock_tag`
      - `+ sessions.component_name`

### HuaweiCloud SDK Live

- _API Version_
  - V1
- _Features_
  - Support the following APIs:
    - `ListWatermarkTemplate`
    - `CreateWatermarkTemplate`
    - `ShowWatermarkTemplate`
    - `UpdateWatermarkTemplate`
    - `DeleteWatermarkTemplate`
    - `ListWatermarkRule`
    - `CreateWatermarkRule`
    - `ShowWatermarkRule`
    - `UpdateWatermarkRule`
    - `DeleteWatermarkRule`
- _Bug Fix_
  - None
- _Change_
  - **ModifyOttChannelInfoEndPoints**
    - changes of request param
      - `+ endpoints.dash_package.enable_access`
      - `+ endpoints.dash_package.allow_all_ip_access`
      - `+ endpoints.dash_package.ip_whitelist`
      - `+ endpoints.dash_package.cdn_identifier_header`
      - `+ endpoints.dash_package.origin_domain_master`
      - `+ endpoints.dash_package.origin_domain_slave`
      - `+ endpoints.dash_package.manifest_name`
      - `+ endpoints.dash_package.slave_url`
      - `+ endpoints.mss_package.enable_access`
      - `+ endpoints.mss_package.allow_all_ip_access`
      - `+ endpoints.mss_package.ip_whitelist`
      - `+ endpoints.mss_package.cdn_identifier_header`
      - `+ endpoints.mss_package.origin_domain_master`
      - `+ endpoints.mss_package.origin_domain_slave`
      - `+ endpoints.mss_package.manifest_name`
      - `+ endpoints.mss_package.slave_url`
      - `+ endpoints.hls_package.enable_access`
      - `+ endpoints.hls_package.allow_all_ip_access`
      - `+ endpoints.hls_package.ip_whitelist`
      - `+ endpoints.hls_package.cdn_identifier_header`
      - `+ endpoints.hls_package.origin_domain_master`
      - `+ endpoints.hls_package.origin_domain_slave`
      - `+ endpoints.hls_package.manifest_name`
      - `+ endpoints.hls_package.slave_url`
  - **CreateOttChannelInfo**
    - changes of request param
      - `+ endpoints.dash_package.enable_access`
      - `+ endpoints.dash_package.allow_all_ip_access`
      - `+ endpoints.dash_package.ip_whitelist`
      - `+ endpoints.dash_package.cdn_identifier_header`
      - `+ endpoints.dash_package.origin_domain_master`
      - `+ endpoints.dash_package.origin_domain_slave`
      - `+ endpoints.dash_package.manifest_name`
      - `+ endpoints.dash_package.slave_url`
      - `+ endpoints.mss_package.enable_access`
      - `+ endpoints.mss_package.allow_all_ip_access`
      - `+ endpoints.mss_package.ip_whitelist`
      - `+ endpoints.mss_package.cdn_identifier_header`
      - `+ endpoints.mss_package.origin_domain_master`
      - `+ endpoints.mss_package.origin_domain_slave`
      - `+ endpoints.mss_package.manifest_name`
      - `+ endpoints.mss_package.slave_url`
      - `+ endpoints.hls_package.enable_access`
      - `+ endpoints.hls_package.allow_all_ip_access`
      - `+ endpoints.hls_package.ip_whitelist`
      - `+ endpoints.hls_package.cdn_identifier_header`
      - `+ endpoints.hls_package.origin_domain_master`
      - `+ endpoints.hls_package.origin_domain_slave`
      - `+ endpoints.hls_package.manifest_name`
      - `+ endpoints.hls_package.slave_url`
  - **ListOttChannelInfo**
    - changes of response param
      - `+ channels.endpoints.dash_package.enable_access`
      - `+ channels.endpoints.dash_package.allow_all_ip_access`
      - `+ channels.endpoints.dash_package.ip_whitelist`
      - `+ channels.endpoints.dash_package.cdn_identifier_header`
      - `+ channels.endpoints.dash_package.origin_domain_master`
      - `+ channels.endpoints.dash_package.origin_domain_slave`
      - `+ channels.endpoints.dash_package.manifest_name`
      - `+ channels.endpoints.dash_package.slave_url`
      - `+ channels.endpoints.mss_package.enable_access`
      - `+ channels.endpoints.mss_package.allow_all_ip_access`
      - `+ channels.endpoints.mss_package.ip_whitelist`
      - `+ channels.endpoints.mss_package.cdn_identifier_header`
      - `+ channels.endpoints.mss_package.origin_domain_master`
      - `+ channels.endpoints.mss_package.origin_domain_slave`
      - `+ channels.endpoints.mss_package.manifest_name`
      - `+ channels.endpoints.mss_package.slave_url`
      - `+ channels.endpoints.hls_package.enable_access`
      - `+ channels.endpoints.hls_package.allow_all_ip_access`
      - `+ channels.endpoints.hls_package.ip_whitelist`
      - `+ channels.endpoints.hls_package.cdn_identifier_header`
      - `+ channels.endpoints.hls_package.origin_domain_master`
      - `+ channels.endpoints.hls_package.origin_domain_slave`
      - `+ channels.endpoints.hls_package.manifest_name`
      - `+ channels.endpoints.hls_package.slave_url`

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
      - `+ log_streams.is_favorite`
  - **CreateDashBoard**
    - changes of response param
      - `+ concise_mode_enable`
      - `+ tags`
  - **ShowStructTemplate**
    - changes of response param
      - `+ uploadParseFailedLog`
      - `+ uploadOriginalLog`
      - `+ custom_time_info`
  - **ShowNotificationTemplate**
    - changes of response param
      - `+ templates.sendType`
      - `+ templates.version`
  - **ListTopnTrafficStatistics**
    - changes of response param
      - `+ results.log_group_name_alias`
      - `+ results.log_stream_name_alias`
  - **ListSqlAlarmRules**
    - changes of response param
      - `+ sql_alarm_rules.tags`
      - `- sql_alarm_rules.sql_alarm_send`
      - `- sql_alarm_rules.sql_requests.is_time_range_relative`
  - **UpdateSqlAlarmRule**
    - changes of request param
      - `- sql_requests.is_time_range_relative`
    - changes of response param
      - `- sql_requests.is_time_range_relative`
  - **CreateSqlAlarmRule**
    - changes of request param
      - `- sql_requests.is_time_range_relative`
  - **UpdateKeywordsAlarmRule**
    - changes of response param
      - `+ recovery_policy`
      - `+ tags`
      - `+ trigger_condition_count`
      - `+ trigger_condition_frequency`
      - `+ whether_recovery_policy`
      - `- topics`
      - `- language`
      - `- indexId`
  - **ListActiveOrHistoryAlarms**
    - changes of response param
      - `+ events.annotations.alarm_action_rule_name`
      - `+ events.annotations.alarm_rule_alias`
      - `+ events.annotations.alarm_rule_url`
      - `+ events.annotations.alarm_status`
      - `+ events.annotations.condition_expression`
      - `+ events.annotations.condition_expression_with_value`
      - `+ events.annotations.notification_frequency`
      - `+ events.annotations.record_id`
      - `+ events.annotations.recovery_policy`
      - `+ events.annotations.results`
      - `+ events.annotations.frequency`
      - `+ events.annotations.type`
      - `+ events.metadata.event_subtype`
  - **DeleteActiveAlarms**
    - changes of request param
      - `+ events.metadata.event_subtype`
  - **UpdateTransfer**
    - changes of request param
      - `- log_transfer_info.log_transfer_detail.obs_transfer_path`
      - `- log_transfer_info.log_transfer_detail.obs_period: enum value [1,2,3,5,6,12,30]`
      - `* log_transfer_info.log_transfer_detail: object<TransferDetail> -> object<LogTransferDetail>`
    - changes of response param
      - `- log_transfer_info.log_transfer_detail.obs_eps_id`
      - `- log_transfer_info.log_transfer_detail.lts_tags`
      - `- log_transfer_info.log_transfer_detail.stream_tags`
      - `- log_transfer_info.log_transfer_detail.struct_fields`
      - `- log_transfer_info.log_transfer_detail.invalid_field_value`
  - **CreateTransfer**
    - changes of request param
      - `- log_transfer_info.log_transfer_detail.obs_transfer_path`
      - `- log_transfer_info.log_transfer_detail.obs_period: enum value [1,2,3,5,6,12,30]`
      - `* log_transfer_info.log_transfer_detail: object<TransferDetail> -> object<LogTransferDetail>`
    - changes of response param
      - `- log_transfer_info.log_transfer_detail.obs_eps_id`
      - `- log_transfer_info.log_transfer_detail.lts_tags`
      - `- log_transfer_info.log_transfer_detail.stream_tags`
      - `- log_transfer_info.log_transfer_detail.struct_fields`
      - `- log_transfer_info.log_transfer_detail.invalid_field_value`
  - **DeleteTransfer**
    - changes of response param
      - `- log_transfer_info.log_transfer_detail.obs_eps_id`
      - `- log_transfer_info.log_transfer_detail.lts_tags`
      - `- log_transfer_info.log_transfer_detail.stream_tags`
      - `- log_transfer_info.log_transfer_detail.struct_fields`
      - `- log_transfer_info.log_transfer_detail.invalid_field_value`
  - **ListTransfers**
    - changes of response param
      - `- log_transfers.log_transfer_info.log_transfer_detail.obs_eps_id`
      - `- log_transfers.log_transfer_info.log_transfer_detail.lts_tags`
      - `- log_transfers.log_transfer_info.log_transfer_detail.stream_tags`
      - `- log_transfers.log_transfer_info.log_transfer_detail.struct_fields`
      - `- log_transfers.log_transfer_info.log_transfer_detail.invalid_field_value`
  - **UpdateNotificationTemplate**
    - changes of request param
      - `+ templates.sendType`
      - `+ templates.version`
    - changes of response param
      - `+ templates.sendType`
      - `+ templates.version`
  - **CreateNotificationTemplate**
    - changes of request param
      - `+ templates.sendType`
      - `+ templates.version`
    - changes of response param
      - `- locale: enum value [zh-cn,en-us]`
      - `+ templates.sendType`
      - `+ templates.version`
      - `- templates.sub_type: enum value [sms,dingding,wechat,webhook,email]`
      - `* templates: list<SubTemplate> -> list<SubTemplateResBody>`
  - **ListNotificationTemplates**
    - changes of response param
      - `+ results.templates.sendType`
      - `+ results.templates.version`
  - **UpdateHostGroup**
    - changes of response param
      - `+ agent_access_type`
      - `+ labels`
  - **CreateHostGroup**
    - changes of response param
      - `+ agent_access_type`
      - `+ labels`
  - **DeleteHostGroup**
    - changes of response param
      - `+ agent_access_type`
      - `+ labels`
      - `+ result.agent_access_type`
      - `+ result.labels`
  - **ListQueryAllSearchCriterias**
    - changes of response param
      - `+ search_criterias.search_type`
  - **CreateLogStreamIndex**
    - changes of response param
      - `- isQueryComplete`
  - **ListHostGroup**
    - changes of response param
      - `+ agent_access_type`
      - `+ labels`
      - `+ result.agent_access_type`
      - `+ result.labels`
  - **ListAccessConfig**
    - changes of response param
      - `+ recursive_depth`
      - `+ log_split_size`
      - `+ access_config_type_source`
      - `+ result.log_split_size`
      - `+ result.recursive_depth`
      - `+ result.access_config_type_source`
  - **UpdateAccessConfig**
    - changes of response param
      - `+ recursive_depth`
      - `+ log_split_size`
      - `+ access_config_type_source`
  - **CreateAccessConfig**
    - changes of response param
      - `+ recursive_depth`
      - `+ log_split_size`
      - `+ access_config_type_source`
  - **DeleteAccessConfig**
    - changes of response param
      - `+ recursive_depth`
      - `+ log_split_size`
      - `+ access_config_type_source`
      - `+ result.log_split_size`
      - `+ result.recursive_depth`
      - `+ result.access_config_type_source`

### HuaweiCloud SDK RDS

- _API Version_
  - V3
- _Features_
  - Support the API `ListSmallVersion`
- _Bug Fix_
  - None
- _Change_
  - None

# 3.1.159 2025-10-23

### HuaweiCloud SDK CodeHub

- _API Version_
  - V4
- _Features_
  - Support the following APIs:
    - `BatchDeleteBranch`
    - `ListCommits`
    - `ListLogsTree`
    - `ListRefsList`
    - `ExecuteRepositoryStatistics`
    - `ListMergeRequestSystemNotes`
    - `ListCommitDiscussions`
    - `ListPersonalMergeRequests`
    - `ListMergeRequestEvaluations`
    - `ShowCommitCommentsByLine`
    - `ListGroupMergeRequestTemplates`
    - `CreateGroupMergeRequestTemplate`
    - `UpdateGroupMergeRequestTemplate`
    - `DeleteGroupMergeRequestTemplate`
    - `ListProjectMergeRequestTemplates`
    - `CreateProjectMergeRequestTemplate`
    - `UpdateProjectMergeRequestTemplate`
    - `DeleteProjectMergeRequestTemplate`
    - `ListMergeRequestVersions`
    - `CreateCherryPickMergeRequest`
    - `ListPersonalRecentPushEvents`
    - `RenameFile`
    - `ShowFileRaw`
    - `BatchValidateUserGroupPermissions`
    - `ShowGroupInheritSetting`
    - `ShowGroupsGeneralPolicy`
    - `UpdateGroupGeneralPolicy`
    - `ListGroupUserGroups`
    - `ListProjectProtectedTags`
    - `CreateProjectProtectedTags`
    - `ShowProjectsGeneralPolicy`
    - `UpdateProjectGeneralPolicy`
    - `ListRepositoryProtectedRefsUserGroups`
    - `ListGroupProtectedRefsUserGroups`
    - `ListProjectProtectedRefsUserGroups`
    - `ListRepositoryResourcePermissions`
    - `UpdateRepositoryResourcePermissions`
    - `ListItemCommits`
    - `UpdateRepositoryCommitRule`
    - `StartHouseKeeping`
    - `SyncDeployKeyToSubmodules`
    - `RemoveDeployKeyFromSubmodules`
    - `BatchValidateRepoNames`
    - `ListProjectRepositories`
    - `ListGroupRepositories`
    - `ListTenantRepositories`
    - `ExportTenantRepositories`
    - `ShowRepositoryE2eSetting`
    - `ShowGroupE2eSetting`
    - `ShowProjectE2eSetting`
    - `UpdateRepositoryRemoteMirror`
    - `UpdateRepositoryGeneralCommitRule`
    - `DeleteMergeRequestDiscussion`
    - `CreateRepositoryCommitRule`
    - `UpdateMergeRequestDiscussionInfo`
- _Bug Fix_
  - None
- _Change_
  - **DeleteTrustedIpAddress**
    - changes of response param
      - `+ status: enum value [success,fail]`
  - **DeleteTenantTrustedIpAddress**
    - changes of response param
      - `+ status: enum value [success,fail]`
  - **StartRemoteMirrorSynchronization**
    - changes of request param
      - `+ force_fetch`
  - **ListRepositoryReviewAuthors**
    - changes of response param
      - `+ state: enum value [active,blocked,error]`
  - **ListMergeRequestParticipants**
    - changes of response param
      - `+ state: enum value [active,blocked,error]`
  - **CreateCommitRevert**
    - changes of response param
      - `+ iid`
  - **ListMergeRequestTemplates**
    - changes of response param
      - `* : list<MergeRequestTemplateDto> -> list<RepositoryMergeRequestTemplateDto>`
  - **ListGroupMergeRequestValidAssignedCandidates**
    - changes of request param
      - `+ offset`
      - `+ limit`
    - changes of response param
      - `+ state: enum value [active,blocked,error]`
  - **ListProjectMergeRequestCanBeAssignedUsers**
    - changes of request param
      - `+ offset`
      - `+ limit`
    - changes of response param
      - `+ state: enum value [active,blocked,error]`
  - **ListGroupMergeRequestCanBeAssignedReviewers**
    - changes of request param
      - `+ offset`
      - `+ limit`
    - changes of response param
      - `+ state: enum value [active,blocked,error]`
  - **ListProjectMergeRequestCanBeAssignedReviewers**
    - changes of request param
      - `+ offset`
      - `+ limit`
    - changes of response param
      - `+ state: enum value [active,blocked,error]`
  - **ListMergeRequestValidAssignedCandidates**
    - changes of response param
      - `+ state: enum value [active,blocked,error]`
  - **ShowGroupSettingsInheritCfg**
    - changes of response param
      - `+ cr_comment_templates`
      - `- cr_comment_emplates`
  - **ShowUserEmails**
    - changes of response param
      - `+ state: enum value [active,blocked]`
  - **UpdateUserEmails**
    - changes of response param
      - `+ state: enum value [active,blocked]`
  - **ShowGroupsInherit**
    - changes of request param
      - `* setting_type: optional -> required`
  - **BatchDeleteProtectedBranches**
    - changes of response param
      - `+ status: enum value [success,fail]`
  - **BatchDeleteProtectedTags**
    - changes of response param
      - `+ status: enum value [success,fail]`
  - **ListRepositoryForks**
    - changes of request param
      - `+ offset`
      - `+ limit`
  - **ListRepositoryEvents**
    - changes of response param
      - `+ author.state: enum value [active,blocked]`
  - **DeleteFile**
    - changes of response param
      - `+ status: enum value [success,fail]`
  - **ListRepositoryReviews**
    - changes of response param
      - `+ assignee.state: enum value [active,blocked,error]`
  - **CreateMergeRequestDiscussionResponse**
    - changes of response param
      - `- type: enum value [DiscussionNote,DiffNote]`
      - `+ author.state: enum value [active,blocked,error]`
  - **UpdateMergeRequestDiscussion**
    - changes of response param
      - `- type: enum value [DiscussionNote,DiffNote]`
      - `+ author.state: enum value [active,blocked,error]`
  - **ListRepositoryMergeRequests**
    - changes of response param
      - `+ author.state: enum value [active,blocked,error]`
  - **ListMergeRequestApproverSettings**
    - changes of response param
      - `+ append_reviewers.state: enum value [active,blocked,error]`
  - **CreateMergeRequestApproverSetting**
    - changes of request param
      - `+ append_reviewers.state: enum value [active,blocked,error]`
    - changes of response param
      - `+ append_reviewers.state: enum value [active,blocked,error]`
  - **UpdateMergeRequestApproverSetting**
    - changes of request param
      - `+ append_reviewers.state: enum value [active,blocked,error]`
    - changes of response param
      - `+ append_reviewers.state: enum value [active,blocked,error]`
  - **ListMergeRequestChanges**
    - changes of response param
      - `+ author.state: enum value [active,blocked,error]`
  - **ListCommitAssociatedMergeRequests**
    - changes of response param
      - `+ merged_by.state: enum value [active,blocked,error]`
  - **ListDiscussionTemplates**
    - changes of response param
      - `+ creator.state: enum value [active,blocked,error]`
  - **ListGroupMergeRequestApproverSettings**
    - changes of response param
      - `+ append_reviewers.state: enum value [active,blocked,error]`
  - **CreateGroupMergeRequestApproverSetting**
    - changes of response param
      - `+ append_reviewers.state: enum value [active,blocked,error]`
  - **ListProjectMergeRequestApproverSettings**
    - changes of response param
      - `+ append_reviewers.state: enum value [active,blocked,error]`
  - **CreateProjectMergeRequestApproverSetting**
    - changes of response param
      - `+ append_reviewers.state: enum value [active,blocked,error]`
  - **UpdateGroupMergeRequestApproverSetting**
    - changes of response param
      - `+ append_reviewers.state: enum value [active,blocked,error]`
  - **UpdateProjectMergeRequestApproverSetting**
    - changes of response param
      - `+ append_reviewers.state: enum value [active,blocked,error]`
  - **ListMergeRequestApprovers**
    - changes of response param
      - `+ required_approvers_list.state: enum value [active,blocked,error]`
  - **ListMergeRequestReviewers**
    - changes of response param
      - `+ required_reviewers_list.state: enum value [active,blocked,error]`
  - **ShowProjectSettingsInheritCfg**
    - changes of response param
      - `+ name: enum value [webhook_settings,mr_branch_policies,reviews,deploy_keys]`
  - **UpdateProjectSettingsInheritCfg**
    - changes of request param
      - `+ data.name: enum value [webhook_settings,mr_branch_policies,reviews,deploy_keys]`
    - changes of response param
      - `+ name: enum value [webhook_settings,mr_branch_policies,reviews,deploy_keys]`
  - **ListRepositoryCommitRules**
    - changes of response param
      - `+ prohibited_file_name_regex`
      - `+ author_email_regex`
      - `+ binary_gate_enabled`
      - `+ created_at`
      - `+ skip_rule_end_date`
      - `+ skip_rule_check`
      - `+ allowed_max_file_size`
      - `+ allowed_modify_binary`
      - `+ max_file_size`
      - `+ commit_message_negative_regex`
      - `+ allowed_binary_file_name_regex`
      - `+ updated_at`
      - `+ author_regex`
      - `+ branch_name`
      - `+ effective_date`
      - `+ name`
      - `+ commit_message_regex`
      - `+ repository_id`
      - `+ privileged_users`
      - `+ id`
      - `* skip_rule_end_date: yyyy-MM-dd'T'HH:mm:ss.SSSXXX -> string`
      - `+ privileged_users.state: enum value [active,blocked]`
  - **ListPersonalRepositoryImportRecords**
    - changes of response param
      - `- repository.web_url`
      - `- repository.readme_url`
  - **ListCurrentUserRepositories**
    - changes of request param
      - `+ offset`
      - `+ limit`
      - `+ order_by`
      - `+ sort`
      - `+ archived`
      - `+ search`
      - `+ starred`
      - `+ membership`
      - `+ user_created`
      - `+ include_abnormal`
      - `- repository_id`
  - **CreateBranch**
    - changes of response param
      - `+ creator.state: enum value [active,blocked,error]`
  - **DeleteBranch**
    - changes of response param
      - `+ status: enum value [success,fail]`
  - **ShowMergeRequestDiscussion**
    - changes of response param
      - `+ assignee.state: enum value [active,blocked,error]`
      - `- notes.type: enum value [DiscussionNote,DiffNote]`
  - **ListMergeRequestDiscussions**
    - changes of response param
      - `+ assignee.state: enum value [active,blocked,error]`
      - `- notes.type: enum value [DiscussionNote,DiffNote]`
  - **CreateMergeRequestDiscussion**
    - changes of response param
      - `+ assignee.state: enum value [active,blocked,error]`
      - `- notes.type: enum value [DiscussionNote,DiffNote]`
  - **ShowCommit**
    - changes of response param
      - `+ status: enum value [pending,running,success,failed,canceled,skipped,timedout]`
      - `+ merge_request.author.state: enum value [active,blocked,error]`
  - **CreateCommit**
    - changes of response param
      - `+ status: enum value [pending,running,success,failed,canceled,skipped,timedout]`
      - `+ merge_request.author.state: enum value [active,blocked,error]`
  - **ShowAverageEvaluation**
    - changes of response param
      - `+ evaluations.user.state: enum value [active,blocked,error]`
  - **ListRepositoryFilePushPermissions**
    - changes of response param
      - `+ actions.users.state: enum value [active,blocked]`
  - **BatchUpdateRepositoryFilePushPermissions**
    - changes of response param
      - `+ actions.users.state: enum value [active,blocked]`
  - **CreateFilePushPermission**
    - changes of response param
      - `+ actions.users.state: enum value [active,blocked]`
  - **ListProjectProtectedBranches**
    - changes of response param
      - `+ actions.addition_switchers`
      - `+ actions.users.state: enum value [active,blocked,error]`
  - **CreateProjectProtectedBranches**
    - changes of request param
      - `+ actions.addition_switchers`
    - changes of response param
      - `+ actions.addition_switchers`
      - `+ actions.users.state: enum value [active,blocked,error]`
  - **ListProtectedBranches**
    - changes of response param
      - `+ actions.users.state: enum value [active,blocked]`
  - **BatchUpdateProtectedBranches**
    - changes of request param
      - `+ actions.addition_switchers`
    - changes of response param
      - `+ actions.users.state: enum value [active,blocked]`
  - **BatchCreateProtectedBranch**
    - changes of request param
      - `+ actions.addition_switchers`
    - changes of response param
      - `+ actions.users.state: enum value [active,blocked]`
  - **DeleteProtectedBranch**
    - changes of response param
      - `+ status: enum value [success,fail]`
  - **ShowProtectedBranch**
    - changes of response param
      - `+ actions.users.state: enum value [active,blocked]`
  - **UpdateProtectedBranch**
    - changes of request param
      - `+ addition_switchers`
    - changes of response param
      - `+ actions.users.state: enum value [active,blocked]`
  - **ListProtectedTags**
    - changes of response param
      - `+ actions.users.state: enum value [active,blocked]`
  - **BatchUpdateProtectedTags**
    - changes of response param
      - `+ actions.users.state: enum value [active,blocked]`
  - **BatchCreateProtectedTags**
    - changes of response param
      - `+ actions.users.state: enum value [active,blocked]`
  - **DeleteProtectedTag**
    - changes of response param
      - `+ status: enum value [success,fail]`
  - **ShowProtectedTag**
    - changes of response param
      - `+ actions.users.state: enum value [active,blocked]`
  - **UpdateProtectedTag**
    - changes of response param
      - `+ actions.users.state: enum value [active,blocked]`
  - **ShowRepository**
    - changes of response param
      - `- readme_url`
      - `- web_url`
      - `+ owner.state: enum value [active,blocked]`
      - `- forked_from_repository.web_url`
      - `- forked_from_repository.readme_url`
  - **ShowMergeRequestCommentsByLine**
    - changes of response param
      - `+ new.type: enum value [unchanged-l]`
      - `- new.type: enum value [unchangd-l]`
      - `+ new.discussions.assignee.state: enum value [active,blocked,error]`
      - `- new.discussions.notes.type: enum value [DiscussionNote,DiffNote]`

### HuaweiCloud SDK GaussDBforNoSQL

- _API Version_
  - V3
- _Features_
  - Support the APIs `ListBackups`, `RestoreRedisData`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK GaussDBforopenGauss

- _API Version_
  - V3
- _Features_
  - Support the APIs `ListSqlPlanAction`, `UpdateInstanceAlias`, `ShowFullSql`
- _Bug Fix_
  - None
- _Change_
  - Remove the API `ListDatabaseVolume`
  - **ListSessionTopSqlStatistics**
    - changes of response param
      - `+ top_sql_info.count`

### HuaweiCloud SDK KMS

- _API Version_
  - V2
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **CreateKey**
    - changes of request param
      - `+ key_spec: enum value [SECP256K1]`

### HuaweiCloud SDK OCR

- _API Version_
  - V1
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **RecognizeVehicleLicense**
    - changes of request param
      - `+ alarm`
    - changes of response param
      - `+ result.alarm_result`
      - `+ result.alarm_confidence`
  - **RecognizeGeneralText**
    - changes of request param
      - `+ return_markdown_result`
    - changes of response param
      - `+ result.markdown_result`

### HuaweiCloud SDK RDS

- _API Version_
  - V3
- _Features_
  - Support the following APIs:
    - `ShowRestartPolicy`
    - `ListMajorVersionFeature`
    - `CheckWeakpwd`
    - `NotifyReplaceNode`
    - `ListTopSqls`
- _Bug Fix_
  - None
- _Change_
  - **StartInstanceRestartAction**
    - changes of request param
      - `+ restart.restart_policy`
  - **StartInstanceReduceVolumeAction**
    - changes of request param
      - `+ reduce_volume.iops`
      - `+ reduce_volume.throughput`

# 3.1.158 2025-10-16

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
      - `+ conditions.match.criteria.criteria`
      - `- conditions.match.criteria.sub_criteria`
      - `* conditions.match.criteria: list<Criteria> -> list<CriteriaItem>`
  - **CreateRuleNew**
    - changes of request param
      - `+ conditions.match.criteria.criteria`
      - `- conditions.match.criteria.sub_criteria`
      - `* conditions.match.criteria: list<Criteria> -> list<CriteriaItem>`
  - **ListRuleDetails**
    - changes of response param
      - `+ rules.conditions.match.criteria.criteria`
      - `- rules.conditions.match.criteria.sub_criteria`
      - `* rules.conditions.match.criteria: list<Criteria> -> list<CriteriaItem>`
  - **UpdateFullRule**
    - changes of request param
      - `+ rules.conditions.match.criteria.criteria`
      - `- rules.conditions.match.criteria.sub_criteria`
      - `* rules.conditions.match.criteria: list<Criteria> -> list<CriteriaItem>`

### HuaweiCloud SDK CPCS

- _API Version_
  - V1
- _Features_
  - Support the following APIs:
    - `ListClusterPort`
    - `AddClusterPort`
    - `CheckClusterPort`
    - `DeleteClusterPort`
    - `SwitchCpcsToken`
    - `ShowAuditLog`
    - `ShowResourceDetailCertificate`
    - `ShowResourceDetailAccessKey`
    - `ShowStatusApp`
    - `ShowStatusService`
    - `ShowStatusCluster`
    - `ShowStatusInstance`
    - `ShowStatisticSecretKey`
    - `ShowStatisticCertificate`
    - `ShowStatisticInterface`
    - `ShowStatisticResource`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK DDS

- _API Version_
  - V3
- _Features_
  - Support the API `DeleteIp`
- _Bug Fix_
  - None
- _Change_
  - **UpgradeDatabaseVersion**
    - changes of request param
      - `+ is_delayed`

### HuaweiCloud SDK GaussDBforopenGauss

- _API Version_
  - V3
- _Features_
  - Support the APIs `ListSessionMemoryContext`, `ListSessionTopSqlStatistics`, `ListSessionWaitEventStatistics`
- _Bug Fix_
  - None
- _Change_
  - **ListPluginInfoList**
    - changes of request param
      - `+ offset`
      - `+ limit`
      - `+ plugin_name: enum value [postgis]`
    - changes of response param
      - `+ total_count`
      - `+ plugins`
      - `- installed`
      - `- plugin_version`
      - `- port`
      - `- plugin_name`
  - **CreateSqlLimitTask**
    - changes of request param
      - `+ sql_model`

### HuaweiCloud SDK IoTDA

- _API Version_
  - V5
- _Features_
  - Support the following APIs:
    - `ListOtaModules`
    - `CreateOtaModule`
    - `ShowOtaModule`
    - `UpdateOtaModule`
    - `DeleteOtaModule`
- _Bug Fix_
  - None
- _Change_
  - **ShowDevice**
    - changes of response param
      - `+ modules`
  - **UpdateDevice**
    - changes of response param
      - `+ modules`
  - **SearchDevices**
    - changes of response param
      - `+ devices.modules`
  - **AddDevice**
    - changes of response param
      - `+ modules`
  - **ListOtaPackageInfo**
    - changes of response param
      - `+ packages.product_name`
      - `+ packages.module_name`
  - **CreateOtaPackage**
    - changes of request param
      - `+ module_name`
      - `+ file_location.obs_location.sign_method`
    - changes of response param
      - `+ product_name`
      - `+ module_name`
      - `+ file_location.obs_location.sign_method`
  - **ShowOtaPackage**
    - changes of response param
      - `+ product_name`
      - `+ module_name`
      - `+ file_location.obs_location.sign_method`

### HuaweiCloud SDK Live

- _API Version_
  - V2
- _Features_
  - Support the API `ListTranscodeConcurrencyNum`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK RDS

- _API Version_
  - V3
- _Features_
  - Support the following APIs:
    - `ListSubscriberInstances`
    - `CreateSubscription`
    - `ListPublications`
    - `DeletePublication`
    - `ListDistribution`
    - `ModifyPublication`
    - `ListDistributorInstances`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK SIS

- _API Version_
  - V1
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **RecognizeShortAudio**
    - changes of request param
      - `+ config.auto_language_detect`

# 3.1.157 2025-10-09

### HuaweiCloud SDK CCE

- _API Version_
  - V3
- _Features_
  - Support the following APIs:
    - `GetClusterFlavorSpecs`
    - `ShowFeatureGates`
    - `GetAvaliableZone`
    - `GetResourceTags`
    - `GetCustomizeTags`
    - `GetLabels`
    - `GetClusterQuota`
    - `ListAccessPolicy`
    - `CreateAccessPolicy`
    - `GetAccessPolicy`
    - `UpdateAccessPolicy`
    - `DeleteAccessPolicy`
- _Bug Fix_
  - None
- _Change_
  - **ResizeCluster**
    - changes of request param
      - `+ skippedTasks`
  - **ShowClusterConfig**
    - changes of response param
      - `+ log_configs.type: enum value [control,audit,system-addon]`
  - **UpdateClusterLogConfig**
    - changes of request param
      - `+ log_configs.type: enum value [control,audit,system-addon]`
    - changes of response param
      - `+ log_configs.type: enum value [control,audit,system-addon]`
  - **GetClusterSupportConfiguration**
    - changes of request param
      - `+ clusterType`
      - `+ clusterVersion`
      - `+ clusterID`
      - `+ networkMode`
      - `- cluster_id`
      - `- cluster_type`
      - `- cluster_version`
      - `- network_mode`
  - **DeleteRelease**
    - changes of request param
      - `+ show_resources`
  - **ShowRelease**
    - changes of request param
      - `+ show_resources`
  - **UpdateRelease**
    - changes of request param
      - `+ show_resources`
  - **UpgradeNodePool**
    - changes of request param
      - `+ metadata.resourceVersion`
      - `+ spec.nodeTemplate.flavor`
      - `+ spec.nodeTemplate.az`
      - `+ spec.nodeTemplate.rootVolume`
      - `+ spec.nodeTemplate.dataVolumes`
      - `+ spec.nodeTemplate.storage`
      - `+ spec.nodeTemplate.publicIP`
      - `+ spec.nodeTemplate.nodeNicSpec`
      - `+ spec.nodeTemplate.count`
      - `+ spec.nodeTemplate.billingMode`
      - `+ spec.nodeTemplate.taints`
      - `+ spec.nodeTemplate.waitPostInstallFinish`
      - `+ spec.nodeTemplate.k8sTags`
      - `+ spec.nodeTemplate.ecsGroupId`
      - `+ spec.nodeTemplate.faultDomain`
      - `+ spec.nodeTemplate.dedicatedHostId`
      - `+ spec.nodeTemplate.offloadNode`
      - `+ spec.nodeTemplate.isStatic`
      - `+ spec.nodeTemplate.userTags`
      - `+ spec.nodeTemplate.runtime`
      - `+ spec.nodeTemplate.initializedConditions`
      - `+ spec.nodeTemplate.hostnameConfig`
      - `+ spec.nodeTemplate.serverEnterpriseProjectID`
      - `+ spec.nodeTemplate.partition`
      - `+ spec.nodeTemplate.nodeNameTemplate`
      - `- spec.nodeTemplate.imageID`
      - `- spec.nodeTemplate.lifeCycle`
      - `- spec.nodeTemplate.runtimeConfig`
      - `+ spec.nodeTemplate.login.removeUserPassword`
      - `+ spec.nodeTemplate.login.removeSSHKey`
      - `* spec.nodeTemplate.login.userPassword: object -> object<UserPassword>`
      - `* spec.nodeTemplate.login: object -> object<Login>`
      - `+ spec.nodeTemplate.extendParam.ecs:performancetype`
      - `+ spec.nodeTemplate.extendParam.orderID`
      - `+ spec.nodeTemplate.extendParam.productID`
      - `+ spec.nodeTemplate.extendParam.maxPods`
      - `+ spec.nodeTemplate.extendParam.periodType`
      - `+ spec.nodeTemplate.extendParam.periodNum`
      - `+ spec.nodeTemplate.extendParam.isAutoRenew`
      - `+ spec.nodeTemplate.extendParam.isAutoPay`
      - `+ spec.nodeTemplate.extendParam.DockerLVMConfigOverride`
      - `+ spec.nodeTemplate.extendParam.dockerBaseSize`
      - `+ spec.nodeTemplate.extendParam.offloadNode`
      - `+ spec.nodeTemplate.extendParam.publicKey`
      - `+ spec.nodeTemplate.extendParam.alpha.cce/preInstall`
      - `+ spec.nodeTemplate.extendParam.alpha.cce/postInstall`
      - `+ spec.nodeTemplate.extendParam.alpha.cce/NodeImageID`
      - `+ spec.nodeTemplate.extendParam.nicMultiqueue`
      - `+ spec.nodeTemplate.extendParam.nicThreshold`
      - `+ spec.nodeTemplate.extendParam.chargingMode`
      - `+ spec.nodeTemplate.extendParam.agency_name`
      - `+ spec.nodeTemplate.extendParam.kubeReservedMem`
      - `+ spec.nodeTemplate.extendParam.systemReservedMem`
      - `+ spec.nodeTemplate.extendParam.init-node-password`
      - `+ spec.nodeTemplate.extendParam.securityReinforcementType`
      - `- spec.nodeTemplate.extendParam.userID`
      - `* spec.nodeTemplate.extendParam: object -> object<NodeExtendParam>`
  - **CreateCloudPersistentVolumeClaims**
    - changes of request param
      - `* metadata.labels: string -> map<string, string>`
    - changes of response param
      - `* metadata.labels: string -> map<string, string>`
  - **DeleteCloudPersistentVolumeClaims**
    - changes of response param
      - `* metadata.labels: string -> map<string, string>`
  - **ShowCluster**
    - changes of response param
      - `+ metadata.timezone`
      - `+ spec.legacyVersion`
      - `+ spec.enableAutopilot`
  - **UpdateCluster**
    - changes of response param
      - `+ metadata.timezone`
      - `+ spec.legacyVersion`
      - `+ spec.enableAutopilot`
  - **DeleteCluster**
    - changes of response param
      - `+ metadata.timezone`
      - `+ spec.legacyVersion`
      - `+ spec.enableAutopilot`
  - **RemoveNode**
    - changes of request param
      - `+ spec.login.removeUserPassword`
      - `+ spec.login.removeSSHKey`
    - changes of response param
      - `+ spec.login.removeUserPassword`
      - `+ spec.login.removeSSHKey`
  - **MigrateNode**
    - changes of request param
      - `+ spec.serverConfig`
      - `+ spec.login.removeUserPassword`
      - `+ spec.login.removeSSHKey`
    - changes of response param
      - `+ spec.serverConfig`
      - `+ spec.login.removeUserPassword`
      - `+ spec.login.removeSSHKey`
  - **CreateCluster**
    - changes of request param
      - `+ metadata.timezone`
      - `+ spec.legacyVersion`
      - `+ spec.enableAutopilot`
    - changes of response param
      - `+ metadata.timezone`
      - `+ spec.legacyVersion`
      - `+ spec.enableAutopilot`
  - **ListClusters**
    - changes of response param
      - `+ items.metadata.timezone`
      - `+ items.spec.legacyVersion`
      - `+ items.spec.enableAutopilot`
  - **ScaleNodePool**
    - changes of request param
      - `+ spec.options.scalePolicy`
  - **ShowNode**
    - changes of response param
      - `* metadata.ownerReference: object<NodeOwnerReference> -> object`
      - `+ status.configurationUpToDate`
      - `+ spec.waitPostInstallFinish`
      - `+ spec.nodeNameTemplate`
      - `+ spec.billingMode: enum value [0,1]`
      - `+ spec.login.removeUserPassword`
      - `+ spec.login.removeSSHKey`
  - **UpdateNode**
    - changes of response param
      - `* metadata.ownerReference: object<NodeOwnerReference> -> object`
      - `+ status.configurationUpToDate`
      - `+ spec.waitPostInstallFinish`
      - `+ spec.nodeNameTemplate`
      - `+ spec.billingMode: enum value [0,1]`
      - `+ spec.login.removeUserPassword`
      - `+ spec.login.removeSSHKey`
  - **DeleteNode**
    - changes of response param
      - `* metadata.ownerReference: object<NodeOwnerReference> -> object`
      - `+ status.configurationUpToDate`
      - `+ spec.waitPostInstallFinish`
      - `+ spec.nodeNameTemplate`
      - `+ spec.billingMode: enum value [0,1]`
      - `+ spec.login.removeUserPassword`
      - `+ spec.login.removeSSHKey`
  - **CreateNode**
    - changes of request param
      - `* metadata.ownerReference: object<NodeOwnerReference> -> object`
      - `+ spec.waitPostInstallFinish`
      - `+ spec.nodeNameTemplate`
      - `+ spec.billingMode: enum value [0,1]`
      - `+ spec.login.removeUserPassword`
      - `+ spec.login.removeSSHKey`
    - changes of response param
      - `* metadata.ownerReference: object<NodeOwnerReference> -> object`
      - `+ status.configurationUpToDate`
      - `+ spec.waitPostInstallFinish`
      - `+ spec.nodeNameTemplate`
      - `+ spec.billingMode: enum value [0,1]`
      - `+ spec.login.removeUserPassword`
      - `+ spec.login.removeSSHKey`
  - **ListNodes**
    - changes of response param
      - `* items.metadata.ownerReference: object<NodeOwnerReference> -> object`
      - `+ items.status.configurationUpToDate`
      - `+ items.spec.waitPostInstallFinish`
      - `+ items.spec.nodeNameTemplate`
      - `+ items.spec.billingMode: enum value [0,1]`
      - `+ items.spec.login.removeUserPassword`
      - `+ items.spec.login.removeSSHKey`
  - **ShowNodePool**
    - changes of response param
      - `+ metadata.resourceVersion`
      - `+ status.conditions.type: enum value [TaintSynchronizing,LabelSynchronizing,UserTagsSynchronizing,ConfigurationSynchronizing,Scalable,QuotaInsufficient,ResourceInsufficient,UnexpectedError,LockedByOrder,Error]`
      - `+ spec.taintPolicyOnExistingNodes`
      - `+ spec.labelPolicyOnExistingNodes`
      - `+ spec.userTagsPolicyOnExistingNodes`
      - `+ spec.nodeTemplate.waitPostInstallFinish`
      - `+ spec.nodeTemplate.nodeNameTemplate`
      - `+ spec.nodeTemplate.billingMode: enum value [0,1]`
      - `+ spec.nodeTemplate.login.removeUserPassword`
      - `+ spec.nodeTemplate.login.removeSSHKey`
      - `- spec.nodeTemplate.publicIP.ids`
      - `- spec.nodeTemplate.publicIP.count`
      - `- spec.nodeTemplate.publicIP.eip`
      - `* spec.nodeTemplate.publicIP: object<NodePublicIP> -> object<NodeEIPSpec>`
      - `* spec.nodeTemplate: object<NodeSpec> -> object<NodeTemplate>`
  - **UpdateNodePool**
    - changes of request param
      - `+ spec.nodeTemplate.az`
      - `+ spec.nodeTemplate.waitPostInstallFinish`
      - `+ spec.nodeTemplate.extendParam.alpha.cce/NodeImageID`
      - `+ spec.nodeTemplate.login.removeUserPassword`
      - `+ spec.nodeTemplate.login.removeSSHKey`
    - changes of response param
      - `+ metadata.resourceVersion`
      - `+ status.conditions.type: enum value [TaintSynchronizing,LabelSynchronizing,UserTagsSynchronizing,ConfigurationSynchronizing,Scalable,QuotaInsufficient,ResourceInsufficient,UnexpectedError,LockedByOrder,Error]`
      - `+ spec.taintPolicyOnExistingNodes`
      - `+ spec.labelPolicyOnExistingNodes`
      - `+ spec.userTagsPolicyOnExistingNodes`
      - `+ spec.nodeTemplate.waitPostInstallFinish`
      - `+ spec.nodeTemplate.nodeNameTemplate`
      - `+ spec.nodeTemplate.billingMode: enum value [0,1]`
      - `+ spec.nodeTemplate.login.removeUserPassword`
      - `+ spec.nodeTemplate.login.removeSSHKey`
      - `- spec.nodeTemplate.publicIP.ids`
      - `- spec.nodeTemplate.publicIP.count`
      - `- spec.nodeTemplate.publicIP.eip`
      - `* spec.nodeTemplate.publicIP: object<NodePublicIP> -> object<NodeEIPSpec>`
      - `* spec.nodeTemplate: object<NodeSpec> -> object<NodeTemplate>`
  - **DeleteNodePool**
    - changes of response param
      - `+ metadata.resourceVersion`
      - `+ status.conditions.type: enum value [TaintSynchronizing,LabelSynchronizing,UserTagsSynchronizing,ConfigurationSynchronizing,Scalable,QuotaInsufficient,ResourceInsufficient,UnexpectedError,LockedByOrder,Error]`
      - `+ spec.taintPolicyOnExistingNodes`
      - `+ spec.labelPolicyOnExistingNodes`
      - `+ spec.userTagsPolicyOnExistingNodes`
      - `+ spec.nodeTemplate.waitPostInstallFinish`
      - `+ spec.nodeTemplate.nodeNameTemplate`
      - `+ spec.nodeTemplate.billingMode: enum value [0,1]`
      - `+ spec.nodeTemplate.login.removeUserPassword`
      - `+ spec.nodeTemplate.login.removeSSHKey`
      - `- spec.nodeTemplate.publicIP.ids`
      - `- spec.nodeTemplate.publicIP.count`
      - `- spec.nodeTemplate.publicIP.eip`
      - `* spec.nodeTemplate.publicIP: object<NodePublicIP> -> object<NodeEIPSpec>`
      - `* spec.nodeTemplate: object<NodeSpec> -> object<NodeTemplate>`
  - **AddNode**
    - changes of request param
      - `+ nodeList.spec.lifecycle.waitPostInstallFinish`
      - `+ nodeList.spec.login.removeUserPassword`
      - `+ nodeList.spec.login.removeSSHKey`
      - `+ nodeList.spec.runtimeConfig.containerBaseSize`
  - **ResetNode**
    - changes of request param
      - `+ nodeList.spec.lifecycle.waitPostInstallFinish`
      - `+ nodeList.spec.login.removeUserPassword`
      - `+ nodeList.spec.login.removeSSHKey`
      - `+ nodeList.spec.runtimeConfig.containerBaseSize`
  - **CreateNodePool**
    - changes of request param
      - `+ metadata.resourceVersion`
      - `+ status.conditions.type: enum value [TaintSynchronizing,LabelSynchronizing,UserTagsSynchronizing,ConfigurationSynchronizing,Scalable,QuotaInsufficient,ResourceInsufficient,UnexpectedError,LockedByOrder,Error]`
      - `+ spec.taintPolicyOnExistingNodes`
      - `+ spec.labelPolicyOnExistingNodes`
      - `+ spec.userTagsPolicyOnExistingNodes`
      - `+ spec.nodeTemplate.waitPostInstallFinish`
      - `+ spec.nodeTemplate.nodeNameTemplate`
      - `+ spec.nodeTemplate.billingMode: enum value [0,1]`
      - `+ spec.nodeTemplate.login.removeUserPassword`
      - `+ spec.nodeTemplate.login.removeSSHKey`
      - `- spec.nodeTemplate.publicIP.ids`
      - `- spec.nodeTemplate.publicIP.count`
      - `- spec.nodeTemplate.publicIP.eip`
      - `* spec.nodeTemplate.publicIP: object<NodePublicIP> -> object<NodeEIPSpec>`
      - `* spec.nodeTemplate: object<NodeSpec> -> object<NodeTemplate>`
    - changes of response param
      - `+ metadata.resourceVersion`
      - `+ status.conditions.type: enum value [TaintSynchronizing,LabelSynchronizing,UserTagsSynchronizing,ConfigurationSynchronizing,Scalable,QuotaInsufficient,ResourceInsufficient,UnexpectedError,LockedByOrder,Error]`
      - `+ spec.taintPolicyOnExistingNodes`
      - `+ spec.labelPolicyOnExistingNodes`
      - `+ spec.userTagsPolicyOnExistingNodes`
      - `+ spec.nodeTemplate.waitPostInstallFinish`
      - `+ spec.nodeTemplate.nodeNameTemplate`
      - `+ spec.nodeTemplate.billingMode: enum value [0,1]`
      - `+ spec.nodeTemplate.login.removeUserPassword`
      - `+ spec.nodeTemplate.login.removeSSHKey`
      - `- spec.nodeTemplate.publicIP.ids`
      - `- spec.nodeTemplate.publicIP.count`
      - `- spec.nodeTemplate.publicIP.eip`
      - `* spec.nodeTemplate.publicIP: object<NodePublicIP> -> object<NodeEIPSpec>`
      - `* spec.nodeTemplate: object<NodeSpec> -> object<NodeTemplate>`
  - **ListNodePools**
    - changes of response param
      - `+ items.metadata.resourceVersion`
      - `+ items.status.conditions.type: enum value [TaintSynchronizing,LabelSynchronizing,UserTagsSynchronizing,ConfigurationSynchronizing,Scalable,QuotaInsufficient,ResourceInsufficient,UnexpectedError,LockedByOrder,Error]`
      - `+ items.spec.taintPolicyOnExistingNodes`
      - `+ items.spec.labelPolicyOnExistingNodes`
      - `+ items.spec.userTagsPolicyOnExistingNodes`
      - `+ items.spec.nodeTemplate.waitPostInstallFinish`
      - `+ items.spec.nodeTemplate.nodeNameTemplate`
      - `+ items.spec.nodeTemplate.billingMode: enum value [0,1]`
      - `+ items.spec.nodeTemplate.login.removeUserPassword`
      - `+ items.spec.nodeTemplate.login.removeSSHKey`
      - `- items.spec.nodeTemplate.publicIP.ids`
      - `- items.spec.nodeTemplate.publicIP.count`
      - `- items.spec.nodeTemplate.publicIP.eip`
      - `* items.spec.nodeTemplate.publicIP: object<NodePublicIP> -> object<NodeEIPSpec>`
      - `* items.spec.nodeTemplate: object<NodeSpec> -> object<NodeTemplate>`

### HuaweiCloud SDK CCE

- _API Version_
  - V5
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListImageCaches**
    - changes of response param
      - `* image_caches.created_at: string -> date`
  - **CreateImageCache**
    - changes of response param
      - `* image_cache.created_at: string -> date`
  - **ShowImageCache**
    - changes of response param
      - `* image_cache.created_at: string -> date`
  - **DeleteImageCache**
    - changes of response param
      - `* image_cache.created_at: string -> date`

### HuaweiCloud SDK GaussDB

- _API Version_
  - V3
- _Features_
  - Support the following APIs:
    - `UpdateServerlessComputeAbilityPolicy`
    - `ShowServerlessScalingPolicy`
    - `UpdateServerlessScalingPolicy`
    - `UpdateHtapQueryQueuesControl`
    - `ShowHtapQueryQueuesRule`
    - `SetHtapQueryQueuesRule`
    - `ShowTaskDetails`
    - `ShowServerlessComputeAbilityPolicy`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK GaussDBforopenGauss

- _API Version_
  - V3
- _Features_
  - Support the following APIs:
    - `AuthorizeBackupDownload`
    - `ListPluginInfoList`
    - `ModifyInstancePort`
    - `DeleteDisasterRecord`
    - `ListDatabaseVolume`
- _Bug Fix_
  - None
- _Change_
  - Remove the API `ModifyHotfixes`

### HuaweiCloud SDK RDS

- _API Version_
  - V3
- _Features_
  - Support the APIs `ListConfigurationApplyHistories`, `ListInstancesConfigurations`
- _Bug Fix_
  - None
- _Change_
  - **UpgradeDbVersionNew**
    - changes of request param
      - `+ second_switch`

# 3.1.156 2025-09-25

### HuaweiCloud SDK CBR

- _API Version_
  - V1
- _Features_
  - Support the APIs `ListFeatures`, `ShowFeature`
- _Bug Fix_
  - None
- _Change_
  - **ListOrganizationPolicies**
    - changes of response param
      - `+ policies.effective_scope`
  - **CreateOrganizationPolicy**
    - changes of request param
      - `+ policy.effective_scope`
    - changes of response param
      - `+ policy.effective_scope`
  - **ShowOrganizationPolicy**
    - changes of response param
      - `+ policy.effective_scope`
  - **UpdateOrganizationPolicy**
    - changes of request param
      - `+ policy.effective_scope`
    - changes of response param
      - `+ policy.effective_scope`
  - **ListVault**
    - changes of response param
      - `+ vaults.availability_zone`
  - **CreateVault**
    - changes of request param
      - `+ vault.availability_zone`
    - changes of response param
      - `+ orders`
      - `+ error_code`
      - `+ retCode`
      - `+ errText`
      - `+ vault.availability_zone`
      - `- vault.errText`
      - `- vault.retCode`
      - `- vault.orders`
  - **ShowVault**
    - changes of response param
      - `+ vault.availability_zone`
  - **UpdateVault**
    - changes of response param
      - `+ vault.availability_zone`
  - **ListExternalVault**
    - changes of response param
      - `+ vaults.availability_zone`
  - **ListProtectable**
    - changes of response param
      - `+ instances.protectable.vault.availability_zone`
  - **ShowProtectable**
    - changes of response param
      - `+ instance.protectable.vault.availability_zone`
  - **ShowVaultResourceInstances**
    - changes of response param
      - `+ resources.resource_detail.vault.availability_zone`

### HuaweiCloud SDK CodeArtsBuild

- _API Version_
  - V3
- _Features_
  - Support the following APIs:
    - `DownloadBuildRealTimeLog`
    - `DownloadBuildFullLog`
    - `ShowActionIInfo`
    - `AddFavouriteOfficialTemplate`
    - `RemoverFavouriteOfficialTemplate`
    - `AddFavouriteTask`
    - `RemoverFavouriteTask`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK CodeArtsDeploy

- _API Version_
  - V2
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - Remove the APIs `CheckDeployStatus`, `StopDeployTask`
  - **ListEnvironments**
    - changes of response param
      - `- result.project_id`
  - **ShowEnvironmentDetail**
    - changes of response param
      - `- result.project_id`

### HuaweiCloud SDK ECS

- _API Version_
  - V2
- _Features_
  - Support the APIs `UpdateSerialConsoleOptions`, `ShowSerialConsoleActions`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK GaussDB

- _API Version_
  - V3
- _Features_
  - Support the APIs `ShowSlowLogDetail`, `ShowStarRocksSlowlogSensitiveStatus`, `UpdateSlowlogSensitiveStatus`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK GaussDBforopenGauss

- _API Version_
  - V3
- _Features_
  - Support the following APIs:
    - `CreateSqlLimitTask`
    - `ShowSqlLimitTask`
    - `UpdateSqlLimitTask`
    - `DeleteSqlLimitTask`
    - `ListSqlLimitTask`
    - `DeleteSharding`
    - `StopFullSql`
    - `ListEnhanceFullSqls`
    - `ListFullSqlSwitches`
    - `StartFullSql`
    - `ShowAlarmHistoryRecord`
    - `ListSqlTrace`
    - `ShowShardDiskMessages`
    - `ListDatabaseVersions`
    - `BatchSetBackupPolicy`
    - `ModifyHotfixes`
    - `ShowExpansionParameters`
    - `UpdateInstanceVersions`
    - `ShowSqlPatch`
    - `StopTransaction`
    - `ListTransaction`
    - `ShowAutoKillTransactionConfig`
    - `ListWaitEvent`
    - `ListAspInfos`
    - `CollectAsp`
    - `ShowAspStatus`
    - `SwitchAspStatus`
    - `UpdateExpansionParameters`
    - `ShowRedistributionParameters`
    - `ShowEpsRemainingQuota`
    - `ListEnterpriseProjects`
    - `ModifyAutoEnlargePolicy`
    - `ShrinkCn`
- _Bug Fix_
  - None
- _Change_
  - **DeleteInstance**
    - changes of request param
      - `- x-auth-token`
  - **ShowBalanceStatus**
    - changes of request param
      - `- x-auth-token`
  - **ResetPwd**
    - changes of request param
      - `- x-auth-token`
  - **UpdateInstanceName**
    - changes of request param
      - `- x-auth-token`
  - **RestartInstance**
    - changes of request param
      - `- x-auth-token`
  - **DeleteManualBackup**
    - changes of request param
      - `- x-auth-token`
  - **ListRestoreTimes**
    - changes of request param
      - `- x-auth-token`
  - **ListDatastores**
    - changes of request param
      - `- x-auth-token`
  - **CreateDbUser**
    - changes of request param
      - `- x-auth-token`
  - **SetDbUserPwd**
    - changes of request param
      - `- x-auth-token`
  - **ResizeInstanceFlavor**
    - changes of request param
      - `- x-auth-token`
  - **UpgradeInstanceVersion**
    - changes of request param
      - `* body: object<OpenGaussUpgradeRequest> -> object<UpgradeRequestBody>`
  - **ListSessionStatistics**
    - changes of response param
      - `+ statistics_list`
      - `- statistics`
  - **ListHbaInfoHistory**
    - changes of response param
      - `+ hba_histories`
      - `- hba_confs`
  - **ListSlowSqls**
    - changes of response param
      - `* slow_sql_infos.calls: string -> int32`
  - **SetRecyclePolicy**
    - changes of request param
      - `- x-auth-token`
  - **UpdateInstanceConfiguration**
    - changes of request param
      - `- x-auth-token`
  - **ShowInstanceConfiguration**
    - changes of request param
      - `- x-auth-token`
  - **ListConfigurations**
    - changes of request param
      - `- x-auth-token`
  - **ShowBackupPolicy**
    - changes of request param
      - `- x-auth-token`
  - **SetBackupPolicy**
    - changes of request param
      - `- x-auth-token`
  - **SetNewBackupPolicy**
    - changes of request param
      - `- x-auth-token`
  - **DeleteDatabaseSchema**
    - changes of request param
      - `- x-auth-token`
  - **CreateDatabaseSchemas**
    - changes of request param
      - `- x-auth-token`
  - **AllowDbPrivileges**
    - changes of request param
      - `- x-auth-token`
  - **AllowDbRolePrivileges**
    - changes of request param
      - `- x-auth-token`
  - **ListDatabases**
    - changes of request param
      - `- x-auth-token`
  - **ListDbUsers**
    - changes of request param
      - `- x-auth-token`
  - **ListDatabaseSchemas**
    - changes of request param
      - `- x-auth-token`
  - **SwitchShard**
    - changes of request param
      - `- x-auth-token`
  - **ListCnInfosBeforeReduce**
    - changes of request param
      - `- x-auth-token`
      - `+ X-Language: enum value [zh-cn,en-us]`
  - **DownloadBackup**
    - changes of request param
      - `- x-auth-token`
    - changes of response param
      - `* files.size: number -> int32`
  - **ListEnhanceFullSqlStatistics**
    - changes of response param
      - `+ statistics.total_sql_time`
      - `+ statistics.avg_sql_time`
      - `+ statistics.total_db_time`
      - `+ statistics.total_cpu_time`
      - `+ statistics.avg_parse_time`
      - `+ statistics.avg_plan_time`
      - `+ statistics.total_data_io_time`
      - `+ statistics.avg_n_returned_rows`
      - `+ statistics.avg_n_tuples_fetched`
      - `* statistics.start_time_stamp: string -> int64`
      - `* statistics.end_time_stamp: string -> int64`
  - **ModifyHbaConf**
    - changes of request param
      - `+ before_conf`
      - `+ after_conf`
      - `- before_confs`
      - `- after_confs`
  - **ListReadonlyNodes**
    - changes of response param
      - `+ nodes`
      - `- instances`
  - **ListSlowSqlDetails**
    - changes of response param
      - `+ slow_sql_details.db_name`
      - `+ slow_sql_details.schema_name`
      - `+ slow_sql_details.sql`
  - **ListDatabaseVolumeSummary**
    - changes of response param
      - `- cn_components.role`
      - `* cn_components: list<ComponentInfoResult> -> list<CnComponentInfoResult>`
  - **ShowAlarmStatistics**
    - changes of response param
      - `* ring_percentage: number -> double`
  - **ShowGlobalSlowSqlDetail**
    - changes of response param
      - `+ slow_sql_details.db_name`
      - `+ slow_sql_details.schema_name`
      - `+ slow_sql_details.sql`
  - **ShowJobDetail**
    - changes of request param
      - `- x-auth-token`
  - **ListInstances**
    - changes of request param
      - `- x-auth-token`
  - **CreateInstance**
    - changes of request param
      - `- x-auth-token`
  - **RunInstanceAction**
    - changes of request param
      - `- x-auth-token`
  - **CreateManualBackup**
    - changes of request param
      - `- x-auth-token`
  - **ListBackups**
    - changes of request param
      - `- x-auth-token`
  - **CreateRestoreInstance**
    - changes of request param
      - `- x-auth-token`
  - **ListFlavors**
    - changes of request param
      - `- x-auth-token`
  - **ListStorageTypes**
    - changes of request param
      - `- x-auth-token`
  - **CreateDbRole**
    - changes of request param
      - `- x-auth-token`
  - **ListDatabaseRoles**
    - changes of request param
      - `- x-auth-token`
  - **ListComponentInfos**
    - changes of request param
      - `- x-auth-token`

# 3.1.155 2025-09-18

### HuaweiCloud SDK CBR

- _API Version_
  - V1
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ShowBackup**
    - changes of response param
      - `+ backup.replication_records.extra_info.destination_vault_id`
      - `- backup.replication_records.extra_info.destinatio_vault_id`
  - **UpdateBackup**
    - changes of response param
      - `+ backup.replication_records.extra_info.destination_vault_id`
      - `- backup.replication_records.extra_info.destinatio_vault_id`
  - **ListBackups**
    - changes of response param
      - `+ backups.replication_records.extra_info.destination_vault_id`
      - `- backups.replication_records.extra_info.destinatio_vault_id`
  - **ListPolicies**
    - changes of response param
      - `+ policies.policy_type`
  - **CreatePolicy**
    - changes of response param
      - `+ policy.policy_type`
  - **ShowPolicy**
    - changes of response param
      - `+ policy.policy_type`
  - **UpdatePolicy**
    - changes of response param
      - `+ policy.policy_type`

### HuaweiCloud SDK CodeArtsDeploy

- _API Version_
  - V2
- _Features_
  - Support the APIs `CheckDeployStatus`, `StopDeployTask`
- _Bug Fix_
  - None
- _Change_
  - **ListEnvironments**
    - changes of response param
      - `+ result.project_id`
  - **ShowEnvironmentDetail**
    - changes of response param
      - `+ result.project_id`

### HuaweiCloud SDK DDS

- _API Version_
  - V3
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **SetAutoEnlargePolicies**
    - changes of request param
      - `+ policies.size`
      - `* policies: list<DiskAutoExpansionPolicy> -> list<DiskSetAutoExpansionPolicy>`
  - **ShowAutoEnlargePolicy**
    - changes of response param
      - `+ policy.size`

### HuaweiCloud SDK MPC

- _API Version_
  - V1
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - Remove the APIs `ListEncryptTask`, `CreateEncryptTask`, `DeleteEncryptTask`
  - **CreateTranscodingTask**
    - changes of request param
      - `+ metadata`
      - `+ av_parameters.video.buf_size`
      - `+ av_parameters.video.frame_rate_float`
  - **ListTranscodingTask**
    - changes of response param
      - `+ task_array.metadata`
      - `+ task_array.av_parameters.video.buf_size`
      - `+ task_array.av_parameters.video.frame_rate_float`
  - **ListTranscodeDetail**
    - changes of response param
      - `+ task_array.media_detail.metadata`
  - **CreateEditingJob**
    - changes of request param
      - `+ concats.av_parameters.video.buf_size`
      - `+ concats.av_parameters.video.frame_rate_float`
  - **ListEditingJob**
    - changes of response param
      - `+ jobs.edit_task_req.concats.av_parameters.video.buf_size`
      - `+ jobs.edit_task_req.concats.av_parameters.video.frame_rate_float`

### HuaweiCloud SDK RDS

- _API Version_
  - V3
- _Features_
  - Support the APIs `ListInstancesNoIndexTables`, `ShowTaskDetail`
- _Bug Fix_
  - None
- _Change_
  - None

# 3.1.154 2025-09-11

### HuaweiCloud SDK CPCS

- _API Version_
  - V1
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ShowVmMonitor**
    - changes of response param
      - `+ average`
      - `+ max`
  - **ShowAppAccessKeyList**
    - changes of response param
      - `+ total_num`

### HuaweiCloud SDK DBSS

- _API Version_
  - V1
- _Features_
  - Support the following APIs:
    - `UpdateAuditRiskBucketPath`
    - `ShowServerVersion`
    - `UpdateAuditTaskStatus`
    - `ShowAuditStatistics`
    - `ShowSqlDetail`
    - `CountSqlStatistics`
    - `CountSessionStatistics`
    - `CountOperationStatistics`
    - `CountInjectionStatistics`
    - `CountSqlTrendStatistics`
    - `CountRiskTrendStatistics`
    - `CountDbAccountSession`
    - `CountDbClientSession`
    - `ShowInstanceMonitorInfo`
    - `ShowAuditTaskStatus`
    - `SetAuditInstanceTimeZone`
    - `ConfirmUpgradeAudit`
    - `ShowAuditUpgradeStatus`
    - `ShowSensitiveResultSwitch`
    - `SetSensitiveResultSwitch`
    - `ShowSensitiveMaskSwitch`
    - `SetSensitiveSwitch`
    - `SetSensitiveMaskRuleSwitch`
    - `UpdateSensitiveMaskRule`
    - `DeleteSensitiveRules`
    - `ListAuditSensitiveMasksNew`
    - `CreateSensitiveMaskRule`
    - `DeleteAuditScope`
    - `UpdateAuditScopeRule`
    - `BatchDeleteAuditScope`
    - `SetAuditScopeRuleSwitch`
    - `ListAuditRuleScopesNew`
    - `CreateAuditScopeRule`
    - `ShowInstanceQuota`
    - `SetRiskRuleRank`
    - `DeleteAuditRuleRisk`
    - `ListAuditRuleRisksNew`
    - `CreateAuditRiskRule`
    - `UpdateAuditSqlRule`
    - `DeleteAuditRuleSql`
    - `SetSqlRuleRank`
    - `CreateAuditSqlRule`
    - `SetAuditSqlRuleSwitch`
    - `CreateAuditDbAgent`
    - `BatchSetAuditAlarmLogStatus`
    - `SetAuditAlarmLogStatus`
    - `DeleteAuditAlarmLog`
    - `ListAuditBackupRiskTemplates`
    - `ShowAuditBackRiskTemplate`
    - `ShowBackupRiskBucketPath`
    - `SetAuditBackupRiskSwitch`
    - `ListInstances`
    - `UpdateDbOmInstanceName`
    - `UnbindDbOmEip`
    - `BindDbOmEip`
    - `ChangeDbOmSecurityGroup`
    - `ResetDbOmPassword`
    - `ShowAuditRuleRiskNew`
    - `SetRiskOperationPolicy`
    - `RebootDbOmInstance`
    - `StopDbOmInstance`
    - `StartDbOmInstance`
    - `DeleteDbOmInstance`
    - `CreateDbOmInstancePeriod`
    - `ListDbEncryptInstances`
    - `UpdateDbEncryptInstanceName`
    - `UnbindDbEncryptEip`
    - `BindDbEncryptEip`
    - `ChangeDbEncryptSecurityGroup`
    - `ResetDbEncryptPassword`
    - `RebootDbEncryptInstance`
    - `StopDbEncryptInstance`
    - `StartDbEncryptInstance`
    - `DeleteDbEncryptInstance`
    - `CreateDbEncryptInstancePeriod`
    - `ListAuditBackupInfo`
    - `SetAuditBackupSwitch`
    - `ShowAuditBackupStatus`
    - `RetryAuditBackupTask`
    - `RestoreAuditBackup`
    - `ListAuditObsBuckets`
    - `DeleteAuditBackupTask`
    - `SetAuditAutoBackupTemplate`
    - `ListAuditReportTemplates`
    - `DeleteAuditReport`
    - `DownloadAuditReport`
    - `UpdateAuditTopicReportSchedulerConfig`
    - `ShowAuditTopicReportSchedulerConfig`
    - `ListAuditReports`
    - `CreateReport`
    - `UpdateAuditWhitelist`
    - `DeleteAuditWhitelist`
    - `ListWhitelists`
    - `BatchAddAuditWhitelist`
    - `ListAuditTags`
    - `ListAlarmTopicConfigInfoNew`
    - `SetAlarmTopicConfigInfoNew`
    - `SwitchRiskRuleNew`
    - `ListAuditInstancesNew`
    - `DeleteInstancesNew`
    - `ShowAuditQuotaNew`
    - `ListEcsSpecificationNew`
    - `ListAvailabilityZoneInfosNew`
    - `ListAuditInstanceJobsNew`
    - `ListAuditOperateLogsNew`
    - `ListSqlInjectionRulesNew`
    - `CreateInstancesPeriodOrderNew`
    - `UpdateAuditSecurityGroupNew`
    - `SwitchAgentNew`
    - `ListAuditDatabasesNew`
    - `AddAuditDatabaseNew`
    - `AddRdsDatabaseNew`
    - `DeleteAuditDatabaseNew`
    - `UploadAuditDbConfig`
    - `SwitchAuditDatabaseNew`
    - `DownloadAuditAgentNew`
    - `DeleteAuditAgentNew`
    - `ListAuditTrendHistory`
    - `StartAuditInstanceNew`
    - `StopAuditInstanceNew`
    - `RebootAuditInstanceNew`
    - `UpdateAuditInstanceNew`
    - `ListAuditAlarmLogNew`
    - `ListAuditSqlsNew`
    - `ListAuditAgentNew`
    - `AddAuditAgentNew`
- _Bug Fix_
  - None
- _Change_
  - Deprecate the following APIs:
    - `ListAlarmTopicConfigInfo`
    - `SetAlarmTopicConfigInfo`
    - `SwitchRiskRule`
    - `ShowAuditQuota`
    - `ListSqlInjectionRules`
    - `ListAuditRuleRisks`
    - `ShowAuditRuleRisk`
    - `ListAuditSensitiveMasks`
    - `UpdateAuditSecurityGroup`
    - `AddRdsNoAgentDatabase`
    - `SwitchAgent`
    - `AddAuditDatabase`
    - `AddRdsDatabase`
    - `DeleteAuditDatabase`
    - `SwitchAuditDatabase`
    - `DownloadAuditAgent`
    - `DeleteAuditAgent`
    - `StartAuditInstance`
    - `StopAuditInstance`
    - `RebootAuditInstance`
    - `UpdateAuditInstance`
    - `ListAuditAlarmLog`
    - `ListAuditSqls`
    - `ListAuditAgent`
    - `AddAuditAgent`
    - `DeleteInstances`
    - `ListAuditInstances`
    - `ListEcsSpecification`
    - `ListAvailabilityZoneInfos`
    - `ListAuditInstanceJobs`
    - `ListAuditOperateLogs`
    - `ListAuditRuleScopes`
    - `CreateInstancesPeriodOrder`
    - `ListAuditDatabases`
  - **ListSqlInjectionRules**
    - changes of request param
      - `+ page`
      - `+ size`
  - **ListAuditRuleRisks**
    - changes of response param
      - `+ customize_total`
  - **ListRdsDatabases**
    - changes of request param
      - `+ db_type: enum value [ORACLE,DAMENG,KINGBASE]`
  - **ListAuditAlarmLog**
    - changes of request param
      - `+ time.time_range: enum value [HOUR,THREE_HOUR,TWELVE_HOUR,DAY,WEEK,MONTH]`
      - `- time.time_range: enum value [ HOUR, THREE_HOUR, TWELVE_HOUR, DAY, WEEK, MONTH;]`
      - `* risk: string -> list<string>`
  - **ListAuditSqls**
    - changes of request param
      - `- risk_levels: enum value [HIGH,MEDIUM,LOW,NO_RISK]`
  - **AddAuditAgent**
    - changes of request param
      - `- mode: enum value [0,1]`
      - `- agent_type: enum value [APP,DB]`
  - **ListAuditOperateLogs**
    - changes of request param
      - `- action: enum value [CREATE,DELETE,DOWNLOAD,UPDATE]`
      - `- time.time_range: enum value [HALF_HOUR, HOUR, THREE_HOUR, TWELVE_HOUR, DAY, WEEK, MONTH]`
  - **ListResourceInstanceByTag**
    - changes of request param
      - `* sys_tags: object<TagKeyValuesBean> -> list<TagKeyValuesBean>`
  - **CountResourceInstanceByTag**
    - changes of request param
      - `* sys_tags: object<TagKeyValuesBean> -> list<TagKeyValuesBean>`

### HuaweiCloud SDK ECS

- _API Version_
  - V2
- _Features_
  - Support the APIs `ShowServerAttachableNicNum`, `ShowFlavorCapacity`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK GaussDBforopenGauss

- _API Version_
  - V3
- _Features_
  - Support the following APIs:
    - `UpdateRedistributionControl`
    - `ListTopSqls`
    - `ListSlowSqls`
    - `ListSqlExcuteNodes`
    - `ShowInstanceMetricData`
    - `StopSession`
    - `ListTableDefinitions`
    - `ListEnhanceFullSqlStatistics`
    - `ShowSessionOverview`
    - `ListSessionStatistics`
    - `ListTableDefinition`
    - `ListHbaInfoHistory`
    - `ListHbaInfos`
    - `ModifyHbaConf`
    - `AddHbaConfs`
    - `DeleteHbaConfs`
    - `ListReadonlyNodes`
    - `CreateReadonlyNodes`
    - `DeleteReadonlyNodes`
    - `SwitchReplica`
    - `ShowMetricNames`
    - `ShowInstancesStatistics`
    - `ListLtsConfigs`
    - `BindLtsConfig`
    - `UnbindLtsConfig`
    - `ShowSlowSqlPlan`
    - `ShowSlowSqlStack`
    - `ListKeyViewExecuteNode`
    - `ListSlowSqlDetails`
    - `ListDatabaseSchemaTables`
    - `RestoreHbaInfo`
    - `ListDatabaseVolumeSummary`
    - `ShowAlarmStatistics`
    - `ListMetricDatas`
    - `CollectWdrSnapshot`
    - `ShowWdrSnapshotStatus`
    - `SwitchWdrSnapshotStatus`
    - `CreateWdrSnapshot`
    - `StopFreeSession`
    - `ListRealTimeSessions`
    - `ShowGlobalSlowSqlDetail`
    - `ListKmsTdeKey`
    - `SwitchKmsTde`
    - `ShowKmsKeyDetail`
- _Bug Fix_
  - None
- _Change_
  - **CreateDatabase**
    - changes of request param
      - `- x-auth-token`
  - **ExportSlowSql**
    - changes of request param
      - `+ sort_key: enum value [table_size,id,table_name,table_owner,database_name,schema_name,is_part_type,is_hash_cluster_key,tuples,create_time,update_time,average_size,max_ratio,min_ratio,skew_size,skew_ratio,skew_stddev]`
      - `+ sort_order: enum value [ASC,DESC]`
  - **ListConfigurationsDiff**
    - changes of request param
      - `- x-auth-token`
  - **ListDisasterRecoveryRecord**
    - changes of response param
      - `* records: list<RecordInfoResponse> -> list<RecordInfoResponseResult>`
  - **ShowBatchUpgradeCandidateVersions**
    - changes of response param
      - `* hotfix_upgrade_infos: list<HotfixInfo> -> list<HotfixInfoResult>`

### HuaweiCloud SDK IoTDM

- _API Version_
  - V5
- _Features_
  - Support the APIs `ListInstanceTasks`, `ShowInstanceTask`, `RetryInstanceTask`, `ListInstanceFlavors`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK MetaStudio

- _API Version_
  - V1
- _Features_
  - Support the APIs `SignAgreement`, `SignSpecialAgreement`
- _Bug Fix_
  - None
- _Change_
  - Remove the following APIs:
    - `ListAsrVocabulary`
    - `CreateAsrVocabulary`
    - `ShowAsrVocabulary`
    - `UpdateAsrVocabulary`
    - `DeleteAsrVocabulary`
    - `ShowAsrVocabularyAssociation`

### HuaweiCloud SDK SMN

- _API Version_
  - V2
- _Features_
  - Support the following APIs:
    - `ConfirmSubscription`
    - `UnsubscribeSubscription`
    - `ListProtocols`
    - `ListCloudService`
    - `DownloadHttpCert`
    - `DeleteSubscriptionsByTopic`
    - `BatchDeleteSubscriptions`
    - `BatchDeleteSubscriptionsByTopic`
- _Bug Fix_
  - None
- _Change_
  - None

# 3.1.153 2025-09-04

### HuaweiCloud SDK CDN

- _API Version_
  - V2
- _Features_
  - Support the following APIs:
    - `ShowStatsConfigs`
    - `SetStatsConfig`
    - `ListDomainClientStats`
    - `ListCdnDomainTopOriginUrl`
    - `ListCdnDomainTopIps`
    - `ListCdnDomainTopUas`
    - `ListSubscriptionTasks`
    - `CreateSubscriptionTask`
    - `UpdateSubscriptionTask`
    - `DeleteSubscriptionTask`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK Cloudtest

- _API Version_
  - V1
- _Features_
  - Support the following APIs:
    - `UploadCacheFile`
    - `DeleteCacheFile`
    - `ListIteratorsInfo`
    - `SaveTestReportCustomDetail`
    - `UpdateTestReportCustomDetailByUri`
    - `DeleteTestReportCustomDetailByUri`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK CodeArtsBuild

- _API Version_
  - V3
- _Features_
  - Support the following APIs:
    - `ShowAvailableInnerSpec`
    - `ShowPackageSpecCountDown`
    - `AddFavouriteCustomTemplate`
    - `RemoverFavouriteCustomTemplate`
    - `ShowTemplate`
    - `ApplyProjectPermission`
    - `BatchUpdateJobRolePermission`
    - `CheckJobInternal`
    - `BatchDeleteBuildJobs`
    - `ListEndPoints`
    - `UpdateJobGroup`
    - `ListGroupTree`
    - `SwitchedPacket`
    - `MoveGroup`
    - `DeleteGroup`
    - `CreateJobGroup`
    - `ShowBuildDetails`
    - `ShowDomainStatus`
    - `ShowDomainsStatuses`
    - `ShowUserChargeType`
    - `UpdateNewNoticeNew`
- _Bug Fix_
  - None
- _Change_
  - **AddKeystorePermission**
    - changes of request param
      - `+ user_id`

### HuaweiCloud SDK DDS

- _API Version_
  - V3
- _Features_
  - Support the APIs `ListBackupDownloadPolicy`, `UpdateBackupDownloadPolicy`, `SaveBackupDownloadPolicy`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK ECS

- _API Version_
  - V2
- _Features_
  - Support the following APIs:
    - `ExecuteServerRedeploy`
    - `BatchResizeServers`
    - `ShowAppendableVolumeQuota`
    - `BatchDetachVolumes`
    - `ExecuteServerDump`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK EPS

- _API Version_
  - V1
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListEnterpriseProject**
    - changes of response param
      - `+ enterprise_projects.delete_flag`
  - **CreateEnterpriseProject**
    - changes of response param
      - `+ enterprise_project.delete_flag`
  - **ShowEnterpriseProject**
    - changes of response param
      - `+ enterprise_project.delete_flag`
  - **UpdateEnterpriseProject**
    - changes of response param
      - `+ enterprise_project.delete_flag`

### HuaweiCloud SDK GaussDB

- _API Version_
  - V3
- _Features_
  - Support the following APIs:
    - `ShowProxyFlavorsByAzCode`
    - `ShowErrorLogDownloadLink`
    - `ListAuditLogs`
    - `ShowAuditLogPolicy`
    - `SetAuditLogPolicy`
    - `ShowAuditLogDownloadLink`
    - `ShowTableMetaInfo`
    - `BatchUpgradeDatabases`
    - `ShowInstanceDatabasesForHtap`
    - `ShowHtapErrorLogDetail`
    - `ModifyStarRocksSecurityGroup`
    - `ShowHtapLtsConfig`
    - `ListInstanceNode`
    - `ShowInstanceTablesForHtap`
    - `UpdateProxyPrivateDnsName`
    - `CreateProxyDnsName`
    - `DeleteProxyPrivateDnsName`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK GaussDBforopenGauss

- _API Version_
  - V3
- _Features_
  - Support the APIs `ExportSlowSql`, `ListSchemaAndTable`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK IoTDA

- _API Version_
  - V5
- _Features_
  - Support the following APIs:
    - `ListDeviceCertificate`
    - `ShowDeviceCertificate`
    - `UpdateDeviceCertificate`
    - `DeleteDeviceCertificate`
    - `ListDeviceByDeviceCertificate`
    - `ListHarmonySoftBus`
    - `AddHarmonySoftBus`
    - `ShowHarmonySoftBus`
    - `DeleteHarmonySoftBus`
    - `CreateSyncHarmonySoftBus`
    - `ResetHarmonySoftBusKey`
    - `ListDeviceAuthenticationTemplates`
    - `CreateDeviceAuthenticationTemplate`
    - `ShowDeviceAuthenticationTemplate`
    - `UpdateDeviceAuthenticationTemplate`
    - `DeleteDeviceAuthenticationTemplate`
    - `ListSecurityProfiles`
    - `CreateSecurityProfile`
    - `ShowSecurityProfile`
    - `UpdateSecurityProfile`
    - `DeleteSecurityProfile`
    - `DeleteDeviceShadow`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK LTS

- _API Version_
  - V2
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **CreateLogGroup**
    - changes of request param
      - `+ enterprise_project_id`

### HuaweiCloud SDK RDS

- _API Version_
  - V3
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListInstances**
    - changes of request param
      - `+ group_type`

# 3.1.152 2025-08-28

### HuaweiCloud SDK ECS

- _API Version_
  - V2
- _Features_
  - Support the API `CreateLaunchTemplate`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK LTS

- _API Version_
  - V2
- _Features_
  - Support the API `ListLogStreamIndex`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK MetaStudio

- _API Version_
  - V1
- _Features_
  - Support the following APIs:
    - `CheckVoiceAsset`
    - `ShowVocabularySwitchConfigs`
    - `SaveTtscTenantConfigs`
    - `ShowTtsJob`
    - `ListDocumentInfo`
    - `CreateDocument`
    - `DeleteDocument`
    - `DownloadDocument`
    - `UpdateDocument`
    - `ShowDocumentInfo`
    - `UpdateDocumentSegmentParam`
    - `PreviewDocumentSegment`
    - `StartDocumentSegment`
    - `ListDocumentSegment`
    - `UpdateDocumentSegmentInfo`
    - `ListInstructionLibrary`
    - `CreateInstructionLibrary`
    - `ShowInstructionLibrary`
    - `UpdateInstructionLibrary`
    - `DeleteInstructionLibrary`
    - `ListInstruction`
    - `CreateInstruction`
    - `ShowInstruction`
    - `UpdateInstruction`
    - `DeleteInstruction`
    - `CreateInteractiveChat`
    - `ListKnowledgeLibrary`
    - `CreateKnowledgeLibrary`
    - `ShowKnowledgeLibrary`
    - `UpdateKnowledgeLibrary`
    - `DeleteKnowledgeLibrary`
    - `CheckRecallKnowledgeLibrary`
    - `ListLlmConfig`
    - `CreateLlmConfig`
    - `ShowLlmConfig`
    - `UpdateLlmConfig`
    - `DeleteLlmConfig`
    - `ListMcpServer`
    - `CreateMcpServer`
    - `ShowMcpServer`
    - `UpdateMcpServer`
    - `DeleteMcpServer`
    - `ListPluginConfig`
    - `CreatePluginConfig`
    - `ShowPluginConfig`
    - `UpdatePluginConfig`
    - `DeletePluginConfig`
    - `ShowPluginConfigDefaultInfo`
    - `ListQuestionAnswer`
    - `CreateQuestionAnswer`
    - `ShowQuestionAnswer`
    - `UpdateQuestionAnswer`
    - `DeleteQuestionAnswer`
    - `ListRole`
    - `CreateRole`
    - `ShowRole`
    - `UpdateRole`
    - `DeleteRole`
- _Bug Fix_
  - None
- _Change_
  - **ShowAsrVocabulary**
    - changes of response param
      - `- language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai]`
  - **UpdateAsrVocabulary**
    - changes of request param
      - `- language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai]`
    - changes of response param
      - `- language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai]`
  - **ShowHotQuestion**
    - changes of response param
      - `- language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai]`
  - **UpdateHotQuestion**
    - changes of response param
      - `- language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai]`
  - **ShowPacifyWords**
    - changes of response param
      - `- language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai]`
  - **UpdatePacifyWords**
    - changes of response param
      - `- language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai]`
  - **UpdatePacifyWordsSwitch**
    - changes of request param
      - `- language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai]`
  - **UpdatePacifyWordsTriggerTime**
    - changes of request param
      - `- language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai]`
  - **ShowWelcomeSpeech**
    - changes of response param
      - `- language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai]`
  - **UpdateWelcomeSpeech**
    - changes of response param
      - `- language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai]`
  - **UpdateWelcomeSpeechSwitch**
    - changes of request param
      - `- language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai]`
  - **CreateAsrVocabulary**
    - changes of request param
      - `- language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai]`
    - changes of response param
      - `- language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai]`
  - **ListAsrVocabulary**
    - changes of response param
      - `- data.language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai]`
  - **ShowAsrVocabularyAssociation**
    - changes of response param
      - `- data.language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai]`
  - **StartSmartChatJob**
    - changes of response param
      - `- language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai]`
  - **ShowSmartChatJob**
    - changes of response param
      - `- language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai]`
  - **CreateHotQuestion**
    - changes of request param
      - `- language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai]`
    - changes of response param
      - `- language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai]`
  - **ListHotQuestion**
    - changes of response param
      - `- data.language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai]`
  - **ListHotWords**
    - changes of response param
      - `- data.language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai]`
  - **CreateHotWords**
    - changes of request param
      - `- sis_hot_words.language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai]`
    - changes of response param
      - `- language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai]`
  - **ShowHotWords**
    - changes of response param
      - `- language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai]`
  - **UpdateHotWords**
    - changes of request param
      - `- sis_hot_words.language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai]`
    - changes of response param
      - `- language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai]`
  - **CreatePacifyWords**
    - changes of request param
      - `- language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai]`
    - changes of response param
      - `- language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai]`
  - **ListPacifyWords**
    - changes of response param
      - `- data.language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai]`
  - **ListRobot**
    - changes of response param
      - `- data.language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai]`
  - **CreateRobot**
    - changes of request param
      - `- language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai]`
  - **ShowRobot**
    - changes of response param
      - `- language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai]`
  - **UpdateRobot**
    - changes of request param
      - `- language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai]`
  - **CreateWelcomeSpeech**
    - changes of request param
      - `- language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai]`
    - changes of response param
      - `- language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai]`
  - **ListWelcomeSpeech**
    - changes of response param
      - `- data.language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai]`
  - **ListDigitalHumanVideo**
    - changes of request param
      - `+ job_ids`
  - **ListSmartChatRooms**
    - changes of response param
      - `+ count_client_nums`
      - `+ count_client_nums_token`
      - `+ smart_chat_rooms.billing_mode`
      - `+ smart_chat_rooms.reuse_resource`
      - `+ smart_chat_rooms.client_nums`
  - **CreateSmartChatRoom**
    - changes of request param
      - `+ billing_mode`
      - `+ reuse_resource`
      - `+ client_nums`
      - `+ video_config.is_vocabulary_config_enable`
      - `+ layer_config.sequence_no`
  - **ShowSmartChatRoom**
    - changes of response param
      - `+ client_nums`
      - `+ billing_mode`
      - `+ reuse_resource`
      - `+ video_config.is_vocabulary_config_enable`
      - `+ layer_config.sequence_no`
  - **UpdateSmartChatRoom**
    - changes of request param
      - `+ billing_mode`
      - `+ reuse_resource`
      - `+ client_nums`
      - `+ video_config.is_vocabulary_config_enable`
      - `+ layer_config.sequence_no`
    - changes of response param
      - `+ client_nums`
      - `+ billing_mode`
      - `+ reuse_resource`
      - `+ video_config.is_vocabulary_config_enable`
      - `+ layer_config.sequence_no`
  - **ShowSmartLive**
    - changes of response param
      - `+ is_ai_mark_on`
  - **ListJobOperationLog**
    - changes of response param
      - `+ operations.external_info.admin_audit_failure_reason`
  - **ShowAsset**
    - changes of response param
      - `+ asset_extra_meta.human_model_2d_meta.is_live_copy`
  - **UpdateDigitalAsset**
    - changes of request param
      - `+ asset_extra_meta.human_model_2d_meta.is_live_copy`
    - changes of response param
      - `+ asset_extra_meta.human_model_2d_meta.is_live_copy`
  - **StartSmartLive**
    - changes of request param
      - `+ video_config.is_vocabulary_config_enable`
  - **ListSmartLive**
    - changes of response param
      - `+ is_ai_mark_on`
      - `+ smart_live_jobs.is_ai_mark_on`
  - **ListSmartLiveJobs**
    - changes of response param
      - `+ is_ai_mark_on`
      - `+ smart_live_jobs.is_ai_mark_on`
  - **CreateDigitalAsset**
    - changes of request param
      - `+ asset_extra_meta.human_model_2d_meta.is_live_copy`
  - **ListAssets**
    - changes of response param
      - `+ assets.asset_extra_meta.human_model_2d_meta.is_live_copy`
  - **Create2DDigitalHumanVideo**
    - changes of request param
      - `+ video_config.is_vocabulary_config_enable`
      - `+ shoot_scripts.shoot_script.layer_config.sequence_no`
  - **Show2DDigitalHumanVideo**
    - changes of response param
      - `+ video_config.is_vocabulary_config_enable`
      - `+ shoot_scripts.shoot_script.layer_config.sequence_no`
  - **CreatePhotoDigitalHumanVideo**
    - changes of request param
      - `+ shoot_scripts.shoot_script.layer_config.sequence_no`
  - **ShowPhotoDigitalHumanVideo**
    - changes of response param
      - `+ shoot_scripts.shoot_script.layer_config.sequence_no`
  - **CreateSmartLiveRoom**
    - changes of request param
      - `+ video_config.is_vocabulary_config_enable`
      - `+ scene_scripts.layer_config.sequence_no`
  - **ShowSmartLiveRoom**
    - changes of response param
      - `+ video_config.is_vocabulary_config_enable`
      - `+ scene_scripts.layer_config.sequence_no`
  - **UpdateSmartLiveRoom**
    - changes of request param
      - `+ video_config.is_vocabulary_config_enable`
      - `+ scene_scripts.layer_config.sequence_no`
    - changes of response param
      - `+ video_config.is_vocabulary_config_enable`
      - `+ scene_scripts.layer_config.sequence_no`
  - **ListVideoScripts**
    - changes of response param
      - `- video_scripts.model_asset_type: enum value [HUMAN_MODEL_3D]`
  - **CreateVideoScripts**
    - changes of request param
      - `- scene_asset_id`
      - `- model_asset_type: enum value [HUMAN_MODEL_3D]`
      - `+ video_config.is_vocabulary_config_enable`
      - `+ shoot_scripts.shoot_script.layer_config.sequence_no`
  - **ShowVideoScript**
    - changes of response param
      - `- scene_asset_id`
      - `- model_asset_type: enum value [HUMAN_MODEL_3D]`
      - `+ video_config.is_vocabulary_config_enable`
      - `+ shoot_scripts.shoot_script.layer_config.sequence_no`
  - **UpdateVideoScript**
    - changes of request param
      - `- scene_asset_id`
      - `- model_asset_type: enum value [HUMAN_MODEL_3D]`
      - `+ video_config.is_vocabulary_config_enable`
      - `+ shoot_scripts.shoot_script.layer_config.sequence_no`

### HuaweiCloud SDK TMS

- _API Version_
  - V1
- _Features_
  - Support the API `ListTags`
- _Bug Fix_
  - None
- _Change_
  - None

# 3.1.151 2025-08-25

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
      - `+ users.comment`
  - **ListSqlserverDbUsers**
    - changes of response param
      - `+ users.comment`

# 3.1.150 2025-08-21

### HuaweiCloud SDK CDN

- _API Version_
  - V2
- _Features_
  - Support the following APIs:
    - `ShowDomainTemplate`
    - `CreateDomainTemplate`
    - `UpdateDomainTemplate`
    - `DeleteDomainTemplate`
    - `ApplyDomainTemplate`
    - `ShowAppliedTemplateRecord`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK CFW

- _API Version_
  - V1
- _Features_
  - Support the following APIs:
    - `ShowEwAssociatedVpc`
    - `ShowEwAssociatedEr`
    - `ShowLogsCount`
    - `ShowFlowDetail`
    - `ShowFlowTop`
    - `ListFlowStatistic`
    - `ShowFlowTrend`
    - `ShowAttackDetail`
    - `ShowAttackTop`
    - `ShowAccessDetail`
    - `ListLogs`
    - `ExportLogs`
    - `ListAccounts`
    - `EnableMultiAccount`
    - `ListOrganizationAccounts`
    - `ListOrganizationTree`
    - `ListReportProfiles`
    - `CreateReportProfile`
    - `ShowReportProfile`
    - `UpdateReportProfile`
    - `DeleteReportProfile`
    - `ShowFirewallReport`
- _Bug Fix_
  - None
- _Change_
  - **ListCustomerIps**
    - changes of request param
      - `+ ips_id`
    - changes of response param
      - `+ data`
  - **ChangeEastWestFirewallStatus**
    - changes of request param
      - `- enterprise_project_id`
      - `- fw_instance_id`
  - **UpdateCustomerIps**
    - changes of response param
      - `+ data`
  - **ShowCustomerIpsInfo**
    - changes of response param
      - `- data.action: enum value [0,1]`
      - `- data.affected_os: enum value [0,1,2,3,4,5,6,7,8,9,10]`
  - **ListAttackStatistic**
    - changes of request param
      - `+ size`

### HuaweiCloud SDK ECS

- _API Version_
  - V2
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ShowRecycleBin**
    - changes of response param
      - `+ project_id`
      - `+ switch`
      - `+ policy`
      - `- recycle_bin`

### HuaweiCloud SDK Live

- _API Version_
  - V1
- _Features_
  - Support the following APIs:
    - `ShowOutputInfo`
    - `ModifyFlowOutput`
    - `CreateFlowOutput`
    - `DeleteFlowOutput`
    - `ListCesDimsInfo`
    - `ListCesInstance`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK OCR

- _API Version_
  - V1
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **RecognizeVatInvoice**
    - changes of request param
      - `+ ofd_to_image_mode`

### HuaweiCloud SDK RDS

- _API Version_
  - V3
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **SetLogLtsConfigs**
    - changes of request param
      - `+ engine: enum value [postgresql,sqlserver]`
  - **DeleteLogLtsConfigs**
    - changes of request param
      - `+ engine: enum value [postgresql,sqlserver]`
  - **ListLogLtsConfigs**
    - changes of request param
      - `+ engine: enum value [postgresql,sqlserver]`

### HuaweiCloud SDK RGC

- _API Version_
  - V1
- _Features_
  - Support the API `ShowBestPracticeAccountInfo`
- _Bug Fix_
  - None
- _Change_
  - **DisableControl**
    - changes of request param
      - `- parameters`
      - `* body: object<ControlOperateReqBody> -> object<DisableControlOperateReqBody>`

# 3.1.149 2025-08-14

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
      - `+ configs.compress.compress_min_length`
      - `+ configs.compress.compress_max_length`
  - **UpdateDomainFullConfig**
    - changes of request param
      - `+ configs.compress.compress_min_length`
      - `+ configs.compress.compress_max_length`

### HuaweiCloud SDK CodeArtsBuild

- _API Version_
  - V3
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ShowProjectPermission**
    - changes of response param
      - `+ result.delete_permission`
      - `+ result.view_permission`
      - `+ result.execute_permission`
      - `+ result.copy_permission`
      - `+ result.forbidden_permission`
      - `+ result.manager_permission`
      - `+ result.role_ids`
      - `+ result.role_names`
  - **UpdateNotice**
    - changes of request param
      - `+ send_switch`
      - `+ use_project_notice`
  - **ListRecommendOfficialTemplate**
    - changes of response param
      - `+ result.items.template.actions`
      - `+ result.items.template.auto_update_sub_module`
      - `+ result.items.template.image`
      - `+ result.items.template.image_source`
      - `* result.items.template: object<QueryTemplate> -> object<QueryTemplateVo>`
  - **ListCustomTemplate**
    - changes of response param
      - `+ result.items.template.actions`
      - `+ result.items.template.auto_update_sub_module`
      - `+ result.items.template.image`
      - `+ result.items.template.image_source`
      - `* result.items.template: object<QueryTemplate> -> object<QueryTemplateVo>`
  - **ListTemplates**
    - changes of response param
      - `+ result.items.template.actions`
      - `+ result.items.template.auto_update_sub_module`
      - `+ result.items.template.image`
      - `+ result.items.template.image_source`
      - `* result.items.template: object<QueryTemplate> -> object<QueryTemplateVo>`

### HuaweiCloud SDK IdentityCenter

- _API Version_
  - V1
- _Features_
  - Support the following APIs:
    - `DescribeRegisteredRegions`
    - `RegisterRegion`
    - `GetIdentityCenterServiceStatus`
    - `StartIdentityCenter`
    - `DeleteIdentityCenter`
    - `ListIdentityStoreAssociation`
    - `GetSsoConfiguration`
    - `UpdateSsoConfiguration`
    - `GetMfaDeviceManagementForIdentityStore`
    - `PutMfaDeviceManagementForIdentityStore`
    - `CreateAlias`
    - `DisassociateProfile`
    - `GetPermissionSetSummary`
    - `GetHaConfiguration`
    - `UpdateHaConfiguration`
    - `ListAccountAssignmentsForPrincipal`
    - `ListApplicationInstances`
    - `CreateApplicationInstance`
    - `ListCatalogApplications`
    - `ListApplicationProviders`
    - `ListApplicationTemplates`
    - `ListApplicationAssignments`
    - `CreateApplicationAssignment`
    - `DeleteApplicationAssignment`
    - `GetApplicationAssignmentConfiguration`
    - `UpdateApplicationInstanceDisplayData`
    - `ImportApplicationInstanceServiceProviderMetadata`
    - `UpdateApplicationInstanceResponseConfiguration`
    - `UpdateApplicationInstanceResponseSchemaConfiguration`
    - `UpdateApplicationInstanceServiceProviderConfiguration`
    - `UpdateApplicationInstanceStatus`
    - `UpdateApplicationInstanceActiveCertificate`
    - `DeleteApplicationInstanceCertificate`
    - `UpdateApplicationInstanceSecurityConfiguration`
    - `DescribeApplication`
    - `ListApplications`
    - `ListApplicationInstanceCertificates`
    - `CreateApplicationInstanceCertificate`
    - `GetApplicationInstance`
    - `DeleteApplicationInstance`
    - `DescribeApplicationProvider`
    - `ListProfiles`
    - `DeleteProfile`
    - `ListApplicationAssignmentsForPrincipal`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK IdentityCenterStore

- _API Version_
  - V1
- _Features_
  - Support the following APIs:
    - `DescribeUsers`
    - `DescribeGroups`
    - `ResetPwdMode`
    - `EnableUser`
    - `DisableUser`
    - `VerifyEmail`
    - `RegisterMfaDeviceForUser`
    - `BatchListMfaDevicesForUser`
    - `UpdateMfaDeviceForUser`
    - `DeleteMfaDeviceForUser`
    - `ListExternalIdPConfigurationsForDirectory`
    - `CreateExternalIdPConfigurationForDirectory`
    - `EnableExternalIdPConfigurationForDirectory`
    - `DisableExternalIdPConfigurationForDirectory`
    - `GetSpConfigurationForDirectory`
    - `UpdateExternalIdPConfigurationForDirectory`
    - `DeleteExternalIdPConfigurationForDirectory`
    - `ListExternalIdPCertificates`
    - `ImportExternalIdPCertificate`
    - `DeleteExternalIdPCertificate`
    - `ListProvisioningTenants`
    - `CreateProvisioningTenant`
    - `DeleteProvisioningTenant`
    - `ListBearerTokens`
    - `CreateBearerToken`
    - `DeleteBearerToken`
    - `ListSessions`
    - `BatchDeleteSessions`
    - `GetIdentityStoreSummary`
    - `DescribePasswordPolicy`
    - `UpdatePasswordPolicy`
    - `ListSpCertificates`
    - `CreateSpCertificate`
    - `DeleteSpCertificate`
    - `UpdateSpActiveCertificate`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK KMS

- _API Version_
  - V2
- _Features_
  - Support the API `CreatePin`
- _Bug Fix_
  - None
- _Change_
  - **CreateDatakey**
    - changes of request param
      - `+ pin`
      - `+ pin_type`
      - `+ key_spec: enum value [SM4,HMAC_256,HMAC_384,HMAC_512,HMAC_SM3]`
  - **CreateDatakeyWithoutPlaintext**
    - changes of request param
      - `+ pin`
      - `+ pin_type`
      - `+ key_spec: enum value [SM4,HMAC_256,HMAC_384,HMAC_512,HMAC_SM3]`
  - **CreateEcDatakeyPair**
    - changes of request param
      - `+ pin`
      - `+ pin_type`
  - **EncryptDatakey**
    - changes of request param
      - `+ pin`
      - `+ pin_type`
      - `+ key_spec`
  - **CreateKey**
    - changes of request param
      - `+ vm_id`
    - changes of response param
      - `+ key_info.region_id`
  - **ListKeyStores**
    - changes of response param
      - `+ keystores.cluster_id`
  - **CreateKeyStore**
    - changes of request param
      - `+ cluster_id`
      - `+ keystore_type`
  - **ShowKeyStore**
    - changes of response param
      - `+ keystore.cluster_id`

### HuaweiCloud SDK MetaStudio

- _API Version_
  - V1
- _Features_
  - Support the following APIs:
    - `DownloadTemplate`
    - `DownloadResultFile`
    - `SearchTask`
    - `ShowTask`
    - `DeleteTask`
    - `ImportResource`
    - `ExportResource`
- _Bug Fix_
  - None
- _Change_
  - **ListTtscVocabularyGroups**
    - changes of request param
      - `+ limit`
      - `+ offset`
      - `+ group_id`
  - **ShowAsset**
    - changes of response param
      - `+ produce_id`
  - **UpdateDigitalAsset**
    - changes of response param
      - `+ produce_id`
  - **CreateDigitalAsset**
    - changes of response param
      - `+ produce_id`
  - **ListAssets**
    - changes of response param
      - `+ produce_id`
      - `+ assets.produce_id`

# 3.1.148 2025-08-07

### HuaweiCloud SDK EPS

- _API Version_
  - V1
- _Features_
  - Support the following APIs:
    - `ListMigrationRecord`
    - `ListResourceMapping`
    - `ShowEpConfigs`
    - `ShowAssociatedResources`
    - `DeleteEnterpriseProject`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK Organizations

- _API Version_
  - V1
- _Features_
  - Support the API `CreateResourceAccount`
- _Bug Fix_
  - None
- _Change_
  - **CreateAccount**
    - changes of response param
      - `+ create_account_status.failure_detail_msg`
  - **ListCreateAccountStatuses**
    - changes of response param
      - `+ create_account_statuses.failure_detail_msg`
  - **ShowCreateAccountStatus**
    - changes of response param
      - `+ create_account_status.failure_detail_msg`

### HuaweiCloud SDK RAM

- _API Version_
  - V1
- _Features_
  - Support the APIs `SearchDistinctSharedResources`, `SearchDistinctPrincipals`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK RDS

- _API Version_
  - V3
- _Features_
  - Support the following APIs:
    - `ListScheduleTasks`
    - `ListTasks`
    - `ListBusinessPartners`
    - `ListMarketplaceEngineProducts`
    - `ResetViewSqlStatistics`
    - `ListSqlStatistics`
- _Bug Fix_
  - None
- _Change_
  - **StartInstanceRestartAction**
    - changes of request param
      - `+ restart.restart_server`
      - `+ restart.forcible`
      - `+ restart.delay`
      - `* restart: object -> object<RestartConfiguration>`
  - **ListBackupTransfers**
    - changes of response param
      - `+ transfer_list.type`

# 3.1.147 2025-07-31

### HuaweiCloud SDK CFW

- _API Version_
  - V1
- _Features_
  - Support the following APIs:
    - `ShowCustomerIpsInfo`
    - `UpdateCustomerIps`
    - `ShowTrafficTrend`
    - `ShowAccessTop`
    - `ListAttackStatistic`
    - `ShowAttackTrend`
    - `ShowAttackTotal`
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
  - **SetAlarmTopicConfigInfo**
    - changes of response param
      - `- is_use_topic`

### HuaweiCloud SDK DRS

- _API Version_
  - V5
- _Features_
  - Support the API `ShowCompareProgress`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK EIP

- _API Version_
  - V2
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListPublicips**
    - changes of response param
      - `+ publicips.tags`
  - **ShowPublicip**
    - changes of response param
      - `+ publicip.tags`

### HuaweiCloud SDK IMS

- _API Version_
  - V2
- _Features_
  - Support the following APIs:
    - `ExportImageInSafeMode`
    - `CreateDataImageInSafeMode`
    - `CreateImageInSafeMode`
    - `ImportImageQuickInSafeMode`
    - `CopyImageInRegionInSafeMode`
- _Bug Fix_
  - None
- _Change_
  - **BatchAddMembers**
    - changes of request param
      - `+ domains`
      - `+ organizations`
  - **BatchDeleteMembers**
    - changes of request param
      - `+ domains`
      - `+ organizations`
  - **GlanceShowImageMember**
    - changes of response param
      - `+ member_type`
      - `+ urn`
  - **GlanceUpdateImageMember**
    - changes of response param
      - `+ member_type`
      - `+ urn`
  - **GlanceAddImageMember**
    - changes of response param
      - `+ member_type`
      - `+ urn`
  - **GlanceListImageMembers**
    - changes of response param
      - `+ members.member_type`
      - `+ members.urn`

### HuaweiCloud SDK Live

- _API Version_
  - V1
- _Features_
  - Support the API `CreateStreamForbiddenOnce`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK MetaStudio

- _API Version_
  - V1
- _Features_
  - Support the following APIs:
    - `ListTtscVocabularyGroups`
    - `CreateTtscVocabularyGroups`
    - `UpdateTtscVocabularyGroups`
    - `DeleteTtscVocabularyGroups`
    - `SetTtscGroupAssets`
- _Bug Fix_
  - None
- _Change_
  - **SaveTtscVocabularyConfigs**
    - changes of request param
      - `+ group_id`
  - **ShowTenantDurationCfg**
    - changes of response param
      - `+ short_assess_min`
      - `+ short_assess_max`
  - **SetJobBatchName**
    - changes of request param
      - `+ X-App-UserId`
  - **CreateTtscVocabularyConfigs**
    - changes of request param
      - `+ group_id`
  - **ListTtscVocabularyConfigs**
    - changes of request param
      - `+ group_id`
      - `+ asset_id`
    - changes of response param
      - `+ data.group_id`
  - **CreateTrainingBasicJob**
    - changes of request param
      - `+ is_ondemand_resource`
      - `+ supported_service`
      - `+ tag: enum value [LIVE,EDUCATION,CUSTOMER,STORYTELLING]`
  - **CreateTrainingMiddleJob**
    - changes of request param
      - `+ is_ondemand_resource`
      - `+ supported_service`
      - `+ tag: enum value [LIVE,EDUCATION,CUSTOMER,STORYTELLING]`
  - **CreateTrainingAdvanceJob**
    - changes of request param
      - `+ is_ondemand_resource`
      - `+ supported_service`
      - `+ tag: enum value [LIVE,EDUCATION,CUSTOMER,STORYTELLING]`
  - **CommitVoiceTrainingJob**
    - changes of request param
      - `+ tag: enum value [LIVE,EDUCATION,CUSTOMER,STORYTELLING]`
  - **ShowVoiceTrainingJob**
    - changes of response param
      - `+ assess_result`
      - `+ is_ondemand_resource`
      - `+ tag: enum value [LIVE,EDUCATION,CUSTOMER,STORYTELLING]`
      - `+ allocated_resource.charge_mode: enum value [ON_DEMAND]`
  - **ListJobOperationLog**
    - changes of response param
      - `+ operations.external_info.algorithm_failure_reason`
  - **ShowAsset**
    - changes of response param
      - `+ auto_operation_config`
      - `+ block_reason_code`
      - `+ system_properties.key: enum value [IS_CONTROLLED,LIVE_IS_AUTHORIZED,VIDEO_IS_AUTHORIZED,CHAT_IS_AUTHORIZED]`
      - `+ files.block_reason_code`
  - **UpdateDigitalAsset**
    - changes of request param
      - `+ auto_operation_config`
      - `+ system_properties.key: enum value [IS_CONTROLLED,LIVE_IS_AUTHORIZED,VIDEO_IS_AUTHORIZED,CHAT_IS_AUTHORIZED]`
    - changes of response param
      - `+ auto_operation_config`
      - `+ block_reason_code`
      - `+ system_properties.key: enum value [IS_CONTROLLED,LIVE_IS_AUTHORIZED,VIDEO_IS_AUTHORIZED,CHAT_IS_AUTHORIZED]`
      - `+ files.block_reason_code`
  - **ListVoiceTrainingJob**
    - changes of request param
      - `+ is_ondemand_resource`
    - changes of response param
      - `+ assess_result`
      - `+ is_ondemand_resource`
      - `+ jobs.assess_result`
      - `+ jobs.is_ondemand_resource`
      - `+ jobs.tag: enum value [LIVE,EDUCATION,CUSTOMER,STORYTELLING]`
      - `+ jobs.allocated_resource.charge_mode: enum value [ON_DEMAND]`
  - **CreateDigitalAsset**
    - changes of request param
      - `+ auto_operation_config`
      - `+ system_properties.key: enum value [IS_CONTROLLED,LIVE_IS_AUTHORIZED,VIDEO_IS_AUTHORIZED,CHAT_IS_AUTHORIZED]`
  - **ListAssets**
    - changes of request param
      - `- project_group_id`
      - `+ asset_source: enum value [GROUP_CUSTOMIZATION]`
    - changes of response param
      - `+ auto_operation_config`
      - `+ block_reason_code`
      - `+ assets.block_reason_code`
      - `+ assets.auto_operation_config`
      - `+ assets.system_properties.key: enum value [IS_CONTROLLED,LIVE_IS_AUTHORIZED,VIDEO_IS_AUTHORIZED,CHAT_IS_AUTHORIZED]`
      - `+ assets.files.block_reason_code`

# 3.1.146 2025-07-24

### HuaweiCloud SDK DBSS

- _API Version_
  - V1
- _Features_
  - Support the APIs `ListAlarmTopicConfigInfo`, `SetAlarmTopicConfigInfo`
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
  - **ListDataCompareOverview**
    - changes of response param
      - `+ data_compare_overview_infos.compare_num`
      - `+ data_compare_overview_infos.compare_end_num`
      - `+ data_compare_overview_infos.data_inconsistent_num`
      - `+ data_compare_overview_infos.uncomparable_num`
  - **ListContentCompareOverview**
    - changes of response param
      - `+ content_compare_result_infos.compare_num`
      - `+ content_compare_result_infos.compare_end_num`
      - `+ content_compare_result_infos.data_inconsistent_num`
      - `+ content_compare_result_infos.uncomparable_num`
  - **ListContentCompareDetail**
    - changes of response param
      - `+ content_compare_result_infos.status`
      - `+ content_compare_result_infos.complete_shard_count`
      - `+ content_compare_result_infos.total_shard_count`
      - `+ content_compare_result_infos.progress`

### HuaweiCloud SDK DRS

- _API Version_
  - V5
- _Features_
  - Support the APIs `ExportCreationTemplate`, `ShowExportProgress`, `ListTemplates`, `DownloadCreateTemplate`
- _Bug Fix_
  - None
- _Change_
  - **DownloadBatchCreateTemplate**
    - changes of request param
      - `+ engine_type`
  - **ImportBatchCreateJobs**
    - changes of request param
      - `+ type`
  - **ExecuteJobAction**
    - changes of request param
      - `+ job.action_name: enum value [diagnosis,start_repair,stop_repair]`
      - `- job.action_name: enum value [diagnosis：一键诊断。,start_repair：开始数据修复。,stop_repair：停止数据修复。]`
  - **BatchExecuteJobActions**
    - changes of request param
      - `+ jobs.action_name: enum value [diagnosis,start_repair,stop_repair]`
      - `- jobs.action_name: enum value [diagnosis：一键诊断。,start_repair：开始数据修复。,stop_repair：停止数据修复。]`

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
      - `+ server.network_interfaces.subnet_id`
  - **ListServersDetails**
    - changes of response param
      - `+ servers.network_interfaces.subnet_id`
  - **ListRecycleBinServers**
    - changes of response param
      - `+ servers.network_interfaces.subnet_id`

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
      - `+ projection_fields`

# 3.1.145 2025-07-17

### HuaweiCloud SDK MetaStudio

- _API Version_
  - V1
- _Features_
  - Support the following APIs:
    - `ListAsrVocabulary`
    - `CreateAsrVocabulary`
    - `ShowAsrVocabulary`
    - `UpdateAsrVocabulary`
    - `DeleteAsrVocabulary`
    - `ShowAsrVocabularyAssociation`
- _Bug Fix_
  - None
- _Change_
  - None

# 3.1.144 2025-07-10

### HuaweiCloud SDK CDN

- _API Version_
  - V2
- _Features_
  - Support the following APIs:
    - `ListRuleDetails`
    - `CreateRuleNew`
    - `UpdateRuleNew`
    - `DeleteRuleNew`
    - `BatchUpdateRuleStatus`
    - `UpdateFullRule`
    - `ListShareCacheGroups`
    - `CreateShareCacheGroups`
    - `UpdateShareCacheGroups`
    - `DeleteShareCacheGroups`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK CodeArtsBuild

- _API Version_
  - V3
- _Features_
  - Support the APIs `ShowJobPipelineInfo`, `StopTheJob`, `UpdateKeystorePermission`, `AddKeystorePermission`
- _Bug Fix_
  - None
- _Change_
  - **ListJob**
    - changes of request param
      - `+ page_index`
      - `+ page_size`
      - `+ search`
      - `+ sort_field`
      - `+ sort_order`
      - `+ creator_id`
      - `+ build_status`

### HuaweiCloud SDK ECS

- _API Version_
  - V2
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListFlavors**
    - changes of request param
      - `+ limit`
      - `+ marker`
  - **ShowServer**
    - changes of response param
      - `+ server.network_interfaces`
  - **ListServersDetails**
    - changes of response param
      - `+ servers.network_interfaces`
  - **ListRecycleBinServers**
    - changes of response param
      - `+ servers.network_interfaces`
  - **CreateServers**
    - changes of request param
      - `+ server.enclave_options`
  - **CreatePostPaidServers**
    - changes of request param
      - `+ server.enclave_options`

### HuaweiCloud SDK MetaStudio

- _API Version_
  - V1
- _Features_
  - Support the API `ListSmartChatJob`
- _Bug Fix_
  - None
- _Change_
  - **ShowSmartChatJob**
    - changes of response param
      - `+ job_finish_reason`
      - `+ is_pool_mode`
  - **ShowAsyncTtsJob**
    - changes of response param
      - `+ audio_srt_file_url`
      - `+ audio_action_file_url`
  - **CreateAsyncTtsJob**
    - changes of request param
      - `+ priority`
  - **ListHotWords**
    - changes of request param
      - `+ hot_words_type`
      - `+ language: enum value [ESP,por,Arabic,Thai]`
    - changes of response param
      - `+ data.hot_words_type: enum value [MOBVOI]`
  - **CreateHotWords**
    - changes of request param
      - `+ mobvoi_hot_words`
      - `+ hot_words_type: enum value [MOBVOI]`
    - changes of response param
      - `+ hot_words_type: enum value [MOBVOI]`
  - **ShowHotWords**
    - changes of response param
      - `+ hot_words_type: enum value [MOBVOI]`
  - **UpdateHotWords**
    - changes of request param
      - `+ mobvoi_hot_words`
      - `+ hot_words_type: enum value [MOBVOI]`
    - changes of response param
      - `+ hot_words_type: enum value [MOBVOI]`
  - **ShowAsset**
    - changes of response param
      - `- asset_extra_meta.human_model_meta`
      - `- asset_extra_meta.animation_meta`
      - `- asset_extra_meta.scene_meta`
      - `+ asset_extra_meta.human_model_2d_meta.voice_asset_id`
  - **UpdateDigitalAsset**
    - changes of request param
      - `- asset_extra_meta.human_model_meta`
      - `- asset_extra_meta.animation_meta`
      - `- asset_extra_meta.scene_meta`
      - `+ asset_extra_meta.human_model_2d_meta.voice_asset_id`
    - changes of response param
      - `- asset_extra_meta.human_model_meta`
      - `- asset_extra_meta.animation_meta`
      - `- asset_extra_meta.scene_meta`
      - `+ asset_extra_meta.human_model_2d_meta.voice_asset_id`
  - **CreateDigitalAsset**
    - changes of request param
      - `- asset_extra_meta.human_model_meta`
      - `- asset_extra_meta.animation_meta`
      - `- asset_extra_meta.scene_meta`
      - `+ asset_extra_meta.human_model_2d_meta.voice_asset_id`
  - **ListAssets**
    - changes of request param
      - `- render_engine`
    - changes of response param
      - `- assets.asset_extra_meta.human_model_meta`
      - `- assets.asset_extra_meta.animation_meta`
      - `- assets.asset_extra_meta.scene_meta`
      - `+ assets.asset_extra_meta.human_model_2d_meta.voice_asset_id`

### HuaweiCloud SDK RDS

- _API Version_
  - V3
- _Features_
  - Support the APIs `TransferBackup`, `ListBackupTransfers`, `ShowTransferPolicy`, `SetTransferPolicy`
- _Bug Fix_
  - None
- _Change_
  - **ListJobInfo**
    - changes of response param
      - `+ job.entities.instance`
      - `+ job.entities.resource_ids`
      - `+ job.entities.volume`
      - `+ job.entities.public_ip`
      - `+ job.entities.switch_strategy`

### HuaweiCloud SDK RGC

- _API Version_
  - V1
- _Features_
  - Support the following APIs:
    - `ListControls`
    - `ListControlViolations`
    - `ShowControl`
    - `ListControlsForAccount`
    - `ShowComplianceStatusForAccount`
    - `ShowComplianceStatusForOrganizationalUnit`
    - `ShowControlsForOrganizationalUnit`
    - `ShowControlsForAccount`
    - `ListConfigRuleCompliances`
    - `ListExternalConfigRuleCompliances`
    - `ListDriftDetails`
    - `ReRegisterOrganizationalUnit`
    - `DeregisterOrganizationalUnit`
    - `ListOperation`
    - `ShowManagedOrganizationalUnit`
    - `DeleteManagedOrganizationalUnits`
    - `ListManagedOrganizationalUnits`
    - `CreateManagedOrganizationalUnit`
    - `EnrollAccount`
    - `UnEnrollAccount`
    - `UpdateManagedAccount`
    - `ShowManagedAccountTemplate`
    - `ListManagedAccountsForParent`
    - `ShowManagedCoreAccount`
    - `ShowHomeRegion`
    - `CheckLaunch`
    - `SetupLandingZone`
    - `DeleteLandingZone`
    - `ShowLandingZoneStatus`
    - `ShowAvailableUpdates`
    - `ShowLandingZoneConfiguration`
    - `ShowLandingZoneIdentityCenter`
    - `ShowTemplateDeployParams`
    - `CreateTemplate`
    - `DeleteTemplate`
    - `ListPredefinedTemplates`
    - `CreateBestPracticeDetect`
    - `ShowBestPracticeStatus`
    - `ShowBestPracticeOverview`
    - `ShowBestPracticeDetails`
    - `ListManagedAccounts`
- _Bug Fix_
  - None
- _Change_
  - None

# 3.1.143 2025-07-03

### HuaweiCloud SDK ECS

- _API Version_
  - V2
- _Features_
  - Support the following APIs:
    - `UpdateScheduledEvent`
    - `AcceptScheduledEvent`
    - `ListLaunchTemplateVersions`
    - `DeleteLaunchTemplates`
    - `ListTemplates`
    - `NovaListServers`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK Live

- _API Version_
  - V1
- _Features_
  - Support the following APIs:
    - `ListFlows`
    - `CreateFlows`
    - `DeleteFlow`
    - `ShowFlowDetail`
    - `ModifyFlowStart`
    - `ModifyFlowStop`
    - `ModifyFlowSources`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK RDS

- _API Version_
  - V3
- _Features_
  - Support the APIs `CheckInstanceForUpgrade`, `ShowPrecheckResult`, `UpgradeLargeVersion`
- _Bug Fix_
  - None
- _Change_
  - None

# 3.1.142 2025-06-26

### HuaweiCloud SDK CodeArtsBuild

- _API Version_
  - V3
- _Features_
  - Support the following APIs:
    - `UploadKeystore`
    - `UpdateKeystore`
    - `ShowProjectJobPermission`
    - `SaveTemplateUsedInfo`
    - `CreateTemplate`
    - `CreateNewJob`
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
  - Remove the API `ShowRecycleBinServer`
  - **ListFlavors**
    - changes of response param
      - `+ flavors.os_extra_specs.info:features`
  - **ListResizeFlavors**
    - changes of response param
      - `+ flavors.extra_specs.info:features`

### HuaweiCloud SDK MetaStudio

- _API Version_
  - V1
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ShowAsset**
    - changes of response param
      - `+ asset_extra_meta.voice_model_meta.is_enhance_rhythm`
      - `+ asset_extra_meta.voice_model_meta.age`
      - `+ asset_extra_meta.human_model_2d_meta.model_version: enum value [V3_3]`
  - **UpdateDigitalAsset**
    - changes of request param
      - `+ asset_extra_meta.voice_model_meta.is_enhance_rhythm`
      - `+ asset_extra_meta.voice_model_meta.age`
      - `+ asset_extra_meta.human_model_2d_meta.model_version: enum value [V3_3]`
    - changes of response param
      - `+ asset_extra_meta.voice_model_meta.is_enhance_rhythm`
      - `+ asset_extra_meta.voice_model_meta.age`
      - `+ asset_extra_meta.human_model_2d_meta.model_version: enum value [V3_3]`
  - **CreateDigitalAsset**
    - changes of request param
      - `+ asset_extra_meta.voice_model_meta.is_enhance_rhythm`
      - `+ asset_extra_meta.voice_model_meta.age`
      - `+ asset_extra_meta.human_model_2d_meta.model_version: enum value [V3_3]`
  - **ListAssets**
    - changes of request param
      - `+ project_group_id`
      - `+ asset_source: enum value [GROUP_CUSTOMIZATION]`
    - changes of response param
      - `+ assets.asset_extra_meta.voice_model_meta.is_enhance_rhythm`
      - `+ assets.asset_extra_meta.voice_model_meta.age`
      - `+ assets.asset_extra_meta.human_model_2d_meta.model_version: enum value [V3_3]`

### HuaweiCloud SDK SMN

- _API Version_
  - V2
- _Features_
  - Support the API `ListTopicMessageStatistics`
- _Bug Fix_
  - None
- _Change_
  - None

# 3.1.141 2025-06-19

### HuaweiCloud SDK EIP

- _API Version_
  - V2
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **UpdatePrePaidBandwidth**
    - changes of request param
      - `+ extendParam.period_type`
      - `+ extendParam.period_num`

### HuaweiCloud SDK EIP

- _API Version_
  - V3
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListEipBandwidths**
    - changes of response param
      - `* eip_bandwidths.tenant_id: uuid -> string`
  - **ListProjectGeipBindings**
    - changes of response param
      - `* geip_bindings.vnic.vni: int32 -> string`

### HuaweiCloud SDK GaussDBforopenGauss

- _API Version_
  - V3
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

- _API Version_
  - V2
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

- _API Version_
  - V2
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

- _API Version_
  - V1
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

### HuaweiCloud SDK RDS

- _API Version_
  - V3
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - None

# 3.1.140 2025-06-12

### HuaweiCloud SDK CodeArtsBuild

- _API Version_
  - V3
- _Features_
  - Support the following APIs:
    - `ShowDisable`
    - `ShowCopyName`
    - `ShowJobStepStatus`
    - `ShowDefaultProjectPermission`
    - `ListUpdateJobHistory`
    - `ShowBuildRecordFlowGraph`
    - `ListJunitCoverageSummary`
    - `ListJob`
    - `ShowJobBuildRecordDetail`
    - `ListRepository`
    - `ListCustomTemplate`
    - `ShowSummaryBuildJobInfo`
    - `ListRepoBranch`
    - `ListKeystoreSearch`
    - `CheckJobCountIsTopLimit`
    - `DownloadJunitCoverageZip`
    - `ListBuildParameter`
    - `ShowUserOverPackageQuota`
    - `ShowJobTotal`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK ECS

- _API Version_
  - V2
- _Features_
  - Support the following APIs:
    - `ShowServerMetadataOptions`
    - `UpdateServerMetadataOptions`
    - `ShowRecycleBin`
    - `UpdateRecycleBin`
    - `ShowRecycleBinServer`
    - `DeleteRecycleBinServer`
    - `ListRecycleBinServers`
    - `UpdateRecycleBinPolicy`
    - `RevertRecycleBinServer`
- _Bug Fix_
  - None
- _Change_
  - **UpdateServer**
    - changes of request param
      - `+ server.security_options`
  - **ShowServer**
    - changes of response param
      - `+ server.security_options`
  - **ListServersDetails**
    - changes of response param
      - `+ servers.security_options`
  - **CreateServers**
    - changes of request param
      - `+ server.security_options`
      - `+ server.metadata_options`
  - **CreatePostPaidServers**
    - changes of request param
      - `+ server.security_options`
      - `+ server.metadata_options`

### HuaweiCloud SDK EVS

- _API Version_
  - V2
- _Features_
  - Support the API `BatchResizeVolumes`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK OCR

- _API Version_
  - V1
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **RecognizeTransportationLicense**
    - changes of request param
      - `+ return_image_location`
      - `+ return_adjusted_image`
    - changes of response param
      - `+ result.image_location`
      - `+ result.adjusted_image`

# 3.1.139 2025-06-05

### HuaweiCloud SDK CodeArtsBuild

- _API Version_
  - V3
- _Features_
  - Support the following APIs:
    - `ShowJobNoticeConfigInfo`
    - `ShowRelatedProject`
    - `ListRecords`
    - `ShowBuildInfoRecord`
    - `DownloadKeystoreByName`
    - `ShowDefaultBuildParameters`
    - `ShowKeystorePermission`
    - `ListRelatedProjectInfo`
    - `ListKeystore`
    - `ShowDockerfileTemplate`
    - `CheckJobNameIsExists`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK DDS

- _API Version_
  - V3
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListSessions**
    - changes of response param
      - `+ sessions.db`
      - `+ sessions.user`

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
      - `+ log_streams.log_group_id`

# 3.1.138 2025-05-29

### HuaweiCloud SDK CFW

- _API Version_
  - V1
- _Features_
  - Support the API `UpdateObjectConfigDesc`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK CodeArtsBuild

- _API Version_
  - V3
- _Features_
  - Support the following APIs:
    - `ListRecyclingJob`
    - `ListOfficialTemplate`
    - `ShowJobSystemParameters`
    - `ShowBuildRecord`
    - `ShowJobInfo`
    - `ShowBuildParamsList`
    - `ShowBuildRecordBuildScript`
    - `ShowJobConfigDiff`
    - `ShowJobRolePermission`
    - `ListProjectJobs`
    - `ShowJobBuildTime`
    - `ShowProjectPermission`
    - `ListBuildInfoRecordByJobId`
    - `ShowJobConfig`
    - `ShowImageTemplateList`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK DDS

- _API Version_
  - V3
- _Features_
  - Support the API `DeleteMongosNode`
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
  - **BatchAddServerNics**
    - changes of request param
      - `+ nics.port_id`
  - **CreateServers**
    - changes of request param
      - `+ server.serial_console_options`
      - `+ server.nics.port_id`
  - **CreatePostPaidServers**
    - changes of request param
      - `+ server.serial_console_options`
      - `+ server.nics.port_id`

### HuaweiCloud SDK GaussDB

- _API Version_
  - V3
- _Features_
  - Support the API `SwitchGaussMySqlProxyEip`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK KVS

- _API Version_
  - V1
- _Features_
  - Support the API `BatchGetKv`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK LTS

- _API Version_
  - V2
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListLogGroups**
    - changes of response param
      - `+ log_groups.log_group_name_alias`
  - **UpdateLogStream**
    - changes of request param
      - `+ whether_log_storage`
  - **ListTransfers**
    - changes of request param
      - `- offset`
      - `- limit`

# 3.1.137 2025-05-22

### HuaweiCloud SDK DDS

- _API Version_
  - V3
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ShowBackupPolicy**
    - changes of response param
      - `+ backup_policy.enable_incremental_backup`
  - **SetBackupPolicy**
    - changes of request param
      - `+ backup_policy.enable_incremental_backup`

### HuaweiCloud SDK ECS

- _API Version_
  - V2
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListFlavors**
    - changes of request param
      - `+ flavor_id`

### HuaweiCloud SDK GaussDBforopenGauss

- _API Version_
  - V3
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - Remove the API `ListTopIoTraffics`

### HuaweiCloud SDK OCR

- _API Version_
  - V1
- _Features_
  - Support the API `RecognizeAutoIdDocClassification`
- _Bug Fix_
  - None
- _Change_
  - None

# 3.1.136 2025-05-15

### HuaweiCloud SDK DDS

- _API Version_
  - V3
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ShowBackupPolicy**
    - changes of response param
      - `+ backup_policy.enable_incremental_backup`
  - **SetBackupPolicy**
    - changes of request param
      - `+ backup_policy.enable_incremental_backup`

### HuaweiCloud SDK ECS

- _API Version_
  - V2
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListFlavors**
    - changes of request param
      - `+ flavor_id`

### HuaweiCloud SDK GaussDBforopenGauss

- _API Version_
  - V3
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - Remove the API `ListTopIoTraffics`

### HuaweiCloud SDK OCR

- _API Version_
  - V1
- _Features_
  - Support the API `RecognizeAutoIdDocClassification`
- _Bug Fix_
  - None
- _Change_
  - None

# 3.1.135 2025-05-08

### HuaweiCloud SDK GaussDBforopenGauss

- _API Version_
  - V3
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **CreateCrossCloudConstructDisaster**
    - changes of request param
      - `- lite_dr_mode`

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
      - `+ update_fields.delete`
      - `+ update_fields.update_blob`
  - **BatchWriteKv**
    - changes of request param
      - `+ table_opers.kv_opers.update_kv`
      - `+ table_opers.kv_opers.put_kv.kv_blob`
      - `+ table_opers.kv_opers.put_kv.condition_expression`
    - changes of response param
      - `+ unprocessed_opers.kv_oper_ids.update_kv_ids`

### HuaweiCloud SDK VOD

- _API Version_
  - V1
- _Features_
  - Support the following APIs:
    - `CreateObjectReplication`
    - `CreateObjectRetrieval`
    - `DeleteDyAsset`
    - `ShowObjectMetaData`
    - `CreateObjectProcessTask`
    - `CreateEditTask`
    - `ShowTaskDetail`
    - `CreateRealTimeClip`
    - `CreateUploadByUrl`
- _Bug Fix_
  - None
- _Change_
  - **ModifySubtitle**
    - changes of request param
      - `+ add_subtitles.obs_info.region`

# 3.1.134 2025-04-27

### HuaweiCloud SDK CloudTable

- _API Version_
  - V2
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListClusters**
    - changes of response param
      - `+ clusters.localHdfs`
      - `+ clusters.is_show_222_version_feature`
      - `+ clusters.actionsCount`
      - `+ clusters.support_auth`
      - `+ clusters.eps_id`
      - `+ clusters.cluster_type`
      - `+ clusters.order_id`
      - `+ clusters.order_status`
      - `+ clusters.is_local_hdfs`
      - `+ clusters.ck_deploy_mode`
      - `+ clusters.flavor_type_en`
      - `+ clusters.enable_hot_cold_feature_cluster`
      - `+ clusters.enable_hot_cold_feature`
      - `+ clusters.data_flavor`
      - `+ clusters.control_flavor`
      - `+ clusters.data_node_num`
      - `+ clusters.control_node_num`
      - `+ clusters.data_node_total_storage_size`
      - `+ clusters.control_node_total_storage_size`
      - `+ clusters.cold_storage_used_size`
      - `+ clusters.data_node_volume_type`
      - `+ clusters.control_node_volume_type`

### HuaweiCloud SDK GaussDB

- _API Version_
  - V3
- _Features_
  - Support the APIs `ShowRestoreAvailableTables`, `ShowAutoExpandPolicy`, `ModifyAutoExpandPolicy`
- _Bug Fix_
  - None
- _Change_
  - None

# 3.1.133 2025-04-24

### HuaweiCloud SDK CDN

- _API Version_
  - V2
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **UpdateDomainMultiCertificates**
    - changes of response param
      - `+ result`
      - `+ status`
  - **ShowDomainFullConfig**
    - changes of response param
      - `+ configs.request_limit_rules.limit_time`
  - **UpdateDomainFullConfig**
    - changes of request param
      - `+ configs.request_limit_rules.limit_time`
      - `+ configs.url_auth.match_rule`

### HuaweiCloud SDK GaussDB

- _API Version_
  - V3
- _Features_
  - Support the APIs `ListTaurusDbNodeProcesses`, `DeleteTaurusDbNodeProcesses`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK IMS

- _API Version_
  - V2
- _Features_
  - Support the APIs `ShowImageMember`, `ListImageMembers`, `BatchDeleteTags`
- _Bug Fix_
  - None
- _Change_
  - None

# 3.1.132 2025-04-17

### HuaweiCloud SDK AntiDDoS

- _API Version_
  - V1
- _Features_
  - Support the APIs `ListQuota`, `ShowLogConfig`, `UpdateLogConfig`, `EnableDefensePolicy`
- _Bug Fix_
  - None
- _Change_
  - Remove the APIs `ListNewConfigs`, `ShowNewTaskStatus`, `ShowAlertConfig`, `UpdateAlertConfig`
  - **ShowDDos**
    - changes of response param
      - `+ app_type_id: enum value [0,1]`
  - **UpdateDDos**
    - changes of request param
      - `+ app_type_id: enum value [0,1]`
  - **ShowDDosStatus**
    - changes of response param
      - `+ status: enum value [normal,configging,notConfig,packetcleaning,packetdropping]`
  - **ShowDefaultConfig**
    - changes of response param
      - `+ app_type_id: enum value [0,1]`
  - **CreateDefaultConfig**
    - changes of request param
      - `+ app_type_id: enum value [0,1]`
  - **ListDailyLog**
    - changes of request param
      - `+ sort_dir: enum value [desc,asc]`
    - changes of response param
      - `+ logs.status: enum value [1,2]`

### HuaweiCloud SDK GaussDBforNoSQL

- _API Version_
  - V3
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **CreateInstance**
    - changes of request param
      - `- ipv6_enabled`
      - `- lb_access_control_settings`

### HuaweiCloud SDK VOD

- _API Version_
  - V1
- _Features_
  - Support the APIs `ShowRefreshResult`, `RefreshAsset`
- _Bug Fix_
  - None
- _Change_
  - **UpdateTranscodeTemplate**
    - changes of request param
      - `+ additional_manifests`
      - `+ quality_info_list.video.stream_name`
  - **CreateTranscodeTemplate**
    - changes of request param
      - `+ additional_manifests`
      - `+ quality_info_list.video.stream_name`
  - **ListTranscodeTemplate**
    - changes of response param
      - `+ template_group_list.additional_manifests`
      - `+ template_group_list.quality_info_list.video.stream_name`

# 3.1.131 2025-04-10

### HuaweiCloud SDK GaussDBforNoSQL

- _API Version_
  - V3
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ResetParamGroupTemplate**
    - changes of request param
      - `- x-auth-token`
  - **OfflineNodes**
    - changes of request param
      - `- x-auth-token`
  - **ShowRedisBigKeys**
    - changes of request param
      - `- x-auth-token`
  - **ListConfigurations**
    - changes of request param
      - `+ datastore_name`
      - `+ mode`
  - **CreateConfiguration**
    - changes of response param
      - `+ configuration.mode`
  - **ListConfigurationTemplates**
    - changes of request param
      - `+ datastore_name`
      - `+ mode`
  - **ShowConfigurationDetail**
    - changes of response param
      - `+ mode`
  - **ListNosqlTaskList**
    - changes of response param
      - `* total_count: int32 -> string`
      - `- schedules.job_id`
      - `- schedules.job_name`
      - `- schedules.job_status`
      - `- schedules.instance_id`
      - `- schedules.instance_name`
      - `- schedules.instance_status`
      - `- schedules.datastore_type`
      - `- schedules.create_time`
      - `- schedules.start_time`
      - `- schedules.end_time`
  - **CreateInstance**
    - changes of request param
      - `+ ipv6_enabled`
      - `+ lb_access_control_settings`

### HuaweiCloud SDK GaussDBforopenGauss

- _API Version_
  - V3
- _Features_
  - Support the following APIs:
    - `ListDisasterRecoveryRecord`
    - `ResetDrConfig`
    - `ShowCrossCloudDisasterInstanceMonitor`
    - `CreateCrossCloudConstructDisaster`
    - `ShowCrossCloudDisasterRelations`
    - `ExecuteCrossCloudDisasterRecoveryFailover`
    - `ExecuteCrossCloudReleaseDisaster`
    - `ExecuteCrossCloudDisasterSwitchover`
    - `ExecuteCrossCloudDisasterRestore`
    - `ExecuteCrossCloudDisasterStartSimulation`
    - `ExecuteCrossCloudDisasterEndSimulation`
    - `ExecuteCrossCloudDisasterDataCacheStart`
    - `ExecuteCrossCloudDisasterDataCacheEnd`
- _Bug Fix_
  - None
- _Change_
  - None

# 3.1.130 2025-04-03

### HuaweiCloud SDK GaussDB

- _API Version_
  - V3
- _Features_
  - Support the API `UpdateTaurusNodeDataIp`
- _Bug Fix_
  - None
- _Change_
  - None

# 3.1.129 2025-03-27

### HuaweiCloud SDK CBR

- _API Version_
  - V1
- _Features_
  - Support the API `ChangeVaultChargeMode`
- _Bug Fix_
  - None
- _Change_
  - **ChangeOrder**
    - changes of response param
      - `* retCode: string -> number`

### HuaweiCloud SDK ECS

- _API Version_
  - V2
- _Features_
  - Support the API `ListScheduledEvents`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK KMS

- _API Version_
  - V2
- _Features_
  - Support the APIs `CreateRsaDatakeyPair`, `CreateEcDatakeyPair`
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
      - `+ update_fields.upsert`

### HuaweiCloud SDK VOD

- _API Version_
  - V1
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **UpdateStorageMode**
    - changes of request param
      - `+ X-Sdk-Date`
  - **ModifySubtitle**
    - changes of request param
      - `+ X-Sdk-Date`
      - `+ delete_subtitles.type: enum value [SRT]`
      - `+ add_subtitles.type: enum value [SRT]`
  - **DeleteTranscodeProduct**
    - changes of request param
      - `+ X-Sdk-Date`

# 3.1.128 2025-03-20

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
      - `+ upgrade_data.basic_qps`

### HuaweiCloud SDK ECS

- _API Version_
  - V2
- _Features_
  - Support the API `ListServerVolumeAttachments`
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
  - **ListVolumes**
    - changes of request param
      - `+ not_metadata`

### HuaweiCloud SDK KVS

- _API Version_
  - V1
- _Features_
  - Support the API `DeleteTable`
- _Bug Fix_
  - None
- _Change_
  - **CreateTable**
    - changes of request param
      - `+ sse_specification`
    - changes of response param
      - `+ sse_specification`
  - **DescribeTable**
    - changes of response param
      - `+ sse_specification`

### HuaweiCloud SDK Live

- _API Version_
  - V1
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **UpdateDomain**
    - changes of response param
      - `+ pull_protocol`
      - `+ service_area: enum value [global]`
  - **CreateDomain**
    - changes of request param
      - `+ pull_protocol`
      - `+ service_area: enum value [global]`
    - changes of response param
      - `+ pull_protocol`
      - `+ service_area: enum value [global]`
  - **ShowDomain**
    - changes of response param
      - `+ domain_info.pull_protocol`
      - `+ domain_info.service_area: enum value [global]`

# 3.1.127 2025-03-13

### HuaweiCloud SDK KVS

- _API Version_
  - V1
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **PutKv**
    - changes of request param
      - `+ condition_expression.single_kv_expression`
  - **UpdateKv**
    - changes of request param
      - `+ condition_expression.single_kv_expression`
  - **DeleteKv**
    - changes of request param
      - `+ condition_expression.single_kv_expression`
  - **ScanKv**
    - changes of request param
      - `+ filter_expression.single_kv_expression`
  - **ScanSkeyKv**
    - changes of request param
      - `+ filter_expression.single_kv_expression`

### HuaweiCloud SDK RDS

- _API Version_
  - V3
- _Features_
  - Support the API `ListVolumeInfo`
- _Bug Fix_
  - None
- _Change_
  - None

# 3.1.126 2025-03-06

### HuaweiCloud SDK CFW

- _API Version_
  - V1
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListAclRules**
    - changes of response param
      - `+ data.records.applications`

### HuaweiCloud SDK DRS

- _API Version_
  - V5
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - Deprecate the following APIs:
    - `CollectDbObjectsAsync`
    - `BatchTagAction`
    - `ListProjectTags`
    - `ShowInstanceTags`
    - `ListDbObjects`

### HuaweiCloud SDK ECS

- _API Version_
  - V2
- _Features_
  - Support the API `UpdateServerInterface`
- _Bug Fix_
  - None
- _Change_
  - Deprecate the API `NovaListAvailabilityZones`

### HuaweiCloud SDK GaussDBforNoSQL

- _API Version_
  - V3
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListFlavorInfos**
    - changes of request param
      - `+ mode`
      - `+ product_type`
  - **ShowQuotas**
    - changes of request param
      - `+ product_type`
  - **ListRecycleInstances**
    - changes of response param
      - `+ instances.product_type`
  - **CreateInstance**
    - changes of request param
      - `+ product_type`
  - **ListInstances**
    - changes of response param
      - `+ instances.product_type`

### HuaweiCloud SDK GaussDBforopenGauss

- _API Version_
  - V3
- _Features_
  - Support the following APIs:
    - `ListScheduleTask`
    - `CancelScheduleTask`
    - `DeleteScheduleTask`
    - `ListInstanceEngineDetail`
    - `CreateScheduleTask`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK OCR

- _API Version_
  - V1
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **RecognizeBankReceipt**
    - changes of request param
      - `+ single_orientation_mode`
      - `+ erase_seal`

# 3.1.125 2025-02-27

### HuaweiCloud SDK CSMS

- _API Version_
  - V1
- _Features_
  - Support the API `UpdateUserPassword`
- _Bug Fix_
  - None
- _Change_
  - **BatchImportSecrets**
    - changes of request param
      - `- total`

### HuaweiCloud SDK GaussDB

- _API Version_
  - V3
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListStarRocksDbParameters**
    - changes of request param
      - `+ main_task_name`

### HuaweiCloud SDK Live

- _API Version_
  - V1
- _Features_
  - Support the APIs `ListScheduleRecordTasks`, `CreateScheduleRecordTasks`, `DeleteScheduleRecordTasks`
- _Bug Fix_
  - None
- _Change_
  - **UpdateSnapshotConfig**
    - changes of request param
      - `+ image_access_protocol`
      - `+ image_access_domain`
  - **CreateSnapshotConfig**
    - changes of request param
      - `+ image_access_protocol`
      - `+ image_access_domain`
  - **ListSnapshotConfigs**
    - changes of response param
      - `+ snapshot_config_list.image_access_protocol`
      - `+ snapshot_config_list.image_access_domain`

### HuaweiCloud SDK OCR

- _API Version_
  - V1
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **RecognizeVatInvoice**
    - changes of response param
      - `+ result.passenger_travel_item_list`

### HuaweiCloud SDK VPC

- _API Version_
  - V2
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListPorts**
    - changes of request param
      - `* id: string -> list<string>`

# 3.1.124 2025-02-20

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
      - `+ configs.client_cert.status`
      - `- configs.client_cert.validation`
  - **UpdateDomainFullConfig**
    - changes of request param
      - `+ configs.client_cert.status`
      - `- configs.client_cert.validation`

### HuaweiCloud SDK CSMS

- _API Version_
  - V1
- _Features_
  - Support the APIs `BatchImportSecrets`, `ShowUserDetail`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK DRS

- _API Version_
  - V5
- _Features_
  - Support the API `ShowTimeline`
- _Bug Fix_
  - None
- _Change_
  - **ShowDataProgress**
    - changes of response param
      - `+ data_process_info.process_rule_level`
  - **UpdateDataProgress**
    - changes of request param
      - `+ data_process_info.process_rule_level`
  - **CheckDataFilter**
    - changes of request param
      - `+ data_process_info.process_rule_level`
  - **ListAsyncJobDetail**
    - changes of response param
      - `+ jobs.diagnoses`
      - `+ jobs.repair_progress_info`
      - `+ jobs.repair_detail_info`
      - `+ jobs.repair_export_status`
  - **ShowJobDetail**
    - changes of request param
      - `+ type: enum value [diagnosis,diagnosis_history,repair_progress,repair_detail,repair_export_status]`
    - changes of response param
      - `+ job.diagnoses`
      - `+ job.repair_progress_info`
      - `+ job.repair_detail_info`
      - `+ job.repair_export_status`
  - **ExecuteJobAction**
    - changes of request param
      - `+ job.action_name: enum value [diagnosis：一键诊断。,start_repair：开始数据修复。,stop_repair：停止数据修复。]`
      - `+ job.action_params.repair_info`
      - `+ job.action_params.compare_task_param.data_process_info.process_rule_level`
  - **BatchExecuteJobActions**
    - changes of request param
      - `+ jobs.action_name: enum value [diagnosis：一键诊断。,start_repair：开始数据修复。,stop_repair：停止数据修复。]`
      - `+ jobs.action_params.repair_info`
      - `+ jobs.action_params.compare_task_param.data_process_info.process_rule_level`

### HuaweiCloud SDK OCR

- _API Version_
  - V1
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **RecognizeFlightItinerary**
    - changes of response param
      - `+ result.gp_number`

# 3.1.123 2025-02-13

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
      - `+ configs.client_cert`
  - **UpdateDomainFullConfig**
    - changes of request param
      - `+ configs.client_cert`

### HuaweiCloud SDK Live

- _API Version_
  - V1
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ModifyOttChannelInfoInput**
    - changes of request param
      - `+ input.audio_selectors.selector_settings.audio_hls_selection`
  - **ModifyOttChannelInfoEndPoints**
    - changes of request param
      - `+ endpoints.dash_package.suggested_presentation_delay`
      - `+ endpoints.dash_package.minimum_update_period`
      - `+ endpoints.dash_package.min_buffer_time`
  - **CreateOttChannelInfo**
    - changes of request param
      - `+ input.audio_selectors.selector_settings.audio_hls_selection`
      - `+ endpoints.dash_package.suggested_presentation_delay`
      - `+ endpoints.dash_package.minimum_update_period`
      - `+ endpoints.dash_package.min_buffer_time`
  - **ListOttChannelInfo**
    - changes of response param
      - `+ channels.input.audio_selectors.selector_settings.audio_hls_selection`
      - `+ channels.endpoints.dash_package.suggested_presentation_delay`
      - `+ channels.endpoints.dash_package.minimum_update_period`
      - `+ channels.endpoints.dash_package.min_buffer_time`

### HuaweiCloud SDK MPC

- _API Version_
  - V1
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **UpdateTemplateGroup**
    - changes of request param
      - `+ videos.stream_name`
  - **ListTemplateGroup**
    - changes of response param
      - `+ template_group_list.videos.stream_name`
  - **CreateTemplateGroup**
    - changes of request param
      - `+ videos.stream_name`
    - changes of response param
      - `+ template_group.videos.stream_name`
  - **UpdateTransTemplate**
    - changes of request param
      - `+ video.stream_name`
  - **CreateTransTemplate**
    - changes of request param
      - `+ video.stream_name`
  - **ListTemplate**
    - changes of response param
      - `+ template_array.template.video.stream_name`
  - **CreateTranscodingTask**
    - changes of request param
      - `+ additional_manifests`
      - `+ av_parameters.video.stream_name`
  - **ListTranscodingTask**
    - changes of response param
      - `+ task_array.additional_manifests`
      - `+ task_array.av_parameters.video.stream_name`
      - `+ task_array.transcode_detail.replace_sub_index`
      - `+ task_array.transcode_detail.input_file.manifest_name`
  - **ListTranscodeDetail**
    - changes of response param
      - `+ task_array.media_detail.replace_sub_index`
      - `+ task_array.media_detail.output_video_paras.manifest_name`
  - **CreateEditingJob**
    - changes of request param
      - `+ concats.av_parameters.video.stream_name`
  - **ListEditingJob**
    - changes of response param
      - `+ jobs.output_file_info.meta_data.manifest_name`
      - `+ jobs.edit_task_req.concats.av_parameters.video.stream_name`

### HuaweiCloud SDK SMN

- _API Version_
  - V2
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListTopicAttributes**
    - changes of response param
      - `* attributes.access_policy: object<AccessPolicy> -> string`
  - **DeleteNotifyPolicy**
    - changes of response param
      - `+ request_id`
  - **UpdateNotifyPolicy**
    - changes of response param
      - `+ request_id`

# 3.1.122 2025-02-06

### HuaweiCloud SDK RDS

- _API Version_
  - V3
- _Features_
  - Support the APIs `ShowDatabaseLevelDatabase`, `ShowAutoUpgradePolicy`, `SetAutoUpgradePolicy`
- _Bug Fix_
  - None
- _Change_
  - **CreateInstance**
    - changes of request param
      - `+ is_auto_upgrade`
  - **CreateRestoreInstance**
    - changes of request param
      - `+ is_auto_upgrade`

# 3.1.121 2025-01-23

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
      - `+ ttl_specification`
      - `- ttl_options`
    - changes of response param
      - `+ ttl_specification`
  - **DescribeTable**
    - changes of response param
      - `+ ttl_specification`
      - `- ttl_options`

# 3.1.120 2025-01-16

### HuaweiCloud SDK CodeArtsDeploy

- _API Version_
  - V2
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListHostClusters**
    - changes of response param
      - `+ result.is_proxy_mode`
      - `- result.created_by`
      - `+ result.permission.can_copy`
  - **ShowHostClusterDetail**
    - changes of response param
      - `+ result.permission.can_copy`

### HuaweiCloud SDK GaussDB

- _API Version_
  - V3
- _Features_
  - Support the APIs `UpgradeSrKernelVersion`, `ListStarRocksDataReplicationConfigByDataBase`, `ModifyDataSync`
- _Bug Fix_
  - None
- _Change_
  - **ListStarRocksDbParameters**
    - changes of request param
      - `+ add_task_scenario`
    - changes of response param
      - `+ db_parameters.is_modifiable`

### HuaweiCloud SDK OCR

- _API Version_
  - V1
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **RecognizeVehicleLicense**
    - changes of request param
      - `+ recognize_electronic_license`
    - changes of response param
      - `+ result.type`
      - `+ result.color`
      - `+ result.mandatory_scrapping_date`
      - `+ result.status`

### HuaweiCloud SDK SMN

- _API Version_
  - V2
- _Features_
  - Support the APIs `ShowNotifyPolicy`, `CreateNotifyPolicy`, `UpdateNotifyPolicy`, `DeleteNotifyPolicy`
- _Bug Fix_
  - None
- _Change_
  - **PublishMessage**
    - changes of request param
      - `+ locale`
  - **AddSubscription**
    - changes of request param
      - `+ subscriptions`
      - `+ extension.header`
      - `+ extension.app_key`
      - `+ extension.app_secret`
      - `+ extension.robot_code`
  - **ListResourceInstances**
    - changes of request param
      - `+ without_any_tag`
  - **ListTopicAttributes**
    - changes of request param
      - `* name: required -> optional`

# 3.1.119 2025-01-09

### HuaweiCloud SDK DRS

- _API Version_
  - V5
- _Features_
  - Support the APIs `ShowAgencyInfo`, `UpdateAgencyPolicy`
- _Bug Fix_
  - None
- _Change_
  - None

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
      - `+ images.os_shutdown_timeout`
  - **UpdateImage**
    - changes of response param
      - `+ os_shutdown_timeout`

### HuaweiCloud SDK VPC

- _API Version_
  - V3
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListSecurityGroupRules**
    - changes of request param
      - `+ priority`
      - `+ ethertype`
      - `+ remote_address_group_id`
      - `+ enabled`
    - changes of response param
      - `+ security_group_rules.enabled`
  - **CreateSecurityGroupRule**
    - changes of request param
      - `+ security_group_rule.enabled`
    - changes of response param
      - `+ security_group_rule.enabled`
  - **ShowSecurityGroupRule**
    - changes of response param
      - `+ security_group_rule.enabled`
  - **BatchCreateSecurityGroupRules**
    - changes of request param
      - `+ security_group_rules.enabled`
    - changes of response param
      - `+ security_group_rules.enabled`
  - **CreateSecurityGroup**
    - changes of response param
      - `+ security_group.security_group_rules.enabled`
  - **ShowSecurityGroup**
    - changes of response param
      - `+ security_group.security_group_rules.enabled`
  - **UpdateSecurityGroup**
    - changes of response param
      - `+ security_group.security_group_rules.enabled`

# 3.1.118 2025-01-02

### HuaweiCloud SDK CFW

- _API Version_
  - V1
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ShowIpsUpdateTime**
    - changes of response param
      - `- trace_id`
      - `- error_description`
      - `- job_id`
      - `- error_code`
      - `- fail_reason`
      - `- order_id`
  - **ListCustomerIps**
    - changes of response param
      - `* data: object<PageInfo«CustomerIpsListVO»> -> object<HttpListCustomerIpsResponseData>`

### HuaweiCloud SDK RDS

- _API Version_
  - V3
- _Features_
  - Support the APIs `ListReadOnlyReplayDatabase`, `RestoreLogReplayDatabase`
- _Bug Fix_
  - None
- _Change_
  - **ListAuditlogs**
    - changes of response param
      - `* auditlogs.size: int64 -> double`
  - **ListDrInfos**
    - changes of response param
      - `+ instance_dr_infos.build_process`

### HuaweiCloud SDK VPC

- _API Version_
  - V3
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListVpcs**
    - changes of request param
      - `+ enterprise_project_id`

