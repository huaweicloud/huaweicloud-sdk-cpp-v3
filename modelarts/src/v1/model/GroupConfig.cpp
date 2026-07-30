

#include "huaweicloud/modelarts/v1/model/GroupConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




GroupConfig::GroupConfig()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    poolId_ = "";
    poolIdIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
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
    scheduleStrategy_ = "";
    scheduleStrategyIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    versionId_ = "";
    versionIdIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    framework_ = "";
    frameworkIsSet_ = false;
    runningCount_ = 0;
    runningCountIsSet_ = false;
    deployType_ = "";
    deployTypeIsSet_ = false;
    mirrorTrafficEnable_ = false;
    mirrorTrafficEnableIsSet_ = false;
    mirrorTrafficWeight_ = "";
    mirrorTrafficWeightIsSet_ = false;
    versionCount_ = 0;
    versionCountIsSet_ = false;
    workloadType_ = "";
    workloadTypeIsSet_ = false;
    updateAt_ = 0L;
    updateAtIsSet_ = false;
    modelIsSet_ = false;
    advancedConfigIsSet_ = false;
}

GroupConfig::~GroupConfig() = default;

void GroupConfig::validate()
{
}

web::json::value GroupConfig::toJson() const
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
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
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
    if(scheduleStrategyIsSet_) {
        val[utility::conversions::to_string_t("schedule_strategy")] = ModelBase::toJson(scheduleStrategy_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(versionIdIsSet_) {
        val[utility::conversions::to_string_t("version_id")] = ModelBase::toJson(versionId_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(frameworkIsSet_) {
        val[utility::conversions::to_string_t("framework")] = ModelBase::toJson(framework_);
    }
    if(runningCountIsSet_) {
        val[utility::conversions::to_string_t("running_count")] = ModelBase::toJson(runningCount_);
    }
    if(deployTypeIsSet_) {
        val[utility::conversions::to_string_t("deploy_type")] = ModelBase::toJson(deployType_);
    }
    if(mirrorTrafficEnableIsSet_) {
        val[utility::conversions::to_string_t("mirror_traffic_enable")] = ModelBase::toJson(mirrorTrafficEnable_);
    }
    if(mirrorTrafficWeightIsSet_) {
        val[utility::conversions::to_string_t("mirror_traffic_weight")] = ModelBase::toJson(mirrorTrafficWeight_);
    }
    if(versionCountIsSet_) {
        val[utility::conversions::to_string_t("version_count")] = ModelBase::toJson(versionCount_);
    }
    if(workloadTypeIsSet_) {
        val[utility::conversions::to_string_t("workload_type")] = ModelBase::toJson(workloadType_);
    }
    if(updateAtIsSet_) {
        val[utility::conversions::to_string_t("update_at")] = ModelBase::toJson(updateAt_);
    }
    if(modelIsSet_) {
        val[utility::conversions::to_string_t("model")] = ModelBase::toJson(model_);
    }
    if(advancedConfigIsSet_) {
        val[utility::conversions::to_string_t("advanced_config")] = ModelBase::toJson(advancedConfig_);
    }

    return val;
}
bool GroupConfig::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCount(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("schedule_strategy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("schedule_strategy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setScheduleStrategy(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("version_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("framework"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("framework"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFramework(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("running_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("running_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRunningCount(refVal);
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
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMirrorTrafficWeight(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("version_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionCount(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("update_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_at"));
        if(!fieldValue.is_null())
        {
            int64_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("model"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("model"));
        if(!fieldValue.is_null())
        {
            ModelResource refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setModel(refVal);
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
    return ok;
}


std::string GroupConfig::getId() const
{
    return id_;
}

void GroupConfig::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool GroupConfig::idIsSet() const
{
    return idIsSet_;
}

void GroupConfig::unsetid()
{
    idIsSet_ = false;
}

std::string GroupConfig::getName() const
{
    return name_;
}

void GroupConfig::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool GroupConfig::nameIsSet() const
{
    return nameIsSet_;
}

void GroupConfig::unsetname()
{
    nameIsSet_ = false;
}

std::string GroupConfig::getPoolId() const
{
    return poolId_;
}

void GroupConfig::setPoolId(const std::string& value)
{
    poolId_ = value;
    poolIdIsSet_ = true;
}

bool GroupConfig::poolIdIsSet() const
{
    return poolIdIsSet_;
}

void GroupConfig::unsetpoolId()
{
    poolIdIsSet_ = false;
}

int32_t GroupConfig::getCount() const
{
    return count_;
}

void GroupConfig::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool GroupConfig::countIsSet() const
{
    return countIsSet_;
}

void GroupConfig::unsetcount()
{
    countIsSet_ = false;
}

bool GroupConfig::isSystemLogDumpEnable() const
{
    return systemLogDumpEnable_;
}

void GroupConfig::setSystemLogDumpEnable(bool value)
{
    systemLogDumpEnable_ = value;
    systemLogDumpEnableIsSet_ = true;
}

bool GroupConfig::systemLogDumpEnableIsSet() const
{
    return systemLogDumpEnableIsSet_;
}

void GroupConfig::unsetsystemLogDumpEnable()
{
    systemLogDumpEnableIsSet_ = false;
}

std::vector<UnitConfig>& GroupConfig::getUnitConfigs()
{
    return unitConfigs_;
}

void GroupConfig::setUnitConfigs(const std::vector<UnitConfig>& value)
{
    unitConfigs_ = value;
    unitConfigsIsSet_ = true;
}

bool GroupConfig::unitConfigsIsSet() const
{
    return unitConfigsIsSet_;
}

void GroupConfig::unsetunitConfigs()
{
    unitConfigsIsSet_ = false;
}

int32_t GroupConfig::getWeight() const
{
    return weight_;
}

void GroupConfig::setWeight(int32_t value)
{
    weight_ = value;
    weightIsSet_ = true;
}

bool GroupConfig::weightIsSet() const
{
    return weightIsSet_;
}

void GroupConfig::unsetweight()
{
    weightIsSet_ = false;
}

std::string GroupConfig::getSecretType() const
{
    return secretType_;
}

void GroupConfig::setSecretType(const std::string& value)
{
    secretType_ = value;
    secretTypeIsSet_ = true;
}

bool GroupConfig::secretTypeIsSet() const
{
    return secretTypeIsSet_;
}

void GroupConfig::unsetsecretType()
{
    secretTypeIsSet_ = false;
}

std::string GroupConfig::getSecretName() const
{
    return secretName_;
}

void GroupConfig::setSecretName(const std::string& value)
{
    secretName_ = value;
    secretNameIsSet_ = true;
}

bool GroupConfig::secretNameIsSet() const
{
    return secretNameIsSet_;
}

void GroupConfig::unsetsecretName()
{
    secretNameIsSet_ = false;
}

int32_t GroupConfig::getPriority() const
{
    return priority_;
}

void GroupConfig::setPriority(int32_t value)
{
    priority_ = value;
    priorityIsSet_ = true;
}

bool GroupConfig::priorityIsSet() const
{
    return priorityIsSet_;
}

void GroupConfig::unsetpriority()
{
    priorityIsSet_ = false;
}

bool GroupConfig::isHighAvailSwitch() const
{
    return highAvailSwitch_;
}

void GroupConfig::setHighAvailSwitch(bool value)
{
    highAvailSwitch_ = value;
    highAvailSwitchIsSet_ = true;
}

bool GroupConfig::highAvailSwitchIsSet() const
{
    return highAvailSwitchIsSet_;
}

void GroupConfig::unsethighAvailSwitch()
{
    highAvailSwitchIsSet_ = false;
}

std::string GroupConfig::getScheduleStrategy() const
{
    return scheduleStrategy_;
}

void GroupConfig::setScheduleStrategy(const std::string& value)
{
    scheduleStrategy_ = value;
    scheduleStrategyIsSet_ = true;
}

bool GroupConfig::scheduleStrategyIsSet() const
{
    return scheduleStrategyIsSet_;
}

void GroupConfig::unsetscheduleStrategy()
{
    scheduleStrategyIsSet_ = false;
}

std::string GroupConfig::getVersion() const
{
    return version_;
}

void GroupConfig::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool GroupConfig::versionIsSet() const
{
    return versionIsSet_;
}

void GroupConfig::unsetversion()
{
    versionIsSet_ = false;
}

std::string GroupConfig::getVersionId() const
{
    return versionId_;
}

void GroupConfig::setVersionId(const std::string& value)
{
    versionId_ = value;
    versionIdIsSet_ = true;
}

bool GroupConfig::versionIdIsSet() const
{
    return versionIdIsSet_;
}

void GroupConfig::unsetversionId()
{
    versionIdIsSet_ = false;
}

std::string GroupConfig::getDescription() const
{
    return description_;
}

void GroupConfig::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool GroupConfig::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void GroupConfig::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string GroupConfig::getFramework() const
{
    return framework_;
}

void GroupConfig::setFramework(const std::string& value)
{
    framework_ = value;
    frameworkIsSet_ = true;
}

bool GroupConfig::frameworkIsSet() const
{
    return frameworkIsSet_;
}

void GroupConfig::unsetframework()
{
    frameworkIsSet_ = false;
}

int32_t GroupConfig::getRunningCount() const
{
    return runningCount_;
}

void GroupConfig::setRunningCount(int32_t value)
{
    runningCount_ = value;
    runningCountIsSet_ = true;
}

bool GroupConfig::runningCountIsSet() const
{
    return runningCountIsSet_;
}

void GroupConfig::unsetrunningCount()
{
    runningCountIsSet_ = false;
}

std::string GroupConfig::getDeployType() const
{
    return deployType_;
}

void GroupConfig::setDeployType(const std::string& value)
{
    deployType_ = value;
    deployTypeIsSet_ = true;
}

bool GroupConfig::deployTypeIsSet() const
{
    return deployTypeIsSet_;
}

void GroupConfig::unsetdeployType()
{
    deployTypeIsSet_ = false;
}

bool GroupConfig::isMirrorTrafficEnable() const
{
    return mirrorTrafficEnable_;
}

void GroupConfig::setMirrorTrafficEnable(bool value)
{
    mirrorTrafficEnable_ = value;
    mirrorTrafficEnableIsSet_ = true;
}

bool GroupConfig::mirrorTrafficEnableIsSet() const
{
    return mirrorTrafficEnableIsSet_;
}

void GroupConfig::unsetmirrorTrafficEnable()
{
    mirrorTrafficEnableIsSet_ = false;
}

std::string GroupConfig::getMirrorTrafficWeight() const
{
    return mirrorTrafficWeight_;
}

void GroupConfig::setMirrorTrafficWeight(const std::string& value)
{
    mirrorTrafficWeight_ = value;
    mirrorTrafficWeightIsSet_ = true;
}

bool GroupConfig::mirrorTrafficWeightIsSet() const
{
    return mirrorTrafficWeightIsSet_;
}

void GroupConfig::unsetmirrorTrafficWeight()
{
    mirrorTrafficWeightIsSet_ = false;
}

int32_t GroupConfig::getVersionCount() const
{
    return versionCount_;
}

void GroupConfig::setVersionCount(int32_t value)
{
    versionCount_ = value;
    versionCountIsSet_ = true;
}

bool GroupConfig::versionCountIsSet() const
{
    return versionCountIsSet_;
}

void GroupConfig::unsetversionCount()
{
    versionCountIsSet_ = false;
}

std::string GroupConfig::getWorkloadType() const
{
    return workloadType_;
}

void GroupConfig::setWorkloadType(const std::string& value)
{
    workloadType_ = value;
    workloadTypeIsSet_ = true;
}

bool GroupConfig::workloadTypeIsSet() const
{
    return workloadTypeIsSet_;
}

void GroupConfig::unsetworkloadType()
{
    workloadTypeIsSet_ = false;
}

int64_t GroupConfig::getUpdateAt() const
{
    return updateAt_;
}

void GroupConfig::setUpdateAt(int64_t value)
{
    updateAt_ = value;
    updateAtIsSet_ = true;
}

bool GroupConfig::updateAtIsSet() const
{
    return updateAtIsSet_;
}

void GroupConfig::unsetupdateAt()
{
    updateAtIsSet_ = false;
}

ModelResource GroupConfig::getModel() const
{
    return model_;
}

void GroupConfig::setModel(const ModelResource& value)
{
    model_ = value;
    modelIsSet_ = true;
}

bool GroupConfig::modelIsSet() const
{
    return modelIsSet_;
}

void GroupConfig::unsetmodel()
{
    modelIsSet_ = false;
}

AdvancedConfig GroupConfig::getAdvancedConfig() const
{
    return advancedConfig_;
}

void GroupConfig::setAdvancedConfig(const AdvancedConfig& value)
{
    advancedConfig_ = value;
    advancedConfigIsSet_ = true;
}

bool GroupConfig::advancedConfigIsSet() const
{
    return advancedConfigIsSet_;
}

void GroupConfig::unsetadvancedConfig()
{
    advancedConfigIsSet_ = false;
}

}
}
}
}
}


