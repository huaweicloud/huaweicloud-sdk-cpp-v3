

#include "huaweicloud/modelarts/v1/model/GroupConfigResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




GroupConfigResponse::GroupConfigResponse()
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

GroupConfigResponse::~GroupConfigResponse() = default;

void GroupConfigResponse::validate()
{
}

web::json::value GroupConfigResponse::toJson() const
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
bool GroupConfigResponse::fromJson(const web::json::value& val)
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


std::string GroupConfigResponse::getId() const
{
    return id_;
}

void GroupConfigResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool GroupConfigResponse::idIsSet() const
{
    return idIsSet_;
}

void GroupConfigResponse::unsetid()
{
    idIsSet_ = false;
}

std::string GroupConfigResponse::getName() const
{
    return name_;
}

void GroupConfigResponse::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool GroupConfigResponse::nameIsSet() const
{
    return nameIsSet_;
}

void GroupConfigResponse::unsetname()
{
    nameIsSet_ = false;
}

std::string GroupConfigResponse::getPoolId() const
{
    return poolId_;
}

void GroupConfigResponse::setPoolId(const std::string& value)
{
    poolId_ = value;
    poolIdIsSet_ = true;
}

bool GroupConfigResponse::poolIdIsSet() const
{
    return poolIdIsSet_;
}

void GroupConfigResponse::unsetpoolId()
{
    poolIdIsSet_ = false;
}

int32_t GroupConfigResponse::getCount() const
{
    return count_;
}

void GroupConfigResponse::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool GroupConfigResponse::countIsSet() const
{
    return countIsSet_;
}

void GroupConfigResponse::unsetcount()
{
    countIsSet_ = false;
}

bool GroupConfigResponse::isSystemLogDumpEnable() const
{
    return systemLogDumpEnable_;
}

void GroupConfigResponse::setSystemLogDumpEnable(bool value)
{
    systemLogDumpEnable_ = value;
    systemLogDumpEnableIsSet_ = true;
}

bool GroupConfigResponse::systemLogDumpEnableIsSet() const
{
    return systemLogDumpEnableIsSet_;
}

void GroupConfigResponse::unsetsystemLogDumpEnable()
{
    systemLogDumpEnableIsSet_ = false;
}

std::vector<UnitConfigResponse>& GroupConfigResponse::getUnitConfigs()
{
    return unitConfigs_;
}

void GroupConfigResponse::setUnitConfigs(const std::vector<UnitConfigResponse>& value)
{
    unitConfigs_ = value;
    unitConfigsIsSet_ = true;
}

bool GroupConfigResponse::unitConfigsIsSet() const
{
    return unitConfigsIsSet_;
}

void GroupConfigResponse::unsetunitConfigs()
{
    unitConfigsIsSet_ = false;
}

int32_t GroupConfigResponse::getWeight() const
{
    return weight_;
}

void GroupConfigResponse::setWeight(int32_t value)
{
    weight_ = value;
    weightIsSet_ = true;
}

bool GroupConfigResponse::weightIsSet() const
{
    return weightIsSet_;
}

void GroupConfigResponse::unsetweight()
{
    weightIsSet_ = false;
}

std::string GroupConfigResponse::getTrafficRatio() const
{
    return trafficRatio_;
}

void GroupConfigResponse::setTrafficRatio(const std::string& value)
{
    trafficRatio_ = value;
    trafficRatioIsSet_ = true;
}

bool GroupConfigResponse::trafficRatioIsSet() const
{
    return trafficRatioIsSet_;
}

void GroupConfigResponse::unsettrafficRatio()
{
    trafficRatioIsSet_ = false;
}

std::string GroupConfigResponse::getSecretType() const
{
    return secretType_;
}

void GroupConfigResponse::setSecretType(const std::string& value)
{
    secretType_ = value;
    secretTypeIsSet_ = true;
}

bool GroupConfigResponse::secretTypeIsSet() const
{
    return secretTypeIsSet_;
}

void GroupConfigResponse::unsetsecretType()
{
    secretTypeIsSet_ = false;
}

std::string GroupConfigResponse::getSecretName() const
{
    return secretName_;
}

void GroupConfigResponse::setSecretName(const std::string& value)
{
    secretName_ = value;
    secretNameIsSet_ = true;
}

bool GroupConfigResponse::secretNameIsSet() const
{
    return secretNameIsSet_;
}

void GroupConfigResponse::unsetsecretName()
{
    secretNameIsSet_ = false;
}

int32_t GroupConfigResponse::getPriority() const
{
    return priority_;
}

void GroupConfigResponse::setPriority(int32_t value)
{
    priority_ = value;
    priorityIsSet_ = true;
}

bool GroupConfigResponse::priorityIsSet() const
{
    return priorityIsSet_;
}

void GroupConfigResponse::unsetpriority()
{
    priorityIsSet_ = false;
}

bool GroupConfigResponse::isHighAvailSwitch() const
{
    return highAvailSwitch_;
}

void GroupConfigResponse::setHighAvailSwitch(bool value)
{
    highAvailSwitch_ = value;
    highAvailSwitchIsSet_ = true;
}

bool GroupConfigResponse::highAvailSwitchIsSet() const
{
    return highAvailSwitchIsSet_;
}

void GroupConfigResponse::unsethighAvailSwitch()
{
    highAvailSwitchIsSet_ = false;
}

std::string GroupConfigResponse::getFramework() const
{
    return framework_;
}

void GroupConfigResponse::setFramework(const std::string& value)
{
    framework_ = value;
    frameworkIsSet_ = true;
}

bool GroupConfigResponse::frameworkIsSet() const
{
    return frameworkIsSet_;
}

void GroupConfigResponse::unsetframework()
{
    frameworkIsSet_ = false;
}

std::string GroupConfigResponse::getVersion() const
{
    return version_;
}

void GroupConfigResponse::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool GroupConfigResponse::versionIsSet() const
{
    return versionIsSet_;
}

void GroupConfigResponse::unsetversion()
{
    versionIsSet_ = false;
}

std::string GroupConfigResponse::getVersionId() const
{
    return versionId_;
}

void GroupConfigResponse::setVersionId(const std::string& value)
{
    versionId_ = value;
    versionIdIsSet_ = true;
}

bool GroupConfigResponse::versionIdIsSet() const
{
    return versionIdIsSet_;
}

void GroupConfigResponse::unsetversionId()
{
    versionIdIsSet_ = false;
}

std::string GroupConfigResponse::getStatus() const
{
    return status_;
}

void GroupConfigResponse::setStatus(const std::string& value)
{
    status_ = value;
    statusIsSet_ = true;
}

bool GroupConfigResponse::statusIsSet() const
{
    return statusIsSet_;
}

void GroupConfigResponse::unsetstatus()
{
    statusIsSet_ = false;
}

int32_t GroupConfigResponse::getRunningCount() const
{
    return runningCount_;
}

void GroupConfigResponse::setRunningCount(int32_t value)
{
    runningCount_ = value;
    runningCountIsSet_ = true;
}

bool GroupConfigResponse::runningCountIsSet() const
{
    return runningCountIsSet_;
}

void GroupConfigResponse::unsetrunningCount()
{
    runningCountIsSet_ = false;
}

std::string GroupConfigResponse::getDeployType() const
{
    return deployType_;
}

void GroupConfigResponse::setDeployType(const std::string& value)
{
    deployType_ = value;
    deployTypeIsSet_ = true;
}

bool GroupConfigResponse::deployTypeIsSet() const
{
    return deployTypeIsSet_;
}

void GroupConfigResponse::unsetdeployType()
{
    deployTypeIsSet_ = false;
}

bool GroupConfigResponse::isMirrorTrafficEnable() const
{
    return mirrorTrafficEnable_;
}

void GroupConfigResponse::setMirrorTrafficEnable(bool value)
{
    mirrorTrafficEnable_ = value;
    mirrorTrafficEnableIsSet_ = true;
}

bool GroupConfigResponse::mirrorTrafficEnableIsSet() const
{
    return mirrorTrafficEnableIsSet_;
}

void GroupConfigResponse::unsetmirrorTrafficEnable()
{
    mirrorTrafficEnableIsSet_ = false;
}

std::string GroupConfigResponse::getMirrorTrafficWeight() const
{
    return mirrorTrafficWeight_;
}

void GroupConfigResponse::setMirrorTrafficWeight(const std::string& value)
{
    mirrorTrafficWeight_ = value;
    mirrorTrafficWeightIsSet_ = true;
}

bool GroupConfigResponse::mirrorTrafficWeightIsSet() const
{
    return mirrorTrafficWeightIsSet_;
}

void GroupConfigResponse::unsetmirrorTrafficWeight()
{
    mirrorTrafficWeightIsSet_ = false;
}

int32_t GroupConfigResponse::getVersionCount() const
{
    return versionCount_;
}

void GroupConfigResponse::setVersionCount(int32_t value)
{
    versionCount_ = value;
    versionCountIsSet_ = true;
}

bool GroupConfigResponse::versionCountIsSet() const
{
    return versionCountIsSet_;
}

void GroupConfigResponse::unsetversionCount()
{
    versionCountIsSet_ = false;
}

std::string GroupConfigResponse::getWorkloadType() const
{
    return workloadType_;
}

void GroupConfigResponse::setWorkloadType(const std::string& value)
{
    workloadType_ = value;
    workloadTypeIsSet_ = true;
}

bool GroupConfigResponse::workloadTypeIsSet() const
{
    return workloadTypeIsSet_;
}

void GroupConfigResponse::unsetworkloadType()
{
    workloadTypeIsSet_ = false;
}

int64_t GroupConfigResponse::getUpdateAt() const
{
    return updateAt_;
}

void GroupConfigResponse::setUpdateAt(int64_t value)
{
    updateAt_ = value;
    updateAtIsSet_ = true;
}

bool GroupConfigResponse::updateAtIsSet() const
{
    return updateAtIsSet_;
}

void GroupConfigResponse::unsetupdateAt()
{
    updateAtIsSet_ = false;
}

std::string GroupConfigResponse::getLtsState() const
{
    return ltsState_;
}

void GroupConfigResponse::setLtsState(const std::string& value)
{
    ltsState_ = value;
    ltsStateIsSet_ = true;
}

bool GroupConfigResponse::ltsStateIsSet() const
{
    return ltsStateIsSet_;
}

void GroupConfigResponse::unsetltsState()
{
    ltsStateIsSet_ = false;
}

std::string GroupConfigResponse::getInferName() const
{
    return inferName_;
}

void GroupConfigResponse::setInferName(const std::string& value)
{
    inferName_ = value;
    inferNameIsSet_ = true;
}

bool GroupConfigResponse::inferNameIsSet() const
{
    return inferNameIsSet_;
}

void GroupConfigResponse::unsetinferName()
{
    inferNameIsSet_ = false;
}

InferModelResponse GroupConfigResponse::getModel() const
{
    return model_;
}

void GroupConfigResponse::setModel(const InferModelResponse& value)
{
    model_ = value;
    modelIsSet_ = true;
}

bool GroupConfigResponse::modelIsSet() const
{
    return modelIsSet_;
}

void GroupConfigResponse::unsetmodel()
{
    modelIsSet_ = false;
}

AdvancedConfig GroupConfigResponse::getAdvancedConfig() const
{
    return advancedConfig_;
}

void GroupConfigResponse::setAdvancedConfig(const AdvancedConfig& value)
{
    advancedConfig_ = value;
    advancedConfigIsSet_ = true;
}

bool GroupConfigResponse::advancedConfigIsSet() const
{
    return advancedConfigIsSet_;
}

void GroupConfigResponse::unsetadvancedConfig()
{
    advancedConfigIsSet_ = false;
}

std::string GroupConfigResponse::getDescription() const
{
    return description_;
}

void GroupConfigResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool GroupConfigResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void GroupConfigResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string GroupConfigResponse::getCreateAt() const
{
    return createAt_;
}

void GroupConfigResponse::setCreateAt(const std::string& value)
{
    createAt_ = value;
    createAtIsSet_ = true;
}

bool GroupConfigResponse::createAtIsSet() const
{
    return createAtIsSet_;
}

void GroupConfigResponse::unsetcreateAt()
{
    createAtIsSet_ = false;
}

std::string GroupConfigResponse::getScheduleStrategy() const
{
    return scheduleStrategy_;
}

void GroupConfigResponse::setScheduleStrategy(const std::string& value)
{
    scheduleStrategy_ = value;
    scheduleStrategyIsSet_ = true;
}

bool GroupConfigResponse::scheduleStrategyIsSet() const
{
    return scheduleStrategyIsSet_;
}

void GroupConfigResponse::unsetscheduleStrategy()
{
    scheduleStrategyIsSet_ = false;
}

}
}
}
}
}


