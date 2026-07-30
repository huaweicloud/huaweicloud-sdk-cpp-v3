

#include "huaweicloud/modelarts/v1/model/ShowInferDeploymentResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ShowInferDeploymentResponse::ShowInferDeploymentResponse()
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
    trafficRatio_ = "";
    trafficRatioIsSet_ = false;
    secretType_ = "";
    secretTypeIsSet_ = false;
    secretName_ = "";
    secretNameIsSet_ = false;
    priority_ = 0;
    priorityIsSet_ = false;
    highAvailSwitch_ = false;
    highAvailSwitchIsSet_ = false;
    framework_ = "";
    frameworkIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    versionId_ = "";
    versionIdIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
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
    ltsState_ = "";
    ltsStateIsSet_ = false;
    inferName_ = "";
    inferNameIsSet_ = false;
    modelIsSet_ = false;
    advancedConfigIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    createAt_ = "";
    createAtIsSet_ = false;
    scheduleStrategy_ = "";
    scheduleStrategyIsSet_ = false;
}

ShowInferDeploymentResponse::~ShowInferDeploymentResponse() = default;

void ShowInferDeploymentResponse::validate()
{
}

web::json::value ShowInferDeploymentResponse::toJson() const
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
    if(trafficRatioIsSet_) {
        val[utility::conversions::to_string_t("traffic_ratio")] = ModelBase::toJson(trafficRatio_);
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
    if(frameworkIsSet_) {
        val[utility::conversions::to_string_t("framework")] = ModelBase::toJson(framework_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(versionIdIsSet_) {
        val[utility::conversions::to_string_t("version_id")] = ModelBase::toJson(versionId_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
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
    if(ltsStateIsSet_) {
        val[utility::conversions::to_string_t("lts_state")] = ModelBase::toJson(ltsState_);
    }
    if(inferNameIsSet_) {
        val[utility::conversions::to_string_t("infer_name")] = ModelBase::toJson(inferName_);
    }
    if(modelIsSet_) {
        val[utility::conversions::to_string_t("model")] = ModelBase::toJson(model_);
    }
    if(advancedConfigIsSet_) {
        val[utility::conversions::to_string_t("advanced_config")] = ModelBase::toJson(advancedConfig_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(createAtIsSet_) {
        val[utility::conversions::to_string_t("create_at")] = ModelBase::toJson(createAt_);
    }
    if(scheduleStrategyIsSet_) {
        val[utility::conversions::to_string_t("schedule_strategy")] = ModelBase::toJson(scheduleStrategy_);
    }

    return val;
}
bool ShowInferDeploymentResponse::fromJson(const web::json::value& val)
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
            std::vector<UnitConfigResponse> refVal;
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
    if(val.has_field(utility::conversions::to_string_t("traffic_ratio"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("traffic_ratio"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTrafficRatio(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("lts_state"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lts_state"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLtsState(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("model"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("model"));
        if(!fieldValue.is_null())
        {
            InferModelResponse refVal;
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_at"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateAt(refVal);
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


std::string ShowInferDeploymentResponse::getId() const
{
    return id_;
}

void ShowInferDeploymentResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ShowInferDeploymentResponse::idIsSet() const
{
    return idIsSet_;
}

void ShowInferDeploymentResponse::unsetid()
{
    idIsSet_ = false;
}

std::string ShowInferDeploymentResponse::getName() const
{
    return name_;
}

void ShowInferDeploymentResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ShowInferDeploymentResponse::nameIsSet() const
{
    return nameIsSet_;
}

void ShowInferDeploymentResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string ShowInferDeploymentResponse::getPoolId() const
{
    return poolId_;
}

void ShowInferDeploymentResponse::setPoolId(const std::string& value)
{
    poolId_ = value;
    poolIdIsSet_ = true;
}

bool ShowInferDeploymentResponse::poolIdIsSet() const
{
    return poolIdIsSet_;
}

void ShowInferDeploymentResponse::unsetpoolId()
{
    poolIdIsSet_ = false;
}

int32_t ShowInferDeploymentResponse::getCount() const
{
    return count_;
}

void ShowInferDeploymentResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool ShowInferDeploymentResponse::countIsSet() const
{
    return countIsSet_;
}

void ShowInferDeploymentResponse::unsetcount()
{
    countIsSet_ = false;
}

bool ShowInferDeploymentResponse::isSystemLogDumpEnable() const
{
    return systemLogDumpEnable_;
}

void ShowInferDeploymentResponse::setSystemLogDumpEnable(bool value)
{
    systemLogDumpEnable_ = value;
    systemLogDumpEnableIsSet_ = true;
}

bool ShowInferDeploymentResponse::systemLogDumpEnableIsSet() const
{
    return systemLogDumpEnableIsSet_;
}

void ShowInferDeploymentResponse::unsetsystemLogDumpEnable()
{
    systemLogDumpEnableIsSet_ = false;
}

std::vector<UnitConfigResponse>& ShowInferDeploymentResponse::getUnitConfigs()
{
    return unitConfigs_;
}

void ShowInferDeploymentResponse::setUnitConfigs(const std::vector<UnitConfigResponse>& value)
{
    unitConfigs_ = value;
    unitConfigsIsSet_ = true;
}

bool ShowInferDeploymentResponse::unitConfigsIsSet() const
{
    return unitConfigsIsSet_;
}

void ShowInferDeploymentResponse::unsetunitConfigs()
{
    unitConfigsIsSet_ = false;
}

int32_t ShowInferDeploymentResponse::getWeight() const
{
    return weight_;
}

void ShowInferDeploymentResponse::setWeight(int32_t value)
{
    weight_ = value;
    weightIsSet_ = true;
}

bool ShowInferDeploymentResponse::weightIsSet() const
{
    return weightIsSet_;
}

void ShowInferDeploymentResponse::unsetweight()
{
    weightIsSet_ = false;
}

std::string ShowInferDeploymentResponse::getTrafficRatio() const
{
    return trafficRatio_;
}

void ShowInferDeploymentResponse::setTrafficRatio(const std::string& value)
{
    trafficRatio_ = value;
    trafficRatioIsSet_ = true;
}

bool ShowInferDeploymentResponse::trafficRatioIsSet() const
{
    return trafficRatioIsSet_;
}

void ShowInferDeploymentResponse::unsettrafficRatio()
{
    trafficRatioIsSet_ = false;
}

std::string ShowInferDeploymentResponse::getSecretType() const
{
    return secretType_;
}

void ShowInferDeploymentResponse::setSecretType(const std::string& value)
{
    secretType_ = value;
    secretTypeIsSet_ = true;
}

bool ShowInferDeploymentResponse::secretTypeIsSet() const
{
    return secretTypeIsSet_;
}

void ShowInferDeploymentResponse::unsetsecretType()
{
    secretTypeIsSet_ = false;
}

std::string ShowInferDeploymentResponse::getSecretName() const
{
    return secretName_;
}

void ShowInferDeploymentResponse::setSecretName(const std::string& value)
{
    secretName_ = value;
    secretNameIsSet_ = true;
}

bool ShowInferDeploymentResponse::secretNameIsSet() const
{
    return secretNameIsSet_;
}

void ShowInferDeploymentResponse::unsetsecretName()
{
    secretNameIsSet_ = false;
}

int32_t ShowInferDeploymentResponse::getPriority() const
{
    return priority_;
}

void ShowInferDeploymentResponse::setPriority(int32_t value)
{
    priority_ = value;
    priorityIsSet_ = true;
}

bool ShowInferDeploymentResponse::priorityIsSet() const
{
    return priorityIsSet_;
}

void ShowInferDeploymentResponse::unsetpriority()
{
    priorityIsSet_ = false;
}

bool ShowInferDeploymentResponse::isHighAvailSwitch() const
{
    return highAvailSwitch_;
}

void ShowInferDeploymentResponse::setHighAvailSwitch(bool value)
{
    highAvailSwitch_ = value;
    highAvailSwitchIsSet_ = true;
}

bool ShowInferDeploymentResponse::highAvailSwitchIsSet() const
{
    return highAvailSwitchIsSet_;
}

void ShowInferDeploymentResponse::unsethighAvailSwitch()
{
    highAvailSwitchIsSet_ = false;
}

std::string ShowInferDeploymentResponse::getFramework() const
{
    return framework_;
}

void ShowInferDeploymentResponse::setFramework(const std::string& value)
{
    framework_ = value;
    frameworkIsSet_ = true;
}

bool ShowInferDeploymentResponse::frameworkIsSet() const
{
    return frameworkIsSet_;
}

void ShowInferDeploymentResponse::unsetframework()
{
    frameworkIsSet_ = false;
}

std::string ShowInferDeploymentResponse::getVersion() const
{
    return version_;
}

void ShowInferDeploymentResponse::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool ShowInferDeploymentResponse::versionIsSet() const
{
    return versionIsSet_;
}

void ShowInferDeploymentResponse::unsetversion()
{
    versionIsSet_ = false;
}

std::string ShowInferDeploymentResponse::getVersionId() const
{
    return versionId_;
}

void ShowInferDeploymentResponse::setVersionId(const std::string& value)
{
    versionId_ = value;
    versionIdIsSet_ = true;
}

bool ShowInferDeploymentResponse::versionIdIsSet() const
{
    return versionIdIsSet_;
}

void ShowInferDeploymentResponse::unsetversionId()
{
    versionIdIsSet_ = false;
}

std::string ShowInferDeploymentResponse::getStatus() const
{
    return status_;
}

void ShowInferDeploymentResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool ShowInferDeploymentResponse::statusIsSet() const
{
    return statusIsSet_;
}

void ShowInferDeploymentResponse::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t ShowInferDeploymentResponse::getRunningCount() const
{
    return runningCount_;
}

void ShowInferDeploymentResponse::setRunningCount(int32_t value)
{
    runningCount_ = value;
    runningCountIsSet_ = true;
}

bool ShowInferDeploymentResponse::runningCountIsSet() const
{
    return runningCountIsSet_;
}

void ShowInferDeploymentResponse::unsetrunningCount()
{
    runningCountIsSet_ = false;
}

std::string ShowInferDeploymentResponse::getDeployType() const
{
    return deployType_;
}

void ShowInferDeploymentResponse::setDeployType(const std::string& value)
{
    deployType_ = value;
    deployTypeIsSet_ = true;
}

bool ShowInferDeploymentResponse::deployTypeIsSet() const
{
    return deployTypeIsSet_;
}

void ShowInferDeploymentResponse::unsetdeployType()
{
    deployTypeIsSet_ = false;
}

bool ShowInferDeploymentResponse::isMirrorTrafficEnable() const
{
    return mirrorTrafficEnable_;
}

void ShowInferDeploymentResponse::setMirrorTrafficEnable(bool value)
{
    mirrorTrafficEnable_ = value;
    mirrorTrafficEnableIsSet_ = true;
}

bool ShowInferDeploymentResponse::mirrorTrafficEnableIsSet() const
{
    return mirrorTrafficEnableIsSet_;
}

void ShowInferDeploymentResponse::unsetmirrorTrafficEnable()
{
    mirrorTrafficEnableIsSet_ = false;
}

std::string ShowInferDeploymentResponse::getMirrorTrafficWeight() const
{
    return mirrorTrafficWeight_;
}

void ShowInferDeploymentResponse::setMirrorTrafficWeight(const std::string& value)
{
    mirrorTrafficWeight_ = value;
    mirrorTrafficWeightIsSet_ = true;
}

bool ShowInferDeploymentResponse::mirrorTrafficWeightIsSet() const
{
    return mirrorTrafficWeightIsSet_;
}

void ShowInferDeploymentResponse::unsetmirrorTrafficWeight()
{
    mirrorTrafficWeightIsSet_ = false;
}

int32_t ShowInferDeploymentResponse::getVersionCount() const
{
    return versionCount_;
}

void ShowInferDeploymentResponse::setVersionCount(int32_t value)
{
    versionCount_ = value;
    versionCountIsSet_ = true;
}

bool ShowInferDeploymentResponse::versionCountIsSet() const
{
    return versionCountIsSet_;
}

void ShowInferDeploymentResponse::unsetversionCount()
{
    versionCountIsSet_ = false;
}

std::string ShowInferDeploymentResponse::getWorkloadType() const
{
    return workloadType_;
}

void ShowInferDeploymentResponse::setWorkloadType(const std::string& value)
{
    workloadType_ = value;
    workloadTypeIsSet_ = true;
}

bool ShowInferDeploymentResponse::workloadTypeIsSet() const
{
    return workloadTypeIsSet_;
}

void ShowInferDeploymentResponse::unsetworkloadType()
{
    workloadTypeIsSet_ = false;
}

int64_t ShowInferDeploymentResponse::getUpdateAt() const
{
    return updateAt_;
}

void ShowInferDeploymentResponse::setUpdateAt(int64_t value)
{
    updateAt_ = value;
    updateAtIsSet_ = true;
}

bool ShowInferDeploymentResponse::updateAtIsSet() const
{
    return updateAtIsSet_;
}

void ShowInferDeploymentResponse::unsetupdateAt()
{
    updateAtIsSet_ = false;
}

std::string ShowInferDeploymentResponse::getLtsState() const
{
    return ltsState_;
}

void ShowInferDeploymentResponse::setLtsState(const std::string& value)
{
    ltsState_ = value;
    ltsStateIsSet_ = true;
}

bool ShowInferDeploymentResponse::ltsStateIsSet() const
{
    return ltsStateIsSet_;
}

void ShowInferDeploymentResponse::unsetltsState()
{
    ltsStateIsSet_ = false;
}

std::string ShowInferDeploymentResponse::getInferName() const
{
    return inferName_;
}

void ShowInferDeploymentResponse::setInferName(const std::string& value)
{
    inferName_ = value;
    inferNameIsSet_ = true;
}

bool ShowInferDeploymentResponse::inferNameIsSet() const
{
    return inferNameIsSet_;
}

void ShowInferDeploymentResponse::unsetinferName()
{
    inferNameIsSet_ = false;
}

InferModelResponse ShowInferDeploymentResponse::getModel() const
{
    return model_;
}

void ShowInferDeploymentResponse::setModel(const InferModelResponse& value)
{
    model_ = value;
    modelIsSet_ = true;
}

bool ShowInferDeploymentResponse::modelIsSet() const
{
    return modelIsSet_;
}

void ShowInferDeploymentResponse::unsetmodel()
{
    modelIsSet_ = false;
}

AdvancedConfig ShowInferDeploymentResponse::getAdvancedConfig() const
{
    return advancedConfig_;
}

void ShowInferDeploymentResponse::setAdvancedConfig(const AdvancedConfig& value)
{
    advancedConfig_ = value;
    advancedConfigIsSet_ = true;
}

bool ShowInferDeploymentResponse::advancedConfigIsSet() const
{
    return advancedConfigIsSet_;
}

void ShowInferDeploymentResponse::unsetadvancedConfig()
{
    advancedConfigIsSet_ = false;
}

std::string ShowInferDeploymentResponse::getDescription() const
{
    return description_;
}

void ShowInferDeploymentResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ShowInferDeploymentResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ShowInferDeploymentResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ShowInferDeploymentResponse::getCreateAt() const
{
    return createAt_;
}

void ShowInferDeploymentResponse::setCreateAt(const std::string& value)
{
    createAt_ = value;
    createAtIsSet_ = true;
}

bool ShowInferDeploymentResponse::createAtIsSet() const
{
    return createAtIsSet_;
}

void ShowInferDeploymentResponse::unsetcreateAt()
{
    createAtIsSet_ = false;
}

std::string ShowInferDeploymentResponse::getScheduleStrategy() const
{
    return scheduleStrategy_;
}

void ShowInferDeploymentResponse::setScheduleStrategy(const std::string& value)
{
    scheduleStrategy_ = value;
    scheduleStrategyIsSet_ = true;
}

bool ShowInferDeploymentResponse::scheduleStrategyIsSet() const
{
    return scheduleStrategyIsSet_;
}

void ShowInferDeploymentResponse::unsetscheduleStrategy()
{
    scheduleStrategyIsSet_ = false;
}

}
}
}
}
}


