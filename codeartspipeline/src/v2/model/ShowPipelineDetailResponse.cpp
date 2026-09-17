

#include "huaweicloud/codeartspipeline/v2/model/ShowPipelineDetailResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartspipeline {
namespace V2 {
namespace Model {




ShowPipelineDetailResponse::ShowPipelineDetailResponse()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    manifestVersion_ = "";
    manifestVersionIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    domainId_ = "";
    domainIdIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    componentId_ = "";
    componentIdIsSet_ = false;
    isPublish_ = false;
    isPublishIsSet_ = false;
    creatorId_ = "";
    creatorIdIsSet_ = false;
    creatorName_ = "";
    creatorNameIsSet_ = false;
    updaterId_ = "";
    updaterIdIsSet_ = false;
    createTime_ = 0L;
    createTimeIsSet_ = false;
    updateTime_ = 0L;
    updateTimeIsSet_ = false;
    isCollect_ = false;
    isCollectIsSet_ = false;
    sourcesIsSet_ = false;
    variablesIsSet_ = false;
    schedulesIsSet_ = false;
    triggersIsSet_ = false;
    groupId_ = "";
    groupIdIsSet_ = false;
    definition_ = "";
    definitionIsSet_ = false;
    securityLevel_ = 0;
    securityLevelIsSet_ = false;
    originId_ = "";
    originIdIsSet_ = false;
    disableReleaseBranchManagement_ = false;
    disableReleaseBranchManagementIsSet_ = false;
    deleted_ = false;
    deletedIsSet_ = false;
    banned_ = false;
    bannedIsSet_ = false;
    fromGitCode_ = false;
    fromGitCodeIsSet_ = false;
    fromGitCodeRepo_ = false;
    fromGitCodeRepoIsSet_ = false;
    gitCodeRepoId_ = "";
    gitCodeRepoIdIsSet_ = false;
    yamlDefinition_ = "";
    yamlDefinitionIsSet_ = false;
    pacRepoRelationIsSet_ = false;
    yamlContent_ = "";
    yamlContentIsSet_ = false;
    agencyName_ = "";
    agencyNameIsSet_ = false;
    executionPlansIsSet_ = false;
    fromSource_ = 0;
    fromSourceIsSet_ = false;
    projectName_ = "";
    projectNameIsSet_ = false;
    groupName_ = "";
    groupNameIsSet_ = false;
    concurrencyControlIsSet_ = false;
    cancelStrategyIsSet_ = false;
    tagIdsIsSet_ = false;
    variableGroupsIsSet_ = false;
    securityLevelCode_ = "";
    securityLevelCodeIsSet_ = false;
    permissionsIsSet_ = false;
    subjectId_ = "";
    subjectIdIsSet_ = false;
    detailUrl_ = "";
    detailUrlIsSet_ = false;
    modifyUrl_ = "";
    modifyUrlIsSet_ = false;
    tagsIsSet_ = false;
    isCrModel_ = false;
    isCrModelIsSet_ = false;
    archiveSourceIsSet_ = false;
    yamlRepoPropertiesIsSet_ = false;
    variableGroupIdsIsSet_ = false;
    pacSourceAlias_ = "";
    pacSourceAliasIsSet_ = false;
    pacSourceRepoHttpsEndpoint_ = "";
    pacSourceRepoHttpsEndpointIsSet_ = false;
}

ShowPipelineDetailResponse::~ShowPipelineDetailResponse() = default;

void ShowPipelineDetailResponse::validate()
{
}

web::json::value ShowPipelineDetailResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(manifestVersionIsSet_) {
        val[utility::conversions::to_string_t("manifest_version")] = ModelBase::toJson(manifestVersion_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(domainIdIsSet_) {
        val[utility::conversions::to_string_t("domain_id")] = ModelBase::toJson(domainId_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(componentIdIsSet_) {
        val[utility::conversions::to_string_t("component_id")] = ModelBase::toJson(componentId_);
    }
    if(isPublishIsSet_) {
        val[utility::conversions::to_string_t("is_publish")] = ModelBase::toJson(isPublish_);
    }
    if(creatorIdIsSet_) {
        val[utility::conversions::to_string_t("creator_id")] = ModelBase::toJson(creatorId_);
    }
    if(creatorNameIsSet_) {
        val[utility::conversions::to_string_t("creator_name")] = ModelBase::toJson(creatorName_);
    }
    if(updaterIdIsSet_) {
        val[utility::conversions::to_string_t("updater_id")] = ModelBase::toJson(updaterId_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
    if(isCollectIsSet_) {
        val[utility::conversions::to_string_t("is_collect")] = ModelBase::toJson(isCollect_);
    }
    if(sourcesIsSet_) {
        val[utility::conversions::to_string_t("sources")] = ModelBase::toJson(sources_);
    }
    if(variablesIsSet_) {
        val[utility::conversions::to_string_t("variables")] = ModelBase::toJson(variables_);
    }
    if(schedulesIsSet_) {
        val[utility::conversions::to_string_t("schedules")] = ModelBase::toJson(schedules_);
    }
    if(triggersIsSet_) {
        val[utility::conversions::to_string_t("triggers")] = ModelBase::toJson(triggers_);
    }
    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(definitionIsSet_) {
        val[utility::conversions::to_string_t("definition")] = ModelBase::toJson(definition_);
    }
    if(securityLevelIsSet_) {
        val[utility::conversions::to_string_t("security_level")] = ModelBase::toJson(securityLevel_);
    }
    if(originIdIsSet_) {
        val[utility::conversions::to_string_t("origin_id")] = ModelBase::toJson(originId_);
    }
    if(disableReleaseBranchManagementIsSet_) {
        val[utility::conversions::to_string_t("disable_release_branch_management")] = ModelBase::toJson(disableReleaseBranchManagement_);
    }
    if(deletedIsSet_) {
        val[utility::conversions::to_string_t("deleted")] = ModelBase::toJson(deleted_);
    }
    if(bannedIsSet_) {
        val[utility::conversions::to_string_t("banned")] = ModelBase::toJson(banned_);
    }
    if(fromGitCodeIsSet_) {
        val[utility::conversions::to_string_t("from_git_code")] = ModelBase::toJson(fromGitCode_);
    }
    if(fromGitCodeRepoIsSet_) {
        val[utility::conversions::to_string_t("from_git_code_repo")] = ModelBase::toJson(fromGitCodeRepo_);
    }
    if(gitCodeRepoIdIsSet_) {
        val[utility::conversions::to_string_t("git_code_repo_id")] = ModelBase::toJson(gitCodeRepoId_);
    }
    if(yamlDefinitionIsSet_) {
        val[utility::conversions::to_string_t("yaml_definition")] = ModelBase::toJson(yamlDefinition_);
    }
    if(pacRepoRelationIsSet_) {
        val[utility::conversions::to_string_t("pac_repo_relation")] = ModelBase::toJson(pacRepoRelation_);
    }
    if(yamlContentIsSet_) {
        val[utility::conversions::to_string_t("yaml_content")] = ModelBase::toJson(yamlContent_);
    }
    if(agencyNameIsSet_) {
        val[utility::conversions::to_string_t("agency_name")] = ModelBase::toJson(agencyName_);
    }
    if(executionPlansIsSet_) {
        val[utility::conversions::to_string_t("execution_plans")] = ModelBase::toJson(executionPlans_);
    }
    if(fromSourceIsSet_) {
        val[utility::conversions::to_string_t("from_source")] = ModelBase::toJson(fromSource_);
    }
    if(projectNameIsSet_) {
        val[utility::conversions::to_string_t("project_name")] = ModelBase::toJson(projectName_);
    }
    if(groupNameIsSet_) {
        val[utility::conversions::to_string_t("group_name")] = ModelBase::toJson(groupName_);
    }
    if(concurrencyControlIsSet_) {
        val[utility::conversions::to_string_t("concurrency_control")] = ModelBase::toJson(concurrencyControl_);
    }
    if(cancelStrategyIsSet_) {
        val[utility::conversions::to_string_t("cancel_strategy")] = ModelBase::toJson(cancelStrategy_);
    }
    if(tagIdsIsSet_) {
        val[utility::conversions::to_string_t("tag_ids")] = ModelBase::toJson(tagIds_);
    }
    if(variableGroupsIsSet_) {
        val[utility::conversions::to_string_t("variable_groups")] = ModelBase::toJson(variableGroups_);
    }
    if(securityLevelCodeIsSet_) {
        val[utility::conversions::to_string_t("security_level_code")] = ModelBase::toJson(securityLevelCode_);
    }
    if(permissionsIsSet_) {
        val[utility::conversions::to_string_t("permissions")] = ModelBase::toJson(permissions_);
    }
    if(subjectIdIsSet_) {
        val[utility::conversions::to_string_t("subject_id")] = ModelBase::toJson(subjectId_);
    }
    if(detailUrlIsSet_) {
        val[utility::conversions::to_string_t("detail_url")] = ModelBase::toJson(detailUrl_);
    }
    if(modifyUrlIsSet_) {
        val[utility::conversions::to_string_t("modify_url")] = ModelBase::toJson(modifyUrl_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(isCrModelIsSet_) {
        val[utility::conversions::to_string_t("is_cr_model")] = ModelBase::toJson(isCrModel_);
    }
    if(archiveSourceIsSet_) {
        val[utility::conversions::to_string_t("archive_source")] = ModelBase::toJson(archiveSource_);
    }
    if(yamlRepoPropertiesIsSet_) {
        val[utility::conversions::to_string_t("yaml_repo_properties")] = ModelBase::toJson(yamlRepoProperties_);
    }
    if(variableGroupIdsIsSet_) {
        val[utility::conversions::to_string_t("variable_group_ids")] = ModelBase::toJson(variableGroupIds_);
    }
    if(pacSourceAliasIsSet_) {
        val[utility::conversions::to_string_t("pac_source_alias")] = ModelBase::toJson(pacSourceAlias_);
    }
    if(pacSourceRepoHttpsEndpointIsSet_) {
        val[utility::conversions::to_string_t("pac_source_repo_https_endpoint")] = ModelBase::toJson(pacSourceRepoHttpsEndpoint_);
    }

    return val;
}
bool ShowPipelineDetailResponse::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("manifest_version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("manifest_version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setManifestVersion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("region"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("region"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("domain_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("domain_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDomainId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("component_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("component_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setComponentId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_publish"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_publish"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsPublish(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creator_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatorId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("creator_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("creator_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatorName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updater_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updater_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdaterId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_collect"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_collect"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsCollect(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sources"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sources"));
        if(!fieldValue.is_null())
        {
            std::vector<PipelineSource> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSources(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("variables"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("variables"));
        if(!fieldValue.is_null())
        {
            std::vector<PipelineVariable> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVariables(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("schedules"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("schedules"));
        if(!fieldValue.is_null())
        {
            std::vector<PipelineSchedule> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSchedules(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("triggers"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("triggers"));
        if(!fieldValue.is_null())
        {
            std::vector<PipelineTrigger> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTriggers(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("definition"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("definition"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefinition(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("security_level"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_level"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityLevel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("origin_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("origin_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOriginId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("disable_release_branch_management"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("disable_release_branch_management"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDisableReleaseBranchManagement(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deleted"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deleted"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeleted(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("banned"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("banned"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBanned(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("from_git_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("from_git_code"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFromGitCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("from_git_code_repo"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("from_git_code_repo"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFromGitCodeRepo(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("git_code_repo_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("git_code_repo_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGitCodeRepoId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("yaml_definition"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("yaml_definition"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setYamlDefinition(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pac_repo_relation"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pac_repo_relation"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPacRepoRelation(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("yaml_content"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("yaml_content"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setYamlContent(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("agency_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agency_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAgencyName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("execution_plans"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("execution_plans"));
        if(!fieldValue.is_null())
        {
            std::vector<Object> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExecutionPlans(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("from_source"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("from_source"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFromSource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("group_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("concurrency_control"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("concurrency_control"));
        if(!fieldValue.is_null())
        {
            PipelineConcurrencyMgmt refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConcurrencyControl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cancel_strategy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cancel_strategy"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCancelStrategy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tag_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tag_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTagIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("variable_groups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("variable_groups"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVariableGroups(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("security_level_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("security_level_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityLevelCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("permissions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("permissions"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPermissions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("subject_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("subject_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSubjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("detail_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("detail_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDetailUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("modify_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("modify_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModifyUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<Object> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("is_cr_model"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_cr_model"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsCrModel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("archive_source"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("archive_source"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setArchiveSource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("yaml_repo_properties"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("yaml_repo_properties"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setYamlRepoProperties(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("variable_group_ids"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("variable_group_ids"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVariableGroupIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pac_source_alias"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pac_source_alias"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPacSourceAlias(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("pac_source_repo_https_endpoint"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pac_source_repo_https_endpoint"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPacSourceRepoHttpsEndpoint(refVal);
        }
    }
    return ok;
}


std::string ShowPipelineDetailResponse::getId() const
{
    return id_;
}

void ShowPipelineDetailResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowPipelineDetailResponse::idIsSet() const
{
    return idIsSet_;
}

void ShowPipelineDetailResponse::unsetid()
{
    idIsSet_ = false;
}

std::string ShowPipelineDetailResponse::getName() const
{
    return name_;
}

void ShowPipelineDetailResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowPipelineDetailResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ShowPipelineDetailResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string ShowPipelineDetailResponse::getDescription() const
{
    return description_;
}

void ShowPipelineDetailResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ShowPipelineDetailResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ShowPipelineDetailResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ShowPipelineDetailResponse::getManifestVersion() const
{
    return manifestVersion_;
}

void ShowPipelineDetailResponse::setManifestVersion(const std::string& value)
{
    manifestVersion_ = value;
    manifestVersionIsSet_ = true;
}

bool ShowPipelineDetailResponse::manifestVersionIsSet() const
{
    return manifestVersionIsSet_;
}

void ShowPipelineDetailResponse::unsetmanifestVersion()
{
    manifestVersionIsSet_ = false;
}

std::string ShowPipelineDetailResponse::getRegion() const
{
    return region_;
}

void ShowPipelineDetailResponse::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool ShowPipelineDetailResponse::regionIsSet() const
{
    return regionIsSet_;
}

void ShowPipelineDetailResponse::unsetregion()
{
    regionIsSet_ = false;
}

std::string ShowPipelineDetailResponse::getDomainId() const
{
    return domainId_;
}

void ShowPipelineDetailResponse::setDomainId(const std::string& value)
{
    domainId_ = value;
    domainIdIsSet_ = true;
}

bool ShowPipelineDetailResponse::domainIdIsSet() const
{
    return domainIdIsSet_;
}

void ShowPipelineDetailResponse::unsetdomainId()
{
    domainIdIsSet_ = false;
}

std::string ShowPipelineDetailResponse::getProjectId() const
{
    return projectId_;
}

void ShowPipelineDetailResponse::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool ShowPipelineDetailResponse::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void ShowPipelineDetailResponse::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string ShowPipelineDetailResponse::getComponentId() const
{
    return componentId_;
}

void ShowPipelineDetailResponse::setComponentId(const std::string& value)
{
    componentId_ = value;
    componentIdIsSet_ = true;
}

bool ShowPipelineDetailResponse::componentIdIsSet() const
{
    return componentIdIsSet_;
}

void ShowPipelineDetailResponse::unsetcomponentId()
{
    componentIdIsSet_ = false;
}

bool ShowPipelineDetailResponse::isIsPublish() const
{
    return isPublish_;
}

void ShowPipelineDetailResponse::setIsPublish(bool value)
{
    isPublish_ = value;
    isPublishIsSet_ = true;
}

bool ShowPipelineDetailResponse::isPublishIsSet() const
{
    return isPublishIsSet_;
}

void ShowPipelineDetailResponse::unsetisPublish()
{
    isPublishIsSet_ = false;
}

std::string ShowPipelineDetailResponse::getCreatorId() const
{
    return creatorId_;
}

void ShowPipelineDetailResponse::setCreatorId(const std::string& value)
{
    creatorId_ = value;
    creatorIdIsSet_ = true;
}

bool ShowPipelineDetailResponse::creatorIdIsSet() const
{
    return creatorIdIsSet_;
}

void ShowPipelineDetailResponse::unsetcreatorId()
{
    creatorIdIsSet_ = false;
}

std::string ShowPipelineDetailResponse::getCreatorName() const
{
    return creatorName_;
}

void ShowPipelineDetailResponse::setCreatorName(const std::string& value)
{
    creatorName_ = value;
    creatorNameIsSet_ = true;
}

bool ShowPipelineDetailResponse::creatorNameIsSet() const
{
    return creatorNameIsSet_;
}

void ShowPipelineDetailResponse::unsetcreatorName()
{
    creatorNameIsSet_ = false;
}

std::string ShowPipelineDetailResponse::getUpdaterId() const
{
    return updaterId_;
}

void ShowPipelineDetailResponse::setUpdaterId(const std::string& value)
{
    updaterId_ = value;
    updaterIdIsSet_ = true;
}

bool ShowPipelineDetailResponse::updaterIdIsSet() const
{
    return updaterIdIsSet_;
}

void ShowPipelineDetailResponse::unsetupdaterId()
{
    updaterIdIsSet_ = false;
}

int64_t ShowPipelineDetailResponse::getCreateTime() const
{
    return createTime_;
}

void ShowPipelineDetailResponse::setCreateTime(int64_t value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool ShowPipelineDetailResponse::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void ShowPipelineDetailResponse::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

int64_t ShowPipelineDetailResponse::getUpdateTime() const
{
    return updateTime_;
}

void ShowPipelineDetailResponse::setUpdateTime(int64_t value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool ShowPipelineDetailResponse::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void ShowPipelineDetailResponse::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

bool ShowPipelineDetailResponse::isIsCollect() const
{
    return isCollect_;
}

void ShowPipelineDetailResponse::setIsCollect(bool value)
{
    isCollect_ = value;
    isCollectIsSet_ = true;
}

bool ShowPipelineDetailResponse::isCollectIsSet() const
{
    return isCollectIsSet_;
}

void ShowPipelineDetailResponse::unsetisCollect()
{
    isCollectIsSet_ = false;
}

std::vector<PipelineSource>& ShowPipelineDetailResponse::getSources()
{
    return sources_;
}

void ShowPipelineDetailResponse::setSources(const std::vector<PipelineSource>& value)
{
    sources_ = value;
    sourcesIsSet_ = true;
}

bool ShowPipelineDetailResponse::sourcesIsSet() const
{
    return sourcesIsSet_;
}

void ShowPipelineDetailResponse::unsetsources()
{
    sourcesIsSet_ = false;
}

std::vector<PipelineVariable>& ShowPipelineDetailResponse::getVariables()
{
    return variables_;
}

void ShowPipelineDetailResponse::setVariables(const std::vector<PipelineVariable>& value)
{
    variables_ = value;
    variablesIsSet_ = true;
}

bool ShowPipelineDetailResponse::variablesIsSet() const
{
    return variablesIsSet_;
}

void ShowPipelineDetailResponse::unsetvariables()
{
    variablesIsSet_ = false;
}

std::vector<PipelineSchedule>& ShowPipelineDetailResponse::getSchedules()
{
    return schedules_;
}

void ShowPipelineDetailResponse::setSchedules(const std::vector<PipelineSchedule>& value)
{
    schedules_ = value;
    schedulesIsSet_ = true;
}

bool ShowPipelineDetailResponse::schedulesIsSet() const
{
    return schedulesIsSet_;
}

void ShowPipelineDetailResponse::unsetschedules()
{
    schedulesIsSet_ = false;
}

std::vector<PipelineTrigger>& ShowPipelineDetailResponse::getTriggers()
{
    return triggers_;
}

void ShowPipelineDetailResponse::setTriggers(const std::vector<PipelineTrigger>& value)
{
    triggers_ = value;
    triggersIsSet_ = true;
}

bool ShowPipelineDetailResponse::triggersIsSet() const
{
    return triggersIsSet_;
}

void ShowPipelineDetailResponse::unsettriggers()
{
    triggersIsSet_ = false;
}

std::string ShowPipelineDetailResponse::getGroupId() const
{
    return groupId_;
}

void ShowPipelineDetailResponse::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool ShowPipelineDetailResponse::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void ShowPipelineDetailResponse::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string ShowPipelineDetailResponse::getDefinition() const
{
    return definition_;
}

void ShowPipelineDetailResponse::setDefinition(const std::string& value)
{
    definition_ = value;
    definitionIsSet_ = true;
}

bool ShowPipelineDetailResponse::definitionIsSet() const
{
    return definitionIsSet_;
}

void ShowPipelineDetailResponse::unsetdefinition()
{
    definitionIsSet_ = false;
}

int32_t ShowPipelineDetailResponse::getSecurityLevel() const
{
    return securityLevel_;
}

void ShowPipelineDetailResponse::setSecurityLevel(int32_t value)
{
    securityLevel_ = value;
    securityLevelIsSet_ = true;
}

bool ShowPipelineDetailResponse::securityLevelIsSet() const
{
    return securityLevelIsSet_;
}

void ShowPipelineDetailResponse::unsetsecurityLevel()
{
    securityLevelIsSet_ = false;
}

std::string ShowPipelineDetailResponse::getOriginId() const
{
    return originId_;
}

void ShowPipelineDetailResponse::setOriginId(const std::string& value)
{
    originId_ = value;
    originIdIsSet_ = true;
}

bool ShowPipelineDetailResponse::originIdIsSet() const
{
    return originIdIsSet_;
}

void ShowPipelineDetailResponse::unsetoriginId()
{
    originIdIsSet_ = false;
}

bool ShowPipelineDetailResponse::isDisableReleaseBranchManagement() const
{
    return disableReleaseBranchManagement_;
}

void ShowPipelineDetailResponse::setDisableReleaseBranchManagement(bool value)
{
    disableReleaseBranchManagement_ = value;
    disableReleaseBranchManagementIsSet_ = true;
}

bool ShowPipelineDetailResponse::disableReleaseBranchManagementIsSet() const
{
    return disableReleaseBranchManagementIsSet_;
}

void ShowPipelineDetailResponse::unsetdisableReleaseBranchManagement()
{
    disableReleaseBranchManagementIsSet_ = false;
}

bool ShowPipelineDetailResponse::isDeleted() const
{
    return deleted_;
}

void ShowPipelineDetailResponse::setDeleted(bool value)
{
    deleted_ = value;
    deletedIsSet_ = true;
}

bool ShowPipelineDetailResponse::deletedIsSet() const
{
    return deletedIsSet_;
}

void ShowPipelineDetailResponse::unsetdeleted()
{
    deletedIsSet_ = false;
}

bool ShowPipelineDetailResponse::isBanned() const
{
    return banned_;
}

void ShowPipelineDetailResponse::setBanned(bool value)
{
    banned_ = value;
    bannedIsSet_ = true;
}

bool ShowPipelineDetailResponse::bannedIsSet() const
{
    return bannedIsSet_;
}

void ShowPipelineDetailResponse::unsetbanned()
{
    bannedIsSet_ = false;
}

bool ShowPipelineDetailResponse::isFromGitCode() const
{
    return fromGitCode_;
}

void ShowPipelineDetailResponse::setFromGitCode(bool value)
{
    fromGitCode_ = value;
    fromGitCodeIsSet_ = true;
}

bool ShowPipelineDetailResponse::fromGitCodeIsSet() const
{
    return fromGitCodeIsSet_;
}

void ShowPipelineDetailResponse::unsetfromGitCode()
{
    fromGitCodeIsSet_ = false;
}

bool ShowPipelineDetailResponse::isFromGitCodeRepo() const
{
    return fromGitCodeRepo_;
}

void ShowPipelineDetailResponse::setFromGitCodeRepo(bool value)
{
    fromGitCodeRepo_ = value;
    fromGitCodeRepoIsSet_ = true;
}

bool ShowPipelineDetailResponse::fromGitCodeRepoIsSet() const
{
    return fromGitCodeRepoIsSet_;
}

void ShowPipelineDetailResponse::unsetfromGitCodeRepo()
{
    fromGitCodeRepoIsSet_ = false;
}

std::string ShowPipelineDetailResponse::getGitCodeRepoId() const
{
    return gitCodeRepoId_;
}

void ShowPipelineDetailResponse::setGitCodeRepoId(const std::string& value)
{
    gitCodeRepoId_ = value;
    gitCodeRepoIdIsSet_ = true;
}

bool ShowPipelineDetailResponse::gitCodeRepoIdIsSet() const
{
    return gitCodeRepoIdIsSet_;
}

void ShowPipelineDetailResponse::unsetgitCodeRepoId()
{
    gitCodeRepoIdIsSet_ = false;
}

std::string ShowPipelineDetailResponse::getYamlDefinition() const
{
    return yamlDefinition_;
}

void ShowPipelineDetailResponse::setYamlDefinition(const std::string& value)
{
    yamlDefinition_ = value;
    yamlDefinitionIsSet_ = true;
}

bool ShowPipelineDetailResponse::yamlDefinitionIsSet() const
{
    return yamlDefinitionIsSet_;
}

void ShowPipelineDetailResponse::unsetyamlDefinition()
{
    yamlDefinitionIsSet_ = false;
}

Object ShowPipelineDetailResponse::getPacRepoRelation() const
{
    return pacRepoRelation_;
}

void ShowPipelineDetailResponse::setPacRepoRelation(const Object& value)
{
    pacRepoRelation_ = value;
    pacRepoRelationIsSet_ = true;
}

bool ShowPipelineDetailResponse::pacRepoRelationIsSet() const
{
    return pacRepoRelationIsSet_;
}

void ShowPipelineDetailResponse::unsetpacRepoRelation()
{
    pacRepoRelationIsSet_ = false;
}

std::string ShowPipelineDetailResponse::getYamlContent() const
{
    return yamlContent_;
}

void ShowPipelineDetailResponse::setYamlContent(const std::string& value)
{
    yamlContent_ = value;
    yamlContentIsSet_ = true;
}

bool ShowPipelineDetailResponse::yamlContentIsSet() const
{
    return yamlContentIsSet_;
}

void ShowPipelineDetailResponse::unsetyamlContent()
{
    yamlContentIsSet_ = false;
}

std::string ShowPipelineDetailResponse::getAgencyName() const
{
    return agencyName_;
}

void ShowPipelineDetailResponse::setAgencyName(const std::string& value)
{
    agencyName_ = value;
    agencyNameIsSet_ = true;
}

bool ShowPipelineDetailResponse::agencyNameIsSet() const
{
    return agencyNameIsSet_;
}

void ShowPipelineDetailResponse::unsetagencyName()
{
    agencyNameIsSet_ = false;
}

std::vector<Object>& ShowPipelineDetailResponse::getExecutionPlans()
{
    return executionPlans_;
}

void ShowPipelineDetailResponse::setExecutionPlans(const std::vector<Object>& value)
{
    executionPlans_ = value;
    executionPlansIsSet_ = true;
}

bool ShowPipelineDetailResponse::executionPlansIsSet() const
{
    return executionPlansIsSet_;
}

void ShowPipelineDetailResponse::unsetexecutionPlans()
{
    executionPlansIsSet_ = false;
}

int32_t ShowPipelineDetailResponse::getFromSource() const
{
    return fromSource_;
}

void ShowPipelineDetailResponse::setFromSource(int32_t value)
{
    fromSource_ = value;
    fromSourceIsSet_ = true;
}

bool ShowPipelineDetailResponse::fromSourceIsSet() const
{
    return fromSourceIsSet_;
}

void ShowPipelineDetailResponse::unsetfromSource()
{
    fromSourceIsSet_ = false;
}

std::string ShowPipelineDetailResponse::getProjectName() const
{
    return projectName_;
}

void ShowPipelineDetailResponse::setProjectName(const std::string& value)
{
    projectName_ = value;
    projectNameIsSet_ = true;
}

bool ShowPipelineDetailResponse::projectNameIsSet() const
{
    return projectNameIsSet_;
}

void ShowPipelineDetailResponse::unsetprojectName()
{
    projectNameIsSet_ = false;
}

std::string ShowPipelineDetailResponse::getGroupName() const
{
    return groupName_;
}

void ShowPipelineDetailResponse::setGroupName(const std::string& value)
{
    groupName_ = value;
    groupNameIsSet_ = true;
}

bool ShowPipelineDetailResponse::groupNameIsSet() const
{
    return groupNameIsSet_;
}

void ShowPipelineDetailResponse::unsetgroupName()
{
    groupNameIsSet_ = false;
}

PipelineConcurrencyMgmt ShowPipelineDetailResponse::getConcurrencyControl() const
{
    return concurrencyControl_;
}

void ShowPipelineDetailResponse::setConcurrencyControl(const PipelineConcurrencyMgmt& value)
{
    concurrencyControl_ = value;
    concurrencyControlIsSet_ = true;
}

bool ShowPipelineDetailResponse::concurrencyControlIsSet() const
{
    return concurrencyControlIsSet_;
}

void ShowPipelineDetailResponse::unsetconcurrencyControl()
{
    concurrencyControlIsSet_ = false;
}

Object ShowPipelineDetailResponse::getCancelStrategy() const
{
    return cancelStrategy_;
}

void ShowPipelineDetailResponse::setCancelStrategy(const Object& value)
{
    cancelStrategy_ = value;
    cancelStrategyIsSet_ = true;
}

bool ShowPipelineDetailResponse::cancelStrategyIsSet() const
{
    return cancelStrategyIsSet_;
}

void ShowPipelineDetailResponse::unsetcancelStrategy()
{
    cancelStrategyIsSet_ = false;
}

std::vector<std::string>& ShowPipelineDetailResponse::getTagIds()
{
    return tagIds_;
}

void ShowPipelineDetailResponse::setTagIds(const std::vector<std::string>& value)
{
    tagIds_ = value;
    tagIdsIsSet_ = true;
}

bool ShowPipelineDetailResponse::tagIdsIsSet() const
{
    return tagIdsIsSet_;
}

void ShowPipelineDetailResponse::unsettagIds()
{
    tagIdsIsSet_ = false;
}

std::vector<std::string>& ShowPipelineDetailResponse::getVariableGroups()
{
    return variableGroups_;
}

void ShowPipelineDetailResponse::setVariableGroups(const std::vector<std::string>& value)
{
    variableGroups_ = value;
    variableGroupsIsSet_ = true;
}

bool ShowPipelineDetailResponse::variableGroupsIsSet() const
{
    return variableGroupsIsSet_;
}

void ShowPipelineDetailResponse::unsetvariableGroups()
{
    variableGroupsIsSet_ = false;
}

std::string ShowPipelineDetailResponse::getSecurityLevelCode() const
{
    return securityLevelCode_;
}

void ShowPipelineDetailResponse::setSecurityLevelCode(const std::string& value)
{
    securityLevelCode_ = value;
    securityLevelCodeIsSet_ = true;
}

bool ShowPipelineDetailResponse::securityLevelCodeIsSet() const
{
    return securityLevelCodeIsSet_;
}

void ShowPipelineDetailResponse::unsetsecurityLevelCode()
{
    securityLevelCodeIsSet_ = false;
}

Object ShowPipelineDetailResponse::getPermissions() const
{
    return permissions_;
}

void ShowPipelineDetailResponse::setPermissions(const Object& value)
{
    permissions_ = value;
    permissionsIsSet_ = true;
}

bool ShowPipelineDetailResponse::permissionsIsSet() const
{
    return permissionsIsSet_;
}

void ShowPipelineDetailResponse::unsetpermissions()
{
    permissionsIsSet_ = false;
}

std::string ShowPipelineDetailResponse::getSubjectId() const
{
    return subjectId_;
}

void ShowPipelineDetailResponse::setSubjectId(const std::string& value)
{
    subjectId_ = value;
    subjectIdIsSet_ = true;
}

bool ShowPipelineDetailResponse::subjectIdIsSet() const
{
    return subjectIdIsSet_;
}

void ShowPipelineDetailResponse::unsetsubjectId()
{
    subjectIdIsSet_ = false;
}

std::string ShowPipelineDetailResponse::getDetailUrl() const
{
    return detailUrl_;
}

void ShowPipelineDetailResponse::setDetailUrl(const std::string& value)
{
    detailUrl_ = value;
    detailUrlIsSet_ = true;
}

bool ShowPipelineDetailResponse::detailUrlIsSet() const
{
    return detailUrlIsSet_;
}

void ShowPipelineDetailResponse::unsetdetailUrl()
{
    detailUrlIsSet_ = false;
}

std::string ShowPipelineDetailResponse::getModifyUrl() const
{
    return modifyUrl_;
}

void ShowPipelineDetailResponse::setModifyUrl(const std::string& value)
{
    modifyUrl_ = value;
    modifyUrlIsSet_ = true;
}

bool ShowPipelineDetailResponse::modifyUrlIsSet() const
{
    return modifyUrlIsSet_;
}

void ShowPipelineDetailResponse::unsetmodifyUrl()
{
    modifyUrlIsSet_ = false;
}

std::vector<Object>& ShowPipelineDetailResponse::getTags()
{
    return tags_;
}

void ShowPipelineDetailResponse::setTags(const std::vector<Object>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ShowPipelineDetailResponse::tagsIsSet() const
{
    return tagsIsSet_;
}

void ShowPipelineDetailResponse::unsettags()
{
    tagsIsSet_ = false;
}

bool ShowPipelineDetailResponse::isIsCrModel() const
{
    return isCrModel_;
}

void ShowPipelineDetailResponse::setIsCrModel(bool value)
{
    isCrModel_ = value;
    isCrModelIsSet_ = true;
}

bool ShowPipelineDetailResponse::isCrModelIsSet() const
{
    return isCrModelIsSet_;
}

void ShowPipelineDetailResponse::unsetisCrModel()
{
    isCrModelIsSet_ = false;
}

Object ShowPipelineDetailResponse::getArchiveSource() const
{
    return archiveSource_;
}

void ShowPipelineDetailResponse::setArchiveSource(const Object& value)
{
    archiveSource_ = value;
    archiveSourceIsSet_ = true;
}

bool ShowPipelineDetailResponse::archiveSourceIsSet() const
{
    return archiveSourceIsSet_;
}

void ShowPipelineDetailResponse::unsetarchiveSource()
{
    archiveSourceIsSet_ = false;
}

Object ShowPipelineDetailResponse::getYamlRepoProperties() const
{
    return yamlRepoProperties_;
}

void ShowPipelineDetailResponse::setYamlRepoProperties(const Object& value)
{
    yamlRepoProperties_ = value;
    yamlRepoPropertiesIsSet_ = true;
}

bool ShowPipelineDetailResponse::yamlRepoPropertiesIsSet() const
{
    return yamlRepoPropertiesIsSet_;
}

void ShowPipelineDetailResponse::unsetyamlRepoProperties()
{
    yamlRepoPropertiesIsSet_ = false;
}

std::vector<std::string>& ShowPipelineDetailResponse::getVariableGroupIds()
{
    return variableGroupIds_;
}

void ShowPipelineDetailResponse::setVariableGroupIds(const std::vector<std::string>& value)
{
    variableGroupIds_ = value;
    variableGroupIdsIsSet_ = true;
}

bool ShowPipelineDetailResponse::variableGroupIdsIsSet() const
{
    return variableGroupIdsIsSet_;
}

void ShowPipelineDetailResponse::unsetvariableGroupIds()
{
    variableGroupIdsIsSet_ = false;
}

std::string ShowPipelineDetailResponse::getPacSourceAlias() const
{
    return pacSourceAlias_;
}

void ShowPipelineDetailResponse::setPacSourceAlias(const std::string& value)
{
    pacSourceAlias_ = value;
    pacSourceAliasIsSet_ = true;
}

bool ShowPipelineDetailResponse::pacSourceAliasIsSet() const
{
    return pacSourceAliasIsSet_;
}

void ShowPipelineDetailResponse::unsetpacSourceAlias()
{
    pacSourceAliasIsSet_ = false;
}

std::string ShowPipelineDetailResponse::getPacSourceRepoHttpsEndpoint() const
{
    return pacSourceRepoHttpsEndpoint_;
}

void ShowPipelineDetailResponse::setPacSourceRepoHttpsEndpoint(const std::string& value)
{
    pacSourceRepoHttpsEndpoint_ = value;
    pacSourceRepoHttpsEndpointIsSet_ = true;
}

bool ShowPipelineDetailResponse::pacSourceRepoHttpsEndpointIsSet() const
{
    return pacSourceRepoHttpsEndpointIsSet_;
}

void ShowPipelineDetailResponse::unsetpacSourceRepoHttpsEndpoint()
{
    pacSourceRepoHttpsEndpointIsSet_ = false;
}

}
}
}
}
}


