# 3.1.193 2026-07-02

### HuaweiCloud SDK GaussDB

- _接口版本_
  - V3
- _新增特性_
  - 支持以下接口：
    - `SwitchGaussMySqlProxyAlt`
    - `ShowDynamicServerlessPolicy`
    - `UpdateDynamicServerlessPolicy`
    - `DeleteDynamicServerlessPolicy`
    - `CollectRealtimeSession`
    - `ShowRealtimeSessionTaskStatus`
    - `DownloadRealtimeSession`
    - `BatchChangeInstanceSpecification`
    - `ExecuteIntelligentKillSession`
    - `ListIntelligentKillSessionHistory`
    - `ShowIntelligentKillSessionStatistic`
    - `ShowLockWaitSession`
    - `CheckScheduleTaskExist`
    - `CreateBackupResourcePackage`
    - `ShowBackupResourcePackageFlavors`
    - `ShowBackupVaultLock`
    - `ModifyBackupVaultLock`
    - `ListDdlLogs`
    - `SetDdlLogPolicy`
    - `DownloadDdlLogs`
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
  - **CollectPublicationMonitor**
    - 响应参数变更
      - `- replication_rate_trans`
  - **ListSqlStatistics**
    - 响应参数变更
      - `* list.canUse: double -> boolean`
  - **ModifyPublication**
    - 请求参数变更
      - `* job_schedule: object<OperateUsedJobSchedule> -> object<OperateUsedJobScheduleModifyPub>`
  - **BatchModifySubscription**
    - 请求参数变更
      - `+ job_schedule.schedule_type`
      - `+ job_schedule.user_defined`
      - `* job_schedule: object<OperateUsedJobSchedule> -> object<OperateUsedJobScheduleModify>`
  - **CreatePublication**
    - 请求参数变更
      - `* is_create_snapshot_immediately: string -> boolean`
      - `* job_schedule: object<OperateUsedJobSchedule> -> object<OperateUsedJobScheduleCreate>`

# 3.1.192 2026-06-25

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
      - `+ nics.efi_enable`
  - **CreatePostPaidServers**
    - 请求参数变更
      - `+ server.nics.efi_enable`

### HuaweiCloud SDK GaussDB

- _接口版本_
  - V3
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **CreateGaussMySqlReadonlyNode**
    - 请求参数变更
      - `+ charge_mode`
  - **ListStarrocksInstanceInfo**
    - 响应参数变更
      - `+ instances.users_sync_switch_on`
  - **ListImmediateJobs**
    - 响应参数变更
      - `+ action_names`
      - `- jobs.action_names`
  - **ShowAutoScalingPolicy**
    - 响应参数变更
      - `+ reduce_threshold`
  - **UpdateAutoScalingPolicy**
    - 请求参数变更
      - `+ reduce_threshold`
  - **UploadImportExcelTemplate**
    - 请求参数变更
      - `+ database_scope`
  - **ShowGaussMySqlBackupList**
    - 响应参数变更
      - `* backups.size: int64 -> double`

### HuaweiCloud SDK RDS

- _接口版本_
  - V3
- _新增特性_
  - 支持接口`ShowBackupUsage`、`ListInstanceBackupSummary`、`ListSparseBackupPolicy`、`UpdateSparseBackupPolicy`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK VOD

- _接口版本_
  - V1
- _新增特性_
  - 支持接口`ShowHttpsConfig`、`UpdateHttpsConfig`
- _解决问题_
  - 无
- _特性变更_
  - 无

# 3.1.191 2026-06-18

### HuaweiCloud SDK CodeArtsRepo

- _接口版本_
  - V3
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **CreateRepository**
    - 请求参数变更
      - `+ group_id`

### HuaweiCloud SDK CodeArtsRepo

- _接口版本_
  - V4
- _新增特性_
  - 支持以下接口：
    - `ListProjectMergeRequests`
    - `ListGroupProtectedBranches`
    - `ListManagementUsers`
    - `UpdateGroupResourcePermissions`
    - `ShowRepoStatisticsSummary`
    - `ShowRepoLastStatistics`
    - `TransferRepository`
    - `ListRepositoryNavigationReferences`
    - `ShowRepositoryNavigationOutline`
    - `RebuildRepositoryNavigation`
    - `ShowRepositoryNavigationSchema`
    - `ShowRepositoryNavigationLanguage`
    - `ShowTenantDevelopMode`
    - `ShowTenantRepoEncryptionSetting`
    - `UpdateTenantRepoEncryptionSetting`
    - `ListTenantCmks`
    - `ListTenantEncryptedRepositories`
    - `ShowTenantKmsGrant`
    - `CreateTenantKmsGrant`
    - `ShowProjectTenantSettings`
- _解决问题_
  - 无
- _特性变更_
  - **ListCommitAssociatedRefs**
    - 请求参数变更
      - `+ type`
  - **ListFiles**
    - 请求参数变更
      - `+ search`
  - **ListManageableGroups**
    - 响应参数变更
      - `+ full_path`
      - `+ path`
      - `+ visibility`
  - **ListProjectWebhooks**
    - 响应参数变更
      - `+ project_cfgs`
      - `+ event_cfgs`
      - `+ branch_cfgs`
      - `+ service`
      - `+ note_plain_text_filter`
  - **AddProjectWebhook**
    - 请求参数变更
      - `+ note_plain_text_filter`
    - 响应参数变更
      - `+ project_cfgs`
      - `+ event_cfgs`
      - `+ branch_cfgs`
      - `+ service`
      - `+ note_plain_text_filter`
  - **ShowProjectWebhook**
    - 响应参数变更
      - `+ project_cfgs`
      - `+ event_cfgs`
      - `+ branch_cfgs`
      - `+ service`
      - `+ note_plain_text_filter`
  - **UpdateProjectWebhook**
    - 请求参数变更
      - `+ note_plain_text_filter`
    - 响应参数变更
      - `+ project_cfgs`
      - `+ event_cfgs`
      - `+ branch_cfgs`
      - `+ service`
      - `+ note_plain_text_filter`
  - **ListRepositoryWebhooks**
    - 请求参数变更
      - `+ include_system`
    - 响应参数变更
      - `+ project_cfgs`
      - `+ event_cfgs`
      - `+ branch_cfgs`
      - `+ service`
      - `+ note_plain_text_filter`
  - **AddRepositoryWebhook**
    - 请求参数变更
      - `+ note_plain_text_filter`
    - 响应参数变更
      - `+ project_cfgs`
      - `+ event_cfgs`
      - `+ branch_cfgs`
      - `+ service`
      - `+ note_plain_text_filter`
  - **ShowRepositoryWebhook**
    - 响应参数变更
      - `+ project_cfgs`
      - `+ event_cfgs`
      - `+ branch_cfgs`
      - `+ service`
      - `+ note_plain_text_filter`
  - **UpdateRepositoryWebhook**
    - 请求参数变更
      - `+ note_plain_text_filter`
    - 响应参数变更
      - `+ project_cfgs`
      - `+ event_cfgs`
      - `+ branch_cfgs`
      - `+ service`
      - `+ note_plain_text_filter`
  - **CreateReviewSetting**
    - 响应参数变更
      - `+ secondary_category_type`
      - `+ secondary_categories`
      - `- repository_id`
  - **ShowReviewSetting**
    - 响应参数变更
      - `+ secondary_category_type`
      - `+ secondary_categories`
      - `- repository_id`
  - **ListGroupMergeRequestValidAssignedCandidates**
    - 响应参数变更
      - `- is_committer`
      - `* : list<MergeRequestVoteReviewerDto> -> list<UserBasicDto>`
  - **ListProjectMergeRequestCanBeAssignedUsers**
    - 响应参数变更
      - `- is_committer`
      - `* : list<MergeRequestVoteReviewerDto> -> list<UserBasicDto>`
  - **ListGroupMergeRequestCanBeAssignedReviewers**
    - 响应参数变更
      - `- is_committer`
  - **ListProjectMergeRequestCanBeAssignedReviewers**
    - 响应参数变更
      - `- is_committer`
      - `* : list<MergeRequestVoteReviewerDto> -> list<UserBasicDto>`
  - **ListMergeRequestValidAssignedCandidates**
    - 请求参数变更
      - `+ target_repository_id`
      - `- target_project_id`
      - `- mode`
      - `* target_branch: optional -> required`
  - **ShowUserEmails**
    - 响应参数变更
      - `+ is_default`
  - **UpdateUserEmails**
    - 响应参数变更
      - `+ is_default`
  - **ListImpersonationTokens**
    - 请求参数变更
      - `- group_id`
  - **ShowRepositoryInheritSettingSource**
    - 请求参数变更
      - `* name: optional -> required`
      - `+ name: enum value [merge_requests]`
  - **ListTenantRepositories**
    - 请求参数变更
      - `+ locked`
    - 响应参数变更
      - `+ locked`
  - **ListGroupWebhooks**
    - 响应参数变更
      - `+ project_cfgs`
      - `+ event_cfgs`
      - `+ branch_cfgs`
      - `+ service`
      - `+ note_plain_text_filter`
  - **AddGroupWebhook**
    - 请求参数变更
      - `+ note_plain_text_filter`
      - `* body: object<WebhookParamsDto> -> object<WebhookParamsRequestDto>`
    - 响应参数变更
      - `+ project_cfgs`
      - `+ event_cfgs`
      - `+ branch_cfgs`
      - `+ service`
      - `+ note_plain_text_filter`
  - **ShowGroupWebhook**
    - 响应参数变更
      - `+ project_cfgs`
      - `+ event_cfgs`
      - `+ branch_cfgs`
      - `+ service`
      - `+ note_plain_text_filter`
  - **UpdateGroupWebhook**
    - 请求参数变更
      - `+ note_plain_text_filter`
      - `* body: object<WebhookParamsDto> -> object<WebhookParamsRequestDto>`
    - 响应参数变更
      - `+ project_cfgs`
      - `+ event_cfgs`
      - `+ branch_cfgs`
      - `+ service`
      - `+ note_plain_text_filter`
  - **ListMergeRequestSystemNotes**
    - 响应参数变更
      - `+ from_robot`
      - `- attachment`
  - **CreateMergeRequestDiscussionResponse**
    - 响应参数变更
      - `+ from_robot`
      - `- attachment`
  - **ShowMergeRequestDetail**
    - 响应参数变更
      - `+ upvotes`
      - `+ downvotes`
      - `+ should_remove_source_branch`
      - `+ topic`
      - `+ assignee`
      - `+ only_assignee_can_merge`
      - `+ is_source_branch_default`
      - `+ author.has_permission`
  - **UpdateMergeRequest**
    - 响应参数变更
      - `+ upvotes`
      - `+ downvotes`
      - `+ should_remove_source_branch`
      - `+ topic`
      - `+ assignee`
      - `+ only_assignee_can_merge`
      - `+ is_source_branch_default`
      - `+ author.has_permission`
  - **MergeMergeRequest**
    - 响应参数变更
      - `+ upvotes`
      - `+ downvotes`
      - `+ should_remove_source_branch`
      - `+ topic`
      - `+ assignee`
      - `+ only_assignee_can_merge`
      - `+ is_source_branch_default`
      - `+ author.has_permission`
  - **CreateMergeRequest**
    - 响应参数变更
      - `+ upvotes`
      - `+ downvotes`
      - `+ should_remove_source_branch`
      - `+ topic`
      - `+ assignee`
      - `+ only_assignee_can_merge`
      - `+ is_source_branch_default`
      - `+ author.has_permission`
  - **ListPersonalMergeRequests**
    - 请求参数变更
      - `+ view: enum value [view_for_list]`
      - `+ wip: enum value [yes,no]`
      - `+ wip: enum value [true,false]`
  - **ShowCommitDiffMetadata**
    - 响应参数变更
      - `+ blob_id`
  - **ImportMergeRequest**
    - 响应参数变更
      - `+ upvotes`
      - `+ downvotes`
      - `+ should_remove_source_branch`
      - `+ topic`
      - `+ assignee`
      - `+ only_assignee_can_merge`
      - `+ is_source_branch_default`
      - `+ author.has_permission`
  - **ShowMergeRequestSetting**
    - 响应参数变更
      - `+ has_evaluation_permission`
  - **UpdateMergeRequestSetting**
    - 响应参数变更
      - `+ has_evaluation_permission`
  - **ListMergeRequestTemplates**
    - 响应参数变更
      - `+ from`
  - **CreateMergeRequestTemplate**
    - 响应参数变更
      - `+ from`
  - **ShowMergeRequestTemplate**
    - 响应参数变更
      - `+ from`
  - **UpdateMergeRequestTemplate**
    - 响应参数变更
      - `+ from`
  - **ListMergeRequestApprovers**
    - 请求参数变更
      - `* target_branch: optional -> required`
      - `* source_branch: optional -> required`
    - 响应参数变更
      - `+ error_message`
      - `+ tenant_name`
      - `+ has_permission`
      - `+ avatar_path`
      - `+ avatar_url`
      - `+ web_url`
      - `+ nick_name`
      - `+ name`
      - `+ service_license_status`
      - `+ id`
      - `+ state`
      - `+ name_cn`
      - `+ email`
      - `+ username`
      - `+ required_approvers_list.has_permission`
      - `* required_approvers_list: list<UserBasicDto> -> list<MergeRequestApprovalUserDto>`
  - **ListMergeRequestReviewers**
    - 请求参数变更
      - `* target_branch: optional -> required`
      - `* source_branch: optional -> required`
    - 响应参数变更
      - `+ error_message`
      - `+ tenant_name`
      - `+ has_permission`
      - `+ avatar_path`
      - `+ avatar_url`
      - `+ web_url`
      - `+ nick_name`
      - `+ name`
      - `+ service_license_status`
      - `+ id`
      - `+ state`
      - `+ name_cn`
      - `+ email`
      - `+ username`
      - `+ required_reviewers_list.has_permission`
      - `* required_reviewers_list: list<UserBasicDto> -> list<MergeRequestApprovalUserDto>`
  - **ShowGroupReviewSettings**
    - 响应参数变更
      - `+ secondary_category_type`
      - `+ secondary_categories`
      - `- hicode_default_categories`
      - `- repository_id`
      - `- note_required_attributes`
      - `- codehub_default_categories`
  - **UpdateGroupReviewSettings**
    - 响应参数变更
      - `+ secondary_category_type`
      - `+ secondary_categories`
      - `- hicode_default_categories`
      - `- repository_id`
      - `- note_required_attributes`
      - `- codehub_default_categories`
  - **ShowProjectReviewSettings**
    - 响应参数变更
      - `+ secondary_category_type`
      - `+ secondary_categories`
      - `- hicode_default_categories`
      - `- repository_id`
      - `- note_required_attributes`
      - `- codehub_default_categories`
  - **UpdateProjectReviewSettings**
    - 响应参数变更
      - `+ secondary_category_type`
      - `+ secondary_categories`
      - `- hicode_default_categories`
      - `- repository_id`
      - `- note_required_attributes`
      - `- codehub_default_categories`
  - **ListGroupMergeRequestTemplates**
    - 响应参数变更
      - `- repository_id`
  - **CreateGroupMergeRequestTemplate**
    - 响应参数变更
      - `- repository_id`
  - **UpdateGroupMergeRequestTemplate**
    - 响应参数变更
      - `- repository_id`
  - **ListProjectMergeRequestTemplates**
    - 响应参数变更
      - `- repository_id`
  - **CreateProjectMergeRequestTemplate**
    - 响应参数变更
      - `- repository_id`
  - **UpdateProjectMergeRequestTemplate**
    - 响应参数变更
      - `- repository_id`
  - **ListGroups**
    - 响应参数变更
      - `+ roles`
  - **ListProjectSubgroupsAndRepositories**
    - 响应参数变更
      - `* updated_at_timestamp: string -> int64`
      - `* star_time: string -> int64`
  - **ListGroupSubgroupsAndRepositories**
    - 响应参数变更
      - `* updated_at_timestamp: string -> int64`
      - `* star_time: string -> int64`
  - **ShowRepositoryInheritSetting**
    - 响应参数变更
      - `+ name: enum value [mr_branch_policies,reviews]`
  - **UpdateRepositoryInheritSetting**
    - 请求参数变更
      - `+ data.name: enum value [mr_branch_policies,reviews]`
    - 响应参数变更
      - `+ name: enum value [mr_branch_policies,reviews]`
  - **ShowRepositoryGeneralPolicy**
    - 响应参数变更
      - `+ repo_encryption_enabled`
      - `+ repo_encryption_status`
  - **UpdateRepositoryGeneralPolicy**
    - 请求参数变更
      - `+ repo_encryption_enabled`
    - 响应参数变更
      - `+ repo_encryption_enabled`
      - `+ repo_encryption_status`
  - **ListCommits**
    - 响应参数变更
      - `+ commits.author_id`
  - **CreateBranch**
    - 响应参数变更
      - `+ commit.author_id`
  - **CreateTag**
    - 响应参数变更
      - `+ commit.author_id`
  - **ShowTag**
    - 响应参数变更
      - `+ commit.author_id`
  - **ShowBranch**
    - 响应参数变更
      - `+ commit.author_id`
  - **ShowRefCompare**
    - 响应参数变更
      - `+ commit.author_id`
  - **ShowMergeRequestDiscussion**
    - 响应参数变更
      - `+ from_robot`
      - `- attachment`
      - `+ notes.from_robot`
      - `- notes.attachment`
  - **ListMergeRequestDiscussions**
    - 响应参数变更
      - `+ from_robot`
      - `- attachment`
      - `+ notes.from_robot`
      - `- notes.attachment`
  - **CreateMergeRequestDiscussion**
    - 响应参数变更
      - `+ from_robot`
      - `- attachment`
      - `+ notes.from_robot`
      - `- notes.attachment`
  - **ListCommitDiscussions**
    - 响应参数变更
      - `+ notes.from_robot`
      - `- notes.attachment`
  - **ShowCommit**
    - 响应参数变更
      - `+ author_id`
  - **CreateCommit**
    - 响应参数变更
      - `+ author_id`
  - **ShowMergeRequestCommentsByLine**
    - 响应参数变更
      - `+ review_categories_cn`
      - `+ notes`
      - `+ review_categories_en`
      - `+ review_modules`
      - `+ b_mode`
      - `+ severity_cn`
      - `+ severity_en`
      - `+ archived`
      - `+ review_categories`
      - `+ added_lines`
      - `+ removed_lines`
      - `+ repository_id`
      - `+ id`
      - `+ merge_request_version_params`
      - `+ resolved`
      - `+ severity`
      - `+ individual_note`
      - `+ deleted_file`
      - `+ proposer`
      - `+ new_file`
      - `+ a_mode`
      - `+ noteable_type`
      - `+ repository_full_path`
      - `+ assignee`
      - `+ commit_id`
      - `+ diff_file`
      - `* new.discussions: list<MergeRequestBasicDiscussionDto> -> list<MergeRequestDiscussionDto>`
  - **ShowCommitCommentsByLine**
    - 响应参数变更
      - `+ review_categories_cn`
      - `+ notes`
      - `+ review_categories_en`
      - `+ review_modules`
      - `+ b_mode`
      - `+ severity_cn`
      - `+ severity_en`
      - `+ archived`
      - `+ review_categories`
      - `+ added_lines`
      - `+ removed_lines`
      - `+ repository_id`
      - `+ id`
      - `+ merge_request_version_params`
      - `+ resolved`
      - `+ severity`
      - `+ individual_note`
      - `+ deleted_file`
      - `+ proposer`
      - `+ new_file`
      - `+ a_mode`
      - `+ noteable_type`
      - `+ repository_full_path`
      - `+ assignee`
      - `+ commit_id`
      - `+ diff_file`
      - `* new.discussions: list<MergeRequestBasicDiscussionDto> -> list<MergeRequestDiscussionDto>`
  - **UpdateRepositoryResourcePermissions**
    - 响应参数变更
      - `+ message`
      - `* status: string -> int32`
  - **ShowRepository**
    - 响应参数变更
      - `+ encryption_status`
      - `+ repo_encryption_enabled`

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
      - `* backup_strategy.keep_days: string -> int32`
  - **ListInstances**
    - 响应参数变更
      - `+ instances.groups.volume.gift_size`

### HuaweiCloud SDK RDS

- _接口版本_
  - V3
- _新增特性_
  - 支持接口`BatchResizeFlavor`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK RGC

- _接口版本_
  - V1
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ShowTemplateDeployParams**
    - 请求参数变更
      - `+ account_id`

# 3.1.190 2026-06-11

### HuaweiCloud SDK DDS

- _接口版本_
  - V3
- _新增特性_
  - 支持接口`BatchDeleteShards`
- _解决问题_
  - 无
- _特性变更_
  - **AddReadonlyNode**
    - 请求参数变更
      - `+ group_id`
      - `+ availability_zone`

### HuaweiCloud SDK GaussDBforNoSQL

- _接口版本_
  - V3
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ShowDisasterRecoverySettings**
    - 响应参数变更
      - `+ disaster_recovery_settings.sync_delay`
      - `* disaster_recovery_settings: list<SwitchoverRatioInfo> -> list<QuerySwitchoverRatioInfo>`
  - **SetDisasterRecoverySettings**
    - 请求参数变更
      - `+ disaster_recovery_settings.sync_delay`
      - `* disaster_recovery_settings: list<SwitchoverRatioInfo> -> list<SetSwitchoverRatioInfo>`
  - **ListRecycleInstances**
    - 响应参数变更
      - `+ instances.data_store`
      - `+ instances.charge_type`
      - `- instances.datastore`
      - `- instances.charge_mode`
  - **CreateInstance**
    - 请求参数变更
      - `+ disk_encryption_id`
      - `+ lb_access_control_settings`
  - **ListInstances**
    - 响应参数变更
      - `+ instances.disk_encryption_id`
      - `+ instances.dr_instance_id`
      - `+ instances.ccm_cert_info`
      - `+ instances.backup_space_usage`
      - `+ instances.dual_active_info.destination_instance_name`
      - `+ instances.dual_active_info.destination_instance_node_num`
      - `+ instances.dual_active_info.destination_instance_spec_code`

### HuaweiCloud SDK RDS

- _接口版本_
  - V3
- _新增特性_
  - 支持以下接口：
    - `ShowMsdtcLocalHost`
    - `ShowTopObjects`
    - `CreateDrsJobTask`
    - `ShowDrsJobName`
    - `ShowHotClodSeparationStatus`
    - `ShowAvailableBuildDrInstance`
    - `ListHistorySessions`
    - `ListHistoryTopSqls`
    - `ListHistoryWaitEvents`
    - `ShowHistorySessionAnalyseDownloadInfo`
    - `UploadHistorySessionAnalyase`
    - `RotateAuditLog`
- _解决问题_
  - 无
- _特性变更_
  - **ListTopSqls**
    - 请求参数变更
      - `+ offset`

# 3.1.189 2026-06-04

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
      - `+ configs.https_tls_version`
      - `+ configs.error_code_redirect_rules.execution_mode`
  - **UpdateDomainFullConfig**
    - 请求参数变更
      - `+ configs.https_tls_version`
      - `+ configs.error_code_redirect_rules.execution_mode`

### HuaweiCloud SDK DDS

- _接口版本_
  - V3
- _新增特性_
  - 支持接口`BindPublicGateway`、`UnbindPublicGateway`
- _解决问题_
  - 无
- _特性变更_
  - **ListInstances**
    - 响应参数变更
      - `+ instances.groups.nodes.nat_gateway_id`
      - `+ instances.groups.nodes.external_service_port`

# 3.1.188 2026-05-28

### HuaweiCloud SDK GaussDBforNoSQL

- _接口版本_
  - V3
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListInstances**
    - 响应参数变更
      - `+ instances.ssl`

# 3.1.187 2026-05-14

### HuaweiCloud SDK KMS

- _接口版本_
  - V2
- _新增特性_
  - 支持接口`ReEncrypt`、`DeriveSharedSecret`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK VOD

- _接口版本_
  - V1
- _新增特性_
  - 支持接口`ListAssetEditTask`、`CreateAssetEditTask`、`DeleteAssetEditTask`
- _解决问题_
  - 无
- _特性变更_
  - **CreateAssetProcessTask**
    - 响应参数变更
      - `+ thumbnail_task_id`
  - **ModifySubtitle**
    - 响应参数变更
      - `+ thumbnail_task_id`

# 3.1.186 2026-05-07

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
      - `+ sources.params.build_params.virtual_merge_commit_id`
      - `- sources.params.build_params.virtual_merge_commitId`

### HuaweiCloud SDK GaussDBforopenGauss

- _接口版本_
  - V3
- _新增特性_
  - 支持接口`ListUpgradePaths`
- _解决问题_
  - 无
- _特性变更_
  - 无

# 3.1.185 2026-04-30

### HuaweiCloud SDK CodeArtsPipeline

- _接口版本_
  - V2
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListPipelineRuns**
    - 请求参数变更
      - `+ update_time`
  - **ShowStepOutputs**
    - 响应参数变更
      - `* step_outputs.output_result.value: string -> object`
  - **ShowPipelineRunDetail**
    - 响应参数变更
      - `+ sources.params.build_params.virtual_merge_branch`
      - `+ sources.params.build_params.virtual_merge_commitId`
      - `+ stages.pre.daily_build_number`

### HuaweiCloud SDK CPCS

- _接口版本_
  - V1
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ShowClusterAccessKeyList**
    - 请求参数变更
      - `+ limit`
      - `+ offset`
      - `- page_size`
      - `- page_num`
  - **SwitchCpcsToken**
    - 请求参数变更
      - `+ app_id`
      - `- auth`
      - `- scope`
    - 响应参数变更
      - `+ token`
      - `- roles`
      - `- ak`
      - `- expired_at`
      - `- issued_at`
      - `- user`
  - **ShowAuditLog**
    - 请求参数变更
      - `+ limit`
      - `+ offset`
      - `- page_size`
      - `- page_num`
    - 响应参数变更
      - `+ audit_records.status`
      - `+ audit_records.failure_message`
      - `+ audit_records.verification`
      - `- audit_records.operate_status`
      - `- audit_records.operate_message`
      - `- audit_records.audit_status`
  - **ShowResourceDetailCertificate**
    - 请求参数变更
      - `+ limit`
      - `+ offset`
      - `- page_size`
      - `- page_num`
  - **ShowResourceDetailAccessKey**
    - 请求参数变更
      - `+ limit`
      - `+ offset`
      - `- page_size`
      - `- page_num`
  - **ListCcspTenantImages**
    - 请求参数变更
      - `+ limit`
      - `+ offset`
      - `- page_size`
      - `- page_num`
  - **ShowCcspInstanceInfo**
    - 请求参数变更
      - `+ limit`
      - `+ offset`
      - `- page_size`
      - `- page_num`
  - **ShowCcspClusterList**
    - 请求参数变更
      - `+ limit`
      - `+ offset`
      - `- page_size`
      - `- page_num`
  - **ShowAssociationList**
    - 请求参数变更
      - `+ limit`
      - `+ offset`
      - `- page_size`
      - `- page_num`
  - **ShowAppAccessKeyList**
    - 请求参数变更
      - `+ limit`
      - `+ offset`
      - `- page_size`
      - `- page_num`
  - **ShowAppList**
    - 请求参数变更
      - `+ limit`
      - `+ offset`
      - `- page_size`
      - `- page_num`

### HuaweiCloud SDK DRS

- _接口版本_
  - V5
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ShowChildNum**
    - 请求参数变更
      - `+ db_type: enum value [ddm]`
      - `+ db_type: enum value [ ddm]`
  - **ListDbObjects**
    - 响应参数变更
      - `+ status: enum value [failed,pending]`
      - `- status: enum value [ failed, pending]`
  - **ShowDbObjectCollectionStatus**
    - 响应参数变更
      - `+ status: enum value [failed,pending]`
      - `- status: enum value [ failed, pending]`
  - **ShowDbObjectsList**
    - 响应参数变更
      - `+ status: enum value [failed,pending]`
      - `- status: enum value [ failed, pending]`
  - **ShowDataProgress**
    - 响应参数变更
      - `+ data_process_info.filter_conditions.filtering_type: enum value [configConditionalFilter]`
      - `- data_process_info.filter_conditions.filtering_type: enum value [ configConditionalFilter]`
  - **UpdateDataProgress**
    - 请求参数变更
      - `+ data_process_info.filter_conditions.filtering_type: enum value [configConditionalFilter]`
      - `- data_process_info.filter_conditions.filtering_type: enum value [ configConditionalFilter]`
  - **CheckDataFilter**
    - 请求参数变更
      - `+ data_process_info.filter_conditions.filtering_type: enum value [configConditionalFilter]`
      - `- data_process_info.filter_conditions.filtering_type: enum value [ configConditionalFilter]`
  - **ExecuteJobAction**
    - 请求参数变更
      - `+ job.action_params.compare_task_param.data_process_info.filter_conditions.filtering_type: enum value [configConditionalFilter]`
      - `- job.action_params.compare_task_param.data_process_info.filter_conditions.filtering_type: enum value [ configConditionalFilter]`
  - **BatchExecuteJobActions**
    - 请求参数变更
      - `+ jobs.action_params.compare_task_param.data_process_info.filter_conditions.filtering_type: enum value [configConditionalFilter]`
      - `- jobs.action_params.compare_task_param.data_process_info.filter_conditions.filtering_type: enum value [ configConditionalFilter]`

### HuaweiCloud SDK RDS

- _接口版本_
  - V3
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **SetAuditlogPolicy**
    - 请求参数变更
      - `+ databases`

# 3.1.184 2026-04-24

### HuaweiCloud SDK DRS

- _接口版本_
  - V5
- _新增特性_
  - 支持以下接口：
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
- _解决问题_
  - 无
- _特性变更_
  - **UpdateComparePolicy**
    - 请求参数变更
      - `+ compare_policy: enum value [normal,manyToOne]`
  - **ShowObjectMapping**
    - 响应参数变更
      - `+ object_mapping_list.object_name`
  - **ListJobs**
    - 请求参数变更
      - `+ sort_key: enum value [name,status,create_time,net_type,job_direction,pay_mode]`

### HuaweiCloud SDK GaussDBforopenGauss

- _接口版本_
  - V3
- _新增特性_
  - 支持接口`ListDNatInfo`、`BindDNat`
- _解决问题_
  - 无
- _特性变更_
  - 无

# 3.1.183 2026-04-09

### HuaweiCloud SDK Cloudtest

- _接口版本_
  - V1
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **BatchAddCaseResultInTask**
    - 请求参数变更
      - `* test_case_uris: string -> list<string>`

### HuaweiCloud SDK GaussDBforopenGauss

- _接口版本_
  - V3
- _新增特性_
  - 支持接口`SwitchLoggerReplicaAvailabilityZones`、`ChangeDemand2Period`、`SwitchLoggerReplica`
- _解决问题_
  - 无
- _特性变更_
  - 无

### HuaweiCloud SDK IoTDA

- _接口版本_
  - V5
- _新增特性_
  - 支持接口`ConfirmBatchTask`
- _解决问题_
  - 无
- _特性变更_
  - **CreateBatchTask**
    - 请求参数变更
      - `+ need_confirm`
    - 响应参数变更
      - `+ need_confirm`
  - **ListBatchTasks**
    - 响应参数变更
      - `+ need_confirm`
      - `+ batchtasks.need_confirm`
  - **ShowBatchTask**
    - 响应参数变更
      - `+ need_confirm`
      - `+ batchtask.need_confirm`

### HuaweiCloud SDK LTS

- _接口版本_
  - V2
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ListAccessConfig**
    - 响应参数变更
      - `+ result.access_config_detail.combine_stdout`
  - **UpdateAccessConfig**
    - 请求参数变更
      - `+ access_config_detail.combine_stdout`
    - 响应参数变更
      - `+ access_config_detail.combine_stdout`
  - **CreateAccessConfig**
    - 请求参数变更
      - `+ access_config_detail.combine_stdout`
    - 响应参数变更
      - `+ access_config_detail.combine_stdout`
  - **DeleteAccessConfig**
    - 响应参数变更
      - `+ result.access_config_detail.combine_stdout`

# 3.1.182 2026-04-02

### HuaweiCloud SDK GaussDBforopenGauss

- _接口版本_
  - V3
- _新增特性_
  - 支持接口`ModifySecurityGroup`
- _解决问题_
  - 无
- _特性变更_
  - 无

# 3.1.181 2026-03-26

### HuaweiCloud SDK CDN

- _接口版本_
  - V2
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ShowDomainLocationStats**
    - 请求参数变更
      - `+ ip_version`

### HuaweiCloud SDK Cloudtest

- _接口版本_
  - V1
- _新增特性_
  - 支持接口`BatchAddCaseResultInTask`
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
  - **ShowServer**
    - 响应参数变更
      - `+ server.capacity_reservation_id`
      - `+ server.capacity_reservation_specification`
      - `+ server.spod_id`
      - `+ server.enclave_options`
  - **ListServersDetails**
    - 响应参数变更
      - `+ servers.capacity_reservation_id`
      - `+ servers.capacity_reservation_specification`
      - `+ servers.spod_id`
      - `+ servers.enclave_options`
  - **ListRecycleBinServers**
    - 响应参数变更
      - `+ servers.capacity_reservation_id`
      - `+ servers.capacity_reservation_specification`
      - `+ servers.spod_id`
      - `+ servers.enclave_options`

### HuaweiCloud SDK GaussDB

- _接口版本_
  - V3
- _新增特性_
  - 支持以下接口：
    - `ShowHtapProcessList`
    - `DeleteHtapProcessList`
    - `ShowInstanceBackups`
    - `DeleteAutoSqlLimiting`
    - `UpdateStarRockLtsConfig`
    - `DeleteStarRockLtsConfig`
- _解决问题_
  - 无
- _特性变更_
  - **ListRecycleInstances**
    - 响应参数变更
      - `+ instances.recycle_backups`
      - `- instances.recycle_bakcups`
  - **ListImmediateJobs**
    - 响应参数变更
      - `+ jobs.show_detail`
      - `+ jobs.action_names`
  - **CreateGaussMySqlInstance**
    - 请求参数变更
      - `+ volume.type`

### HuaweiCloud SDK RDS

- _接口版本_
  - V3
- _新增特性_
  - 支持接口`ShowBackupConfig`、`ChangeBackupConfig`
- _解决问题_
  - 无
- _特性变更_
  - 无

# 3.1.180 2026-03-19

### HuaweiCloud SDK AAD

- _接口版本_
  - V2
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ShowDDoSPeak**
    - 响应参数变更
      - `* utime: int32 -> int64`
  - **ListWafBandwidth**
    - 响应参数变更
      - `* curve.time: int32 -> int64`
  - **ListWafQps**
    - 响应参数变更
      - `* curve.time: int32 -> int64`
  - **ListWafGeoIpRule**
    - 响应参数变更
      - `* items.timestamp: int32 -> int64`
  - **ShowInstanceByInstanceId**
    - 响应参数变更
      - `* expire_time: int32 -> int64`
      - `* create_time: int32 -> int64`
      - `* current_time: int32 -> int64`
  - **ListDDoSBlackHoleEvent**
    - 响应参数变更
      - `* items.start_time: int32 -> int64`
      - `* items.end_time: int32 -> int64`
  - **ListWafAttackEvent**
    - 响应参数变更
      - `* list.time: int32 -> int64`
  - **ListDDoSConnectionNumber**
    - 响应参数变更
      - `* data.list.time: int32 -> int64`

### HuaweiCloud SDK GaussDBforopenGauss

- _接口版本_
  - V3
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **CreateSqlLimitTask**
    - 请求参数变更
      - `+ node_infos.sql_ids`
      - `- node_infos.sql_id`
      - `* node_infos: list<CreateLimitTaskNodeOption> -> list<CreateSqlLimitTaskNodeOption>`
  - **ListWdrSnapshotsCollectResults**
    - 响应参数变更
      - `* wdr_snapshots.obs_bucket.port: string -> int32`
  - **ShowFullSql**
    - 响应参数变更
      - `+ components.sql`
  - **ListSchemaVolumes**
    - 响应参数变更
      - `+ schema_volumes.schema_name`
      - `- schema_volumes.nsp_name`
  - **ListFullSqlSwitches**
    - 响应参数变更
      - `+ allowed_sql_types.prefixes`
  - **ListLtsConfigs**
    - 请求参数变更
      - `+ instance_id`
      - `- instance_id`

### HuaweiCloud SDK RGC

- _接口版本_
  - V1
- _新增特性_
  - 无
- _解决问题_
  - 无
- _特性变更_
  - **ShowTemplateDeployParams**
    - 响应参数变更
      - `+ variables.latest_param`

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

