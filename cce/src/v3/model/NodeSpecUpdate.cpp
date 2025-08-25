

#include "huaweicloud/cce/v3/model/NodeSpecUpdate.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




NodeSpecUpdate::NodeSpecUpdate()
{
    flavor_ = "";
    flavorIsSet_ = false;
    os_ = "";
    osIsSet_ = false;
    loginIsSet_ = false;
    rootVolumeUpdateIsSet_ = false;
    dataVolumesUpdateIsSet_ = false;
    storageIsSet_ = false;
    runtimeIsSet_ = false;
    taintsIsSet_ = false;
    k8sTagsIsSet_ = false;
    ecsGroupId_ = "";
    ecsGroupIdIsSet_ = false;
    userTagsIsSet_ = false;
    nodeNameTemplateIsSet_ = false;
    initializedConditionsIsSet_ = false;
    serverEnterpriseProjectID_ = "";
    serverEnterpriseProjectIDIsSet_ = false;
    nodeNicSpecUpdateIsSet_ = false;
    securityReinforcementType_ = "";
    securityReinforcementTypeIsSet_ = false;
    extendParamIsSet_ = false;
    publicIPIsSet_ = false;
}

NodeSpecUpdate::~NodeSpecUpdate() = default;

void NodeSpecUpdate::validate()
{
}

web::json::value NodeSpecUpdate::toJson() const
{
    web::json::value val = web::json::value::object();

    if(flavorIsSet_) {
        val[utility::conversions::to_string_t("flavor")] = ModelBase::toJson(flavor_);
    }
    if(osIsSet_) {
        val[utility::conversions::to_string_t("os")] = ModelBase::toJson(os_);
    }
    if(loginIsSet_) {
        val[utility::conversions::to_string_t("login")] = ModelBase::toJson(login_);
    }
    if(rootVolumeUpdateIsSet_) {
        val[utility::conversions::to_string_t("rootVolumeUpdate")] = ModelBase::toJson(rootVolumeUpdate_);
    }
    if(dataVolumesUpdateIsSet_) {
        val[utility::conversions::to_string_t("dataVolumesUpdate")] = ModelBase::toJson(dataVolumesUpdate_);
    }
    if(storageIsSet_) {
        val[utility::conversions::to_string_t("storage")] = ModelBase::toJson(storage_);
    }
    if(runtimeIsSet_) {
        val[utility::conversions::to_string_t("runtime")] = ModelBase::toJson(runtime_);
    }
    if(taintsIsSet_) {
        val[utility::conversions::to_string_t("taints")] = ModelBase::toJson(taints_);
    }
    if(k8sTagsIsSet_) {
        val[utility::conversions::to_string_t("k8sTags")] = ModelBase::toJson(k8sTags_);
    }
    if(ecsGroupIdIsSet_) {
        val[utility::conversions::to_string_t("ecsGroupId")] = ModelBase::toJson(ecsGroupId_);
    }
    if(userTagsIsSet_) {
        val[utility::conversions::to_string_t("userTags")] = ModelBase::toJson(userTags_);
    }
    if(nodeNameTemplateIsSet_) {
        val[utility::conversions::to_string_t("nodeNameTemplate")] = ModelBase::toJson(nodeNameTemplate_);
    }
    if(initializedConditionsIsSet_) {
        val[utility::conversions::to_string_t("initializedConditions")] = ModelBase::toJson(initializedConditions_);
    }
    if(serverEnterpriseProjectIDIsSet_) {
        val[utility::conversions::to_string_t("serverEnterpriseProjectID")] = ModelBase::toJson(serverEnterpriseProjectID_);
    }
    if(nodeNicSpecUpdateIsSet_) {
        val[utility::conversions::to_string_t("nodeNicSpecUpdate")] = ModelBase::toJson(nodeNicSpecUpdate_);
    }
    if(securityReinforcementTypeIsSet_) {
        val[utility::conversions::to_string_t("securityReinforcementType")] = ModelBase::toJson(securityReinforcementType_);
    }
    if(extendParamIsSet_) {
        val[utility::conversions::to_string_t("extendParam")] = ModelBase::toJson(extendParam_);
    }
    if(publicIPIsSet_) {
        val[utility::conversions::to_string_t("publicIP")] = ModelBase::toJson(publicIP_);
    }

    return val;
}
bool NodeSpecUpdate::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("rootVolumeUpdate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("rootVolumeUpdate"));
        if(!fieldValue.is_null())
        {
            Volume refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRootVolumeUpdate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dataVolumesUpdate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dataVolumesUpdate"));
        if(!fieldValue.is_null())
        {
            std::vector<Volume> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataVolumesUpdate(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("runtime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("runtime"));
        if(!fieldValue.is_null())
        {
            Runtime refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuntime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("userTags"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("userTags"));
        if(!fieldValue.is_null())
        {
            std::vector<UserTag> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserTags(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nodeNameTemplate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nodeNameTemplate"));
        if(!fieldValue.is_null())
        {
            NodeSpecUpdate_nodeNameTemplate refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeNameTemplate(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("serverEnterpriseProjectID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("serverEnterpriseProjectID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerEnterpriseProjectID(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nodeNicSpecUpdate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nodeNicSpecUpdate"));
        if(!fieldValue.is_null())
        {
            NodeSpecUpdate_nodeNicSpecUpdate refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeNicSpecUpdate(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("extendParam"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extendParam"));
        if(!fieldValue.is_null())
        {
            NodePoolUpdateExtendParam refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtendParam(refVal);
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
    return ok;
}


std::string NodeSpecUpdate::getFlavor() const
{
    return flavor_;
}

void NodeSpecUpdate::setFlavor(const std::string& value)
{
    flavor_ = value;
    flavorIsSet_ = true;
}

bool NodeSpecUpdate::flavorIsSet() const
{
    return flavorIsSet_;
}

void NodeSpecUpdate::unsetflavor()
{
    flavorIsSet_ = false;
}

std::string NodeSpecUpdate::getOs() const
{
    return os_;
}

void NodeSpecUpdate::setOs(const std::string& value)
{
    os_ = value;
    osIsSet_ = true;
}

bool NodeSpecUpdate::osIsSet() const
{
    return osIsSet_;
}

void NodeSpecUpdate::unsetos()
{
    osIsSet_ = false;
}

Login NodeSpecUpdate::getLogin() const
{
    return login_;
}

void NodeSpecUpdate::setLogin(const Login& value)
{
    login_ = value;
    loginIsSet_ = true;
}

bool NodeSpecUpdate::loginIsSet() const
{
    return loginIsSet_;
}

void NodeSpecUpdate::unsetlogin()
{
    loginIsSet_ = false;
}

Volume NodeSpecUpdate::getRootVolumeUpdate() const
{
    return rootVolumeUpdate_;
}

void NodeSpecUpdate::setRootVolumeUpdate(const Volume& value)
{
    rootVolumeUpdate_ = value;
    rootVolumeUpdateIsSet_ = true;
}

bool NodeSpecUpdate::rootVolumeUpdateIsSet() const
{
    return rootVolumeUpdateIsSet_;
}

void NodeSpecUpdate::unsetrootVolumeUpdate()
{
    rootVolumeUpdateIsSet_ = false;
}

std::vector<Volume>& NodeSpecUpdate::getDataVolumesUpdate()
{
    return dataVolumesUpdate_;
}

void NodeSpecUpdate::setDataVolumesUpdate(const std::vector<Volume>& value)
{
    dataVolumesUpdate_ = value;
    dataVolumesUpdateIsSet_ = true;
}

bool NodeSpecUpdate::dataVolumesUpdateIsSet() const
{
    return dataVolumesUpdateIsSet_;
}

void NodeSpecUpdate::unsetdataVolumesUpdate()
{
    dataVolumesUpdateIsSet_ = false;
}

Storage NodeSpecUpdate::getStorage() const
{
    return storage_;
}

void NodeSpecUpdate::setStorage(const Storage& value)
{
    storage_ = value;
    storageIsSet_ = true;
}

bool NodeSpecUpdate::storageIsSet() const
{
    return storageIsSet_;
}

void NodeSpecUpdate::unsetstorage()
{
    storageIsSet_ = false;
}

Runtime NodeSpecUpdate::getRuntime() const
{
    return runtime_;
}

void NodeSpecUpdate::setRuntime(const Runtime& value)
{
    runtime_ = value;
    runtimeIsSet_ = true;
}

bool NodeSpecUpdate::runtimeIsSet() const
{
    return runtimeIsSet_;
}

void NodeSpecUpdate::unsetruntime()
{
    runtimeIsSet_ = false;
}

std::vector<Taint>& NodeSpecUpdate::getTaints()
{
    return taints_;
}

void NodeSpecUpdate::setTaints(const std::vector<Taint>& value)
{
    taints_ = value;
    taintsIsSet_ = true;
}

bool NodeSpecUpdate::taintsIsSet() const
{
    return taintsIsSet_;
}

void NodeSpecUpdate::unsettaints()
{
    taintsIsSet_ = false;
}

std::map<std::string, std::string>& NodeSpecUpdate::getK8sTags()
{
    return k8sTags_;
}

void NodeSpecUpdate::setK8sTags(const std::map<std::string, std::string>& value)
{
    k8sTags_ = value;
    k8sTagsIsSet_ = true;
}

bool NodeSpecUpdate::k8sTagsIsSet() const
{
    return k8sTagsIsSet_;
}

void NodeSpecUpdate::unsetk8sTags()
{
    k8sTagsIsSet_ = false;
}

std::string NodeSpecUpdate::getEcsGroupId() const
{
    return ecsGroupId_;
}

void NodeSpecUpdate::setEcsGroupId(const std::string& value)
{
    ecsGroupId_ = value;
    ecsGroupIdIsSet_ = true;
}

bool NodeSpecUpdate::ecsGroupIdIsSet() const
{
    return ecsGroupIdIsSet_;
}

void NodeSpecUpdate::unsetecsGroupId()
{
    ecsGroupIdIsSet_ = false;
}

std::vector<UserTag>& NodeSpecUpdate::getUserTags()
{
    return userTags_;
}

void NodeSpecUpdate::setUserTags(const std::vector<UserTag>& value)
{
    userTags_ = value;
    userTagsIsSet_ = true;
}

bool NodeSpecUpdate::userTagsIsSet() const
{
    return userTagsIsSet_;
}

void NodeSpecUpdate::unsetuserTags()
{
    userTagsIsSet_ = false;
}

NodeSpecUpdate_nodeNameTemplate NodeSpecUpdate::getNodeNameTemplate() const
{
    return nodeNameTemplate_;
}

void NodeSpecUpdate::setNodeNameTemplate(const NodeSpecUpdate_nodeNameTemplate& value)
{
    nodeNameTemplate_ = value;
    nodeNameTemplateIsSet_ = true;
}

bool NodeSpecUpdate::nodeNameTemplateIsSet() const
{
    return nodeNameTemplateIsSet_;
}

void NodeSpecUpdate::unsetnodeNameTemplate()
{
    nodeNameTemplateIsSet_ = false;
}

std::vector<std::string>& NodeSpecUpdate::getInitializedConditions()
{
    return initializedConditions_;
}

void NodeSpecUpdate::setInitializedConditions(const std::vector<std::string>& value)
{
    initializedConditions_ = value;
    initializedConditionsIsSet_ = true;
}

bool NodeSpecUpdate::initializedConditionsIsSet() const
{
    return initializedConditionsIsSet_;
}

void NodeSpecUpdate::unsetinitializedConditions()
{
    initializedConditionsIsSet_ = false;
}

std::string NodeSpecUpdate::getServerEnterpriseProjectID() const
{
    return serverEnterpriseProjectID_;
}

void NodeSpecUpdate::setServerEnterpriseProjectID(const std::string& value)
{
    serverEnterpriseProjectID_ = value;
    serverEnterpriseProjectIDIsSet_ = true;
}

bool NodeSpecUpdate::serverEnterpriseProjectIDIsSet() const
{
    return serverEnterpriseProjectIDIsSet_;
}

void NodeSpecUpdate::unsetserverEnterpriseProjectID()
{
    serverEnterpriseProjectIDIsSet_ = false;
}

NodeSpecUpdate_nodeNicSpecUpdate NodeSpecUpdate::getNodeNicSpecUpdate() const
{
    return nodeNicSpecUpdate_;
}

void NodeSpecUpdate::setNodeNicSpecUpdate(const NodeSpecUpdate_nodeNicSpecUpdate& value)
{
    nodeNicSpecUpdate_ = value;
    nodeNicSpecUpdateIsSet_ = true;
}

bool NodeSpecUpdate::nodeNicSpecUpdateIsSet() const
{
    return nodeNicSpecUpdateIsSet_;
}

void NodeSpecUpdate::unsetnodeNicSpecUpdate()
{
    nodeNicSpecUpdateIsSet_ = false;
}

std::string NodeSpecUpdate::getSecurityReinforcementType() const
{
    return securityReinforcementType_;
}

void NodeSpecUpdate::setSecurityReinforcementType(const std::string& value)
{
    securityReinforcementType_ = value;
    securityReinforcementTypeIsSet_ = true;
}

bool NodeSpecUpdate::securityReinforcementTypeIsSet() const
{
    return securityReinforcementTypeIsSet_;
}

void NodeSpecUpdate::unsetsecurityReinforcementType()
{
    securityReinforcementTypeIsSet_ = false;
}

NodePoolUpdateExtendParam NodeSpecUpdate::getExtendParam() const
{
    return extendParam_;
}

void NodeSpecUpdate::setExtendParam(const NodePoolUpdateExtendParam& value)
{
    extendParam_ = value;
    extendParamIsSet_ = true;
}

bool NodeSpecUpdate::extendParamIsSet() const
{
    return extendParamIsSet_;
}

void NodeSpecUpdate::unsetextendParam()
{
    extendParamIsSet_ = false;
}

NodeEIPSpec NodeSpecUpdate::getPublicIP() const
{
    return publicIP_;
}

void NodeSpecUpdate::setPublicIP(const NodeEIPSpec& value)
{
    publicIP_ = value;
    publicIPIsSet_ = true;
}

bool NodeSpecUpdate::publicIPIsSet() const
{
    return publicIPIsSet_;
}

void NodeSpecUpdate::unsetpublicIP()
{
    publicIPIsSet_ = false;
}

}
}
}
}
}


