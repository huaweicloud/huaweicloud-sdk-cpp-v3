

#include "huaweicloud/cce/v3/model/AutopilotClusterSpec.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




AutopilotClusterSpec::AutopilotClusterSpec()
{
    category_ = "";
    categoryIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    flavor_ = "";
    flavorIsSet_ = false;
    version_ = "";
    versionIsSet_ = false;
    platformVersion_ = "";
    platformVersionIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    customSanIsSet_ = false;
    enableSnat_ = false;
    enableSnatIsSet_ = false;
    enableSWRImageAccess_ = false;
    enableSWRImageAccessIsSet_ = false;
    enableAutopilot_ = false;
    enableAutopilotIsSet_ = false;
    ipv6enable_ = false;
    ipv6enableIsSet_ = false;
    hostNetworkIsSet_ = false;
    containerNetworkIsSet_ = false;
    eniNetworkIsSet_ = false;
    serviceNetworkIsSet_ = false;
    authenticationIsSet_ = false;
    billingMode_ = 0;
    billingModeIsSet_ = false;
    kubernetesSvcIpRange_ = "";
    kubernetesSvcIpRangeIsSet_ = false;
    clusterTagsIsSet_ = false;
    kubeProxyMode_ = "";
    kubeProxyModeIsSet_ = false;
    az_ = "";
    azIsSet_ = false;
    extendParamIsSet_ = false;
    configurationsOverrideIsSet_ = false;
}

AutopilotClusterSpec::~AutopilotClusterSpec() = default;

void AutopilotClusterSpec::validate()
{
}

web::json::value AutopilotClusterSpec::toJson() const
{
    web::json::value val = web::json::value::object();

    if(categoryIsSet_) {
        val[utility::conversions::to_string_t("category")] = ModelBase::toJson(category_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(flavorIsSet_) {
        val[utility::conversions::to_string_t("flavor")] = ModelBase::toJson(flavor_);
    }
    if(versionIsSet_) {
        val[utility::conversions::to_string_t("version")] = ModelBase::toJson(version_);
    }
    if(platformVersionIsSet_) {
        val[utility::conversions::to_string_t("platformVersion")] = ModelBase::toJson(platformVersion_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(customSanIsSet_) {
        val[utility::conversions::to_string_t("customSan")] = ModelBase::toJson(customSan_);
    }
    if(enableSnatIsSet_) {
        val[utility::conversions::to_string_t("enableSnat")] = ModelBase::toJson(enableSnat_);
    }
    if(enableSWRImageAccessIsSet_) {
        val[utility::conversions::to_string_t("enableSWRImageAccess")] = ModelBase::toJson(enableSWRImageAccess_);
    }
    if(enableAutopilotIsSet_) {
        val[utility::conversions::to_string_t("enableAutopilot")] = ModelBase::toJson(enableAutopilot_);
    }
    if(ipv6enableIsSet_) {
        val[utility::conversions::to_string_t("ipv6enable")] = ModelBase::toJson(ipv6enable_);
    }
    if(hostNetworkIsSet_) {
        val[utility::conversions::to_string_t("hostNetwork")] = ModelBase::toJson(hostNetwork_);
    }
    if(containerNetworkIsSet_) {
        val[utility::conversions::to_string_t("containerNetwork")] = ModelBase::toJson(containerNetwork_);
    }
    if(eniNetworkIsSet_) {
        val[utility::conversions::to_string_t("eniNetwork")] = ModelBase::toJson(eniNetwork_);
    }
    if(serviceNetworkIsSet_) {
        val[utility::conversions::to_string_t("serviceNetwork")] = ModelBase::toJson(serviceNetwork_);
    }
    if(authenticationIsSet_) {
        val[utility::conversions::to_string_t("authentication")] = ModelBase::toJson(authentication_);
    }
    if(billingModeIsSet_) {
        val[utility::conversions::to_string_t("billingMode")] = ModelBase::toJson(billingMode_);
    }
    if(kubernetesSvcIpRangeIsSet_) {
        val[utility::conversions::to_string_t("kubernetesSvcIpRange")] = ModelBase::toJson(kubernetesSvcIpRange_);
    }
    if(clusterTagsIsSet_) {
        val[utility::conversions::to_string_t("clusterTags")] = ModelBase::toJson(clusterTags_);
    }
    if(kubeProxyModeIsSet_) {
        val[utility::conversions::to_string_t("kubeProxyMode")] = ModelBase::toJson(kubeProxyMode_);
    }
    if(azIsSet_) {
        val[utility::conversions::to_string_t("az")] = ModelBase::toJson(az_);
    }
    if(extendParamIsSet_) {
        val[utility::conversions::to_string_t("extendParam")] = ModelBase::toJson(extendParam_);
    }
    if(configurationsOverrideIsSet_) {
        val[utility::conversions::to_string_t("configurationsOverride")] = ModelBase::toJson(configurationsOverride_);
    }

    return val;
}
bool AutopilotClusterSpec::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("category"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("category"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCategory(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("flavor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavor(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("platformVersion"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("platformVersion"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPlatformVersion(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("customSan"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("customSan"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomSan(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enableSnat"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enableSnat"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableSnat(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enableSWRImageAccess"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enableSWRImageAccess"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableSWRImageAccess(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enableAutopilot"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enableAutopilot"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableAutopilot(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ipv6enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ipv6enable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpv6enable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hostNetwork"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hostNetwork"));
        if(!fieldValue.is_null())
        {
            AutopilotHostNetwork refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHostNetwork(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("containerNetwork"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("containerNetwork"));
        if(!fieldValue.is_null())
        {
            AutopilotContainerNetwork refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContainerNetwork(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("eniNetwork"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("eniNetwork"));
        if(!fieldValue.is_null())
        {
            AutopilotEniNetwork refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEniNetwork(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("serviceNetwork"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("serviceNetwork"));
        if(!fieldValue.is_null())
        {
            AutopilotServiceNetwork refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceNetwork(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("authentication"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("authentication"));
        if(!fieldValue.is_null())
        {
            AutopilotAuthentication refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthentication(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("billingMode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("billingMode"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBillingMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("kubernetesSvcIpRange"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("kubernetesSvcIpRange"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKubernetesSvcIpRange(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("clusterTags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("clusterTags"));
        if(!fieldValue.is_null())
        {
            std::vector<AutopilotResourceTag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("kubeProxyMode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("kubeProxyMode"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setKubeProxyMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("az"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("az"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAz(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("extendParam"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extendParam"));
        if(!fieldValue.is_null())
        {
            AutopilotClusterExtendParam refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtendParam(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("configurationsOverride"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("configurationsOverride"));
        if(!fieldValue.is_null())
        {
            std::vector<AutopilotPackageConfiguration> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigurationsOverride(refVal);
        }
    }
    return ok;
}


std::string AutopilotClusterSpec::getCategory() const
{
    return category_;
}

void AutopilotClusterSpec::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool AutopilotClusterSpec::categoryIsSet() const
{
    return categoryIsSet_;
}

void AutopilotClusterSpec::unsetcategory()
{
    categoryIsSet_ = false;
}

std::string AutopilotClusterSpec::getType() const
{
    return type_;
}

void AutopilotClusterSpec::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool AutopilotClusterSpec::typeIsSet() const
{
    return typeIsSet_;
}

void AutopilotClusterSpec::unsettype()
{
    typeIsSet_ = false;
}

std::string AutopilotClusterSpec::getFlavor() const
{
    return flavor_;
}

void AutopilotClusterSpec::setFlavor(const std::string& value)
{
    flavor_ = value;
    flavorIsSet_ = true;
}

bool AutopilotClusterSpec::flavorIsSet() const
{
    return flavorIsSet_;
}

void AutopilotClusterSpec::unsetflavor()
{
    flavorIsSet_ = false;
}

std::string AutopilotClusterSpec::getVersion() const
{
    return version_;
}

void AutopilotClusterSpec::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool AutopilotClusterSpec::versionIsSet() const
{
    return versionIsSet_;
}

void AutopilotClusterSpec::unsetversion()
{
    versionIsSet_ = false;
}

std::string AutopilotClusterSpec::getPlatformVersion() const
{
    return platformVersion_;
}

void AutopilotClusterSpec::setPlatformVersion(const std::string& value)
{
    platformVersion_ = value;
    platformVersionIsSet_ = true;
}

bool AutopilotClusterSpec::platformVersionIsSet() const
{
    return platformVersionIsSet_;
}

void AutopilotClusterSpec::unsetplatformVersion()
{
    platformVersionIsSet_ = false;
}

std::string AutopilotClusterSpec::getDescription() const
{
    return description_;
}

void AutopilotClusterSpec::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool AutopilotClusterSpec::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void AutopilotClusterSpec::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::vector<std::string>& AutopilotClusterSpec::getCustomSan()
{
    return customSan_;
}

void AutopilotClusterSpec::setCustomSan(const std::vector<std::string>& value)
{
    customSan_ = value;
    customSanIsSet_ = true;
}

bool AutopilotClusterSpec::customSanIsSet() const
{
    return customSanIsSet_;
}

void AutopilotClusterSpec::unsetcustomSan()
{
    customSanIsSet_ = false;
}

bool AutopilotClusterSpec::isEnableSnat() const
{
    return enableSnat_;
}

void AutopilotClusterSpec::setEnableSnat(bool value)
{
    enableSnat_ = value;
    enableSnatIsSet_ = true;
}

bool AutopilotClusterSpec::enableSnatIsSet() const
{
    return enableSnatIsSet_;
}

void AutopilotClusterSpec::unsetenableSnat()
{
    enableSnatIsSet_ = false;
}

bool AutopilotClusterSpec::isEnableSWRImageAccess() const
{
    return enableSWRImageAccess_;
}

void AutopilotClusterSpec::setEnableSWRImageAccess(bool value)
{
    enableSWRImageAccess_ = value;
    enableSWRImageAccessIsSet_ = true;
}

bool AutopilotClusterSpec::enableSWRImageAccessIsSet() const
{
    return enableSWRImageAccessIsSet_;
}

void AutopilotClusterSpec::unsetenableSWRImageAccess()
{
    enableSWRImageAccessIsSet_ = false;
}

bool AutopilotClusterSpec::isEnableAutopilot() const
{
    return enableAutopilot_;
}

void AutopilotClusterSpec::setEnableAutopilot(bool value)
{
    enableAutopilot_ = value;
    enableAutopilotIsSet_ = true;
}

bool AutopilotClusterSpec::enableAutopilotIsSet() const
{
    return enableAutopilotIsSet_;
}

void AutopilotClusterSpec::unsetenableAutopilot()
{
    enableAutopilotIsSet_ = false;
}

bool AutopilotClusterSpec::isIpv6enable() const
{
    return ipv6enable_;
}

void AutopilotClusterSpec::setIpv6enable(bool value)
{
    ipv6enable_ = value;
    ipv6enableIsSet_ = true;
}

bool AutopilotClusterSpec::ipv6enableIsSet() const
{
    return ipv6enableIsSet_;
}

void AutopilotClusterSpec::unsetipv6enable()
{
    ipv6enableIsSet_ = false;
}

AutopilotHostNetwork AutopilotClusterSpec::getHostNetwork() const
{
    return hostNetwork_;
}

void AutopilotClusterSpec::setHostNetwork(const AutopilotHostNetwork& value)
{
    hostNetwork_ = value;
    hostNetworkIsSet_ = true;
}

bool AutopilotClusterSpec::hostNetworkIsSet() const
{
    return hostNetworkIsSet_;
}

void AutopilotClusterSpec::unsethostNetwork()
{
    hostNetworkIsSet_ = false;
}

AutopilotContainerNetwork AutopilotClusterSpec::getContainerNetwork() const
{
    return containerNetwork_;
}

void AutopilotClusterSpec::setContainerNetwork(const AutopilotContainerNetwork& value)
{
    containerNetwork_ = value;
    containerNetworkIsSet_ = true;
}

bool AutopilotClusterSpec::containerNetworkIsSet() const
{
    return containerNetworkIsSet_;
}

void AutopilotClusterSpec::unsetcontainerNetwork()
{
    containerNetworkIsSet_ = false;
}

AutopilotEniNetwork AutopilotClusterSpec::getEniNetwork() const
{
    return eniNetwork_;
}

void AutopilotClusterSpec::setEniNetwork(const AutopilotEniNetwork& value)
{
    eniNetwork_ = value;
    eniNetworkIsSet_ = true;
}

bool AutopilotClusterSpec::eniNetworkIsSet() const
{
    return eniNetworkIsSet_;
}

void AutopilotClusterSpec::unseteniNetwork()
{
    eniNetworkIsSet_ = false;
}

AutopilotServiceNetwork AutopilotClusterSpec::getServiceNetwork() const
{
    return serviceNetwork_;
}

void AutopilotClusterSpec::setServiceNetwork(const AutopilotServiceNetwork& value)
{
    serviceNetwork_ = value;
    serviceNetworkIsSet_ = true;
}

bool AutopilotClusterSpec::serviceNetworkIsSet() const
{
    return serviceNetworkIsSet_;
}

void AutopilotClusterSpec::unsetserviceNetwork()
{
    serviceNetworkIsSet_ = false;
}

AutopilotAuthentication AutopilotClusterSpec::getAuthentication() const
{
    return authentication_;
}

void AutopilotClusterSpec::setAuthentication(const AutopilotAuthentication& value)
{
    authentication_ = value;
    authenticationIsSet_ = true;
}

bool AutopilotClusterSpec::authenticationIsSet() const
{
    return authenticationIsSet_;
}

void AutopilotClusterSpec::unsetauthentication()
{
    authenticationIsSet_ = false;
}

int32_t AutopilotClusterSpec::getBillingMode() const
{
    return billingMode_;
}

void AutopilotClusterSpec::setBillingMode(int32_t value)
{
    billingMode_ = value;
    billingModeIsSet_ = true;
}

bool AutopilotClusterSpec::billingModeIsSet() const
{
    return billingModeIsSet_;
}

void AutopilotClusterSpec::unsetbillingMode()
{
    billingModeIsSet_ = false;
}

std::string AutopilotClusterSpec::getKubernetesSvcIpRange() const
{
    return kubernetesSvcIpRange_;
}

void AutopilotClusterSpec::setKubernetesSvcIpRange(const std::string& value)
{
    kubernetesSvcIpRange_ = value;
    kubernetesSvcIpRangeIsSet_ = true;
}

bool AutopilotClusterSpec::kubernetesSvcIpRangeIsSet() const
{
    return kubernetesSvcIpRangeIsSet_;
}

void AutopilotClusterSpec::unsetkubernetesSvcIpRange()
{
    kubernetesSvcIpRangeIsSet_ = false;
}

std::vector<AutopilotResourceTag>& AutopilotClusterSpec::getClusterTags()
{
    return clusterTags_;
}

void AutopilotClusterSpec::setClusterTags(const std::vector<AutopilotResourceTag>& value)
{
    clusterTags_ = value;
    clusterTagsIsSet_ = true;
}

bool AutopilotClusterSpec::clusterTagsIsSet() const
{
    return clusterTagsIsSet_;
}

void AutopilotClusterSpec::unsetclusterTags()
{
    clusterTagsIsSet_ = false;
}

std::string AutopilotClusterSpec::getKubeProxyMode() const
{
    return kubeProxyMode_;
}

void AutopilotClusterSpec::setKubeProxyMode(const std::string& value)
{
    kubeProxyMode_ = value;
    kubeProxyModeIsSet_ = true;
}

bool AutopilotClusterSpec::kubeProxyModeIsSet() const
{
    return kubeProxyModeIsSet_;
}

void AutopilotClusterSpec::unsetkubeProxyMode()
{
    kubeProxyModeIsSet_ = false;
}

std::string AutopilotClusterSpec::getAz() const
{
    return az_;
}

void AutopilotClusterSpec::setAz(const std::string& value)
{
    az_ = value;
    azIsSet_ = true;
}

bool AutopilotClusterSpec::azIsSet() const
{
    return azIsSet_;
}

void AutopilotClusterSpec::unsetaz()
{
    azIsSet_ = false;
}

AutopilotClusterExtendParam AutopilotClusterSpec::getExtendParam() const
{
    return extendParam_;
}

void AutopilotClusterSpec::setExtendParam(const AutopilotClusterExtendParam& value)
{
    extendParam_ = value;
    extendParamIsSet_ = true;
}

bool AutopilotClusterSpec::extendParamIsSet() const
{
    return extendParamIsSet_;
}

void AutopilotClusterSpec::unsetextendParam()
{
    extendParamIsSet_ = false;
}

std::vector<AutopilotPackageConfiguration>& AutopilotClusterSpec::getConfigurationsOverride()
{
    return configurationsOverride_;
}

void AutopilotClusterSpec::setConfigurationsOverride(const std::vector<AutopilotPackageConfiguration>& value)
{
    configurationsOverride_ = value;
    configurationsOverrideIsSet_ = true;
}

bool AutopilotClusterSpec::configurationsOverrideIsSet() const
{
    return configurationsOverrideIsSet_;
}

void AutopilotClusterSpec::unsetconfigurationsOverride()
{
    configurationsOverrideIsSet_ = false;
}

}
}
}
}
}


