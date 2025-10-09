

#include "huaweicloud/cce/v3/model/NodePoolSpec.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




NodePoolSpec::NodePoolSpec()
{
    type_ = "";
    typeIsSet_ = false;
    nodeTemplateIsSet_ = false;
    initialNodeCount_ = 0;
    initialNodeCountIsSet_ = false;
    autoscalingIsSet_ = false;
    nodeManagementIsSet_ = false;
    podSecurityGroupsIsSet_ = false;
    extensionScaleGroupsIsSet_ = false;
    customSecurityGroupsIsSet_ = false;
    taintPolicyOnExistingNodes_ = "";
    taintPolicyOnExistingNodesIsSet_ = false;
    labelPolicyOnExistingNodes_ = "";
    labelPolicyOnExistingNodesIsSet_ = false;
    userTagsPolicyOnExistingNodes_ = "";
    userTagsPolicyOnExistingNodesIsSet_ = false;
}

NodePoolSpec::~NodePoolSpec() = default;

void NodePoolSpec::validate()
{
}

web::json::value NodePoolSpec::toJson() const
{
    web::json::value val = web::json::value::object();

    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(nodeTemplateIsSet_) {
        val[utility::conversions::to_string_t("nodeTemplate")] = ModelBase::toJson(nodeTemplate_);
    }
    if(initialNodeCountIsSet_) {
        val[utility::conversions::to_string_t("initialNodeCount")] = ModelBase::toJson(initialNodeCount_);
    }
    if(autoscalingIsSet_) {
        val[utility::conversions::to_string_t("autoscaling")] = ModelBase::toJson(autoscaling_);
    }
    if(nodeManagementIsSet_) {
        val[utility::conversions::to_string_t("nodeManagement")] = ModelBase::toJson(nodeManagement_);
    }
    if(podSecurityGroupsIsSet_) {
        val[utility::conversions::to_string_t("podSecurityGroups")] = ModelBase::toJson(podSecurityGroups_);
    }
    if(extensionScaleGroupsIsSet_) {
        val[utility::conversions::to_string_t("extensionScaleGroups")] = ModelBase::toJson(extensionScaleGroups_);
    }
    if(customSecurityGroupsIsSet_) {
        val[utility::conversions::to_string_t("customSecurityGroups")] = ModelBase::toJson(customSecurityGroups_);
    }
    if(taintPolicyOnExistingNodesIsSet_) {
        val[utility::conversions::to_string_t("taintPolicyOnExistingNodes")] = ModelBase::toJson(taintPolicyOnExistingNodes_);
    }
    if(labelPolicyOnExistingNodesIsSet_) {
        val[utility::conversions::to_string_t("labelPolicyOnExistingNodes")] = ModelBase::toJson(labelPolicyOnExistingNodes_);
    }
    if(userTagsPolicyOnExistingNodesIsSet_) {
        val[utility::conversions::to_string_t("userTagsPolicyOnExistingNodes")] = ModelBase::toJson(userTagsPolicyOnExistingNodes_);
    }

    return val;
}
bool NodePoolSpec::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nodeTemplate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nodeTemplate"));
        if(!fieldValue.is_null())
        {
            NodeTemplate refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeTemplate(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("initialNodeCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("initialNodeCount"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInitialNodeCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("autoscaling"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("autoscaling"));
        if(!fieldValue.is_null())
        {
            NodePoolNodeAutoscaling refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAutoscaling(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nodeManagement"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nodeManagement"));
        if(!fieldValue.is_null())
        {
            NodeManagement refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeManagement(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("podSecurityGroups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("podSecurityGroups"));
        if(!fieldValue.is_null())
        {
            std::vector<SecurityID> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPodSecurityGroups(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("extensionScaleGroups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extensionScaleGroups"));
        if(!fieldValue.is_null())
        {
            std::vector<ExtensionScaleGroup> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtensionScaleGroups(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("customSecurityGroups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("customSecurityGroups"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCustomSecurityGroups(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("taintPolicyOnExistingNodes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("taintPolicyOnExistingNodes"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaintPolicyOnExistingNodes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("labelPolicyOnExistingNodes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("labelPolicyOnExistingNodes"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLabelPolicyOnExistingNodes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("userTagsPolicyOnExistingNodes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("userTagsPolicyOnExistingNodes"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserTagsPolicyOnExistingNodes(refVal);
        }
    }
    return ok;
}


std::string NodePoolSpec::getType() const
{
    return type_;
}

void NodePoolSpec::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool NodePoolSpec::typeIsSet() const
{
    return typeIsSet_;
}

void NodePoolSpec::unsettype()
{
    typeIsSet_ = false;
}

NodeTemplate NodePoolSpec::getNodeTemplate() const
{
    return nodeTemplate_;
}

void NodePoolSpec::setNodeTemplate(const NodeTemplate& value)
{
    nodeTemplate_ = value;
    nodeTemplateIsSet_ = true;
}

bool NodePoolSpec::nodeTemplateIsSet() const
{
    return nodeTemplateIsSet_;
}

void NodePoolSpec::unsetnodeTemplate()
{
    nodeTemplateIsSet_ = false;
}

int32_t NodePoolSpec::getInitialNodeCount() const
{
    return initialNodeCount_;
}

void NodePoolSpec::setInitialNodeCount(int32_t value)
{
    initialNodeCount_ = value;
    initialNodeCountIsSet_ = true;
}

bool NodePoolSpec::initialNodeCountIsSet() const
{
    return initialNodeCountIsSet_;
}

void NodePoolSpec::unsetinitialNodeCount()
{
    initialNodeCountIsSet_ = false;
}

NodePoolNodeAutoscaling NodePoolSpec::getAutoscaling() const
{
    return autoscaling_;
}

void NodePoolSpec::setAutoscaling(const NodePoolNodeAutoscaling& value)
{
    autoscaling_ = value;
    autoscalingIsSet_ = true;
}

bool NodePoolSpec::autoscalingIsSet() const
{
    return autoscalingIsSet_;
}

void NodePoolSpec::unsetautoscaling()
{
    autoscalingIsSet_ = false;
}

NodeManagement NodePoolSpec::getNodeManagement() const
{
    return nodeManagement_;
}

void NodePoolSpec::setNodeManagement(const NodeManagement& value)
{
    nodeManagement_ = value;
    nodeManagementIsSet_ = true;
}

bool NodePoolSpec::nodeManagementIsSet() const
{
    return nodeManagementIsSet_;
}

void NodePoolSpec::unsetnodeManagement()
{
    nodeManagementIsSet_ = false;
}

std::vector<SecurityID>& NodePoolSpec::getPodSecurityGroups()
{
    return podSecurityGroups_;
}

void NodePoolSpec::setPodSecurityGroups(const std::vector<SecurityID>& value)
{
    podSecurityGroups_ = value;
    podSecurityGroupsIsSet_ = true;
}

bool NodePoolSpec::podSecurityGroupsIsSet() const
{
    return podSecurityGroupsIsSet_;
}

void NodePoolSpec::unsetpodSecurityGroups()
{
    podSecurityGroupsIsSet_ = false;
}

std::vector<ExtensionScaleGroup>& NodePoolSpec::getExtensionScaleGroups()
{
    return extensionScaleGroups_;
}

void NodePoolSpec::setExtensionScaleGroups(const std::vector<ExtensionScaleGroup>& value)
{
    extensionScaleGroups_ = value;
    extensionScaleGroupsIsSet_ = true;
}

bool NodePoolSpec::extensionScaleGroupsIsSet() const
{
    return extensionScaleGroupsIsSet_;
}

void NodePoolSpec::unsetextensionScaleGroups()
{
    extensionScaleGroupsIsSet_ = false;
}

std::vector<std::string>& NodePoolSpec::getCustomSecurityGroups()
{
    return customSecurityGroups_;
}

void NodePoolSpec::setCustomSecurityGroups(const std::vector<std::string>& value)
{
    customSecurityGroups_ = value;
    customSecurityGroupsIsSet_ = true;
}

bool NodePoolSpec::customSecurityGroupsIsSet() const
{
    return customSecurityGroupsIsSet_;
}

void NodePoolSpec::unsetcustomSecurityGroups()
{
    customSecurityGroupsIsSet_ = false;
}

std::string NodePoolSpec::getTaintPolicyOnExistingNodes() const
{
    return taintPolicyOnExistingNodes_;
}

void NodePoolSpec::setTaintPolicyOnExistingNodes(const std::string& value)
{
    taintPolicyOnExistingNodes_ = value;
    taintPolicyOnExistingNodesIsSet_ = true;
}

bool NodePoolSpec::taintPolicyOnExistingNodesIsSet() const
{
    return taintPolicyOnExistingNodesIsSet_;
}

void NodePoolSpec::unsettaintPolicyOnExistingNodes()
{
    taintPolicyOnExistingNodesIsSet_ = false;
}

std::string NodePoolSpec::getLabelPolicyOnExistingNodes() const
{
    return labelPolicyOnExistingNodes_;
}

void NodePoolSpec::setLabelPolicyOnExistingNodes(const std::string& value)
{
    labelPolicyOnExistingNodes_ = value;
    labelPolicyOnExistingNodesIsSet_ = true;
}

bool NodePoolSpec::labelPolicyOnExistingNodesIsSet() const
{
    return labelPolicyOnExistingNodesIsSet_;
}

void NodePoolSpec::unsetlabelPolicyOnExistingNodes()
{
    labelPolicyOnExistingNodesIsSet_ = false;
}

std::string NodePoolSpec::getUserTagsPolicyOnExistingNodes() const
{
    return userTagsPolicyOnExistingNodes_;
}

void NodePoolSpec::setUserTagsPolicyOnExistingNodes(const std::string& value)
{
    userTagsPolicyOnExistingNodes_ = value;
    userTagsPolicyOnExistingNodesIsSet_ = true;
}

bool NodePoolSpec::userTagsPolicyOnExistingNodesIsSet() const
{
    return userTagsPolicyOnExistingNodesIsSet_;
}

void NodePoolSpec::unsetuserTagsPolicyOnExistingNodes()
{
    userTagsPolicyOnExistingNodesIsSet_ = false;
}

}
}
}
}
}


