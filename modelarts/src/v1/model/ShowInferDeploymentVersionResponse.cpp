

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
    inferName_ = "";
    inferNameIsSet_ = false;
    createAt_ = utility::datetime();
    createAtIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    poolId_ = "";
    poolIdIsSet_ = false;
    framework_ = "";
    frameworkIsSet_ = false;
    priority_ = "";
    priorityIsSet_ = false;
    secretType_ = "";
    secretTypeIsSet_ = false;
    status_ = "";
    statusIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
    highAvailSwitch_ = "";
    highAvailSwitchIsSet_ = false;
    systemLogDumpEnable_ = "";
    systemLogDumpEnableIsSet_ = false;
    unitConfigsIsSet_ = false;
    updateAt_ = utility::datetime();
    updateAtIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    versionCount_ = 0;
    versionCountIsSet_ = false;
    weight_ = 0;
    weightIsSet_ = false;
    advancedConfigIsSet_ = false;
    jobId_ = "";
    jobIdIsSet_ = false;
    deploymentName_ = "";
    deploymentNameIsSet_ = false;
    frozenInfosIsSet_ = false;
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
    if(inferNameIsSet_) {
        val[utility::conversions::to_string_t("infer_name")] = ModelBase::toJson(inferName_);
    }
    if(createAtIsSet_) {
        val[utility::conversions::to_string_t("create_at")] = ModelBase::toJson(createAt_);
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
    if(priorityIsSet_) {
        val[utility::conversions::to_string_t("priority")] = ModelBase::toJson(priority_);
    }
    if(secretTypeIsSet_) {
        val[utility::conversions::to_string_t("secret_type")] = ModelBase::toJson(secretType_);
    }
    if(statusIsSet_) {
        val[utility::conversions::to_string_t("status")] = ModelBase::toJson(status_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(highAvailSwitchIsSet_) {
        val[utility::conversions::to_string_t("high_avail_switch")] = ModelBase::toJson(highAvailSwitch_);
    }
    if(systemLogDumpEnableIsSet_) {
        val[utility::conversions::to_string_t("system_log_dump_enable")] = ModelBase::toJson(systemLogDumpEnable_);
    }
    if(unitConfigsIsSet_) {
        val[utility::conversions::to_string_t("unit_configs")] = ModelBase::toJson(unitConfigs_);
    }
    if(updateAtIsSet_) {
        val[utility::conversions::to_string_t("update_at")] = ModelBase::toJson(updateAt_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(versionCountIsSet_) {
        val[utility::conversions::to_string_t("version_count")] = ModelBase::toJson(versionCount_);
    }
    if(weightIsSet_) {
        val[utility::conversions::to_string_t("weight")] = ModelBase::toJson(weight_);
    }
    if(advancedConfigIsSet_) {
        val[utility::conversions::to_string_t("advanced_config")] = ModelBase::toJson(advancedConfig_);
    }
    if(jobIdIsSet_) {
        val[utility::conversions::to_string_t("job_id")] = ModelBase::toJson(jobId_);
    }
    if(deploymentNameIsSet_) {
        val[utility::conversions::to_string_t("deployment_name")] = ModelBase::toJson(deploymentName_);
    }
    if(frozenInfosIsSet_) {
        val[utility::conversions::to_string_t("frozen_infos")] = ModelBase::toJson(frozenInfos_);
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
    if(val.has_field(utility::conversions::to_string_t("infer_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("infer_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInferName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("priority"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("priority"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
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
    if(val.has_field(utility::conversions::to_string_t("status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("high_avail_switch"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("high_avail_switch"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHighAvailSwitch(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("system_log_dump_enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("system_log_dump_enable"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
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
    if(val.has_field(utility::conversions::to_string_t("update_at"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_at"));
        if(!fieldValue.is_null())
        {
            utility::datetime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateAt(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("version_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("version_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVersionCount(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("advanced_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("advanced_config"));
        if(!fieldValue.is_null())
        {
            AdvancedConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAdvancedConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("job_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("job_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setJobId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("frozen_infos"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("frozen_infos"));
        if(!fieldValue.is_null())
        {
            std::vector<FrozenInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFrozenInfos(refVal);
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

std::string ShowInferDeploymentVersionResponse::getPriority() const
{
    return priority_;
}

void ShowInferDeploymentVersionResponse::setPriority(const std::string& value)
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

std::string ShowInferDeploymentVersionResponse::getHighAvailSwitch() const
{
    return highAvailSwitch_;
}

void ShowInferDeploymentVersionResponse::setHighAvailSwitch(const std::string& value)
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

std::string ShowInferDeploymentVersionResponse::getSystemLogDumpEnable() const
{
    return systemLogDumpEnable_;
}

void ShowInferDeploymentVersionResponse::setSystemLogDumpEnable(const std::string& value)
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

std::string ShowInferDeploymentVersionResponse::getJobId() const
{
    return jobId_;
}

void ShowInferDeploymentVersionResponse::setJobId(const std::string& value)
{
    jobId_ = value;
    jobIdIsSet_ = true;
}

bool ShowInferDeploymentVersionResponse::jobIdIsSet() const
{
    return jobIdIsSet_;
}

void ShowInferDeploymentVersionResponse::unsetjobId()
{
    jobIdIsSet_ = false;
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

}
}
}
}
}


