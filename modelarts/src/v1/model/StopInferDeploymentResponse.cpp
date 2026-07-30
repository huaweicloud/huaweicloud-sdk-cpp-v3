

#include "huaweicloud/modelarts/v1/model/StopInferDeploymentResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




StopInferDeploymentResponse::StopInferDeploymentResponse()
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

StopInferDeploymentResponse::~StopInferDeploymentResponse() = default;

void StopInferDeploymentResponse::validate()
{
}

web::json::value StopInferDeploymentResponse::toJson() const
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
bool StopInferDeploymentResponse::fromJson(const web::json::value& val)
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


std::string StopInferDeploymentResponse::getId() const
{
    return id_;
}

void StopInferDeploymentResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool StopInferDeploymentResponse::idIsSet() const
{
    return idIsSet_;
}

void StopInferDeploymentResponse::unsetid()
{
    idIsSet_ = false;
}

std::string StopInferDeploymentResponse::getName() const
{
    return name_;
}

void StopInferDeploymentResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool StopInferDeploymentResponse::nameIsSet() const
{
    return nameIsSet_;
}

void StopInferDeploymentResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string StopInferDeploymentResponse::getPoolId() const
{
    return poolId_;
}

void StopInferDeploymentResponse::setPoolId(const std::string& value)
{
    poolId_ = value;
    poolIdIsSet_ = true;
}

bool StopInferDeploymentResponse::poolIdIsSet() const
{
    return poolIdIsSet_;
}

void StopInferDeploymentResponse::unsetpoolId()
{
    poolIdIsSet_ = false;
}

int32_t StopInferDeploymentResponse::getCount() const
{
    return count_;
}

void StopInferDeploymentResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool StopInferDeploymentResponse::countIsSet() const
{
    return countIsSet_;
}

void StopInferDeploymentResponse::unsetcount()
{
    countIsSet_ = false;
}

bool StopInferDeploymentResponse::isSystemLogDumpEnable() const
{
    return systemLogDumpEnable_;
}

void StopInferDeploymentResponse::setSystemLogDumpEnable(bool value)
{
    systemLogDumpEnable_ = value;
    systemLogDumpEnableIsSet_ = true;
}

bool StopInferDeploymentResponse::systemLogDumpEnableIsSet() const
{
    return systemLogDumpEnableIsSet_;
}

void StopInferDeploymentResponse::unsetsystemLogDumpEnable()
{
    systemLogDumpEnableIsSet_ = false;
}

std::vector<UnitConfigResponse>& StopInferDeploymentResponse::getUnitConfigs()
{
    return unitConfigs_;
}

void StopInferDeploymentResponse::setUnitConfigs(const std::vector<UnitConfigResponse>& value)
{
    unitConfigs_ = value;
    unitConfigsIsSet_ = true;
}

bool StopInferDeploymentResponse::unitConfigsIsSet() const
{
    return unitConfigsIsSet_;
}

void StopInferDeploymentResponse::unsetunitConfigs()
{
    unitConfigsIsSet_ = false;
}

int32_t StopInferDeploymentResponse::getWeight() const
{
    return weight_;
}

void StopInferDeploymentResponse::setWeight(int32_t value)
{
    weight_ = value;
    weightIsSet_ = true;
}

bool StopInferDeploymentResponse::weightIsSet() const
{
    return weightIsSet_;
}

void StopInferDeploymentResponse::unsetweight()
{
    weightIsSet_ = false;
}

std::string StopInferDeploymentResponse::getTrafficRatio() const
{
    return trafficRatio_;
}

void StopInferDeploymentResponse::setTrafficRatio(const std::string& value)
{
    trafficRatio_ = value;
    trafficRatioIsSet_ = true;
}

bool StopInferDeploymentResponse::trafficRatioIsSet() const
{
    return trafficRatioIsSet_;
}

void StopInferDeploymentResponse::unsettrafficRatio()
{
    trafficRatioIsSet_ = false;
}

std::string StopInferDeploymentResponse::getSecretType() const
{
    return secretType_;
}

void StopInferDeploymentResponse::setSecretType(const std::string& value)
{
    secretType_ = value;
    secretTypeIsSet_ = true;
}

bool StopInferDeploymentResponse::secretTypeIsSet() const
{
    return secretTypeIsSet_;
}

void StopInferDeploymentResponse::unsetsecretType()
{
    secretTypeIsSet_ = false;
}

std::string StopInferDeploymentResponse::getSecretName() const
{
    return secretName_;
}

void StopInferDeploymentResponse::setSecretName(const std::string& value)
{
    secretName_ = value;
    secretNameIsSet_ = true;
}

bool StopInferDeploymentResponse::secretNameIsSet() const
{
    return secretNameIsSet_;
}

void StopInferDeploymentResponse::unsetsecretName()
{
    secretNameIsSet_ = false;
}

int32_t StopInferDeploymentResponse::getPriority() const
{
    return priority_;
}

void StopInferDeploymentResponse::setPriority(int32_t value)
{
    priority_ = value;
    priorityIsSet_ = true;
}

bool StopInferDeploymentResponse::priorityIsSet() const
{
    return priorityIsSet_;
}

void StopInferDeploymentResponse::unsetpriority()
{
    priorityIsSet_ = false;
}

bool StopInferDeploymentResponse::isHighAvailSwitch() const
{
    return highAvailSwitch_;
}

void StopInferDeploymentResponse::setHighAvailSwitch(bool value)
{
    highAvailSwitch_ = value;
    highAvailSwitchIsSet_ = true;
}

bool StopInferDeploymentResponse::highAvailSwitchIsSet() const
{
    return highAvailSwitchIsSet_;
}

void StopInferDeploymentResponse::unsethighAvailSwitch()
{
    highAvailSwitchIsSet_ = false;
}

std::string StopInferDeploymentResponse::getFramework() const
{
    return framework_;
}

void StopInferDeploymentResponse::setFramework(const std::string& value)
{
    framework_ = value;
    frameworkIsSet_ = true;
}

bool StopInferDeploymentResponse::frameworkIsSet() const
{
    return frameworkIsSet_;
}

void StopInferDeploymentResponse::unsetframework()
{
    frameworkIsSet_ = false;
}

std::string StopInferDeploymentResponse::getVersion() const
{
    return version_;
}

void StopInferDeploymentResponse::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool StopInferDeploymentResponse::versionIsSet() const
{
    return versionIsSet_;
}

void StopInferDeploymentResponse::unsetversion()
{
    versionIsSet_ = false;
}

std::string StopInferDeploymentResponse::getVersionId() const
{
    return versionId_;
}

void StopInferDeploymentResponse::setVersionId(const std::string& value)
{
    versionId_ = value;
    versionIdIsSet_ = true;
}

bool StopInferDeploymentResponse::versionIdIsSet() const
{
    return versionIdIsSet_;
}

void StopInferDeploymentResponse::unsetversionId()
{
    versionIdIsSet_ = false;
}

std::string StopInferDeploymentResponse::getStatus() const
{
    return status_;
}

void StopInferDeploymentResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool StopInferDeploymentResponse::statusIsSet() const
{
    return statusIsSet_;
}

void StopInferDeploymentResponse::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t StopInferDeploymentResponse::getRunningCount() const
{
    return runningCount_;
}

void StopInferDeploymentResponse::setRunningCount(int32_t value)
{
    runningCount_ = value;
    runningCountIsSet_ = true;
}

bool StopInferDeploymentResponse::runningCountIsSet() const
{
    return runningCountIsSet_;
}

void StopInferDeploymentResponse::unsetrunningCount()
{
    runningCountIsSet_ = false;
}

std::string StopInferDeploymentResponse::getDeployType() const
{
    return deployType_;
}

void StopInferDeploymentResponse::setDeployType(const std::string& value)
{
    deployType_ = value;
    deployTypeIsSet_ = true;
}

bool StopInferDeploymentResponse::deployTypeIsSet() const
{
    return deployTypeIsSet_;
}

void StopInferDeploymentResponse::unsetdeployType()
{
    deployTypeIsSet_ = false;
}

bool StopInferDeploymentResponse::isMirrorTrafficEnable() const
{
    return mirrorTrafficEnable_;
}

void StopInferDeploymentResponse::setMirrorTrafficEnable(bool value)
{
    mirrorTrafficEnable_ = value;
    mirrorTrafficEnableIsSet_ = true;
}

bool StopInferDeploymentResponse::mirrorTrafficEnableIsSet() const
{
    return mirrorTrafficEnableIsSet_;
}

void StopInferDeploymentResponse::unsetmirrorTrafficEnable()
{
    mirrorTrafficEnableIsSet_ = false;
}

std::string StopInferDeploymentResponse::getMirrorTrafficWeight() const
{
    return mirrorTrafficWeight_;
}

void StopInferDeploymentResponse::setMirrorTrafficWeight(const std::string& value)
{
    mirrorTrafficWeight_ = value;
    mirrorTrafficWeightIsSet_ = true;
}

bool StopInferDeploymentResponse::mirrorTrafficWeightIsSet() const
{
    return mirrorTrafficWeightIsSet_;
}

void StopInferDeploymentResponse::unsetmirrorTrafficWeight()
{
    mirrorTrafficWeightIsSet_ = false;
}

int32_t StopInferDeploymentResponse::getVersionCount() const
{
    return versionCount_;
}

void StopInferDeploymentResponse::setVersionCount(int32_t value)
{
    versionCount_ = value;
    versionCountIsSet_ = true;
}

bool StopInferDeploymentResponse::versionCountIsSet() const
{
    return versionCountIsSet_;
}

void StopInferDeploymentResponse::unsetversionCount()
{
    versionCountIsSet_ = false;
}

std::string StopInferDeploymentResponse::getWorkloadType() const
{
    return workloadType_;
}

void StopInferDeploymentResponse::setWorkloadType(const std::string& value)
{
    workloadType_ = value;
    workloadTypeIsSet_ = true;
}

bool StopInferDeploymentResponse::workloadTypeIsSet() const
{
    return workloadTypeIsSet_;
}

void StopInferDeploymentResponse::unsetworkloadType()
{
    workloadTypeIsSet_ = false;
}

int64_t StopInferDeploymentResponse::getUpdateAt() const
{
    return updateAt_;
}

void StopInferDeploymentResponse::setUpdateAt(int64_t value)
{
    updateAt_ = value;
    updateAtIsSet_ = true;
}

bool StopInferDeploymentResponse::updateAtIsSet() const
{
    return updateAtIsSet_;
}

void StopInferDeploymentResponse::unsetupdateAt()
{
    updateAtIsSet_ = false;
}

std::string StopInferDeploymentResponse::getLtsState() const
{
    return ltsState_;
}

void StopInferDeploymentResponse::setLtsState(const std::string& value)
{
    ltsState_ = value;
    ltsStateIsSet_ = true;
}

bool StopInferDeploymentResponse::ltsStateIsSet() const
{
    return ltsStateIsSet_;
}

void StopInferDeploymentResponse::unsetltsState()
{
    ltsStateIsSet_ = false;
}

std::string StopInferDeploymentResponse::getInferName() const
{
    return inferName_;
}

void StopInferDeploymentResponse::setInferName(const std::string& value)
{
    inferName_ = value;
    inferNameIsSet_ = true;
}

bool StopInferDeploymentResponse::inferNameIsSet() const
{
    return inferNameIsSet_;
}

void StopInferDeploymentResponse::unsetinferName()
{
    inferNameIsSet_ = false;
}

InferModelResponse StopInferDeploymentResponse::getModel() const
{
    return model_;
}

void StopInferDeploymentResponse::setModel(const InferModelResponse& value)
{
    model_ = value;
    modelIsSet_ = true;
}

bool StopInferDeploymentResponse::modelIsSet() const
{
    return modelIsSet_;
}

void StopInferDeploymentResponse::unsetmodel()
{
    modelIsSet_ = false;
}

AdvancedConfig StopInferDeploymentResponse::getAdvancedConfig() const
{
    return advancedConfig_;
}

void StopInferDeploymentResponse::setAdvancedConfig(const AdvancedConfig& value)
{
    advancedConfig_ = value;
    advancedConfigIsSet_ = true;
}

bool StopInferDeploymentResponse::advancedConfigIsSet() const
{
    return advancedConfigIsSet_;
}

void StopInferDeploymentResponse::unsetadvancedConfig()
{
    advancedConfigIsSet_ = false;
}

std::string StopInferDeploymentResponse::getDescription() const
{
    return description_;
}

void StopInferDeploymentResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool StopInferDeploymentResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void StopInferDeploymentResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string StopInferDeploymentResponse::getCreateAt() const
{
    return createAt_;
}

void StopInferDeploymentResponse::setCreateAt(const std::string& value)
{
    createAt_ = value;
    createAtIsSet_ = true;
}

bool StopInferDeploymentResponse::createAtIsSet() const
{
    return createAtIsSet_;
}

void StopInferDeploymentResponse::unsetcreateAt()
{
    createAtIsSet_ = false;
}

std::string StopInferDeploymentResponse::getScheduleStrategy() const
{
    return scheduleStrategy_;
}

void StopInferDeploymentResponse::setScheduleStrategy(const std::string& value)
{
    scheduleStrategy_ = value;
    scheduleStrategyIsSet_ = true;
}

bool StopInferDeploymentResponse::scheduleStrategyIsSet() const
{
    return scheduleStrategyIsSet_;
}

void StopInferDeploymentResponse::unsetscheduleStrategy()
{
    scheduleStrategyIsSet_ = false;
}

}
}
}
}
}


