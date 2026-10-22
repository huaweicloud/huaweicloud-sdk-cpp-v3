

#include "huaweicloud/modelarts/v1/model/CancelInferDeploymentResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




CancelInferDeploymentResponse::CancelInferDeploymentResponse()
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

CancelInferDeploymentResponse::~CancelInferDeploymentResponse() = default;

void CancelInferDeploymentResponse::validate()
{
}

web::json::value CancelInferDeploymentResponse::toJson() const
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
bool CancelInferDeploymentResponse::fromJson(const web::json::value& val)
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


std::string CancelInferDeploymentResponse::getId() const
{
    return id_;
}

void CancelInferDeploymentResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool CancelInferDeploymentResponse::idIsSet() const
{
    return idIsSet_;
}

void CancelInferDeploymentResponse::unsetid()
{
    idIsSet_ = false;
}

std::string CancelInferDeploymentResponse::getName() const
{
    return name_;
}

void CancelInferDeploymentResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CancelInferDeploymentResponse::nameIsSet() const
{
    return nameIsSet_;
}

void CancelInferDeploymentResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string CancelInferDeploymentResponse::getDeploymentName() const
{
    return deploymentName_;
}

void CancelInferDeploymentResponse::setDeploymentName(const std::string& value)
{
    deploymentName_ = value;
    deploymentNameIsSet_ = true;
}

bool CancelInferDeploymentResponse::deploymentNameIsSet() const
{
    return deploymentNameIsSet_;
}

void CancelInferDeploymentResponse::unsetdeploymentName()
{
    deploymentNameIsSet_ = false;
}

std::string CancelInferDeploymentResponse::getInferName() const
{
    return inferName_;
}

void CancelInferDeploymentResponse::setInferName(const std::string& value)
{
    inferName_ = value;
    inferNameIsSet_ = true;
}

bool CancelInferDeploymentResponse::inferNameIsSet() const
{
    return inferNameIsSet_;
}

void CancelInferDeploymentResponse::unsetinferName()
{
    inferNameIsSet_ = false;
}

std::string CancelInferDeploymentResponse::getDescription() const
{
    return description_;
}

void CancelInferDeploymentResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool CancelInferDeploymentResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void CancelInferDeploymentResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string CancelInferDeploymentResponse::getPoolId() const
{
    return poolId_;
}

void CancelInferDeploymentResponse::setPoolId(const std::string& value)
{
    poolId_ = value;
    poolIdIsSet_ = true;
}

bool CancelInferDeploymentResponse::poolIdIsSet() const
{
    return poolIdIsSet_;
}

void CancelInferDeploymentResponse::unsetpoolId()
{
    poolIdIsSet_ = false;
}

std::string CancelInferDeploymentResponse::getFramework() const
{
    return framework_;
}

void CancelInferDeploymentResponse::setFramework(const std::string& value)
{
    framework_ = value;
    frameworkIsSet_ = true;
}

bool CancelInferDeploymentResponse::frameworkIsSet() const
{
    return frameworkIsSet_;
}

void CancelInferDeploymentResponse::unsetframework()
{
    frameworkIsSet_ = false;
}

std::string CancelInferDeploymentResponse::getVersion() const
{
    return version_;
}

void CancelInferDeploymentResponse::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool CancelInferDeploymentResponse::versionIsSet() const
{
    return versionIsSet_;
}

void CancelInferDeploymentResponse::unsetversion()
{
    versionIsSet_ = false;
}

std::string CancelInferDeploymentResponse::getVersionId() const
{
    return versionId_;
}

void CancelInferDeploymentResponse::setVersionId(const std::string& value)
{
    versionId_ = value;
    versionIdIsSet_ = true;
}

bool CancelInferDeploymentResponse::versionIdIsSet() const
{
    return versionIdIsSet_;
}

void CancelInferDeploymentResponse::unsetversionId()
{
    versionIdIsSet_ = false;
}

int32_t CancelInferDeploymentResponse::getVersionCount() const
{
    return versionCount_;
}

void CancelInferDeploymentResponse::setVersionCount(int32_t value)
{
    versionCount_ = value;
    versionCountIsSet_ = true;
}

bool CancelInferDeploymentResponse::versionCountIsSet() const
{
    return versionCountIsSet_;
}

void CancelInferDeploymentResponse::unsetversionCount()
{
    versionCountIsSet_ = false;
}

int32_t CancelInferDeploymentResponse::getCount() const
{
    return count_;
}

void CancelInferDeploymentResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool CancelInferDeploymentResponse::countIsSet() const
{
    return countIsSet_;
}

void CancelInferDeploymentResponse::unsetcount()
{
    countIsSet_ = false;
}

int32_t CancelInferDeploymentResponse::getWeight() const
{
    return weight_;
}

void CancelInferDeploymentResponse::setWeight(int32_t value)
{
    weight_ = value;
    weightIsSet_ = true;
}

bool CancelInferDeploymentResponse::weightIsSet() const
{
    return weightIsSet_;
}

void CancelInferDeploymentResponse::unsetweight()
{
    weightIsSet_ = false;
}

int32_t CancelInferDeploymentResponse::getPriority() const
{
    return priority_;
}

void CancelInferDeploymentResponse::setPriority(int32_t value)
{
    priority_ = value;
    priorityIsSet_ = true;
}

bool CancelInferDeploymentResponse::priorityIsSet() const
{
    return priorityIsSet_;
}

void CancelInferDeploymentResponse::unsetpriority()
{
    priorityIsSet_ = false;
}

std::string CancelInferDeploymentResponse::getSecretType() const
{
    return secretType_;
}

void CancelInferDeploymentResponse::setSecretType(const std::string& value)
{
    secretType_ = value;
    secretTypeIsSet_ = true;
}

bool CancelInferDeploymentResponse::secretTypeIsSet() const
{
    return secretTypeIsSet_;
}

void CancelInferDeploymentResponse::unsetsecretType()
{
    secretTypeIsSet_ = false;
}

std::string CancelInferDeploymentResponse::getSecretName() const
{
    return secretName_;
}

void CancelInferDeploymentResponse::setSecretName(const std::string& value)
{
    secretName_ = value;
    secretNameIsSet_ = true;
}

bool CancelInferDeploymentResponse::secretNameIsSet() const
{
    return secretNameIsSet_;
}

void CancelInferDeploymentResponse::unsetsecretName()
{
    secretNameIsSet_ = false;
}

std::string CancelInferDeploymentResponse::getStatus() const
{
    return status_;
}

void CancelInferDeploymentResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool CancelInferDeploymentResponse::statusIsSet() const
{
    return statusIsSet_;
}

void CancelInferDeploymentResponse::unsetstatus()
{
    statusIsSet_ = false;
}

std::string CancelInferDeploymentResponse::getDeployType() const
{
    return deployType_;
}

void CancelInferDeploymentResponse::setDeployType(const std::string& value)
{
    deployType_ = value;
    deployTypeIsSet_ = true;
}

bool CancelInferDeploymentResponse::deployTypeIsSet() const
{
    return deployTypeIsSet_;
}

void CancelInferDeploymentResponse::unsetdeployType()
{
    deployTypeIsSet_ = false;
}

std::string CancelInferDeploymentResponse::getWorkloadType() const
{
    return workloadType_;
}

void CancelInferDeploymentResponse::setWorkloadType(const std::string& value)
{
    workloadType_ = value;
    workloadTypeIsSet_ = true;
}

bool CancelInferDeploymentResponse::workloadTypeIsSet() const
{
    return workloadTypeIsSet_;
}

void CancelInferDeploymentResponse::unsetworkloadType()
{
    workloadTypeIsSet_ = false;
}

bool CancelInferDeploymentResponse::isHighAvailSwitch() const
{
    return highAvailSwitch_;
}

void CancelInferDeploymentResponse::setHighAvailSwitch(bool value)
{
    highAvailSwitch_ = value;
    highAvailSwitchIsSet_ = true;
}

bool CancelInferDeploymentResponse::highAvailSwitchIsSet() const
{
    return highAvailSwitchIsSet_;
}

void CancelInferDeploymentResponse::unsethighAvailSwitch()
{
    highAvailSwitchIsSet_ = false;
}

bool CancelInferDeploymentResponse::isSystemLogDumpEnable() const
{
    return systemLogDumpEnable_;
}

void CancelInferDeploymentResponse::setSystemLogDumpEnable(bool value)
{
    systemLogDumpEnable_ = value;
    systemLogDumpEnableIsSet_ = true;
}

bool CancelInferDeploymentResponse::systemLogDumpEnableIsSet() const
{
    return systemLogDumpEnableIsSet_;
}

void CancelInferDeploymentResponse::unsetsystemLogDumpEnable()
{
    systemLogDumpEnableIsSet_ = false;
}

std::string CancelInferDeploymentResponse::getScheduleStrategy() const
{
    return scheduleStrategy_;
}

void CancelInferDeploymentResponse::setScheduleStrategy(const std::string& value)
{
    scheduleStrategy_ = value;
    scheduleStrategyIsSet_ = true;
}

bool CancelInferDeploymentResponse::scheduleStrategyIsSet() const
{
    return scheduleStrategyIsSet_;
}

void CancelInferDeploymentResponse::unsetscheduleStrategy()
{
    scheduleStrategyIsSet_ = false;
}

std::vector<UnitConfig>& CancelInferDeploymentResponse::getUnitConfigs()
{
    return unitConfigs_;
}

void CancelInferDeploymentResponse::setUnitConfigs(const std::vector<UnitConfig>& value)
{
    unitConfigs_ = value;
    unitConfigsIsSet_ = true;
}

bool CancelInferDeploymentResponse::unitConfigsIsSet() const
{
    return unitConfigsIsSet_;
}

void CancelInferDeploymentResponse::unsetunitConfigs()
{
    unitConfigsIsSet_ = false;
}

GroupModel CancelInferDeploymentResponse::getModel() const
{
    return model_;
}

void CancelInferDeploymentResponse::setModel(const GroupModel& value)
{
    model_ = value;
    modelIsSet_ = true;
}

bool CancelInferDeploymentResponse::modelIsSet() const
{
    return modelIsSet_;
}

void CancelInferDeploymentResponse::unsetmodel()
{
    modelIsSet_ = false;
}

AdvancedConfig CancelInferDeploymentResponse::getAdvancedConfig() const
{
    return advancedConfig_;
}

void CancelInferDeploymentResponse::setAdvancedConfig(const AdvancedConfig& value)
{
    advancedConfig_ = value;
    advancedConfigIsSet_ = true;
}

bool CancelInferDeploymentResponse::advancedConfigIsSet() const
{
    return advancedConfigIsSet_;
}

void CancelInferDeploymentResponse::unsetadvancedConfig()
{
    advancedConfigIsSet_ = false;
}

bool CancelInferDeploymentResponse::isMirrorTrafficEnable() const
{
    return mirrorTrafficEnable_;
}

void CancelInferDeploymentResponse::setMirrorTrafficEnable(bool value)
{
    mirrorTrafficEnable_ = value;
    mirrorTrafficEnableIsSet_ = true;
}

bool CancelInferDeploymentResponse::mirrorTrafficEnableIsSet() const
{
    return mirrorTrafficEnableIsSet_;
}

void CancelInferDeploymentResponse::unsetmirrorTrafficEnable()
{
    mirrorTrafficEnableIsSet_ = false;
}

int32_t CancelInferDeploymentResponse::getMirrorTrafficWeight() const
{
    return mirrorTrafficWeight_;
}

void CancelInferDeploymentResponse::setMirrorTrafficWeight(int32_t value)
{
    mirrorTrafficWeight_ = value;
    mirrorTrafficWeightIsSet_ = true;
}

bool CancelInferDeploymentResponse::mirrorTrafficWeightIsSet() const
{
    return mirrorTrafficWeightIsSet_;
}

void CancelInferDeploymentResponse::unsetmirrorTrafficWeight()
{
    mirrorTrafficWeightIsSet_ = false;
}

std::string CancelInferDeploymentResponse::getUserName() const
{
    return userName_;
}

void CancelInferDeploymentResponse::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool CancelInferDeploymentResponse::userNameIsSet() const
{
    return userNameIsSet_;
}

void CancelInferDeploymentResponse::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string CancelInferDeploymentResponse::getAgencyName() const
{
    return agencyName_;
}

void CancelInferDeploymentResponse::setAgencyName(const std::string& value)
{
    agencyName_ = value;
    agencyNameIsSet_ = true;
}

bool CancelInferDeploymentResponse::agencyNameIsSet() const
{
    return agencyNameIsSet_;
}

void CancelInferDeploymentResponse::unsetagencyName()
{
    agencyNameIsSet_ = false;
}

utility::datetime CancelInferDeploymentResponse::getLastUsedTime() const
{
    return lastUsedTime_;
}

void CancelInferDeploymentResponse::setLastUsedTime(const utility::datetime& value)
{
    lastUsedTime_ = value;
    lastUsedTimeIsSet_ = true;
}

bool CancelInferDeploymentResponse::lastUsedTimeIsSet() const
{
    return lastUsedTimeIsSet_;
}

void CancelInferDeploymentResponse::unsetlastUsedTime()
{
    lastUsedTimeIsSet_ = false;
}

DeploymentTaskLimit CancelInferDeploymentResponse::getDeploymentTaskLimit() const
{
    return deploymentTaskLimit_;
}

void CancelInferDeploymentResponse::setDeploymentTaskLimit(const DeploymentTaskLimit& value)
{
    deploymentTaskLimit_ = value;
    deploymentTaskLimitIsSet_ = true;
}

bool CancelInferDeploymentResponse::deploymentTaskLimitIsSet() const
{
    return deploymentTaskLimitIsSet_;
}

void CancelInferDeploymentResponse::unsetdeploymentTaskLimit()
{
    deploymentTaskLimitIsSet_ = false;
}

std::vector<FrozenInfo>& CancelInferDeploymentResponse::getFrozenInfos()
{
    return frozenInfos_;
}

void CancelInferDeploymentResponse::setFrozenInfos(const std::vector<FrozenInfo>& value)
{
    frozenInfos_ = value;
    frozenInfosIsSet_ = true;
}

bool CancelInferDeploymentResponse::frozenInfosIsSet() const
{
    return frozenInfosIsSet_;
}

void CancelInferDeploymentResponse::unsetfrozenInfos()
{
    frozenInfosIsSet_ = false;
}

utility::datetime CancelInferDeploymentResponse::getCreateAt() const
{
    return createAt_;
}

void CancelInferDeploymentResponse::setCreateAt(const utility::datetime& value)
{
    createAt_ = value;
    createAtIsSet_ = true;
}

bool CancelInferDeploymentResponse::createAtIsSet() const
{
    return createAtIsSet_;
}

void CancelInferDeploymentResponse::unsetcreateAt()
{
    createAtIsSet_ = false;
}

utility::datetime CancelInferDeploymentResponse::getUpdateAt() const
{
    return updateAt_;
}

void CancelInferDeploymentResponse::setUpdateAt(const utility::datetime& value)
{
    updateAt_ = value;
    updateAtIsSet_ = true;
}

bool CancelInferDeploymentResponse::updateAtIsSet() const
{
    return updateAtIsSet_;
}

void CancelInferDeploymentResponse::unsetupdateAt()
{
    updateAtIsSet_ = false;
}

}
}
}
}
}


