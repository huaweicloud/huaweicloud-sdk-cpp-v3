

#include "huaweicloud/modelarts/v1/model/ServiceUpdateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ServiceUpdateRequest::ServiceUpdateRequest()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    deployTimeoutMinutes_ = 0;
    deployTimeoutMinutesIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    groupConfigsIsSet_ = false;
    runtimeConfigIsSet_ = false;
    upgradeConfigIsSet_ = false;
    ltsStrategy_ = "";
    ltsStrategyIsSet_ = false;
    logConfigsIsSet_ = false;
    tags_ = "";
    tagsIsSet_ = false;
    workspaceId_ = "";
    workspaceIdIsSet_ = false;
    scheduleIsSet_ = false;
    customMetricsPath_ = "";
    customMetricsPathIsSet_ = false;
    taskType_ = "";
    taskTypeIsSet_ = false;
}

ServiceUpdateRequest::~ServiceUpdateRequest() = default;

void ServiceUpdateRequest::validate()
{
}

web::json::value ServiceUpdateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(deployTimeoutMinutesIsSet_) {
        val[utility::conversions::to_string_t("deploy_timeout_minutes")] = ModelBase::toJson(deployTimeoutMinutes_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(groupConfigsIsSet_) {
        val[utility::conversions::to_string_t("group_configs")] = ModelBase::toJson(groupConfigs_);
    }
    if(runtimeConfigIsSet_) {
        val[utility::conversions::to_string_t("runtime_config")] = ModelBase::toJson(runtimeConfig_);
    }
    if(upgradeConfigIsSet_) {
        val[utility::conversions::to_string_t("upgrade_config")] = ModelBase::toJson(upgradeConfig_);
    }
    if(ltsStrategyIsSet_) {
        val[utility::conversions::to_string_t("lts_strategy")] = ModelBase::toJson(ltsStrategy_);
    }
    if(logConfigsIsSet_) {
        val[utility::conversions::to_string_t("log_configs")] = ModelBase::toJson(logConfigs_);
    }
    if(tagsIsSet_) {
        val[utility::conversions::to_string_t("tags")] = ModelBase::toJson(tags_);
    }
    if(workspaceIdIsSet_) {
        val[utility::conversions::to_string_t("workspace_id")] = ModelBase::toJson(workspaceId_);
    }
    if(scheduleIsSet_) {
        val[utility::conversions::to_string_t("schedule")] = ModelBase::toJson(schedule_);
    }
    if(customMetricsPathIsSet_) {
        val[utility::conversions::to_string_t("custom_metrics_path")] = ModelBase::toJson(customMetricsPath_);
    }
    if(taskTypeIsSet_) {
        val[utility::conversions::to_string_t("task_type")] = ModelBase::toJson(taskType_);
    }

    return val;
}
bool ServiceUpdateRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("deploy_timeout_minutes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deploy_timeout_minutes"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeployTimeoutMinutes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersion(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("group_configs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_configs"));
        if(!fieldValue.is_null())
        {
            std::vector<GroupConfig> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupConfigs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("runtime_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("runtime_config"));
        if(!fieldValue.is_null())
        {
            RuntimeConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuntimeConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("upgrade_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("upgrade_config"));
        if(!fieldValue.is_null())
        {
            UpgradeConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpgradeConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lts_strategy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lts_strategy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLtsStrategy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_configs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_configs"));
        if(!fieldValue.is_null())
        {
            std::vector<LtsConfig> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogConfigs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("workspace_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workspace_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkspaceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("schedule"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("schedule"));
        if(!fieldValue.is_null())
        {
            std::vector<ScheduleConfig> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSchedule(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("custom_metrics_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("custom_metrics_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomMetricsPath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("task_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("task_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaskType(refVal);
        }
    }
    return ok;
}


std::string ServiceUpdateRequest::getId() const
{
    return id_;
}

void ServiceUpdateRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ServiceUpdateRequest::idIsSet() const
{
    return idIsSet_;
}

void ServiceUpdateRequest::unsetid()
{
    idIsSet_ = false;
}

std::string ServiceUpdateRequest::getName() const
{
    return name_;
}

void ServiceUpdateRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ServiceUpdateRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ServiceUpdateRequest::unsetname()
{
    nameIsSet_ = false;
}

int32_t ServiceUpdateRequest::getDeployTimeoutMinutes() const
{
    return deployTimeoutMinutes_;
}

void ServiceUpdateRequest::setDeployTimeoutMinutes(int32_t value)
{
    deployTimeoutMinutes_ = value;
    deployTimeoutMinutesIsSet_ = true;
}

bool ServiceUpdateRequest::deployTimeoutMinutesIsSet() const
{
    return deployTimeoutMinutesIsSet_;
}

void ServiceUpdateRequest::unsetdeployTimeoutMinutes()
{
    deployTimeoutMinutesIsSet_ = false;
}

std::string ServiceUpdateRequest::getVersion() const
{
    return version_;
}

void ServiceUpdateRequest::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool ServiceUpdateRequest::versionIsSet() const
{
    return versionIsSet_;
}

void ServiceUpdateRequest::unsetversion()
{
    versionIsSet_ = false;
}

std::string ServiceUpdateRequest::getDescription() const
{
    return description_;
}

void ServiceUpdateRequest::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ServiceUpdateRequest::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ServiceUpdateRequest::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::vector<GroupConfig>& ServiceUpdateRequest::getGroupConfigs()
{
    return groupConfigs_;
}

void ServiceUpdateRequest::setGroupConfigs(const std::vector<GroupConfig>& value)
{
    groupConfigs_ = value;
    groupConfigsIsSet_ = true;
}

bool ServiceUpdateRequest::groupConfigsIsSet() const
{
    return groupConfigsIsSet_;
}

void ServiceUpdateRequest::unsetgroupConfigs()
{
    groupConfigsIsSet_ = false;
}

RuntimeConfig ServiceUpdateRequest::getRuntimeConfig() const
{
    return runtimeConfig_;
}

void ServiceUpdateRequest::setRuntimeConfig(const RuntimeConfig& value)
{
    runtimeConfig_ = value;
    runtimeConfigIsSet_ = true;
}

bool ServiceUpdateRequest::runtimeConfigIsSet() const
{
    return runtimeConfigIsSet_;
}

void ServiceUpdateRequest::unsetruntimeConfig()
{
    runtimeConfigIsSet_ = false;
}

UpgradeConfig ServiceUpdateRequest::getUpgradeConfig() const
{
    return upgradeConfig_;
}

void ServiceUpdateRequest::setUpgradeConfig(const UpgradeConfig& value)
{
    upgradeConfig_ = value;
    upgradeConfigIsSet_ = true;
}

bool ServiceUpdateRequest::upgradeConfigIsSet() const
{
    return upgradeConfigIsSet_;
}

void ServiceUpdateRequest::unsetupgradeConfig()
{
    upgradeConfigIsSet_ = false;
}

std::string ServiceUpdateRequest::getLtsStrategy() const
{
    return ltsStrategy_;
}

void ServiceUpdateRequest::setLtsStrategy(const std::string& value)
{
    ltsStrategy_ = value;
    ltsStrategyIsSet_ = true;
}

bool ServiceUpdateRequest::ltsStrategyIsSet() const
{
    return ltsStrategyIsSet_;
}

void ServiceUpdateRequest::unsetltsStrategy()
{
    ltsStrategyIsSet_ = false;
}

std::vector<LtsConfig>& ServiceUpdateRequest::getLogConfigs()
{
    return logConfigs_;
}

void ServiceUpdateRequest::setLogConfigs(const std::vector<LtsConfig>& value)
{
    logConfigs_ = value;
    logConfigsIsSet_ = true;
}

bool ServiceUpdateRequest::logConfigsIsSet() const
{
    return logConfigsIsSet_;
}

void ServiceUpdateRequest::unsetlogConfigs()
{
    logConfigsIsSet_ = false;
}

std::string ServiceUpdateRequest::getTags() const
{
    return tags_;
}

void ServiceUpdateRequest::setTags(const std::string& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ServiceUpdateRequest::tagsIsSet() const
{
    return tagsIsSet_;
}

void ServiceUpdateRequest::unsettags()
{
    tagsIsSet_ = false;
}

std::string ServiceUpdateRequest::getWorkspaceId() const
{
    return workspaceId_;
}

void ServiceUpdateRequest::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool ServiceUpdateRequest::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void ServiceUpdateRequest::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

std::vector<ScheduleConfig>& ServiceUpdateRequest::getSchedule()
{
    return schedule_;
}

void ServiceUpdateRequest::setSchedule(const std::vector<ScheduleConfig>& value)
{
    schedule_ = value;
    scheduleIsSet_ = true;
}

bool ServiceUpdateRequest::scheduleIsSet() const
{
    return scheduleIsSet_;
}

void ServiceUpdateRequest::unsetschedule()
{
    scheduleIsSet_ = false;
}

std::string ServiceUpdateRequest::getCustomMetricsPath() const
{
    return customMetricsPath_;
}

void ServiceUpdateRequest::setCustomMetricsPath(const std::string& value)
{
    customMetricsPath_ = value;
    customMetricsPathIsSet_ = true;
}

bool ServiceUpdateRequest::customMetricsPathIsSet() const
{
    return customMetricsPathIsSet_;
}

void ServiceUpdateRequest::unsetcustomMetricsPath()
{
    customMetricsPathIsSet_ = false;
}

std::string ServiceUpdateRequest::getTaskType() const
{
    return taskType_;
}

void ServiceUpdateRequest::setTaskType(const std::string& value)
{
    taskType_ = value;
    taskTypeIsSet_ = true;
}

bool ServiceUpdateRequest::taskTypeIsSet() const
{
    return taskTypeIsSet_;
}

void ServiceUpdateRequest::unsettaskType()
{
    taskTypeIsSet_ = false;
}

}
}
}
}
}


