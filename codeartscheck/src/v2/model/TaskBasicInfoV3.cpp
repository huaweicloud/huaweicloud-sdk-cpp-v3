

#include "huaweicloud/codeartscheck/v2/model/TaskBasicInfoV3.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartscheck {
namespace V2 {
namespace Model {




TaskBasicInfoV3::TaskBasicInfoV3()
{
    avastarType_ = "";
    avastarTypeIsSet_ = false;
    branchName_ = "";
    branchNameIsSet_ = false;
    canChangeIgnoreMode_ = false;
    canChangeIgnoreModeIsSet_ = false;
    canDelete_ = false;
    canDeleteIsSet_ = false;
    canEdit_ = false;
    canEditIsSet_ = false;
    canEditTemplateSwitch_ = false;
    canEditTemplateSwitchIsSet_ = false;
    canExecute_ = false;
    canExecuteIsSet_ = false;
    canRead_ = false;
    canReadIsSet_ = false;
    checkParamListIsSet_ = false;
    checkParamMapIsSet_ = false;
    configTemplateId_ = "";
    configTemplateIdIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    criterionSetsIsSet_ = false;
    customParamsIsSet_ = false;
    defaultBranchName_ = "";
    defaultBranchNameIsSet_ = false;
    fileEncoding_ = "";
    fileEncodingIsSet_ = false;
    hwCloudRegion_ = "";
    hwCloudRegionIsSet_ = false;
    id_ = "";
    idIsSet_ = false;
    includePaths_ = "";
    includePathsIsSet_ = false;
    isSetMrWebhook_ = false;
    isSetMrWebhookIsSet_ = false;
    isSetPushWebhook_ = false;
    isSetPushWebhookIsSet_ = false;
    isSetWebhook_ = false;
    isSetWebhookIsSet_ = false;
    isTemplateTask_ = false;
    isTemplateTaskIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    jobTimeout_ = "";
    jobTimeoutIsSet_ = false;
    lastFinishedFullJobId_ = "";
    lastFinishedFullJobIdIsSet_ = false;
    lastJobIsSet_ = false;
    lastReviser_ = "";
    lastReviserIsSet_ = false;
    lastUpdateTime_ = "";
    lastUpdateTimeIsSet_ = false;
    modelSetsIsSet_ = false;
    mrCheckBranchStrategy_ = 0;
    mrCheckBranchStrategyIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    notificationConfig_ = "";
    notificationConfigIsSet_ = false;
    owner_ = "";
    ownerIsSet_ = false;
    ownerId_ = "";
    ownerIdIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    projectName_ = "";
    projectNameIsSet_ = false;
    region_ = "";
    regionIsSet_ = false;
    repoId_ = "";
    repoIdIsSet_ = false;
    repoUrl_ = "";
    repoUrlIsSet_ = false;
    reviewDataIsSet_ = false;
    ruleSetsIsSet_ = false;
    source_ = "";
    sourceIsSet_ = false;
    taskGroupId_ = "";
    taskGroupIdIsSet_ = false;
    taskIdsIsSet_ = false;
    tenantId_ = "";
    tenantIdIsSet_ = false;
    useCache_ = false;
    useCacheIsSet_ = false;
    useWorkspaceNotificationConfig_ = 0;
    useWorkspaceNotificationConfigIsSet_ = false;
    versionUpdateDelayDaysIsSet_ = false;
    webhookCheckMode_ = 0;
    webhookCheckModeIsSet_ = false;
    zone_ = "";
    zoneIsSet_ = false;
}

TaskBasicInfoV3::~TaskBasicInfoV3() = default;

void TaskBasicInfoV3::validate()
{
}

web::json::value TaskBasicInfoV3::toJson() const
{
    web::json::value val = web::json::value::object();

    if(avastarTypeIsSet_) {
        val[utility::conversions::to_string_t("avastarType")] = ModelBase::toJson(avastarType_);
    }
    if(branchNameIsSet_) {
        val[utility::conversions::to_string_t("branchName")] = ModelBase::toJson(branchName_);
    }
    if(canChangeIgnoreModeIsSet_) {
        val[utility::conversions::to_string_t("canChangeIgnoreMode")] = ModelBase::toJson(canChangeIgnoreMode_);
    }
    if(canDeleteIsSet_) {
        val[utility::conversions::to_string_t("canDelete")] = ModelBase::toJson(canDelete_);
    }
    if(canEditIsSet_) {
        val[utility::conversions::to_string_t("canEdit")] = ModelBase::toJson(canEdit_);
    }
    if(canEditTemplateSwitchIsSet_) {
        val[utility::conversions::to_string_t("canEditTemplateSwitch")] = ModelBase::toJson(canEditTemplateSwitch_);
    }
    if(canExecuteIsSet_) {
        val[utility::conversions::to_string_t("canExecute")] = ModelBase::toJson(canExecute_);
    }
    if(canReadIsSet_) {
        val[utility::conversions::to_string_t("canRead")] = ModelBase::toJson(canRead_);
    }
    if(checkParamListIsSet_) {
        val[utility::conversions::to_string_t("checkParamList")] = ModelBase::toJson(checkParamList_);
    }
    if(checkParamMapIsSet_) {
        val[utility::conversions::to_string_t("checkParamMap")] = ModelBase::toJson(checkParamMap_);
    }
    if(configTemplateIdIsSet_) {
        val[utility::conversions::to_string_t("configTemplateId")] = ModelBase::toJson(configTemplateId_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("createTime")] = ModelBase::toJson(createTime_);
    }
    if(criterionSetsIsSet_) {
        val[utility::conversions::to_string_t("criterionSets")] = ModelBase::toJson(criterionSets_);
    }
    if(customParamsIsSet_) {
        val[utility::conversions::to_string_t("customParams")] = ModelBase::toJson(customParams_);
    }
    if(defaultBranchNameIsSet_) {
        val[utility::conversions::to_string_t("defaultBranchName")] = ModelBase::toJson(defaultBranchName_);
    }
    if(fileEncodingIsSet_) {
        val[utility::conversions::to_string_t("fileEncoding")] = ModelBase::toJson(fileEncoding_);
    }
    if(hwCloudRegionIsSet_) {
        val[utility::conversions::to_string_t("hwCloudRegion")] = ModelBase::toJson(hwCloudRegion_);
    }
    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(includePathsIsSet_) {
        val[utility::conversions::to_string_t("includePaths")] = ModelBase::toJson(includePaths_);
    }
    if(isSetMrWebhookIsSet_) {
        val[utility::conversions::to_string_t("isSetMrWebhook")] = ModelBase::toJson(isSetMrWebhook_);
    }
    if(isSetPushWebhookIsSet_) {
        val[utility::conversions::to_string_t("isSetPushWebhook")] = ModelBase::toJson(isSetPushWebhook_);
    }
    if(isSetWebhookIsSet_) {
        val[utility::conversions::to_string_t("isSetWebhook")] = ModelBase::toJson(isSetWebhook_);
    }
    if(isTemplateTaskIsSet_) {
        val[utility::conversions::to_string_t("isTemplateTask")] = ModelBase::toJson(isTemplateTask_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("jobId")] = ModelBase::toJson(jobId_);
    }
    if(jobTimeoutIsSet_) {
        val[utility::conversions::to_string_t("jobTimeout")] = ModelBase::toJson(jobTimeout_);
    }
    if(lastFinishedFullJobIdIsSet_) {
        val[utility::conversions::to_string_t("lastFinishedFullJobId")] = ModelBase::toJson(lastFinishedFullJobId_);
    }
    if(lastJobIsSet_) {
        val[utility::conversions::to_string_t("lastJob")] = ModelBase::toJson(lastJob_);
    }
    if(lastReviserIsSet_) {
        val[utility::conversions::to_string_t("lastReviser")] = ModelBase::toJson(lastReviser_);
    }
    if(lastUpdateTimeIsSet_) {
        val[utility::conversions::to_string_t("lastUpdateTime")] = ModelBase::toJson(lastUpdateTime_);
    }
    if(modelSetsIsSet_) {
        val[utility::conversions::to_string_t("modelSets")] = ModelBase::toJson(modelSets_);
    }
    if(mrCheckBranchStrategyIsSet_) {
        val[utility::conversions::to_string_t("mrCheckBranchStrategy")] = ModelBase::toJson(mrCheckBranchStrategy_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(notificationConfigIsSet_) {
        val[utility::conversions::to_string_t("notificationConfig")] = ModelBase::toJson(notificationConfig_);
    }
    if(ownerIsSet_) {
        val[utility::conversions::to_string_t("owner")] = ModelBase::toJson(owner_);
    }
    if(ownerIdIsSet_) {
        val[utility::conversions::to_string_t("ownerId")] = ModelBase::toJson(ownerId_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("projectId")] = ModelBase::toJson(projectId_);
    }
    if(projectNameIsSet_) {
        val[utility::conversions::to_string_t("projectName")] = ModelBase::toJson(projectName_);
    }
    if(regionIsSet_) {
        val[utility::conversions::to_string_t("region")] = ModelBase::toJson(region_);
    }
    if(repoIdIsSet_) {
        val[utility::conversions::to_string_t("repoId")] = ModelBase::toJson(repoId_);
    }
    if(repoUrlIsSet_) {
        val[utility::conversions::to_string_t("repoUrl")] = ModelBase::toJson(repoUrl_);
    }
    if(reviewDataIsSet_) {
        val[utility::conversions::to_string_t("reviewData")] = ModelBase::toJson(reviewData_);
    }
    if(ruleSetsIsSet_) {
        val[utility::conversions::to_string_t("ruleSets")] = ModelBase::toJson(ruleSets_);
    }
    if(sourceIsSet_) {
        val[utility::conversions::to_string_t("source")] = ModelBase::toJson(source_);
    }
    if(taskGroupIdIsSet_) {
        val[utility::conversions::to_string_t("taskGroupId")] = ModelBase::toJson(taskGroupId_);
    }
    if(taskIdsIsSet_) {
        val[utility::conversions::to_string_t("taskIds")] = ModelBase::toJson(taskIds_);
    }
    if(tenantIdIsSet_) {
        val[utility::conversions::to_string_t("tenantId")] = ModelBase::toJson(tenantId_);
    }
    if(useCacheIsSet_) {
        val[utility::conversions::to_string_t("useCache")] = ModelBase::toJson(useCache_);
    }
    if(useWorkspaceNotificationConfigIsSet_) {
        val[utility::conversions::to_string_t("useWorkspaceNotificationConfig")] = ModelBase::toJson(useWorkspaceNotificationConfig_);
    }
    if(versionUpdateDelayDaysIsSet_) {
        val[utility::conversions::to_string_t("versionUpdateDelayDays")] = ModelBase::toJson(versionUpdateDelayDays_);
    }
    if(webhookCheckModeIsSet_) {
        val[utility::conversions::to_string_t("webhookCheckMode")] = ModelBase::toJson(webhookCheckMode_);
    }
    if(zoneIsSet_) {
        val[utility::conversions::to_string_t("zone")] = ModelBase::toJson(zone_);
    }

    return val;
}
bool TaskBasicInfoV3::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("avastarType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("avastarType"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAvastarType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("branchName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("branchName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBranchName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("canChangeIgnoreMode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("canChangeIgnoreMode"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCanChangeIgnoreMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("canDelete"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("canDelete"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCanDelete(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("canEdit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("canEdit"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCanEdit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("canEditTemplateSwitch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("canEditTemplateSwitch"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCanEditTemplateSwitch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("canExecute"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("canExecute"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCanExecute(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("canRead"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("canRead"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCanRead(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("checkParamList"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("checkParamList"));
        if(!fieldValue.is_null())
        {
            std::vector<CustomParameter> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCheckParamList(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("checkParamMap"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("checkParamMap"));
        if(!fieldValue.is_null())
        {
            TaskBasicInfoV3_checkParamMap refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCheckParamMap(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("configTemplateId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("configTemplateId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigTemplateId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("createTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("createTime"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("criterionSets"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("criterionSets"));
        if(!fieldValue.is_null())
        {
            std::vector<ConfigTemplateRuleSetInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCriterionSets(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("customParams"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("customParams"));
        if(!fieldValue.is_null())
        {
            std::vector<CustomParameter> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomParams(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("defaultBranchName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("defaultBranchName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDefaultBranchName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("fileEncoding"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("fileEncoding"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFileEncoding(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hwCloudRegion"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hwCloudRegion"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHwCloudRegion(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("includePaths"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("includePaths"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIncludePaths(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isSetMrWebhook"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isSetMrWebhook"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSetMrWebhook(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isSetPushWebhook"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isSetPushWebhook"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSetPushWebhook(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isSetWebhook"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isSetWebhook"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsSetWebhook(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isTemplateTask"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isTemplateTask"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsTemplateTask(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("jobId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("jobId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("jobTimeout"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("jobTimeout"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobTimeout(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lastFinishedFullJobId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lastFinishedFullJobId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastFinishedFullJobId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lastJob"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lastJob"));
        if(!fieldValue.is_null())
        {
            JobBasicInfoV3 refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastJob(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lastReviser"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lastReviser"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastReviser(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lastUpdateTime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lastUpdateTime"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastUpdateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("modelSets"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("modelSets"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModelSets(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mrCheckBranchStrategy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mrCheckBranchStrategy"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMrCheckBranchStrategy(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("notificationConfig"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("notificationConfig"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNotificationConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("owner"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("owner"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwner(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ownerId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ownerId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwnerId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("projectId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("projectId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("projectName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("projectName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("repoId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repoId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepoId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("repoUrl"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("repoUrl"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRepoUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("reviewData"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("reviewData"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setReviewData(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ruleSets"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ruleSets"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuleSets(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("source"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("source"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSource(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("taskGroupId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("taskGroupId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("taskIds"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("taskIds"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskIds(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tenantId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tenantId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTenantId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("useCache"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("useCache"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUseCache(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("useWorkspaceNotificationConfig"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("useWorkspaceNotificationConfig"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUseWorkspaceNotificationConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("versionUpdateDelayDays"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("versionUpdateDelayDays"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionUpdateDelayDays(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("webhookCheckMode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("webhookCheckMode"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWebhookCheckMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("zone"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("zone"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setZone(refVal);
        }
    }
    return ok;
}


std::string TaskBasicInfoV3::getAvastarType() const
{
    return avastarType_;
}

void TaskBasicInfoV3::setAvastarType(const std::string& value)
{
    avastarType_ = value;
    avastarTypeIsSet_ = true;
}

bool TaskBasicInfoV3::avastarTypeIsSet() const
{
    return avastarTypeIsSet_;
}

void TaskBasicInfoV3::unsetavastarType()
{
    avastarTypeIsSet_ = false;
}

std::string TaskBasicInfoV3::getBranchName() const
{
    return branchName_;
}

void TaskBasicInfoV3::setBranchName(const std::string& value)
{
    branchName_ = value;
    branchNameIsSet_ = true;
}

bool TaskBasicInfoV3::branchNameIsSet() const
{
    return branchNameIsSet_;
}

void TaskBasicInfoV3::unsetbranchName()
{
    branchNameIsSet_ = false;
}

bool TaskBasicInfoV3::isCanChangeIgnoreMode() const
{
    return canChangeIgnoreMode_;
}

void TaskBasicInfoV3::setCanChangeIgnoreMode(bool value)
{
    canChangeIgnoreMode_ = value;
    canChangeIgnoreModeIsSet_ = true;
}

bool TaskBasicInfoV3::canChangeIgnoreModeIsSet() const
{
    return canChangeIgnoreModeIsSet_;
}

void TaskBasicInfoV3::unsetcanChangeIgnoreMode()
{
    canChangeIgnoreModeIsSet_ = false;
}

bool TaskBasicInfoV3::isCanDelete() const
{
    return canDelete_;
}

void TaskBasicInfoV3::setCanDelete(bool value)
{
    canDelete_ = value;
    canDeleteIsSet_ = true;
}

bool TaskBasicInfoV3::canDeleteIsSet() const
{
    return canDeleteIsSet_;
}

void TaskBasicInfoV3::unsetcanDelete()
{
    canDeleteIsSet_ = false;
}

bool TaskBasicInfoV3::isCanEdit() const
{
    return canEdit_;
}

void TaskBasicInfoV3::setCanEdit(bool value)
{
    canEdit_ = value;
    canEditIsSet_ = true;
}

bool TaskBasicInfoV3::canEditIsSet() const
{
    return canEditIsSet_;
}

void TaskBasicInfoV3::unsetcanEdit()
{
    canEditIsSet_ = false;
}

bool TaskBasicInfoV3::isCanEditTemplateSwitch() const
{
    return canEditTemplateSwitch_;
}

void TaskBasicInfoV3::setCanEditTemplateSwitch(bool value)
{
    canEditTemplateSwitch_ = value;
    canEditTemplateSwitchIsSet_ = true;
}

bool TaskBasicInfoV3::canEditTemplateSwitchIsSet() const
{
    return canEditTemplateSwitchIsSet_;
}

void TaskBasicInfoV3::unsetcanEditTemplateSwitch()
{
    canEditTemplateSwitchIsSet_ = false;
}

bool TaskBasicInfoV3::isCanExecute() const
{
    return canExecute_;
}

void TaskBasicInfoV3::setCanExecute(bool value)
{
    canExecute_ = value;
    canExecuteIsSet_ = true;
}

bool TaskBasicInfoV3::canExecuteIsSet() const
{
    return canExecuteIsSet_;
}

void TaskBasicInfoV3::unsetcanExecute()
{
    canExecuteIsSet_ = false;
}

bool TaskBasicInfoV3::isCanRead() const
{
    return canRead_;
}

void TaskBasicInfoV3::setCanRead(bool value)
{
    canRead_ = value;
    canReadIsSet_ = true;
}

bool TaskBasicInfoV3::canReadIsSet() const
{
    return canReadIsSet_;
}

void TaskBasicInfoV3::unsetcanRead()
{
    canReadIsSet_ = false;
}

std::vector<CustomParameter>& TaskBasicInfoV3::getCheckParamList()
{
    return checkParamList_;
}

void TaskBasicInfoV3::setCheckParamList(const std::vector<CustomParameter>& value)
{
    checkParamList_ = value;
    checkParamListIsSet_ = true;
}

bool TaskBasicInfoV3::checkParamListIsSet() const
{
    return checkParamListIsSet_;
}

void TaskBasicInfoV3::unsetcheckParamList()
{
    checkParamListIsSet_ = false;
}

TaskBasicInfoV3_checkParamMap TaskBasicInfoV3::getCheckParamMap() const
{
    return checkParamMap_;
}

void TaskBasicInfoV3::setCheckParamMap(const TaskBasicInfoV3_checkParamMap& value)
{
    checkParamMap_ = value;
    checkParamMapIsSet_ = true;
}

bool TaskBasicInfoV3::checkParamMapIsSet() const
{
    return checkParamMapIsSet_;
}

void TaskBasicInfoV3::unsetcheckParamMap()
{
    checkParamMapIsSet_ = false;
}

std::string TaskBasicInfoV3::getConfigTemplateId() const
{
    return configTemplateId_;
}

void TaskBasicInfoV3::setConfigTemplateId(const std::string& value)
{
    configTemplateId_ = value;
    configTemplateIdIsSet_ = true;
}

bool TaskBasicInfoV3::configTemplateIdIsSet() const
{
    return configTemplateIdIsSet_;
}

void TaskBasicInfoV3::unsetconfigTemplateId()
{
    configTemplateIdIsSet_ = false;
}

std::string TaskBasicInfoV3::getCreateTime() const
{
    return createTime_;
}

void TaskBasicInfoV3::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool TaskBasicInfoV3::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void TaskBasicInfoV3::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::vector<ConfigTemplateRuleSetInfo>& TaskBasicInfoV3::getCriterionSets()
{
    return criterionSets_;
}

void TaskBasicInfoV3::setCriterionSets(const std::vector<ConfigTemplateRuleSetInfo>& value)
{
    criterionSets_ = value;
    criterionSetsIsSet_ = true;
}

bool TaskBasicInfoV3::criterionSetsIsSet() const
{
    return criterionSetsIsSet_;
}

void TaskBasicInfoV3::unsetcriterionSets()
{
    criterionSetsIsSet_ = false;
}

std::vector<CustomParameter>& TaskBasicInfoV3::getCustomParams()
{
    return customParams_;
}

void TaskBasicInfoV3::setCustomParams(const std::vector<CustomParameter>& value)
{
    customParams_ = value;
    customParamsIsSet_ = true;
}

bool TaskBasicInfoV3::customParamsIsSet() const
{
    return customParamsIsSet_;
}

void TaskBasicInfoV3::unsetcustomParams()
{
    customParamsIsSet_ = false;
}

std::string TaskBasicInfoV3::getDefaultBranchName() const
{
    return defaultBranchName_;
}

void TaskBasicInfoV3::setDefaultBranchName(const std::string& value)
{
    defaultBranchName_ = value;
    defaultBranchNameIsSet_ = true;
}

bool TaskBasicInfoV3::defaultBranchNameIsSet() const
{
    return defaultBranchNameIsSet_;
}

void TaskBasicInfoV3::unsetdefaultBranchName()
{
    defaultBranchNameIsSet_ = false;
}

std::string TaskBasicInfoV3::getFileEncoding() const
{
    return fileEncoding_;
}

void TaskBasicInfoV3::setFileEncoding(const std::string& value)
{
    fileEncoding_ = value;
    fileEncodingIsSet_ = true;
}

bool TaskBasicInfoV3::fileEncodingIsSet() const
{
    return fileEncodingIsSet_;
}

void TaskBasicInfoV3::unsetfileEncoding()
{
    fileEncodingIsSet_ = false;
}

std::string TaskBasicInfoV3::getHwCloudRegion() const
{
    return hwCloudRegion_;
}

void TaskBasicInfoV3::setHwCloudRegion(const std::string& value)
{
    hwCloudRegion_ = value;
    hwCloudRegionIsSet_ = true;
}

bool TaskBasicInfoV3::hwCloudRegionIsSet() const
{
    return hwCloudRegionIsSet_;
}

void TaskBasicInfoV3::unsethwCloudRegion()
{
    hwCloudRegionIsSet_ = false;
}

std::string TaskBasicInfoV3::getId() const
{
    return id_;
}

void TaskBasicInfoV3::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool TaskBasicInfoV3::idIsSet() const
{
    return idIsSet_;
}

void TaskBasicInfoV3::unsetid()
{
    idIsSet_ = false;
}

std::string TaskBasicInfoV3::getIncludePaths() const
{
    return includePaths_;
}

void TaskBasicInfoV3::setIncludePaths(const std::string& value)
{
    includePaths_ = value;
    includePathsIsSet_ = true;
}

bool TaskBasicInfoV3::includePathsIsSet() const
{
    return includePathsIsSet_;
}

void TaskBasicInfoV3::unsetincludePaths()
{
    includePathsIsSet_ = false;
}

bool TaskBasicInfoV3::isIsSetMrWebhook() const
{
    return isSetMrWebhook_;
}

void TaskBasicInfoV3::setIsSetMrWebhook(bool value)
{
    isSetMrWebhook_ = value;
    isSetMrWebhookIsSet_ = true;
}

bool TaskBasicInfoV3::isSetMrWebhookIsSet() const
{
    return isSetMrWebhookIsSet_;
}

void TaskBasicInfoV3::unsetisSetMrWebhook()
{
    isSetMrWebhookIsSet_ = false;
}

bool TaskBasicInfoV3::isIsSetPushWebhook() const
{
    return isSetPushWebhook_;
}

void TaskBasicInfoV3::setIsSetPushWebhook(bool value)
{
    isSetPushWebhook_ = value;
    isSetPushWebhookIsSet_ = true;
}

bool TaskBasicInfoV3::isSetPushWebhookIsSet() const
{
    return isSetPushWebhookIsSet_;
}

void TaskBasicInfoV3::unsetisSetPushWebhook()
{
    isSetPushWebhookIsSet_ = false;
}

bool TaskBasicInfoV3::isIsSetWebhook() const
{
    return isSetWebhook_;
}

void TaskBasicInfoV3::setIsSetWebhook(bool value)
{
    isSetWebhook_ = value;
    isSetWebhookIsSet_ = true;
}

bool TaskBasicInfoV3::isSetWebhookIsSet() const
{
    return isSetWebhookIsSet_;
}

void TaskBasicInfoV3::unsetisSetWebhook()
{
    isSetWebhookIsSet_ = false;
}

bool TaskBasicInfoV3::isIsTemplateTask() const
{
    return isTemplateTask_;
}

void TaskBasicInfoV3::setIsTemplateTask(bool value)
{
    isTemplateTask_ = value;
    isTemplateTaskIsSet_ = true;
}

bool TaskBasicInfoV3::isTemplateTaskIsSet() const
{
    return isTemplateTaskIsSet_;
}

void TaskBasicInfoV3::unsetisTemplateTask()
{
    isTemplateTaskIsSet_ = false;
}

std::string TaskBasicInfoV3::getJobId() const
{
    return jobId_;
}

void TaskBasicInfoV3::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool TaskBasicInfoV3::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void TaskBasicInfoV3::unsetjobId()
{
    jobIdIsSet_ = false;
}

std::string TaskBasicInfoV3::getJobTimeout() const
{
    return jobTimeout_;
}

void TaskBasicInfoV3::setJobTimeout(const std::string& value)
{
    jobTimeout_ = value;
    jobTimeoutIsSet_ = true;
}

bool TaskBasicInfoV3::jobTimeoutIsSet() const
{
    return jobTimeoutIsSet_;
}

void TaskBasicInfoV3::unsetjobTimeout()
{
    jobTimeoutIsSet_ = false;
}

std::string TaskBasicInfoV3::getLastFinishedFullJobId() const
{
    return lastFinishedFullJobId_;
}

void TaskBasicInfoV3::setLastFinishedFullJobId(const std::string& value)
{
    lastFinishedFullJobId_ = value;
    lastFinishedFullJobIdIsSet_ = true;
}

bool TaskBasicInfoV3::lastFinishedFullJobIdIsSet() const
{
    return lastFinishedFullJobIdIsSet_;
}

void TaskBasicInfoV3::unsetlastFinishedFullJobId()
{
    lastFinishedFullJobIdIsSet_ = false;
}

JobBasicInfoV3 TaskBasicInfoV3::getLastJob() const
{
    return lastJob_;
}

void TaskBasicInfoV3::setLastJob(const JobBasicInfoV3& value)
{
    lastJob_ = value;
    lastJobIsSet_ = true;
}

bool TaskBasicInfoV3::lastJobIsSet() const
{
    return lastJobIsSet_;
}

void TaskBasicInfoV3::unsetlastJob()
{
    lastJobIsSet_ = false;
}

std::string TaskBasicInfoV3::getLastReviser() const
{
    return lastReviser_;
}

void TaskBasicInfoV3::setLastReviser(const std::string& value)
{
    lastReviser_ = value;
    lastReviserIsSet_ = true;
}

bool TaskBasicInfoV3::lastReviserIsSet() const
{
    return lastReviserIsSet_;
}

void TaskBasicInfoV3::unsetlastReviser()
{
    lastReviserIsSet_ = false;
}

std::string TaskBasicInfoV3::getLastUpdateTime() const
{
    return lastUpdateTime_;
}

void TaskBasicInfoV3::setLastUpdateTime(const std::string& value)
{
    lastUpdateTime_ = value;
    lastUpdateTimeIsSet_ = true;
}

bool TaskBasicInfoV3::lastUpdateTimeIsSet() const
{
    return lastUpdateTimeIsSet_;
}

void TaskBasicInfoV3::unsetlastUpdateTime()
{
    lastUpdateTimeIsSet_ = false;
}

std::vector<std::string>& TaskBasicInfoV3::getModelSets()
{
    return modelSets_;
}

void TaskBasicInfoV3::setModelSets(const std::vector<std::string>& value)
{
    modelSets_ = value;
    modelSetsIsSet_ = true;
}

bool TaskBasicInfoV3::modelSetsIsSet() const
{
    return modelSetsIsSet_;
}

void TaskBasicInfoV3::unsetmodelSets()
{
    modelSetsIsSet_ = false;
}

int32_t TaskBasicInfoV3::getMrCheckBranchStrategy() const
{
    return mrCheckBranchStrategy_;
}

void TaskBasicInfoV3::setMrCheckBranchStrategy(int32_t value)
{
    mrCheckBranchStrategy_ = value;
    mrCheckBranchStrategyIsSet_ = true;
}

bool TaskBasicInfoV3::mrCheckBranchStrategyIsSet() const
{
    return mrCheckBranchStrategyIsSet_;
}

void TaskBasicInfoV3::unsetmrCheckBranchStrategy()
{
    mrCheckBranchStrategyIsSet_ = false;
}

std::string TaskBasicInfoV3::getName() const
{
    return name_;
}

void TaskBasicInfoV3::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool TaskBasicInfoV3::nameIsSet() const
{
    return nameIsSet_;
}

void TaskBasicInfoV3::unsetname()
{
    nameIsSet_ = false;
}

std::string TaskBasicInfoV3::getNotificationConfig() const
{
    return notificationConfig_;
}

void TaskBasicInfoV3::setNotificationConfig(const std::string& value)
{
    notificationConfig_ = value;
    notificationConfigIsSet_ = true;
}

bool TaskBasicInfoV3::notificationConfigIsSet() const
{
    return notificationConfigIsSet_;
}

void TaskBasicInfoV3::unsetnotificationConfig()
{
    notificationConfigIsSet_ = false;
}

std::string TaskBasicInfoV3::getOwner() const
{
    return owner_;
}

void TaskBasicInfoV3::setOwner(const std::string& value)
{
    owner_ = value;
    ownerIsSet_ = true;
}

bool TaskBasicInfoV3::ownerIsSet() const
{
    return ownerIsSet_;
}

void TaskBasicInfoV3::unsetowner()
{
    ownerIsSet_ = false;
}

std::string TaskBasicInfoV3::getOwnerId() const
{
    return ownerId_;
}

void TaskBasicInfoV3::setOwnerId(const std::string& value)
{
    ownerId_ = value;
    ownerIdIsSet_ = true;
}

bool TaskBasicInfoV3::ownerIdIsSet() const
{
    return ownerIdIsSet_;
}

void TaskBasicInfoV3::unsetownerId()
{
    ownerIdIsSet_ = false;
}

std::string TaskBasicInfoV3::getProjectId() const
{
    return projectId_;
}

void TaskBasicInfoV3::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool TaskBasicInfoV3::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void TaskBasicInfoV3::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string TaskBasicInfoV3::getProjectName() const
{
    return projectName_;
}

void TaskBasicInfoV3::setProjectName(const std::string& value)
{
    projectName_ = value;
    projectNameIsSet_ = true;
}

bool TaskBasicInfoV3::projectNameIsSet() const
{
    return projectNameIsSet_;
}

void TaskBasicInfoV3::unsetprojectName()
{
    projectNameIsSet_ = false;
}

std::string TaskBasicInfoV3::getRegion() const
{
    return region_;
}

void TaskBasicInfoV3::setRegion(const std::string& value)
{
    region_ = value;
    regionIsSet_ = true;
}

bool TaskBasicInfoV3::regionIsSet() const
{
    return regionIsSet_;
}

void TaskBasicInfoV3::unsetregion()
{
    regionIsSet_ = false;
}

std::string TaskBasicInfoV3::getRepoId() const
{
    return repoId_;
}

void TaskBasicInfoV3::setRepoId(const std::string& value)
{
    repoId_ = value;
    repoIdIsSet_ = true;
}

bool TaskBasicInfoV3::repoIdIsSet() const
{
    return repoIdIsSet_;
}

void TaskBasicInfoV3::unsetrepoId()
{
    repoIdIsSet_ = false;
}

std::string TaskBasicInfoV3::getRepoUrl() const
{
    return repoUrl_;
}

void TaskBasicInfoV3::setRepoUrl(const std::string& value)
{
    repoUrl_ = value;
    repoUrlIsSet_ = true;
}

bool TaskBasicInfoV3::repoUrlIsSet() const
{
    return repoUrlIsSet_;
}

void TaskBasicInfoV3::unsetrepoUrl()
{
    repoUrlIsSet_ = false;
}

std::vector<std::string>& TaskBasicInfoV3::getReviewData()
{
    return reviewData_;
}

void TaskBasicInfoV3::setReviewData(const std::vector<std::string>& value)
{
    reviewData_ = value;
    reviewDataIsSet_ = true;
}

bool TaskBasicInfoV3::reviewDataIsSet() const
{
    return reviewDataIsSet_;
}

void TaskBasicInfoV3::unsetreviewData()
{
    reviewDataIsSet_ = false;
}

std::vector<std::string>& TaskBasicInfoV3::getRuleSets()
{
    return ruleSets_;
}

void TaskBasicInfoV3::setRuleSets(const std::vector<std::string>& value)
{
    ruleSets_ = value;
    ruleSetsIsSet_ = true;
}

bool TaskBasicInfoV3::ruleSetsIsSet() const
{
    return ruleSetsIsSet_;
}

void TaskBasicInfoV3::unsetruleSets()
{
    ruleSetsIsSet_ = false;
}

std::string TaskBasicInfoV3::getSource() const
{
    return source_;
}

void TaskBasicInfoV3::setSource(const std::string& value)
{
    source_ = value;
    sourceIsSet_ = true;
}

bool TaskBasicInfoV3::sourceIsSet() const
{
    return sourceIsSet_;
}

void TaskBasicInfoV3::unsetsource()
{
    sourceIsSet_ = false;
}

std::string TaskBasicInfoV3::getTaskGroupId() const
{
    return taskGroupId_;
}

void TaskBasicInfoV3::setTaskGroupId(const std::string& value)
{
    taskGroupId_ = value;
    taskGroupIdIsSet_ = true;
}

bool TaskBasicInfoV3::taskGroupIdIsSet() const
{
    return taskGroupIdIsSet_;
}

void TaskBasicInfoV3::unsettaskGroupId()
{
    taskGroupIdIsSet_ = false;
}

std::vector<std::string>& TaskBasicInfoV3::getTaskIds()
{
    return taskIds_;
}

void TaskBasicInfoV3::setTaskIds(const std::vector<std::string>& value)
{
    taskIds_ = value;
    taskIdsIsSet_ = true;
}

bool TaskBasicInfoV3::taskIdsIsSet() const
{
    return taskIdsIsSet_;
}

void TaskBasicInfoV3::unsettaskIds()
{
    taskIdsIsSet_ = false;
}

std::string TaskBasicInfoV3::getTenantId() const
{
    return tenantId_;
}

void TaskBasicInfoV3::setTenantId(const std::string& value)
{
    tenantId_ = value;
    tenantIdIsSet_ = true;
}

bool TaskBasicInfoV3::tenantIdIsSet() const
{
    return tenantIdIsSet_;
}

void TaskBasicInfoV3::unsettenantId()
{
    tenantIdIsSet_ = false;
}

bool TaskBasicInfoV3::isUseCache() const
{
    return useCache_;
}

void TaskBasicInfoV3::setUseCache(bool value)
{
    useCache_ = value;
    useCacheIsSet_ = true;
}

bool TaskBasicInfoV3::useCacheIsSet() const
{
    return useCacheIsSet_;
}

void TaskBasicInfoV3::unsetuseCache()
{
    useCacheIsSet_ = false;
}

int32_t TaskBasicInfoV3::getUseWorkspaceNotificationConfig() const
{
    return useWorkspaceNotificationConfig_;
}

void TaskBasicInfoV3::setUseWorkspaceNotificationConfig(int32_t value)
{
    useWorkspaceNotificationConfig_ = value;
    useWorkspaceNotificationConfigIsSet_ = true;
}

bool TaskBasicInfoV3::useWorkspaceNotificationConfigIsSet() const
{
    return useWorkspaceNotificationConfigIsSet_;
}

void TaskBasicInfoV3::unsetuseWorkspaceNotificationConfig()
{
    useWorkspaceNotificationConfigIsSet_ = false;
}

std::vector<std::string>& TaskBasicInfoV3::getVersionUpdateDelayDays()
{
    return versionUpdateDelayDays_;
}

void TaskBasicInfoV3::setVersionUpdateDelayDays(const std::vector<std::string>& value)
{
    versionUpdateDelayDays_ = value;
    versionUpdateDelayDaysIsSet_ = true;
}

bool TaskBasicInfoV3::versionUpdateDelayDaysIsSet() const
{
    return versionUpdateDelayDaysIsSet_;
}

void TaskBasicInfoV3::unsetversionUpdateDelayDays()
{
    versionUpdateDelayDaysIsSet_ = false;
}

int32_t TaskBasicInfoV3::getWebhookCheckMode() const
{
    return webhookCheckMode_;
}

void TaskBasicInfoV3::setWebhookCheckMode(int32_t value)
{
    webhookCheckMode_ = value;
    webhookCheckModeIsSet_ = true;
}

bool TaskBasicInfoV3::webhookCheckModeIsSet() const
{
    return webhookCheckModeIsSet_;
}

void TaskBasicInfoV3::unsetwebhookCheckMode()
{
    webhookCheckModeIsSet_ = false;
}

std::string TaskBasicInfoV3::getZone() const
{
    return zone_;
}

void TaskBasicInfoV3::setZone(const std::string& value)
{
    zone_ = value;
    zoneIsSet_ = true;
}

bool TaskBasicInfoV3::zoneIsSet() const
{
    return zoneIsSet_;
}

void TaskBasicInfoV3::unsetzone()
{
    zoneIsSet_ = false;
}

}
}
}
}
}


