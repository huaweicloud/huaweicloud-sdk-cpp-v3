

#include "huaweicloud/modelarts/v1/model/GroupConfigUpdateRequest.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




GroupConfigUpdateRequest::GroupConfigUpdateRequest()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    poolId_ = "";
    poolIdIsSet_ = false;
    framework_ = "";
    frameworkIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
    deployType_ = "";
    deployTypeIsSet_ = false;
    systemLogDumpEnable_ = false;
    systemLogDumpEnableIsSet_ = false;
    unitConfigsIsSet_ = false;
    weight_ = 0;
    weightIsSet_ = false;
    secretType_ = "";
    secretTypeIsSet_ = false;
    secretName_ = "";
    secretNameIsSet_ = false;
    priority_ = 0;
    priorityIsSet_ = false;
    highAvailSwitch_ = false;
    highAvailSwitchIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    advancedConfigIsSet_ = false;
    modelIsSet_ = false;
    mirrorTrafficEnable_ = false;
    mirrorTrafficEnableIsSet_ = false;
    mirrorTrafficWeight_ = 0;
    mirrorTrafficWeightIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    deploymentTaskLimitIsSet_ = false;
    scheduleStrategy_ = "";
    scheduleStrategyIsSet_ = false;
}

GroupConfigUpdateRequest::~GroupConfigUpdateRequest() = default;

void GroupConfigUpdateRequest::validate()
{
}

web::json::value GroupConfigUpdateRequest::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(poolIdIsSet_) {
        val[utility::conversions::to_string_t("pool_id")] = ModelBase::toJson(poolId_);
    }
    if(frameworkIsSet_) {
        val[utility::conversions::to_string_t("framework")] = ModelBase::toJson(framework_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(deployTypeIsSet_) {
        val[utility::conversions::to_string_t("deploy_type")] = ModelBase::toJson(deployType_);
    }
    if(systemLogDumpEnableIsSet_) {
        val[utility::conversions::to_string_t("system_log_dump_enable")] = ModelBase::toJson(systemLogDumpEnable_);
    }
    if(unitConfigsIsSet_) {
        val[utility::conversions::to_string_t("unit_configs")] = ModelBase::toJson(unitConfigs_);
    }
    if(weightIsSet_) {
        val[utility::conversions::to_string_t("weight")] = ModelBase::toJson(weight_);
    }
    if(secretTypeIsSet_) {
        val[utility::conversions::to_string_t("secret_type")] = ModelBase::toJson(secretType_);
    }
    if(secretNameIsSet_) {
        val[utility::conversions::to_string_t("secret_name")] = ModelBase::toJson(secretName_);
    }
    if(priorityIsSet_) {
        val[utility::conversions::to_string_t("priority")] = ModelBase::toJson(priority_);
    }
    if(highAvailSwitchIsSet_) {
        val[utility::conversions::to_string_t("high_avail_switch")] = ModelBase::toJson(highAvailSwitch_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(advancedConfigIsSet_) {
        val[utility::conversions::to_string_t("advanced_config")] = ModelBase::toJson(advancedConfig_);
    }
    if(modelIsSet_) {
        val[utility::conversions::to_string_t("model")] = ModelBase::toJson(model_);
    }
    if(mirrorTrafficEnableIsSet_) {
        val[utility::conversions::to_string_t("mirror_traffic_enable")] = ModelBase::toJson(mirrorTrafficEnable_);
    }
    if(mirrorTrafficWeightIsSet_) {
        val[utility::conversions::to_string_t("mirror_traffic_weight")] = ModelBase::toJson(mirrorTrafficWeight_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(deploymentTaskLimitIsSet_) {
        val[utility::conversions::to_string_t("deployment_task_limit")] = ModelBase::toJson(deploymentTaskLimit_);
    }
    if(scheduleStrategyIsSet_) {
        val[utility::conversions::to_string_t("schedule_strategy")] = ModelBase::toJson(scheduleStrategy_);
    }

    return val;
}
bool GroupConfigUpdateRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("pool_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("pool_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPoolId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("framework"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("framework"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFramework(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("system_log_dump_enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("system_log_dump_enable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSystemLogDumpEnable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("unit_configs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("unit_configs"));
        if(!fieldValue.is_null())
        {
            std::vector<UnitConfig> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUnitConfigs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("weight"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("weight"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWeight(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("secret_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("secret_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecretType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("secret_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("secret_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecretName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("priority"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("priority"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPriority(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("high_avail_switch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("high_avail_switch"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHighAvailSwitch(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("advanced_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("advanced_config"));
        if(!fieldValue.is_null())
        {
            AdvancedConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAdvancedConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("model"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("model"));
        if(!fieldValue.is_null())
        {
            GroupModel refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModel(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mirror_traffic_enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mirror_traffic_enable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMirrorTrafficEnable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("mirror_traffic_weight"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("mirror_traffic_weight"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMirrorTrafficWeight(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deployment_task_limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deployment_task_limit"));
        if(!fieldValue.is_null())
        {
            DeploymentTaskLimit refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeploymentTaskLimit(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("schedule_strategy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("schedule_strategy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScheduleStrategy(refVal);
        }
    }
    return ok;
}


std::string GroupConfigUpdateRequest::getId() const
{
    return id_;
}

void GroupConfigUpdateRequest::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool GroupConfigUpdateRequest::idIsSet() const
{
    return idIsSet_;
}

void GroupConfigUpdateRequest::unsetid()
{
    idIsSet_ = false;
}

std::string GroupConfigUpdateRequest::getName() const
{
    return name_;
}

void GroupConfigUpdateRequest::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool GroupConfigUpdateRequest::nameIsSet() const
{
    return nameIsSet_;
}

void GroupConfigUpdateRequest::unsetname()
{
    nameIsSet_ = false;
}

std::string GroupConfigUpdateRequest::getPoolId() const
{
    return poolId_;
}

void GroupConfigUpdateRequest::setPoolId(const std::string& value)
{
    poolId_ = value;
    poolIdIsSet_ = true;
}

bool GroupConfigUpdateRequest::poolIdIsSet() const
{
    return poolIdIsSet_;
}

void GroupConfigUpdateRequest::unsetpoolId()
{
    poolIdIsSet_ = false;
}

std::string GroupConfigUpdateRequest::getFramework() const
{
    return framework_;
}

void GroupConfigUpdateRequest::setFramework(const std::string& value)
{
    framework_ = value;
    frameworkIsSet_ = true;
}

bool GroupConfigUpdateRequest::frameworkIsSet() const
{
    return frameworkIsSet_;
}

void GroupConfigUpdateRequest::unsetframework()
{
    frameworkIsSet_ = false;
}

int32_t GroupConfigUpdateRequest::getCount() const
{
    return count_;
}

void GroupConfigUpdateRequest::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool GroupConfigUpdateRequest::countIsSet() const
{
    return countIsSet_;
}

void GroupConfigUpdateRequest::unsetcount()
{
    countIsSet_ = false;
}

std::string GroupConfigUpdateRequest::getDeployType() const
{
    return deployType_;
}

void GroupConfigUpdateRequest::setDeployType(const std::string& value)
{
    deployType_ = value;
    deployTypeIsSet_ = true;
}

bool GroupConfigUpdateRequest::deployTypeIsSet() const
{
    return deployTypeIsSet_;
}

void GroupConfigUpdateRequest::unsetdeployType()
{
    deployTypeIsSet_ = false;
}

bool GroupConfigUpdateRequest::isSystemLogDumpEnable() const
{
    return systemLogDumpEnable_;
}

void GroupConfigUpdateRequest::setSystemLogDumpEnable(bool value)
{
    systemLogDumpEnable_ = value;
    systemLogDumpEnableIsSet_ = true;
}

bool GroupConfigUpdateRequest::systemLogDumpEnableIsSet() const
{
    return systemLogDumpEnableIsSet_;
}

void GroupConfigUpdateRequest::unsetsystemLogDumpEnable()
{
    systemLogDumpEnableIsSet_ = false;
}

std::vector<UnitConfig>& GroupConfigUpdateRequest::getUnitConfigs()
{
    return unitConfigs_;
}

void GroupConfigUpdateRequest::setUnitConfigs(const std::vector<UnitConfig>& value)
{
    unitConfigs_ = value;
    unitConfigsIsSet_ = true;
}

bool GroupConfigUpdateRequest::unitConfigsIsSet() const
{
    return unitConfigsIsSet_;
}

void GroupConfigUpdateRequest::unsetunitConfigs()
{
    unitConfigsIsSet_ = false;
}

int32_t GroupConfigUpdateRequest::getWeight() const
{
    return weight_;
}

void GroupConfigUpdateRequest::setWeight(int32_t value)
{
    weight_ = value;
    weightIsSet_ = true;
}

bool GroupConfigUpdateRequest::weightIsSet() const
{
    return weightIsSet_;
}

void GroupConfigUpdateRequest::unsetweight()
{
    weightIsSet_ = false;
}

std::string GroupConfigUpdateRequest::getSecretType() const
{
    return secretType_;
}

void GroupConfigUpdateRequest::setSecretType(const std::string& value)
{
    secretType_ = value;
    secretTypeIsSet_ = true;
}

bool GroupConfigUpdateRequest::secretTypeIsSet() const
{
    return secretTypeIsSet_;
}

void GroupConfigUpdateRequest::unsetsecretType()
{
    secretTypeIsSet_ = false;
}

std::string GroupConfigUpdateRequest::getSecretName() const
{
    return secretName_;
}

void GroupConfigUpdateRequest::setSecretName(const std::string& value)
{
    secretName_ = value;
    secretNameIsSet_ = true;
}

bool GroupConfigUpdateRequest::secretNameIsSet() const
{
    return secretNameIsSet_;
}

void GroupConfigUpdateRequest::unsetsecretName()
{
    secretNameIsSet_ = false;
}

int32_t GroupConfigUpdateRequest::getPriority() const
{
    return priority_;
}

void GroupConfigUpdateRequest::setPriority(int32_t value)
{
    priority_ = value;
    priorityIsSet_ = true;
}

bool GroupConfigUpdateRequest::priorityIsSet() const
{
    return priorityIsSet_;
}

void GroupConfigUpdateRequest::unsetpriority()
{
    priorityIsSet_ = false;
}

bool GroupConfigUpdateRequest::isHighAvailSwitch() const
{
    return highAvailSwitch_;
}

void GroupConfigUpdateRequest::setHighAvailSwitch(bool value)
{
    highAvailSwitch_ = value;
    highAvailSwitchIsSet_ = true;
}

bool GroupConfigUpdateRequest::highAvailSwitchIsSet() const
{
    return highAvailSwitchIsSet_;
}

void GroupConfigUpdateRequest::unsethighAvailSwitch()
{
    highAvailSwitchIsSet_ = false;
}

std::string GroupConfigUpdateRequest::getDescription() const
{
    return description_;
}

void GroupConfigUpdateRequest::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool GroupConfigUpdateRequest::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void GroupConfigUpdateRequest::unsetdescription()
{
    descriptionIsSet_ = false;
}

AdvancedConfig GroupConfigUpdateRequest::getAdvancedConfig() const
{
    return advancedConfig_;
}

void GroupConfigUpdateRequest::setAdvancedConfig(const AdvancedConfig& value)
{
    advancedConfig_ = value;
    advancedConfigIsSet_ = true;
}

bool GroupConfigUpdateRequest::advancedConfigIsSet() const
{
    return advancedConfigIsSet_;
}

void GroupConfigUpdateRequest::unsetadvancedConfig()
{
    advancedConfigIsSet_ = false;
}

GroupModel GroupConfigUpdateRequest::getModel() const
{
    return model_;
}

void GroupConfigUpdateRequest::setModel(const GroupModel& value)
{
    model_ = value;
    modelIsSet_ = true;
}

bool GroupConfigUpdateRequest::modelIsSet() const
{
    return modelIsSet_;
}

void GroupConfigUpdateRequest::unsetmodel()
{
    modelIsSet_ = false;
}

bool GroupConfigUpdateRequest::isMirrorTrafficEnable() const
{
    return mirrorTrafficEnable_;
}

void GroupConfigUpdateRequest::setMirrorTrafficEnable(bool value)
{
    mirrorTrafficEnable_ = value;
    mirrorTrafficEnableIsSet_ = true;
}

bool GroupConfigUpdateRequest::mirrorTrafficEnableIsSet() const
{
    return mirrorTrafficEnableIsSet_;
}

void GroupConfigUpdateRequest::unsetmirrorTrafficEnable()
{
    mirrorTrafficEnableIsSet_ = false;
}

int32_t GroupConfigUpdateRequest::getMirrorTrafficWeight() const
{
    return mirrorTrafficWeight_;
}

void GroupConfigUpdateRequest::setMirrorTrafficWeight(int32_t value)
{
    mirrorTrafficWeight_ = value;
    mirrorTrafficWeightIsSet_ = true;
}

bool GroupConfigUpdateRequest::mirrorTrafficWeightIsSet() const
{
    return mirrorTrafficWeightIsSet_;
}

void GroupConfigUpdateRequest::unsetmirrorTrafficWeight()
{
    mirrorTrafficWeightIsSet_ = false;
}

std::string GroupConfigUpdateRequest::getStatus() const
{
    return status_;
}

void GroupConfigUpdateRequest::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool GroupConfigUpdateRequest::statusIsSet() const
{
    return statusIsSet_;
}

void GroupConfigUpdateRequest::unsetstatus()
{
    statusIsSet_ = false;
}

DeploymentTaskLimit GroupConfigUpdateRequest::getDeploymentTaskLimit() const
{
    return deploymentTaskLimit_;
}

void GroupConfigUpdateRequest::setDeploymentTaskLimit(const DeploymentTaskLimit& value)
{
    deploymentTaskLimit_ = value;
    deploymentTaskLimitIsSet_ = true;
}

bool GroupConfigUpdateRequest::deploymentTaskLimitIsSet() const
{
    return deploymentTaskLimitIsSet_;
}

void GroupConfigUpdateRequest::unsetdeploymentTaskLimit()
{
    deploymentTaskLimitIsSet_ = false;
}

std::string GroupConfigUpdateRequest::getScheduleStrategy() const
{
    return scheduleStrategy_;
}

void GroupConfigUpdateRequest::setScheduleStrategy(const std::string& value)
{
    scheduleStrategy_ = value;
    scheduleStrategyIsSet_ = true;
}

bool GroupConfigUpdateRequest::scheduleStrategyIsSet() const
{
    return scheduleStrategyIsSet_;
}

void GroupConfigUpdateRequest::unsetscheduleStrategy()
{
    scheduleStrategyIsSet_ = false;
}

}
}
}
}
}


