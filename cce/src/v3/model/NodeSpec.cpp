

#include "huaweicloud/cce/v3/model/NodeSpec.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




NodeSpec::NodeSpec()
{
    flavor_ = "";
    flavorIsSet_ = false;
    az_ = "";
    azIsSet_ = false;
    os_ = "";
    osIsSet_ = false;
    loginIsSet_ = false;
    rootVolumeIsSet_ = false;
    dataVolumesIsSet_ = false;
    storageIsSet_ = false;
    publicIPIsSet_ = false;
    nodeNicSpecIsSet_ = false;
    count_ = 0;
    countIsSet_ = false;
    billingMode_ = 0;
    billingModeIsSet_ = false;
    taintsIsSet_ = false;
    waitPostInstallFinish_ = false;
    waitPostInstallFinishIsSet_ = false;
    k8sTagsIsSet_ = false;
    ecsGroupId_ = "";
    ecsGroupIdIsSet_ = false;
    faultDomain_ = "";
    faultDomainIsSet_ = false;
    dedicatedHostId_ = "";
    dedicatedHostIdIsSet_ = false;
    offloadNode_ = false;
    offloadNodeIsSet_ = false;
    isStatic_ = false;
    isStaticIsSet_ = false;
    userTagsIsSet_ = false;
    runtimeIsSet_ = false;
    initializedConditionsIsSet_ = false;
    extendParamIsSet_ = false;
    hostnameConfigIsSet_ = false;
    serverEnterpriseProjectID_ = "";
    serverEnterpriseProjectIDIsSet_ = false;
    partition_ = "";
    partitionIsSet_ = false;
    nodeNameTemplateIsSet_ = false;
}

NodeSpec::~NodeSpec() = default;

void NodeSpec::validate()
{
}

web::json::value NodeSpec::toJson() const
{
    web::json::value val = web::json::value::object();

    if(flavorIsSet_) {
        val[utility::conversions::to_string_t("flavor")] = ModelBase::toJson(flavor_);
    }
    if(azIsSet_) {
        val[utility::conversions::to_string_t("az")] = ModelBase::toJson(az_);
    }
    if(osIsSet_) {
        val[utility::conversions::to_string_t("os")] = ModelBase::toJson(os_);
    }
    if(loginIsSet_) {
        val[utility::conversions::to_string_t("login")] = ModelBase::toJson(login_);
    }
    if(rootVolumeIsSet_) {
        val[utility::conversions::to_string_t("rootVolume")] = ModelBase::toJson(rootVolume_);
    }
    if(dataVolumesIsSet_) {
        val[utility::conversions::to_string_t("dataVolumes")] = ModelBase::toJson(dataVolumes_);
    }
    if(storageIsSet_) {
        val[utility::conversions::to_string_t("storage")] = ModelBase::toJson(storage_);
    }
    if(publicIPIsSet_) {
        val[utility::conversions::to_string_t("publicIP")] = ModelBase::toJson(publicIP_);
    }
    if(nodeNicSpecIsSet_) {
        val[utility::conversions::to_string_t("nodeNicSpec")] = ModelBase::toJson(nodeNicSpec_);
    }
    if(countIsSet_) {
        val[utility::conversions::to_string_t("count")] = ModelBase::toJson(count_);
    }
    if(billingModeIsSet_) {
        val[utility::conversions::to_string_t("billingMode")] = ModelBase::toJson(billingMode_);
    }
    if(taintsIsSet_) {
        val[utility::conversions::to_string_t("taints")] = ModelBase::toJson(taints_);
    }
    if(waitPostInstallFinishIsSet_) {
        val[utility::conversions::to_string_t("waitPostInstallFinish")] = ModelBase::toJson(waitPostInstallFinish_);
    }
    if(k8sTagsIsSet_) {
        val[utility::conversions::to_string_t("k8sTags")] = ModelBase::toJson(k8sTags_);
    }
    if(ecsGroupIdIsSet_) {
        val[utility::conversions::to_string_t("ecsGroupId")] = ModelBase::toJson(ecsGroupId_);
    }
    if(faultDomainIsSet_) {
        val[utility::conversions::to_string_t("faultDomain")] = ModelBase::toJson(faultDomain_);
    }
    if(dedicatedHostIdIsSet_) {
        val[utility::conversions::to_string_t("dedicatedHostId")] = ModelBase::toJson(dedicatedHostId_);
    }
    if(offloadNodeIsSet_) {
        val[utility::conversions::to_string_t("offloadNode")] = ModelBase::toJson(offloadNode_);
    }
    if(isStaticIsSet_) {
        val[utility::conversions::to_string_t("isStatic")] = ModelBase::toJson(isStatic_);
    }
    if(userTagsIsSet_) {
        val[utility::conversions::to_string_t("userTags")] = ModelBase::toJson(userTags_);
    }
    if(runtimeIsSet_) {
        val[utility::conversions::to_string_t("runtime")] = ModelBase::toJson(runtime_);
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
    if(serverEnterpriseProjectIDIsSet_) {
        val[utility::conversions::to_string_t("serverEnterpriseProjectID")] = ModelBase::toJson(serverEnterpriseProjectID_);
    }
    if(partitionIsSet_) {
        val[utility::conversions::to_string_t("partition")] = ModelBase::toJson(partition_);
    }
    if(nodeNameTemplateIsSet_) {
        val[utility::conversions::to_string_t("nodeNameTemplate")] = ModelBase::toJson(nodeNameTemplate_);
    }

    return val;
}
bool NodeSpec::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("flavor"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("flavor"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFlavor(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("rootVolume"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rootVolume"));
        if(!fieldValue.is_null())
        {
            Volume refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRootVolume(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dataVolumes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dataVolumes"));
        if(!fieldValue.is_null())
        {
            std::vector<Volume> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataVolumes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("storage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("storage"));
        if(!fieldValue.is_null())
        {
            Storage refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setStorage(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("publicIP"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("publicIP"));
        if(!fieldValue.is_null())
        {
            NodePublicIP refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPublicIP(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nodeNicSpec"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nodeNicSpec"));
        if(!fieldValue.is_null())
        {
            NodeNicSpec refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeNicSpec(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("billingMode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("billingMode"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setBillingMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("taints"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("taints"));
        if(!fieldValue.is_null())
        {
            std::vector<Taint> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaints(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("waitPostInstallFinish"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("waitPostInstallFinish"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWaitPostInstallFinish(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("k8sTags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("k8sTags"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setK8sTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ecsGroupId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ecsGroupId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEcsGroupId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("faultDomain"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("faultDomain"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFaultDomain(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dedicatedHostId"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dedicatedHostId"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDedicatedHostId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("offloadNode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offloadNode"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffloadNode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("isStatic"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("isStatic"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsStatic(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("userTags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("userTags"));
        if(!fieldValue.is_null())
        {
            std::vector<UserTag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("runtime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("runtime"));
        if(!fieldValue.is_null())
        {
            Runtime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuntime(refVal);
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
            NodeExtendParam refVal;
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
    if(val.has_field(utility::conversions::to_string_t("serverEnterpriseProjectID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("serverEnterpriseProjectID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerEnterpriseProjectID(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("partition"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("partition"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPartition(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nodeNameTemplate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nodeNameTemplate"));
        if(!fieldValue.is_null())
        {
            NodeSpec_nodeNameTemplate refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeNameTemplate(refVal);
        }
    }
    return ok;
}


std::string NodeSpec::getFlavor() const
{
    return flavor_;
}

void NodeSpec::setFlavor(const std::string& value)
{
    flavor_ = value;
    flavorIsSet_ = true;
}

bool NodeSpec::flavorIsSet() const
{
    return flavorIsSet_;
}

void NodeSpec::unsetflavor()
{
    flavorIsSet_ = false;
}

std::string NodeSpec::getAz() const
{
    return az_;
}

void NodeSpec::setAz(const std::string& value)
{
    az_ = value;
    azIsSet_ = true;
}

bool NodeSpec::azIsSet() const
{
    return azIsSet_;
}

void NodeSpec::unsetaz()
{
    azIsSet_ = false;
}

std::string NodeSpec::getOs() const
{
    return os_;
}

void NodeSpec::setOs(const std::string& value)
{
    os_ = value;
    osIsSet_ = true;
}

bool NodeSpec::osIsSet() const
{
    return osIsSet_;
}

void NodeSpec::unsetos()
{
    osIsSet_ = false;
}

Login NodeSpec::getLogin() const
{
    return login_;
}

void NodeSpec::setLogin(const Login& value)
{
    login_ = value;
    loginIsSet_ = true;
}

bool NodeSpec::loginIsSet() const
{
    return loginIsSet_;
}

void NodeSpec::unsetlogin()
{
    loginIsSet_ = false;
}

Volume NodeSpec::getRootVolume() const
{
    return rootVolume_;
}

void NodeSpec::setRootVolume(const Volume& value)
{
    rootVolume_ = value;
    rootVolumeIsSet_ = true;
}

bool NodeSpec::rootVolumeIsSet() const
{
    return rootVolumeIsSet_;
}

void NodeSpec::unsetrootVolume()
{
    rootVolumeIsSet_ = false;
}

std::vector<Volume>& NodeSpec::getDataVolumes()
{
    return dataVolumes_;
}

void NodeSpec::setDataVolumes(const std::vector<Volume>& value)
{
    dataVolumes_ = value;
    dataVolumesIsSet_ = true;
}

bool NodeSpec::dataVolumesIsSet() const
{
    return dataVolumesIsSet_;
}

void NodeSpec::unsetdataVolumes()
{
    dataVolumesIsSet_ = false;
}

Storage NodeSpec::getStorage() const
{
    return storage_;
}

void NodeSpec::setStorage(const Storage& value)
{
    storage_ = value;
    storageIsSet_ = true;
}

bool NodeSpec::storageIsSet() const
{
    return storageIsSet_;
}

void NodeSpec::unsetstorage()
{
    storageIsSet_ = false;
}

NodePublicIP NodeSpec::getPublicIP() const
{
    return publicIP_;
}

void NodeSpec::setPublicIP(const NodePublicIP& value)
{
    publicIP_ = value;
    publicIPIsSet_ = true;
}

bool NodeSpec::publicIPIsSet() const
{
    return publicIPIsSet_;
}

void NodeSpec::unsetpublicIP()
{
    publicIPIsSet_ = false;
}

NodeNicSpec NodeSpec::getNodeNicSpec() const
{
    return nodeNicSpec_;
}

void NodeSpec::setNodeNicSpec(const NodeNicSpec& value)
{
    nodeNicSpec_ = value;
    nodeNicSpecIsSet_ = true;
}

bool NodeSpec::nodeNicSpecIsSet() const
{
    return nodeNicSpecIsSet_;
}

void NodeSpec::unsetnodeNicSpec()
{
    nodeNicSpecIsSet_ = false;
}

int32_t NodeSpec::getCount() const
{
    return count_;
}

void NodeSpec::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool NodeSpec::countIsSet() const
{
    return countIsSet_;
}

void NodeSpec::unsetcount()
{
    countIsSet_ = false;
}

int32_t NodeSpec::getBillingMode() const
{
    return billingMode_;
}

void NodeSpec::setBillingMode(int32_t value)
{
    billingMode_ = value;
    billingModeIsSet_ = true;
}

bool NodeSpec::billingModeIsSet() const
{
    return billingModeIsSet_;
}

void NodeSpec::unsetbillingMode()
{
    billingModeIsSet_ = false;
}

std::vector<Taint>& NodeSpec::getTaints()
{
    return taints_;
}

void NodeSpec::setTaints(const std::vector<Taint>& value)
{
    taints_ = value;
    taintsIsSet_ = true;
}

bool NodeSpec::taintsIsSet() const
{
    return taintsIsSet_;
}

void NodeSpec::unsettaints()
{
    taintsIsSet_ = false;
}

bool NodeSpec::isWaitPostInstallFinish() const
{
    return waitPostInstallFinish_;
}

void NodeSpec::setWaitPostInstallFinish(bool value)
{
    waitPostInstallFinish_ = value;
    waitPostInstallFinishIsSet_ = true;
}

bool NodeSpec::waitPostInstallFinishIsSet() const
{
    return waitPostInstallFinishIsSet_;
}

void NodeSpec::unsetwaitPostInstallFinish()
{
    waitPostInstallFinishIsSet_ = false;
}

std::map<std::string, std::string>& NodeSpec::getK8sTags()
{
    return k8sTags_;
}

void NodeSpec::setK8sTags(const std::map<std::string, std::string>& value)
{
    k8sTags_ = value;
    k8sTagsIsSet_ = true;
}

bool NodeSpec::k8sTagsIsSet() const
{
    return k8sTagsIsSet_;
}

void NodeSpec::unsetk8sTags()
{
    k8sTagsIsSet_ = false;
}

std::string NodeSpec::getEcsGroupId() const
{
    return ecsGroupId_;
}

void NodeSpec::setEcsGroupId(const std::string& value)
{
    ecsGroupId_ = value;
    ecsGroupIdIsSet_ = true;
}

bool NodeSpec::ecsGroupIdIsSet() const
{
    return ecsGroupIdIsSet_;
}

void NodeSpec::unsetecsGroupId()
{
    ecsGroupIdIsSet_ = false;
}

std::string NodeSpec::getFaultDomain() const
{
    return faultDomain_;
}

void NodeSpec::setFaultDomain(const std::string& value)
{
    faultDomain_ = value;
    faultDomainIsSet_ = true;
}

bool NodeSpec::faultDomainIsSet() const
{
    return faultDomainIsSet_;
}

void NodeSpec::unsetfaultDomain()
{
    faultDomainIsSet_ = false;
}

std::string NodeSpec::getDedicatedHostId() const
{
    return dedicatedHostId_;
}

void NodeSpec::setDedicatedHostId(const std::string& value)
{
    dedicatedHostId_ = value;
    dedicatedHostIdIsSet_ = true;
}

bool NodeSpec::dedicatedHostIdIsSet() const
{
    return dedicatedHostIdIsSet_;
}

void NodeSpec::unsetdedicatedHostId()
{
    dedicatedHostIdIsSet_ = false;
}

bool NodeSpec::isOffloadNode() const
{
    return offloadNode_;
}

void NodeSpec::setOffloadNode(bool value)
{
    offloadNode_ = value;
    offloadNodeIsSet_ = true;
}

bool NodeSpec::offloadNodeIsSet() const
{
    return offloadNodeIsSet_;
}

void NodeSpec::unsetoffloadNode()
{
    offloadNodeIsSet_ = false;
}

bool NodeSpec::isIsStatic() const
{
    return isStatic_;
}

void NodeSpec::setIsStatic(bool value)
{
    isStatic_ = value;
    isStaticIsSet_ = true;
}

bool NodeSpec::isStaticIsSet() const
{
    return isStaticIsSet_;
}

void NodeSpec::unsetisStatic()
{
    isStaticIsSet_ = false;
}

std::vector<UserTag>& NodeSpec::getUserTags()
{
    return userTags_;
}

void NodeSpec::setUserTags(const std::vector<UserTag>& value)
{
    userTags_ = value;
    userTagsIsSet_ = true;
}

bool NodeSpec::userTagsIsSet() const
{
    return userTagsIsSet_;
}

void NodeSpec::unsetuserTags()
{
    userTagsIsSet_ = false;
}

Runtime NodeSpec::getRuntime() const
{
    return runtime_;
}

void NodeSpec::setRuntime(const Runtime& value)
{
    runtime_ = value;
    runtimeIsSet_ = true;
}

bool NodeSpec::runtimeIsSet() const
{
    return runtimeIsSet_;
}

void NodeSpec::unsetruntime()
{
    runtimeIsSet_ = false;
}

std::vector<std::string>& NodeSpec::getInitializedConditions()
{
    return initializedConditions_;
}

void NodeSpec::setInitializedConditions(const std::vector<std::string>& value)
{
    initializedConditions_ = value;
    initializedConditionsIsSet_ = true;
}

bool NodeSpec::initializedConditionsIsSet() const
{
    return initializedConditionsIsSet_;
}

void NodeSpec::unsetinitializedConditions()
{
    initializedConditionsIsSet_ = false;
}

NodeExtendParam NodeSpec::getExtendParam() const
{
    return extendParam_;
}

void NodeSpec::setExtendParam(const NodeExtendParam& value)
{
    extendParam_ = value;
    extendParamIsSet_ = true;
}

bool NodeSpec::extendParamIsSet() const
{
    return extendParamIsSet_;
}

void NodeSpec::unsetextendParam()
{
    extendParamIsSet_ = false;
}

HostnameConfig NodeSpec::getHostnameConfig() const
{
    return hostnameConfig_;
}

void NodeSpec::setHostnameConfig(const HostnameConfig& value)
{
    hostnameConfig_ = value;
    hostnameConfigIsSet_ = true;
}

bool NodeSpec::hostnameConfigIsSet() const
{
    return hostnameConfigIsSet_;
}

void NodeSpec::unsethostnameConfig()
{
    hostnameConfigIsSet_ = false;
}

std::string NodeSpec::getServerEnterpriseProjectID() const
{
    return serverEnterpriseProjectID_;
}

void NodeSpec::setServerEnterpriseProjectID(const std::string& value)
{
    serverEnterpriseProjectID_ = value;
    serverEnterpriseProjectIDIsSet_ = true;
}

bool NodeSpec::serverEnterpriseProjectIDIsSet() const
{
    return serverEnterpriseProjectIDIsSet_;
}

void NodeSpec::unsetserverEnterpriseProjectID()
{
    serverEnterpriseProjectIDIsSet_ = false;
}

std::string NodeSpec::getPartition() const
{
    return partition_;
}

void NodeSpec::setPartition(const std::string& value)
{
    partition_ = value;
    partitionIsSet_ = true;
}

bool NodeSpec::partitionIsSet() const
{
    return partitionIsSet_;
}

void NodeSpec::unsetpartition()
{
    partitionIsSet_ = false;
}

NodeSpec_nodeNameTemplate NodeSpec::getNodeNameTemplate() const
{
    return nodeNameTemplate_;
}

void NodeSpec::setNodeNameTemplate(const NodeSpec_nodeNameTemplate& value)
{
    nodeNameTemplate_ = value;
    nodeNameTemplateIsSet_ = true;
}

bool NodeSpec::nodeNameTemplateIsSet() const
{
    return nodeNameTemplateIsSet_;
}

void NodeSpec::unsetnodeNameTemplate()
{
    nodeNameTemplateIsSet_ = false;
}

}
}
}
}
}


