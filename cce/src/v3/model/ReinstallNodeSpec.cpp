

#include "huaweicloud/cce/v3/model/ReinstallNodeSpec.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ReinstallNodeSpec::ReinstallNodeSpec()
{
    os_ = "";
    osIsSet_ = false;
    loginIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    serverConfigIsSet_ = false;
    volumeConfigIsSet_ = false;
    runtimeConfigIsSet_ = false;
    k8sOptionsIsSet_ = false;
    lifecycleIsSet_ = false;
    initializedConditionsIsSet_ = false;
    extendParamIsSet_ = false;
    hostnameConfigIsSet_ = false;
    securityReinforcementType_ = "";
    securityReinforcementTypeIsSet_ = false;
}

ReinstallNodeSpec::~ReinstallNodeSpec() = default;

void ReinstallNodeSpec::validate()
{
}

web::json::value ReinstallNodeSpec::toJson() const
{
    web::json::value val = web::json::value::object();

    if(osIsSet_) {
        val[utility::conversions::to_string_t("os")] = ModelBase::toJson(os_);
    }
    if(loginIsSet_) {
        val[utility::conversions::to_string_t("login")] = ModelBase::toJson(login_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(serverConfigIsSet_) {
        val[utility::conversions::to_string_t("serverConfig")] = ModelBase::toJson(serverConfig_);
    }
    if(volumeConfigIsSet_) {
        val[utility::conversions::to_string_t("volumeConfig")] = ModelBase::toJson(volumeConfig_);
    }
    if(runtimeConfigIsSet_) {
        val[utility::conversions::to_string_t("runtimeConfig")] = ModelBase::toJson(runtimeConfig_);
    }
    if(k8sOptionsIsSet_) {
        val[utility::conversions::to_string_t("k8sOptions")] = ModelBase::toJson(k8sOptions_);
    }
    if(lifecycleIsSet_) {
        val[utility::conversions::to_string_t("lifecycle")] = ModelBase::toJson(lifecycle_);
    }
    if(initializedConditionsIsSet_) {
        val[utility::conversions::to_string_t("initializedConditions")] = ModelBase::toJson(initializedConditions_);
    }
    if(extendParamIsSet_) {
        val[utility::conversions::to_string_t("extendParam")] = ModelBase::toJson(extendParam_);
    }
    if(hostnameConfigIsSet_) {
        val[utility::conversions::to_string_t("hostnameConfig")] = ModelBase::toJson(hostnameConfig_);
    }
    if(securityReinforcementTypeIsSet_) {
        val[utility::conversions::to_string_t("securityReinforcementType")] = ModelBase::toJson(securityReinforcementType_);
    }

    return val;
}
bool ReinstallNodeSpec::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("os"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("login"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("login"));
        if(!fieldValue.is_null())
        {
            Login refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLogin(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("serverConfig"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("serverConfig"));
        if(!fieldValue.is_null())
        {
            ReinstallServerConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("volumeConfig"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("volumeConfig"));
        if(!fieldValue.is_null())
        {
            ReinstallVolumeConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setVolumeConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("runtimeConfig"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("runtimeConfig"));
        if(!fieldValue.is_null())
        {
            ReinstallRuntimeConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuntimeConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("k8sOptions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("k8sOptions"));
        if(!fieldValue.is_null())
        {
            ReinstallK8sOptionsConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setK8sOptions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lifecycle"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lifecycle"));
        if(!fieldValue.is_null())
        {
            NodeLifecycleConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLifecycle(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("initializedConditions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("initializedConditions"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInitializedConditions(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("extendParam"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extendParam"));
        if(!fieldValue.is_null())
        {
            ReinstallExtendParam refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtendParam(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hostnameConfig"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hostnameConfig"));
        if(!fieldValue.is_null())
        {
            HostnameConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHostnameConfig(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("securityReinforcementType"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("securityReinforcementType"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSecurityReinforcementType(refVal);
        }
    }
    return ok;
}


std::string ReinstallNodeSpec::getOs() const
{
    return os_;
}

void ReinstallNodeSpec::setOs(const std::string& value)
{
    os_ = value;
    osIsSet_ = true;
}

bool ReinstallNodeSpec::osIsSet() const
{
    return osIsSet_;
}

void ReinstallNodeSpec::unsetos()
{
    osIsSet_ = false;
}

Login ReinstallNodeSpec::getLogin() const
{
    return login_;
}

void ReinstallNodeSpec::setLogin(const Login& value)
{
    login_ = value;
    loginIsSet_ = true;
}

bool ReinstallNodeSpec::loginIsSet() const
{
    return loginIsSet_;
}

void ReinstallNodeSpec::unsetlogin()
{
    loginIsSet_ = false;
}

std::string ReinstallNodeSpec::getName() const
{
    return name_;
}

void ReinstallNodeSpec::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ReinstallNodeSpec::nameIsSet() const
{
    return nameIsSet_;
}

void ReinstallNodeSpec::unsetname()
{
    nameIsSet_ = false;
}

ReinstallServerConfig ReinstallNodeSpec::getServerConfig() const
{
    return serverConfig_;
}

void ReinstallNodeSpec::setServerConfig(const ReinstallServerConfig& value)
{
    serverConfig_ = value;
    serverConfigIsSet_ = true;
}

bool ReinstallNodeSpec::serverConfigIsSet() const
{
    return serverConfigIsSet_;
}

void ReinstallNodeSpec::unsetserverConfig()
{
    serverConfigIsSet_ = false;
}

ReinstallVolumeConfig ReinstallNodeSpec::getVolumeConfig() const
{
    return volumeConfig_;
}

void ReinstallNodeSpec::setVolumeConfig(const ReinstallVolumeConfig& value)
{
    volumeConfig_ = value;
    volumeConfigIsSet_ = true;
}

bool ReinstallNodeSpec::volumeConfigIsSet() const
{
    return volumeConfigIsSet_;
}

void ReinstallNodeSpec::unsetvolumeConfig()
{
    volumeConfigIsSet_ = false;
}

ReinstallRuntimeConfig ReinstallNodeSpec::getRuntimeConfig() const
{
    return runtimeConfig_;
}

void ReinstallNodeSpec::setRuntimeConfig(const ReinstallRuntimeConfig& value)
{
    runtimeConfig_ = value;
    runtimeConfigIsSet_ = true;
}

bool ReinstallNodeSpec::runtimeConfigIsSet() const
{
    return runtimeConfigIsSet_;
}

void ReinstallNodeSpec::unsetruntimeConfig()
{
    runtimeConfigIsSet_ = false;
}

ReinstallK8sOptionsConfig ReinstallNodeSpec::getK8sOptions() const
{
    return k8sOptions_;
}

void ReinstallNodeSpec::setK8sOptions(const ReinstallK8sOptionsConfig& value)
{
    k8sOptions_ = value;
    k8sOptionsIsSet_ = true;
}

bool ReinstallNodeSpec::k8sOptionsIsSet() const
{
    return k8sOptionsIsSet_;
}

void ReinstallNodeSpec::unsetk8sOptions()
{
    k8sOptionsIsSet_ = false;
}

NodeLifecycleConfig ReinstallNodeSpec::getLifecycle() const
{
    return lifecycle_;
}

void ReinstallNodeSpec::setLifecycle(const NodeLifecycleConfig& value)
{
    lifecycle_ = value;
    lifecycleIsSet_ = true;
}

bool ReinstallNodeSpec::lifecycleIsSet() const
{
    return lifecycleIsSet_;
}

void ReinstallNodeSpec::unsetlifecycle()
{
    lifecycleIsSet_ = false;
}

std::vector<std::string>& ReinstallNodeSpec::getInitializedConditions()
{
    return initializedConditions_;
}

void ReinstallNodeSpec::setInitializedConditions(const std::vector<std::string>& value)
{
    initializedConditions_ = value;
    initializedConditionsIsSet_ = true;
}

bool ReinstallNodeSpec::initializedConditionsIsSet() const
{
    return initializedConditionsIsSet_;
}

void ReinstallNodeSpec::unsetinitializedConditions()
{
    initializedConditionsIsSet_ = false;
}

ReinstallExtendParam ReinstallNodeSpec::getExtendParam() const
{
    return extendParam_;
}

void ReinstallNodeSpec::setExtendParam(const ReinstallExtendParam& value)
{
    extendParam_ = value;
    extendParamIsSet_ = true;
}

bool ReinstallNodeSpec::extendParamIsSet() const
{
    return extendParamIsSet_;
}

void ReinstallNodeSpec::unsetextendParam()
{
    extendParamIsSet_ = false;
}

HostnameConfig ReinstallNodeSpec::getHostnameConfig() const
{
    return hostnameConfig_;
}

void ReinstallNodeSpec::setHostnameConfig(const HostnameConfig& value)
{
    hostnameConfig_ = value;
    hostnameConfigIsSet_ = true;
}

bool ReinstallNodeSpec::hostnameConfigIsSet() const
{
    return hostnameConfigIsSet_;
}

void ReinstallNodeSpec::unsethostnameConfig()
{
    hostnameConfigIsSet_ = false;
}

std::string ReinstallNodeSpec::getSecurityReinforcementType() const
{
    return securityReinforcementType_;
}

void ReinstallNodeSpec::setSecurityReinforcementType(const std::string& value)
{
    securityReinforcementType_ = value;
    securityReinforcementTypeIsSet_ = true;
}

bool ReinstallNodeSpec::securityReinforcementTypeIsSet() const
{
    return securityReinforcementTypeIsSet_;
}

void ReinstallNodeSpec::unsetsecurityReinforcementType()
{
    securityReinforcementTypeIsSet_ = false;
}

}
}
}
}
}


