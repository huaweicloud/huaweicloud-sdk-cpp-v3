

#include "huaweicloud/modelarts/v1/model/ShowInferDeploymentVersionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowInferDeploymentVersionResponse::ShowInferDeploymentVersionResponse()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    deploymentName_ = "";
    deploymentNameIsSet_ = false;
    inferName_ = "";
    inferNameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    poolId_ = "";
    poolIdIsSet_ = false;
    framework_ = "";
    frameworkIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    versionId_ = "";
    versionIdIsSet_ = false;
    versionCount_ = 0;
    versionCountIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
    weight_ = 0;
    weightIsSet_ = false;
    priority_ = 0;
    priorityIsSet_ = false;
    secretType_ = "";
    secretTypeIsSet_ = false;
    secretName_ = "";
    secretNameIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    deployType_ = "";
    deployTypeIsSet_ = false;
    workloadType_ = "";
    workloadTypeIsSet_ = false;
    highAvailSwitch_ = false;
    highAvailSwitchIsSet_ = false;
    systemLogDumpEnable_ = false;
    systemLogDumpEnableIsSet_ = false;
    scheduleStrategy_ = "";
    scheduleStrategyIsSet_ = false;
    unitConfigsIsSet_ = false;
    modelIsSet_ = false;
    advancedConfigIsSet_ = false;
    mirrorTrafficEnable_ = false;
    mirrorTrafficEnableIsSet_ = false;
    mirrorTrafficWeight_ = 0;
    mirrorTrafficWeightIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    agencyName_ = "";
    agencyNameIsSet_ = false;
    lastUsedTime_ = utility::datetime();
    lastUsedTimeIsSet_ = false;
    deploymentTaskLimitIsSet_ = false;
    frozenInfosIsSet_ = false;
    createAt_ = utility::datetime();
    createAtIsSet_ = false;
    updateAt_ = utility::datetime();
    updateAtIsSet_ = false;
}

ShowInferDeploymentVersionResponse::~ShowInferDeploymentVersionResponse() = default;

void ShowInferDeploymentVersionResponse::validate()
{
}

web::json::value ShowInferDeploymentVersionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(deploymentNameIsSet_) {
        val[utility::conversions::to_string_t("deployment_name")] = ModelBase::toJson(deploymentName_);
    }
    if(inferNameIsSet_) {
        val[utility::conversions::to_string_t("infer_name")] = ModelBase::toJson(inferName_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(poolIdIsSet_) {
        val[utility::conversions::to_string_t("pool_id")] = ModelBase::toJson(poolId_);
    }
    if(frameworkIsSet_) {
        val[utility::conversions::to_string_t("framework")] = ModelBase::toJson(framework_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(versionIdIsSet_) {
        val[utility::conversions::to_string_t("version_id")] = ModelBase::toJson(versionId_);
    }
    if(versionCountIsSet_) {
        val[utility::conversions::to_string_t("version_count")] = ModelBase::toJson(versionCount_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(weightIsSet_) {
        val[utility::conversions::to_string_t("weight")] = ModelBase::toJson(weight_);
    }
    if(priorityIsSet_) {
        val[utility::conversions::to_string_t("priority")] = ModelBase::toJson(priority_);
    }
    if(secretTypeIsSet_) {
        val[utility::conversions::to_string_t("secret_type")] = ModelBase::toJson(secretType_);
    }
    if(secretNameIsSet_) {
        val[utility::conversions::to_string_t("secret_name")] = ModelBase::toJson(secretName_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(deployTypeIsSet_) {
        val[utility::conversions::to_string_t("deploy_type")] = ModelBase::toJson(deployType_);
    }
    if(workloadTypeIsSet_) {
        val[utility::conversions::to_string_t("workload_type")] = ModelBase::toJson(workloadType_);
    }
    if(highAvailSwitchIsSet_) {
        val[utility::conversions::to_string_t("high_avail_switch")] = ModelBase::toJson(highAvailSwitch_);
    }
    if(systemLogDumpEnableIsSet_) {
        val[utility::conversions::to_string_t("system_log_dump_enable")] = ModelBase::toJson(systemLogDumpEnable_);
    }
    if(scheduleStrategyIsSet_) {
        val[utility::conversions::to_string_t("schedule_strategy")] = ModelBase::toJson(scheduleStrategy_);
    }
    if(unitConfigsIsSet_) {
        val[utility::conversions::to_string_t("unit_configs")] = ModelBase::toJson(unitConfigs_);
    }
    if(modelIsSet_) {
        val[utility::conversions::to_string_t("model")] = ModelBase::toJson(model_);
    }
    if(advancedConfigIsSet_) {
        val[utility::conversions::to_string_t("advanced_config")] = ModelBase::toJson(advancedConfig_);
    }
    if(mirrorTrafficEnableIsSet_) {
        val[utility::conversions::to_string_t("mirror_traffic_enable")] = ModelBase::toJson(mirrorTrafficEnable_);
    }
    if(mirrorTrafficWeightIsSet_) {
        val[utility::conversions::to_string_t("mirror_traffic_weight")] = ModelBase::toJson(mirrorTrafficWeight_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(agencyNameIsSet_) {
        val[utility::conversions::to_string_t("agency_name")] = ModelBase::toJson(agencyName_);
    }
    if(lastUsedTimeIsSet_) {
        val[utility::conversions::to_string_t("last_used_time")] = ModelBase::toJson(lastUsedTime_);
    }
    if(deploymentTaskLimitIsSet_) {
        val[utility::conversions::to_string_t("deployment_task_limit")] = ModelBase::toJson(deploymentTaskLimit_);
    }
    if(frozenInfosIsSet_) {
        val[utility::conversions::to_string_t("frozen_infos")] = ModelBase::toJson(frozenInfos_);
    }
    if(createAtIsSet_) {
        val[utility::conversions::to_string_t("create_at")] = ModelBase::toJson(createAt_);
    }
    if(updateAtIsSet_) {
        val[utility::conversions::to_string_t("update_at")] = ModelBase::toJson(updateAt_);
    }

    return val;
}
bool ShowInferDeploymentVersionResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("deployment_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deployment_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeploymentName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("infer_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("infer_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInferName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("version_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionCount(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("weight"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("weight"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWeight(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("workload_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("workload_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWorkloadType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("system_log_dump_enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("system_log_dump_enable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSystemLogDumpEnable(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("unit_configs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("unit_configs"));
        if(!fieldValue.is_null())
        {
            std::vector<UnitConfig> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUnitConfigs(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("advanced_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("advanced_config"));
        if(!fieldValue.is_null())
        {
            AdvancedConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAdvancedConfig(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("last_used_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("last_used_time"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastUsedTime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("frozen_infos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("frozen_infos"));
        if(!fieldValue.is_null())
        {
            std::vector<FrozenInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFrozenInfos(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_at"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateAt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_at"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateAt(refVal);
        }
    }
    return ok;
}


std::string ShowInferDeploymentVersionResponse::getId() const
{
    return id_;
}

void ShowInferDeploymentVersionResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowInferDeploymentVersionResponse::idIsSet() const
{
    return idIsSet_;
}

void ShowInferDeploymentVersionResponse::unsetid()
{
    idIsSet_ = false;
}

std::string ShowInferDeploymentVersionResponse::getName() const
{
    return name_;
}

void ShowInferDeploymentVersionResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowInferDeploymentVersionResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ShowInferDeploymentVersionResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string ShowInferDeploymentVersionResponse::getDeploymentName() const
{
    return deploymentName_;
}

void ShowInferDeploymentVersionResponse::setDeploymentName(const std::string& value)
{
    deploymentName_ = value;
    deploymentNameIsSet_ = true;
}

bool ShowInferDeploymentVersionResponse::deploymentNameIsSet() const
{
    return deploymentNameIsSet_;
}

void ShowInferDeploymentVersionResponse::unsetdeploymentName()
{
    deploymentNameIsSet_ = false;
}

std::string ShowInferDeploymentVersionResponse::getInferName() const
{
    return inferName_;
}

void ShowInferDeploymentVersionResponse::setInferName(const std::string& value)
{
    inferName_ = value;
    inferNameIsSet_ = true;
}

bool ShowInferDeploymentVersionResponse::inferNameIsSet() const
{
    return inferNameIsSet_;
}

void ShowInferDeploymentVersionResponse::unsetinferName()
{
    inferNameIsSet_ = false;
}

std::string ShowInferDeploymentVersionResponse::getDescription() const
{
    return description_;
}

void ShowInferDeploymentVersionResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ShowInferDeploymentVersionResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ShowInferDeploymentVersionResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ShowInferDeploymentVersionResponse::getPoolId() const
{
    return poolId_;
}

void ShowInferDeploymentVersionResponse::setPoolId(const std::string& value)
{
    poolId_ = value;
    poolIdIsSet_ = true;
}

bool ShowInferDeploymentVersionResponse::poolIdIsSet() const
{
    return poolIdIsSet_;
}

void ShowInferDeploymentVersionResponse::unsetpoolId()
{
    poolIdIsSet_ = false;
}

std::string ShowInferDeploymentVersionResponse::getFramework() const
{
    return framework_;
}

void ShowInferDeploymentVersionResponse::setFramework(const std::string& value)
{
    framework_ = value;
    frameworkIsSet_ = true;
}

bool ShowInferDeploymentVersionResponse::frameworkIsSet() const
{
    return frameworkIsSet_;
}

void ShowInferDeploymentVersionResponse::unsetframework()
{
    frameworkIsSet_ = false;
}

std::string ShowInferDeploymentVersionResponse::getVersion() const
{
    return version_;
}

void ShowInferDeploymentVersionResponse::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool ShowInferDeploymentVersionResponse::versionIsSet() const
{
    return versionIsSet_;
}

void ShowInferDeploymentVersionResponse::unsetversion()
{
    versionIsSet_ = false;
}

std::string ShowInferDeploymentVersionResponse::getVersionId() const
{
    return versionId_;
}

void ShowInferDeploymentVersionResponse::setVersionId(const std::string& value)
{
    versionId_ = value;
    versionIdIsSet_ = true;
}

bool ShowInferDeploymentVersionResponse::versionIdIsSet() const
{
    return versionIdIsSet_;
}

void ShowInferDeploymentVersionResponse::unsetversionId()
{
    versionIdIsSet_ = false;
}

int32_t ShowInferDeploymentVersionResponse::getVersionCount() const
{
    return versionCount_;
}

void ShowInferDeploymentVersionResponse::setVersionCount(int32_t value)
{
    versionCount_ = value;
    versionCountIsSet_ = true;
}

bool ShowInferDeploymentVersionResponse::versionCountIsSet() const
{
    return versionCountIsSet_;
}

void ShowInferDeploymentVersionResponse::unsetversionCount()
{
    versionCountIsSet_ = false;
}

int32_t ShowInferDeploymentVersionResponse::getCount() const
{
    return count_;
}

void ShowInferDeploymentVersionResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ShowInferDeploymentVersionResponse::countIsSet() const
{
    return countIsSet_;
}

void ShowInferDeploymentVersionResponse::unsetcount()
{
    countIsSet_ = false;
}

int32_t ShowInferDeploymentVersionResponse::getWeight() const
{
    return weight_;
}

void ShowInferDeploymentVersionResponse::setWeight(int32_t value)
{
    weight_ = value;
    weightIsSet_ = true;
}

bool ShowInferDeploymentVersionResponse::weightIsSet() const
{
    return weightIsSet_;
}

void ShowInferDeploymentVersionResponse::unsetweight()
{
    weightIsSet_ = false;
}

int32_t ShowInferDeploymentVersionResponse::getPriority() const
{
    return priority_;
}

void ShowInferDeploymentVersionResponse::setPriority(int32_t value)
{
    priority_ = value;
    priorityIsSet_ = true;
}

bool ShowInferDeploymentVersionResponse::priorityIsSet() const
{
    return priorityIsSet_;
}

void ShowInferDeploymentVersionResponse::unsetpriority()
{
    priorityIsSet_ = false;
}

std::string ShowInferDeploymentVersionResponse::getSecretType() const
{
    return secretType_;
}

void ShowInferDeploymentVersionResponse::setSecretType(const std::string& value)
{
    secretType_ = value;
    secretTypeIsSet_ = true;
}

bool ShowInferDeploymentVersionResponse::secretTypeIsSet() const
{
    return secretTypeIsSet_;
}

void ShowInferDeploymentVersionResponse::unsetsecretType()
{
    secretTypeIsSet_ = false;
}

std::string ShowInferDeploymentVersionResponse::getSecretName() const
{
    return secretName_;
}

void ShowInferDeploymentVersionResponse::setSecretName(const std::string& value)
{
    secretName_ = value;
    secretNameIsSet_ = true;
}

bool ShowInferDeploymentVersionResponse::secretNameIsSet() const
{
    return secretNameIsSet_;
}

void ShowInferDeploymentVersionResponse::unsetsecretName()
{
    secretNameIsSet_ = false;
}

std::string ShowInferDeploymentVersionResponse::getStatus() const
{
    return status_;
}

void ShowInferDeploymentVersionResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowInferDeploymentVersionResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowInferDeploymentVersionResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string ShowInferDeploymentVersionResponse::getDeployType() const
{
    return deployType_;
}

void ShowInferDeploymentVersionResponse::setDeployType(const std::string& value)
{
    deployType_ = value;
    deployTypeIsSet_ = true;
}

bool ShowInferDeploymentVersionResponse::deployTypeIsSet() const
{
    return deployTypeIsSet_;
}

void ShowInferDeploymentVersionResponse::unsetdeployType()
{
    deployTypeIsSet_ = false;
}

std::string ShowInferDeploymentVersionResponse::getWorkloadType() const
{
    return workloadType_;
}

void ShowInferDeploymentVersionResponse::setWorkloadType(const std::string& value)
{
    workloadType_ = value;
    workloadTypeIsSet_ = true;
}

bool ShowInferDeploymentVersionResponse::workloadTypeIsSet() const
{
    return workloadTypeIsSet_;
}

void ShowInferDeploymentVersionResponse::unsetworkloadType()
{
    workloadTypeIsSet_ = false;
}

bool ShowInferDeploymentVersionResponse::isHighAvailSwitch() const
{
    return highAvailSwitch_;
}

void ShowInferDeploymentVersionResponse::setHighAvailSwitch(bool value)
{
    highAvailSwitch_ = value;
    highAvailSwitchIsSet_ = true;
}

bool ShowInferDeploymentVersionResponse::highAvailSwitchIsSet() const
{
    return highAvailSwitchIsSet_;
}

void ShowInferDeploymentVersionResponse::unsethighAvailSwitch()
{
    highAvailSwitchIsSet_ = false;
}

bool ShowInferDeploymentVersionResponse::isSystemLogDumpEnable() const
{
    return systemLogDumpEnable_;
}

void ShowInferDeploymentVersionResponse::setSystemLogDumpEnable(bool value)
{
    systemLogDumpEnable_ = value;
    systemLogDumpEnableIsSet_ = true;
}

bool ShowInferDeploymentVersionResponse::systemLogDumpEnableIsSet() const
{
    return systemLogDumpEnableIsSet_;
}

void ShowInferDeploymentVersionResponse::unsetsystemLogDumpEnable()
{
    systemLogDumpEnableIsSet_ = false;
}

std::string ShowInferDeploymentVersionResponse::getScheduleStrategy() const
{
    return scheduleStrategy_;
}

void ShowInferDeploymentVersionResponse::setScheduleStrategy(const std::string& value)
{
    scheduleStrategy_ = value;
    scheduleStrategyIsSet_ = true;
}

bool ShowInferDeploymentVersionResponse::scheduleStrategyIsSet() const
{
    return scheduleStrategyIsSet_;
}

void ShowInferDeploymentVersionResponse::unsetscheduleStrategy()
{
    scheduleStrategyIsSet_ = false;
}

std::vector<UnitConfig>& ShowInferDeploymentVersionResponse::getUnitConfigs()
{
    return unitConfigs_;
}

void ShowInferDeploymentVersionResponse::setUnitConfigs(const std::vector<UnitConfig>& value)
{
    unitConfigs_ = value;
    unitConfigsIsSet_ = true;
}

bool ShowInferDeploymentVersionResponse::unitConfigsIsSet() const
{
    return unitConfigsIsSet_;
}

void ShowInferDeploymentVersionResponse::unsetunitConfigs()
{
    unitConfigsIsSet_ = false;
}

GroupModel ShowInferDeploymentVersionResponse::getModel() const
{
    return model_;
}

void ShowInferDeploymentVersionResponse::setModel(const GroupModel& value)
{
    model_ = value;
    modelIsSet_ = true;
}

bool ShowInferDeploymentVersionResponse::modelIsSet() const
{
    return modelIsSet_;
}

void ShowInferDeploymentVersionResponse::unsetmodel()
{
    modelIsSet_ = false;
}

AdvancedConfig ShowInferDeploymentVersionResponse::getAdvancedConfig() const
{
    return advancedConfig_;
}

void ShowInferDeploymentVersionResponse::setAdvancedConfig(const AdvancedConfig& value)
{
    advancedConfig_ = value;
    advancedConfigIsSet_ = true;
}

bool ShowInferDeploymentVersionResponse::advancedConfigIsSet() const
{
    return advancedConfigIsSet_;
}

void ShowInferDeploymentVersionResponse::unsetadvancedConfig()
{
    advancedConfigIsSet_ = false;
}

bool ShowInferDeploymentVersionResponse::isMirrorTrafficEnable() const
{
    return mirrorTrafficEnable_;
}

void ShowInferDeploymentVersionResponse::setMirrorTrafficEnable(bool value)
{
    mirrorTrafficEnable_ = value;
    mirrorTrafficEnableIsSet_ = true;
}

bool ShowInferDeploymentVersionResponse::mirrorTrafficEnableIsSet() const
{
    return mirrorTrafficEnableIsSet_;
}

void ShowInferDeploymentVersionResponse::unsetmirrorTrafficEnable()
{
    mirrorTrafficEnableIsSet_ = false;
}

int32_t ShowInferDeploymentVersionResponse::getMirrorTrafficWeight() const
{
    return mirrorTrafficWeight_;
}

void ShowInferDeploymentVersionResponse::setMirrorTrafficWeight(int32_t value)
{
    mirrorTrafficWeight_ = value;
    mirrorTrafficWeightIsSet_ = true;
}

bool ShowInferDeploymentVersionResponse::mirrorTrafficWeightIsSet() const
{
    return mirrorTrafficWeightIsSet_;
}

void ShowInferDeploymentVersionResponse::unsetmirrorTrafficWeight()
{
    mirrorTrafficWeightIsSet_ = false;
}

std::string ShowInferDeploymentVersionResponse::getUserName() const
{
    return userName_;
}

void ShowInferDeploymentVersionResponse::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool ShowInferDeploymentVersionResponse::userNameIsSet() const
{
    return userNameIsSet_;
}

void ShowInferDeploymentVersionResponse::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string ShowInferDeploymentVersionResponse::getAgencyName() const
{
    return agencyName_;
}

void ShowInferDeploymentVersionResponse::setAgencyName(const std::string& value)
{
    agencyName_ = value;
    agencyNameIsSet_ = true;
}

bool ShowInferDeploymentVersionResponse::agencyNameIsSet() const
{
    return agencyNameIsSet_;
}

void ShowInferDeploymentVersionResponse::unsetagencyName()
{
    agencyNameIsSet_ = false;
}

utility::datetime ShowInferDeploymentVersionResponse::getLastUsedTime() const
{
    return lastUsedTime_;
}

void ShowInferDeploymentVersionResponse::setLastUsedTime(const utility::datetime& value)
{
    lastUsedTime_ = value;
    lastUsedTimeIsSet_ = true;
}

bool ShowInferDeploymentVersionResponse::lastUsedTimeIsSet() const
{
    return lastUsedTimeIsSet_;
}

void ShowInferDeploymentVersionResponse::unsetlastUsedTime()
{
    lastUsedTimeIsSet_ = false;
}

DeploymentTaskLimit ShowInferDeploymentVersionResponse::getDeploymentTaskLimit() const
{
    return deploymentTaskLimit_;
}

void ShowInferDeploymentVersionResponse::setDeploymentTaskLimit(const DeploymentTaskLimit& value)
{
    deploymentTaskLimit_ = value;
    deploymentTaskLimitIsSet_ = true;
}

bool ShowInferDeploymentVersionResponse::deploymentTaskLimitIsSet() const
{
    return deploymentTaskLimitIsSet_;
}

void ShowInferDeploymentVersionResponse::unsetdeploymentTaskLimit()
{
    deploymentTaskLimitIsSet_ = false;
}

std::vector<FrozenInfo>& ShowInferDeploymentVersionResponse::getFrozenInfos()
{
    return frozenInfos_;
}

void ShowInferDeploymentVersionResponse::setFrozenInfos(const std::vector<FrozenInfo>& value)
{
    frozenInfos_ = value;
    frozenInfosIsSet_ = true;
}

bool ShowInferDeploymentVersionResponse::frozenInfosIsSet() const
{
    return frozenInfosIsSet_;
}

void ShowInferDeploymentVersionResponse::unsetfrozenInfos()
{
    frozenInfosIsSet_ = false;
}

utility::datetime ShowInferDeploymentVersionResponse::getCreateAt() const
{
    return createAt_;
}

void ShowInferDeploymentVersionResponse::setCreateAt(const utility::datetime& value)
{
    createAt_ = value;
    createAtIsSet_ = true;
}

bool ShowInferDeploymentVersionResponse::createAtIsSet() const
{
    return createAtIsSet_;
}

void ShowInferDeploymentVersionResponse::unsetcreateAt()
{
    createAtIsSet_ = false;
}

utility::datetime ShowInferDeploymentVersionResponse::getUpdateAt() const
{
    return updateAt_;
}

void ShowInferDeploymentVersionResponse::setUpdateAt(const utility::datetime& value)
{
    updateAt_ = value;
    updateAtIsSet_ = true;
}

bool ShowInferDeploymentVersionResponse::updateAtIsSet() const
{
    return updateAtIsSet_;
}

void ShowInferDeploymentVersionResponse::unsetupdateAt()
{
    updateAtIsSet_ = false;
}

}
}
}
}
}


