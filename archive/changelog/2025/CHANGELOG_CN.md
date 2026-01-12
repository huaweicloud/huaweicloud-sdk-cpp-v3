# 3.1.168 2025-12-25

### HuaweiCloud SDK CCE

- _接口版本_
  - V3
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ShowCluster**
    - 响应参数变更
      - `+ spec.hostNetwork.autoGenerateSecurityGroupHardeningConfig`
      - `+ spec.containerNetwork.enableContainerCIDRsReservation`
  - **UpdateCluster**
    - 请求参数变更
      - `+ spec.containerNetwork.containercidrs`
    - 响应参数变更
      - `+ spec.hostNetwork.autoGenerateSecurityGroupHardeningConfig`
      - `+ spec.containerNetwork.enableContainerCIDRsReservation`
  - **DeleteCluster**
    - 响应参数变更
      - `+ spec.hostNetwork.autoGenerateSecurityGroupHardeningConfig`
      - `+ spec.containerNetwork.enableContainerCIDRsReservation`
  - **CreateCluster**
    - 请求参数变更
      - `+ spec.hostNetwork.autoGenerateSecurityGroupHardeningConfig`
      - `+ spec.containerNetwork.enableContainerCIDRsReservation`
    - 响应参数变更
      - `+ spec.hostNetwork.autoGenerateSecurityGroupHardeningConfig`
      - `+ spec.containerNetwork.enableContainerCIDRsReservation`
  - **ListClusters**
    - 响应参数变更
      - `+ items.spec.hostNetwork.autoGenerateSecurityGroupHardeningConfig`
      - `+ items.spec.containerNetwork.enableContainerCIDRsReservation`
  - **ShowNode**
    - 响应参数变更
      - `+ spec.extendParam.containerBaseSize`
      - `+ spec.extendParam.kubeReservedCpu`
      - `+ spec.extendParam.systemReservedCpu`
      - `+ spec.extendParam.kubeReservedPid`
      - `+ spec.extendParam.systemReservedPid`
      - `+ spec.extendParam.kubeReservedStorage`
      - `+ spec.extendParam.systemReservedStorage`
  - **UpdateNode**
    - 响应参数变更
      - `+ spec.extendParam.containerBaseSize`
      - `+ spec.extendParam.kubeReservedCpu`
      - `+ spec.extendParam.systemReservedCpu`
      - `+ spec.extendParam.kubeReservedPid`
      - `+ spec.extendParam.systemReservedPid`
      - `+ spec.extendParam.kubeReservedStorage`
      - `+ spec.extendParam.systemReservedStorage`
  - **DeleteNode**
    - 响应参数变更
      - `+ spec.extendParam.containerBaseSize`
      - `+ spec.extendParam.kubeReservedCpu`
      - `+ spec.extendParam.systemReservedCpu`
      - `+ spec.extendParam.kubeReservedPid`
      - `+ spec.extendParam.systemReservedPid`
      - `+ spec.extendParam.kubeReservedStorage`
      - `+ spec.extendParam.systemReservedStorage`
  - **CreateNode**
    - 请求参数变更
      - `+ spec.extendParam.containerBaseSize`
      - `+ spec.extendParam.kubeReservedCpu`
      - `+ spec.extendParam.systemReservedCpu`
      - `+ spec.extendParam.kubeReservedPid`
      - `+ spec.extendParam.systemReservedPid`
      - `+ spec.extendParam.kubeReservedStorage`
      - `+ spec.extendParam.systemReservedStorage`
    - 响应参数变更
      - `+ spec.extendParam.containerBaseSize`
      - `+ spec.extendParam.kubeReservedCpu`
      - `+ spec.extendParam.systemReservedCpu`
      - `+ spec.extendParam.kubeReservedPid`
      - `+ spec.extendParam.systemReservedPid`
      - `+ spec.extendParam.kubeReservedStorage`
      - `+ spec.extendParam.systemReservedStorage`
  - **ListNodes**
    - 响应参数变更
      - `+ items.spec.extendParam.containerBaseSize`
      - `+ items.spec.extendParam.kubeReservedCpu`
      - `+ items.spec.extendParam.systemReservedCpu`
      - `+ items.spec.extendParam.kubeReservedPid`
      - `+ items.spec.extendParam.systemReservedPid`
      - `+ items.spec.extendParam.kubeReservedStorage`
      - `+ items.spec.extendParam.systemReservedStorage`
  - **ShowNodePool**
    - 响应参数变更
      - `+ spec.nodeTemplate.configurationsOverride`
      - `+ spec.nodeTemplate.extendParam.containerBaseSize`
      - `+ spec.nodeTemplate.extendParam.kubeReservedCpu`
      - `+ spec.nodeTemplate.extendParam.systemReservedCpu`
      - `+ spec.nodeTemplate.extendParam.kubeReservedPid`
      - `+ spec.nodeTemplate.extendParam.systemReservedPid`
      - `+ spec.nodeTemplate.extendParam.kubeReservedStorage`
      - `+ spec.nodeTemplate.extendParam.systemReservedStorage`
  - **UpdateNodePool**
    - 响应参数变更
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
    - 响应参数变更
      - `+ spec.nodeTemplate.configurationsOverride`
      - `+ spec.nodeTemplate.extendParam.containerBaseSize`
      - `+ spec.nodeTemplate.extendParam.kubeReservedCpu`
      - `+ spec.nodeTemplate.extendParam.systemReservedCpu`
      - `+ spec.nodeTemplate.extendParam.kubeReservedPid`
      - `+ spec.nodeTemplate.extendParam.systemReservedPid`
      - `+ spec.nodeTemplate.extendParam.kubeReservedStorage`
      - `+ spec.nodeTemplate.extendParam.systemReservedStorage`
  - **UpgradeNodePool**
    - 请求参数变更
      - `+ spec.nodeTemplate.configurationsOverride`
      - `+ spec.nodeTemplate.extendParam.containerBaseSize`
      - `+ spec.nodeTemplate.extendParam.kubeReservedCpu`
      - `+ spec.nodeTemplate.extendParam.systemReservedCpu`
      - `+ spec.nodeTemplate.extendParam.kubeReservedPid`
      - `+ spec.nodeTemplate.extendParam.systemReservedPid`
      - `+ spec.nodeTemplate.extendParam.kubeReservedStorage`
      - `+ spec.nodeTemplate.extendParam.systemReservedStorage`
  - **CreateNodePool**
    - 请求参数变更
      - `+ spec.nodeTemplate.configurationsOverride`
      - `+ spec.nodeTemplate.extendParam.containerBaseSize`
      - `+ spec.nodeTemplate.extendParam.kubeReservedCpu`
      - `+ spec.nodeTemplate.extendParam.systemReservedCpu`
      - `+ spec.nodeTemplate.extendParam.kubeReservedPid`
      - `+ spec.nodeTemplate.extendParam.systemReservedPid`
      - `+ spec.nodeTemplate.extendParam.kubeReservedStorage`
      - `+ spec.nodeTemplate.extendParam.systemReservedStorage`
    - 响应参数变更
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
    - 响应参数变更
      - `+ items.spec.nodeTemplate.configurationsOverride`
      - `+ items.spec.nodeTemplate.extendParam.containerBaseSize`
      - `+ items.spec.nodeTemplate.extendParam.kubeReservedCpu`
      - `+ items.spec.nodeTemplate.extendParam.systemReservedCpu`
      - `+ items.spec.nodeTemplate.extendParam.kubeReservedPid`
      - `+ items.spec.nodeTemplate.extendParam.systemReservedPid`
      - `+ items.spec.nodeTemplate.extendParam.kubeReservedStorage`
      - `+ items.spec.nodeTemplate.extendParam.systemReservedStorage`
  - **ListHyperNodes**
    - 响应参数变更
      - `+ hyperNodeList.spec.nodeTemplate.extendParam.containerBaseSize`
      - `+ hyperNodeList.spec.nodeTemplate.extendParam.kubeReservedCpu`
      - `+ hyperNodeList.spec.nodeTemplate.extendParam.systemReservedCpu`
      - `+ hyperNodeList.spec.nodeTemplate.extendParam.kubeReservedPid`
      - `+ hyperNodeList.spec.nodeTemplate.extendParam.systemReservedPid`
      - `+ hyperNodeList.spec.nodeTemplate.extendParam.kubeReservedStorage`
      - `+ hyperNodeList.spec.nodeTemplate.extendParam.systemReservedStorage`

### HuaweiCloud SDK CodeArtsArtifact

- _接口版本_
  - V2
- _新增特性_
  - 支持以下接口：
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
- _解决问题_
  - 无
- _特性变更_
  - **BatchDeleteTrashes**
    - 请求参数变更
      - `+ format`
      - `- fomat`
  - **SearchArtifacts**
    - 请求参数变更
      - `* in_project: string -> boolean`
  - **UpdateArtifactory**
    - 请求参数变更
      - `+ project_id`

### HuaweiCloud SDK CodeArtsRepo

- _接口版本_
  - V4
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListTenantRepositories**
    - 响应参数变更
      - `+ status: enum value [0,3,4,5,7]`
  - **BatchUpdateRepositoryFilePushPermissions**
    - 请求参数变更
      - `* permissions.actions.user_ids: list<null> -> list<integer>`
  - **CreateFilePushPermission**
    - 请求参数变更
      - `* actions.user_ids: list<null> -> list<integer>`
  - **BatchUpdateProtectedBranches**
    - 请求参数变更
      - `* actions.user_ids: list<null> -> list<integer>`
  - **BatchCreateProtectedBranch**
    - 请求参数变更
      - `* actions.user_ids: list<null> -> list<integer>`
  - **UpdateProtectedBranch**
    - 请求参数变更
      - `* user_ids: list<null> -> list<integer>`
  - **BatchUpdateProtectedTags**
    - 请求参数变更
      - `* actions.user_ids: list<null> -> list<integer>`
  - **BatchCreateProtectedTags**
    - 请求参数变更
      - `* actions.user_ids: list<null> -> list<integer>`
  - **UpdateProtectedTag**
    - 请求参数变更
      - `* user_ids: list<null> -> list<integer>`

### HuaweiCloud SDK DDS

- _接口版本_
  - V3
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **CreateConfiguration**
    - 请求参数变更
      - `+ entity_id`
  - **ShowConfigurationAppliedHistory**
    - 响应参数变更
      - `+ total_count`
  - **ListBackups**
    - 请求参数变更
      - `+ order_field`
      - `+ order_rule`
      - `+ backup_status`
      - `+ backup_name`
      - `+ backup_description`
      - `+ instance_name`
    - 响应参数变更
      - `+ backups.instance_status`
      - `+ backups.instance_mode`
      - `+ backups.is_instance_restoring`
      - `+ backups.backup_method`
      - `+ backups.kms_enable`
      - `+ backups.deletable`

### HuaweiCloud SDK GaussDBforNoSQL

- _接口版本_
  - V3
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ShowModifyHistory**
    - 请求参数变更
      - `* offset: string -> int32`
      - `* limit: string -> int32`
    - 响应参数变更
      - `* histories.applied: string -> boolean`

### HuaweiCloud SDK IMS

- _接口版本_
  - V2
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListImageMembers**
    - 请求参数变更
      - `+ limit`
      - `+ marker`
    - 响应参数变更
      - `+ page_info`
  - **GlanceListImageMembers**
    - 请求参数变更
      - `+ limit`
      - `+ marker`
    - 响应参数变更
      - `+ page_info`

### HuaweiCloud SDK Live

- _接口版本_
  - V2
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListSingleStreamBitrate**
    - 请求参数变更
      - `+ type`
  - **ListHistoryStreams**
    - 请求参数变更
      - `* domain: string -> list<string>`

### HuaweiCloud SDK MetaStudio

- _接口版本_
  - V1
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ShowAsyncTtsJob**
    - 响应参数变更
      - `+ code`
      - `+ message`
  - **ShowPacifyWordsSwitch**
    - 请求参数变更
      - `+ language: enum value [fr]`
  - **ShowPacifyWordsTriggerTime**
    - 请求参数变更
      - `+ language: enum value [fr]`
  - **ShowWelcomeSpeechSwitch**
    - 请求参数变更
      - `+ language: enum value [fr]`
  - **ShowTtsAuditionFile**
    - 响应参数变更
      - `+ code`
  - **ListSmartChatJob**
    - 响应参数变更
      - `+ smart_chat_jobs.default_language: enum value [fr]`
      - `+ smart_chat_jobs.voice_config_list.language: enum value [fr]`
  - **StartSmartChatJob**
    - 响应参数变更
      - `+ default_language: enum value [fr]`
      - `+ voice_config_list.language: enum value [fr]`
  - **ShowSmartChatJob**
    - 响应参数变更
      - `+ default_language: enum value [fr]`
      - `+ voice_config_list.language: enum value [fr]`
  - **ListHotWords**
    - 请求参数变更
      - `+ language: enum value [fr]`
  - **ListPacifyWords**
    - 请求参数变更
      - `+ language: enum value [fr]`
  - **ListWelcomeSpeech**
    - 请求参数变更
      - `+ language: enum value [fr]`
  - **CreateDigitalHumanBusinessCard**
    - 请求参数变更
      - `+ card_image_config.id_card_image1`
      - `+ card_image_config.id_card_image2`
      - `+ card_image_config.authorize_use_human_image`
  - **UpdateDigitalHumanBusinessCard**
    - 请求参数变更
      - `+ card_image_config.id_card_image1`
      - `+ card_image_config.id_card_image2`
      - `+ card_image_config.authorize_use_human_image`
  - **CreatePhotoDigitalHumanVideo**
    - 请求参数变更
      - `+ id_card_image1`
      - `+ id_card_image2`
      - `+ authorize_use_human_image`

# 3.1.167 2025-12-18

### HuaweiCloud SDK CodeArtsDeploy

- _接口版本_
  - V2
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListEnvironments**
    - 响应参数变更
      - `+ result.project_id`
  - **ShowEnvironmentDetail**
    - 响应参数变更
      - `+ result.project_id`

### HuaweiCloud SDK DDS

- _接口版本_
  - V3
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **RestartInstance**
    - 请求参数变更
      - `+ is_serial`
      - `+ is_force`
  - **ListAuditlogs**
    - 响应参数变更
      - `+ total_size`

### HuaweiCloud SDK GaussDB

- _接口版本_
  - V3
- _新增特性_
  - 支持以下接口：
    - `ShowHistoricalSqlFilterRule`
    - `SetAutoSqlLimiting`
    - `ShowSqlAutoSqlLimiting`
    - `ShowAutoSqlLimitingLog`
    - `BatchDeleteBackup`
- _解决问题_
  - 无
- _特性变更_
  - **ShowProxyVersion**
    - 响应参数变更
      - `+ risk`
  - **SwitchGaussMySqlConfiguration**
    - 响应参数变更
      - `+ param_group_name`
  - **ShowInstanceMonitorExtend**
    - 响应参数变更
      - `+ allow`
  - **ListRecycleInstances**
    - 响应参数变更
      - `* total_count: string -> int32`
      - `+ instances.recycle_bakcups`
      - `* instances.create_at: int32 -> int64`
      - `* instances.deleted_at: int32 -> int64`
  - **ListScheduleJobs**
    - 请求参数变更
      - `+ instance_id`
    - 响应参数变更
      - `+ schedules.proxy_id`
      - `+ schedules.proxy_name`
  - **ShowBackupRestoreTime**
    - 请求参数变更
      - `+ date`
      - `+ start_time`
      - `+ end_time`
  - **ShowGaussMySqlIncrementalBackupList**
    - 请求参数变更
      - `+ display_offsite_backup`
    - 响应参数变更
      - `+ backups.backup_type`
  - **ShowGaussMySqlProxyFlavors**
    - 请求参数变更
      - `+ query_type`
      - `+ proxy_id`
  - **ShowGaussMySqlProxyList**
    - 响应参数变更
      - `+ proxy_list.htap_nodes`
      - `+ proxy_list.proxy.type`
      - `+ proxy_list.proxy.created_at`
      - `+ proxy_list.proxy.updated_at`
      - `+ proxy_list.proxy.support_ap_node`

### HuaweiCloud SDK GaussDBforNoSQL

- _接口版本_
  - V3
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **CreateConfiguration**
    - 请求参数变更
      - `+ instance_id`
  - **ShowApplyHistory**
    - 响应参数变更
      - `+ total_count`

### HuaweiCloud SDK GaussDBforopenGauss

- _接口版本_
  - V3
- _新增特性_
  - 支持接口`BatchDeleteInstanceTag`
- _解决问题_
  - 无
- _特性变更_
  - **ShowDeploymentForm**
    - 请求参数变更
      - `+ consistency`
      - `+ consistency_protocol`
      - `+ engine_version`
    - 响应参数变更
      - `+ max_shard_count`
      - `+ each_shard_num`
      - `+ each_expand_nodes`
  - **ListRestorableInstancesDetails**
    - 请求参数变更
      - `+ backup_restore_type`
      - `+ source_backup_schema`
      - `+ target_instance_id`
      - `+ instance_name`

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
      - `+ image_layout`
      - `+ character_mode`
    - 响应参数变更
      - `+ result.ocr_result.words_block_list.char_list`
      - `+ result.layout_result.layout_block_list.formula_id`
      - `+ result.formula_result.formula_list.type`

### HuaweiCloud SDK RDS

- _接口版本_
  - V3
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListSqlStatistics**
    - 响应参数变更
      - `+ list.canUse`
      - `- list.can_use`
      - `* list.query_id: int64 -> string`

### HuaweiCloud SDK VPC

- _接口版本_
  - V3
- _新增特性_
  - 支持以下接口：
    - `ListVirsubnetCidrReservations`
    - `CreateVirsubnetCidrReservation`
    - `ShowVirsubnetCidrReservation`
    - `UpdateVirsubnetCidrReservation`
    - `DeleteVirsubnetCidrReservation`
- _解决问题_
  - 无
- _特性变更_
  - **ListFirewall**
    - 响应参数变更
      - `+ firewalls.type`

# 3.1.166 2025-12-11

### HuaweiCloud SDK CodeArtsDeploy

- _接口版本_
  - V2
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListEnvironments**
    - 响应参数变更
      - `+ result.project_id`
  - **ShowEnvironmentDetail**
    - 响应参数变更
      - `+ result.project_id`

### HuaweiCloud SDK DDS

- _接口版本_
  - V3
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **RestartInstance**
    - 请求参数变更
      - `+ is_serial`
      - `+ is_force`
  - **ListAuditlogs**
    - 响应参数变更
      - `+ total_size`

### HuaweiCloud SDK GaussDB

- _接口版本_
  - V3
- _新增特性_
  - 支持以下接口：
    - `ShowHistoricalSqlFilterRule`
    - `SetAutoSqlLimiting`
    - `ShowSqlAutoSqlLimiting`
    - `ShowAutoSqlLimitingLog`
    - `BatchDeleteBackup`
- _解决问题_
  - 无
- _特性变更_
  - **ShowProxyVersion**
    - 响应参数变更
      - `+ risk`
  - **SwitchGaussMySqlConfiguration**
    - 响应参数变更
      - `+ param_group_name`
  - **ShowInstanceMonitorExtend**
    - 响应参数变更
      - `+ allow`
  - **ListRecycleInstances**
    - 响应参数变更
      - `* total_count: string -> int32`
      - `+ instances.recycle_bakcups`
      - `* instances.create_at: int32 -> int64`
      - `* instances.deleted_at: int32 -> int64`
  - **ListScheduleJobs**
    - 请求参数变更
      - `+ instance_id`
    - 响应参数变更
      - `+ schedules.proxy_id`
      - `+ schedules.proxy_name`
  - **ShowBackupRestoreTime**
    - 请求参数变更
      - `+ date`
      - `+ start_time`
      - `+ end_time`
  - **ShowGaussMySqlIncrementalBackupList**
    - 请求参数变更
      - `+ display_offsite_backup`
    - 响应参数变更
      - `+ backups.backup_type`
  - **ShowGaussMySqlProxyFlavors**
    - 请求参数变更
      - `+ query_type`
      - `+ proxy_id`
  - **ShowGaussMySqlProxyList**
    - 响应参数变更
      - `+ proxy_list.htap_nodes`
      - `+ proxy_list.proxy.type`
      - `+ proxy_list.proxy.created_at`
      - `+ proxy_list.proxy.updated_at`
      - `+ proxy_list.proxy.support_ap_node`

### HuaweiCloud SDK GaussDBforNoSQL

- _接口版本_
  - V3
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **CreateConfiguration**
    - 请求参数变更
      - `+ instance_id`
  - **ShowApplyHistory**
    - 响应参数变更
      - `+ total_count`

### HuaweiCloud SDK GaussDBforopenGauss

- _接口版本_
  - V3
- _新增特性_
  - 支持接口`BatchDeleteInstanceTag`
- _解决问题_
  - 无
- _特性变更_
  - **ShowDeploymentForm**
    - 请求参数变更
      - `+ consistency`
      - `+ consistency_protocol`
      - `+ engine_version`
    - 响应参数变更
      - `+ max_shard_count`
      - `+ each_shard_num`
      - `+ each_expand_nodes`
  - **ListRestorableInstancesDetails**
    - 请求参数变更
      - `+ backup_restore_type`
      - `+ source_backup_schema`
      - `+ target_instance_id`
      - `+ instance_name`

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
      - `+ image_layout`
      - `+ character_mode`
    - 响应参数变更
      - `+ result.ocr_result.words_block_list.char_list`
      - `+ result.layout_result.layout_block_list.formula_id`
      - `+ result.formula_result.formula_list.type`

### HuaweiCloud SDK RDS

- _接口版本_
  - V3
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListSqlStatistics**
    - 响应参数变更
      - `+ list.canUse`
      - `- list.can_use`
      - `* list.query_id: int64 -> string`

### HuaweiCloud SDK VPC

- _接口版本_
  - V3
- _新增特性_
  - 支持以下接口：
    - `ListVirsubnetCidrReservations`
    - `CreateVirsubnetCidrReservation`
    - `ShowVirsubnetCidrReservation`
    - `UpdateVirsubnetCidrReservation`
    - `DeleteVirsubnetCidrReservation`
- _解决问题_
  - 无
- _特性变更_
  - **ListFirewall**
    - 响应参数变更
      - `+ firewalls.type`

# 3.1.165 2025-12-04

### HuaweiCloud SDK AAD

- _接口版本_
  - V1
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **UpdateLtsConfig**
    - 请求参数变更
      - `* enterprise_project_id: optional -> required`

### HuaweiCloud SDK DDS

- _接口版本_
  - V3
- _新增特性_
  - 支持接口`RestoreNewInstance`、`ListInstances`
- _解决问题_
  - 无
- _特性变更_
  - **CreateInstance**
    - 请求参数变更
      - `+ datastore`
      - `+ region`
      - `+ port`
      - `+ mode`
      - `+ tags`
      - `- restore_point`
      - `+ flavor.storage`
      - `* flavor: list<RestoreNewInstanceFlavorOption> -> list<CreateInstanceFlavorOption>`
      - `* body: object<RestoreNewInstanceRequestBody> -> object<CreateInstanceRequestBody>`
    - 响应参数变更
      - `+ tags`
      - `+ port`
      - `+ flavor.storage`
      - `* flavor: list<RestoreNewInstanceFlavorOption> -> list<CreateInstanceFlavorOption>`

### HuaweiCloud SDK GaussDB

- _接口版本_
  - V3
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **RestartStarrocksInstance**
    - 响应参数变更
      - `+ workflow_id`
      - `- job_id`
  - **RestartStarrocksNode**
    - 响应参数变更
      - `+ workflow_id`
      - `- job_id`
  - **DeleteStarrocksInstance**
    - 响应参数变更
      - `+ workflow_id`
      - `- job_id`

### HuaweiCloud SDK Live

- _接口版本_
  - V2
- _新增特性_
  - 支持接口`ListCarouselTaskDetail`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK LTS

- _接口版本_
  - V2
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListLogs**
    - 请求参数变更
      - `+ scroll_id`
  - **ListLogContext**
    - 请求参数变更
      - `+ scroll_id`

### HuaweiCloud SDK MetaStudio

- _接口版本_
  - V1
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - 移除以下接口：
    - `ListVideoMotionCaptureJobs`
    - `CreateVideoMotionCaptureJob`
    - `ShowVideoMotionCaptureJob`
    - `StopVideoMotionCaptureJob`
    - `ExecuteVideoMotionCaptureCommand`
  - **ShowLlmConfig**
    - 响应参数变更
      - `+ model`
  - **UpdateLlmConfig**
    - 请求参数变更
      - `+ model`
  - **CreateLlmConfig**
    - 请求参数变更
      - `+ model`
  - **ListLlmConfig**
    - 响应参数变更
      - `+ model`
      - `+ data.model`

### HuaweiCloud SDK RDS

- _接口版本_
  - V3
- _新增特性_
  - 支持以下接口：
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
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK SMN

- _接口版本_
  - V2
- _新增特性_
  - 支持以下接口：
    - `ShowKmsKey`
    - `CreateKmsKey`
    - `UpdateKmsKey`
    - `DeleteKmsKey`
    - `ListTopicsWithAssociatedResources`
    - `SubscribeTopic`
    - `UnsubscribeTopic`
    - `ListCloudServices`
    - `DownloadHttpSignCert`
- _解决问题_
  - 无
- _特性变更_
  - **ListTopics**
    - 响应参数变更
      - `+ topics.create_time`
      - `+ topics.update_time`
  - **ListTopicAttributes**
    - 响应参数变更
      - `+ attributes.create_time`
      - `+ attributes.update_time`

### HuaweiCloud SDK VOD

- _接口版本_
  - V1
- _新增特性_
  - 支持接口`ListCdnStatistics`
- _解决问题_
  - 无
- _特性变更_
  - 无

# 3.1.164 2025-11-27

### HuaweiCloud SDK CCE

- _接口版本_
  - V3
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **CreateKubernetesClusterCert**
    - 请求参数变更
      - `* expire_at: date -> string`

### HuaweiCloud SDK CDN

- _接口版本_
  - V2
- _新增特性_
  - 支持以下接口：
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
- _解决问题_
  - 无
- _特性变更_
  - **ShowStatsConfigs**
    - 请求参数变更
      - `+ limit`
      - `+ offset`

### HuaweiCloud SDK Cloudtest

- _接口版本_
  - V1
- _新增特性_
  - 支持接口`BatchUpdateTestCasesInDiffVersion`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK DDS

- _接口版本_
  - V3
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - 移除接口`RestoreNewInstance`、`ListInstances`
  - **ShowBackupDownloadLink**
    - 请求参数变更
      - `- X-Language`
    - 响应参数变更
      - `+ group_id`
      - `+ group_name`
  - **RestoreNewInstance**
    - 请求参数变更
      - `+ restore_point`
      - `- datastore`
      - `- region`
      - `- port`
      - `- mode`
      - `- tags`
      - `- flavor.storage`
      - `* flavor: list<CreateInstanceFlavorOption> -> list<RestoreNewInstanceFlavorOption>`
      - `* body: object<CreateInstanceRequestBody> -> object<RestoreNewInstanceRequestBody>`
    - 响应参数变更
      - `- tags`
      - `- port`
      - `- flavor.storage`
      - `* flavor: list<CreateInstanceFlavorOption> -> list<RestoreNewInstanceFlavorOption>`
  - **ShowInstanceConfigurationModifyHistory**
    - 响应参数变更
      - `+ total_count`

### HuaweiCloud SDK EVS

- _接口版本_
  - V2
- _新增特性_
  - 支持以下接口：
    - `ListVolumesInRecycle`
    - `ShowVolumeInRecycle`
    - `DeleteVolumeInRecycle`
    - `RevertVolumeInRecycle`
    - `ShowRecyclePolicy`
    - `UpdateRecyclePolicy`
- _解决问题_
  - 无
- _特性变更_
  - **UpdateVolume**
    - 响应参数变更
      - `- metadata.full_clone`
  - **ListVolumesByTags**
    - 响应参数变更
      - `- resources.resource_detail.metadata.full_clone`

### HuaweiCloud SDK GA

- _接口版本_
  - V1
- _新增特性_
  - 支持接口`ListByoipPools`
- _解决问题_
  - 无
- _特性变更_
  - **ListEndpoints**
    - 响应参数变更
      - `+ endpoints.resource_type: enum value [ECS,ELB,CUSTOM_IP,CUSTOM_DOMAIN_NAME,CUSTOM_EIP]`
  - **CreateEndpoint**
    - 请求参数变更
      - `+ endpoint.resource_type: enum value [ECS,ELB,CUSTOM_IP,CUSTOM_DOMAIN_NAME,CUSTOM_EIP]`
    - 响应参数变更
      - `+ endpoint.resource_type: enum value [ECS,ELB,CUSTOM_IP,CUSTOM_DOMAIN_NAME,CUSTOM_EIP]`
  - **ShowEndpoint**
    - 响应参数变更
      - `+ endpoint.resource_type: enum value [ECS,ELB,CUSTOM_IP,CUSTOM_DOMAIN_NAME,CUSTOM_EIP]`
  - **UpdateEndpoint**
    - 响应参数变更
      - `+ endpoint.resource_type: enum value [ECS,ELB,CUSTOM_IP,CUSTOM_DOMAIN_NAME,CUSTOM_EIP]`
  - **ListHealthChecks**
    - 响应参数变更
      - `+ health_checks.protocol: enum value [UDP]`
  - **CreateHealthCheck**
    - 请求参数变更
      - `+ health_check.protocol: enum value [UDP]`
    - 响应参数变更
      - `+ health_check.protocol: enum value [UDP]`
  - **ShowHealthCheck**
    - 响应参数变更
      - `+ health_check.protocol: enum value [UDP]`
  - **UpdateHealthCheck**
    - 请求参数变更
      - `+ health_check.protocol: enum value [UDP]`
    - 响应参数变更
      - `+ health_check.protocol: enum value [UDP]`
  - **ListAccelerators**
    - 响应参数变更
      - `+ accelerators.ip_sets.ip_type: enum value [IPV6]`
  - **CreateAccelerator**
    - 响应参数变更
      - `+ accelerator.ip_sets.ip_type: enum value [IPV6]`
  - **ShowAccelerator**
    - 响应参数变更
      - `+ accelerator.ip_sets.ip_type: enum value [IPV6]`
  - **UpdateAccelerator**
    - 响应参数变更
      - `+ accelerator.ip_sets.ip_type: enum value [IPV6]`

### HuaweiCloud SDK GaussDBforNoSQL

- _接口版本_
  - V3
- _新增特性_
  - 支持接口`ListSslCertDownloadAddresses`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK GaussDBforopenGauss

- _接口版本_
  - V3
- _新增特性_
  - 支持接口`SwitchLogCollectionStatus`
- _解决问题_
  - 无
- _特性变更_
  - **ShowErrorLogSwitchStatus**
    - 请求参数变更
      - `+ X-Language: enum value [zh-cn,en-us]`

### HuaweiCloud SDK IoTDA

- _接口版本_
  - V5
- _新增特性_
  - 支持以下接口：
    - `ListExportTasks`
    - `CreateExportTask`
    - `DeleteExportTask`
    - `ShowExportTask`
    - `ShowCertificate`
- _解决问题_
  - 无
- _特性变更_
  - **ShowRuleAction**
    - 响应参数变更
      - `+ channel_detail.mqtt_device_forwarding`
  - **UpdateRuleAction**
    - 请求参数变更
      - `+ channel_detail.mqtt_device_forwarding`
    - 响应参数变更
      - `+ channel_detail.mqtt_device_forwarding`
  - **CreateRuleAction**
    - 请求参数变更
      - `+ channel_detail.mqtt_device_forwarding`
    - 响应参数变更
      - `+ channel_detail.mqtt_device_forwarding`
  - **ListRuleActions**
    - 响应参数变更
      - `+ actions.channel_detail.mqtt_device_forwarding`

### HuaweiCloud SDK RDS

- _接口版本_
  - V3
- _新增特性_
  - 支持以下接口：
    - `ListRemoteDb`
    - `ListReplicationErrors`
    - `UpdateStatistics`
    - `RestartDbAgentJob`
    - `ModifyDbAgentJob`
    - `SwitchDbAgentJob`
    - `CreateDistribution`
    - `BatchModifyPublication`
    - `CreatePublication`
- _解决问题_
  - 无
- _特性变更_
  - **GetInstancesNoIndexTables**
    - 请求参数变更
      - `+ offset`
      - `+ limit`

# 3.1.163 2025-11-20

### HuaweiCloud SDK AAD

- _接口版本_
  - V1
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListDomain**
    - 请求参数变更
      - `+ limit`
      - `+ offset`
  - **ListInstanceIpRule**
    - 请求参数变更
      - `+ limit`
      - `+ offset`

### HuaweiCloud SDK AAD

- _接口版本_
  - V2
- _新增特性_
  - 支持以下接口：
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
- _解决问题_
  - 无
- _特性变更_
  - **ListInstanceDomains**
    - 请求参数变更
      - `+ limit`
      - `+ offset`
  - **ListWafQps**
    - 请求参数变更
      - `+ limit`
      - `+ offset`
  - **ListDDoSConnectionNumber**
    - 请求参数变更
      - `+ limit`
      - `+ offset`

### HuaweiCloud SDK CCE

- _接口版本_
  - V3
- _新增特性_
  - 支持接口`ListAddonPrecheckTasks`、`ListHyperNodes`
- _解决问题_
  - 无
- _特性变更_
  - **CreateKubernetesClusterCert**
    - 请求参数变更
      - `+ expire_at`
      - `* body: object<CertDuration> -> object<ClusterCertDuration>`
  - **ShowCluster**
    - 响应参数变更
      - `+ spec.agencyName`
      - `+ spec.enableAutoResizing`
  - **UpdateCluster**
    - 请求参数变更
      - `+ spec.agencyName`
      - `+ spec.enableAutoResizing`
    - 响应参数变更
      - `+ spec.agencyName`
      - `+ spec.enableAutoResizing`
  - **DeleteCluster**
    - 响应参数变更
      - `+ spec.agencyName`
      - `+ spec.enableAutoResizing`
  - **ShowAutopilotCluster**
    - 响应参数变更
      - `+ spec.enableMasterVolumeEncryption`
      - `+ spec.enableDistMgt`
      - `+ spec.deletionProtection`
  - **UpdateAutopilotCluster**
    - 响应参数变更
      - `+ spec.enableMasterVolumeEncryption`
      - `+ spec.enableDistMgt`
      - `+ spec.deletionProtection`
  - **DeleteAutopilotCluster**
    - 响应参数变更
      - `+ spec.enableMasterVolumeEncryption`
      - `+ spec.enableDistMgt`
      - `+ spec.deletionProtection`
  - **CreateCluster**
    - 请求参数变更
      - `+ spec.agencyName`
      - `+ spec.enableAutoResizing`
    - 响应参数变更
      - `+ spec.agencyName`
      - `+ spec.enableAutoResizing`
  - **ListClusters**
    - 响应参数变更
      - `+ items.spec.agencyName`
      - `+ items.spec.enableAutoResizing`
  - **CreateAutopilotCluster**
    - 请求参数变更
      - `+ spec.enableMasterVolumeEncryption`
      - `+ spec.enableDistMgt`
      - `+ spec.deletionProtection`
    - 响应参数变更
      - `+ spec.enableMasterVolumeEncryption`
      - `+ spec.enableDistMgt`
      - `+ spec.deletionProtection`
  - **ListAutopilotClusters**
    - 响应参数变更
      - `+ items.spec.enableMasterVolumeEncryption`
      - `+ items.spec.enableDistMgt`
      - `+ items.spec.deletionProtection`
  - **ShowNode**
    - 响应参数变更
      - `+ metadata.ownerReference.hyperNodeName`
      - `+ metadata.ownerReference.hyperNodeID`
  - **UpdateNode**
    - 响应参数变更
      - `+ metadata.ownerReference.hyperNodeName`
      - `+ metadata.ownerReference.hyperNodeID`
  - **DeleteNode**
    - 响应参数变更
      - `+ metadata.ownerReference.hyperNodeName`
      - `+ metadata.ownerReference.hyperNodeID`
  - **CreateNode**
    - 请求参数变更
      - `+ metadata.ownerReference.hyperNodeName`
      - `+ metadata.ownerReference.hyperNodeID`
    - 响应参数变更
      - `+ metadata.ownerReference.hyperNodeName`
      - `+ metadata.ownerReference.hyperNodeID`
  - **ListNodes**
    - 响应参数变更
      - `+ items.metadata.ownerReference.hyperNodeName`
      - `+ items.metadata.ownerReference.hyperNodeID`

### HuaweiCloud SDK IoTDA

- _接口版本_
  - V5
- _新增特性_
  - 支持以下接口：
    - `ListDomainConfigurations`
    - `CreateDomainConfiguration`
    - `ShowDomainConfiguration`
    - `UpdateDomainConfiguration`
    - `DeleteDomainConfiguration`
    - `ListServerCertificate`
    - `CreateServerCertificate`
    - `ShowServerCertificate`
    - `DeleteServerCertificate`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK Live

- _接口版本_
  - V2
- _新增特性_
  - 支持接口`ListTranscodeTaskDetail`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK LTS

- _接口版本_
  - V2
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ShowNotificationTemplate**
    - 响应参数变更
      - `- locale: enum value [zh-cn,en-us]`
      - `+ templates.sendType`
      - `+ templates.version`
      - `- templates.sub_type: enum value [sms,dingding,wechat,webhook,email]`
      - `* templates: list<SubTemplate> -> list<SubTemplateResBody>`
  - **ListLogContext**
    - 请求参数变更
      - `+ backwards_size`
      - `+ forwards_size`
      - `- backwardsSize`
      - `- forwardsSize`
  - **UpdateNotificationTemplate**
    - 响应参数变更
      - `- locale: enum value [zh-cn,en-us]`
      - `+ templates.sendType`
      - `+ templates.version`
      - `- templates.sub_type: enum value [sms,dingding,wechat,webhook,email]`
      - `* templates: list<SubTemplate> -> list<SubTemplateResBody>`
  - **ListNotificationTemplates**
    - 响应参数变更
      - `- results.locale: enum value [zh-cn,en-us]`
      - `+ results.templates.sendType`
      - `+ results.templates.version`
      - `- results.templates.sub_type: enum value [sms,dingding,wechat,webhook,email]`
      - `* results.templates: list<SubTemplate> -> list<SubTemplateResBody>`

### HuaweiCloud SDK MetaStudio

- _接口版本_
  - V1
- _新增特性_
  - 支持以下接口：
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
- _解决问题_
  - 无
- _特性变更_
  - 移除以下接口：
    - `ListTtsaJobs`
    - `CreateTtsa`
    - `CreateFacialAnimations`
    - `ListFacialAnimationsData`
    - `ListTtsaData`
  - **List2dModelTrainingJob**
    - 请求参数变更
      - `+ update_since`
      - `+ update_until`
      - `+ is_live_copy`
      - `+ train_location`
      - `+ is_ondemand_resource`
    - 响应参数变更
      - `+ jobs.is_live_copy`
      - `+ jobs.is_fast_flexus`
      - `+ jobs.optional_training_location`
      - `+ jobs.is_background_replacement`
      - `+ jobs.is_ondemand_resource`
      - `+ jobs.state: enum value [WAIT_TEST_VIDEO_CHECK,TEST_VIDEO_CHECK_PROCESSING,TEST_VIDEO_CHECK_SUCCESS,TEST_VIDEO_CHECK_FAILED,VIDEO_ANALYZE_PROCESSING,VIDEO_ANALYZE_SUCCESS,VIDEO_ANALYZE_FAILED,ACTION_MARKING,ACTION_MARK_SUCCESS,ACTION_MARK_FAILED,ACTION_MARK_UPLOADED,WAIT_GENERATE_ACTION_MARK,MANUL_STOP_ACTION_MARK]`
      - `+ jobs.model_version: enum value [V3.3]`
  - **Create2dModelTrainingJob**
    - 请求参数变更
      - `+ is_ondemand_resource`
      - `+ is_fast_flexus`
      - `+ is_live_copy`
      - `+ model_version: enum value [V3.3]`
  - **Execute2dModelTrainingCommandByUser**
    - 请求参数变更
      - `+ operation_reason`
      - `+ command: enum value [CONFIRM_AUTHORIZATION_LETTER,DELETE_JOB_VIDEO]`
    - 响应参数变更
      - `+ error_info`
  - **ShowLivePlatformAccessType**
    - 请求参数变更
      - `+ offset`
      - `+ limit`
  - **Update2dModelTrainingJob**
    - 请求参数变更
      - `+ is_fast_flexus`
      - `+ voice_properties`
  - **Show2dModelTrainingJob**
    - 响应参数变更
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

- _接口版本_
  - V3
- _新增特性_
  - 支持以下接口：
    - `ListDbAgentJobHistorys`
    - `RefreshPublicationSnapshot`
    - `RefreshSubscription`
    - `SyncReplicationMetadata`
    - `ListDbAgentJobHistorySteps`
- _解决问题_
  - 无
- _特性变更_
  - **StartInstanceReduceVolumeAction**
    - 请求参数变更
      - `+ reduce_volume.is_delay`
  - **CreateInstance**
    - 请求参数变更
      - `+ auto_enlarge_strategy`

# 3.1.162 2025-11-13

### HuaweiCloud SDK AAD

- _接口版本_
  - V1
- _新增特性_
  - 支持接口`ShowLtsConfig`、`UpdateLtsConfig`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK CodeArtsRepo

- _接口版本_
  - V4
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListMergeRequestVersions**
    - 请求参数变更
      - `+ offset`
      - `+ limit`
  - **ListMergeRequestEvaluations**
    - 请求参数变更
      - `+ offset`
      - `+ limit`

### HuaweiCloud SDK ECS

- _接口版本_
  - V2
- _新增特性_
  - 支持接口`BatchAddServerGroupMember`、`BatchDeleteServerGroupMember`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK GaussDB

- _接口版本_
  - V3
- _新增特性_
  - 支持接口`DownloadImportExcelTemplate`、`UploadImportExcelTemplate`
- _解决问题_
  - 无
- _特性变更_
  - **RestartStarrocksInstance**
    - 响应参数变更
      - `+ job_id`
      - `- workflow_id`
  - **RestartStarrocksNode**
    - 响应参数变更
      - `+ job_id`
      - `- workflow_id`
  - **ModifyStarRocksSecurityGroup**
    - 响应参数变更
      - `+ job_id`
      - `- workflow_id`
  - **ShowHtapLtsConfig**
    - 响应参数变更
      - `+ instance_lts_configs.instance.mode`
  - **DeleteStarrocksInstance**
    - 响应参数变更
      - `+ job_id`
      - `- workflow_id`
  - **ShowTaskDetails**
    - 响应参数变更
      - `+ sub_task_list.status`
  - **ShowProxyFlavorsByAzCode**
    - 响应参数变更
      - `+ proxy_flavor_groups.proxy_flavors.id`
  - **ShowSqlFilterRule**
    - 响应参数变更
      - `+ sql_filter_rules.patterns.cur_concurrency`
      - `+ sql_filter_rules.patterns.cur_reject`
      - `+ sql_filter_rules.patterns.create_at`
      - `+ sql_filter_rules.patterns.expire_at`
  - **SetSqlFilterRule**
    - 请求参数变更
      - `+ sql_filter_rules.rules.patterns.expire_at`

### HuaweiCloud SDK Live

- _接口版本_
  - V1
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **CreateOttChannelInfo**
    - 请求参数变更
      - `+ mode`
      - `+ region`
  - **ListOttChannelInfo**
    - 响应参数变更
      - `+ channels.mode`
      - `+ channels.region`

### HuaweiCloud SDK LTS

- _接口版本_
  - V2
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ShowNotificationTemplate**
    - 响应参数变更
      - `- templates.sendType`
      - `- templates.version`
  - **UpdateSqlAlarmRule**
    - 请求参数变更
      - `+ enterprise_project_id`
      - `+ sql_requests.custom_date`
      - `+ sql_requests.is_time_range_relative`
      - `- sql_requests.sql_request_title`
    - 响应参数变更
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
    - 请求参数变更
      - `+ enterprise_project_id`
      - `+ sql_requests.custom_date`
      - `+ sql_requests.is_time_range_relative`
      - `- sql_requests.sql_request_title`
  - **ListSqlAlarmRules**
    - 响应参数变更
      - `+ sql_alarm_rules.sql_requests.custom_date`
      - `+ sql_alarm_rules.sql_requests.is_time_range_relative`
      - `- sql_alarm_rules.sql_requests.search_time_range_unit: enum value [minute,hour]`
      - `* sql_alarm_rules.sql_requests: list<SqlRequest> -> list<SqlRequestResponse>`
  - **UpdateKeywordsAlarmRule**
    - 请求参数变更
      - `+ enterprise_project_id`
      - `+ keywords_requests.custom_date`
      - `+ keywords_requests.is_time_range_relative`
    - 响应参数变更
      - `+ keywords_requests.custom_date`
      - `+ keywords_requests.is_time_range_relative`
  - **CreateKeywordsAlarmRule**
    - 请求参数变更
      - `+ enterprise_project_id`
      - `+ keywords_requests.custom_date`
      - `+ keywords_requests.is_time_range_relative`
  - **ListKeywordsAlarmRules**
    - 响应参数变更
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
    - 请求参数变更
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
    - 响应参数变更
      - `- templates.sendType`
      - `- templates.version`
  - **CreateNotificationTemplate**
    - 请求参数变更
      - `- templates.sendType`
      - `- templates.version`
  - **ListNotificationTemplates**
    - 响应参数变更
      - `- results.templates.sendType`
      - `- results.templates.version`

### HuaweiCloud SDK MetaStudio

- _接口版本_
  - V1
- _新增特性_
  - 支持以下接口：
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
- _解决问题_
  - 无
- _特性变更_
  - **ListAssetSummary**
    - 响应参数变更
      - `+ asset_list.block_reason_code`
  - **ShowSubtitleFile**
    - 响应参数变更
      - `+ subtitle_file_info.error_info`
  - **CreateSmartChatRoom**
    - 请求参数变更
      - `+ enable_semantic_action`
  - **ShowSmartChatRoom**
    - 响应参数变更
      - `+ enable_semantic_action`
  - **UpdateSmartChatRoom**
    - 请求参数变更
      - `+ enable_semantic_action`
    - 响应参数变更
      - `+ enable_semantic_action`

### HuaweiCloud SDK RDS

- _接口版本_
  - V3
- _新增特性_
  - 支持以下接口：
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
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK VPC

- _接口版本_
  - V2
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListVpcs**
    - 响应参数变更
      - `+ vpcs.block_service_endpoint_states`
      - `+ vpcs.enable_network_address_usage_metrics`
  - **CreateVpc**
    - 请求参数变更
      - `+ vpc.block_service_endpoint_states`
      - `+ vpc.enable_network_address_usage_metrics`
    - 响应参数变更
      - `+ vpc.block_service_endpoint_states`
      - `+ vpc.enable_network_address_usage_metrics`
  - **ShowVpc**
    - 响应参数变更
      - `+ vpc.block_service_endpoint_states`
      - `+ vpc.enable_network_address_usage_metrics`
  - **UpdateVpc**
    - 请求参数变更
      - `+ vpc.enable_network_address_usage_metrics`
    - 响应参数变更
      - `+ vpc.block_service_endpoint_states`
      - `+ vpc.enable_network_address_usage_metrics`
  - **ListSubnets**
    - 响应参数变更
      - `+ subnets.enable_network_address_usage_metrics`
      - `+ subnets.available_ip_address_count`
  - **CreateSubnet**
    - 请求参数变更
      - `+ subnet.enable_network_address_usage_metrics`
    - 响应参数变更
      - `+ subnet.enable_network_address_usage_metrics`
      - `+ subnet.available_ip_address_count`
  - **ShowSubnet**
    - 响应参数变更
      - `+ subnet.enable_network_address_usage_metrics`
      - `+ subnet.available_ip_address_count`
  - **UpdateSubnet**
    - 请求参数变更
      - `+ subnet.enable_network_address_usage_metrics`

### HuaweiCloud SDK VPC

- _接口版本_
  - V3
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListVpcs**
    - 响应参数变更
      - `+ vpcs.block_service_endpoint_states`
      - `+ vpcs.enable_network_address_usage_metrics`
  - **CreateVpc**
    - 响应参数变更
      - `+ vpc.block_service_endpoint_states`
      - `+ vpc.enable_network_address_usage_metrics`
  - **ShowVpc**
    - 响应参数变更
      - `+ vpc.block_service_endpoint_states`
      - `+ vpc.enable_network_address_usage_metrics`
  - **UpdateVpc**
    - 响应参数变更
      - `+ vpc.block_service_endpoint_states`
      - `+ vpc.enable_network_address_usage_metrics`
  - **RemoveVpcExtendCidr**
    - 响应参数变更
      - `+ vpc.block_service_endpoint_states`
      - `+ vpc.enable_network_address_usage_metrics`
  - **AddVpcExtendCidr**
    - 响应参数变更
      - `+ vpc.block_service_endpoint_states`
      - `+ vpc.enable_network_address_usage_metrics`
  - **CreateFirewall**
    - 请求参数变更
      - `+ firewall.type`
    - 响应参数变更
      - `+ firewall.type`
  - **ShowFirewall**
    - 响应参数变更
      - `+ firewall.type`
  - **UpdateFirewall**
    - 请求参数变更
      - `+ dry_run`
    - 响应参数变更
      - `+ firewall.type`
  - **UpdateFirewallRules**
    - 请求参数变更
      - `+ dry_run`
    - 响应参数变更
      - `+ firewall.type`
  - **AddFirewallRules**
    - 请求参数变更
      - `+ dry_run`
    - 响应参数变更
      - `+ firewall.type`
  - **RemoveFirewallRules**
    - 请求参数变更
      - `+ dry_run`
    - 响应参数变更
      - `+ firewall.type`
  - **AssociateSubnetFirewall**
    - 请求参数变更
      - `+ dry_run`
    - 响应参数变更
      - `+ firewall.type`
  - **DisassociateSubnetFirewall**
    - 请求参数变更
      - `+ dry_run`
    - 响应参数变更
      - `+ firewall.type`
  - **ListTrafficMirrorFilters**
    - 响应参数变更
      - `+ traffic_mirror_filters.type`
  - **CreateTrafficMirrorFilter**
    - 响应参数变更
      - `+ traffic_mirror_filter.type`
  - **ShowTrafficMirrorFilter**
    - 响应参数变更
      - `+ traffic_mirror_filter.type`
  - **UpdateTrafficMirrorFilter**
    - 响应参数变更
      - `+ traffic_mirror_filter.type`
  - **AddSecurityGroups**
    - 请求参数变更
      - `+ dry_run`
    - 响应参数变更
      - `+ port.binding:vif_details.primary_interface`
      - `+ port.binding:vif_details.port_filter`
      - `+ port.binding:vif_details.ovs_hybrid_plug`
      - `* port.binding:vif_details: object -> object<BindingVifDetails>`
      - `* port.tags: list<string> -> list<ResourceTag>`
  - **RemoveSecurityGroups**
    - 请求参数变更
      - `+ dry_run`
    - 响应参数变更
      - `+ port.binding:vif_details.primary_interface`
      - `+ port.binding:vif_details.port_filter`
      - `+ port.binding:vif_details.ovs_hybrid_plug`
      - `* port.binding:vif_details: object -> object<BindingVifDetails>`
      - `* port.tags: list<string> -> list<ResourceTag>`

# 3.1.161 2025-11-06

### HuaweiCloud SDK LTS

- _接口版本_
  - V2
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **UpdateStructConfig**
    - 请求参数变更
      - `- demo_fields`
      - `- tag_fields`
      - `- quick_analysis`
  - **CreateStructConfig**
    - 请求参数变更
      - `- demo_fields`
      - `- tag_fields`
      - `- quick_analysis`
  - **UpdateSqlAlarmRule**
    - 请求参数变更
      - `+ tags`
      - `- sql_alarm_send`
      - `- sql_alarm_send_code`
      - `- notification_save_rule`
  - **CreateSqlAlarmRule**
    - 请求参数变更
      - `+ tags`
      - `- sql_alarm_send`
      - `- notification_save_rule`
  - **UpdateKeywordsAlarmRule**
    - 请求参数变更
      - `+ tags`
      - `- keywords_alarm_send`
      - `- keywords_alarm_send_code`
      - `- notification_save_rule`
  - **CreateKeywordsAlarmRule**
    - 请求参数变更
      - `+ tags`
      - `- keywords_alarm_send`
      - `- notification_save_rule`
  - **UpdateTransfer**
    - 请求参数变更
      - `+ log_group_id`
      - `+ log_streams`
  - **ListLogStreamIndex**
    - 响应参数变更
      - `+ fields.fieldAnalysisAlias`
      - `+ fields.ltsSubFieldsInfoList.fieldAnalysisAlias`
      - `- fields.ltsSubFieldsInfoList.caseSensitive`
      - `- fields.ltsSubFieldsInfoList.includeChinese`
      - `- fields.ltsSubFieldsInfoList.tokenizer`
      - `- fields.ltsSubFieldsInfoList.ascii`
  - **CreateLogStreamIndex**
    - 请求参数变更
      - `+ fastAnalysisSampleCount`
      - `+ fields.fieldAnalysisAlias`
      - `+ fields.ltsSubFieldsInfoList.fieldAnalysisAlias`
      - `- fields.ltsSubFieldsInfoList.caseSensitive`
      - `- fields.ltsSubFieldsInfoList.includeChinese`
      - `- fields.ltsSubFieldsInfoList.tokenizer`
      - `- fields.ltsSubFieldsInfoList.ascii`
  - **CreateAccessConfig**
    - 请求参数变更
      - `+ recursive_depth`

### HuaweiCloud SDK OCR

- _接口版本_
  - V1
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **RecognizeVehicleLicense**
    - 响应参数变更
      - `+ result.front.alarm_result`
      - `+ result.front.alarm_confidence`
      - `+ result.back.alarm_result`
      - `+ result.back.alarm_confidence`

### HuaweiCloud SDK RDS

- _接口版本_
  - V3
- _新增特性_
  - 支持接口`CreateIntelligentKillSession`、`ShowIntelligentKillSessionHistory`、`ListAutoScalingPolicy`
- _解决问题_
  - 无
- _特性变更_
  - 无

# 3.1.160 2025-10-30

### HuaweiCloud SDK CBR

- _接口版本_
  - V1
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **CopyBackup**
    - 请求参数变更
      - `+ replicate.cross_account_urn`
  - **CopyCheckpoint**
    - 请求参数变更
      - `+ replicate.cross_account_urn`
  - **ListPolicies**
    - 响应参数变更
      - `+ policies.operation_definition.cross_account_urn`
  - **CreatePolicy**
    - 请求参数变更
      - `+ policy.operation_definition.cross_account_urn`
    - 响应参数变更
      - `+ policy.operation_definition.cross_account_urn`
  - **ShowPolicy**
    - 响应参数变更
      - `+ policy.operation_definition.cross_account_urn`
  - **UpdatePolicy**
    - 请求参数变更
      - `+ policy.operation_definition.cross_account_urn`
    - 响应参数变更
      - `+ policy.operation_definition.cross_account_urn`
  - **ListOrganizationPolicies**
    - 响应参数变更
      - `+ policies.policy_operation_definition.cross_account_urn`
  - **CreateOrganizationPolicy**
    - 请求参数变更
      - `+ policy.policy_operation_definition.cross_account_urn`
    - 响应参数变更
      - `+ policy.policy_operation_definition.cross_account_urn`
  - **ShowOrganizationPolicy**
    - 响应参数变更
      - `+ policy.policy_operation_definition.cross_account_urn`
  - **UpdateOrganizationPolicy**
    - 请求参数变更
      - `+ policy.policy_operation_definition.cross_account_urn`
    - 响应参数变更
      - `+ policy.policy_operation_definition.cross_account_urn`

### HuaweiCloud SDK DRS

- _接口版本_
  - V3
- _新增特性_
  - 支持接口`QueryTuningParams`、`SelectGroupAndStream`、`ModifyGroupAndStream`
- _解决问题_
  - 无
- _特性变更_
  - **BatchStartJobs**
    - 请求参数变更
      - `+ jobs.is_only_init_task`
  - **UpdateTuningParams**
    - 响应参数变更
      - `+ full_sync.range`

### HuaweiCloud SDK GaussDB

- _接口版本_
  - V3
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ModifyDataSync**
    - 请求参数变更
      - `+ is_instance_level_sync`
      - `+ database_repl_scope`
      - `+ is_support_reg_exp`
  - **BatchUpgradeDatabases**
    - 请求参数变更
      - `- is_skip_validate`

### HuaweiCloud SDK GaussDBforNoSQL

- _接口版本_
  - V3
- _新增特性_
  - 支持接口`ShowAutoNodeExpansionPolicy`、`ModifyAutoNodeExpansionPolicy`
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
  - **ListRealTimeSessions**
    - 响应参数变更
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

- _接口版本_
  - V1
- _新增特性_
  - 支持以下接口：
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
- _解决问题_
  - 无
- _特性变更_
  - **ModifyOttChannelInfoEndPoints**
    - 请求参数变更
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
    - 请求参数变更
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
    - 响应参数变更
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

- _接口版本_
  - V2
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListLogStreams**
    - 响应参数变更
      - `+ log_streams.is_favorite`
  - **CreateDashBoard**
    - 响应参数变更
      - `+ concise_mode_enable`
      - `+ tags`
  - **ShowStructTemplate**
    - 响应参数变更
      - `+ uploadParseFailedLog`
      - `+ uploadOriginalLog`
      - `+ custom_time_info`
  - **ShowNotificationTemplate**
    - 响应参数变更
      - `+ templates.sendType`
      - `+ templates.version`
  - **ListTopnTrafficStatistics**
    - 响应参数变更
      - `+ results.log_group_name_alias`
      - `+ results.log_stream_name_alias`
  - **ListSqlAlarmRules**
    - 响应参数变更
      - `+ sql_alarm_rules.tags`
      - `- sql_alarm_rules.sql_alarm_send`
      - `- sql_alarm_rules.sql_requests.is_time_range_relative`
  - **UpdateSqlAlarmRule**
    - 请求参数变更
      - `- sql_requests.is_time_range_relative`
    - 响应参数变更
      - `- sql_requests.is_time_range_relative`
  - **CreateSqlAlarmRule**
    - 请求参数变更
      - `- sql_requests.is_time_range_relative`
  - **UpdateKeywordsAlarmRule**
    - 响应参数变更
      - `+ recovery_policy`
      - `+ tags`
      - `+ trigger_condition_count`
      - `+ trigger_condition_frequency`
      - `+ whether_recovery_policy`
      - `- topics`
      - `- language`
      - `- indexId`
  - **ListActiveOrHistoryAlarms**
    - 响应参数变更
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
    - 请求参数变更
      - `+ events.metadata.event_subtype`
  - **UpdateTransfer**
    - 请求参数变更
      - `- log_transfer_info.log_transfer_detail.obs_transfer_path`
      - `- log_transfer_info.log_transfer_detail.obs_period: enum value [1,2,3,5,6,12,30]`
      - `* log_transfer_info.log_transfer_detail: object<TransferDetail> -> object<LogTransferDetail>`
    - 响应参数变更
      - `- log_transfer_info.log_transfer_detail.obs_eps_id`
      - `- log_transfer_info.log_transfer_detail.lts_tags`
      - `- log_transfer_info.log_transfer_detail.stream_tags`
      - `- log_transfer_info.log_transfer_detail.struct_fields`
      - `- log_transfer_info.log_transfer_detail.invalid_field_value`
  - **CreateTransfer**
    - 请求参数变更
      - `- log_transfer_info.log_transfer_detail.obs_transfer_path`
      - `- log_transfer_info.log_transfer_detail.obs_period: enum value [1,2,3,5,6,12,30]`
      - `* log_transfer_info.log_transfer_detail: object<TransferDetail> -> object<LogTransferDetail>`
    - 响应参数变更
      - `- log_transfer_info.log_transfer_detail.obs_eps_id`
      - `- log_transfer_info.log_transfer_detail.lts_tags`
      - `- log_transfer_info.log_transfer_detail.stream_tags`
      - `- log_transfer_info.log_transfer_detail.struct_fields`
      - `- log_transfer_info.log_transfer_detail.invalid_field_value`
  - **DeleteTransfer**
    - 响应参数变更
      - `- log_transfer_info.log_transfer_detail.obs_eps_id`
      - `- log_transfer_info.log_transfer_detail.lts_tags`
      - `- log_transfer_info.log_transfer_detail.stream_tags`
      - `- log_transfer_info.log_transfer_detail.struct_fields`
      - `- log_transfer_info.log_transfer_detail.invalid_field_value`
  - **ListTransfers**
    - 响应参数变更
      - `- log_transfers.log_transfer_info.log_transfer_detail.obs_eps_id`
      - `- log_transfers.log_transfer_info.log_transfer_detail.lts_tags`
      - `- log_transfers.log_transfer_info.log_transfer_detail.stream_tags`
      - `- log_transfers.log_transfer_info.log_transfer_detail.struct_fields`
      - `- log_transfers.log_transfer_info.log_transfer_detail.invalid_field_value`
  - **UpdateNotificationTemplate**
    - 请求参数变更
      - `+ templates.sendType`
      - `+ templates.version`
    - 响应参数变更
      - `+ templates.sendType`
      - `+ templates.version`
  - **CreateNotificationTemplate**
    - 请求参数变更
      - `+ templates.sendType`
      - `+ templates.version`
    - 响应参数变更
      - `- locale: enum value [zh-cn,en-us]`
      - `+ templates.sendType`
      - `+ templates.version`
      - `- templates.sub_type: enum value [sms,dingding,wechat,webhook,email]`
      - `* templates: list<SubTemplate> -> list<SubTemplateResBody>`
  - **ListNotificationTemplates**
    - 响应参数变更
      - `+ results.templates.sendType`
      - `+ results.templates.version`
  - **UpdateHostGroup**
    - 响应参数变更
      - `+ agent_access_type`
      - `+ labels`
  - **CreateHostGroup**
    - 响应参数变更
      - `+ agent_access_type`
      - `+ labels`
  - **DeleteHostGroup**
    - 响应参数变更
      - `+ agent_access_type`
      - `+ labels`
      - `+ result.agent_access_type`
      - `+ result.labels`
  - **ListQueryAllSearchCriterias**
    - 响应参数变更
      - `+ search_criterias.search_type`
  - **CreateLogStreamIndex**
    - 响应参数变更
      - `- isQueryComplete`
  - **ListHostGroup**
    - 响应参数变更
      - `+ agent_access_type`
      - `+ labels`
      - `+ result.agent_access_type`
      - `+ result.labels`
  - **ListAccessConfig**
    - 响应参数变更
      - `+ recursive_depth`
      - `+ log_split_size`
      - `+ access_config_type_source`
      - `+ result.log_split_size`
      - `+ result.recursive_depth`
      - `+ result.access_config_type_source`
  - **UpdateAccessConfig**
    - 响应参数变更
      - `+ recursive_depth`
      - `+ log_split_size`
      - `+ access_config_type_source`
  - **CreateAccessConfig**
    - 响应参数变更
      - `+ recursive_depth`
      - `+ log_split_size`
      - `+ access_config_type_source`
  - **DeleteAccessConfig**
    - 响应参数变更
      - `+ recursive_depth`
      - `+ log_split_size`
      - `+ access_config_type_source`
      - `+ result.log_split_size`
      - `+ result.recursive_depth`
      - `+ result.access_config_type_source`

### HuaweiCloud SDK RDS

- _接口版本_
  - V3
- _新增特性_
  - 支持接口`ListSmallVersion`
- _解决问题_
  - 无
- _特性变更_
  - 无

# 3.1.159 2025-10-23

### HuaweiCloud SDK CodeHub

- _接口版本_
  - V4
- _新增特性_
  - 支持以下接口：
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
- _解决问题_
  - 无
- _特性变更_
  - **DeleteTrustedIpAddress**
    - 响应参数变更
      - `+ status: enum value [success,fail]`
  - **DeleteTenantTrustedIpAddress**
    - 响应参数变更
      - `+ status: enum value [success,fail]`
  - **StartRemoteMirrorSynchronization**
    - 请求参数变更
      - `+ force_fetch`
  - **ListRepositoryReviewAuthors**
    - 响应参数变更
      - `+ state: enum value [active,blocked,error]`
  - **ListMergeRequestParticipants**
    - 响应参数变更
      - `+ state: enum value [active,blocked,error]`
  - **CreateCommitRevert**
    - 响应参数变更
      - `+ iid`
  - **ListMergeRequestTemplates**
    - 响应参数变更
      - `* : list<MergeRequestTemplateDto> -> list<RepositoryMergeRequestTemplateDto>`
  - **ListGroupMergeRequestValidAssignedCandidates**
    - 请求参数变更
      - `+ offset`
      - `+ limit`
    - 响应参数变更
      - `+ state: enum value [active,blocked,error]`
  - **ListProjectMergeRequestCanBeAssignedUsers**
    - 请求参数变更
      - `+ offset`
      - `+ limit`
    - 响应参数变更
      - `+ state: enum value [active,blocked,error]`
  - **ListGroupMergeRequestCanBeAssignedReviewers**
    - 请求参数变更
      - `+ offset`
      - `+ limit`
    - 响应参数变更
      - `+ state: enum value [active,blocked,error]`
  - **ListProjectMergeRequestCanBeAssignedReviewers**
    - 请求参数变更
      - `+ offset`
      - `+ limit`
    - 响应参数变更
      - `+ state: enum value [active,blocked,error]`
  - **ListMergeRequestValidAssignedCandidates**
    - 响应参数变更
      - `+ state: enum value [active,blocked,error]`
  - **ShowGroupSettingsInheritCfg**
    - 响应参数变更
      - `+ cr_comment_templates`
      - `- cr_comment_emplates`
  - **ShowUserEmails**
    - 响应参数变更
      - `+ state: enum value [active,blocked]`
  - **UpdateUserEmails**
    - 响应参数变更
      - `+ state: enum value [active,blocked]`
  - **ShowGroupsInherit**
    - 请求参数变更
      - `* setting_type: optional -> required`
  - **BatchDeleteProtectedBranches**
    - 响应参数变更
      - `+ status: enum value [success,fail]`
  - **BatchDeleteProtectedTags**
    - 响应参数变更
      - `+ status: enum value [success,fail]`
  - **ListRepositoryForks**
    - 请求参数变更
      - `+ offset`
      - `+ limit`
  - **ListRepositoryEvents**
    - 响应参数变更
      - `+ author.state: enum value [active,blocked]`
  - **DeleteFile**
    - 响应参数变更
      - `+ status: enum value [success,fail]`
  - **ListRepositoryReviews**
    - 响应参数变更
      - `+ assignee.state: enum value [active,blocked,error]`
  - **CreateMergeRequestDiscussionResponse**
    - 响应参数变更
      - `- type: enum value [DiscussionNote,DiffNote]`
      - `+ author.state: enum value [active,blocked,error]`
  - **UpdateMergeRequestDiscussion**
    - 响应参数变更
      - `- type: enum value [DiscussionNote,DiffNote]`
      - `+ author.state: enum value [active,blocked,error]`
  - **ListRepositoryMergeRequests**
    - 响应参数变更
      - `+ author.state: enum value [active,blocked,error]`
  - **ListMergeRequestApproverSettings**
    - 响应参数变更
      - `+ append_reviewers.state: enum value [active,blocked,error]`
  - **CreateMergeRequestApproverSetting**
    - 请求参数变更
      - `+ append_reviewers.state: enum value [active,blocked,error]`
    - 响应参数变更
      - `+ append_reviewers.state: enum value [active,blocked,error]`
  - **UpdateMergeRequestApproverSetting**
    - 请求参数变更
      - `+ append_reviewers.state: enum value [active,blocked,error]`
    - 响应参数变更
      - `+ append_reviewers.state: enum value [active,blocked,error]`
  - **ListMergeRequestChanges**
    - 响应参数变更
      - `+ author.state: enum value [active,blocked,error]`
  - **ListCommitAssociatedMergeRequests**
    - 响应参数变更
      - `+ merged_by.state: enum value [active,blocked,error]`
  - **ListDiscussionTemplates**
    - 响应参数变更
      - `+ creator.state: enum value [active,blocked,error]`
  - **ListGroupMergeRequestApproverSettings**
    - 响应参数变更
      - `+ append_reviewers.state: enum value [active,blocked,error]`
  - **CreateGroupMergeRequestApproverSetting**
    - 响应参数变更
      - `+ append_reviewers.state: enum value [active,blocked,error]`
  - **ListProjectMergeRequestApproverSettings**
    - 响应参数变更
      - `+ append_reviewers.state: enum value [active,blocked,error]`
  - **CreateProjectMergeRequestApproverSetting**
    - 响应参数变更
      - `+ append_reviewers.state: enum value [active,blocked,error]`
  - **UpdateGroupMergeRequestApproverSetting**
    - 响应参数变更
      - `+ append_reviewers.state: enum value [active,blocked,error]`
  - **UpdateProjectMergeRequestApproverSetting**
    - 响应参数变更
      - `+ append_reviewers.state: enum value [active,blocked,error]`
  - **ListMergeRequestApprovers**
    - 响应参数变更
      - `+ required_approvers_list.state: enum value [active,blocked,error]`
  - **ListMergeRequestReviewers**
    - 响应参数变更
      - `+ required_reviewers_list.state: enum value [active,blocked,error]`
  - **ShowProjectSettingsInheritCfg**
    - 响应参数变更
      - `+ name: enum value [webhook_settings,mr_branch_policies,reviews,deploy_keys]`
  - **UpdateProjectSettingsInheritCfg**
    - 请求参数变更
      - `+ data.name: enum value [webhook_settings,mr_branch_policies,reviews,deploy_keys]`
    - 响应参数变更
      - `+ name: enum value [webhook_settings,mr_branch_policies,reviews,deploy_keys]`
  - **ListRepositoryCommitRules**
    - 响应参数变更
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
    - 响应参数变更
      - `- repository.web_url`
      - `- repository.readme_url`
  - **ListCurrentUserRepositories**
    - 请求参数变更
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
    - 响应参数变更
      - `+ creator.state: enum value [active,blocked,error]`
  - **DeleteBranch**
    - 响应参数变更
      - `+ status: enum value [success,fail]`
  - **ShowMergeRequestDiscussion**
    - 响应参数变更
      - `+ assignee.state: enum value [active,blocked,error]`
      - `- notes.type: enum value [DiscussionNote,DiffNote]`
  - **ListMergeRequestDiscussions**
    - 响应参数变更
      - `+ assignee.state: enum value [active,blocked,error]`
      - `- notes.type: enum value [DiscussionNote,DiffNote]`
  - **CreateMergeRequestDiscussion**
    - 响应参数变更
      - `+ assignee.state: enum value [active,blocked,error]`
      - `- notes.type: enum value [DiscussionNote,DiffNote]`
  - **ShowCommit**
    - 响应参数变更
      - `+ status: enum value [pending,running,success,failed,canceled,skipped,timedout]`
      - `+ merge_request.author.state: enum value [active,blocked,error]`
  - **CreateCommit**
    - 响应参数变更
      - `+ status: enum value [pending,running,success,failed,canceled,skipped,timedout]`
      - `+ merge_request.author.state: enum value [active,blocked,error]`
  - **ShowAverageEvaluation**
    - 响应参数变更
      - `+ evaluations.user.state: enum value [active,blocked,error]`
  - **ListRepositoryFilePushPermissions**
    - 响应参数变更
      - `+ actions.users.state: enum value [active,blocked]`
  - **BatchUpdateRepositoryFilePushPermissions**
    - 响应参数变更
      - `+ actions.users.state: enum value [active,blocked]`
  - **CreateFilePushPermission**
    - 响应参数变更
      - `+ actions.users.state: enum value [active,blocked]`
  - **ListProjectProtectedBranches**
    - 响应参数变更
      - `+ actions.addition_switchers`
      - `+ actions.users.state: enum value [active,blocked,error]`
  - **CreateProjectProtectedBranches**
    - 请求参数变更
      - `+ actions.addition_switchers`
    - 响应参数变更
      - `+ actions.addition_switchers`
      - `+ actions.users.state: enum value [active,blocked,error]`
  - **ListProtectedBranches**
    - 响应参数变更
      - `+ actions.users.state: enum value [active,blocked]`
  - **BatchUpdateProtectedBranches**
    - 请求参数变更
      - `+ actions.addition_switchers`
    - 响应参数变更
      - `+ actions.users.state: enum value [active,blocked]`
  - **BatchCreateProtectedBranch**
    - 请求参数变更
      - `+ actions.addition_switchers`
    - 响应参数变更
      - `+ actions.users.state: enum value [active,blocked]`
  - **DeleteProtectedBranch**
    - 响应参数变更
      - `+ status: enum value [success,fail]`
  - **ShowProtectedBranch**
    - 响应参数变更
      - `+ actions.users.state: enum value [active,blocked]`
  - **UpdateProtectedBranch**
    - 请求参数变更
      - `+ addition_switchers`
    - 响应参数变更
      - `+ actions.users.state: enum value [active,blocked]`
  - **ListProtectedTags**
    - 响应参数变更
      - `+ actions.users.state: enum value [active,blocked]`
  - **BatchUpdateProtectedTags**
    - 响应参数变更
      - `+ actions.users.state: enum value [active,blocked]`
  - **BatchCreateProtectedTags**
    - 响应参数变更
      - `+ actions.users.state: enum value [active,blocked]`
  - **DeleteProtectedTag**
    - 响应参数变更
      - `+ status: enum value [success,fail]`
  - **ShowProtectedTag**
    - 响应参数变更
      - `+ actions.users.state: enum value [active,blocked]`
  - **UpdateProtectedTag**
    - 响应参数变更
      - `+ actions.users.state: enum value [active,blocked]`
  - **ShowRepository**
    - 响应参数变更
      - `- readme_url`
      - `- web_url`
      - `+ owner.state: enum value [active,blocked]`
      - `- forked_from_repository.web_url`
      - `- forked_from_repository.readme_url`
  - **ShowMergeRequestCommentsByLine**
    - 响应参数变更
      - `+ new.type: enum value [unchanged-l]`
      - `- new.type: enum value [unchangd-l]`
      - `+ new.discussions.assignee.state: enum value [active,blocked,error]`
      - `- new.discussions.notes.type: enum value [DiscussionNote,DiffNote]`

### HuaweiCloud SDK GaussDBforNoSQL

- _接口版本_
  - V3
- _新增特性_
  - 支持接口`ListBackups`、`RestoreRedisData`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK GaussDBforopenGauss

- _接口版本_
  - V3
- _新增特性_
  - 支持接口`ListSqlPlanAction`、`UpdateInstanceAlias`、`ShowFullSql`
- _解决问题_
  - 无
- _特性变更_
  - 移除接口`ListDatabaseVolume`
  - **ListSessionTopSqlStatistics**
    - 响应参数变更
      - `+ top_sql_info.count`

### HuaweiCloud SDK KMS

- _接口版本_
  - V2
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **CreateKey**
    - 请求参数变更
      - `+ key_spec: enum value [SECP256K1]`

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
      - `+ alarm`
    - 响应参数变更
      - `+ result.alarm_result`
      - `+ result.alarm_confidence`
  - **RecognizeGeneralText**
    - 请求参数变更
      - `+ return_markdown_result`
    - 响应参数变更
      - `+ result.markdown_result`

### HuaweiCloud SDK RDS

- _接口版本_
  - V3
- _新增特性_
  - 支持以下接口：
    - `ShowRestartPolicy`
    - `ListMajorVersionFeature`
    - `CheckWeakpwd`
    - `NotifyReplaceNode`
    - `ListTopSqls`
- _解决问题_
  - 无
- _特性变更_
  - **StartInstanceRestartAction**
    - 请求参数变更
      - `+ restart.restart_policy`
  - **StartInstanceReduceVolumeAction**
    - 请求参数变更
      - `+ reduce_volume.iops`
      - `+ reduce_volume.throughput`

# 3.1.158 2025-10-16

### HuaweiCloud SDK CDN

- _接口版本_
  - V2
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **UpdateRuleNew**
    - 请求参数变更
      - `+ conditions.match.criteria.criteria`
      - `- conditions.match.criteria.sub_criteria`
      - `* conditions.match.criteria: list<Criteria> -> list<CriteriaItem>`
  - **CreateRuleNew**
    - 请求参数变更
      - `+ conditions.match.criteria.criteria`
      - `- conditions.match.criteria.sub_criteria`
      - `* conditions.match.criteria: list<Criteria> -> list<CriteriaItem>`
  - **ListRuleDetails**
    - 响应参数变更
      - `+ rules.conditions.match.criteria.criteria`
      - `- rules.conditions.match.criteria.sub_criteria`
      - `* rules.conditions.match.criteria: list<Criteria> -> list<CriteriaItem>`
  - **UpdateFullRule**
    - 请求参数变更
      - `+ rules.conditions.match.criteria.criteria`
      - `- rules.conditions.match.criteria.sub_criteria`
      - `* rules.conditions.match.criteria: list<Criteria> -> list<CriteriaItem>`

### HuaweiCloud SDK CPCS

- _接口版本_
  - V1
- _新增特性_
  - 支持以下接口：
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
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK DDS

- _接口版本_
  - V3
- _新增特性_
  - 支持接口`DeleteIp`
- _解决问题_
  - 无
- _特性变更_
  - **UpgradeDatabaseVersion**
    - 请求参数变更
      - `+ is_delayed`

### HuaweiCloud SDK GaussDBforopenGauss

- _接口版本_
  - V3
- _新增特性_
  - 支持接口`ListSessionMemoryContext`、`ListSessionTopSqlStatistics`、`ListSessionWaitEventStatistics`
- _解决问题_
  - 无
- _特性变更_
  - **ListPluginInfoList**
    - 请求参数变更
      - `+ offset`
      - `+ limit`
      - `+ plugin_name: enum value [postgis]`
    - 响应参数变更
      - `+ total_count`
      - `+ plugins`
      - `- installed`
      - `- plugin_version`
      - `- port`
      - `- plugin_name`
  - **CreateSqlLimitTask**
    - 请求参数变更
      - `+ sql_model`

### HuaweiCloud SDK IoTDA

- _接口版本_
  - V5
- _新增特性_
  - 支持以下接口：
    - `ListOtaModules`
    - `CreateOtaModule`
    - `ShowOtaModule`
    - `UpdateOtaModule`
    - `DeleteOtaModule`
- _解决问题_
  - 无
- _特性变更_
  - **ShowDevice**
    - 响应参数变更
      - `+ modules`
  - **UpdateDevice**
    - 响应参数变更
      - `+ modules`
  - **SearchDevices**
    - 响应参数变更
      - `+ devices.modules`
  - **AddDevice**
    - 响应参数变更
      - `+ modules`
  - **ListOtaPackageInfo**
    - 响应参数变更
      - `+ packages.product_name`
      - `+ packages.module_name`
  - **CreateOtaPackage**
    - 请求参数变更
      - `+ module_name`
      - `+ file_location.obs_location.sign_method`
    - 响应参数变更
      - `+ product_name`
      - `+ module_name`
      - `+ file_location.obs_location.sign_method`
  - **ShowOtaPackage**
    - 响应参数变更
      - `+ product_name`
      - `+ module_name`
      - `+ file_location.obs_location.sign_method`

### HuaweiCloud SDK Live

- _接口版本_
  - V2
- _新增特性_
  - 支持接口`ListTranscodeConcurrencyNum`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK RDS

- _接口版本_
  - V3
- _新增特性_
  - 支持以下接口：
    - `ListSubscriberInstances`
    - `CreateSubscription`
    - `ListPublications`
    - `DeletePublication`
    - `ListDistribution`
    - `ModifyPublication`
    - `ListDistributorInstances`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK SIS

- _接口版本_
  - V1
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **RecognizeShortAudio**
    - 请求参数变更
      - `+ config.auto_language_detect`

# 3.1.157 2025-10-09

### HuaweiCloud SDK CCE

- _接口版本_
  - V3
- _新增特性_
  - 支持以下接口：
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
- _解决问题_
  - 无
- _特性变更_
  - **ResizeCluster**
    - 请求参数变更
      - `+ skippedTasks`
  - **ShowClusterConfig**
    - 响应参数变更
      - `+ log_configs.type: enum value [control,audit,system-addon]`
  - **UpdateClusterLogConfig**
    - 请求参数变更
      - `+ log_configs.type: enum value [control,audit,system-addon]`
    - 响应参数变更
      - `+ log_configs.type: enum value [control,audit,system-addon]`
  - **GetClusterSupportConfiguration**
    - 请求参数变更
      - `+ clusterType`
      - `+ clusterVersion`
      - `+ clusterID`
      - `+ networkMode`
      - `- cluster_id`
      - `- cluster_type`
      - `- cluster_version`
      - `- network_mode`
  - **DeleteRelease**
    - 请求参数变更
      - `+ show_resources`
  - **ShowRelease**
    - 请求参数变更
      - `+ show_resources`
  - **UpdateRelease**
    - 请求参数变更
      - `+ show_resources`
  - **UpgradeNodePool**
    - 请求参数变更
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
    - 请求参数变更
      - `* metadata.labels: string -> map<string, string>`
    - 响应参数变更
      - `* metadata.labels: string -> map<string, string>`
  - **DeleteCloudPersistentVolumeClaims**
    - 响应参数变更
      - `* metadata.labels: string -> map<string, string>`
  - **ShowCluster**
    - 响应参数变更
      - `+ metadata.timezone`
      - `+ spec.legacyVersion`
      - `+ spec.enableAutopilot`
  - **UpdateCluster**
    - 响应参数变更
      - `+ metadata.timezone`
      - `+ spec.legacyVersion`
      - `+ spec.enableAutopilot`
  - **DeleteCluster**
    - 响应参数变更
      - `+ metadata.timezone`
      - `+ spec.legacyVersion`
      - `+ spec.enableAutopilot`
  - **RemoveNode**
    - 请求参数变更
      - `+ spec.login.removeUserPassword`
      - `+ spec.login.removeSSHKey`
    - 响应参数变更
      - `+ spec.login.removeUserPassword`
      - `+ spec.login.removeSSHKey`
  - **MigrateNode**
    - 请求参数变更
      - `+ spec.serverConfig`
      - `+ spec.login.removeUserPassword`
      - `+ spec.login.removeSSHKey`
    - 响应参数变更
      - `+ spec.serverConfig`
      - `+ spec.login.removeUserPassword`
      - `+ spec.login.removeSSHKey`
  - **CreateCluster**
    - 请求参数变更
      - `+ metadata.timezone`
      - `+ spec.legacyVersion`
      - `+ spec.enableAutopilot`
    - 响应参数变更
      - `+ metadata.timezone`
      - `+ spec.legacyVersion`
      - `+ spec.enableAutopilot`
  - **ListClusters**
    - 响应参数变更
      - `+ items.metadata.timezone`
      - `+ items.spec.legacyVersion`
      - `+ items.spec.enableAutopilot`
  - **ScaleNodePool**
    - 请求参数变更
      - `+ spec.options.scalePolicy`
  - **ShowNode**
    - 响应参数变更
      - `* metadata.ownerReference: object<NodeOwnerReference> -> object`
      - `+ status.configurationUpToDate`
      - `+ spec.waitPostInstallFinish`
      - `+ spec.nodeNameTemplate`
      - `+ spec.billingMode: enum value [0,1]`
      - `+ spec.login.removeUserPassword`
      - `+ spec.login.removeSSHKey`
  - **UpdateNode**
    - 响应参数变更
      - `* metadata.ownerReference: object<NodeOwnerReference> -> object`
      - `+ status.configurationUpToDate`
      - `+ spec.waitPostInstallFinish`
      - `+ spec.nodeNameTemplate`
      - `+ spec.billingMode: enum value [0,1]`
      - `+ spec.login.removeUserPassword`
      - `+ spec.login.removeSSHKey`
  - **DeleteNode**
    - 响应参数变更
      - `* metadata.ownerReference: object<NodeOwnerReference> -> object`
      - `+ status.configurationUpToDate`
      - `+ spec.waitPostInstallFinish`
      - `+ spec.nodeNameTemplate`
      - `+ spec.billingMode: enum value [0,1]`
      - `+ spec.login.removeUserPassword`
      - `+ spec.login.removeSSHKey`
  - **CreateNode**
    - 请求参数变更
      - `* metadata.ownerReference: object<NodeOwnerReference> -> object`
      - `+ spec.waitPostInstallFinish`
      - `+ spec.nodeNameTemplate`
      - `+ spec.billingMode: enum value [0,1]`
      - `+ spec.login.removeUserPassword`
      - `+ spec.login.removeSSHKey`
    - 响应参数变更
      - `* metadata.ownerReference: object<NodeOwnerReference> -> object`
      - `+ status.configurationUpToDate`
      - `+ spec.waitPostInstallFinish`
      - `+ spec.nodeNameTemplate`
      - `+ spec.billingMode: enum value [0,1]`
      - `+ spec.login.removeUserPassword`
      - `+ spec.login.removeSSHKey`
  - **ListNodes**
    - 响应参数变更
      - `* items.metadata.ownerReference: object<NodeOwnerReference> -> object`
      - `+ items.status.configurationUpToDate`
      - `+ items.spec.waitPostInstallFinish`
      - `+ items.spec.nodeNameTemplate`
      - `+ items.spec.billingMode: enum value [0,1]`
      - `+ items.spec.login.removeUserPassword`
      - `+ items.spec.login.removeSSHKey`
  - **ShowNodePool**
    - 响应参数变更
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
    - 请求参数变更
      - `+ spec.nodeTemplate.az`
      - `+ spec.nodeTemplate.waitPostInstallFinish`
      - `+ spec.nodeTemplate.extendParam.alpha.cce/NodeImageID`
      - `+ spec.nodeTemplate.login.removeUserPassword`
      - `+ spec.nodeTemplate.login.removeSSHKey`
    - 响应参数变更
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
    - 响应参数变更
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
    - 请求参数变更
      - `+ nodeList.spec.lifecycle.waitPostInstallFinish`
      - `+ nodeList.spec.login.removeUserPassword`
      - `+ nodeList.spec.login.removeSSHKey`
      - `+ nodeList.spec.runtimeConfig.containerBaseSize`
  - **ResetNode**
    - 请求参数变更
      - `+ nodeList.spec.lifecycle.waitPostInstallFinish`
      - `+ nodeList.spec.login.removeUserPassword`
      - `+ nodeList.spec.login.removeSSHKey`
      - `+ nodeList.spec.runtimeConfig.containerBaseSize`
  - **CreateNodePool**
    - 请求参数变更
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
    - 响应参数变更
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
    - 响应参数变更
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

- _接口版本_
  - V5
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListImageCaches**
    - 响应参数变更
      - `* image_caches.created_at: string -> date`
  - **CreateImageCache**
    - 响应参数变更
      - `* image_cache.created_at: string -> date`
  - **ShowImageCache**
    - 响应参数变更
      - `* image_cache.created_at: string -> date`
  - **DeleteImageCache**
    - 响应参数变更
      - `* image_cache.created_at: string -> date`

### HuaweiCloud SDK GaussDB

- _接口版本_
  - V3
- _新增特性_
  - 支持以下接口：
    - `UpdateServerlessComputeAbilityPolicy`
    - `ShowServerlessScalingPolicy`
    - `UpdateServerlessScalingPolicy`
    - `UpdateHtapQueryQueuesControl`
    - `ShowHtapQueryQueuesRule`
    - `SetHtapQueryQueuesRule`
    - `ShowTaskDetails`
    - `ShowServerlessComputeAbilityPolicy`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK GaussDBforopenGauss

- _接口版本_
  - V3
- _新增特性_
  - 支持以下接口：
    - `AuthorizeBackupDownload`
    - `ListPluginInfoList`
    - `ModifyInstancePort`
    - `DeleteDisasterRecord`
    - `ListDatabaseVolume`
- _解决问题_
  - 无
- _特性变更_
  - 移除接口`ModifyHotfixes`

### HuaweiCloud SDK RDS

- _接口版本_
  - V3
- _新增特性_
  - 支持接口`ListConfigurationApplyHistories`、`ListInstancesConfigurations`
- _解决问题_
  - 无
- _特性变更_
  - **UpgradeDbVersionNew**
    - 请求参数变更
      - `+ second_switch`

# 3.1.156 2025-09-25

### HuaweiCloud SDK CBR

- _接口版本_
  - V1
- _新增特性_
  - 支持接口`ListFeatures`、`ShowFeature`
- _解决问题_
  - 无
- _特性变更_
  - **ListOrganizationPolicies**
    - 响应参数变更
      - `+ policies.effective_scope`
  - **CreateOrganizationPolicy**
    - 请求参数变更
      - `+ policy.effective_scope`
    - 响应参数变更
      - `+ policy.effective_scope`
  - **ShowOrganizationPolicy**
    - 响应参数变更
      - `+ policy.effective_scope`
  - **UpdateOrganizationPolicy**
    - 请求参数变更
      - `+ policy.effective_scope`
    - 响应参数变更
      - `+ policy.effective_scope`
  - **ListVault**
    - 响应参数变更
      - `+ vaults.availability_zone`
  - **CreateVault**
    - 请求参数变更
      - `+ vault.availability_zone`
    - 响应参数变更
      - `+ orders`
      - `+ error_code`
      - `+ retCode`
      - `+ errText`
      - `+ vault.availability_zone`
      - `- vault.errText`
      - `- vault.retCode`
      - `- vault.orders`
  - **ShowVault**
    - 响应参数变更
      - `+ vault.availability_zone`
  - **UpdateVault**
    - 响应参数变更
      - `+ vault.availability_zone`
  - **ListExternalVault**
    - 响应参数变更
      - `+ vaults.availability_zone`
  - **ListProtectable**
    - 响应参数变更
      - `+ instances.protectable.vault.availability_zone`
  - **ShowProtectable**
    - 响应参数变更
      - `+ instance.protectable.vault.availability_zone`
  - **ShowVaultResourceInstances**
    - 响应参数变更
      - `+ resources.resource_detail.vault.availability_zone`

### HuaweiCloud SDK CodeArtsBuild

- _接口版本_
  - V3
- _新增特性_
  - 支持以下接口：
    - `DownloadBuildRealTimeLog`
    - `DownloadBuildFullLog`
    - `ShowActionIInfo`
    - `AddFavouriteOfficialTemplate`
    - `RemoverFavouriteOfficialTemplate`
    - `AddFavouriteTask`
    - `RemoverFavouriteTask`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK CodeArtsDeploy

- _接口版本_
  - V2
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - 移除接口`CheckDeployStatus`、`StopDeployTask`
  - **ListEnvironments**
    - 响应参数变更
      - `- result.project_id`
  - **ShowEnvironmentDetail**
    - 响应参数变更
      - `- result.project_id`

### HuaweiCloud SDK ECS

- _接口版本_
  - V2
- _新增特性_
  - 支持接口`UpdateSerialConsoleOptions`、`ShowSerialConsoleActions`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK GaussDB

- _接口版本_
  - V3
- _新增特性_
  - 支持接口`ShowSlowLogDetail`、`ShowStarRocksSlowlogSensitiveStatus`、`UpdateSlowlogSensitiveStatus`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK GaussDBforopenGauss

- _接口版本_
  - V3
- _新增特性_
  - 支持以下接口：
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
- _解决问题_
  - 无
- _特性变更_
  - **DeleteInstance**
    - 请求参数变更
      - `- x-auth-token`
  - **ShowBalanceStatus**
    - 请求参数变更
      - `- x-auth-token`
  - **ResetPwd**
    - 请求参数变更
      - `- x-auth-token`
  - **UpdateInstanceName**
    - 请求参数变更
      - `- x-auth-token`
  - **RestartInstance**
    - 请求参数变更
      - `- x-auth-token`
  - **DeleteManualBackup**
    - 请求参数变更
      - `- x-auth-token`
  - **ListRestoreTimes**
    - 请求参数变更
      - `- x-auth-token`
  - **ListDatastores**
    - 请求参数变更
      - `- x-auth-token`
  - **CreateDbUser**
    - 请求参数变更
      - `- x-auth-token`
  - **SetDbUserPwd**
    - 请求参数变更
      - `- x-auth-token`
  - **ResizeInstanceFlavor**
    - 请求参数变更
      - `- x-auth-token`
  - **UpgradeInstanceVersion**
    - 请求参数变更
      - `* body: object<OpenGaussUpgradeRequest> -> object<UpgradeRequestBody>`
  - **ListSessionStatistics**
    - 响应参数变更
      - `+ statistics_list`
      - `- statistics`
  - **ListHbaInfoHistory**
    - 响应参数变更
      - `+ hba_histories`
      - `- hba_confs`
  - **ListSlowSqls**
    - 响应参数变更
      - `* slow_sql_infos.calls: string -> int32`
  - **SetRecyclePolicy**
    - 请求参数变更
      - `- x-auth-token`
  - **UpdateInstanceConfiguration**
    - 请求参数变更
      - `- x-auth-token`
  - **ShowInstanceConfiguration**
    - 请求参数变更
      - `- x-auth-token`
  - **ListConfigurations**
    - 请求参数变更
      - `- x-auth-token`
  - **ShowBackupPolicy**
    - 请求参数变更
      - `- x-auth-token`
  - **SetBackupPolicy**
    - 请求参数变更
      - `- x-auth-token`
  - **SetNewBackupPolicy**
    - 请求参数变更
      - `- x-auth-token`
  - **DeleteDatabaseSchema**
    - 请求参数变更
      - `- x-auth-token`
  - **CreateDatabaseSchemas**
    - 请求参数变更
      - `- x-auth-token`
  - **AllowDbPrivileges**
    - 请求参数变更
      - `- x-auth-token`
  - **AllowDbRolePrivileges**
    - 请求参数变更
      - `- x-auth-token`
  - **ListDatabases**
    - 请求参数变更
      - `- x-auth-token`
  - **ListDbUsers**
    - 请求参数变更
      - `- x-auth-token`
  - **ListDatabaseSchemas**
    - 请求参数变更
      - `- x-auth-token`
  - **SwitchShard**
    - 请求参数变更
      - `- x-auth-token`
  - **ListCnInfosBeforeReduce**
    - 请求参数变更
      - `- x-auth-token`
      - `+ X-Language: enum value [zh-cn,en-us]`
  - **DownloadBackup**
    - 请求参数变更
      - `- x-auth-token`
    - 响应参数变更
      - `* files.size: number -> int32`
  - **ListEnhanceFullSqlStatistics**
    - 响应参数变更
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
    - 请求参数变更
      - `+ before_conf`
      - `+ after_conf`
      - `- before_confs`
      - `- after_confs`
  - **ListReadonlyNodes**
    - 响应参数变更
      - `+ nodes`
      - `- instances`
  - **ListSlowSqlDetails**
    - 响应参数变更
      - `+ slow_sql_details.db_name`
      - `+ slow_sql_details.schema_name`
      - `+ slow_sql_details.sql`
  - **ListDatabaseVolumeSummary**
    - 响应参数变更
      - `- cn_components.role`
      - `* cn_components: list<ComponentInfoResult> -> list<CnComponentInfoResult>`
  - **ShowAlarmStatistics**
    - 响应参数变更
      - `* ring_percentage: number -> double`
  - **ShowGlobalSlowSqlDetail**
    - 响应参数变更
      - `+ slow_sql_details.db_name`
      - `+ slow_sql_details.schema_name`
      - `+ slow_sql_details.sql`
  - **ShowJobDetail**
    - 请求参数变更
      - `- x-auth-token`
  - **ListInstances**
    - 请求参数变更
      - `- x-auth-token`
  - **CreateInstance**
    - 请求参数变更
      - `- x-auth-token`
  - **RunInstanceAction**
    - 请求参数变更
      - `- x-auth-token`
  - **CreateManualBackup**
    - 请求参数变更
      - `- x-auth-token`
  - **ListBackups**
    - 请求参数变更
      - `- x-auth-token`
  - **CreateRestoreInstance**
    - 请求参数变更
      - `- x-auth-token`
  - **ListFlavors**
    - 请求参数变更
      - `- x-auth-token`
  - **ListStorageTypes**
    - 请求参数变更
      - `- x-auth-token`
  - **CreateDbRole**
    - 请求参数变更
      - `- x-auth-token`
  - **ListDatabaseRoles**
    - 请求参数变更
      - `- x-auth-token`
  - **ListComponentInfos**
    - 请求参数变更
      - `- x-auth-token`

# 3.1.155 2025-09-18

### HuaweiCloud SDK CBR

- _接口版本_
  - V1
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ShowBackup**
    - 响应参数变更
      - `+ backup.replication_records.extra_info.destination_vault_id`
      - `- backup.replication_records.extra_info.destinatio_vault_id`
  - **UpdateBackup**
    - 响应参数变更
      - `+ backup.replication_records.extra_info.destination_vault_id`
      - `- backup.replication_records.extra_info.destinatio_vault_id`
  - **ListBackups**
    - 响应参数变更
      - `+ backups.replication_records.extra_info.destination_vault_id`
      - `- backups.replication_records.extra_info.destinatio_vault_id`
  - **ListPolicies**
    - 响应参数变更
      - `+ policies.policy_type`
  - **CreatePolicy**
    - 响应参数变更
      - `+ policy.policy_type`
  - **ShowPolicy**
    - 响应参数变更
      - `+ policy.policy_type`
  - **UpdatePolicy**
    - 响应参数变更
      - `+ policy.policy_type`

### HuaweiCloud SDK CodeArtsDeploy

- _接口版本_
  - V2
- _新增特性_
  - 支持接口`CheckDeployStatus`、`StopDeployTask`
- _解决问题_
  - 无
- _特性变更_
  - **ListEnvironments**
    - 响应参数变更
      - `+ result.project_id`
  - **ShowEnvironmentDetail**
    - 响应参数变更
      - `+ result.project_id`

### HuaweiCloud SDK DDS

- _接口版本_
  - V3
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **SetAutoEnlargePolicies**
    - 请求参数变更
      - `+ policies.size`
      - `* policies: list<DiskAutoExpansionPolicy> -> list<DiskSetAutoExpansionPolicy>`
  - **ShowAutoEnlargePolicy**
    - 响应参数变更
      - `+ policy.size`

### HuaweiCloud SDK MPC

- _接口版本_
  - V1
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - 移除接口`ListEncryptTask`、`CreateEncryptTask`、`DeleteEncryptTask`
  - **CreateTranscodingTask**
    - 请求参数变更
      - `+ metadata`
      - `+ av_parameters.video.buf_size`
      - `+ av_parameters.video.frame_rate_float`
  - **ListTranscodingTask**
    - 响应参数变更
      - `+ task_array.metadata`
      - `+ task_array.av_parameters.video.buf_size`
      - `+ task_array.av_parameters.video.frame_rate_float`
  - **ListTranscodeDetail**
    - 响应参数变更
      - `+ task_array.media_detail.metadata`
  - **CreateEditingJob**
    - 请求参数变更
      - `+ concats.av_parameters.video.buf_size`
      - `+ concats.av_parameters.video.frame_rate_float`
  - **ListEditingJob**
    - 响应参数变更
      - `+ jobs.edit_task_req.concats.av_parameters.video.buf_size`
      - `+ jobs.edit_task_req.concats.av_parameters.video.frame_rate_float`

### HuaweiCloud SDK RDS

- _接口版本_
  - V3
- _新增特性_
  - 支持接口`ListInstancesNoIndexTables`、`ShowTaskDetail`
- _解决问题_
  - 无
- _特性变更_
  - 无

# 3.1.154 2025-09-11

### HuaweiCloud SDK CPCS

- _接口版本_
  - V1
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ShowVmMonitor**
    - 响应参数变更
      - `+ average`
      - `+ max`
  - **ShowAppAccessKeyList**
    - 响应参数变更
      - `+ total_num`

### HuaweiCloud SDK DBSS

- _接口版本_
  - V1
- _新增特性_
  - 支持以下接口：
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
- _解决问题_
  - 无
- _特性变更_
  - 废弃以下接口：
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
    - 请求参数变更
      - `+ page`
      - `+ size`
  - **ListAuditRuleRisks**
    - 响应参数变更
      - `+ customize_total`
  - **ListRdsDatabases**
    - 请求参数变更
      - `+ db_type: enum value [ORACLE,DAMENG,KINGBASE]`
  - **ListAuditAlarmLog**
    - 请求参数变更
      - `+ time.time_range: enum value [HOUR,THREE_HOUR,TWELVE_HOUR,DAY,WEEK,MONTH]`
      - `- time.time_range: enum value [ HOUR, THREE_HOUR, TWELVE_HOUR, DAY, WEEK, MONTH;]`
      - `* risk: string -> list<string>`
  - **ListAuditSqls**
    - 请求参数变更
      - `- risk_levels: enum value [HIGH,MEDIUM,LOW,NO_RISK]`
  - **AddAuditAgent**
    - 请求参数变更
      - `- mode: enum value [0,1]`
      - `- agent_type: enum value [APP,DB]`
  - **ListAuditOperateLogs**
    - 请求参数变更
      - `- action: enum value [CREATE,DELETE,DOWNLOAD,UPDATE]`
      - `- time.time_range: enum value [HALF_HOUR, HOUR, THREE_HOUR, TWELVE_HOUR, DAY, WEEK, MONTH]`
  - **ListResourceInstanceByTag**
    - 请求参数变更
      - `* sys_tags: object<TagKeyValuesBean> -> list<TagKeyValuesBean>`
  - **CountResourceInstanceByTag**
    - 请求参数变更
      - `* sys_tags: object<TagKeyValuesBean> -> list<TagKeyValuesBean>`

### HuaweiCloud SDK ECS

- _接口版本_
  - V2
- _新增特性_
  - 支持接口`ShowServerAttachableNicNum`、`ShowFlavorCapacity`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK GaussDBforopenGauss

- _接口版本_
  - V3
- _新增特性_
  - 支持以下接口：
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
- _解决问题_
  - 无
- _特性变更_
  - **CreateDatabase**
    - 请求参数变更
      - `- x-auth-token`
  - **ExportSlowSql**
    - 请求参数变更
      - `+ sort_key: enum value [table_size,id,table_name,table_owner,database_name,schema_name,is_part_type,is_hash_cluster_key,tuples,create_time,update_time,average_size,max_ratio,min_ratio,skew_size,skew_ratio,skew_stddev]`
      - `+ sort_order: enum value [ASC,DESC]`
  - **ListConfigurationsDiff**
    - 请求参数变更
      - `- x-auth-token`
  - **ListDisasterRecoveryRecord**
    - 响应参数变更
      - `* records: list<RecordInfoResponse> -> list<RecordInfoResponseResult>`
  - **ShowBatchUpgradeCandidateVersions**
    - 响应参数变更
      - `* hotfix_upgrade_infos: list<HotfixInfo> -> list<HotfixInfoResult>`

### HuaweiCloud SDK IoTDM

- _接口版本_
  - V5
- _新增特性_
  - 支持接口`ListInstanceTasks`、`ShowInstanceTask`、`RetryInstanceTask`、`ListInstanceFlavors`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK MetaStudio

- _接口版本_
  - V1
- _新增特性_
  - 支持接口`SignAgreement`、`SignSpecialAgreement`
- _解决问题_
  - 无
- _特性变更_
  - 移除以下接口：
    - `ListAsrVocabulary`
    - `CreateAsrVocabulary`
    - `ShowAsrVocabulary`
    - `UpdateAsrVocabulary`
    - `DeleteAsrVocabulary`
    - `ShowAsrVocabularyAssociation`

### HuaweiCloud SDK SMN

- _接口版本_
  - V2
- _新增特性_
  - 支持以下接口：
    - `ConfirmSubscription`
    - `UnsubscribeSubscription`
    - `ListProtocols`
    - `ListCloudService`
    - `DownloadHttpCert`
    - `DeleteSubscriptionsByTopic`
    - `BatchDeleteSubscriptions`
    - `BatchDeleteSubscriptionsByTopic`
- _解决问题_
  - 无
- _特性变更_
  - 无

# 3.1.153 2025-09-04

### HuaweiCloud SDK CDN

- _接口版本_
  - V2
- _新增特性_
  - 支持以下接口：
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
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK Cloudtest

- _接口版本_
  - V1
- _新增特性_
  - 支持以下接口：
    - `UploadCacheFile`
    - `DeleteCacheFile`
    - `ListIteratorsInfo`
    - `SaveTestReportCustomDetail`
    - `UpdateTestReportCustomDetailByUri`
    - `DeleteTestReportCustomDetailByUri`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK CodeArtsBuild

- _接口版本_
  - V3
- _新增特性_
  - 支持以下接口：
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
- _解决问题_
  - 无
- _特性变更_
  - **AddKeystorePermission**
    - 请求参数变更
      - `+ user_id`

### HuaweiCloud SDK DDS

- _接口版本_
  - V3
- _新增特性_
  - 支持接口`ListBackupDownloadPolicy`、`UpdateBackupDownloadPolicy`、`SaveBackupDownloadPolicy`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK ECS

- _接口版本_
  - V2
- _新增特性_
  - 支持以下接口：
    - `ExecuteServerRedeploy`
    - `BatchResizeServers`
    - `ShowAppendableVolumeQuota`
    - `BatchDetachVolumes`
    - `ExecuteServerDump`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK EPS

- _接口版本_
  - V1
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListEnterpriseProject**
    - 响应参数变更
      - `+ enterprise_projects.delete_flag`
  - **CreateEnterpriseProject**
    - 响应参数变更
      - `+ enterprise_project.delete_flag`
  - **ShowEnterpriseProject**
    - 响应参数变更
      - `+ enterprise_project.delete_flag`
  - **UpdateEnterpriseProject**
    - 响应参数变更
      - `+ enterprise_project.delete_flag`

### HuaweiCloud SDK GaussDB

- _接口版本_
  - V3
- _新增特性_
  - 支持以下接口：
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
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK GaussDBforopenGauss

- _接口版本_
  - V3
- _新增特性_
  - 支持接口`ExportSlowSql`、`ListSchemaAndTable`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK IoTDA

- _接口版本_
  - V5
- _新增特性_
  - 支持以下接口：
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
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK LTS

- _接口版本_
  - V2
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **CreateLogGroup**
    - 请求参数变更
      - `+ enterprise_project_id`

### HuaweiCloud SDK RDS

- _接口版本_
  - V3
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListInstances**
    - 请求参数变更
      - `+ group_type`

# 3.1.152 2025-08-28

### HuaweiCloud SDK ECS

- _接口版本_
  - V2
- _新增特性_
  - 支持接口`CreateLaunchTemplate`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK LTS

- _接口版本_
  - V2
- _新增特性_
  - 支持接口`ListLogStreamIndex`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK MetaStudio

- _接口版本_
  - V1
- _新增特性_
  - 支持以下接口：
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
- _解决问题_
  - 无
- _特性变更_
  - **ShowAsrVocabulary**
    - 响应参数变更
      - `- language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai]`
  - **UpdateAsrVocabulary**
    - 请求参数变更
      - `- language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai]`
    - 响应参数变更
      - `- language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai]`
  - **ShowHotQuestion**
    - 响应参数变更
      - `- language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai]`
  - **UpdateHotQuestion**
    - 响应参数变更
      - `- language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai]`
  - **ShowPacifyWords**
    - 响应参数变更
      - `- language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai]`
  - **UpdatePacifyWords**
    - 响应参数变更
      - `- language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai]`
  - **UpdatePacifyWordsSwitch**
    - 请求参数变更
      - `- language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai]`
  - **UpdatePacifyWordsTriggerTime**
    - 请求参数变更
      - `- language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai]`
  - **ShowWelcomeSpeech**
    - 响应参数变更
      - `- language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai]`
  - **UpdateWelcomeSpeech**
    - 响应参数变更
      - `- language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai]`
  - **UpdateWelcomeSpeechSwitch**
    - 请求参数变更
      - `- language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai]`
  - **CreateAsrVocabulary**
    - 请求参数变更
      - `- language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai]`
    - 响应参数变更
      - `- language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai]`
  - **ListAsrVocabulary**
    - 响应参数变更
      - `- data.language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai]`
  - **ShowAsrVocabularyAssociation**
    - 响应参数变更
      - `- data.language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai]`
  - **StartSmartChatJob**
    - 响应参数变更
      - `- language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai]`
  - **ShowSmartChatJob**
    - 响应参数变更
      - `- language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai]`
  - **CreateHotQuestion**
    - 请求参数变更
      - `- language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai]`
    - 响应参数变更
      - `- language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai]`
  - **ListHotQuestion**
    - 响应参数变更
      - `- data.language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai]`
  - **ListHotWords**
    - 响应参数变更
      - `- data.language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai]`
  - **CreateHotWords**
    - 请求参数变更
      - `- sis_hot_words.language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai]`
    - 响应参数变更
      - `- language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai]`
  - **ShowHotWords**
    - 响应参数变更
      - `- language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai]`
  - **UpdateHotWords**
    - 请求参数变更
      - `- sis_hot_words.language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai]`
    - 响应参数变更
      - `- language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai]`
  - **CreatePacifyWords**
    - 请求参数变更
      - `- language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai]`
    - 响应参数变更
      - `- language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai]`
  - **ListPacifyWords**
    - 响应参数变更
      - `- data.language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai]`
  - **ListRobot**
    - 响应参数变更
      - `- data.language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai]`
  - **CreateRobot**
    - 请求参数变更
      - `- language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai]`
  - **ShowRobot**
    - 响应参数变更
      - `- language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai]`
  - **UpdateRobot**
    - 请求参数变更
      - `- language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai]`
  - **CreateWelcomeSpeech**
    - 请求参数变更
      - `- language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai]`
    - 响应参数变更
      - `- language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai]`
  - **ListWelcomeSpeech**
    - 响应参数变更
      - `- data.language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai]`
  - **ListDigitalHumanVideo**
    - 请求参数变更
      - `+ job_ids`
  - **ListSmartChatRooms**
    - 响应参数变更
      - `+ count_client_nums`
      - `+ count_client_nums_token`
      - `+ smart_chat_rooms.billing_mode`
      - `+ smart_chat_rooms.reuse_resource`
      - `+ smart_chat_rooms.client_nums`
  - **CreateSmartChatRoom**
    - 请求参数变更
      - `+ billing_mode`
      - `+ reuse_resource`
      - `+ client_nums`
      - `+ video_config.is_vocabulary_config_enable`
      - `+ layer_config.sequence_no`
  - **ShowSmartChatRoom**
    - 响应参数变更
      - `+ client_nums`
      - `+ billing_mode`
      - `+ reuse_resource`
      - `+ video_config.is_vocabulary_config_enable`
      - `+ layer_config.sequence_no`
  - **UpdateSmartChatRoom**
    - 请求参数变更
      - `+ billing_mode`
      - `+ reuse_resource`
      - `+ client_nums`
      - `+ video_config.is_vocabulary_config_enable`
      - `+ layer_config.sequence_no`
    - 响应参数变更
      - `+ client_nums`
      - `+ billing_mode`
      - `+ reuse_resource`
      - `+ video_config.is_vocabulary_config_enable`
      - `+ layer_config.sequence_no`
  - **ShowSmartLive**
    - 响应参数变更
      - `+ is_ai_mark_on`
  - **ListJobOperationLog**
    - 响应参数变更
      - `+ operations.external_info.admin_audit_failure_reason`
  - **ShowAsset**
    - 响应参数变更
      - `+ asset_extra_meta.human_model_2d_meta.is_live_copy`
  - **UpdateDigitalAsset**
    - 请求参数变更
      - `+ asset_extra_meta.human_model_2d_meta.is_live_copy`
    - 响应参数变更
      - `+ asset_extra_meta.human_model_2d_meta.is_live_copy`
  - **StartSmartLive**
    - 请求参数变更
      - `+ video_config.is_vocabulary_config_enable`
  - **ListSmartLive**
    - 响应参数变更
      - `+ is_ai_mark_on`
      - `+ smart_live_jobs.is_ai_mark_on`
  - **ListSmartLiveJobs**
    - 响应参数变更
      - `+ is_ai_mark_on`
      - `+ smart_live_jobs.is_ai_mark_on`
  - **CreateDigitalAsset**
    - 请求参数变更
      - `+ asset_extra_meta.human_model_2d_meta.is_live_copy`
  - **ListAssets**
    - 响应参数变更
      - `+ assets.asset_extra_meta.human_model_2d_meta.is_live_copy`
  - **Create2DDigitalHumanVideo**
    - 请求参数变更
      - `+ video_config.is_vocabulary_config_enable`
      - `+ shoot_scripts.shoot_script.layer_config.sequence_no`
  - **Show2DDigitalHumanVideo**
    - 响应参数变更
      - `+ video_config.is_vocabulary_config_enable`
      - `+ shoot_scripts.shoot_script.layer_config.sequence_no`
  - **CreatePhotoDigitalHumanVideo**
    - 请求参数变更
      - `+ shoot_scripts.shoot_script.layer_config.sequence_no`
  - **ShowPhotoDigitalHumanVideo**
    - 响应参数变更
      - `+ shoot_scripts.shoot_script.layer_config.sequence_no`
  - **CreateSmartLiveRoom**
    - 请求参数变更
      - `+ video_config.is_vocabulary_config_enable`
      - `+ scene_scripts.layer_config.sequence_no`
  - **ShowSmartLiveRoom**
    - 响应参数变更
      - `+ video_config.is_vocabulary_config_enable`
      - `+ scene_scripts.layer_config.sequence_no`
  - **UpdateSmartLiveRoom**
    - 请求参数变更
      - `+ video_config.is_vocabulary_config_enable`
      - `+ scene_scripts.layer_config.sequence_no`
    - 响应参数变更
      - `+ video_config.is_vocabulary_config_enable`
      - `+ scene_scripts.layer_config.sequence_no`
  - **ListVideoScripts**
    - 响应参数变更
      - `- video_scripts.model_asset_type: enum value [HUMAN_MODEL_3D]`
  - **CreateVideoScripts**
    - 请求参数变更
      - `- scene_asset_id`
      - `- model_asset_type: enum value [HUMAN_MODEL_3D]`
      - `+ video_config.is_vocabulary_config_enable`
      - `+ shoot_scripts.shoot_script.layer_config.sequence_no`
  - **ShowVideoScript**
    - 响应参数变更
      - `- scene_asset_id`
      - `- model_asset_type: enum value [HUMAN_MODEL_3D]`
      - `+ video_config.is_vocabulary_config_enable`
      - `+ shoot_scripts.shoot_script.layer_config.sequence_no`
  - **UpdateVideoScript**
    - 请求参数变更
      - `- scene_asset_id`
      - `- model_asset_type: enum value [HUMAN_MODEL_3D]`
      - `+ video_config.is_vocabulary_config_enable`
      - `+ shoot_scripts.shoot_script.layer_config.sequence_no`

### HuaweiCloud SDK TMS

- _接口版本_
  - V1
- _新增特性_
  - 支持接口`ListTags`
- _解决问题_
  - 无
- _特性变更_
  - 无

# 3.1.151 2025-08-25

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
      - `+ users.comment`
  - **ListSqlserverDbUsers**
    - 响应参数变更
      - `+ users.comment`

# 3.1.150 2025-08-21

### HuaweiCloud SDK CDN

- _接口版本_
  - V2
- _新增特性_
  - 支持以下接口：
    - `ShowDomainTemplate`
    - `CreateDomainTemplate`
    - `UpdateDomainTemplate`
    - `DeleteDomainTemplate`
    - `ApplyDomainTemplate`
    - `ShowAppliedTemplateRecord`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK CFW

- _接口版本_
  - V1
- _新增特性_
  - 支持以下接口：
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
- _解决问题_
  - 无
- _特性变更_
  - **ListCustomerIps**
    - 请求参数变更
      - `+ ips_id`
    - 响应参数变更
      - `+ data`
  - **ChangeEastWestFirewallStatus**
    - 请求参数变更
      - `- enterprise_project_id`
      - `- fw_instance_id`
  - **UpdateCustomerIps**
    - 响应参数变更
      - `+ data`
  - **ShowCustomerIpsInfo**
    - 响应参数变更
      - `- data.action: enum value [0,1]`
      - `- data.affected_os: enum value [0,1,2,3,4,5,6,7,8,9,10]`
  - **ListAttackStatistic**
    - 请求参数变更
      - `+ size`

### HuaweiCloud SDK ECS

- _接口版本_
  - V2
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ShowRecycleBin**
    - 响应参数变更
      - `+ project_id`
      - `+ switch`
      - `+ policy`
      - `- recycle_bin`

### HuaweiCloud SDK Live

- _接口版本_
  - V1
- _新增特性_
  - 支持以下接口：
    - `ShowOutputInfo`
    - `ModifyFlowOutput`
    - `CreateFlowOutput`
    - `DeleteFlowOutput`
    - `ListCesDimsInfo`
    - `ListCesInstance`
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
  - **RecognizeVatInvoice**
    - 请求参数变更
      - `+ ofd_to_image_mode`

### HuaweiCloud SDK RDS

- _接口版本_
  - V3
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **SetLogLtsConfigs**
    - 请求参数变更
      - `+ engine: enum value [postgresql,sqlserver]`
  - **DeleteLogLtsConfigs**
    - 请求参数变更
      - `+ engine: enum value [postgresql,sqlserver]`
  - **ListLogLtsConfigs**
    - 请求参数变更
      - `+ engine: enum value [postgresql,sqlserver]`

### HuaweiCloud SDK RGC

- _接口版本_
  - V1
- _新增特性_
  - 支持接口`ShowBestPracticeAccountInfo`
- _解决问题_
  - 无
- _特性变更_
  - **DisableControl**
    - 请求参数变更
      - `- parameters`
      - `* body: object<ControlOperateReqBody> -> object<DisableControlOperateReqBody>`

# 3.1.149 2025-08-14

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
      - `+ configs.compress.compress_min_length`
      - `+ configs.compress.compress_max_length`
  - **UpdateDomainFullConfig**
    - 请求参数变更
      - `+ configs.compress.compress_min_length`
      - `+ configs.compress.compress_max_length`

### HuaweiCloud SDK CodeArtsBuild

- _接口版本_
  - V3
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ShowProjectPermission**
    - 响应参数变更
      - `+ result.delete_permission`
      - `+ result.view_permission`
      - `+ result.execute_permission`
      - `+ result.copy_permission`
      - `+ result.forbidden_permission`
      - `+ result.manager_permission`
      - `+ result.role_ids`
      - `+ result.role_names`
  - **UpdateNotice**
    - 请求参数变更
      - `+ send_switch`
      - `+ use_project_notice`
  - **ListRecommendOfficialTemplate**
    - 响应参数变更
      - `+ result.items.template.actions`
      - `+ result.items.template.auto_update_sub_module`
      - `+ result.items.template.image`
      - `+ result.items.template.image_source`
      - `* result.items.template: object<QueryTemplate> -> object<QueryTemplateVo>`
  - **ListCustomTemplate**
    - 响应参数变更
      - `+ result.items.template.actions`
      - `+ result.items.template.auto_update_sub_module`
      - `+ result.items.template.image`
      - `+ result.items.template.image_source`
      - `* result.items.template: object<QueryTemplate> -> object<QueryTemplateVo>`
  - **ListTemplates**
    - 响应参数变更
      - `+ result.items.template.actions`
      - `+ result.items.template.auto_update_sub_module`
      - `+ result.items.template.image`
      - `+ result.items.template.image_source`
      - `* result.items.template: object<QueryTemplate> -> object<QueryTemplateVo>`

### HuaweiCloud SDK IdentityCenter

- _接口版本_
  - V1
- _新增特性_
  - 支持以下接口：
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
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK IdentityCenterStore

- _接口版本_
  - V1
- _新增特性_
  - 支持以下接口：
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
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK KMS

- _接口版本_
  - V2
- _新增特性_
  - 支持接口`CreatePin`
- _解决问题_
  - 无
- _特性变更_
  - **CreateDatakey**
    - 请求参数变更
      - `+ pin`
      - `+ pin_type`
      - `+ key_spec: enum value [SM4,HMAC_256,HMAC_384,HMAC_512,HMAC_SM3]`
  - **CreateDatakeyWithoutPlaintext**
    - 请求参数变更
      - `+ pin`
      - `+ pin_type`
      - `+ key_spec: enum value [SM4,HMAC_256,HMAC_384,HMAC_512,HMAC_SM3]`
  - **CreateEcDatakeyPair**
    - 请求参数变更
      - `+ pin`
      - `+ pin_type`
  - **EncryptDatakey**
    - 请求参数变更
      - `+ pin`
      - `+ pin_type`
      - `+ key_spec`
  - **CreateKey**
    - 请求参数变更
      - `+ vm_id`
    - 响应参数变更
      - `+ key_info.region_id`
  - **ListKeyStores**
    - 响应参数变更
      - `+ keystores.cluster_id`
  - **CreateKeyStore**
    - 请求参数变更
      - `+ cluster_id`
      - `+ keystore_type`
  - **ShowKeyStore**
    - 响应参数变更
      - `+ keystore.cluster_id`

### HuaweiCloud SDK MetaStudio

- _接口版本_
  - V1
- _新增特性_
  - 支持以下接口：
    - `DownloadTemplate`
    - `DownloadResultFile`
    - `SearchTask`
    - `ShowTask`
    - `DeleteTask`
    - `ImportResource`
    - `ExportResource`
- _解决问题_
  - 无
- _特性变更_
  - **ListTtscVocabularyGroups**
    - 请求参数变更
      - `+ limit`
      - `+ offset`
      - `+ group_id`
  - **ShowAsset**
    - 响应参数变更
      - `+ produce_id`
  - **UpdateDigitalAsset**
    - 响应参数变更
      - `+ produce_id`
  - **CreateDigitalAsset**
    - 响应参数变更
      - `+ produce_id`
  - **ListAssets**
    - 响应参数变更
      - `+ produce_id`
      - `+ assets.produce_id`

# 3.1.148 2025-08-07

### HuaweiCloud SDK EPS

- _接口版本_
  - V1
- _新增特性_
  - 支持以下接口：
    - `ListMigrationRecord`
    - `ListResourceMapping`
    - `ShowEpConfigs`
    - `ShowAssociatedResources`
    - `DeleteEnterpriseProject`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK Organizations

- _接口版本_
  - V1
- _新增特性_
  - 支持接口`CreateResourceAccount`
- _解决问题_
  - 无
- _特性变更_
  - **CreateAccount**
    - 响应参数变更
      - `+ create_account_status.failure_detail_msg`
  - **ListCreateAccountStatuses**
    - 响应参数变更
      - `+ create_account_statuses.failure_detail_msg`
  - **ShowCreateAccountStatus**
    - 响应参数变更
      - `+ create_account_status.failure_detail_msg`

### HuaweiCloud SDK RAM

- _接口版本_
  - V1
- _新增特性_
  - 支持接口`SearchDistinctSharedResources`、`SearchDistinctPrincipals`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK RDS

- _接口版本_
  - V3
- _新增特性_
  - 支持以下接口：
    - `ListScheduleTasks`
    - `ListTasks`
    - `ListBusinessPartners`
    - `ListMarketplaceEngineProducts`
    - `ResetViewSqlStatistics`
    - `ListSqlStatistics`
- _解决问题_
  - 无
- _特性变更_
  - **StartInstanceRestartAction**
    - 请求参数变更
      - `+ restart.restart_server`
      - `+ restart.forcible`
      - `+ restart.delay`
      - `* restart: object -> object<RestartConfiguration>`
  - **ListBackupTransfers**
    - 响应参数变更
      - `+ transfer_list.type`

# 3.1.147 2025-07-31

### HuaweiCloud SDK CFW

- _接口版本_
  - V1
- _新增特性_
  - 支持以下接口：
    - `ShowCustomerIpsInfo`
    - `UpdateCustomerIps`
    - `ShowTrafficTrend`
    - `ShowAccessTop`
    - `ListAttackStatistic`
    - `ShowAttackTrend`
    - `ShowAttackTotal`
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
  - **SetAlarmTopicConfigInfo**
    - 响应参数变更
      - `- is_use_topic`

### HuaweiCloud SDK DRS

- _接口版本_
  - V5
- _新增特性_
  - 支持接口`ShowCompareProgress`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK EIP

- _接口版本_
  - V2
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListPublicips**
    - 响应参数变更
      - `+ publicips.tags`
  - **ShowPublicip**
    - 响应参数变更
      - `+ publicip.tags`

### HuaweiCloud SDK IMS

- _接口版本_
  - V2
- _新增特性_
  - 支持以下接口：
    - `ExportImageInSafeMode`
    - `CreateDataImageInSafeMode`
    - `CreateImageInSafeMode`
    - `ImportImageQuickInSafeMode`
    - `CopyImageInRegionInSafeMode`
- _解决问题_
  - 无
- _特性变更_
  - **BatchAddMembers**
    - 请求参数变更
      - `+ domains`
      - `+ organizations`
  - **BatchDeleteMembers**
    - 请求参数变更
      - `+ domains`
      - `+ organizations`
  - **GlanceShowImageMember**
    - 响应参数变更
      - `+ member_type`
      - `+ urn`
  - **GlanceUpdateImageMember**
    - 响应参数变更
      - `+ member_type`
      - `+ urn`
  - **GlanceAddImageMember**
    - 响应参数变更
      - `+ member_type`
      - `+ urn`
  - **GlanceListImageMembers**
    - 响应参数变更
      - `+ members.member_type`
      - `+ members.urn`

### HuaweiCloud SDK Live

- _接口版本_
  - V1
- _新增特性_
  - 支持接口`CreateStreamForbiddenOnce`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK MetaStudio

- _接口版本_
  - V1
- _新增特性_
  - 支持以下接口：
    - `ListTtscVocabularyGroups`
    - `CreateTtscVocabularyGroups`
    - `UpdateTtscVocabularyGroups`
    - `DeleteTtscVocabularyGroups`
    - `SetTtscGroupAssets`
- _解决问题_
  - 无
- _特性变更_
  - **SaveTtscVocabularyConfigs**
    - 请求参数变更
      - `+ group_id`
  - **ShowTenantDurationCfg**
    - 响应参数变更
      - `+ short_assess_min`
      - `+ short_assess_max`
  - **SetJobBatchName**
    - 请求参数变更
      - `+ X-App-UserId`
  - **CreateTtscVocabularyConfigs**
    - 请求参数变更
      - `+ group_id`
  - **ListTtscVocabularyConfigs**
    - 请求参数变更
      - `+ group_id`
      - `+ asset_id`
    - 响应参数变更
      - `+ data.group_id`
  - **CreateTrainingBasicJob**
    - 请求参数变更
      - `+ is_ondemand_resource`
      - `+ supported_service`
      - `+ tag: enum value [LIVE,EDUCATION,CUSTOMER,STORYTELLING]`
  - **CreateTrainingMiddleJob**
    - 请求参数变更
      - `+ is_ondemand_resource`
      - `+ supported_service`
      - `+ tag: enum value [LIVE,EDUCATION,CUSTOMER,STORYTELLING]`
  - **CreateTrainingAdvanceJob**
    - 请求参数变更
      - `+ is_ondemand_resource`
      - `+ supported_service`
      - `+ tag: enum value [LIVE,EDUCATION,CUSTOMER,STORYTELLING]`
  - **CommitVoiceTrainingJob**
    - 请求参数变更
      - `+ tag: enum value [LIVE,EDUCATION,CUSTOMER,STORYTELLING]`
  - **ShowVoiceTrainingJob**
    - 响应参数变更
      - `+ assess_result`
      - `+ is_ondemand_resource`
      - `+ tag: enum value [LIVE,EDUCATION,CUSTOMER,STORYTELLING]`
      - `+ allocated_resource.charge_mode: enum value [ON_DEMAND]`
  - **ListJobOperationLog**
    - 响应参数变更
      - `+ operations.external_info.algorithm_failure_reason`
  - **ShowAsset**
    - 响应参数变更
      - `+ auto_operation_config`
      - `+ block_reason_code`
      - `+ system_properties.key: enum value [IS_CONTROLLED,LIVE_IS_AUTHORIZED,VIDEO_IS_AUTHORIZED,CHAT_IS_AUTHORIZED]`
      - `+ files.block_reason_code`
  - **UpdateDigitalAsset**
    - 请求参数变更
      - `+ auto_operation_config`
      - `+ system_properties.key: enum value [IS_CONTROLLED,LIVE_IS_AUTHORIZED,VIDEO_IS_AUTHORIZED,CHAT_IS_AUTHORIZED]`
    - 响应参数变更
      - `+ auto_operation_config`
      - `+ block_reason_code`
      - `+ system_properties.key: enum value [IS_CONTROLLED,LIVE_IS_AUTHORIZED,VIDEO_IS_AUTHORIZED,CHAT_IS_AUTHORIZED]`
      - `+ files.block_reason_code`
  - **ListVoiceTrainingJob**
    - 请求参数变更
      - `+ is_ondemand_resource`
    - 响应参数变更
      - `+ assess_result`
      - `+ is_ondemand_resource`
      - `+ jobs.assess_result`
      - `+ jobs.is_ondemand_resource`
      - `+ jobs.tag: enum value [LIVE,EDUCATION,CUSTOMER,STORYTELLING]`
      - `+ jobs.allocated_resource.charge_mode: enum value [ON_DEMAND]`
  - **CreateDigitalAsset**
    - 请求参数变更
      - `+ auto_operation_config`
      - `+ system_properties.key: enum value [IS_CONTROLLED,LIVE_IS_AUTHORIZED,VIDEO_IS_AUTHORIZED,CHAT_IS_AUTHORIZED]`
  - **ListAssets**
    - 请求参数变更
      - `- project_group_id`
      - `+ asset_source: enum value [GROUP_CUSTOMIZATION]`
    - 响应参数变更
      - `+ auto_operation_config`
      - `+ block_reason_code`
      - `+ assets.block_reason_code`
      - `+ assets.auto_operation_config`
      - `+ assets.system_properties.key: enum value [IS_CONTROLLED,LIVE_IS_AUTHORIZED,VIDEO_IS_AUTHORIZED,CHAT_IS_AUTHORIZED]`
      - `+ assets.files.block_reason_code`

# 3.1.146 2025-07-24

### HuaweiCloud SDK DBSS

- _接口版本_
  - V1
- _新增特性_
  - 支持接口`ListAlarmTopicConfigInfo`、`SetAlarmTopicConfigInfo`
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
  - **ListDataCompareOverview**
    - 响应参数变更
      - `+ data_compare_overview_infos.compare_num`
      - `+ data_compare_overview_infos.compare_end_num`
      - `+ data_compare_overview_infos.data_inconsistent_num`
      - `+ data_compare_overview_infos.uncomparable_num`
  - **ListContentCompareOverview**
    - 响应参数变更
      - `+ content_compare_result_infos.compare_num`
      - `+ content_compare_result_infos.compare_end_num`
      - `+ content_compare_result_infos.data_inconsistent_num`
      - `+ content_compare_result_infos.uncomparable_num`
  - **ListContentCompareDetail**
    - 响应参数变更
      - `+ content_compare_result_infos.status`
      - `+ content_compare_result_infos.complete_shard_count`
      - `+ content_compare_result_infos.total_shard_count`
      - `+ content_compare_result_infos.progress`

### HuaweiCloud SDK DRS

- _接口版本_
  - V5
- _新增特性_
  - 支持接口`ExportCreationTemplate`、`ShowExportProgress`、`ListTemplates`、`DownloadCreateTemplate`
- _解决问题_
  - 无
- _特性变更_
  - **DownloadBatchCreateTemplate**
    - 请求参数变更
      - `+ engine_type`
  - **ImportBatchCreateJobs**
    - 请求参数变更
      - `+ type`
  - **ExecuteJobAction**
    - 请求参数变更
      - `+ job.action_name: enum value [diagnosis,start_repair,stop_repair]`
      - `- job.action_name: enum value [diagnosis：一键诊断。,start_repair：开始数据修复。,stop_repair：停止数据修复。]`
  - **BatchExecuteJobActions**
    - 请求参数变更
      - `+ jobs.action_name: enum value [diagnosis,start_repair,stop_repair]`
      - `- jobs.action_name: enum value [diagnosis：一键诊断。,start_repair：开始数据修复。,stop_repair：停止数据修复。]`

### HuaweiCloud SDK ECS

- _接口版本_
  - V2
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ShowServer**
    - 响应参数变更
      - `+ server.network_interfaces.subnet_id`
  - **ListServersDetails**
    - 响应参数变更
      - `+ servers.network_interfaces.subnet_id`
  - **ListRecycleBinServers**
    - 响应参数变更
      - `+ servers.network_interfaces.subnet_id`

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
      - `+ projection_fields`

# 3.1.145 2025-07-17

### HuaweiCloud SDK MetaStudio

- _接口版本_
  - V1
- _新增特性_
  - 支持以下接口：
    - `ListAsrVocabulary`
    - `CreateAsrVocabulary`
    - `ShowAsrVocabulary`
    - `UpdateAsrVocabulary`
    - `DeleteAsrVocabulary`
    - `ShowAsrVocabularyAssociation`
- _解决问题_
  - 无
- _特性变更_
  - 无

# 3.1.144 2025-07-10

### HuaweiCloud SDK CDN

- _接口版本_
  - V2
- _新增特性_
  - 支持以下接口：
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
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK CodeArtsBuild

- _接口版本_
  - V3
- _新增特性_
  - 支持接口`ShowJobPipelineInfo`、`StopTheJob`、`UpdateKeystorePermission`、`AddKeystorePermission`
- _解决问题_
  - 无
- _特性变更_
  - **ListJob**
    - 请求参数变更
      - `+ page_index`
      - `+ page_size`
      - `+ search`
      - `+ sort_field`
      - `+ sort_order`
      - `+ creator_id`
      - `+ build_status`

### HuaweiCloud SDK ECS

- _接口版本_
  - V2
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListFlavors**
    - 请求参数变更
      - `+ limit`
      - `+ marker`
  - **ShowServer**
    - 响应参数变更
      - `+ server.network_interfaces`
  - **ListServersDetails**
    - 响应参数变更
      - `+ servers.network_interfaces`
  - **ListRecycleBinServers**
    - 响应参数变更
      - `+ servers.network_interfaces`
  - **CreateServers**
    - 请求参数变更
      - `+ server.enclave_options`
  - **CreatePostPaidServers**
    - 请求参数变更
      - `+ server.enclave_options`

### HuaweiCloud SDK MetaStudio

- _接口版本_
  - V1
- _新增特性_
  - 支持接口`ListSmartChatJob`
- _解决问题_
  - 无
- _特性变更_
  - **ShowSmartChatJob**
    - 响应参数变更
      - `+ job_finish_reason`
      - `+ is_pool_mode`
  - **ShowAsyncTtsJob**
    - 响应参数变更
      - `+ audio_srt_file_url`
      - `+ audio_action_file_url`
  - **CreateAsyncTtsJob**
    - 请求参数变更
      - `+ priority`
  - **ListHotWords**
    - 请求参数变更
      - `+ hot_words_type`
      - `+ language: enum value [ESP,por,Arabic,Thai]`
    - 响应参数变更
      - `+ data.hot_words_type: enum value [MOBVOI]`
  - **CreateHotWords**
    - 请求参数变更
      - `+ mobvoi_hot_words`
      - `+ hot_words_type: enum value [MOBVOI]`
    - 响应参数变更
      - `+ hot_words_type: enum value [MOBVOI]`
  - **ShowHotWords**
    - 响应参数变更
      - `+ hot_words_type: enum value [MOBVOI]`
  - **UpdateHotWords**
    - 请求参数变更
      - `+ mobvoi_hot_words`
      - `+ hot_words_type: enum value [MOBVOI]`
    - 响应参数变更
      - `+ hot_words_type: enum value [MOBVOI]`
  - **ShowAsset**
    - 响应参数变更
      - `- asset_extra_meta.human_model_meta`
      - `- asset_extra_meta.animation_meta`
      - `- asset_extra_meta.scene_meta`
      - `+ asset_extra_meta.human_model_2d_meta.voice_asset_id`
  - **UpdateDigitalAsset**
    - 请求参数变更
      - `- asset_extra_meta.human_model_meta`
      - `- asset_extra_meta.animation_meta`
      - `- asset_extra_meta.scene_meta`
      - `+ asset_extra_meta.human_model_2d_meta.voice_asset_id`
    - 响应参数变更
      - `- asset_extra_meta.human_model_meta`
      - `- asset_extra_meta.animation_meta`
      - `- asset_extra_meta.scene_meta`
      - `+ asset_extra_meta.human_model_2d_meta.voice_asset_id`
  - **CreateDigitalAsset**
    - 请求参数变更
      - `- asset_extra_meta.human_model_meta`
      - `- asset_extra_meta.animation_meta`
      - `- asset_extra_meta.scene_meta`
      - `+ asset_extra_meta.human_model_2d_meta.voice_asset_id`
  - **ListAssets**
    - 请求参数变更
      - `- render_engine`
    - 响应参数变更
      - `- assets.asset_extra_meta.human_model_meta`
      - `- assets.asset_extra_meta.animation_meta`
      - `- assets.asset_extra_meta.scene_meta`
      - `+ assets.asset_extra_meta.human_model_2d_meta.voice_asset_id`

### HuaweiCloud SDK RDS

- _接口版本_
  - V3
- _新增特性_
  - 支持接口`TransferBackup`、`ListBackupTransfers`、`ShowTransferPolicy`、`SetTransferPolicy`
- _解决问题_
  - 无
- _特性变更_
  - **ListJobInfo**
    - 响应参数变更
      - `+ job.entities.instance`
      - `+ job.entities.resource_ids`
      - `+ job.entities.volume`
      - `+ job.entities.public_ip`
      - `+ job.entities.switch_strategy`

### HuaweiCloud SDK RGC

- _接口版本_
  - V1
- _新增特性_
  - 支持以下接口：
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
- _解决问题_
  - 无
- _特性变更_
  - 无

# 3.1.143 2025-07-03

### HuaweiCloud SDK ECS

- _接口版本_
  - V2
- _新增特性_
  - 支持以下接口：
    - `UpdateScheduledEvent`
    - `AcceptScheduledEvent`
    - `ListLaunchTemplateVersions`
    - `DeleteLaunchTemplates`
    - `ListTemplates`
    - `NovaListServers`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK Live

- _接口版本_
  - V1
- _新增特性_
  - 支持以下接口：
    - `ListFlows`
    - `CreateFlows`
    - `DeleteFlow`
    - `ShowFlowDetail`
    - `ModifyFlowStart`
    - `ModifyFlowStop`
    - `ModifyFlowSources`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK RDS

- _接口版本_
  - V3
- _新增特性_
  - 支持接口`CheckInstanceForUpgrade`、`ShowPrecheckResult`、`UpgradeLargeVersion`
- _解决问题_
  - 无
- _特性变更_
  - 无

# 3.1.142 2025-06-26

### HuaweiCloud SDK CodeArtsBuild

- _接口版本_
  - V3
- _新增特性_
  - 支持以下接口：
    - `UploadKeystore`
    - `UpdateKeystore`
    - `ShowProjectJobPermission`
    - `SaveTemplateUsedInfo`
    - `CreateTemplate`
    - `CreateNewJob`
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
  - 移除接口`ShowRecycleBinServer`
  - **ListFlavors**
    - 响应参数变更
      - `+ flavors.os_extra_specs.info:features`
  - **ListResizeFlavors**
    - 响应参数变更
      - `+ flavors.extra_specs.info:features`

### HuaweiCloud SDK MetaStudio

- _接口版本_
  - V1
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ShowAsset**
    - 响应参数变更
      - `+ asset_extra_meta.voice_model_meta.is_enhance_rhythm`
      - `+ asset_extra_meta.voice_model_meta.age`
      - `+ asset_extra_meta.human_model_2d_meta.model_version: enum value [V3_3]`
  - **UpdateDigitalAsset**
    - 请求参数变更
      - `+ asset_extra_meta.voice_model_meta.is_enhance_rhythm`
      - `+ asset_extra_meta.voice_model_meta.age`
      - `+ asset_extra_meta.human_model_2d_meta.model_version: enum value [V3_3]`
    - 响应参数变更
      - `+ asset_extra_meta.voice_model_meta.is_enhance_rhythm`
      - `+ asset_extra_meta.voice_model_meta.age`
      - `+ asset_extra_meta.human_model_2d_meta.model_version: enum value [V3_3]`
  - **CreateDigitalAsset**
    - 请求参数变更
      - `+ asset_extra_meta.voice_model_meta.is_enhance_rhythm`
      - `+ asset_extra_meta.voice_model_meta.age`
      - `+ asset_extra_meta.human_model_2d_meta.model_version: enum value [V3_3]`
  - **ListAssets**
    - 请求参数变更
      - `+ project_group_id`
      - `+ asset_source: enum value [GROUP_CUSTOMIZATION]`
    - 响应参数变更
      - `+ assets.asset_extra_meta.voice_model_meta.is_enhance_rhythm`
      - `+ assets.asset_extra_meta.voice_model_meta.age`
      - `+ assets.asset_extra_meta.human_model_2d_meta.model_version: enum value [V3_3]`

### HuaweiCloud SDK SMN

- _接口版本_
  - V2
- _新增特性_
  - 支持接口`ListTopicMessageStatistics`
- _解决问题_
  - 无
- _特性变更_
  - 无

# 3.1.141 2025-06-19

### HuaweiCloud SDK EIP

- _接口版本_
  - V2
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **UpdatePrePaidBandwidth**
    - 请求参数变更
      - `+ extendParam.period_type`
      - `+ extendParam.period_num`

### HuaweiCloud SDK EIP

- _接口版本_
  - V3
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListEipBandwidths**
    - 响应参数变更
      - `* eip_bandwidths.tenant_id: uuid -> string`
  - **ListProjectGeipBindings**
    - 响应参数变更
      - `* geip_bindings.vnic.vni: int32 -> string`

### HuaweiCloud SDK GaussDBforopenGauss

- _接口版本_
  - V3
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

- _接口版本_
  - V2
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

- _接口版本_
  - V2
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

- _接口版本_
  - V1
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

### HuaweiCloud SDK RDS

- _接口版本_
  - V3
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - 无

# 3.1.140 2025-06-12

### HuaweiCloud SDK CodeArtsBuild

- _接口版本_
  - V3
- _新增特性_
  - 支持以下接口：
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
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK ECS

- _接口版本_
  - V2
- _新增特性_
  - 支持以下接口：
    - `ShowServerMetadataOptions`
    - `UpdateServerMetadataOptions`
    - `ShowRecycleBin`
    - `UpdateRecycleBin`
    - `ShowRecycleBinServer`
    - `DeleteRecycleBinServer`
    - `ListRecycleBinServers`
    - `UpdateRecycleBinPolicy`
    - `RevertRecycleBinServer`
- _解决问题_
  - 无
- _特性变更_
  - **UpdateServer**
    - 请求参数变更
      - `+ server.security_options`
  - **ShowServer**
    - 响应参数变更
      - `+ server.security_options`
  - **ListServersDetails**
    - 响应参数变更
      - `+ servers.security_options`
  - **CreateServers**
    - 请求参数变更
      - `+ server.security_options`
      - `+ server.metadata_options`
  - **CreatePostPaidServers**
    - 请求参数变更
      - `+ server.security_options`
      - `+ server.metadata_options`

### HuaweiCloud SDK EVS

- _接口版本_
  - V2
- _新增特性_
  - 支持接口`BatchResizeVolumes`
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
  - **RecognizeTransportationLicense**
    - 请求参数变更
      - `+ return_image_location`
      - `+ return_adjusted_image`
    - 响应参数变更
      - `+ result.image_location`
      - `+ result.adjusted_image`

# 3.1.139 2025-06-05

### HuaweiCloud SDK CodeArtsBuild

- _接口版本_
  - V3
- _新增特性_
  - 支持以下接口：
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
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK DDS

- _接口版本_
  - V3
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListSessions**
    - 响应参数变更
      - `+ sessions.db`
      - `+ sessions.user`

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
      - `+ log_streams.log_group_id`

# 3.1.138 2025-05-29

### HuaweiCloud SDK CFW

- _接口版本_
  - V1
- _新增特性_
  - 支持接口`UpdateObjectConfigDesc`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK CodeArtsBuild

- _接口版本_
  - V3
- _新增特性_
  - 支持以下接口：
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
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK DDS

- _接口版本_
  - V3
- _新增特性_
  - 支持接口`DeleteMongosNode`
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
  - **BatchAddServerNics**
    - 请求参数变更
      - `+ nics.port_id`
  - **CreateServers**
    - 请求参数变更
      - `+ server.serial_console_options`
      - `+ server.nics.port_id`
  - **CreatePostPaidServers**
    - 请求参数变更
      - `+ server.serial_console_options`
      - `+ server.nics.port_id`

### HuaweiCloud SDK GaussDB

- _接口版本_
  - V3
- _新增特性_
  - 支持接口`SwitchGaussMySqlProxyEip`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK KVS

- _接口版本_
  - V1
- _新增特性_
  - 支持接口`BatchGetKv`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK LTS

- _接口版本_
  - V2
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListLogGroups**
    - 响应参数变更
      - `+ log_groups.log_group_name_alias`
  - **UpdateLogStream**
    - 请求参数变更
      - `+ whether_log_storage`
  - **ListTransfers**
    - 请求参数变更
      - `- offset`
      - `- limit`

# 3.1.137 2025-05-22

### HuaweiCloud SDK DDS

- _接口版本_
  - V3
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ShowBackupPolicy**
    - 响应参数变更
      - `+ backup_policy.enable_incremental_backup`
  - **SetBackupPolicy**
    - 请求参数变更
      - `+ backup_policy.enable_incremental_backup`

### HuaweiCloud SDK ECS

- _接口版本_
  - V2
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListFlavors**
    - 请求参数变更
      - `+ flavor_id`

### HuaweiCloud SDK GaussDBforopenGauss

- _接口版本_
  - V3
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - 移除接口`ListTopIoTraffics`

### HuaweiCloud SDK OCR

- _接口版本_
  - V1
- _新增特性_
  - 支持接口`RecognizeAutoIdDocClassification`
- _解决问题_
  - 无
- _特性变更_
  - 无

# 3.1.136 2025-05-15

### HuaweiCloud SDK DDS

- _接口版本_
  - V3
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ShowBackupPolicy**
    - 响应参数变更
      - `+ backup_policy.enable_incremental_backup`
  - **SetBackupPolicy**
    - 请求参数变更
      - `+ backup_policy.enable_incremental_backup`

### HuaweiCloud SDK ECS

- _接口版本_
  - V2
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListFlavors**
    - 请求参数变更
      - `+ flavor_id`

### HuaweiCloud SDK GaussDBforopenGauss

- _接口版本_
  - V3
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - 移除接口`ListTopIoTraffics`

### HuaweiCloud SDK OCR

- _接口版本_
  - V1
- _新增特性_
  - 支持接口`RecognizeAutoIdDocClassification`
- _解决问题_
  - 无
- _特性变更_
  - 无

# 3.1.135 2025-05-08

### HuaweiCloud SDK GaussDBforopenGauss

- _接口版本_
  - V3
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **CreateCrossCloudConstructDisaster**
    - 请求参数变更
      - `- lite_dr_mode`

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
      - `+ update_fields.delete`
      - `+ update_fields.update_blob`
  - **BatchWriteKv**
    - 请求参数变更
      - `+ table_opers.kv_opers.update_kv`
      - `+ table_opers.kv_opers.put_kv.kv_blob`
      - `+ table_opers.kv_opers.put_kv.condition_expression`
    - 响应参数变更
      - `+ unprocessed_opers.kv_oper_ids.update_kv_ids`

### HuaweiCloud SDK VOD

- _接口版本_
  - V1
- _新增特性_
  - 支持以下接口：
    - `CreateObjectReplication`
    - `CreateObjectRetrieval`
    - `DeleteDyAsset`
    - `ShowObjectMetaData`
    - `CreateObjectProcessTask`
    - `CreateEditTask`
    - `ShowTaskDetail`
    - `CreateRealTimeClip`
    - `CreateUploadByUrl`
- _解决问题_
  - 无
- _特性变更_
  - **ModifySubtitle**
    - 请求参数变更
      - `+ add_subtitles.obs_info.region`

# 3.1.134 2025-04-27

### HuaweiCloud SDK CloudTable

- _接口版本_
  - V2
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListClusters**
    - 响应参数变更
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

- _接口版本_
  - V3
- _新增特性_
  - 支持接口`ShowRestoreAvailableTables`、`ShowAutoExpandPolicy`、`ModifyAutoExpandPolicy`
- _解决问题_
  - 无
- _特性变更_
  - 无

# 3.1.133 2025-04-24

### HuaweiCloud SDK CDN

- _接口版本_
  - V2
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **UpdateDomainMultiCertificates**
    - 响应参数变更
      - `+ result`
      - `+ status`
  - **ShowDomainFullConfig**
    - 响应参数变更
      - `+ configs.request_limit_rules.limit_time`
  - **UpdateDomainFullConfig**
    - 请求参数变更
      - `+ configs.request_limit_rules.limit_time`
      - `+ configs.url_auth.match_rule`

### HuaweiCloud SDK GaussDB

- _接口版本_
  - V3
- _新增特性_
  - 支持接口`ListTaurusDbNodeProcesses`、`DeleteTaurusDbNodeProcesses`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK IMS

- _接口版本_
  - V2
- _新增特性_
  - 支持接口`ShowImageMember`、`ListImageMembers`、`BatchDeleteTags`
- _解决问题_
  - 无
- _特性变更_
  - 无

# 3.1.132 2025-04-17

### HuaweiCloud SDK AntiDDoS

- _接口版本_
  - V1
- _新增特性_
  - 支持接口`ListQuota`、`ShowLogConfig`、`UpdateLogConfig`、`EnableDefensePolicy`
- _解决问题_
  - 无
- _特性变更_
  - 移除接口`ListNewConfigs`、`ShowNewTaskStatus`、`ShowAlertConfig`、`UpdateAlertConfig`
  - **ShowDDos**
    - 响应参数变更
      - `+ app_type_id: enum value [0,1]`
  - **UpdateDDos**
    - 请求参数变更
      - `+ app_type_id: enum value [0,1]`
  - **ShowDDosStatus**
    - 响应参数变更
      - `+ status: enum value [normal,configging,notConfig,packetcleaning,packetdropping]`
  - **ShowDefaultConfig**
    - 响应参数变更
      - `+ app_type_id: enum value [0,1]`
  - **CreateDefaultConfig**
    - 请求参数变更
      - `+ app_type_id: enum value [0,1]`
  - **ListDailyLog**
    - 请求参数变更
      - `+ sort_dir: enum value [desc,asc]`
    - 响应参数变更
      - `+ logs.status: enum value [1,2]`

### HuaweiCloud SDK GaussDBforNoSQL

- _接口版本_
  - V3
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **CreateInstance**
    - 请求参数变更
      - `- ipv6_enabled`
      - `- lb_access_control_settings`

### HuaweiCloud SDK VOD

- _接口版本_
  - V1
- _新增特性_
  - 支持接口`ShowRefreshResult`、`RefreshAsset`
- _解决问题_
  - 无
- _特性变更_
  - **UpdateTranscodeTemplate**
    - 请求参数变更
      - `+ additional_manifests`
      - `+ quality_info_list.video.stream_name`
  - **CreateTranscodeTemplate**
    - 请求参数变更
      - `+ additional_manifests`
      - `+ quality_info_list.video.stream_name`
  - **ListTranscodeTemplate**
    - 响应参数变更
      - `+ template_group_list.additional_manifests`
      - `+ template_group_list.quality_info_list.video.stream_name`

# 3.1.131 2025-04-10

### HuaweiCloud SDK GaussDBforNoSQL

- _接口版本_
  - V3
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ResetParamGroupTemplate**
    - 请求参数变更
      - `- x-auth-token`
  - **OfflineNodes**
    - 请求参数变更
      - `- x-auth-token`
  - **ShowRedisBigKeys**
    - 请求参数变更
      - `- x-auth-token`
  - **ListConfigurations**
    - 请求参数变更
      - `+ datastore_name`
      - `+ mode`
  - **CreateConfiguration**
    - 响应参数变更
      - `+ configuration.mode`
  - **ListConfigurationTemplates**
    - 请求参数变更
      - `+ datastore_name`
      - `+ mode`
  - **ShowConfigurationDetail**
    - 响应参数变更
      - `+ mode`
  - **ListNosqlTaskList**
    - 响应参数变更
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
    - 请求参数变更
      - `+ ipv6_enabled`
      - `+ lb_access_control_settings`

### HuaweiCloud SDK GaussDBforopenGauss

- _接口版本_
  - V3
- _新增特性_
  - 支持以下接口：
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
- _解决问题_
  - 无
- _特性变更_
  - 无

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

