

#include "huaweicloud/cce/v3/model/ClusterSpec.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




ClusterSpec::ClusterSpec()
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
    legacyVersion_ = "";
    legacyVersionIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    customSanIsSet_ = false;
    ipv6enable_ = false;
    ipv6enableIsSet_ = false;
    offloadCluster_ = false;
    offloadClusterIsSet_ = false;
    hostNetworkIsSet_ = false;
    containerNetworkIsSet_ = false;
    eniNetworkIsSet_ = false;
    serviceNetworkIsSet_ = false;
    authenticationIsSet_ = false;
    billingMode_ = 0;
    billingModeIsSet_ = false;
    mastersIsSet_ = false;
    kubernetesSvcIpRange_ = "";
    kubernetesSvcIpRangeIsSet_ = false;
    clusterTagsIsSet_ = false;
    kubeProxyMode_ = "";
    kubeProxyModeIsSet_ = false;
    az_ = "";
    azIsSet_ = false;
    extendParamIsSet_ = false;
    supportIstio_ = false;
    supportIstioIsSet_ = false;
    enableMasterVolumeEncryption_ = false;
    enableMasterVolumeEncryptionIsSet_ = false;
    enableDistMgt_ = false;
    enableDistMgtIsSet_ = false;
    deletionProtection_ = false;
    deletionProtectionIsSet_ = false;
    configurationsOverrideIsSet_ = false;
    clusterOpsIsSet_ = false;
    enableAutopilot_ = false;
    enableAutopilotIsSet_ = false;
    encryptionConfigIsSet_ = false;
}

ClusterSpec::~ClusterSpec() = default;

void ClusterSpec::validate()
{
}

web::json::value ClusterSpec::toJson() const
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
    if(legacyVersionIsSet_) {
        val[utility::conversions::to_string_t("legacyVersion")] = ModelBase::toJson(legacyVersion_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(customSanIsSet_) {
        val[utility::conversions::to_string_t("customSan")] = ModelBase::toJson(customSan_);
    }
    if(ipv6enableIsSet_) {
        val[utility::conversions::to_string_t("ipv6enable")] = ModelBase::toJson(ipv6enable_);
    }
    if(offloadClusterIsSet_) {
        val[utility::conversions::to_string_t("offloadCluster")] = ModelBase::toJson(offloadCluster_);
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
    if(mastersIsSet_) {
        val[utility::conversions::to_string_t("masters")] = ModelBase::toJson(masters_);
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
    if(supportIstioIsSet_) {
        val[utility::conversions::to_string_t("supportIstio")] = ModelBase::toJson(supportIstio_);
    }
    if(enableMasterVolumeEncryptionIsSet_) {
        val[utility::conversions::to_string_t("enableMasterVolumeEncryption")] = ModelBase::toJson(enableMasterVolumeEncryption_);
    }
    if(enableDistMgtIsSet_) {
        val[utility::conversions::to_string_t("enableDistMgt")] = ModelBase::toJson(enableDistMgt_);
    }
    if(deletionProtectionIsSet_) {
        val[utility::conversions::to_string_t("deletionProtection")] = ModelBase::toJson(deletionProtection_);
    }
    if(configurationsOverrideIsSet_) {
        val[utility::conversions::to_string_t("configurationsOverride")] = ModelBase::toJson(configurationsOverride_);
    }
    if(clusterOpsIsSet_) {
        val[utility::conversions::to_string_t("clusterOps")] = ModelBase::toJson(clusterOps_);
    }
    if(enableAutopilotIsSet_) {
        val[utility::conversions::to_string_t("enableAutopilot")] = ModelBase::toJson(enableAutopilot_);
    }
    if(encryptionConfigIsSet_) {
        val[utility::conversions::to_string_t("encryptionConfig")] = ModelBase::toJson(encryptionConfig_);
    }

    return val;
}
bool ClusterSpec::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("legacyVersion"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("legacyVersion"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLegacyVersion(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("ipv6enable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ipv6enable"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIpv6enable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offloadCluster"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offloadCluster"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffloadCluster(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hostNetwork"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hostNetwork"));
        if(!fieldValue.is_null())
        {
            HostNetwork refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHostNetwork(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("containerNetwork"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("containerNetwork"));
        if(!fieldValue.is_null())
        {
            ContainerNetwork refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContainerNetwork(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("eniNetwork"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("eniNetwork"));
        if(!fieldValue.is_null())
        {
            EniNetwork refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEniNetwork(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("serviceNetwork"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("serviceNetwork"));
        if(!fieldValue.is_null())
        {
            ServiceNetwork refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServiceNetwork(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("authentication"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("authentication"));
        if(!fieldValue.is_null())
        {
            Authentication refVal;
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
    if(val.has_field(utility::conversions::to_string_t("masters"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("masters"));
        if(!fieldValue.is_null())
        {
            std::vector<MasterSpec> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMasters(refVal);
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
            std::vector<ResourceTag> refVal;
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
            ClusterExtendParam refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtendParam(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("supportIstio"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("supportIstio"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSupportIstio(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enableMasterVolumeEncryption"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enableMasterVolumeEncryption"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableMasterVolumeEncryption(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("enableDistMgt"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enableDistMgt"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableDistMgt(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deletionProtection"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deletionProtection"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeletionProtection(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("configurationsOverride"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("configurationsOverride"));
        if(!fieldValue.is_null())
        {
            std::vector<PackageConfiguration> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigurationsOverride(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("clusterOps"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("clusterOps"));
        if(!fieldValue.is_null())
        {
            ClusterOps refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterOps(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("encryptionConfig"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("encryptionConfig"));
        if(!fieldValue.is_null())
        {
            EncryptionConfig refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEncryptionConfig(refVal);
        }
    }
    return ok;
}


std::string ClusterSpec::getCategory() const
{
    return category_;
}

void ClusterSpec::setCategory(const std::string& value)
{
    category_ = value;
    categoryIsSet_ = true;
}

bool ClusterSpec::categoryIsSet() const
{
    return categoryIsSet_;
}

void ClusterSpec::unsetcategory()
{
    categoryIsSet_ = false;
}

std::string ClusterSpec::getType() const
{
    return type_;
}

void ClusterSpec::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool ClusterSpec::typeIsSet() const
{
    return typeIsSet_;
}

void ClusterSpec::unsettype()
{
    typeIsSet_ = false;
}

std::string ClusterSpec::getFlavor() const
{
    return flavor_;
}

void ClusterSpec::setFlavor(const std::string& value)
{
    flavor_ = value;
    flavorIsSet_ = true;
}

bool ClusterSpec::flavorIsSet() const
{
    return flavorIsSet_;
}

void ClusterSpec::unsetflavor()
{
    flavorIsSet_ = false;
}

std::string ClusterSpec::getVersion() const
{
    return version_;
}

void ClusterSpec::setVersion(const std::string& value)
{
    version_ = value;
    versionIsSet_ = true;
}

bool ClusterSpec::versionIsSet() const
{
    return versionIsSet_;
}

void ClusterSpec::unsetversion()
{
    versionIsSet_ = false;
}

std::string ClusterSpec::getPlatformVersion() const
{
    return platformVersion_;
}

void ClusterSpec::setPlatformVersion(const std::string& value)
{
    platformVersion_ = value;
    platformVersionIsSet_ = true;
}

bool ClusterSpec::platformVersionIsSet() const
{
    return platformVersionIsSet_;
}

void ClusterSpec::unsetplatformVersion()
{
    platformVersionIsSet_ = false;
}

std::string ClusterSpec::getLegacyVersion() const
{
    return legacyVersion_;
}

void ClusterSpec::setLegacyVersion(const std::string& value)
{
    legacyVersion_ = value;
    legacyVersionIsSet_ = true;
}

bool ClusterSpec::legacyVersionIsSet() const
{
    return legacyVersionIsSet_;
}

void ClusterSpec::unsetlegacyVersion()
{
    legacyVersionIsSet_ = false;
}

std::string ClusterSpec::getDescription() const
{
    return description_;
}

void ClusterSpec::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool ClusterSpec::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void ClusterSpec::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::vector<std::string>& ClusterSpec::getCustomSan()
{
    return customSan_;
}

void ClusterSpec::setCustomSan(const std::vector<std::string>& value)
{
    customSan_ = value;
    customSanIsSet_ = true;
}

bool ClusterSpec::customSanIsSet() const
{
    return customSanIsSet_;
}

void ClusterSpec::unsetcustomSan()
{
    customSanIsSet_ = false;
}

bool ClusterSpec::isIpv6enable() const
{
    return ipv6enable_;
}

void ClusterSpec::setIpv6enable(bool value)
{
    ipv6enable_ = value;
    ipv6enableIsSet_ = true;
}

bool ClusterSpec::ipv6enableIsSet() const
{
    return ipv6enableIsSet_;
}

void ClusterSpec::unsetipv6enable()
{
    ipv6enableIsSet_ = false;
}

bool ClusterSpec::isOffloadCluster() const
{
    return offloadCluster_;
}

void ClusterSpec::setOffloadCluster(bool value)
{
    offloadCluster_ = value;
    offloadClusterIsSet_ = true;
}

bool ClusterSpec::offloadClusterIsSet() const
{
    return offloadClusterIsSet_;
}

void ClusterSpec::unsetoffloadCluster()
{
    offloadClusterIsSet_ = false;
}

HostNetwork ClusterSpec::getHostNetwork() const
{
    return hostNetwork_;
}

void ClusterSpec::setHostNetwork(const HostNetwork& value)
{
    hostNetwork_ = value;
    hostNetworkIsSet_ = true;
}

bool ClusterSpec::hostNetworkIsSet() const
{
    return hostNetworkIsSet_;
}

void ClusterSpec::unsethostNetwork()
{
    hostNetworkIsSet_ = false;
}

ContainerNetwork ClusterSpec::getContainerNetwork() const
{
    return containerNetwork_;
}

void ClusterSpec::setContainerNetwork(const ContainerNetwork& value)
{
    containerNetwork_ = value;
    containerNetworkIsSet_ = true;
}

bool ClusterSpec::containerNetworkIsSet() const
{
    return containerNetworkIsSet_;
}

void ClusterSpec::unsetcontainerNetwork()
{
    containerNetworkIsSet_ = false;
}

EniNetwork ClusterSpec::getEniNetwork() const
{
    return eniNetwork_;
}

void ClusterSpec::setEniNetwork(const EniNetwork& value)
{
    eniNetwork_ = value;
    eniNetworkIsSet_ = true;
}

bool ClusterSpec::eniNetworkIsSet() const
{
    return eniNetworkIsSet_;
}

void ClusterSpec::unseteniNetwork()
{
    eniNetworkIsSet_ = false;
}

ServiceNetwork ClusterSpec::getServiceNetwork() const
{
    return serviceNetwork_;
}

void ClusterSpec::setServiceNetwork(const ServiceNetwork& value)
{
    serviceNetwork_ = value;
    serviceNetworkIsSet_ = true;
}

bool ClusterSpec::serviceNetworkIsSet() const
{
    return serviceNetworkIsSet_;
}

void ClusterSpec::unsetserviceNetwork()
{
    serviceNetworkIsSet_ = false;
}

Authentication ClusterSpec::getAuthentication() const
{
    return authentication_;
}

void ClusterSpec::setAuthentication(const Authentication& value)
{
    authentication_ = value;
    authenticationIsSet_ = true;
}

bool ClusterSpec::authenticationIsSet() const
{
    return authenticationIsSet_;
}

void ClusterSpec::unsetauthentication()
{
    authenticationIsSet_ = false;
}

int32_t ClusterSpec::getBillingMode() const
{
    return billingMode_;
}

void ClusterSpec::setBillingMode(int32_t value)
{
    billingMode_ = value;
    billingModeIsSet_ = true;
}

bool ClusterSpec::billingModeIsSet() const
{
    return billingModeIsSet_;
}

void ClusterSpec::unsetbillingMode()
{
    billingModeIsSet_ = false;
}

std::vector<MasterSpec>& ClusterSpec::getMasters()
{
    return masters_;
}

void ClusterSpec::setMasters(const std::vector<MasterSpec>& value)
{
    masters_ = value;
    mastersIsSet_ = true;
}

bool ClusterSpec::mastersIsSet() const
{
    return mastersIsSet_;
}

void ClusterSpec::unsetmasters()
{
    mastersIsSet_ = false;
}

std::string ClusterSpec::getKubernetesSvcIpRange() const
{
    return kubernetesSvcIpRange_;
}

void ClusterSpec::setKubernetesSvcIpRange(const std::string& value)
{
    kubernetesSvcIpRange_ = value;
    kubernetesSvcIpRangeIsSet_ = true;
}

bool ClusterSpec::kubernetesSvcIpRangeIsSet() const
{
    return kubernetesSvcIpRangeIsSet_;
}

void ClusterSpec::unsetkubernetesSvcIpRange()
{
    kubernetesSvcIpRangeIsSet_ = false;
}

std::vector<ResourceTag>& ClusterSpec::getClusterTags()
{
    return clusterTags_;
}

void ClusterSpec::setClusterTags(const std::vector<ResourceTag>& value)
{
    clusterTags_ = value;
    clusterTagsIsSet_ = true;
}

bool ClusterSpec::clusterTagsIsSet() const
{
    return clusterTagsIsSet_;
}

void ClusterSpec::unsetclusterTags()
{
    clusterTagsIsSet_ = false;
}

std::string ClusterSpec::getKubeProxyMode() const
{
    return kubeProxyMode_;
}

void ClusterSpec::setKubeProxyMode(const std::string& value)
{
    kubeProxyMode_ = value;
    kubeProxyModeIsSet_ = true;
}

bool ClusterSpec::kubeProxyModeIsSet() const
{
    return kubeProxyModeIsSet_;
}

void ClusterSpec::unsetkubeProxyMode()
{
    kubeProxyModeIsSet_ = false;
}

std::string ClusterSpec::getAz() const
{
    return az_;
}

void ClusterSpec::setAz(const std::string& value)
{
    az_ = value;
    azIsSet_ = true;
}

bool ClusterSpec::azIsSet() const
{
    return azIsSet_;
}

void ClusterSpec::unsetaz()
{
    azIsSet_ = false;
}

ClusterExtendParam ClusterSpec::getExtendParam() const
{
    return extendParam_;
}

void ClusterSpec::setExtendParam(const ClusterExtendParam& value)
{
    extendParam_ = value;
    extendParamIsSet_ = true;
}

bool ClusterSpec::extendParamIsSet() const
{
    return extendParamIsSet_;
}

void ClusterSpec::unsetextendParam()
{
    extendParamIsSet_ = false;
}

bool ClusterSpec::isSupportIstio() const
{
    return supportIstio_;
}

void ClusterSpec::setSupportIstio(bool value)
{
    supportIstio_ = value;
    supportIstioIsSet_ = true;
}

bool ClusterSpec::supportIstioIsSet() const
{
    return supportIstioIsSet_;
}

void ClusterSpec::unsetsupportIstio()
{
    supportIstioIsSet_ = false;
}

bool ClusterSpec::isEnableMasterVolumeEncryption() const
{
    return enableMasterVolumeEncryption_;
}

void ClusterSpec::setEnableMasterVolumeEncryption(bool value)
{
    enableMasterVolumeEncryption_ = value;
    enableMasterVolumeEncryptionIsSet_ = true;
}

bool ClusterSpec::enableMasterVolumeEncryptionIsSet() const
{
    return enableMasterVolumeEncryptionIsSet_;
}

void ClusterSpec::unsetenableMasterVolumeEncryption()
{
    enableMasterVolumeEncryptionIsSet_ = false;
}

bool ClusterSpec::isEnableDistMgt() const
{
    return enableDistMgt_;
}

void ClusterSpec::setEnableDistMgt(bool value)
{
    enableDistMgt_ = value;
    enableDistMgtIsSet_ = true;
}

bool ClusterSpec::enableDistMgtIsSet() const
{
    return enableDistMgtIsSet_;
}

void ClusterSpec::unsetenableDistMgt()
{
    enableDistMgtIsSet_ = false;
}

bool ClusterSpec::isDeletionProtection() const
{
    return deletionProtection_;
}

void ClusterSpec::setDeletionProtection(bool value)
{
    deletionProtection_ = value;
    deletionProtectionIsSet_ = true;
}

bool ClusterSpec::deletionProtectionIsSet() const
{
    return deletionProtectionIsSet_;
}

void ClusterSpec::unsetdeletionProtection()
{
    deletionProtectionIsSet_ = false;
}

std::vector<PackageConfiguration>& ClusterSpec::getConfigurationsOverride()
{
    return configurationsOverride_;
}

void ClusterSpec::setConfigurationsOverride(const std::vector<PackageConfiguration>& value)
{
    configurationsOverride_ = value;
    configurationsOverrideIsSet_ = true;
}

bool ClusterSpec::configurationsOverrideIsSet() const
{
    return configurationsOverrideIsSet_;
}

void ClusterSpec::unsetconfigurationsOverride()
{
    configurationsOverrideIsSet_ = false;
}

ClusterOps ClusterSpec::getClusterOps() const
{
    return clusterOps_;
}

void ClusterSpec::setClusterOps(const ClusterOps& value)
{
    clusterOps_ = value;
    clusterOpsIsSet_ = true;
}

bool ClusterSpec::clusterOpsIsSet() const
{
    return clusterOpsIsSet_;
}

void ClusterSpec::unsetclusterOps()
{
    clusterOpsIsSet_ = false;
}

bool ClusterSpec::isEnableAutopilot() const
{
    return enableAutopilot_;
}

void ClusterSpec::setEnableAutopilot(bool value)
{
    enableAutopilot_ = value;
    enableAutopilotIsSet_ = true;
}

bool ClusterSpec::enableAutopilotIsSet() const
{
    return enableAutopilotIsSet_;
}

void ClusterSpec::unsetenableAutopilot()
{
    enableAutopilotIsSet_ = false;
}

EncryptionConfig ClusterSpec::getEncryptionConfig() const
{
    return encryptionConfig_;
}

void ClusterSpec::setEncryptionConfig(const EncryptionConfig& value)
{
    encryptionConfig_ = value;
    encryptionConfigIsSet_ = true;
}

bool ClusterSpec::encryptionConfigIsSet() const
{
    return encryptionConfigIsSet_;
}

void ClusterSpec::unsetencryptionConfig()
{
    encryptionConfigIsSet_ = false;
}

}
}
}
}
}


