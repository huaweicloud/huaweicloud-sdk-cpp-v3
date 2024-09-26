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

# 3.1.67 2023-12-27

### HuaweiCloud SDK AAD

- _Features_
  - Support the following APIs:
    - `CreateAadDomain`
    - `CreateCertificate`
    - `ModifyDomainWebSwitch`
    - `ListSourceIps`
    - `AddBlackWhiteIpList`
    - `DeleteBlackWhiteIpList`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK CSMS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListResourceInstances**
    - changes of response param
      - `+ resources.sys_tags`

### HuaweiCloud SDK DDS

- _Features_
  - Support the API `ShowClientNetwork`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK GaussDBforNoSQL

- _Features_
  - Support the API `ListJobs`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK RDS

- _Features_
  - Support the APIs `SetInstancesNewDbShrink`, `StopBackup`
- _Bug Fix_
  - None
- _Change_
  - None

# 3.1.66 2023-12-21

### HuaweiCloud SDK CloudTable

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **CreateCloudTableCluster**
    - changes of request param
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
    - changes of response param
      - `+ jobId`
      - `+ getJobEndpoint`
  - **CreateCluster**
    - changes of request param
      - `* cluster.instance.nics: list<Nics> -> list<nic>`

### HuaweiCloud SDK DRS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **BatchCreateJobs**
    - changes of request param
      - `+ jobs.engine_type: enum value [mysql-to-kafka,taurus-to-kafka,gaussdbv5ha-to-kafka]`
      - `+ jobs.source_endpoint.db_type: enum value [taurus]`
  - **BatchValidateConnections**
    - changes of request param
      - `+ jobs.db_type: enum value [taurus]`
  - **ShowJobList**
    - changes of request param
      - `+ engine_type: enum value [gaussdbv5,postgresql,mysql-to-kafka,taurus-to-kafka,gaussdbv5ha-to-kafka]`
  - **BatchUpdateJob**
    - changes of request param
      - `+ jobs.engine_type: enum value [gaussdbv5,postgresql,mysql-to-kafka,taurus-to-kafka,gaussdbv5ha-to-kafka]`
      - `+ jobs.source_endpoint.db_type: enum value [taurus]`
  - **BatchListJobDetails**
    - changes of response param
      - `+ results.source_endpoint.db_type: enum value [taurus]`
      - `+ results.inst_info.engine_type: enum value [gaussdbv5,postgresql,mysql-to-kafka,taurus-to-kafka,gaussdbv5ha-to-kafka]`
  - **ShowJobDetail**
    - changes of request param
      - `+ type: enum value [compare]`
      - `+ type: enum value [comapre]`
      - `+ query_type: enum value [diff]`

### HuaweiCloud SDK ECS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **BatchCreateServerTags**
    - changes of request param
      - `* tags: list<ServerTag> -> list<BatchAddServerTag>`
  - **UpdateServer**
    - changes of request param
      - `+ server.user_data`

### HuaweiCloud SDK EIP

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - Remove the APIs `UpdateDisassociatePublicip`, `UpdateAssociatePublicip`

### HuaweiCloud SDK IVS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **DetectStandardByNameAndId**
    - changes of request param
      - `+ data.req_data.detail`
      - `+ data.req_data.crop`
  - **DetectStandardByIdCardImage**
    - changes of request param
      - `+ data.req_data.detail`
      - `+ data.req_data.crop`
  - **DetectStandardByVideoAndIdCardImage**
    - changes of request param
      - `+ data.req_data.detail`
  - **DetectStandardByVideoAndNameAndId**
    - changes of request param
      - `+ data.req_data.detail`

### HuaweiCloud SDK MPC

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **CreateTranscodingTask**
    - changes of request param
      - `+ video_process.hls_storage_type`

### HuaweiCloud SDK TICS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ShowAgentDetail**
    - changes of response param
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

- _Features_
  - Support the APIs `ListAssetDailySummaryLog`, `UpdateStorageMode`, `ShowVodRetrieval`
- _Bug Fix_
  - None
- _Change_
  - **ShowTakeOverAssetDetails**
    - changes of response param
      - `+ transcode_info.output.group_id`
      - `+ transcode_info.output.group_name`
  - **PublishAssets**
    - changes of response param
      - `+ asset_info_array.is_multi_transcode`
      - `+ asset_info_array.play_info_array.group_id`
      - `+ asset_info_array.play_info_array.group_name`
  - **UnpublishAssets**
    - changes of response param
      - `+ asset_info_array.is_multi_transcode`
      - `+ asset_info_array.play_info_array.group_id`
      - `+ asset_info_array.play_info_array.group_name`
  - **ShowAssetMeta**
    - changes of response param
      - `+ asset_info_array.is_multi_transcode`
      - `+ asset_info_array.play_info_array.group_id`
      - `+ asset_info_array.play_info_array.group_name`
  - **ShowAssetDetail**
    - changes of response param
      - `+ transcode_info.output.group_id`
      - `+ transcode_info.output.group_name`
  - **ShowTakeOverTaskDetails**
    - changes of response param
      - `+ assets.transcode_info.output.group_id`
      - `+ assets.transcode_info.output.group_name`

# 3.1.65 2023-12-14

### HuaweiCloud SDK CFW

- _Features_
  - Support the APIs `CreateFirewall`, `ListJob`, `DeleteFirewall`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK CloudTable

- _Features_
  - Support the API `CreateCloudTableCluster`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK Live

- _Features_
  - Support the following APIs:
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
- _Bug Fix_
  - None
- _Change_
  - **ListRecordContents**
    - changes of request param
      - `+ record_type: enum value [PLAN_RECORD,ON_DEMAND_RECORD]`
    - changes of response param
      - `- record_contents.record_type: enum value [PLAN_RECORD,ON_DEMAND_RECORD]`

### HuaweiCloud SDK LTS

- _Features_
  - Support the API `CreateAgencyAccess`
- _Bug Fix_
  - None
- _Change_
  - **ListSqlAlarmRules**
    - changes of response param
      - `+ sql_alarm_rules.is_css_sql`
      - `+ sql_alarm_rules.notification_frequency`
      - `+ sql_alarm_rules.alarm_action_rule_name`
      - `+ sql_alarm_rules.status: enum value [RUNNING 启用,STOPPING 停止]`
      - `- sql_alarm_rules.status: enum value [RUNNING,STOPPING]`
      - `* sql_alarm_rules.frequency: object<Frequency> -> object<FrequencyRespBody>`
  - **UpdateSqlAlarmRule**
    - changes of request param
      - `+ is_css_sql`
      - `+ notification_frequency`
      - `+ alarm_action_rule_name`
      - `* frequency: object<Frequency> -> object<CreateSqlAlarmRuleFrequency>`
    - changes of response param
      - `+ is_css_sql`
      - `+ alarm_action_rule_name`
      - `+ notification_frequency`
      - `+ language: enum value [zh-cn,en-us]`
      - `* frequency: object<Frequency> -> object<FrequencyRespBody>`
  - **CreateSqlAlarmRule**
    - changes of request param
      - `+ is_css_sql`
      - `+ notification_frequency`
      - `+ alarm_action_rule_name`
      - `* frequency: object<Frequency> -> object<CreateSqlAlarmRuleFrequency>`
  - **ListKeywordsAlarmRules**
    - changes of response param
      - `+ keywords_alarm_rules.notification_frequency`
      - `+ keywords_alarm_rules.alarm_action_rule_name`
      - `+ keywords_alarm_rules.status: enum value [RUNNING  启用,STOPPING  停止]`
      - `- keywords_alarm_rules.status: enum value [RUNNING,STOPPING]`
  - **UpdateKeywordsAlarmRule**
    - changes of request param
      - `+ notification_frequency`
      - `+ alarm_action_rule_name`
    - changes of response param
      - `+ alarm_action_rule_name`
      - `+ notification_frequency`
      - `+ language: enum value [zh-cn,en-us]`
      - `- keywords_requests.search_time_range_unit: enum value [minute]`
      - `* keywords_requests: list<KeywordsRequest> -> list<KeywordsResBody>`
      - `* frequency: object<Frequency> -> object<FrequencyRespBody>`
  - **CreateKeywordsAlarmRule**
    - changes of request param
      - `+ notification_frequency`
      - `+ alarm_action_rule_name`
      - `+ keywords_alarm_level: enum value [Critical]`
      - `- keywords_alarm_level: enum value [CRITICAL]`

### HuaweiCloud SDK RDS

- _Features_
  - Support the APIs `ListLogLtsConfigs`, `SetLogLtsConfigs`, `DeleteLogLtsConfigs`
- _Bug Fix_
  - None
- _Change_
  - None

# 3.1.64 2023-12-07

### HuaweiCloud SDK GaussDB

- _Features_
  - Support the APIs `ListGaussMySqlInstancesUnifyStatus`, `ShowGaussMySqlInstanceInfoUnifyStatus`, `ListGaussMySqlInstanceDetailInfoUnifyStatus`, `SwitchGaussMySqlProxySsl`
- _Bug Fix_
  - None
- _Change_
  - **ShowGaussMySqlProxyList**
    - changes of response param
      - `+ proxy_list.proxy.ssl_option`

### HuaweiCloud SDK GaussDBforNoSQL

- _Features_
  - Support the API `OfflineNodes`
- _Bug Fix_
  - None
- _Change_
  - **ListLtsConfigs**
    - changes of response param
      - `* instance_lts_configs.instance.supported_log_types: string -> list<string>`

# 3.1.63 2023-11-30

### HuaweiCloud SDK EIP

- _Features_
  - Support the APIs `BatchModifyBandwidth`, `ListEipBandwidths`, `ListBandwidthsLimit`, `UpdatePublicip`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK GaussDBforNoSQL

- _Features_
  - Support the API `ListInfluxdbSlowLogs`
- _Bug Fix_
  - None
- _Change_
  - **ListLtsConfigs**
    - changes of response param
      - `+ instance_lts_configs.instance.supported_log_types`

### HuaweiCloud SDK RDS

- _Features_
  - Support the API `SetInstancesDbShrink`
- _Bug Fix_
  - None
- _Change_
  - **UpgradeDbMajorVersion**
    - changes of response param
      - `+ job_id`
  - **ShowUpgradeDbMajorVersionStatus**
    - changes of response param
      - `+ check_expiration_time`
      - `- report_expiration_time`
  - **StartResizeFlavorAction**
    - changes of response param
      - `+ order_id`
  - **StartInstanceEnlargeVolumeAction**
    - changes of response param
      - `+ order_id`
  - **StartInstanceSingleToHaAction**
    - changes of response param
      - `+ order_id`
  - **ListHistoryDatabase**
    - changes of request param
      - `+ engine`
      - `- database_name`

### HuaweiCloud SDK SIS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **RecognizeFlashAsr**
    - changes of request param
      - `* obs_bucket_name: optional -> required`
      - `* obs_object_key: optional -> required`

# 3.1.62 2023-11-23

### HuaweiCloud SDK CFW

- _Features_
  - Support the APIs `ListLogConfig`, `UpdateLogConfig`, `AddLogConfig`, `CreateEastWestFirewall`
- _Bug Fix_
  - None
- _Change_
  - **ListFlowLogs**
    - changes of response param
      - `* data.records.start_time: int32 -> int64`
      - `* data.records.end_time: int32 -> int64`
      - `* data.records.src_port: string -> int32`
      - `* data.records.dst_port: string -> int32`
  - **ListAccessControlLogs**
    - changes of response param
      - `* data.records.hit_time: int32 -> int64`
      - `* data.records.src_port: string -> int32`
      - `* data.records.dst_port: string -> int32`
  - **ChangeIpsSwitchStatus**
    - changes of request param
      - `+ X-Language`
  - **ListAttackLogs**
    - changes of response param
      - `* data.records.event_time: string -> int64`
      - `* data.records.attack_rule_id: int32 -> string`
      - `* data.records.packet: object<Packet> -> string`

# 3.1.61 2023-11-23

### HuaweiCloud SDK DDS

- _Features_
  - Support the following APIs:
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
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK DRS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **BatchDeleteJobs**
    - changes of request param
      - `+ jobs.is_show_breakpoint_position`
  - **BatchSetPolicy**
    - changes of request param
      - `+ jobs.file_and_position`
      - `+ jobs.gtid_set`
  - **BatchListProgresses**
    - changes of response param
      - `+ results.incre_trans_delay_millis`
  - **ShowJobList**
    - changes of request param
      - `+ instance_ids`
      - `+ instance_ip`

### HuaweiCloud SDK DRS

- _Features_
  - Support the APIs `UploadJdbcDriver`, `ListJdbcDrivers`, `DeleteJdbcDriver`, `SyncJdbcDriver`
- _Bug Fix_
  - None
- _Change_
  - **BatchCreateJobsAsync**
    - changes of request param
      - `+ jobs.policy_config.dml_types`
  - **ListAsyncJobDetail**
    - changes of response param
      - `+ jobs.connection_management`
      - `+ jobs.policy_config.dml_types`
  - **UpdateBatchAsyncJobs**
    - changes of request param
      - `+ jobs.params.policy_config.dml_types`
  - **ShowJobDetail**
    - changes of response param
      - `+ job.connection_management`
      - `+ job.policy_config.dml_types`
  - **UpdateJob**
    - changes of request param
      - `+ job.params.policy_config.dml_types`

### HuaweiCloud SDK GaussDB

- _Features_
  - Support the API `ShowRestoreTables`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK GaussDBforNoSQL

- _Features_
  - Support the following APIs:
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
      - `+ return_portrait_location`
    - changes of response param
      - `+ result.portrait_location`

### HuaweiCloud SDK RDS

- _Features_
  - Support the following APIs:
    - `UpgradeDbMajorVersion`
    - `ShowAvailableVersion`
    - `UpgradeDbMajorVersionPreCheck`
    - `ListInspectionHistories`
    - `ListUpgradeHistories`
    - `ShowUpgradeDbMajorVersionStatus`
    - `UpdateTdeStatus`
    - `ShowTdeStatus`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK VOD

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **CreateAssetByFileUpload**
    - changes of request param
      - `+ thumbnail.quantity`
      - `+ thumbnail.quantity_time`
      - `+ thumbnail.type: enum value [quantity]`
  - **PublishAssetFromObs**
    - changes of request param
      - `+ thumbnail.quantity`
      - `+ thumbnail.quantity_time`
      - `+ thumbnail.type: enum value [quantity]`
  - **CreateAssetProcessTask**
    - changes of request param
      - `+ thumbnail.quantity`
      - `+ thumbnail.quantity_time`
      - `+ thumbnail.type: enum value [quantity]`
  - **ListTopStatistics**
    - changes of response param
      - `+ top_urls.duration_ms`
  - **UploadMetaDataByUrl**
    - changes of request param
      - `+ upload_metadatas.thumbnail.quantity`
      - `+ upload_metadatas.thumbnail.quantity_time`
      - `+ upload_metadatas.thumbnail.type: enum value [quantity]`
  - **ListAssetList**
    - changes of response param
      - `+ assets.duration_ms`
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
      - `+ thumbnail_info.quantity`
  - **ShowTakeOverTaskDetails**
    - changes of response param
      - `+ assets.base_info.meta_data.duration_ms`

# 3.1.60 2023-11-16

### HuaweiCloud SDK CDN

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ShowDomainFullConfig**
    - changes of response param
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
    - changes of request param
      - `+ configs.sources.weight`
      - `+ configs.sources.obs_bucket_type`
      - `+ configs.sources.bucket_access_key`
      - `+ configs.sources.bucket_secret_key`
      - `+ configs.sources.bucket_region`
      - `+ configs.sources.bucket_name`
      - `+ configs.compress.file_type`
      - `+ configs.user_agent_filter.ua_list`

### HuaweiCloud SDK CodeArtsBuild

- _Features_
  - Support the following APIs:
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
- _Bug Fix_
  - None
- _Change_
  - **ShowRecordInfo**
    - changes of response param
      - `+ result.duration`

### HuaweiCloud SDK CSMS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListSecretTags**
    - changes of response param
      - `+ sys_tags.value`
      - `- sys_tags.values`
  - **ListNotificationRecords**
    - changes of request param
      - `+ limit`
      - `+ marker`

### HuaweiCloud SDK GaussDB

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **CreateGaussMySqlInstance**
    - changes of response param
      - `* instance.volume.size: string -> int32`

### HuaweiCloud SDK LTS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListTopnTrafficStatistics**
    - changes of response param
      - `+ results.cold_storage`

### HuaweiCloud SDK OCR

- _Features_
  - Support the API `RecognizePeruIdCard`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK RDS

- _Features_
  - Support the API `RevokePostgresqlDbPrivilege`
- _Bug Fix_
  - None
- _Change_
  - None

# 3.1.59 2023-11-13

### HuaweiCloud SDK LTS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **Createfavorite**
    - changes of request param
      - `+ is_global`
    - changes of response param
      - `+ is_global`

### HuaweiCloud SDK RDS

- _Features_
  - Support the interfaces `ListPostgresqlListHistoryTables`, `ListHistoryDatabase`, `BatchRestorePostgreSqlTables`, `BatchRestoreDatabase`
- _Bug Fix_
  - None
- _Change_
  - Remove the interfaces `ListInstancesResourceMetrics`, `ListInstancesRecommendation`

# 3.1.58 2023-11-09

### HuaweiCloud SDK TICS

- _Features_
  - Support `TICS`
- _Bug Fix_
  - None
- _Change_
  - None

# 3.1.57 2023-11-02

### HuaweiCloud SDK CSMS

- _Features_
  - Support the interface `RotateSecret`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK DRS

- _Features_
  - Support the interfaces `CollectPositionAsync`, `ShowPositionResult`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK GaussDB

- _Features_
  - Support the following interfaces：
    - `ShowIntelligentDiagnosisAbnormalCountOfInstances`
    - `ShowIntelligentDiagnosisInstanceInfosPerMetric`
    - `ShrinkGaussMySqlProxy`
    - `ShowInstanceDatabaseVersion`
    - `CopyInstanceConfigurations`
    - `ShowAutoScalingPolicy`
    - `UpdateAutoScalingPolicy`
    - `CheckResource`
    - `UpdateInstanceConfigurations`
- _Bug Fix_
  - None
- _Change_
  - **DeleteGaussMySqlBackup**
    - changes of response param
      - `+ backup_id`
      - `+ backup_name`
      - `- job_id`
  - **CreateGaussMySqlProxy**
    - changes of request param
      - `+ subnet_id`
  - **ShowGaussMySqlBackupList**
    - changes of request param
      - `+ name`
      - `+ instance_name`
    - changes of response param
      - `+ backups.instance_name`
      - `- backups.status: enum value [BUILDING,COMPLETED,FAILED,AVAILABLE]`
      - `- backups.type: enum value [auto,manual]`
  - **ShowGaussMySqlProxyList**
    - changes of response param
      - `+ proxy_list.proxy.subnet_id`

### HuaweiCloud SDK GaussDBforopenGauss

- _Features_
  - Support the interface `DeleteDatabase`
- _Bug Fix_
  - None
- _Change_
  - **ListInstances**
    - changes of request param
      - `+ charge_mode`
  - **ListInstancesDetails**
    - changes of request param
      - `+ charge_mode`

# 3.1.56 2023-10-26

### HuaweiCloud SDK CDN

- _Features_
  - Support the following interfaces：
    - `CreateRefreshTasks`
    - `CreatePreheatingTasks`
    - `ShowHistoryTasks`
    - `ShowHistoryTaskDetails`
    - `ShowUrlTaskInfo`
- _Bug Fix_
  - None
- _Change_
  - **CreateRefreshTasks**
    - changes of request param
      - `+ refresh_task.zh_url_encode`
  - **CreatePreheatingTasks**
    - changes of request param
      - `+ preheating_task.zh_url_encode`

### HuaweiCloud SDK OCR

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **RecognizeGeneralTable**
    - changes of request param
      - `+ with_borders`

### HuaweiCloud SDK RDS

- _Features_
  - Support the interfaces `ListInstanceDiagnosis`, `ListInstancesInfoDiagnosis`
- _Bug Fix_
  - None
- _Change_
  - None

# 3.1.55 2023-10-19

### HuaweiCloud SDK CBR

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListAgent**
    - changes of request param
      - `* agent_id: string -> list<string>`
  - **ListVault**
    - changes of request param
      - `* id: string -> list<string>`

### HuaweiCloud SDK CFW

- _Features_
  - Support the following interfaces：
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
- _Bug Fix_
  - None
- _Change_
  - **ListFlowLogs**
    - changes of request param
      - `+ dst_host`
    - changes of response param
      - `+ data.records.dst_host`
  - **ListAccessControlLogs**
    - changes of request param
      - `+ dst_host`
      - `+ rule_name`
      - `+ action`
    - changes of response param
      - `+ data.records.src_region_id`
      - `+ data.records.src_region_name`
      - `+ data.records.dst_region_id`
      - `+ data.records.dst_region_name`
      - `+ data.records.dst_host`
  - **ListBlackWhiteLists**
    - changes of response param
      - `+ data.records.description`
  - **ListDomainParseDetail**
    - changes of request param
      - `+ address_type`
  - **UpdateDnsServers**
    - changes of request param
      - `+ health_check_domain_name`
  - **ListDnsServers**
    - changes of response param
      - `+ data.health_check_domain_name`
  - **ListAttackLogs**
    - changes of request param
      - `+ dst_host`
      - `+ log_type`
    - changes of response param
      - `+ data.records.dst_host`
      - `+ data.records.src_region_id`
      - `+ data.records.src_region_name`
      - `+ data.records.dst_region_id`
      - `+ data.records.dst_region_name`
  - **UpdateAclRule**
    - changes of request param
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
    - changes of request param
      - `+ tags_id`
      - `+ source`
      - `+ destination`
      - `+ service`
    - changes of response param
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
    - changes of request param
      - `+ description`
  - **UpdateBlackWhiteList**
    - changes of request param
      - `+ description`
  - **ListEipCount**
    - changes of response param
      - `+ data.eip_protected_self`
  - **ChangeEipStatus**
    - changes of response param
      - `+ data.object_id`
      - `+ data.fail_eip_id_list`
      - `- data.id`
      - `* data: object<IdObject> -> object<EIPSwitchStatusVO>`
  - **ListEastWestFirewall**
    - changes of response param
      - `+ data.mode`
      - `+ data.ew_vpc_route_limit`
      - `+ data.er_associated_subnet.ipv6_enable`
      - `+ data.protect_infos.protected_resource_mode`
  - **AddAclRule**
    - changes of request param
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
    - changes of request param
      - `+ tags`
    - changes of response param
      - `+ data.records.object_id`
      - `+ data.records.tags`
      - `+ data.records.domain_id`
      - `+ data.records.owner`
      - `+ data.records.fw_domain_id`
  - **AddAddressItem**
    - changes of response param
      - `+ data.covered_ip`
  - **ListFirewallDetail**
    - changes of response param
      - `+ data.records.resource_id`
      - `+ data.records.support_url_filtering`
      - `+ data.records.flavor.session_concurrent`
      - `+ data.records.flavor.session_create`
      - `+ data.records.flavor.total_rule_count`
      - `+ data.records.flavor.used_rule_count`
      - `+ data.records.flavor.vpc_bandwith`

### HuaweiCloud SDK CodeArtsBuild

- _Features_
  - Support the following interfaces：
    - `DownloadLogByRecordId`
    - `ShowRecordInfo`
    - `StopBuildJob`
    - `DeleteBuildJob`
    - `DisableBuildJob`
    - `ResumeBuildJob`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK ECS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ReinstallServerWithCloudInit**
    - changes of request param
      - `+ os-reinstall.metadata.BYOL`
  - **ChangeServerOsWithCloudInit**
    - changes of request param
      - `+ os-change.metadata.BYOL`
  - **ChangeServerOsWithoutCloudInit**
    - changes of request param
      - `+ os-change.metadata.BYOL`

### HuaweiCloud SDK GaussDB

- _Features_
  - Support the following interfaces：
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
- _Bug Fix_
  - None
- _Change_
  - **ListGaussMySqlDatabase**
    - changes of request param
      - `+ name`
      - `+ charset`

### HuaweiCloud SDK KVS

- _Features_
  - Support the interfaces `ListTable`, `BatchGetKv`
- _Bug Fix_
  - None
- _Change_
  - **UpdateKv**
    - changes of request param
      - `* UpdateBlob.Blobdata: int32 -> bson-binary`
  - **BatchWriteKv**
    - changes of request param
      - `+ TableOpers.KvOpers.GetKv`

### HuaweiCloud SDK LTS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListStructuredLogsWithTimeRange**
    - changes of response param
      - `+ result`
      - `- context`

### HuaweiCloud SDK SIS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - Remove the interfaces `RunAudioAssessment`, `RunMultiModalAssessment`

### HuaweiCloud SDK VPC

- _Features_
  - Support the interface `BatchCreateSecurityGroupRules`
- _Bug Fix_
  - None
- _Change_
  - None

# 3.1.54 2023-10-12

### HuaweiCloud SDK CDN

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ShowHistoryTasks**
    - changes of request param
      - `+ task_type`
  - **ShowUrlTaskInfo**
    - changes of response param
      - `+ result.mode`

### HuaweiCloud SDK CodeArtsDeploy

- _Features_
  - Support the interface `ShowExecutionParams`
- _Bug Fix_
  - None
- _Change_
  - **ListAllApp**
    - changes of request param
      - `+ states`
      - `+ group_id`

### HuaweiCloud SDK CTS

- _Features_
  - Support the following interfaces：
    - `ListOperations`
    - `BatchCreateResourceTags`
    - `BatchDeleteResourceTags`
    - `ListUserResources`
    - `CheckObsBuckets`
    - `ListTraceResources`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK ECS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ReinstallServerWithoutCloudInit**
    - changes of request param
      - `+ os-reinstall.metadata.BYOL`
  - **ListFlavors**
    - changes of response param
      - `+ flavors.os_extra_specs.quota:vif_max_num`
      - `+ flavors.os_extra_specs.quota:sub_network_interface_max_num`
  - **ListResizeFlavors**
    - changes of response param
      - `+ flavors.extra_specs.quota:vif_max_num`
      - `+ flavors.extra_specs.quota:sub_network_interface_max_num`

### HuaweiCloud SDK GaussDBforopenGauss

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListInstances**
    - changes of response param
      - `+ instances.datastore.complete_version`
      - `+ instances.datastore.hotfix_versions`
  - **ListInstancesDetails**
    - changes of response param
      - `+ instances.datastore.complete_version`
      - `+ instances.datastore.hotfix_versions`

### HuaweiCloud SDK IMS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ShowJob**
    - changes of response param
      - `+ entities.addition_error_code`
      - `+ entities.addition_error_msg`
      - `+ entities.error_code`
      - `+ entities.error`
      - `+ entities.alarm_code`

### HuaweiCloud SDK OCR

- _Features_
  - Support the interface `RecognizeColombiaIdCard`
- _Bug Fix_
  - None
- _Change_
  - **RecognizeVehicleLicense**
    - changes of response param
      - `+ result.energy_type`
      - `+ result.front`
      - `+ result.back`
  - **RecognizeWebImage**
    - changes of request param
      - `+ detect_text_direction`

### HuaweiCloud SDK RDS

- _Features_
  - Support the following interfaces：
    - `ListPostgresqlHbaInfo`
    - `ModifyPostgresqlHbaConf`
    - `AddPostgresqlHbaConf`
    - `DeletePostgresqlHbaConf`
    - `ListPostgresqlHbaInfoHistory`
- _Bug Fix_
  - None
- _Change_
  - **UpgradeDbVersionNew**
    - changes of request param
      - `+ is_delayed`
      - `- delay`

### HuaweiCloud SDK VPC

- _Features_
  - Support the following interfaces：
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
- _Bug Fix_
  - None
- _Change_
  - None

# 3.1.53 2023-09-19

### HuaweiCloud SDK CTS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **UpdateTracker**
    - changes of request param
      - `+ is_organization_tracker`
      - `+ management_event_selector`
  - **CreateTracker**
    - changes of request param
      - `+ is_organization_tracker`
      - `+ management_event_selector`
    - changes of response param
      - `+ is_organization_tracker`
      - `+ management_event_selector`
  - **ListTrackers**
    - changes of response param
      - `+ trackers.is_organization_tracker`
      - `+ trackers.management_event_selector`

### HuaweiCloud SDK GaussDBforNoSQL

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **CreateInstance**
    - changes of request param
      - `+ availability_zone_detail`

### HuaweiCloud SDK Live

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **UpdateTranscodingsTemplate**
    - changes of request param
      - `+ quality_info.bitrate_adaptive`
      - `+ quality_info.i_frame_policy`
  - **CreateTranscodingsTemplate**
    - changes of request param
      - `+ quality_info.bitrate_adaptive`
      - `+ quality_info.i_frame_policy`
  - **ShowTranscodingsTemplate**
    - changes of response param
      - `+ templates.quality_info.bitrate_adaptive`
      - `+ templates.quality_info.i_frame_policy`

### HuaweiCloud SDK LTS

- _Features_
  - Support the following interfaces：
    - `ShowLogConvergeConfig`
    - `ShowAdminConfig`
    - `UpdateSwitch`
    - `ShowMemberGroupAndStream`
    - `UpdateLogConvergeConfig`
- _Bug Fix_
  - None
- _Change_
  - **ListCharts**
    - changes of response param
      - `+ config.can_sort`
      - `+ config.can_search`
      - `+ config.page_size`
      - `* config: object -> object<ChartConfig>`
  - **ShowNotificationTemplate**
    - changes of response param
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
    - changes of response param
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
    - changes of response param
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
    - changes of response param
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
    - changes of response param
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
    - changes of response param
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
    - changes of request param
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
    - changes of response param
      - `+ frequency.type`
      - `+ frequency.cron_expr`
      - `+ frequency.hour_of_day`
      - `+ frequency.day_of_week`
      - `+ frequency.fixed_rate`
      - `+ frequency.fixed_rate_unit`
      - `* frequency: object -> object<Frequency>`
  - **CreateSqlAlarmRule**
    - changes of request param
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
    - changes of response param
      - `+ sql_alarm_rules.frequency.type`
      - `+ sql_alarm_rules.frequency.cron_expr`
      - `+ sql_alarm_rules.frequency.hour_of_day`
      - `+ sql_alarm_rules.frequency.day_of_week`
      - `+ sql_alarm_rules.frequency.fixed_rate`
      - `+ sql_alarm_rules.frequency.fixed_rate_unit`
      - `* sql_alarm_rules.frequency: object -> object<Frequency>`
  - **UpdateKeywordsAlarmRule**
    - changes of request param
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
    - changes of request param
      - `+ notification_save_rule.language`
      - `+ notification_save_rule.timezone`
      - `+ notification_save_rule.user_name`
      - `+ notification_save_rule.topics`
      - `+ notification_save_rule.template_name`
      - `* notification_save_rule: object -> object<SqlNotificationSaveRule>`
  - **ListKeywordsAlarmRules**
    - changes of response param
      - `+ keywords_alarm_rules.frequency.type`
      - `+ keywords_alarm_rules.frequency.cron_expr`
      - `+ keywords_alarm_rules.frequency.hour_of_day`
      - `+ keywords_alarm_rules.frequency.day_of_week`
      - `+ keywords_alarm_rules.frequency.fixed_rate`
      - `+ keywords_alarm_rules.frequency.fixed_rate_unit`
      - `* keywords_alarm_rules.frequency: object -> object<Frequency>`

### HuaweiCloud SDK OCR

- _Features_
  - Support the interfaces `RecognizeVehicleCertificate`, `RecognizeAcceptanceBill`, `RecognizeRealEstateCertificate`, `RecognizeVietnamIdCard`
- _Bug Fix_
  - None
- _Change_
  - None

# 3.1.52 2023-09-14

### HuaweiCloud SDK CBR

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **CreateVault**
    - changes of request param
      - `- vault.billing.promotion_info`
      - `- vault.billing.purchase_mode`
      - `- vault.billing.order_id`
  - **CreatePostPaidVault**
    - changes of request param
      - `- vault.billing.promotion_info`
      - `- vault.billing.purchase_mode`
      - `- vault.billing.order_id`

### HuaweiCloud SDK CodeArtsDeploy

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ShowAppDetailById**
    - changes of response param
      - `* result.arrange_infos: object -> list<TaskV2Info>`
  - **ListNewHosts**
    - changes of response param
      - `+ result.permission.can_copy`
      - `- result.permission.can_connection_test`
      - `* result.permission: object<PermissionHostDetail> -> object<PermissionHostDetailNew>`
  - **ShowHostDetail**
    - changes of response param
      - `* result.proxy_host: string -> object<HostInfoDetail>`
      - `+ result.permission.can_copy`
      - `- result.permission.can_connection_test`
      - `* result.permission: object<PermissionHostDetail> -> object<PermissionHostDetailNew>`

### HuaweiCloud SDK CSMS

- _Features_
  - Support the following interfaces：
    - `ListSecretEvents`
    - `CreateSecretEvent`
    - `ShowSecretEvent`
    - `UpdateSecretEvent`
    - `DeleteSecretEvent`
    - `ListNotificationRecords`
    - `UpdateVersion`
- _Bug Fix_
  - None
- _Change_
  - **ListSecrets**
    - changes of request param
      - `+ event_name`
    - changes of response param
      - `+ secrets.secret_type`
      - `+ secrets.auto_rotation`
      - `+ secrets.rotation_period`
      - `+ secrets.rotation_config`
      - `+ secrets.rotation_time`
      - `+ secrets.next_rotation_time`
      - `+ secrets.event_subscriptions`
      - `+ secrets.enterprise_project_id`
  - **CreateSecret**
    - changes of request param
      - `+ secret_type`
      - `+ auto_rotation`
      - `+ rotation_period`
      - `+ rotation_config`
      - `+ event_subscriptions`
      - `+ enterprise_project_id`
    - changes of response param
      - `+ secret.secret_type`
      - `+ secret.auto_rotation`
      - `+ secret.rotation_period`
      - `+ secret.rotation_config`
      - `+ secret.rotation_time`
      - `+ secret.next_rotation_time`
      - `+ secret.event_subscriptions`
      - `+ secret.enterprise_project_id`
  - **ShowSecret**
    - changes of response param
      - `+ secret.secret_type`
      - `+ secret.auto_rotation`
      - `+ secret.rotation_period`
      - `+ secret.rotation_config`
      - `+ secret.rotation_time`
      - `+ secret.next_rotation_time`
      - `+ secret.event_subscriptions`
      - `+ secret.enterprise_project_id`
  - **UpdateSecret**
    - changes of request param
      - `+ auto_rotation`
      - `+ rotation_period`
      - `+ event_subscriptions`
    - changes of response param
      - `+ secret.secret_type`
      - `+ secret.auto_rotation`
      - `+ secret.rotation_period`
      - `+ secret.rotation_config`
      - `+ secret.rotation_time`
      - `+ secret.next_rotation_time`
      - `+ secret.event_subscriptions`
      - `+ secret.enterprise_project_id`
  - **UploadSecretBlob**
    - changes of response param
      - `+ secret.secret_type`
      - `+ secret.auto_rotation`
      - `+ secret.rotation_period`
      - `+ secret.rotation_config`
      - `+ secret.rotation_time`
      - `+ secret.next_rotation_time`
      - `+ secret.event_subscriptions`
      - `+ secret.enterprise_project_id`
  - **ListSecretVersions**
    - changes of response param
      - `+ version_metadatas.expire_time`
  - **CreateSecretVersion**
    - changes of request param
      - `+ expire_time`
    - changes of response param
      - `+ version_metadata.expire_time`
  - **DeleteSecretForSchedule**
    - changes of response param
      - `+ secret.secret_type`
      - `+ secret.auto_rotation`
      - `+ secret.rotation_period`
      - `+ secret.rotation_config`
      - `+ secret.rotation_time`
      - `+ secret.next_rotation_time`
      - `+ secret.event_subscriptions`
      - `+ secret.enterprise_project_id`
  - **RestoreSecret**
    - changes of response param
      - `+ secret.secret_type`
      - `+ secret.auto_rotation`
      - `+ secret.rotation_period`
      - `+ secret.rotation_config`
      - `+ secret.rotation_time`
      - `+ secret.next_rotation_time`
      - `+ secret.event_subscriptions`
      - `+ secret.enterprise_project_id`
  - **ListSecretTags**
    - changes of response param
      - `* sys_tags: list<TagItem> -> list<SysTag>`
  - **ListProjectSecretsTags**
    - changes of response param
      - `* tags: list<Tag> -> list<TagResponse>`
  - **ShowSecretVersion**
    - changes of response param
      - `+ version.version_metadata.expire_time`
  - **ListResourceInstances**
    - changes of request param
      - `* matches: list<TagItem> -> list<TagMatches>`
    - changes of response param
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

- _Features_
  - Support the interface `ModifyVolumeQoS`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK GaussDB

- _Features_
  - Support the interface `ListAuditLogDownloadLink`
- _Bug Fix_
  - None
- _Change_
  - **CreateGaussMySqlInstance**
    - changes of response param
      - `+ instance.volume`

### HuaweiCloud SDK LTS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListCharts**
    - changes of response param
      - `- config.can_sort`
      - `- config.can_search`
      - `- config.page_size`
  - **ShowNotificationTemplate**
    - changes of response param
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
    - changes of request param
      - `- tag`
    - changes of response param
      - `* log_streams: list<LogStream> -> list<LogStreamResBody>`
  - **ListStructuredLogsWithTimeRange**
    - changes of response param
      - `+ context`
      - `- body`
  - **DeleteTransfer**
    - changes of response param
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
    - changes of response param
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
    - changes of response param
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
    - changes of response param
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
    - changes of response param
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
    - changes of request param
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
    - changes of response param
      - `- frequency.type`
      - `- frequency.cron_expr`
      - `- frequency.hour_of_day`
      - `- frequency.day_of_week`
      - `- frequency.fixed_rate`
      - `- frequency.fixed_rate_unit`
  - **CreateSqlAlarmRule**
    - changes of request param
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
    - changes of response param
      - `- sql_alarm_rules.frequency.type`
      - `- sql_alarm_rules.frequency.cron_expr`
      - `- sql_alarm_rules.frequency.hour_of_day`
      - `- sql_alarm_rules.frequency.day_of_week`
      - `- sql_alarm_rules.frequency.fixed_rate`
      - `- sql_alarm_rules.frequency.fixed_rate_unit`
  - **UpdateKeywordsAlarmRule**
    - changes of request param
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
    - changes of request param
      - `- notification_save_rule.language`
      - `- notification_save_rule.timezone`
      - `- notification_save_rule.user_name`
      - `- notification_save_rule.topics`
      - `- notification_save_rule.template_name`
  - **ListKeywordsAlarmRules**
    - changes of response param
      - `- keywords_alarm_rules.frequency.type`
      - `- keywords_alarm_rules.frequency.cron_expr`
      - `- keywords_alarm_rules.frequency.hour_of_day`
      - `- keywords_alarm_rules.frequency.day_of_week`
      - `- keywords_alarm_rules.frequency.fixed_rate`
      - `- keywords_alarm_rules.frequency.fixed_rate_unit`

### HuaweiCloud SDK RDS

- _Features_
  - Support the interfaces `RestoreTablesNew`, `UpgradeDbVersionNew`
- _Bug Fix_
  - None
- _Change_
  - None

# 3.1.51 2023-09-07

### HuaweiCloud SDK DRS

- _Features_
  - Support the following interfaces：
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
- _Bug Fix_
  - None
- _Change_
  - **ShowDbObjectTemplateResult**
    - changes of request param
      - `+ type: enum value [change]`
  - **ShowUpdateObjectSavingStatus**
    - changes of request param
      - `+ X-Language: enum value [en-us,zh-cn]`
  - **ShowObjectMapping**
    - changes of request param
      - `+ X-Language: enum value [en-us,zh-cn]`
  - **ListJobs**
    - changes of request param
      - `+ instance_ids`
      - `+ instance_ip`
  - **ShowDbObjectCollectionStatus**
    - changes of request param
      - `+ X-Language: enum value [en-us,zh-cn]`
  - **UpdateBatchAsyncJobs**
    - changes of request param
      - `+ jobs.type: enum value [re_create,expired_days]`
  - **UpdateJob**
    - changes of request param
      - `+ job.type: enum value [re_create,expired_days]`

### HuaweiCloud SDK RDS

- _Features_
  - Support the interfaces `ListInstancesResourceMetrics`, `ListInstancesRecommendation`
- _Bug Fix_
  - None
- _Change_
  - None

# 3.1.50 2023-08-31

### HuaweiCloud SDK CodeArtsDeploy

- _Features_
  - Support the following interfaces：
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
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK ECS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ShowJob**
    - changes of response param
      - `+ entities.server_id`
      - `+ entities.nic_id`
  - **CreateServers**
    - changes of request param
      - `+ server.extendparam.CB_CSBS_BACKUP`

### HuaweiCloud SDK FRS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **DetectFaceByFile**
    - changes of response param
      - `+ faces.attributes.gender`
  - **DetectFaceByFileIntl**
    - changes of response param
      - `+ faces.attributes.gender`
  - **DetectFaceByUrl**
    - changes of response param
      - `+ faces.attributes.gender`
  - **DetectFaceByUrlIntl**
    - changes of response param
      - `+ faces.attributes.gender`
  - **DetectFaceByBase64**
    - changes of response param
      - `+ faces.attributes.gender`
  - **DetectFaceByBase64Intl**
    - changes of response param
      - `+ faces.attributes.gender`

### HuaweiCloud SDK OCR

- _Features_
  - Support the interface `RecognizeSmartDocumentRecognizer`
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
  - **ListInstances**
    - changes of response param
      - `+ instances.public_dns_names`

# 3.1.49 2023-08-24

### HuaweiCloud SDK Core

- _Features_
  - None
- _Bug Fix_
  - Fix the problem of encoding errors caused by Chinese characters in the path parameter
  - Fix the problem that deserialization of int64 fails
- _Change_
  - None

### HuaweiCloud SDK CBR

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListJarPackageHostInfo**
    - changes of response param
      - `* data_list.record_time: int32 -> int64`

### HuaweiCloud SDK IMS

- _Features_
  - Support the following interfaces：
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
- _Bug Fix_
  - None
- _Change_
  - **ListAimResolveDetails**
    - changes of request param
      - `+ task_name`
    - changes of response param
      - `+ resolve_details.task_name`
  - **ListResolveTasks**
    - changes of request param
      - `+ task_name`
    - changes of response param
      - `+ resolve_tasks.task_name`

### HuaweiCloud SDK LTS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListNatGateways**
    - changes of response param
      - `+ nat_gateways.session_conf`
  - **CreateNatGateway**
    - changes of request param
      - `+ nat_gateway.session_conf`
    - changes of response param
      - `+ nat_gateway.session_conf`
  - **ShowNatGateway**
    - changes of response param
      - `+ nat_gateway.session_conf`
  - **UpdateNatGateway**
    - changes of request param
      - `+ nat_gateway.session_conf`
    - changes of response param
      - `+ nat_gateway.session_conf`

### HuaweiCloud SDK OCR

- _Features_
  - Support the interface `ShowLoginType`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK SIS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **RunTts**
    - changes of request param
      - `+ config.property: enum value [chinese_huaxiaoman_common,chinese_huaxiaofang_common,chinese_huaxiaojun_common]`

### HuaweiCloud SDK VPC

# 3.1.48 2023-08-21

### HuaweiCloud SDK KMS

- _Features_
  - Support `KMS`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK LTS

- _Features_
  - Support the interface `DeleteDashboard`
- _Bug Fix_
  - None
- _Change_
  - **CreateDashBoard**
    - changes of response param
      - `* last_update_time: string -> int64`
      - `* useSystemTemplate: string -> boolean`
  - **CreateLogStream**
    - changes of request param
      - `- enterprise_project_name`
      - `- log_stream_name: enum value [lts-stream-13ci]`
      - `* ttl_in_days: string -> int32`
      - `* tags: list<tagsBody> -> object<tagsBody>`
  - **ListAccessConfig**
    - changes of response param
      - `+ cluster_id`
      - `+ result.cluster_id`
  - **UpdateAccessConfig**
    - changes of request param
      - `+ cluster_id`
    - changes of response param
      - `+ cluster_id`
  - **CreateAccessConfig**
    - changes of request param
      - `+ cluster_id`
    - changes of response param
      - `+ cluster_id`
  - **DeleteAccessConfig**
    - changes of response param
      - `+ cluster_id`
      - `+ result.cluster_id`

# 3.1.47 2023-08-17

### HuaweiCloud SDK CodeArtsBuild

- _Features_
  - Support `CodeArtsBuild`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK ECS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **CreateServers**
    - changes of request param
      - `+ server.root_volume.iops`
      - `+ server.root_volume.throughput`
      - `+ server.root_volume.volumetype: enum value [GPSSD2,ESSD2]`
      - `+ server.data_volumes.iops`
      - `+ server.data_volumes.throughput`
      - `+ server.data_volumes.volumetype: enum value [GPSSD2,ESSD2]`
  - **CreatePostPaidServers**
    - changes of request param
      - `+ server.data_volumes.iops`
      - `+ server.data_volumes.throughput`
      - `+ server.data_volumes.volumetype: enum value [GPSSD2,ESSD2]`
      - `+ server.root_volume.iops`
      - `+ server.root_volume.throughput`
      - `+ server.root_volume.volumetype: enum value [GPSSD2,ESSD2]`

### HuaweiCloud SDK GaussDB

- _Features_
  - Support the interfaces `ModifyGaussMysqlDns`, `CreateGaussMysqlDns`
- _Bug Fix_
  - None
- _Change_
  - **ShowGaussMySqlInstanceInfo**
    - changes of response param
      - `+ instance.private_dns_names`
  - **ListGaussMySqlInstanceDetailInfo**
    - changes of response param
      - `+ instances.private_dns_names`

### HuaweiCloud SDK Live

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListSnapshotConfigs**
    - changes of response param
      - `* body: object<LiveSnapshotConfig> -> list<LiveSnapshotConfig>`

### HuaweiCloud SDK MPC

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **CreateThumbnailsTask**
    - changes of request param
      - `+ thumbnail_para.dots_ms`
      - `+ thumbnail_para.type: enum value [DOTS_MS]`
  - **CreateTranscodingTask**
    - changes of request param
      - `+ thumbnail.params.dots_ms`
      - `+ thumbnail.params.type: enum value [DOTS_MS]`

### HuaweiCloud SDK VPC

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **CreateSecurityGroupRule**
    - changes of request param
      - `+ security_group_rule.remote_address_group_id`
  - **NeutronCreateSecurityGroupRule**
    - changes of request param
      - `+ security_group_rule.remote_address_group_id`

# 3.1.46 2023-08-10

### HuaweiCloud SDK CodeArtsDeploy

- _Features_
  - Support `CodeArtsDeploy`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK GaussDB

- _Features_
  - Support the interfaces `UpdateProxyPort`, `DescribeBackupEncryptStatus`, `ModifyBackupEncryptStatus`
- _Bug Fix_
  - None
- _Change_
  - **UpdateProxySessionConsistence**
    - changes of request param
      - `+ consistence_mode`
  - **CreateGaussMySqlInstance**
    - changes of request param
      - `* datastore: object<MysqlDatastore> -> object<MysqlDatastoreInReq>`
    - changes of response param
      - `* instance.datastore: object<MysqlDatastore> -> object<MysqlDatastoreInRes>`
  - **ShowGaussMySqlBackupList**
    - changes of response param
      - `- backups.datastore.kernel_version`
      - `* backups.datastore: object<MysqlDatastore> -> object<MysqlDatastoreInBackup>`
  - **ShowGaussMySqlProxyList**
    - changes of response param
      - `+ proxy_list.proxy.consistence_mode`

### HuaweiCloud SDK OCR

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **RecognizeMyanmarIdcard**
    - changes of request param
      - `+ return_translation`
    - changes of response param
      - `+ result.translation_info`

### HuaweiCloud SDK RDS

- _Features_
  - Support the interfaces `ListXellogFiles`, `CreateXelLogDownload`
- _Bug Fix_
  - None
- _Change_
  - None

# 3.1.45 2023-08-03

### HuaweiCloud SDK RDS

- _Features_
  - Support `RDS`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK CDN

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ShowDomainDetailByName**
    - changes of response param
      - `- domain.sources.weight`
      - `* domain.sources: list<SourcesConfig> -> list<SourcesDomainConfig>`
  - **ShowDomainFullConfig**
    - changes of response param
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
    - changes of request param
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

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **DeleteTracker**
    - changes of request param
      - `+ tracker_type: enum value [system]`

### HuaweiCloud SDK GaussDB

- _Features_
  - Support the interface `ModifyGaussMySqlProxyRouteMode`
- _Bug Fix_
  - None
- _Change_
  - **ShowGaussMySqlEngineVersion**
    - changes of response param
      - `+ datastores.version`
      - `+ datastores.kernel_version`
  - **CreateGaussMySqlProxy**
    - changes of request param
      - `+ route_mode`
  - **CreateGaussMySqlInstance**
    - changes of request param
      - `+ datastore.kernel_version`
    - changes of response param
      - `+ instance.datastore.kernel_version`
  - **ShowGaussMySqlBackupList**
    - changes of response param
      - `+ backups.datastore.kernel_version`
  - **ShowGaussMySqlProxyList**
    - changes of response param
      - `+ proxy_list.proxy.route_mode`
      - `+ proxy_list.proxy.balance_route_mode_enabled`

### HuaweiCloud SDK GaussDBforopenGauss

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListInstances**
    - changes of response param
      - `+ instances.backup_used_space`
  - **ListComponentInfos**
    - changes of request param
      - `+ component_type`
      - `+ availability_zone_id`
    - changes of response param
      - `+ nodes.name`
      - `+ nodes.availability_zone_id`
      - `+ nodes.description`
      - `+ nodes.status`
      - `+ nodes.components.distributed_id`
  - **ListInstancesDetails**
    - changes of response param
      - `+ instances.backup_used_space`

### HuaweiCloud SDK VPC

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListPorts**
    - changes of request param
      - `+ enable_efi`
    - changes of response param
      - `+ ports.enable_efi`
  - **CreatePort**
    - changes of response param
      - `+ port.enable_efi`
  - **ShowPort**
    - changes of response param
      - `+ port.enable_efi`
  - **UpdatePort**
    - changes of response param
      - `+ port.enable_efi`

# 3.1.44 2023-07-27

### HuaweiCloud SDK DRS

- _Features_
  - Support the following interfaces：
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
- _Bug Fix_
  - None
- _Change_
  - **DownloadDbObjectTemplate**
    - changes of request param
      - `+ file_import_db_level`
  - **UploadDbObjectTemplate**
    - changes of request param
      - `+ file_import_db_level`
  - **ListAsyncJobs**
    - changes of response param
      - `+ jobs.status: enum value [AUTO_PARAM_VALIDATE_SUCCESS,COMMIT_SUCCESS]`
      - `- jobs.status: enum value [ASYNC_JOB_CREATING,ASYNC_JOB_CREATE_FAILED,ASYNC_JOB_COMPLETED]`
  - **CreateJob**
    - changes of request param
      - `+ job.node_info.base_info`
    - changes of response param
      - `+ is_clone_job`
      - `+ create_time`
      - `+ name`
      - `+ id`
      - `+ status`
      - `+ job.is_clone_job`
  - **BatchCreateJobsAsync**
    - changes of request param
      - `+ jobs.node_info.base_info`
  - **ListAsyncJobDetail**
    - changes of response param
      - `+ jobs.support_import_file_resp`
      - `+ jobs.instance_features`
      - `+ jobs.task_version`
      - `+ jobs.node_info.base_info`
  - **UpdateBatchAsyncJobs**
    - changes of request param
      - `+ jobs.type: enum value [policy]`
      - `- jobs.type: enum value [policy_config]`
      - `+ jobs.params.node_info.base_info`
  - **ShowJobDetail**
    - changes of request param
      - `+ type: enum value [file]`
    - changes of response param
      - `+ job.support_import_file_resp`
      - `+ job.instance_features`
      - `+ job.task_version`
      - `+ job.node_info.base_info`
  - **UpdateJob**
    - changes of request param
      - `+ job.type: enum value [policy]`
      - `- job.type: enum value [policy_config]`
      - `+ job.params.node_info.base_info`

### HuaweiCloud SDK EIP

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **AttachShareBandwidth**
    - changes of response param
      - `+ publicip.vnic.vtep`
      - `+ publicip.vnic.vni`
      - `+ publicip.vnic.port_profile`
  - **DetachShareBandwidth**
    - changes of response param
      - `+ publicip.vnic.vtep`
      - `+ publicip.vnic.vni`
      - `+ publicip.vnic.port_profile`
  - **EnableNat64**
    - changes of response param
      - `+ publicip.vnic.vtep`
      - `+ publicip.vnic.vni`
      - `+ publicip.vnic.port_profile`
  - **DisableNat64**
    - changes of response param
      - `+ publicip.vnic.vtep`
      - `+ publicip.vnic.vni`
      - `+ publicip.vnic.port_profile`
  - **AttachBatchPublicIp**
    - changes of response param
      - `+ publicips.publicip.vnic.vtep`
      - `+ publicips.publicip.vnic.vni`
      - `+ publicips.publicip.vnic.port_profile`
  - **DetachBatchPublicIp**
    - changes of response param
      - `+ publicips.publicip.vnic.vtep`
      - `+ publicips.publicip.vnic.vni`
      - `+ publicips.publicip.vnic.port_profile`

### HuaweiCloud SDK GaussDBforNoSQL

- _Features_
  - Support the interface `ShowInstanceBiactiveRegions`
- _Bug Fix_
  - None
- _Change_
  - **ListConfigurations**
    - changes of response param
      - `+ quota`
      - `+ configurations.mode`
  - **ListConfigurationTemplates**
    - changes of response param
      - `+ quota`
      - `+ configurations.mode`
  - **ShowInstanceConfiguration**
    - changes of response param
      - `+ mode`
      - `+ id`
  - **ListConfigurationDatastores**
    - changes of response param
      - `+ datastores.mode`
  - **ShowQuotas**
    - changes of request param
      - `+ datastore_type`
      - `+ mode`
  - **ListInstances**
    - changes of response param
      - `+ instances.datastore.whole_version`

### HuaweiCloud SDK GaussDBforopenGauss

- _Features_
  - Support the interface `DownloadBackup`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK LTS

- _Features_
  - Support the interface `UpdateLogStream`
- _Bug Fix_
  - None
- _Change_
  - **UpdateLogGroup**
    - changes of request param
      - `+ tags`
  - **CreateLogGroup**
    - changes of request param
      - `+ tags`
  - **CreateLogStream**
    - changes of request param
      - `+ enterprise_project_name`
      - `+ ttl_in_days`
      - `+ tags`
      - `+ log_stream_name: enum value [lts-stream-13ci]`

# 3.1.43 2023-07-20

### HuaweiCloud SDK GaussDBforopenGauss

- _Features_
  - Support `GaussDBforopenGauss`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK GaussDB

- _Features_
  - Support `GaussDB`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK GaussDBforNoSQL

- _Features_
  - Support `GaussDBforNoSQL`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK DDS

- _Features_
  - Support `DDS`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK EIP

- _Features_
  - Support the following interfaces：
    - `AttachShareBandwidth`
    - `AttachBatchPublicIp`
    - `DetachShareBandwidth`
    - `DetachBatchPublicIp`
    - `EnableNat64`
    - `DisableNat64`
    - `ListBandwidth`
- _Bug Fix_
  - None
- _Change_
  - None

# 3.1.42 2023-07-13

### HuaweiCloud SDK SIS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **PushTranscriberJobs**
    - changes of request param
      - `+ Enterprise-Project-Id`

### HuaweiCloud SDK VPC

- _Features_
  - Support the following interfaces：
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
- _Bug Fix_
  - None
- _Change_
  - None

# 3.1.41 2023-07-06

### HuaweiCloud SDK EVS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **CreateVolume**
    - changes of request param
      - `+ volume.iops`
      - `+ volume.throughput`
      - `+ volume.volume_type: enum value [GPSSD2,ESSD2]`

### HuaweiCloud SDK LTS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **UpdateSqlAlarmRule**
    - changes of request param
      - `+ notification_save_rule.template_name`
  - **CreateSqlAlarmRule**
    - changes of request param
      - `+ notification_save_rule.template_name`
  - **UpdateKeywordsAlarmRule**
    - changes of request param
      - `+ notification_save_rule.template_name`
  - **CreateKeywordsAlarmRule**
    - changes of request param
      - `+ notification_save_rule.template_name`
  - **ListAccessConfig**
    - changes of response param
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
    - changes of request param
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
    - changes of response param
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
    - changes of request param
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
    - changes of response param
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
    - changes of response param
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

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListSecurityGroupRules**
    - changes of request param
      - `+ remote_ip_prefix`

# 3.1.40 2023-06-29

### HuaweiCloud SDK IdentityCenter

- _Features_
  - Support `IdentityCenter`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK WorkspaceApp

- _Features_
  - Support `WorkspaceApp`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK Config

- _Features_
  - Support `Config`
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
  - **ShowAddressGroup**
    - changes of response param
      - `+ address_group.tags`
  - **UpdateAddressGroup**
    - changes of response param
      - `+ address_group.tags`
  - **ListAddressGroup**
    - changes of response param
      - `+ address_groups.tags`
  - **CreateAddressGroup**
    - changes of response param
      - `+ address_group.tags`

# 3.1.39 2023-06-21

### HuaweiCloud SDK CloudRTC

- _Features_
  - Support the service `CloudRTC`.
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK CFW

- _Features_
  - Support the service `Cloud Firewall`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK CloudTable

- _Features_
  - Support the following interfaces：
    - `EnableComponent`
    - `ExpandClusterComponent`
    - `RebootCloudTableCluster`
    - `ShowClusterSetting`
    - `UpdateClusterSetting`
- _Bug Fix_
  - None
- _Change_
  - None

# 3.1.38 2023-06-15

### HuaweiCloud SDK CBR

- _Features_
    - Support Cloud Backup and Recovery service.
- _Bug Fix_
    - None
- _Change_
    - None

### HuaweiCloud SDK Live

- _Features_
    - Support Live service.
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
  - **RecognizeGeneralText**
    - changes of request param
      - `+ single_orientation_mode`

### HuaweiCloud SDK SIS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ShowVocabularies**
    - changes of request param
      - `+ offset`
      - `+ limit`

# 3.1.37 2023-06-08

### HuaweiCloud SDK ECS

- _Features_
  - Support the interface `ChangeServerChargeMode`
- _Bug Fix_
  - None
- _Change_
  - **CreateServers**
    - changes of request param
      - `+ server.nics.allowed_address_pairs`
  - **CreatePostPaidServers**
    - changes of request param
      - `+ server.nics.allowed_address_pairs`

### HuaweiCloud SDK TMS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListResource**
    - changes of response param
      - `+ resources.tags`

### HuaweiCloud SDK VPC

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ShowAddressGroup**
    - changes of response param
      - `+ address_group.enterprise_project_id`
  - **UpdateAddressGroup**
    - changes of response param
      - `+ address_group.enterprise_project_id`
  - **ListAddressGroup**
    - changes of request param
      - `+ enterprise_project_id`
    - changes of response param
      - `+ address_groups.enterprise_project_id`
  - **CreateAddressGroup**
    - changes of request param
      - `+ address_group.enterprise_project_id`
    - changes of response param
      - `+ address_group.enterprise_project_id`

# 3.1.36 2023-06-01

### HuaweiCloud SDK VOD

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **CreateAssetByFileUpload**
    - changes of request param
      - `+ review.interval`
      - `+ review.politics`
      - `+ review.terrorism`
      - `+ review.porn`
  - **PublishAssetFromObs**
    - changes of request param
      - `+ review.interval`
      - `+ review.politics`
      - `+ review.terrorism`
      - `+ review.porn`
  - **CreateAssetReviewTask**
    - changes of request param
      - `+ review.interval`
      - `+ review.politics`
      - `+ review.terrorism`
      - `+ review.porn`
    - changes of response param
      - `+ review.interval`
      - `+ review.politics`
      - `+ review.terrorism`
      - `+ review.porn`
  - **UploadMetaDataByUrl**
    - changes of request param
      - `+ upload_metadatas.review.interval`
      - `+ upload_metadatas.review.politics`
      - `+ upload_metadatas.review.terrorism`
      - `+ upload_metadatas.review.porn`

### HuaweiCloud SDK VPC

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **CreateVpcPeering**
    - changes of request param
      - `+ peering.description`

# 3.1.35 2023-05-25

### HuaweiCloud SDK ECS

- _Features_
  - Support the interface `ListFlavorSellPolicies`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK EIP

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListPublicipsByTags**
    - changes of response param
      - `+ resources.resource_detail`
      - `- resources.resouce_detail`
  - **AddPublicipsIntoSharedBandwidth**
    - changes of response param
      - `+ bandwidth.enable_bandwidth_rules`
      - `+ bandwidth.rule_quota`
      - `+ bandwidth.bandwidth_rules`

### HuaweiCloud SDK VPC

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **CreateVpc**
    - changes of request param
      - `+ vpc.tags`
  - **CreateSubnet**
    - changes of request param
      - `+ subnet.tags`
    - **ShowAddressGroup**
    - changes of response param
      - `+ address_group.max_capacity`
      - `+ address_group.status`
      - `+ address_group.status_message`
  - **UpdateAddressGroup**
    - changes of request param
      - `+ address_group.max_capacity`
    - changes of response param
      - `+ address_group.max_capacity`
      - `+ address_group.status`
      - `+ address_group.status_message`
  - **ListAddressGroup**
    - changes of response param
      - `+ address_groups.max_capacity`
      - `+ address_groups.status`
      - `+ address_groups.status_message`
  - **CreateAddressGroup**
    - changes of request param
      - `+ address_group.max_capacity`
    - changes of response param
      - `+ address_group.max_capacity`
      - `+ address_group.status`
      - `+ address_group.status_message`

# 3.1.34 2023-05-18

### HuaweiCloud SDK ECS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **CreateServers**
    - changes of request param
      - `+ server.root_volume.metadata`
      - `- server.root_volume.extendparam.__system__encrypted`
      - `- server.root_volume.extendparam.__system__cmkid`
      - `+ server.data_volumes.delete_on_termination`
  - **CreatePostPaidServers**
    - changes of request param
      - `+ server.data_volumes.delete_on_termination`
      - `+ server.root_volume.metadata`
      - `- server.root_volume.extendparam.__system__encrypted`
      - `- server.root_volume.extendparam.__system__cmkid`

# 3.1.33 2023-05-11

### HuaweiCloud SDK ECS

- _Features_
  - Support the interface `NovaAttachInterface`
- _Bug Fix_
  - None
- _Change_
  - **ReinstallServerWithoutCloudInit**
    - changes of request param
      - `+ os-reinstall.metadata`
  - **ChangeServerOsWithoutCloudInit**
    - changes of request param
      - `+ os-change.metadata`
  - **ReinstallServerWithCloudInit**
    - changes of request param
      - `+ os-reinstall.metadata.__system__encrypted`
      - `+ os-reinstall.metadata.__system__cmkid`
  - **ChangeServerOsWithCloudInit**
    - changes of request param
      - `+ os-change.metadata.__system__encrypted`
      - `+ os-change.metadata.__system__cmkid`
  - **CreateServers**
    - changes of request param
      - `+ server.root_volume.extendparam.__system__encrypted`
      - `+ server.root_volume.extendparam.__system__cmkid`
  - **CreatePostPaidServers**
    - changes of request param
      - `+ server.root_volume.extendparam.__system__encrypted`
      - `+ server.root_volume.extendparam.__system__cmkid`

### HuaweiCloud SDK IMS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListImages**
    - changes of request param
      - `+ __imagetype: enum value [market]`

### HuaweiCloud SDK LTS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **UpdateAomMappingRules**
    - changes of request param
      - `* body: object<AomMappingRequestInfo> -> object<UpdateAomMappingRequest>`

# 3.1.32 2023-04-27

### HuaweiCloud SDK LTS

- _Features_
    - Support `Log Tank Service`.
- _Bug Fix_
    - None
- _Change_
    - None

### HuaweiCloud SDK CSMS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListResourceInstances**
    - changes of response param
      - `+ resources.sys_tags`

# 3.1.31 2023-04-20

### HuaweiCloud SDK OCR

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **RecognizeDriverLicense**
    - changes of response param
      - `+ result.front`
      - `+ result.back`
  - **RecognizeThailandIdcard**
    - changes of response param
      - `+ result.type`
      - `+ result.name_en`
      - `+ result.ref_number`
      - `+ result.confidence.name_en`
      - `+ result.confidence.ref_number`

### HuaweiCloud SDK VPC

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListVpcsByTags**
    - changes of response param
      - `+ resources.resource_detail`
      - `- resources.resouce_detail`
  - **ListSubnetsByTags**
    - changes of response param
      - `+ resources.resource_detail`
      - `- resources.resouce_detail`
  - **UpdateRouteTable**
    - changes of request param
      - `+ routetable.routes.add`
      - `+ routetable.routes.mod`
      - `+ routetable.routes.del`
      - `* routetable.routes: map<string, list<RouteTableRoute>> -> object<RouteTableRouteAction>`

# 3.1.30 2023-04-13

### HuaweiCloud SDK EVS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ShowVolume**
    - changes of response param
      - `+ volume.iops`
      - `+ volume.throughput`
  - **ListVolumes**
    - changes of response param
      - `+ volumes.iops`
      - `+ volumes.throughput`

### HuaweiCloud SDK SIS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **RecognizeShortAudio**
    - changes of request param
      - `+ config.property: enum value [english_8k_common,english_16k_common]`
  - **CollectTranscriberJob**
    - changes of response param
      - `+ job_id`

# 3.1.29 2023-04-06

### HuaweiCloud SDK OCR

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **RecognizeFinancialStatement**
    - changes of request param
      - `+ return_rectification_matrix`
    - changes of response param
      - `+ result.rectification_matrix`

# 3.1.28 2023-03-30

### HuaweiCloud SDK VOD

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **PublishAssetFromObs**
    - changes of request param
      - `+ video_type: enum value [RMVB,WEBM]`

# 3.1.27 2023-03-23

### HuaweiCloud SDK EPS

- _Features_
  - Support Enterprise Project Management Service.
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK TMS

- _Features_
  - Support Tag Management Service.
- _Bug Fix_
  - None
- _Change_
  - None

# 3.1.26 2023-03-16

### HuaweiCloud SDK EIP

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - **ListBandwidthPkg**
    - changes of request param
      - `+ limit`
      - `+ marker`
      - `+ offset`
  - **ListCommonPools**
    - changes of request param
      - `+ limit`
      - `+ offset`
  - **ListShareBandwidthTypes**
    - changes of request param
      - `+ marker`
      - `+ offset`

### HuaweiCloud SDK IVS

- _Features_
  - Support the interfaces `DetectStandardByVideoAndIdCardImage`, `DetectStandardByVideoAndNameAndId`
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
  - **RecognizeMvsInvoice**
    - changes of request param
      - `+ return_text_location`
      - `+ return_confidence`
      - `+ type`
    - changes of response param
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

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - Add the request parameter `extended_parameters` to the interface `RecognizeAutoClassification`

# 3.1.24 2023-03-07

### HuaweiCloud SDK VOD

- _Features_
  - Support the interface `ModifySubtitle`
- _Bug Fix_
  - None
- _Change_
  - None

# 3.1.23 2023-02-23

### HuaweiCloud SDK Core

- _Features_
  - None
- _Bug Fix_
  - Fix compile errors on linux arm64 platform
- _Change_
  - None

# 3.1.22 2023-02-16

### HuaweiCloud SDK FRS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - Add the request parameter `nod_threshold` to the interface `DetectLiveByUrl`
  - Add the request parameter `nod_threshold` to the interface `DetectLiveByUrlIntl`
  - Add the request parameter `nod_threshold` to the interface `DetectLiveByFile`
  - Add the request parameter `nod_threshold` to the interface `DetectLiveByFileIntl`
  - Add the request parameter `nod_threshold` to the interface `DetectLiveByBase64`
  - Add the request parameter `nod_threshold` to the interface `DetectLiveByBase64Intl`

# 3.1.21 2023-02-09

### HuaweiCloud SDK OCR

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - Changes of the interface `RecognizeTollInvoice`:
    - Add the request parameter `return_text_location`
    - Add the response parameter `text_location`

# 3.1.20 2023-02-02

### HuaweiCloud SDK IMS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - Add the enum values `IsoImage` to the request parameter `type` to the interface `CreateImage`

# 3.1.19 2023-01-12

### HuaweiCloud SDK FRS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - Add the request parameter `Enterprise-Project-Id` to the interface `DetectLiveByUrl`
  - Add the request parameter `Enterprise-Project-Id` to the interface `DetectLiveByUrlIntl`
  - Add the request parameter `Enterprise-Project-Id` to the interface `DetectLiveFaceByUrl`
  - Add the request parameter `Enterprise-Project-Id` to the interface `DetectLiveByFile`
  - Add the request parameter `Enterprise-Project-Id` to the interface `DetectLiveByFileIntl`
  - Add the request parameter `Enterprise-Project-Id` to the interface `DetectLiveFaceByFile`
  - Add the request parameter `Enterprise-Project-Id` to the interface `DetectLiveByBase64`
  - Add the request parameter `Enterprise-Project-Id` to the interface `DetectLiveByBase64Intl`
  - Add the request parameter `Enterprise-Project-Id` to the interface `DetectLiveFaceByBase64`
  - Add the request parameter `Enterprise-Project-Id` to the interface `SearchFaceByFaceId`
  - Add the request parameter `Enterprise-Project-Id` to the interface `DetectFaceByFile`
  - Add the request parameter `Enterprise-Project-Id` to the interface `DetectFaceByFileIntl`
  - Add the request parameter `Enterprise-Project-Id` to the interface `UpdateFace`
  - Add the request parameter `Enterprise-Project-Id` to the interface `DeleteFaceByExternalImageId`
  - Add the request parameter `Enterprise-Project-Id` to the interface `ShowFacesByLimit`
  - Add the request parameter `Enterprise-Project-Id` to the interface `CompareFaceByFile`
  - Add the request parameter `Enterprise-Project-Id` to the interface `DeleteFaceByFaceId`
  - Add the request parameter `Enterprise-Project-Id` to the interface `ShowFacesByFaceId`
  - Add the request parameter `Enterprise-Project-Id` to the interface `AddFacesByBase64`
  - Add the request parameter `Enterprise-Project-Id` to the interface `DetectFaceByUrl`
  - Add the request parameter `Enterprise-Project-Id` to the interface `DetectFaceByUrlIntl`
  - Add the request parameter `Enterprise-Project-Id` to the interface `DeleteFaceSet`
  - Add the request parameter `Enterprise-Project-Id` to the interface `ShowFaceSet`
  - Add the request parameter `Enterprise-Project-Id` to the interface `CompareFaceByBase64`
  - Add the request parameter `Enterprise-Project-Id` to the interface `DetectFaceByBase64`
  - Add the request parameter `Enterprise-Project-Id` to the interface `DetectFaceByBase64Intl`
  - Add the request parameter `Enterprise-Project-Id` to the interface `CreateFaceSet`
  - Add the request parameter `Enterprise-Project-Id` to the interface `ShowAllFaceSets`
  - Add the request parameter `Enterprise-Project-Id` to the interface `SearchFaceByFile`
  - Add the request parameter `Enterprise-Project-Id` to the interface `AddFacesByUrl`
  - Add the request parameter `Enterprise-Project-Id` to the interface `AddFacesByFile`
  - Add the request parameter `Enterprise-Project-Id` to the interface `SearchFaceByUrl`
  - Add the request parameter `Enterprise-Project-Id` to the interface `SearchFaceByBase64`
  - Add the request parameter `Enterprise-Project-Id` to the interface `CompareFaceByUrl`
  - Add the request parameter `Enterprise-Project-Id` to the interface `BatchDeleteFaces`

### HuaweiCloud SDK IVS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - Add the request parameter `Enterprise-Project-Id` to the interface `DetectStandardByIdCardImage`
  - Add the request parameter `Enterprise-Project-Id` to the interface `DetectStandardByNameAndId`
  - Add the request parameter `Enterprise-Project-Id` to the interface `DetectExtentionByNameAndId`
  - Add the request parameter `Enterprise-Project-Id` to the interface `DetectExtentionByIdCardImage`

### HuaweiCloud SDK OCR

- _Features_
  - Support the interface `RecognizeCustomTemplate`
- _Bug Fix_
  - None
- _Change_
  - Changes of the interface `RecognizeGeneralTable`:
    - Add the request parameters `return_char_location`, `return_rectification_matrix`
    - Add the response parameter `char_list`
  - Add the request parameter `language` to the interface `RecognizeGeneralText`
  - Changes of the interface `RecognizeWebImage`:
    - Add the response parameter `extracted_data`
    - Remove the response parameters `extracted_data`, `contact_info`, `image_size`, `height`, `width`, `name`, `phone`, `province`, `city`, `district`, `detail_address`

# 3.1.18 2023-01-05

### HuaweiCloud SDK VPC

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - Changes of the interface `ListPorts`:
    - Add the request parameter `security_groups`
    - Modify the type `string` -> `array` of the request parameter `fixed_ips`

# 3.1.17 2022-12-29

### HuaweiCloud SDK EIP

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - Add the request parameter `extendParam` to the interface `ChangeBandwidthToPeriod`
  - Add the request parameter `extendParam` to the interface `ChangePublicipToPeriod`
  - Changes of the interface `ListBandwidthPkg`:
    - Add the response parameter `tenantId`
    - Remove the response parameter `tenant_id`
  - The request parameter `associate_instance_type`, `associate_instance_id` changed to required of the interface `UpdateAssociatePublicip`
  - The request parameter `associate_instance_type`, `associate_instance_id` changed to required of the interface `AssociatePublicips`

### HuaweiCloud SDK IMS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - Add the response parameters `sub_jobs_result`, `sub_jobs_list` to the interface `ShowJob`
  - Add the response parameters `sub_jobs_result`, `sub_jobs_list` to the interface `ShowJobProgress`

### HuaweiCloud SDK VOD

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - The request parameter `name` changed to not required of the interface `UpdateTranscodeTemplate`
  - Changes of the interface `UpdateTemplateGroupCollection`:
    - The request parameter `collection_id` changed to required
    - The request parameter `name`, `template_group_list` changed to not required

### HuaweiCloud SDK VPC

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - Add the response parameters `tenant_id`, `created_at`, `updated_at` to the interface `ListVpcs`
  - Add the response parameters `tenant_id`, `created_at`, `updated_at` to the interface `CreateVpc`
  - Add the response parameters `tenant_id`, `created_at`, `updated_at` to the interface `ShowVpc`
  - Add the response parameters `tenant_id`, `created_at`, `updated_at` to the interface `UpdateVpc`
  - Add the response parameters `tenant_id`, `created_at`, `updated_at` to the interface `ListSubnets`
  - Add the response parameters `tenant_id`, `created_at`, `updated_at` to the interface `CreateSubnet`
  - Add the response parameters `tenant_id`, `created_at`, `updated_at` to the interface `ShowSubnet`
  - Add the response parameters `created_at`, `updated_at` to the interface `ListRouteTables`
  - Add the response parameters `created_at`, `updated_at` to the interface `CreateRouteTable`
  - Add the response parameters `created_at`, `updated_at` to the interface `ShowRouteTable`
  - Add the response parameters `created_at`, `updated_at` to the interface `UpdateRouteTable`
  - Add the response parameters `created_at`, `updated_at` to the interface `AssociateRouteTable`
  - Add the response parameters `created_at`, `updated_at` to the interface `DisassociateRouteTable`

# 3.1.16 2022-12-26

### HuaweiCloud SDK VOD

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - The request parameter `group_id`, `name`, `bitrate`, `frame_rate`, `video_codec`, `format`, `hls_interval` changed to required of the interface `UpdateTranscodeTemplate`
  - The response parameter `bitrate`, `frame_rate`, `video_codec`, `format`, `hls_interval` changed to required of the interface `ListTranscodeTemplate`
  - The request parameter `name`, `bitrate`, `frame_rate`, `video_codec`, `format`, `hls_interval` changed to required of the interface `CreateTranscodeTemplate`
  - The request parameter `name`, `template_group_list` changed to required of the interface `UpdateTemplateGroupCollection`
  - The request parameter `name`, `template_group_list` changed to required of the interface `CreateTemplateGroupCollection`

# 3.1.15 2022-12-22

### HuaweiCloud SDK IMS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - Add the request parameter `vault_id` to the interface `CopyImageCrossRegion`

# 3.1.14 2022-12-19

### HuaweiCloud SDK ECS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - Add the request parameter `server_id` to the interface `ListServersDetails`

### HuaweiCloud SDK EIP

- _Features_
  - Support the interfaces `ShowResourcesJobDetail`, `ChangeBandwidthToPeriod`, `ChangePublicipToPeriod`
- _Bug Fix_
  - None
- _Change_
  - None

# 3.1.13 2022-12-15

### HuaweiCloud SDK ECS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - Add the request parameter `server_id` to the interface `ListServersDetails`

### HuaweiCloud SDK EIP

- _Features_
  - Support the interfaces `ShowResourcesJobDetail`, `ChangeBandwidthToPeriod`, `ChangePublicipToPeriod`
- _Bug Fix_
  - None
- _Change_
  - None

# 3.1.12 2022-12-08

### HuaweiCloud SDK EIP

- _Features_
  - Support the following interfaces：
    - `ListBandwidthPkg`
    - `CountPublicIp`
    - `ShowPublicIpType`
    - `CountPublicIpInstance`
    - `BatchCreatePublicips`
    - `BatchDeletePublicIp`
    - `BatchDisassociatePublicips`
    - `CountEipAvailableResources`
- _Bug Fix_
  - None
- _Change_
  - Remove the enum values `` from the request parameter `associate_instance_type` from the interface `AssociatePublicips`
  - Remove the enum values `` from the request parameter `associate_instance_type` from the interface `UpdateAssociatePublicip`

# 3.1.11 2022-11-30

### HuaweiCloud SDK EIP

- _Features_
  - Support the interfaces `DisassociatePublicips`, `AssociatePublicips`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK SIS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - Add the enum values `chinese_8k_general` to the request parameter `property` to the interface `PushTranscriberJobs`
  - Add the enum values `chinese_huaxiaoru_common`, `chinese_huaxiaohan_common`, `chinese_huaxiaoning_common`, `chinese_huaxiaozhen_common`, `english_alvin_common`, `english_amy_common` to the request parameter `property` to the interface `RunTts`

# 3.1.10 2022-11-24

### HuaweiCloud SDK OCR

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - Add the response parameter `test_interval` to the interface `RecognizeHealthCode`

# 3.1.9 2022-11-17

### HuaweiCloud SDK ECS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - Modify the type `string` -> `enum` of the request parameter `monitorMetrics` of the interface `RegisterServerMonitor`

### HuaweiCloud SDK EIP

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - Add the enum values `VPN` to the request parameter `associate_instance_type` to the interface `DisassociatePublicips`
  - Add the enum values `VPN` to the request parameter `associate_instance_type` to the interface `AssociatePublicips`

### HuaweiCloud SDK OCR

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - Add the request parameter `Enterprise-Project-Id` to the interface `RecognizeGeneralTable`
  - Add the request parameter `Enterprise-Project-Id` to the interface `RecognizeVatInvoice`
  - Add the request parameter `Enterprise-Project-Id` to the interface `RecognizeInvoiceVerification`
  - Add the request parameter `Enterprise-Project-Id` to the interface `RecognizeGeneralText`
  - Add the request parameter `Enterprise-Project-Id` to the interface `RecognizeWebImage`
  - Add the request parameter `Enterprise-Project-Id` to the interface `RecognizeHealthCode`
  - Add the request parameter `Enterprise-Project-Id` to the interface `RecognizeQuotaInvoice`
  - Add the request parameter `Enterprise-Project-Id` to the interface `RecognizeIdCard`
  - Add the request parameter `Enterprise-Project-Id` to the interface `RecognizeHandwriting`
  - Add the request parameter `Enterprise-Project-Id` to the interface `RecognizeVehicleLicense`
  - Add the request parameter `Enterprise-Project-Id` to the interface `RecognizeTransportationLicense`
  - Add the request parameter `Enterprise-Project-Id` to the interface `RecognizeTaxiInvoice`
  - Add the request parameter `Enterprise-Project-Id` to the interface `RecognizeAutoClassification`
  - Add the request parameter `Enterprise-Project-Id` to the interface `RecognizeTollInvoice`
  - Add the request parameter `Enterprise-Project-Id` to the interface `RecognizeMvsInvoice`
  - Add the request parameter `Enterprise-Project-Id` to the interface `RecognizeLicensePlate`
  - Add the request parameter `Enterprise-Project-Id` to the interface `RecognizeFlightItinerary`
  - Add the request parameter `Enterprise-Project-Id` to the interface `RecognizeBusinessLicense`
  - Add the request parameter `Enterprise-Project-Id` to the interface `RecognizeDriverLicense`
  - Add the request parameter `Enterprise-Project-Id` to the interface `RecognizeBusinessCard`
  - Add the request parameter `Enterprise-Project-Id` to the interface `RecognizeTrainTicket`
  - Add the request parameter `Enterprise-Project-Id` to the interface `RecognizeVin`
  - Add the request parameter `Enterprise-Project-Id` to the interface `RecognizePassport`
  - Add the request parameter `Enterprise-Project-Id` to the interface `RecognizeBankcard`
  - Add the request parameter `Enterprise-Project-Id` to the interface `RecognizeInsurancePolicy`
  - Add the request parameter `Enterprise-Project-Id` to the interface `RecognizeFinancialStatement`
  - Add the request parameter `Enterprise-Project-Id` to the interface `RecognizeQualificationCertificate`
  - Add the request parameter `Enterprise-Project-Id` to the interface `RecognizeThailandIdcard`
  - Add the request parameter `Enterprise-Project-Id` to the interface `RecognizeMyanmarIdcard`
  - Changes of the interface `RecognizeMyanmarDriverLicense`:
    - Add the request parameter `Enterprise-Project-Id`
    - Add the response parameters `birth`, `birth`
    - Remove the response parameters `Birth`, `Birth`
  - Add the request parameter `Enterprise-Project-Id` to the interface `RecognizeChileIdCard`
  - Add the request parameter `Enterprise-Project-Id` to the interface `RecognizeThailandLicensePlate`
  - Add the request parameter `Enterprise-Project-Id` to the interface `RecognizeWaybillElectronic`
  - Add the request parameter `Enterprise-Project-Id` to the interface `RecognizePcrTestRecord`
  - Changes of the interface `RecognizeIdDocument`:
    - Add the request parameter `Enterprise-Project-Id`
    - Modify the type `object` -> `object` of the response parameter `result`
  - Add the request parameter `Enterprise-Project-Id` to the interface `RecognizeHkIdCard`
  - Add the request parameter `Enterprise-Project-Id` to the interface `RecognizeCambodianIdCard`
  - Add the request parameter `Enterprise-Project-Id` to the interface `RecognizeExitEntryPermit`
  - Add the request parameter `Enterprise-Project-Id` to the interface `RecognizeMainlandTravelPermit`
  - Add the request parameter `Enterprise-Project-Id` to the interface `RecognizeMacaoIdCard`

### HuaweiCloud SDK VPC

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - Changes of the interface `CreateSubnet`:
    - Add the enum values `addresstime` to the request parameter `opt_name`
    - Add the enum values `addresstime` to the response parameter `opt_name`
  - Add the enum values `addresstime` to the response parameter `opt_name` to the interface `ListSubnets`
  - Add the enum values `addresstime` to the response parameter `opt_name` to the interface `ShowSubnet`
  - Add the enum values `addresstime` to the request parameter `opt_name` to the interface `UpdateSubnet`

# 3.1.8 2022-11-14

### HuaweiCloud SDK CSMS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - Add the response parameter `sys_tags` to the interface `ListSecretTags`

# 3.1.7 2022-11-03

### HuaweiCloud SDK ECS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - The request parameter `destination_type` changed to not required of the interface `NovaCreateServers`

### HuaweiCloud SDK OCR

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - Changes of the interface `RecognizeGeneralText`:
    - Add the request parameter `character_mode`
    - Add the response parameters `confidence`, `char_list`
  - Changes of the interface `RecognizeThailandIdcard`:
    - Add the request parameter `return_text_location`
    - Add the response parameter `text_location`

# 3.1.6 2022-11-02

### HuaweiCloud SDK ECS

- _Features_
  - Support the interfaces `UpdateServerBlockDevice`, `RegisterServerMonitor`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK SIS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - Add the enum values `sichuan_8k_common` to the request parameter `property` to the interface `PushTranscriberJobs`
  - Add the enum values `chinese_huaxiaolong_common`, `chinese_huaxiaorui_common` to the request parameter `property` to the interface `RunTts`

# 3.1.5 2022-10-27

### HuaweiCloud SDK ECS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - Add the request parameters `X-Client-Token`, `batch_create_in_multi_az` to the interface `CreateServers`
  - Add the request parameter `X-Client-Token` to the interface `CreatePostPaidServers`

### HuaweiCloud SDK IMS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - Add the enum values `market` to the request parameter `__imagetype` to the interface `ListTags`
  - Changes of the interface `GlanceListImages`:
    - Add the enum values `market` to the request parameter `__imagetype`
    - Add the enum values `market` to the response parameter `__imagetype`
  - Add the enum values `market` to the response parameter `__imagetype` to the interface `GlanceShowImage`
  - Add the enum values `market` to the response parameter `__imagetype` to the interface `GlanceUpdateImage`

# 3.1.4 2022-09-28

### HuaweiCloud SDK OCR

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - Add the response parameters `type`, `idcard_number`, `phone_number`, `province`, `city`, `vaccination_status`, `pcr_test_result`, `pcr_test_organization`, `pcr_test_time`, `pcr_sampling_time`, `reached_city` to the interface `RecognizeHealthCode`

# 3.1.3 2022-09-22

### HuaweiCloud SDK EIP

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - Add the request parameter `port_id` to the interface `CreatePublicip`
  - Add the request parameter `port_id` to the interface `CreatePrePaidPublicip`

### HuaweiCloud SDK OCR

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - Changes of the interface `RecognizeIdCard`:
    - Add the request parameter `detect_copy`
    - Add the response parameter `detect_copy_result`

### HuaweiCloud SDK VOD

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - Add the response parameters `pack_type`, `pack_type` to the interface `PublishAssets`
  - Add the response parameters `pack_type`, `pack_type` to the interface `UnpublishAssets`
  - Add the response parameters `pack_type`, `pack_type` to the interface `ShowAssetMeta`
  - Add the response parameters `pack_type`, `pack_type` to the interface `ShowAssetDetail`
  - Add the response parameters `pack_type`, `pack_type` to the interface `ShowTakeOverTaskDetails`
  - Add the response parameters `pack_type`, `pack_type` to the interface `ShowTakeOverAssetDetails`

# 3.1.2 2022-09-15

### HuaweiCloud SDK EVS

- _Features_
  - Support the following interfaces：
    - `ShowVersion`
    - `ListVersions`
    - `CinderShowVolumeTransfer`
    - `CinderDeleteVolumeTransfer`
    - `CinderListVolumeTransfers`
    - `CinderCreateVolumeTransfer`
    - `CinderAcceptVolumeTransfer`
- _Bug Fix_
  - None
- _Change_
  - None

# 3.1.1 2022-09-08

### HuaweiCloud SDK EVS

- _Features_
  - Support the following interfaces：
    - `ShowVersion`
    - `ListVersions`
    - `CinderShowVolumeTransfer`
    - `CinderDeleteVolumeTransfer`
    - `CinderListVolumeTransfers`
    - `CinderCreateVolumeTransfer`
    - `CinderAcceptVolumeTransfer`
- _Bug Fix_
  - None
- _Change_
  - None

# 3.0.43-rc 2022-08-29

### HuaweiCloud SDK ECS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - Add the request parameter `batch_create_in_multi_az` to the interface `CreatePostPaidServers`

### HuaweiCloud SDK IMS

- _Features_
  - Support the interface `ShowJobProgress`
- _Bug Fix_
  - None
- _Change_
  - None

# 3.0.42-beta 2022-08-25

### HuaweiCloud SDK OCR

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - Changes of the interface `RecognizeWebImage`:
    - Add the request parameter `detect_font`
    - Add the response parameters `font_list`, `font_scores`

### HuaweiCloud SDK VOD

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - Modify the type `int32` -> `int64` of the request parameter `size` of the interface `CheckMd5Duplication`

# 3.0.41-beta 2022-08-18

### HuaweiCloud SDK ECS

- _Features_
  - Support the interface `ListServersByTag`
- _Bug Fix_
  - None
- _Change_
  - The request parameter `destination_type` changed to required of the interface `NovaCreateServers`

### HuaweiCloud SDK OCR

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - Changes of the interface `RecognizeIdCard`:
    - Add the request parameter `detect_reproduce`
    - Add the response parameter `detect_reproduce_result`

### HuaweiCloud SDK VOD

- _Features_
  - Support the following interfaces：
    - `ListTranscodeTemplate`
    - `UpdateTranscodeTemplate`
    - `CreateTranscodeTemplate`
    - `DeleteTranscodeTemplate`
    - `ListTemplateGroupCollection`
    - `UpdateTemplateGroupCollection`
    - `CreateTemplateGroupCollection`
    - `DeleteTemplateGroupCollection`
- _Bug Fix_
  - None
- _Change_
  - None

# 3.0.40-beta 2022-08-11

### HuaweiCloud SDK CSMS

- _Features_
  - Support the interfaces `UploadSecretBlob`, `DownloadSecretBlob`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK OCR

- _Features_
  - Support the interface `RecognizeMacaoIdCard`
- _Bug Fix_
  - None
- _Change_
  - None

# 3.0.39-beta 2022-08-02

### HuaweiCloud SDK SIS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - Add the enum values `auto` to the request parameter `audio_format` to the interface `RecognizeShortAudio`

# 3.0.38-beta 2022-07-28

### HuaweiCloud SDK DRS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - The request parameter `db_type`, `db_type`, `key`, `value`, `key`, `value` changed to not required of the interface `BatchCreateJobs`
  - The request parameter `id`, `object_type`, `object_name` changed to not required of the interface `BatchSetObjects`
  - The request parameter `name`, `alarm_to_user`, `db_type`, `db_type`, `node_type`, `engine_type`, `net_type`, `store_db_info`, `key`, `value` changed to not required of the interface `BatchUpdateJob`
  - The response parameter `db_type`, `db_type`, `db_type`, `db_type` changed to not required of the interface `BatchListJobDetails`
  - The request parameter `id`, `select` changed to not required of the interface `BatchChangeData`

# 3.0.37-beta 2022-07-21

### HuaweiCloud SDK VPC

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - Add the response parameter `security_group_rules_links` to the interface `NeutronListSecurityGroupRules`

# 3.0.36-beta 2022-07-14

### HuaweiCloud SDK EIP

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - Modify the type `date-time` -> `string` of the response parameter `create_time` of the interface `ListPublicips`
  - Modify the type `date-time` -> `string` of the response parameter `create_time` of the interface `ShowPublicip`

### HuaweiCloud SDK VPC

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - Add the response parameters `port_filter`, `ovs_hybrid_plug` to the interface `ListPorts`
  - Add the response parameters `port_filter`, `ovs_hybrid_plug` to the interface `UpdatePort`
  - Add the response parameters `port_filter`, `ovs_hybrid_plug` to the interface `ShowPort`
  - Add the response parameter `remote_address_group_id` to the interface `CreateSecurityGroup`
  - Add the response parameter `remote_address_group_id` to the interface `ListSecurityGroups`
  - Add the response parameter `remote_address_group_id` to the interface `ShowSecurityGroup`
  - Add the response parameter `remote_address_group_id` to the interface `ListSecurityGroupRules`
  - Add the response parameter `remote_address_group_id` to the interface `ShowSecurityGroupRule`
  - Add the response parameter `remote_address_group_id` to the interface `NeutronListSecurityGroups`
  - Add the response parameter `remote_address_group_id` to the interface `NeutronUpdateSecurityGroup`
  - Add the response parameter `remote_address_group_id` to the interface `NeutronShowSecurityGroup`
  - Add the response parameter `remote_address_group_id` to the interface `NeutronListSecurityGroupRules`
  - Add the response parameter `remote_address_group_id` to the interface `NeutronShowSecurityGroupRule`

# 3.0.35-beta 2022-07-07

### HuaweiCloud SDK OCR

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - Add the response parameter `title` to the interface `RecognizeVatInvoice`

### HuaweiCloud SDK SIS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - Add the enum values `chinese_16k_travel` to the request parameter `property` to the interface `RecognizeShortAudio`
  - Add the enum values `chinese_16k_media` to the request parameter `property` to the interface `PushTranscriberJobs`
  - Add the response parameter `audio_duration` to the interface `CollectTranscriberJob`
  - Add the enum values `chinese_huaxiaomei_common`, `chinese_huaxiaofei_common` to the request parameter `property` to the interface `RunTts`

# 3.0.34-beta 2022-06-30

### HuaweiCloud SDK OCR

- _Features_
  - Support the interfaces `RecognizeHkIdCard`, `RecognizeCambodianIdCard`, `RecognizeExitEntryPermit`, `RecognizeMainlandTravelPermit`
- _Bug Fix_
  - None
- _Change_
  - Modify the type `int32` -> `float` of the response parameter `direction` of the interface `RecognizeGeneralText`

# 3.0.33-beta 2022-06-19

### HuaweiCloud SDK OCR

- _Features_
  - Support the interface `RecognizeIdDocument`
- _Bug Fix_
  - None
- _Change_
  - None

# 3.0.32-beta 2022-06-02

### HuaweiCloud SDK OCR

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - Add the response parameters `words_block_count`, `words_block_list` to the interface `RecognizeHealthCode`
  - Modify the type `float` -> `object` of the response parameter `confidence` of the interface `RecognizePcrTestRecord`

# 3.0.31-beta 2022-05-26

### HuaweiCloud SDK ECS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - Add the request parameters `volume_type`, `hw:passthrough` to the interface `AttachServerVolume`

# 3.0.30-beta 2022-05-19

### HuaweiCloud SDK ECS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - Add the request parameter `dry_run` to the interface `ResizeServer`
  - Add the request parameter `dry_run` to the interface `ResizePostPaidServer`
  - Add the request parameter `dry_run` to the interface `AttachServerVolume`

### HuaweiCloud SDK VOD

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - Add the enum values `M3U8` to the request parameter `video_type` to the interface `UploadMetaDataByUrl`
  - Add the response parameter `sign_url` to the interface `PublishAssets`
  - Add the response parameter `sign_url` to the interface `UnpublishAssets`
  - Add the response parameter `sign_url` to the interface `ShowAssetMeta`
  - Add the response parameter `sign_url` to the interface `ShowAssetDetail`
  - Add the response parameter `sign_url` to the interface `ShowTakeOverTaskDetails`
  - Add the response parameter `sign_url` to the interface `ShowTakeOverAssetDetails`

### HuaweiCloud SDK VPC

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - Add the enum values `neutron:VIP_PORT`, Remove the enum values `network:VIP_PORT` from the response parameter `device_owner` to the interface `ListPorts`
  - Add the enum values `neutron:VIP_PORT`, Remove the enum values `network:VIP_PORT` from the response parameter `device_owner` to the interface `UpdatePort`
  - Add the enum values `neutron:VIP_PORT`, Remove the enum values `network:VIP_PORT` from the response parameter `device_owner` to the interface `ShowPort`

# 3.0.29-beta 2022-05-12

### HuaweiCloud SDK FRS

- _Features_
  - Support the following interfaces:
    - `DetectLiveByUrlIntl`
    - `DetectLiveByFileIntl`
    - `DetectLiveByBase64Intl`
    - `DetectFaceByFileIntl`
    - `DetectFaceByUrlIntl`
    - `DetectFaceByBase64Intl`
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK OCR

- _Features_
  - Support the interface `RecognizeHealthCode`
- _Bug Fix_
  - None
- _Change_
  - None

# 3.0.28-beta 2022-04-28

### HuaweiCloud SDK OCR

- _Features_
  - None
- _Bug Fix_
  - Fix the problem that the response body's type of the interface `RecognizeMyanmarDriverLicense` is incorrect.
- _Change_
  - None

# 3.0.27-beta 2022-04-14

### HuaweiCloud SDK CSMS

- _Features_
  - Support the `Cloud Secret Management Service`.
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK ECS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - Add the request parameter `ip_eq` to the interface `ListServersDetails`

# 3.0.26-beta 2022-04-07

### HuaweiCloud SDK OCR

- _Features_
  - Support the interface `RecognizeWaybillElectronic`
- _Bug Fix_
  - None
- _Change_
  - Add the response parameter `print_code` to the interface `RecognizeVatInvoice`
  - Changes of the interface `RecognizeVehicleLicense`:
    - Add the request parameter `return_text_location`
    - Add the response parameter `text_location`
  - Changes of the interface `RecognizeTaxiInvoice`:
    - Add the request parameter `return_text_location`
    - Add the response parameter `text_location`
  - Add the response parameters `type`, `accumulated_scores`, `status`, `generation_date`, `current_time` to the interface `RecognizeDriverLicense`
  - Changes of the interface `RecognizeTrainTicket`:
    - Add the request parameter `return_text_location`
    - Add the response parameter `text_location`
  - Changes of the interface `RecognizeBankcard`:
    - Add the request parameter `return_text_location`
    - Add the response parameter `text_location`

# 3.0.25-beta 2022-03-25

### HuaweiCloud SDK IMS

- _Features_
  - Support the interfaces `ListVersions`, `ShowVersion`
- _Bug Fix_
  - None
- _Change_
  - The request parameter `os_type` changed to not required of the interface `CreateDataImage`

### HuaweiCloud SDK OCR

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - Changes of the interface `RecognizeVatInvoice`:
    - Add the request parameter `return_text_location`
    - Add the response parameter `text_location`
  - Changes of the interface `RecognizeIdCard`:
    - Add the request parameter `return_text_location`
    - Add the response parameter `text_location`
  - Changes of the interface `RecognizeDriverLicense`:
    - Add the request parameter `return_text_location`
    - Add the response parameter `text_location`

# 3.0.24-beta 2022-03-07

### HuaweiCloud SDK EIP

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - Modify the type of the request parameter `ip_version` of the interface `CreatePrePaidPublicip`: `integer` -> `enum`

# 3.0.23-beta 2022-02-25

### HuaweiCloud SDK VOD

- _Features_
  - Support the interface `ListDomainLogs`
- _Bug Fix_
  - None
- _Change_
  - Add the request parameter `delete_type` to the interface `DeleteAssets`

### HuaweiCloud SDK VPC

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - Add the response parameter `subnetpool_id` to the interface `NeutronListSubnets`

# 3.0.22-beta 2022-01-10

### HuaweiCloud SDK ECS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - Add the request parameter `delete_on_termination` to the interface `CreateServers`

### HuaweiCloud SDK FunctionGraph

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - Changes of the interface `UpdateFunctionConfig`:
    - Add the request parameter `is_stateful_function`
    - Add the response parameter `is_stateful_function`

### HuaweiCloud SDK IMS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - The response parameter `active_at` changed to not required of the interface `GlanceListImages`
  - The response parameter `active_at` changed to not required of the interface `GlanceShowImage`
  - The response parameter `active_at` changed to not required of the interface `GlanceUpdateImage`

# 3.0.21-beta 2021-12-25

### HuaweiCloud SDK ECS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - Remove the response parameter `updated_at` from the interface `NovaListServerActions`

# 3.0.20-beta 2021-12-17

### HuaweiCloud SDK OCR

- _Features_
  - Support the following interfaces??
    - `RecognizeThailandIdcard`
    - `RecognizeMyanmarIdcard`
    - `RecognizeMyanmarDriverLicense`
    - `RecognizeChileIdCard`
    - `RecognizeThailandLicensePlate`
- _Bug Fix_
  - None
- _Change_
  - None

# 3.0.19-beta 2021-12-10

### HuaweiCloud SDK FRS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - Remove the response parameters `landmark`, `gender`, `yaw_angle`, `roll_angle`, `pitch_angle`, `headpose`, `smile`, `skin`, `ethnic` from the interface `DetectFaceByFile`
  - Remove the response parameters `landmark`, `gender`, `yaw_angle`, `roll_angle`, `pitch_angle`, `headpose`, `smile`, `skin`, `ethnic` from the interface `DetectFaceByUrl`
  - Remove the response parameters `landmark`, `gender`, `yaw_angle`, `roll_angle`, `pitch_angle`, `headpose`, `smile`, `skin`, `ethnic` from the interface `DetectFaceByBase64`

# 3.0.18-beta 2021-11-29

### HuaweiCloud SDK EVS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - Remove the interface `CinderExportToImage`.

### HuaweiCloud SDK ECS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - Add the response parameter `os:scheduler_hints` to the interfaces `NovaShowServer` and `NovaListServersDetails`.

# 3.0.17-beta 2021-11-25

### HuaweiCloud SDK Core

- _Features_
  - Supports region management. When creating a new client, users can get region information through Region input or {Service}Region valueOf, without having to configure the endpoint by themselves. After the Region is configured, it supports automatic backfilling of ProjectId/DomainId.
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK EIP

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - Add the request and response parameter `alias` to the interfaces `CreatePrePaidPublicip` and `CreatePublicip`.
  - Add the response parameter `alias` to the interfaces `ShowPublicip` and `UpdatePublicip`.

### HuaweiCloud SDK OCR

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - Remove the response parameter `extracted_data` of the interface `RecognizeHandwriting`.

### HuaweiCloud SDK SIS

- _Features_
  - Support the `Voice Interaction Service`.
- _Bug Fix_
  - None
- _Change_
  - None

# 3.0.16-beta 2021-11-12

### HuaweiCloud SDK IMS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - Add the response parameter `results` to the interface `ShowJob`.

### HuaweiCloud SDK OCR

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - Add the response parameter `confidence` to the interface `RecognizeGeneralTable`.

### HuaweiCloud SDK VPC

- _Features_
  - Support interfaces(V3): `AddVpcExtendCidr`??`RemoveVpcExtendCidr`??`ListVpcs`??`ShowVpc`
- _Bug Fix_
  - None
- _Change_
  - None

# 3.0.15-beta 2021-10-25

### HuaweiCloud SDK EIP

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - Add the request parameter `bandwidth_type` to the interface `CreateSharedBandwidth`.

### HuaweiCloud SDK FRS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - Add the request parameter `single` to the interfaces `AddFacesByFile`, `AddFacesByBase64` and `AddFacesByUrl`.

### HuaweiCloud SDK IMS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - Add the response parameters `current_task`, `image_name` and `process_percent` to the interface `ShowJob`.

### HuaweiCloud SDK OCR

- _Features_
  - Support the interfaces `RecognizeInsurancePolicy`, `RecognizeFinancialStatement` and `RecognizeQualificationCertificate`.
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK SDRS

- _Features_
  - Support the `Storage Disaster Recovery Service`.
- _Bug Fix_
  - None
- _Change_
  - None

# 3.0.14-beta 2021-10-19

### HuaweiCloud SDK EIP

- _Features_
  - Support the following interfaces:
    - `ListCommonPools`
    - `ListPublicBorderGroups`
    - `ListPublicipPool`
    - `ShowPublicipPool`
    - `ListShareBandwidthTypes`
- _Bug Fix_
  - None
- _Change_
  - Add the request parameter `allow_share_bandwidth_type_any` to the interface `ListPublicips`.
  - Modify the type of the request parameter `limit` of the interface `NeutronListFloatingIps`.
  - Modify the name of the request body of the interface `NeutronUpdateFloatingIp`: `floatingip` -> `NeutronUpdateFloatingIpRequestBody`
  - Add the response parameter `allow_share_bandwidth_types` to the interface `ShowPublicip`.

# 3.0.13-beta 2021-10-11

### HuaweiCloud SDK ECS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - Set the request parameter `reverse_binding` to `optional` of the interface `DisassociateServerVirtualIp`.

### HuaweiCloud SDK FRS

- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - Modify the optional value to `2,4,6,7,8,11,12,13,21` of the request parameter `attributes` of the interfaces `DetectFaceByFile`,`DetectFaceByBase64` and `DetectFaceByUrl`.

# 3.0.12-beta 2021-09-29

### HuaweiCloud SDK ECS

- _Features_
  - Support the following interfaces:
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
- _Bug Fix_
  - None
- _Change_
  - None

# 3.0.11-beta 2021-09-24

### HuaweiCloud SDK IVS

- _Features_
  - Support the service `Identity Verification Solution`.
- _Bug Fix_
  - None
- _Change_
  - None

# 3.0.10-beta 2021-09-16

### HuaweiCloud SDK IMS
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - Add the optional request parameter `__support_amd` to the interface `CreateDataImage`.
  - Add the response parameter `__support_amd` to the interface `ListImages`.

### HuaweiCloud SDK OCR
- _Features_
  - Support the interface `RecognizeInvoiceVerification`.
- _Bug Fix_
  - None
- _Change_
  - None

# 3.0.9-beta 2021-09-10

### HuaweiCloud SDK EVS
- _Features_
  - None
- _Bug Fix_
  - None
- _Change_
  - Set the request parameter `size` of the interface `CreateVolume` to `required`.

### HuaweiCloud SDK FRS

- _Features_
  - Support `Face Recognition Service`.
- _Bug Fix_
  - None
- _Change_
  - None

### HuaweiCloud SDK OCR

- _Features_
    - Support service `Optical Character Recognition` .
- _Bug Fix_
    - None
- _Change_
    - None

### HuaweiCloud SDK VOD

- _Features_
  - Support service `Video on Demand`.
- _Bug Fix_
  - None
- _Change_
  - None


# 3.0.8-beta 2021-03-19

### HuaweiCloud SDK ECS

- _Features_
    - None
- _Bug Fix_
    - Fix the problem of deserialization failure of response body of interface `ListFlavors`.
- _Change_
    - None

# 3.0.7-beta 2021-03-15

### HuaweiCloud SDK ECS

- _Features_
    - Support more interface: `ShowServerGroup`.
- _Bug Fix_
    - None
- _Change_
    - Change the interface name from `ShowWindowsServerPassword` to `ShowServerPassword`.
    - Change the interface name from `DeleteWindowsServerPassword` to `DeleteServerPassword`.

### HuaweiCloud SDK IAM

- _Features_
    - Support more interfaces:
        - `KeystoneShowIdentityProvider`
        - `KeystoneCreateIdentityProvider`
        - `KeystoneUpdateIdentityProvider`
        - `KeystoneDeleteIdentityProvider`
        - `CreateTokenWithIdToken`
- _Bug Fix_
    - None
- _Change_
    - Do not support interface `CreateUnscopeTokenByIdpInitiated` anymore.

### HuaweiCloud SDK IMS

- _Features_
    - Support more interfaces:
        - `ListImageByTags` which mead list images queried by tags.
        - `ListImagesTags` which means list all tags of all images in current account.
        - `ListImageTags` which means list all tags of specified image.
        - `AddImageTag`
        - `DeleteImageTag`
- _Bug Fix_
    - None
- _Change_
    - None

# 3.0.6-beta 2021-02-27

### HuaweiCloud SDK Core

- _Features_
    - None
- _Bug Fix_
    - None
- _Change_
    - Optimize the description of `README` and the format of `CHANGELOG`.

# 3.0.5-beta 2021-02-07

### HuaweiCloud SDK IMS

- _Features_
    - None
- _Bug Fix_
    - None
- _Change_
    - Interface `ListOsVersions` adjustment: change the data type of `os_bit` which is the property of response of the
      interface from string to integer.

# 3.0.4-beta 2021-01-30

### HuaweiCloud SDK ECS

- _Features_
    - None
- _Bug Fix_
    - None
- _Change_
    - Change interface name from `UpdateAutoTerminateTimeServer` to `UpdateServerAutoTerminateTime`.

### HuaweiCloud SDK EVS

- _Features_
    - None
- _Bug Fix_
    - None
- _Change_
    - Interface `CinderCreateVolume` is supported to specify the id of dedicated storage pool using
      property `OS-SCH-HNT:scheduler_hints`.
    - Modify property type of `allocated` of class `QuotaDetails` from `String` to `Integer`.

# 3.0.3-beta 2021-01-25

### HuaweiCloud SDK Core

- _Features_
    - None
- _Bug Fix_
    - Support using default config.
- _Change_
    - The default value of `ConnectionTimeout` is set to 60 seconds.
    - The default value of `ReadTimeout` is set to 120 seconds.

### HuaweiCloud SDK ECS

- _Features_
    - Support more interface: UpdateAutoTerminateTimeServer.
- _Bug Fix_
    - None
- _Change_
    - None

# 3.0.2-beta 2021-01-15

### HuaweiCloud SDK Core

- _Features_
    - Support multiple versions of SDK.
- _Bug Fix_
    - None
- _Change_
    - None

# 3.0.1-beta 2020-12-31

## First Release

- ### Supported Services
    - `Elastic Cloud Server` (ECS) service.
    - `Elastic IP` (EIP) service.
    - `Virtual Private Cloud` (VPC) service.