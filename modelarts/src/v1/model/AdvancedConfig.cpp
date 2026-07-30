

#include "huaweicloud/modelarts/v1/model/AdvancedConfig.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




AdvancedConfig::AdvancedConfig()
{
    deployTimeoutMinutes_ = "";
    deployTimeoutMinutesIsSet_ = false;
    upgradeConfigIsSet_ = false;
    serviceSecretIsSet_ = false;
    dynamicRoutingEnable_ = false;
    dynamicRoutingEnableIsSet_ = false;
    strategy_ = "";
    strategyIsSet_ = false;
    emsEnable_ = false;
    emsEnableIsSet_ = false;
    metricApiScheme_ = "";
    metricApiSchemeIsSet_ = false;
    metricApiPort_ = "";
    metricApiPortIsSet_ = false;
    metricApiPath_ = "";
    metricApiPathIsSet_ = false;
    customMetricsPath_ = "";
    customMetricsPathIsSet_ = false;
    port_ = 0;
    portIsSet_ = false;
    protocol_ = "";
    protocolIsSet_ = false;
}

AdvancedConfig::~AdvancedConfig() = default;

void AdvancedConfig::validate()
{
}

web::json::value AdvancedConfig::toJson() const
{
    web::json::value val = web::json::value::object();

    if(deployTimeoutMinutesIsSet_) {
        val[utility::conversions::to_string_t("deploy_timeout_minutes")] = ModelBase::toJson(deployTimeoutMinutes_);
    }
    if(upgradeConfigIsSet_) {
        val[utility::conversions::to_string_t("upgrade_config")] = ModelBase::toJson(upgradeConfig_);
    }
    if(serviceSecretIsSet_) {
        val[utility::conversions::to_string_t("service_secret")] = ModelBase::toJson(serviceSecret_);
    }
    if(dynamicRoutingEnableIsSet_) {
        val[utility::conversions::to_string_t("dynamic_routing_enable")] = ModelBase::toJson(dynamicRoutingEnable_);
    }
    if(strategyIsSet_) {
        val[utility::conversions::to_string_t("strategy")] = ModelBase::toJson(strategy_);
    }
    if(emsEnableIsSet_) {
        val[utility::conversions::to_string_t("ems_enable")] = ModelBase::toJson(emsEnable_);
    }
    if(metricApiSchemeIsSet_) {
        val[utility::conversions::to_string_t("metric_api_scheme")] = ModelBase::toJson(metricApiScheme_);
    }
    if(metricApiPortIsSet_) {
        val[utility::conversions::to_string_t("metric_api_port")] = ModelBase::toJson(metricApiPort_);
    }
    if(metricApiPathIsSet_) {
        val[utility::conversions::to_string_t("metric_api_path")] = ModelBase::toJson(metricApiPath_);
    }
    if(customMetricsPathIsSet_) {
        val[utility::conversions::to_string_t("custom_metrics_path")] = ModelBase::toJson(customMetricsPath_);
    }
    if(portIsSet_) {
        val[utility::conversions::to_string_t("port")] = ModelBase::toJson(port_);
    }
    if(protocolIsSet_) {
        val[utility::conversions::to_string_t("protocol")] = ModelBase::toJson(protocol_);
    }

    return val;
}
bool AdvancedConfig::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("deploy_timeout_minutes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deploy_timeout_minutes"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeployTimeoutMinutes(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("service_secret"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("service_secret"));
        if(!fieldValue.is_null())
        {
            ServiceSecret refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceSecret(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dynamic_routing_enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dynamic_routing_enable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDynamicRoutingEnable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("strategy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("strategy"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStrategy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ems_enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ems_enable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEmsEnable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("metric_api_scheme"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metric_api_scheme"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetricApiScheme(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("metric_api_port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metric_api_port"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetricApiPort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("metric_api_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("metric_api_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMetricApiPath(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("protocol"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("protocol"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProtocol(refVal);
        }
    }
    return ok;
}


std::string AdvancedConfig::getDeployTimeoutMinutes() const
{
    return deployTimeoutMinutes_;
}

void AdvancedConfig::setDeployTimeoutMinutes(const std::string& value)
{
    deployTimeoutMinutes_ = value;
    deployTimeoutMinutesIsSet_ = true;
}

bool AdvancedConfig::deployTimeoutMinutesIsSet() const
{
    return deployTimeoutMinutesIsSet_;
}

void AdvancedConfig::unsetdeployTimeoutMinutes()
{
    deployTimeoutMinutesIsSet_ = false;
}

UpgradeConfig AdvancedConfig::getUpgradeConfig() const
{
    return upgradeConfig_;
}

void AdvancedConfig::setUpgradeConfig(const UpgradeConfig& value)
{
    upgradeConfig_ = value;
    upgradeConfigIsSet_ = true;
}

bool AdvancedConfig::upgradeConfigIsSet() const
{
    return upgradeConfigIsSet_;
}

void AdvancedConfig::unsetupgradeConfig()
{
    upgradeConfigIsSet_ = false;
}

ServiceSecret AdvancedConfig::getServiceSecret() const
{
    return serviceSecret_;
}

void AdvancedConfig::setServiceSecret(const ServiceSecret& value)
{
    serviceSecret_ = value;
    serviceSecretIsSet_ = true;
}

bool AdvancedConfig::serviceSecretIsSet() const
{
    return serviceSecretIsSet_;
}

void AdvancedConfig::unsetserviceSecret()
{
    serviceSecretIsSet_ = false;
}

bool AdvancedConfig::isDynamicRoutingEnable() const
{
    return dynamicRoutingEnable_;
}

void AdvancedConfig::setDynamicRoutingEnable(bool value)
{
    dynamicRoutingEnable_ = value;
    dynamicRoutingEnableIsSet_ = true;
}

bool AdvancedConfig::dynamicRoutingEnableIsSet() const
{
    return dynamicRoutingEnableIsSet_;
}

void AdvancedConfig::unsetdynamicRoutingEnable()
{
    dynamicRoutingEnableIsSet_ = false;
}

std::string AdvancedConfig::getStrategy() const
{
    return strategy_;
}

void AdvancedConfig::setStrategy(const std::string& value)
{
    strategy_ = value;
    strategyIsSet_ = true;
}

bool AdvancedConfig::strategyIsSet() const
{
    return strategyIsSet_;
}

void AdvancedConfig::unsetstrategy()
{
    strategyIsSet_ = false;
}

bool AdvancedConfig::isEmsEnable() const
{
    return emsEnable_;
}

void AdvancedConfig::setEmsEnable(bool value)
{
    emsEnable_ = value;
    emsEnableIsSet_ = true;
}

bool AdvancedConfig::emsEnableIsSet() const
{
    return emsEnableIsSet_;
}

void AdvancedConfig::unsetemsEnable()
{
    emsEnableIsSet_ = false;
}

std::string AdvancedConfig::getMetricApiScheme() const
{
    return metricApiScheme_;
}

void AdvancedConfig::setMetricApiScheme(const std::string& value)
{
    metricApiScheme_ = value;
    metricApiSchemeIsSet_ = true;
}

bool AdvancedConfig::metricApiSchemeIsSet() const
{
    return metricApiSchemeIsSet_;
}

void AdvancedConfig::unsetmetricApiScheme()
{
    metricApiSchemeIsSet_ = false;
}

std::string AdvancedConfig::getMetricApiPort() const
{
    return metricApiPort_;
}

void AdvancedConfig::setMetricApiPort(const std::string& value)
{
    metricApiPort_ = value;
    metricApiPortIsSet_ = true;
}

bool AdvancedConfig::metricApiPortIsSet() const
{
    return metricApiPortIsSet_;
}

void AdvancedConfig::unsetmetricApiPort()
{
    metricApiPortIsSet_ = false;
}

std::string AdvancedConfig::getMetricApiPath() const
{
    return metricApiPath_;
}

void AdvancedConfig::setMetricApiPath(const std::string& value)
{
    metricApiPath_ = value;
    metricApiPathIsSet_ = true;
}

bool AdvancedConfig::metricApiPathIsSet() const
{
    return metricApiPathIsSet_;
}

void AdvancedConfig::unsetmetricApiPath()
{
    metricApiPathIsSet_ = false;
}

std::string AdvancedConfig::getCustomMetricsPath() const
{
    return customMetricsPath_;
}

void AdvancedConfig::setCustomMetricsPath(const std::string& value)
{
    customMetricsPath_ = value;
    customMetricsPathIsSet_ = true;
}

bool AdvancedConfig::customMetricsPathIsSet() const
{
    return customMetricsPathIsSet_;
}

void AdvancedConfig::unsetcustomMetricsPath()
{
    customMetricsPathIsSet_ = false;
}

int32_t AdvancedConfig::getPort() const
{
    return port_;
}

void AdvancedConfig::setPort(int32_t value)
{
    port_ = value;
    portIsSet_ = true;
}

bool AdvancedConfig::portIsSet() const
{
    return portIsSet_;
}

void AdvancedConfig::unsetport()
{
    portIsSet_ = false;
}

std::string AdvancedConfig::getProtocol() const
{
    return protocol_;
}

void AdvancedConfig::setProtocol(const std::string& value)
{
    protocol_ = value;
    protocolIsSet_ = true;
}

bool AdvancedConfig::protocolIsSet() const
{
    return protocolIsSet_;
}

void AdvancedConfig::unsetprotocol()
{
    protocolIsSet_ = false;
}

}
}
}
}
}


