

#include "huaweicloud/modelarts/v1/model/ServiceCreateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ServiceCreateRequest::ServiceCreateRequest()
{
    name_ = "";
    nameIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    deployType_ = "";
    deployTypeIsSet_ = false;
    groupConfigsIsSet_ = false;
    runtimeConfigIsSet_ = false;
    upgradeConfigIsSet_ = false;
    ltsStrategy_ = "";
    ltsStrategyIsSet_ = false;
    logConfigsIsSet_ = false;
    tagsIsSet_ = false;
    workspaceId_ = "";
    workspaceIdIsSet_ = false;
    scheduleIsSet_ = false;
    customMetricsPath_ = "";
    customMetricsPathIsSet_ = false;
    deployTimeoutMinutes_ = 0;
    deployTimeoutMinutesIsSet_ = false;
    taskType_ = "";
    taskTypeIsSet_ = false;
    workloadType_ = "";
    workloadTypeIsSet_ = false;
}

ServiceCreateRequest::~ServiceCreateRequest() = default;

void ServiceCreateRequest::validate()
{
}

web::json::value ServiceCreateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(deployTypeIsSet_) {
        val[utility::conversions::to_string_t("deploy_type")] = ModelBase::toJson(deployType_);
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
    if(deployTimeoutMinutesIsSet_) {
        val[utility::conversions::to_string_t("deploy_timeout_minutes")] = ModelBase::toJson(deployTimeoutMinutes_);
    }
    if(taskTypeIsSet_) {
        val[utility::conversions::to_string_t("task_type")] = ModelBase::toJson(taskType_);
    }
    if(workloadTypeIsSet_) {
        val[utility::conversions::to_string_t("workload_type")] = ModelBase::toJson(workloadType_);
    }

    return val;
}
bool ServiceCreateRequest::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deploy_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deploy_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeployType(refVal);
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
            RuntimeConfigCreateRequest refVal;
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
            std::vector<LtsConfiguration> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogConfigs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tags"));
        if(!fieldValue.is_null())
        {
            std::vector<ServiceCreateRequest_tags> refVal;
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
    if(val.has_field(utility::conversions::to_string_t("deploy_timeout_minutes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deploy_timeout_minutes"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeployTimeoutMinutes(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("workload_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workload_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkloadType(refVal);
        }
    }
    return ok;
}


std::string ServiceCreateRequest::getName() const
{
    return name_;
}

void ServiceCreateRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ServiceCreateRequest::nameIsSet() const
{
    return nameIsSet_;
}

void ServiceCreateRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string ServiceCreateRequest::getVersion() const
{
    return version_;
}

void ServiceCreateRequest::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool ServiceCreateRequest::versionIsSet() const
{
    return versionIsSet_;
}

void ServiceCreateRequest::unsetversion()
{
    versionIsSet_ = false;
}

std::string ServiceCreateRequest::getDescription() const
{
    return description_;
}

void ServiceCreateRequest::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ServiceCreateRequest::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ServiceCreateRequest::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ServiceCreateRequest::getType() const
{
    return type_;
}

void ServiceCreateRequest::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ServiceCreateRequest::typeIsSet() const
{
    return typeIsSet_;
}

void ServiceCreateRequest::unsettype()
{
    typeIsSet_ = false;
}

std::string ServiceCreateRequest::getDeployType() const
{
    return deployType_;
}

void ServiceCreateRequest::setDeployType(const std::string& value)
{
    deployType_ = value;
    deployTypeIsSet_ = true;
}

bool ServiceCreateRequest::deployTypeIsSet() const
{
    return deployTypeIsSet_;
}

void ServiceCreateRequest::unsetdeployType()
{
    deployTypeIsSet_ = false;
}

std::vector<GroupConfig>& ServiceCreateRequest::getGroupConfigs()
{
    return groupConfigs_;
}

void ServiceCreateRequest::setGroupConfigs(const std::vector<GroupConfig>& value)
{
    groupConfigs_ = value;
    groupConfigsIsSet_ = true;
}

bool ServiceCreateRequest::groupConfigsIsSet() const
{
    return groupConfigsIsSet_;
}

void ServiceCreateRequest::unsetgroupConfigs()
{
    groupConfigsIsSet_ = false;
}

RuntimeConfigCreateRequest ServiceCreateRequest::getRuntimeConfig() const
{
    return runtimeConfig_;
}

void ServiceCreateRequest::setRuntimeConfig(const RuntimeConfigCreateRequest& value)
{
    runtimeConfig_ = value;
    runtimeConfigIsSet_ = true;
}

bool ServiceCreateRequest::runtimeConfigIsSet() const
{
    return runtimeConfigIsSet_;
}

void ServiceCreateRequest::unsetruntimeConfig()
{
    runtimeConfigIsSet_ = false;
}

UpgradeConfig ServiceCreateRequest::getUpgradeConfig() const
{
    return upgradeConfig_;
}

void ServiceCreateRequest::setUpgradeConfig(const UpgradeConfig& value)
{
    upgradeConfig_ = value;
    upgradeConfigIsSet_ = true;
}

bool ServiceCreateRequest::upgradeConfigIsSet() const
{
    return upgradeConfigIsSet_;
}

void ServiceCreateRequest::unsetupgradeConfig()
{
    upgradeConfigIsSet_ = false;
}

std::string ServiceCreateRequest::getLtsStrategy() const
{
    return ltsStrategy_;
}

void ServiceCreateRequest::setLtsStrategy(const std::string& value)
{
    ltsStrategy_ = value;
    ltsStrategyIsSet_ = true;
}

bool ServiceCreateRequest::ltsStrategyIsSet() const
{
    return ltsStrategyIsSet_;
}

void ServiceCreateRequest::unsetltsStrategy()
{
    ltsStrategyIsSet_ = false;
}

std::vector<LtsConfiguration>& ServiceCreateRequest::getLogConfigs()
{
    return logConfigs_;
}

void ServiceCreateRequest::setLogConfigs(const std::vector<LtsConfiguration>& value)
{
    logConfigs_ = value;
    logConfigsIsSet_ = true;
}

bool ServiceCreateRequest::logConfigsIsSet() const
{
    return logConfigsIsSet_;
}

void ServiceCreateRequest::unsetlogConfigs()
{
    logConfigsIsSet_ = false;
}

std::vector<ServiceCreateRequest_tags>& ServiceCreateRequest::getTags()
{
    return tags_;
}

void ServiceCreateRequest::setTags(const std::vector<ServiceCreateRequest_tags>& value)
{
    tags_ = value;
    tagsIsSet_ = true;
}

bool ServiceCreateRequest::tagsIsSet() const
{
    return tagsIsSet_;
}

void ServiceCreateRequest::unsettags()
{
    tagsIsSet_ = false;
}

std::string ServiceCreateRequest::getWorkspaceId() const
{
    return workspaceId_;
}

void ServiceCreateRequest::setWorkspaceId(const std::string& value)
{
    workspaceId_ = value;
    workspaceIdIsSet_ = true;
}

bool ServiceCreateRequest::workspaceIdIsSet() const
{
    return workspaceIdIsSet_;
}

void ServiceCreateRequest::unsetworkspaceId()
{
    workspaceIdIsSet_ = false;
}

std::vector<ScheduleConfig>& ServiceCreateRequest::getSchedule()
{
    return schedule_;
}

void ServiceCreateRequest::setSchedule(const std::vector<ScheduleConfig>& value)
{
    schedule_ = value;
    scheduleIsSet_ = true;
}

bool ServiceCreateRequest::scheduleIsSet() const
{
    return scheduleIsSet_;
}

void ServiceCreateRequest::unsetschedule()
{
    scheduleIsSet_ = false;
}

std::string ServiceCreateRequest::getCustomMetricsPath() const
{
    return customMetricsPath_;
}

void ServiceCreateRequest::setCustomMetricsPath(const std::string& value)
{
    customMetricsPath_ = value;
    customMetricsPathIsSet_ = true;
}

bool ServiceCreateRequest::customMetricsPathIsSet() const
{
    return customMetricsPathIsSet_;
}

void ServiceCreateRequest::unsetcustomMetricsPath()
{
    customMetricsPathIsSet_ = false;
}

int32_t ServiceCreateRequest::getDeployTimeoutMinutes() const
{
    return deployTimeoutMinutes_;
}

void ServiceCreateRequest::setDeployTimeoutMinutes(int32_t value)
{
    deployTimeoutMinutes_ = value;
    deployTimeoutMinutesIsSet_ = true;
}

bool ServiceCreateRequest::deployTimeoutMinutesIsSet() const
{
    return deployTimeoutMinutesIsSet_;
}

void ServiceCreateRequest::unsetdeployTimeoutMinutes()
{
    deployTimeoutMinutesIsSet_ = false;
}

std::string ServiceCreateRequest::getTaskType() const
{
    return taskType_;
}

void ServiceCreateRequest::setTaskType(const std::string& value)
{
    taskType_ = value;
    taskTypeIsSet_ = true;
}

bool ServiceCreateRequest::taskTypeIsSet() const
{
    return taskTypeIsSet_;
}

void ServiceCreateRequest::unsettaskType()
{
    taskTypeIsSet_ = false;
}

std::string ServiceCreateRequest::getWorkloadType() const
{
    return workloadType_;
}

void ServiceCreateRequest::setWorkloadType(const std::string& value)
{
    workloadType_ = value;
    workloadTypeIsSet_ = true;
}

bool ServiceCreateRequest::workloadTypeIsSet() const
{
    return workloadTypeIsSet_;
}

void ServiceCreateRequest::unsetworkloadType()
{
    workloadTypeIsSet_ = false;
}

}
}
}
}
}


