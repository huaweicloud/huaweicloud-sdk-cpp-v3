

#include "huaweicloud/cce/v3/model/NodeTemplate.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




NodeTemplate::NodeTemplate()
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

NodeTemplate::~NodeTemplate() = default;

void NodeTemplate::validate()
{
}

web::json::value NodeTemplate::toJson() const
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
bool NodeTemplate::fromJson(const web::json::value& val)
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
            NodeEIPSpec refVal;
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


std::string NodeTemplate::getFlavor() const
{
    return flavor_;
}

void NodeTemplate::setFlavor(const std::string& value)
{
    flavor_ = value;
    flavorIsSet_ = true;
}

bool NodeTemplate::flavorIsSet() const
{
    return flavorIsSet_;
}

void NodeTemplate::unsetflavor()
{
    flavorIsSet_ = false;
}

std::string NodeTemplate::getAz() const
{
    return az_;
}

void NodeTemplate::setAz(const std::string& value)
{
    az_ = value;
    azIsSet_ = true;
}

bool NodeTemplate::azIsSet() const
{
    return azIsSet_;
}

void NodeTemplate::unsetaz()
{
    azIsSet_ = false;
}

std::string NodeTemplate::getOs() const
{
    return os_;
}

void NodeTemplate::setOs(const std::string& value)
{
    os_ = value;
    osIsSet_ = true;
}

bool NodeTemplate::osIsSet() const
{
    return osIsSet_;
}

void NodeTemplate::unsetos()
{
    osIsSet_ = false;
}

Login NodeTemplate::getLogin() const
{
    return login_;
}

void NodeTemplate::setLogin(const Login& value)
{
    login_ = value;
    loginIsSet_ = true;
}

bool NodeTemplate::loginIsSet() const
{
    return loginIsSet_;
}

void NodeTemplate::unsetlogin()
{
    loginIsSet_ = false;
}

Volume NodeTemplate::getRootVolume() const
{
    return rootVolume_;
}

void NodeTemplate::setRootVolume(const Volume& value)
{
    rootVolume_ = value;
    rootVolumeIsSet_ = true;
}

bool NodeTemplate::rootVolumeIsSet() const
{
    return rootVolumeIsSet_;
}

void NodeTemplate::unsetrootVolume()
{
    rootVolumeIsSet_ = false;
}

std::vector<Volume>& NodeTemplate::getDataVolumes()
{
    return dataVolumes_;
}

void NodeTemplate::setDataVolumes(const std::vector<Volume>& value)
{
    dataVolumes_ = value;
    dataVolumesIsSet_ = true;
}

bool NodeTemplate::dataVolumesIsSet() const
{
    return dataVolumesIsSet_;
}

void NodeTemplate::unsetdataVolumes()
{
    dataVolumesIsSet_ = false;
}

Storage NodeTemplate::getStorage() const
{
    return storage_;
}

void NodeTemplate::setStorage(const Storage& value)
{
    storage_ = value;
    storageIsSet_ = true;
}

bool NodeTemplate::storageIsSet() const
{
    return storageIsSet_;
}

void NodeTemplate::unsetstorage()
{
    storageIsSet_ = false;
}

NodeEIPSpec NodeTemplate::getPublicIP() const
{
    return publicIP_;
}

void NodeTemplate::setPublicIP(const NodeEIPSpec& value)
{
    publicIP_ = value;
    publicIPIsSet_ = true;
}

bool NodeTemplate::publicIPIsSet() const
{
    return publicIPIsSet_;
}

void NodeTemplate::unsetpublicIP()
{
    publicIPIsSet_ = false;
}

NodeNicSpec NodeTemplate::getNodeNicSpec() const
{
    return nodeNicSpec_;
}

void NodeTemplate::setNodeNicSpec(const NodeNicSpec& value)
{
    nodeNicSpec_ = value;
    nodeNicSpecIsSet_ = true;
}

bool NodeTemplate::nodeNicSpecIsSet() const
{
    return nodeNicSpecIsSet_;
}

void NodeTemplate::unsetnodeNicSpec()
{
    nodeNicSpecIsSet_ = false;
}

int32_t NodeTemplate::getCount() const
{
    return count_;
}

void NodeTemplate::setCount(int32_t value)
{
    count_ = value;
    countIsSet_ = true;
}

bool NodeTemplate::countIsSet() const
{
    return countIsSet_;
}

void NodeTemplate::unsetcount()
{
    countIsSet_ = false;
}

int32_t NodeTemplate::getBillingMode() const
{
    return billingMode_;
}

void NodeTemplate::setBillingMode(int32_t value)
{
    billingMode_ = value;
    billingModeIsSet_ = true;
}

bool NodeTemplate::billingModeIsSet() const
{
    return billingModeIsSet_;
}

void NodeTemplate::unsetbillingMode()
{
    billingModeIsSet_ = false;
}

std::vector<Taint>& NodeTemplate::getTaints()
{
    return taints_;
}

void NodeTemplate::setTaints(const std::vector<Taint>& value)
{
    taints_ = value;
    taintsIsSet_ = true;
}

bool NodeTemplate::taintsIsSet() const
{
    return taintsIsSet_;
}

void NodeTemplate::unsettaints()
{
    taintsIsSet_ = false;
}

bool NodeTemplate::isWaitPostInstallFinish() const
{
    return waitPostInstallFinish_;
}

void NodeTemplate::setWaitPostInstallFinish(bool value)
{
    waitPostInstallFinish_ = value;
    waitPostInstallFinishIsSet_ = true;
}

bool NodeTemplate::waitPostInstallFinishIsSet() const
{
    return waitPostInstallFinishIsSet_;
}

void NodeTemplate::unsetwaitPostInstallFinish()
{
    waitPostInstallFinishIsSet_ = false;
}

std::map<std::string, std::string>& NodeTemplate::getK8sTags()
{
    return k8sTags_;
}

void NodeTemplate::setK8sTags(const std::map<std::string, std::string>& value)
{
    k8sTags_ = value;
    k8sTagsIsSet_ = true;
}

bool NodeTemplate::k8sTagsIsSet() const
{
    return k8sTagsIsSet_;
}

void NodeTemplate::unsetk8sTags()
{
    k8sTagsIsSet_ = false;
}

std::string NodeTemplate::getEcsGroupId() const
{
    return ecsGroupId_;
}

void NodeTemplate::setEcsGroupId(const std::string& value)
{
    ecsGroupId_ = value;
    ecsGroupIdIsSet_ = true;
}

bool NodeTemplate::ecsGroupIdIsSet() const
{
    return ecsGroupIdIsSet_;
}

void NodeTemplate::unsetecsGroupId()
{
    ecsGroupIdIsSet_ = false;
}

std::string NodeTemplate::getFaultDomain() const
{
    return faultDomain_;
}

void NodeTemplate::setFaultDomain(const std::string& value)
{
    faultDomain_ = value;
    faultDomainIsSet_ = true;
}

bool NodeTemplate::faultDomainIsSet() const
{
    return faultDomainIsSet_;
}

void NodeTemplate::unsetfaultDomain()
{
    faultDomainIsSet_ = false;
}

std::string NodeTemplate::getDedicatedHostId() const
{
    return dedicatedHostId_;
}

void NodeTemplate::setDedicatedHostId(const std::string& value)
{
    dedicatedHostId_ = value;
    dedicatedHostIdIsSet_ = true;
}

bool NodeTemplate::dedicatedHostIdIsSet() const
{
    return dedicatedHostIdIsSet_;
}

void NodeTemplate::unsetdedicatedHostId()
{
    dedicatedHostIdIsSet_ = false;
}

bool NodeTemplate::isOffloadNode() const
{
    return offloadNode_;
}

void NodeTemplate::setOffloadNode(bool value)
{
    offloadNode_ = value;
    offloadNodeIsSet_ = true;
}

bool NodeTemplate::offloadNodeIsSet() const
{
    return offloadNodeIsSet_;
}

void NodeTemplate::unsetoffloadNode()
{
    offloadNodeIsSet_ = false;
}

bool NodeTemplate::isIsStatic() const
{
    return isStatic_;
}

void NodeTemplate::setIsStatic(bool value)
{
    isStatic_ = value;
    isStaticIsSet_ = true;
}

bool NodeTemplate::isStaticIsSet() const
{
    return isStaticIsSet_;
}

void NodeTemplate::unsetisStatic()
{
    isStaticIsSet_ = false;
}

std::vector<UserTag>& NodeTemplate::getUserTags()
{
    return userTags_;
}

void NodeTemplate::setUserTags(const std::vector<UserTag>& value)
{
    userTags_ = value;
    userTagsIsSet_ = true;
}

bool NodeTemplate::userTagsIsSet() const
{
    return userTagsIsSet_;
}

void NodeTemplate::unsetuserTags()
{
    userTagsIsSet_ = false;
}

Runtime NodeTemplate::getRuntime() const
{
    return runtime_;
}

void NodeTemplate::setRuntime(const Runtime& value)
{
    runtime_ = value;
    runtimeIsSet_ = true;
}

bool NodeTemplate::runtimeIsSet() const
{
    return runtimeIsSet_;
}

void NodeTemplate::unsetruntime()
{
    runtimeIsSet_ = false;
}

std::vector<std::string>& NodeTemplate::getInitializedConditions()
{
    return initializedConditions_;
}

void NodeTemplate::setInitializedConditions(const std::vector<std::string>& value)
{
    initializedConditions_ = value;
    initializedConditionsIsSet_ = true;
}

bool NodeTemplate::initializedConditionsIsSet() const
{
    return initializedConditionsIsSet_;
}

void NodeTemplate::unsetinitializedConditions()
{
    initializedConditionsIsSet_ = false;
}

NodeExtendParam NodeTemplate::getExtendParam() const
{
    return extendParam_;
}

void NodeTemplate::setExtendParam(const NodeExtendParam& value)
{
    extendParam_ = value;
    extendParamIsSet_ = true;
}

bool NodeTemplate::extendParamIsSet() const
{
    return extendParamIsSet_;
}

void NodeTemplate::unsetextendParam()
{
    extendParamIsSet_ = false;
}

HostnameConfig NodeTemplate::getHostnameConfig() const
{
    return hostnameConfig_;
}

void NodeTemplate::setHostnameConfig(const HostnameConfig& value)
{
    hostnameConfig_ = value;
    hostnameConfigIsSet_ = true;
}

bool NodeTemplate::hostnameConfigIsSet() const
{
    return hostnameConfigIsSet_;
}

void NodeTemplate::unsethostnameConfig()
{
    hostnameConfigIsSet_ = false;
}

std::string NodeTemplate::getServerEnterpriseProjectID() const
{
    return serverEnterpriseProjectID_;
}

void NodeTemplate::setServerEnterpriseProjectID(const std::string& value)
{
    serverEnterpriseProjectID_ = value;
    serverEnterpriseProjectIDIsSet_ = true;
}

bool NodeTemplate::serverEnterpriseProjectIDIsSet() const
{
    return serverEnterpriseProjectIDIsSet_;
}

void NodeTemplate::unsetserverEnterpriseProjectID()
{
    serverEnterpriseProjectIDIsSet_ = false;
}

std::string NodeTemplate::getPartition() const
{
    return partition_;
}

void NodeTemplate::setPartition(const std::string& value)
{
    partition_ = value;
    partitionIsSet_ = true;
}

bool NodeTemplate::partitionIsSet() const
{
    return partitionIsSet_;
}

void NodeTemplate::unsetpartition()
{
    partitionIsSet_ = false;
}

NodeSpec_nodeNameTemplate NodeTemplate::getNodeNameTemplate() const
{
    return nodeNameTemplate_;
}

void NodeTemplate::setNodeNameTemplate(const NodeSpec_nodeNameTemplate& value)
{
    nodeNameTemplate_ = value;
    nodeNameTemplateIsSet_ = true;
}

bool NodeTemplate::nodeNameTemplateIsSet() const
{
    return nodeNameTemplateIsSet_;
}

void NodeTemplate::unsetnodeNameTemplate()
{
    nodeNameTemplateIsSet_ = false;
}

}
}
}
}
}


