# 3.1.179 2026-03-12

### HuaweiCloud SDK DRS

- _接口版本_
  - V3
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **BatchDeleteJobs**
    - 请求参数变更
      - `+ jobs.delete_type: enum value [roll_back_upgrade_active_standby]`

### HuaweiCloud SDK DRS

- _接口版本_
  - V5
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **DownloadDbObjectTemplate**
    - 请求参数变更
      - `+ file_import_db_level: enum value [partition]`
  - **UploadDbObjectTemplate**
    - 请求参数变更
      - `+ file_import_mapping_type`
      - `+ file_import_db_level: enum value [partition]`

### HuaweiCloud SDK FunctionGraph

- _接口版本_
  - V2
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **CreateDependencyVersion**
    - 请求参数变更
      - `+ runtime: enum value [PHP8.3]`
    - 响应参数变更
      - `+ runtime: enum value [PHP8.3]`
  - **ShowDependencyVersion**
    - 响应参数变更
      - `+ runtime: enum value [PHP8.3]`
  - **ListDependencies**
    - 响应参数变更
      - `+ dependencies.runtime: enum value [PHP8.3]`
  - **ListDependencyVersion**
    - 响应参数变更
      - `+ dependencies.runtime: enum value [PHP8.3]`
  - **ShowFunctionCode**
    - 响应参数变更
      - `+ runtime: enum value [PHP8.3]`
      - `+ dependencies.runtime: enum value [PHP8.3]`
  - **UpdateFunctionCode**
    - 响应参数变更
      - `+ runtime: enum value [PHP8.3]`
      - `+ dependencies.runtime: enum value [PHP8.3]`
  - **ImportFunction**
    - 响应参数变更
      - `+ runtime: enum value [PHP8.3]`
  - **ListFunctions**
    - 响应参数变更
      - `+ functions.runtime: enum value [PHP8.3]`
  - **CreateFunction**
    - 请求参数变更
      - `+ runtime: enum value [PHP8.3]`
    - 响应参数变更
      - `+ runtime: enum value [PHP8.3]`
      - `+ dependencies.runtime: enum value [PHP8.3]`
  - **ShowFunctionConfig**
    - 响应参数变更
      - `+ runtime: enum value [PHP8.3]`
      - `+ dependencies.runtime: enum value [PHP8.3]`
  - **UpdateFunctionConfig**
    - 请求参数变更
      - `+ runtime: enum value [PHP8.3]`
    - 响应参数变更
      - `+ runtime: enum value [PHP8.3]`
      - `+ dependencies.runtime: enum value [PHP8.3]`
  - **UpdateFunctionMaxInstanceConfig**
    - 响应参数变更
      - `+ runtime: enum value [PHP8.3]`
      - `+ dependencies.runtime: enum value [PHP8.3]`
  - **ListBridgeFunctions**
    - 响应参数变更
      - `+ runtime: enum value [PHP8.3]`
  - **CreateFunctionVersion**
    - 响应参数变更
      - `+ runtime: enum value [PHP8.3]`
      - `+ dependencies.runtime: enum value [PHP8.3]`
  - **ListFunctionVersions**
    - 响应参数变更
      - `+ versions.runtime: enum value [PHP8.3]`

### HuaweiCloud SDK GaussDBforopenGauss

- _接口版本_
  - V3
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ShowConfiguration**
    - 响应参数变更
      - `- backup_node_info`
  - **ResizeInstanceFlavor**
    - 请求参数变更
      - `+ cn_concurrent_resize_num`
      - `+ dn_concurrent_resize_num`
      - `* body: object<OpenGaussResizeRequest> -> object<OpenGaussResizeRequestBody>`
  - **ResizeInstancesFlavor**
    - 请求参数变更
      - `+ cn_concurrent_resize_num`
      - `+ dn_concurrent_resize_num`
      - `* body: object<OpenGaussResizeRequest> -> object<OpenGaussResizeRequestBody>`
  - **ShowInstanceConfiguration**
    - 响应参数变更
      - `+ configuration_parameters.readonly`
      - `* configuration_parameters: list<ConfigurationParameter> -> list<ConfigurationParameterResult>`
  - **ShowInstanceParamGroup**
    - 响应参数变更
      - `+ configuration_parameters.readonly`
      - `* configuration_parameters: list<ConfigurationParameter> -> list<ConfigurationParameterResult>`
  - **ShowInstanceParamGroupDetail**
    - 响应参数变更
      - `+ configuration_parameters.readonly`
      - `* configuration_parameters: list<ConfigurationParameter> -> list<ConfigurationParameterResult>`
  - **ListWdrSnapshotsCollectResults**
    - 请求参数变更
      - `+ job_end_time`
      - `+ job_start_time`
      - `+ status`
      - `+ wdr_type`
    - 响应参数变更
      - `+ wdr_snapshots.job_create_time`
      - `+ wdr_snapshots.start_snapshot_id`
      - `+ wdr_snapshots.end_snapshot_id`
      - `+ wdr_snapshots.file_name`
      - `+ wdr_snapshots.file_path`
      - `+ wdr_snapshots.obs_bucket`
  - **ListWaitEvent**
    - 请求参数变更
      - `* wait_event_query_info.block_count: string -> int32`
      - `* wait_event_query_info: object<WaitEventQueryInfo> -> object<WaitEventQueryInfoOption>`
  - **ShowRedistributionParameters**
    - 响应参数变更
      - `* expansion_parameters.type: object -> string`
  - **ShowFullSql**
    - 响应参数变更
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
    - 响应参数变更
      - `+ job_id`
      - `+ node_id`
  - **ListFullSqlSwitches**
    - 响应参数变更
      - `- allowed_sql_types.prefixes`

### HuaweiCloud SDK MetaStudio

- _接口版本_
  - V1
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ShowHotQuestion**
    - 响应参数变更
      - `+ language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai,fr]`
  - **UpdateHotQuestion**
    - 响应参数变更
      - `+ language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai,fr]`
  - **ShowPacifyWords**
    - 响应参数变更
      - `+ language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai,fr]`
  - **UpdatePacifyWords**
    - 响应参数变更
      - `+ language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai,fr]`
  - **UpdatePacifyWordsSwitch**
    - 请求参数变更
      - `+ language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai,fr]`
  - **UpdatePacifyWordsTriggerTime**
    - 请求参数变更
      - `+ language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai,fr]`
  - **ShowWelcomeSpeech**
    - 响应参数变更
      - `+ language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai,fr]`
  - **UpdateWelcomeSpeech**
    - 响应参数变更
      - `+ language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai,fr]`
  - **UpdateWelcomeSpeechSwitch**
    - 请求参数变更
      - `+ language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai,fr]`
  - **CreateInteractiveChat**
    - 请求参数变更
      - `+ language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai,fr]`
  - **ShowKnowledgeLibrary**
    - 响应参数变更
      - `+ language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai,fr]`
  - **StartSmartChatJob**
    - 响应参数变更
      - `+ language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai,fr]`
  - **ShowSmartChatJob**
    - 响应参数变更
      - `+ language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai,fr]`
  - **CreateHotQuestion**
    - 请求参数变更
      - `+ language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai,fr]`
    - 响应参数变更
      - `+ language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai,fr]`
  - **ListHotQuestion**
    - 响应参数变更
      - `+ data.language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai,fr]`
  - **ListHotWords**
    - 响应参数变更
      - `+ data.language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai,fr]`
  - **CreateHotWords**
    - 请求参数变更
      - `+ sis_hot_words.language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai,fr]`
    - 响应参数变更
      - `+ language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai,fr]`
  - **ShowHotWords**
    - 响应参数变更
      - `+ language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai,fr]`
  - **UpdateHotWords**
    - 请求参数变更
      - `+ sis_hot_words.language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai,fr]`
    - 响应参数变更
      - `+ language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai,fr]`
  - **CreatePacifyWords**
    - 请求参数变更
      - `+ language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai,fr]`
    - 响应参数变更
      - `+ language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai,fr]`
  - **ListPacifyWords**
    - 响应参数变更
      - `+ data.language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai,fr]`
  - **ListRobot**
    - 响应参数变更
      - `+ data.language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai,fr]`
  - **CreateRobot**
    - 请求参数变更
      - `+ language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai,fr]`
  - **ShowRobot**
    - 响应参数变更
      - `+ language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai,fr]`
  - **UpdateRobot**
    - 请求参数变更
      - `+ language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai,fr]`
  - **CreateWelcomeSpeech**
    - 请求参数变更
      - `+ language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai,fr]`
    - 响应参数变更
      - `+ language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai,fr]`
  - **ListWelcomeSpeech**
    - 响应参数变更
      - `+ data.language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai,fr]`
  - **ShowInstruction**
    - 响应参数变更
      - `+ reply_words_list.language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai,fr]`
  - **UpdateInstruction**
    - 请求参数变更
      - `+ reply_words_list.language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai,fr]`
  - **CreateKnowledgeLibrary**
    - 请求参数变更
      - `+ language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai,fr]`
  - **ListKnowledgeLibrary**
    - 响应参数变更
      - `+ data.language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai,fr]`
  - **CreateInstruction**
    - 请求参数变更
      - `+ reply_words_list.language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai,fr]`
  - **ListInstruction**
    - 响应参数变更
      - `+ data.reply_words_list.language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai,fr]`
  - **ShowRole**
    - 响应参数变更
      - `+ role_business_list.language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai,fr]`
  - **UpdateRole**
    - 请求参数变更
      - `+ role_business_list.language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai,fr]`
  - **CreateRole**
    - 请求参数变更
      - `+ role_business_list.language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai,fr]`
  - **ListRole**
    - 响应参数变更
      - `+ data.role_business_list.language: enum value [zh_CN,en_US,ESP,por,Arabic,Thai,fr]`

### HuaweiCloud SDK Organizations

- _接口版本_
  - V1
- _新增特性_
  - 支持以下接口：
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
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK VOD

- _接口版本_
  - V1
- _新增特性_
  - 支持接口`ListThumbnailInfo`、`DeleteThumbnails`、`ListThumbnailDetails`
- _解决问题_
  - 无
- _特性变更_
  - 无

# 3.1.178 2026-03-03

### HuaweiCloud SDK Core

- _新增特性_
  - 无
- _解决问题_
  - 解决FunctionGraph头文件使用问题
- _特性变更_
  - 无

# 3.1.177 2026-03-03

### HuaweiCloud SDK Core

- _新增特性_
  - 无
- _解决问题_
  - 解决KVS头文件使用问题
- _特性变更_
  - 删除部分无用接口

# 3.1.176 2026-02-12

### HuaweiCloud SDK Core

- _新增特性_
  - 无
- _解决问题_
  - 优化README内容
- _特性变更_
  - 无

### HuaweiCloud SDK CodeArtsPipeline

- _接口版本_
  - V2
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ShowPipelineRunDetail**
    - 响应参数变更
      - `+ pause_time`
      - `+ stages.pause_time`

# 3.1.175 2026-02-11

### HuaweiCloud SDK Core

- _新增特性_
  - 无
- _解决问题_
  - 优化README中依赖的第三方库内容
  - 优化README中构建样例描述
  - 优化`CMakeLists.txt`内容
  - 解决部分编译告警问题
- _特性变更_
  - 无

# 3.1.174 2026-02-10

### HuaweiCloud SDK Core

- _新增特性_
  - 无
- _解决问题_
  - readme中cmake脚本错误注释
  - readme中依赖的第三方库补充`rttr`
  - readme中补充产物改名样例
  - readme中补充`spdlog`源码构建推荐版本号
  - readme中cpp验证用例修复
  - 正则表达式语法修复
  - `CMakeLists.txt`新增文件结尾换行
  - 修复代码生成中的拼写错误
  - `CMakeLists.txt`中提示信息修正
- _特性变更_
  - 无

### HuaweiCloud SDK CCE

- _新增特性_
  - 无
- _解决问题_
  - 解决循环依赖问题
- _特性变更_
  - 无

# 3.1.173 2026-02-05

### HuaweiCloud SDK RDS

- _接口版本_
  - V3
- _新增特性_
  - 支持接口`DeleteBackupSelection`
- _解决问题_
  - 无
- _特性变更_
  - 无

# 3.1.172 2026-01-29

### HuaweiCloud SDK CodeArtsArtifact

- _接口版本_
  - V2
- _新增特性_
  - 支持以下接口：
    - `ListUserPrivileges`
    - `ShowProjectRelatedRepository`
    - `ShowVersionList`
    - `ShowProjectVersionsCount`
    - `ShowRepositoryRolesPrivilege`
    - `UpdateRepoRolesPrivilege`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK GaussDBforNoSQL

- _接口版本_
  - V3
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ShowApplicableInstances**
    - 请求参数变更
      - `+ instance_name`
      - `+ instance_id`

### HuaweiCloud SDK Live

- _接口版本_
  - V1
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListCesDimsInfo**
    - 响应参数变更
      - `+ query.region`
  - **ShowChannelStatistic**
    - 请求参数变更
      - `+ region_type`
    - 响应参数变更
      - `+ scte35.scte35_info.region_type`
      - `+ scte35.scte35_info.region`
  - **ShowFlowDetail**
    - 响应参数变更
      - `+ sources.health_status`
  - **ModifyFlowSources**
    - 请求参数变更
      - `+ source.health_status`
    - 响应参数变更
      - `+ source.health_status`
  - **CreateFlows**
    - 请求参数变更
      - `+ sources.health_status`
    - 响应参数变更
      - `+ flow.sources.health_status`
  - **ModifyOttChannelInfoEndPoints**
    - 请求参数变更
      - `+ endpoints.dash_package.id`
      - `+ endpoints.dash_package.manifest_selection`
      - `+ endpoints.mss_package.id`
      - `+ endpoints.mss_package.manifest_selection`
      - `+ endpoints.hls_package.id`
      - `+ endpoints.hls_package.manifest_selection`
  - **CreateOttChannelInfo**
    - 请求参数变更
      - `+ endpoints.dash_package.id`
      - `+ endpoints.dash_package.manifest_selection`
      - `+ endpoints.mss_package.id`
      - `+ endpoints.mss_package.manifest_selection`
      - `+ endpoints.hls_package.id`
      - `+ endpoints.hls_package.manifest_selection`
  - **ListOttChannelInfo**
    - 响应参数变更
      - `+ channels.endpoints.dash_package.id`
      - `+ channels.endpoints.dash_package.manifest_selection`
      - `+ channels.endpoints.mss_package.id`
      - `+ channels.endpoints.mss_package.manifest_selection`
      - `+ channels.endpoints.hls_package.id`
      - `+ channels.endpoints.hls_package.manifest_selection`

### HuaweiCloud SDK ProjectMan

- _接口版本_
  - V4
- _新增特性_
  - 支持接口`DownloadIpdImageInIssue`、`UploadIpdImageInIssue`、`DeleteIpdImageInIssue`
- _解决问题_
  - 无
- _特性变更_
  - **ListIpdProjectIssues**
    - 响应参数变更
      - `+ result.issues`
      - `+ result.total`
      - `* result: object -> object<IssueListResult>`

### HuaweiCloud SDK VPC

- _接口版本_
  - V2
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListPorts**
    - 响应参数变更
      - `* ports.binding:vif_details.vlan_id: string -> int32`
  - **CreatePort**
    - 响应参数变更
      - `* port.binding:vif_details.vlan_id: string -> int32`
  - **ShowPort**
    - 响应参数变更
      - `* port.binding:vif_details.vlan_id: string -> int32`
  - **UpdatePort**
    - 响应参数变更
      - `* port.binding:vif_details.vlan_id: string -> int32`
  - **NeutronListPorts**
    - 响应参数变更
      - `* ports.binding:vif_details.vlan_id: string -> int32`
  - **NeutronCreatePort**
    - 响应参数变更
      - `* port.binding:vif_details.vlan_id: string -> int32`
  - **NeutronShowPort**
    - 响应参数变更
      - `* port.binding:vif_details.vlan_id: string -> int32`
  - **NeutronUpdatePort**
    - 响应参数变更
      - `* port.binding:vif_details.vlan_id: string -> int32`

### HuaweiCloud SDK VPC

- _接口版本_
  - V3
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListPorts**
    - 响应参数变更
      - `* ports.binding:vif_details.vlan_id: string -> int32`
  - **ShowPort**
    - 响应参数变更
      - `* port.binding:vif_details.vlan_id: string -> int32`
  - **AddSecurityGroups**
    - 响应参数变更
      - `* port.binding:vif_details.vlan_id: string -> int32`
  - **RemoveSecurityGroups**
    - 响应参数变更
      - `* port.binding:vif_details.vlan_id: string -> int32`

# 3.1.171 2026-01-22

### HuaweiCloud SDK CDN

- _接口版本_
  - V2
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ShowDomainCountryStat**
    - 响应参数变更
      - `+ result`
  - **SetStatsConfig**
    - 请求参数变更
      - `- expired_time`
  - **ShowStatsConfigs**
    - 响应参数变更
      - `- data.expired_time`

### HuaweiCloud SDK CFW

- _接口版本_
  - V1
- _新增特性_
  - 支持以下接口：
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
- _解决问题_
  - 无
- _特性变更_
  - **DeleteAddressItem**
    - 响应参数变更
      - `+ data`
  - **ListBlackWhiteLists**
    - 响应参数变更
      - `+ data.records.created_date`
      - `+ data.records.modified_date`
  - **UpdateObjectConfigDesc**
    - 请求参数变更
      - `* body: object<ObjectInfoDto> -> object<UpdateObjectConfigDesc>`
  - **ListRegions**
    - 响应参数变更
      - `* data: object -> list<IpRegionResponseBodyData>`
  - **ShowImportStatus**
    - 响应参数变更
      - `+ data.id`
      - `+ data.status`
      - `* data: object -> object<ShowImportStatusId>`
  - **ListLogs**
    - 响应参数变更
      - `* data.records.dst_region_id: object -> string`
  - **ListDnsServers**
    - 响应参数变更
      - `+ data.status`
  - **CreateFirewall**
    - 请求参数变更
      - `- X-Client-Token`
  - **ListAlarmWhitelist**
    - 响应参数变更
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
    - 请求参数变更
      - `* object_id: required -> optional`
  - **ShowCustomerIpsInfo**
    - 请求参数变更
      - `* object_id: required -> optional`
  - **ListFlowStatistic**
    - 响应参数变更
      - `+ data.records.agg_start_time`
      - `+ data.records.agg_end_time`
  - **ListAclRules**
    - 响应参数变更
      - `+ data.up_rules_count`
      - `+ data.records.modified_date`
  - **ListEips**
    - 响应参数变更
      - `+ data.records.bypass_status`
  - **ShowAntiVirusRule**
    - 请求参数变更
      - `* engine_type: required -> optional`
  - **DeleteIpBlacklist**
    - 响应参数变更
      - `- data`

### HuaweiCloud SDK DDS

- _接口版本_
  - V3
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **UpdateEntityConfiguration**
    - 请求参数变更
      - `- x-auth-token`
  - **ListTasks**
    - 请求参数变更
      - `+ id`

### HuaweiCloud SDK EIP

- _接口版本_
  - V3
- _新增特性_
  - 支持接口`ShowPublicipPoolTypes`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK GEIP

- _接口版本_
  - V3
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **CountGlobalEipSegment**
    - 请求参数变更
      - `- limit`
      - `- offset`
      - `- marker`
      - `- page_reverse`
  - **ListSupportMasks**
    - 请求参数变更
      - `* mask: list<integer> -> int32`

### HuaweiCloud SDK Live

- _接口版本_
  - V1
- _新增特性_
  - 支持以下接口：
    - `ShowCertificateInfo`
    - `ShowDomainVerification`
    - `CheckDomainVerification`
    - `ListPullTasks`
    - `ModifyPullTask`
    - `CreatePullTask`
    - `DeletePullTask`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK Live

- _接口版本_
  - V2
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListBandwidthDetail**
    - 请求参数变更
      - `+ ip_type`

# 3.1.170 2026-01-15

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
      - `+ actions.request_limit_rule`
      - `- actions.request_limit_rules`
  - **ShowDomainTemplate**
    - 响应参数变更
      - `+ templates`
      - `- temlates`
  - **CreateRuleNew**
    - 请求参数变更
      - `+ actions.request_limit_rule`
      - `- actions.request_limit_rules`
  - **ListRuleDetails**
    - 响应参数变更
      - `+ rules.actions.request_limit_rule`
      - `- rules.actions.request_limit_rules`
  - **UpdateFullRule**
    - 请求参数变更
      - `+ rules.actions.request_limit_rule`
      - `- rules.actions.request_limit_rules`

### HuaweiCloud SDK DBSS

- _接口版本_
  - V1
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListEcsSpecificationNew**
    - 响应参数变更
      - `+ specifications`
      - `- specification`
  - **ListAuditRuleRisksNew**
    - 请求参数变更
      - `+ offset`
      - `+ limit`

### HuaweiCloud SDK DRS

- _接口版本_
  - V3
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **BatchStartJobs**
    - 请求参数变更
      - `+ jobs.is_auto_create_compare`
  - **BatchListJobDetails**
    - 响应参数变更
      - `+ results.job_kernel_direction`

### HuaweiCloud SDK DRS

- _接口版本_
  - V5
- _新增特性_
  - 支持以下接口：
    - `ShowSubscriptionLists`
    - `ShowColumnInfos`
    - `DeleteColumnInfos`
    - `ShowReplayProgress`
    - `ModifyColumnInfos`
- _解决问题_
  - 无
- _特性变更_
  - **ShowSupportObjectType**
    - 响应参数变更
      - `+ import_mapping_type`
      - `+ is_import_unique_key`
  - **ShowDirtyData**
    - 请求参数变更
      - `+ anonymize_mode`
      - `+ task_mode`
  - **ShowProgressData**
    - 请求参数变更
      - `+ search_name`
  - **ListTags**
    - 请求参数变更
      - `+ resource_type: enum value [verify]`
  - **ListAsyncJobDetail**
    - 响应参数变更
      - `+ jobs.job_kernel_direction`
  - **ShowJobDetail**
    - 请求参数变更
      - `+ log_level`
    - 响应参数变更
      - `+ job.job_kernel_direction`
  - **ExecuteJobAction**
    - 请求参数变更
      - `+ job.action_params.is_auto_create_compare`
  - **BatchExecuteJobActions**
    - 请求参数变更
      - `+ jobs.action_params.is_auto_create_compare`

### HuaweiCloud SDK EPS

- _接口版本_
  - V1
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListEnterpriseProject**
    - 请求参数变更
      - `+ type`

### HuaweiCloud SDK VPC

- _接口版本_
  - V2
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListPorts**
    - 响应参数变更
      - `+ ports.binding:vif_details.vlan_id`
      - `+ ports.binding:vif_details.parent_id`
      - `+ ports.binding:vif_details.parent_device_id`
  - **CreatePort**
    - 响应参数变更
      - `+ port.binding:vif_details.vlan_id`
      - `+ port.binding:vif_details.parent_id`
      - `+ port.binding:vif_details.parent_device_id`
  - **ShowPort**
    - 响应参数变更
      - `+ port.binding:vif_details.vlan_id`
      - `+ port.binding:vif_details.parent_id`
      - `+ port.binding:vif_details.parent_device_id`
  - **UpdatePort**
    - 响应参数变更
      - `+ port.binding:vif_details.vlan_id`
      - `+ port.binding:vif_details.parent_id`
      - `+ port.binding:vif_details.parent_device_id`
  - **NeutronListPorts**
    - 响应参数变更
      - `+ ports.binding:vif_details.vlan_id`
      - `+ ports.binding:vif_details.parent_id`
      - `+ ports.binding:vif_details.parent_device_id`
  - **NeutronCreatePort**
    - 响应参数变更
      - `+ port.binding:vif_details.vlan_id`
      - `+ port.binding:vif_details.parent_id`
      - `+ port.binding:vif_details.parent_device_id`
  - **NeutronShowPort**
    - 响应参数变更
      - `+ port.binding:vif_details.vlan_id`
      - `+ port.binding:vif_details.parent_id`
      - `+ port.binding:vif_details.parent_device_id`
  - **NeutronUpdatePort**
    - 响应参数变更
      - `+ port.binding:vif_details.vlan_id`
      - `+ port.binding:vif_details.parent_id`
      - `+ port.binding:vif_details.parent_device_id`

### HuaweiCloud SDK VPC

- _接口版本_
  - V3
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListPorts**
    - 响应参数变更
      - `+ ports.binding:vif_details.vlan_id`
      - `+ ports.binding:vif_details.parent_id`
      - `+ ports.binding:vif_details.parent_device_id`
  - **ShowPort**
    - 响应参数变更
      - `+ port.binding:vif_details.vlan_id`
      - `+ port.binding:vif_details.parent_id`
      - `+ port.binding:vif_details.parent_device_id`
  - **AddSecurityGroups**
    - 响应参数变更
      - `+ port.binding:vif_details.vlan_id`
      - `+ port.binding:vif_details.parent_id`
      - `+ port.binding:vif_details.parent_device_id`
  - **RemoveSecurityGroups**
    - 响应参数变更
      - `+ port.binding:vif_details.vlan_id`
      - `+ port.binding:vif_details.parent_id`
      - `+ port.binding:vif_details.parent_device_id`

# 3.1.169 2026-01-08

### HuaweiCloud SDK CCE

- _接口版本_
  - V3
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ShowNode**
    - 响应参数变更
      - `+ spec.extendParam.serverMetadataHttpTokens`
  - **UpdateNode**
    - 响应参数变更
      - `+ spec.extendParam.serverMetadataHttpTokens`
  - **DeleteNode**
    - 响应参数变更
      - `+ spec.extendParam.serverMetadataHttpTokens`
  - **CreateNode**
    - 请求参数变更
      - `+ spec.extendParam.serverMetadataHttpTokens`
    - 响应参数变更
      - `+ spec.extendParam.serverMetadataHttpTokens`
  - **ListNodes**
    - 响应参数变更
      - `+ items.spec.extendParam.serverMetadataHttpTokens`
  - **ShowNodePool**
    - 响应参数变更
      - `+ spec.nodeTemplate.extendParam.serverMetadataHttpTokens`
  - **UpdateNodePool**
    - 响应参数变更
      - `+ spec.nodeTemplate.extendParam.serverMetadataHttpTokens`
  - **DeleteNodePool**
    - 响应参数变更
      - `+ spec.nodeTemplate.extendParam.serverMetadataHttpTokens`
  - **UpgradeNodePool**
    - 请求参数变更
      - `+ spec.nodeTemplate.extendParam.serverMetadataHttpTokens`
  - **CreateNodePool**
    - 请求参数变更
      - `+ spec.nodeTemplate.extendParam.serverMetadataHttpTokens`
    - 响应参数变更
      - `+ spec.nodeTemplate.extendParam.serverMetadataHttpTokens`
  - **ListNodePools**
    - 响应参数变更
      - `+ items.spec.nodeTemplate.extendParam.serverMetadataHttpTokens`
  - **ListHyperNodes**
    - 响应参数变更
      - `+ hyperNodeList.spec.nodeTemplate.extendParam.serverMetadataHttpTokens`

### HuaweiCloud SDK CDN

- _接口版本_
  - V2
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ShowDomainStats**
    - 响应参数变更
      - `+ start_time`
      - `+ stat_type`
      - `+ end_time`
      - `+ action`
      - `+ interval`

### HuaweiCloud SDK Cloudtest

- _接口版本_
  - V1
- _新增特性_
  - 支持接口`DownloadStepImageNew`
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
  - **ListTransaction**
    - 请求参数变更
      - `+ transaction_query_info`
      - `- transaction_query_option`
    - 响应参数变更
      - `+ rows`
      - `- rows_info`
  - **ShowRedistributionParameters**
    - 响应参数变更
      - `+ expansion_parameters`
      - `- redistribution_parameters`
  - **ShowEpsRemainingQuota**
    - 响应参数变更
      - `+ eps_remaining_quotas`
      - `- eps_quota_remaining`
  - **ListSqlLimitTask**
    - 响应参数变更
      - `* limit_task_list.instance_id: object -> string`
  - **ListEnhanceFullSqls**
    - 请求参数变更
      - `+ node_id`
  - **ExportFullSqlList**
    - 请求参数变更
      - `+ node_id`
  - **ListFullSqlSwitches**
    - 响应参数变更
      - `+ full_sql_switches`
      - `- full_sql_switchs`
      - `+ allowed_sql_types.category`
      - `+ allowed_sql_types.prefixes`
      - `+ allowed_sql_types.is_preset`
      - `- allowed_sql_types.is_open`
      - `- allowed_sql_types.begin_time`
  - **ListSlowSqls**
    - 响应参数变更
      - `+ slow_sql_infos.db_name`
      - `+ slow_sql_infos.schema_name`
  - **ModifyHbaConf**
    - 请求参数变更
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
    - 请求参数变更
      - `* backup_policy: object<BackupPolicyInfo> -> object<BatchSetBackupPolicyOption>`
  - **ListWaitEvent**
    - 响应参数变更
      - `* rows: object<WaitEventResult> -> list<WaitEventResult>`
  - **ListHbaInfoHistory**
    - 响应参数变更
      - `+ hba_histories.id`
  - **ListMetricDatas**
    - 响应参数变更
      - `+ instances.nodes.role`

### HuaweiCloud SDK MPC

- _接口版本_
  - V1
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **CreateThumbnailsTask**
    - 请求参数变更
      - `+ thumbnail_para.amount`
      - `+ thumbnail_para.threshold`
  - **UpdateWatermarkTemplate**
    - 请求参数变更
      - `+ random_time_min`
      - `+ random_time_max`
  - **CreateWatermarkTemplate**
    - 请求参数变更
      - `+ random_time_min`
      - `+ random_time_max`
  - **ListWatermarkTemplate**
    - 响应参数变更
      - `+ templates.random_time_min`
      - `+ templates.random_time_max`
  - **ListRemuxTask**
    - 响应参数变更
      - `+ tasks.output_metadata.md5`
      - `+ tasks.output_metadata.video.duration`
      - `+ tasks.output_metadata.video.duration_ms`
      - `+ tasks.output_metadata.video.rotate`
      - `+ tasks.output_metadata.audio.duration`
      - `+ tasks.output_metadata.audio.duration_ms`
  - **CreateExtractTask**
    - 响应参数变更
      - `+ metadata.md5`
      - `+ metadata.video.duration`
      - `+ metadata.video.duration_ms`
      - `+ metadata.video.rotate`
      - `+ metadata.audio.duration`
      - `+ metadata.audio.duration_ms`
  - **ListExtractTask**
    - 响应参数变更
      - `+ tasks.metadata.md5`
      - `+ tasks.metadata.video.duration`
      - `+ tasks.metadata.video.duration_ms`
      - `+ tasks.metadata.video.rotate`
      - `+ tasks.metadata.audio.duration`
      - `+ tasks.metadata.audio.duration_ms`
  - **CreateMbTasksReport**
    - 请求参数变更
      - `+ parameter.metadata.md5`
      - `+ parameter.metadata.video.duration`
      - `+ parameter.metadata.video.duration_ms`
      - `+ parameter.metadata.video.rotate`
      - `+ parameter.metadata.audio.duration`
      - `+ parameter.metadata.audio.duration_ms`
  - **CreateTranscodingTask**
    - 请求参数变更
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
    - 响应参数变更
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
    - 响应参数变更
      - `+ task_array.media_detail.origin_para.video.duration`
      - `+ task_array.media_detail.origin_para.video.duration_ms`
      - `+ task_array.media_detail.origin_para.video.rotate`
      - `+ task_array.media_detail.origin_para.audio.duration`
      - `+ task_array.media_detail.origin_para.audio.duration_ms`
  - **CreateEditingJob**
    - 请求参数变更
      - `+ image_watermark_settings.random_time_min`
      - `+ image_watermark_settings.random_time_max`
      - `+ concats.av_parameters.output`
      - `+ concats.av_parameters.output_filename`
  - **ListEditingJob**
    - 响应参数变更
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

- _接口版本_
  - V3
- _新增特性_
  - 支持接口`UpdateTimeZone`
- _解决问题_
  - 无
- _特性变更_
  - **ListBackups**
    - 响应参数变更
      - `+ backups.min_data_volume_capacity_for_restore`

### HuaweiCloud SDK VOD

- _接口版本_
  - V1
- _新增特性_
  - 支持接口`ListCategoryInfo`、`ListAssetTaskInfo`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK VPC

- _接口版本_
  - V3
- _新增特性_
  - 支持以下接口：
    - `ListAddressGroupsDependency`
    - `ListPorts`
    - `ShowPort`
    - `ListVirsubnets`
    - `ShowVirsubnet`
    - `ShowQuota`
- _解决问题_
  - 无
- _特性变更_
  - **AddSecurityGroups**
    - 响应参数变更
      - `* port.extra_dhcp_opts: list<ExtraDhcpOpt> -> list<PortExtraDhcpOpt>`
      - `* port.tags: list<ResourceTag> -> list<ResponseTag>`
  - **RemoveSecurityGroups**
    - 响应参数变更
      - `* port.extra_dhcp_opts: list<ExtraDhcpOpt> -> list<PortExtraDhcpOpt>`
      - `* port.tags: list<ResourceTag> -> list<ResponseTag>`

