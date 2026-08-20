

#include "huaweicloud/modelarts/v1/model/ServiceVersionResponse.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ServiceVersionResponse::ServiceVersionResponse()
{
    id_ = "";
    idIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    predictUrl_ = "";
    predictUrlIsSet_ = false;
    runtimeConfigIsSet_ = false;
    upgradeConfigIsSet_ = false;
    instanceGroupsIsSet_ = false;
    ltsStrategy_ = "";
    ltsStrategyIsSet_ = false;
    ltsStatus_ = "";
    ltsStatusIsSet_ = false;
    ltsEventStatus_ = "";
    ltsEventStatusIsSet_ = false;
    ltsFileStatus_ = "";
    ltsFileStatusIsSet_ = false;
    logConfigsIsSet_ = false;
    deployTimeoutMinutes_ = 0;
    deployTimeoutMinutesIsSet_ = false;
}

ServiceVersionResponse::~ServiceVersionResponse() = default;

void ServiceVersionResponse::validate()
{
}

web::json::value ServiceVersionResponse::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(predictUrlIsSet_) {
        val[utility::conversions::to_string_t("predict_url")] = ModelBase::toJson(predictUrl_);
    }
    if(runtimeConfigIsSet_) {
        val[utility::conversions::to_string_t("runtime_config")] = ModelBase::toJson(runtimeConfig_);
    }
    if(upgradeConfigIsSet_) {
        val[utility::conversions::to_string_t("upgrade_config")] = ModelBase::toJson(upgradeConfig_);
    }
    if(instanceGroupsIsSet_) {
        val[utility::conversions::to_string_t("instance_groups")] = ModelBase::toJson(instanceGroups_);
    }
    if(ltsStrategyIsSet_) {
        val[utility::conversions::to_string_t("lts_strategy")] = ModelBase::toJson(ltsStrategy_);
    }
    if(ltsStatusIsSet_) {
        val[utility::conversions::to_string_t("lts_status")] = ModelBase::toJson(ltsStatus_);
    }
    if(ltsEventStatusIsSet_) {
        val[utility::conversions::to_string_t("lts_event_status")] = ModelBase::toJson(ltsEventStatus_);
    }
    if(ltsFileStatusIsSet_) {
        val[utility::conversions::to_string_t("lts_file_status")] = ModelBase::toJson(ltsFileStatus_);
    }
    if(logConfigsIsSet_) {
        val[utility::conversions::to_string_t("log_configs")] = ModelBase::toJson(logConfigs_);
    }
    if(deployTimeoutMinutesIsSet_) {
        val[utility::conversions::to_string_t("deploy_timeout_minutes")] = ModelBase::toJson(deployTimeoutMinutes_);
    }

    return val;
}
bool ServiceVersionResponse::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("predict_url"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("predict_url"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPredictUrl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("runtime_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("runtime_config"));
        if(!fieldValue.is_null())
        {
            RuntimeConfigResponse refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuntimeConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("upgrade_config"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("upgrade_config"));
        if(!fieldValue.is_null())
        {
            UpgradeConfigResponse refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpgradeConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("instance_groups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_groups"));
        if(!fieldValue.is_null())
        {
            std::vector<GroupConfigResponse> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceGroups(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("lts_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lts_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLtsStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lts_event_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lts_event_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLtsEventStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lts_file_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lts_file_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLtsFileStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("log_configs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("log_configs"));
        if(!fieldValue.is_null())
        {
            std::vector<LogConfigResponse> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogConfigs(refVal);
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
    return ok;
}


std::string ServiceVersionResponse::getId() const
{
    return id_;
}

void ServiceVersionResponse::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool ServiceVersionResponse::idIsSet() const
{
    return idIsSet_;
}

void ServiceVersionResponse::unsetid()
{
    idIsSet_ = false;
}

std::string ServiceVersionResponse::getVersion() const
{
    return version_;
}

void ServiceVersionResponse::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool ServiceVersionResponse::versionIsSet() const
{
    return versionIsSet_;
}

void ServiceVersionResponse::unsetversion()
{
    versionIsSet_ = false;
}

std::string ServiceVersionResponse::getDescription() const
{
    return description_;
}

void ServiceVersionResponse::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ServiceVersionResponse::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ServiceVersionResponse::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string ServiceVersionResponse::getPredictUrl() const
{
    return predictUrl_;
}

void ServiceVersionResponse::setPredictUrl(const std::string& value)
{
    predictUrl_ = value;
    predictUrlIsSet_ = true;
}

bool ServiceVersionResponse::predictUrlIsSet() const
{
    return predictUrlIsSet_;
}

void ServiceVersionResponse::unsetpredictUrl()
{
    predictUrlIsSet_ = false;
}

RuntimeConfigResponse ServiceVersionResponse::getRuntimeConfig() const
{
    return runtimeConfig_;
}

void ServiceVersionResponse::setRuntimeConfig(const RuntimeConfigResponse& value)
{
    runtimeConfig_ = value;
    runtimeConfigIsSet_ = true;
}

bool ServiceVersionResponse::runtimeConfigIsSet() const
{
    return runtimeConfigIsSet_;
}

void ServiceVersionResponse::unsetruntimeConfig()
{
    runtimeConfigIsSet_ = false;
}

UpgradeConfigResponse ServiceVersionResponse::getUpgradeConfig() const
{
    return upgradeConfig_;
}

void ServiceVersionResponse::setUpgradeConfig(const UpgradeConfigResponse& value)
{
    upgradeConfig_ = value;
    upgradeConfigIsSet_ = true;
}

bool ServiceVersionResponse::upgradeConfigIsSet() const
{
    return upgradeConfigIsSet_;
}

void ServiceVersionResponse::unsetupgradeConfig()
{
    upgradeConfigIsSet_ = false;
}

std::vector<GroupConfigResponse>& ServiceVersionResponse::getInstanceGroups()
{
    return instanceGroups_;
}

void ServiceVersionResponse::setInstanceGroups(const std::vector<GroupConfigResponse>& value)
{
    instanceGroups_ = value;
    instanceGroupsIsSet_ = true;
}

bool ServiceVersionResponse::instanceGroupsIsSet() const
{
    return instanceGroupsIsSet_;
}

void ServiceVersionResponse::unsetinstanceGroups()
{
    instanceGroupsIsSet_ = false;
}

std::string ServiceVersionResponse::getLtsStrategy() const
{
    return ltsStrategy_;
}

void ServiceVersionResponse::setLtsStrategy(const std::string& value)
{
    ltsStrategy_ = value;
    ltsStrategyIsSet_ = true;
}

bool ServiceVersionResponse::ltsStrategyIsSet() const
{
    return ltsStrategyIsSet_;
}

void ServiceVersionResponse::unsetltsStrategy()
{
    ltsStrategyIsSet_ = false;
}

std::string ServiceVersionResponse::getLtsStatus() const
{
    return ltsStatus_;
}

void ServiceVersionResponse::setLtsStatus(const std::string& value)
{
    ltsStatus_ = value;
    ltsStatusIsSet_ = true;
}

bool ServiceVersionResponse::ltsStatusIsSet() const
{
    return ltsStatusIsSet_;
}

void ServiceVersionResponse::unsetltsStatus()
{
    ltsStatusIsSet_ = false;
}

std::string ServiceVersionResponse::getLtsEventStatus() const
{
    return ltsEventStatus_;
}

void ServiceVersionResponse::setLtsEventStatus(const std::string& value)
{
    ltsEventStatus_ = value;
    ltsEventStatusIsSet_ = true;
}

bool ServiceVersionResponse::ltsEventStatusIsSet() const
{
    return ltsEventStatusIsSet_;
}

void ServiceVersionResponse::unsetltsEventStatus()
{
    ltsEventStatusIsSet_ = false;
}

std::string ServiceVersionResponse::getLtsFileStatus() const
{
    return ltsFileStatus_;
}

void ServiceVersionResponse::setLtsFileStatus(const std::string& value)
{
    ltsFileStatus_ = value;
    ltsFileStatusIsSet_ = true;
}

bool ServiceVersionResponse::ltsFileStatusIsSet() const
{
    return ltsFileStatusIsSet_;
}

void ServiceVersionResponse::unsetltsFileStatus()
{
    ltsFileStatusIsSet_ = false;
}

std::vector<LogConfigResponse>& ServiceVersionResponse::getLogConfigs()
{
    return logConfigs_;
}

void ServiceVersionResponse::setLogConfigs(const std::vector<LogConfigResponse>& value)
{
    logConfigs_ = value;
    logConfigsIsSet_ = true;
}

bool ServiceVersionResponse::logConfigsIsSet() const
{
    return logConfigsIsSet_;
}

void ServiceVersionResponse::unsetlogConfigs()
{
    logConfigsIsSet_ = false;
}

int32_t ServiceVersionResponse::getDeployTimeoutMinutes() const
{
    return deployTimeoutMinutes_;
}

void ServiceVersionResponse::setDeployTimeoutMinutes(int32_t value)
{
    deployTimeoutMinutes_ = value;
    deployTimeoutMinutesIsSet_ = true;
}

bool ServiceVersionResponse::deployTimeoutMinutesIsSet() const
{
    return deployTimeoutMinutesIsSet_;
}

void ServiceVersionResponse::unsetdeployTimeoutMinutes()
{
    deployTimeoutMinutesIsSet_ = false;
}

}
}
}
}
}


