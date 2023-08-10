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
