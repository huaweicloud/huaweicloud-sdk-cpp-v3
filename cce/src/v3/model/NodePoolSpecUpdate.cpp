

#include "huaweicloud/cce/v3/model/NodePoolSpecUpdate.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




NodePoolSpecUpdate::NodePoolSpecUpdate()
{
    nodeTemplateIsSet_ = false;
    initialNodeCount_ = 0;
    initialNodeCountIsSet_ = false;
    ignoreInitialNodeCount_ = false;
    ignoreInitialNodeCountIsSet_ = false;
    autoscalingIsSet_ = false;
    nodeManagementUpdateIsSet_ = false;
    taintPolicyOnExistingNodes_ = "";
    taintPolicyOnExistingNodesIsSet_ = false;
    labelPolicyOnExistingNodes_ = "";
    labelPolicyOnExistingNodesIsSet_ = false;
    userTagsPolicyOnExistingNodes_ = "";
    userTagsPolicyOnExistingNodesIsSet_ = false;
    extensionScaleGroupsIsSet_ = false;
}

NodePoolSpecUpdate::~NodePoolSpecUpdate() = default;

void NodePoolSpecUpdate::validate()
{
}

web::json::value NodePoolSpecUpdate::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nodeTemplateIsSet_) {
        val[utility::conversions::to_string_t("nodeTemplate")] = ModelBase::toJson(nodeTemplate_);
    }
    if(initialNodeCountIsSet_) {
        val[utility::conversions::to_string_t("initialNodeCount")] = ModelBase::toJson(initialNodeCount_);
    }
    if(ignoreInitialNodeCountIsSet_) {
        val[utility::conversions::to_string_t("ignoreInitialNodeCount")] = ModelBase::toJson(ignoreInitialNodeCount_);
    }
    if(autoscalingIsSet_) {
        val[utility::conversions::to_string_t("autoscaling")] = ModelBase::toJson(autoscaling_);
    }
    if(nodeManagementUpdateIsSet_) {
        val[utility::conversions::to_string_t("nodeManagementUpdate")] = ModelBase::toJson(nodeManagementUpdate_);
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
    if(extensionScaleGroupsIsSet_) {
        val[utility::conversions::to_string_t("extensionScaleGroups")] = ModelBase::toJson(extensionScaleGroups_);
    }

    return val;
}
bool NodePoolSpecUpdate::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("nodeTemplate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nodeTemplate"));
        if(!fieldValue.is_null())
        {
            NodeSpecUpdate refVal;
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
    if(val.has_field(utility::conversions::to_string_t("ignoreInitialNodeCount"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ignoreInitialNodeCount"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIgnoreInitialNodeCount(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("nodeManagementUpdate"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nodeManagementUpdate"));
        if(!fieldValue.is_null())
        {
            NodeManagement refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeManagementUpdate(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("extensionScaleGroups"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("extensionScaleGroups"));
        if(!fieldValue.is_null())
        {
            std::vector<ExtensionScaleGroup> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setExtensionScaleGroups(refVal);
        }
    }
    return ok;
}


NodeSpecUpdate NodePoolSpecUpdate::getNodeTemplate() const
{
    return nodeTemplate_;
}

void NodePoolSpecUpdate::setNodeTemplate(const NodeSpecUpdate& value)
{
    nodeTemplate_ = value;
    nodeTemplateIsSet_ = true;
}

bool NodePoolSpecUpdate::nodeTemplateIsSet() const
{
    return nodeTemplateIsSet_;
}

void NodePoolSpecUpdate::unsetnodeTemplate()
{
    nodeTemplateIsSet_ = false;
}

int32_t NodePoolSpecUpdate::getInitialNodeCount() const
{
    return initialNodeCount_;
}

void NodePoolSpecUpdate::setInitialNodeCount(int32_t value)
{
    initialNodeCount_ = value;
    initialNodeCountIsSet_ = true;
}

bool NodePoolSpecUpdate::initialNodeCountIsSet() const
{
    return initialNodeCountIsSet_;
}

void NodePoolSpecUpdate::unsetinitialNodeCount()
{
    initialNodeCountIsSet_ = false;
}

bool NodePoolSpecUpdate::isIgnoreInitialNodeCount() const
{
    return ignoreInitialNodeCount_;
}

void NodePoolSpecUpdate::setIgnoreInitialNodeCount(bool value)
{
    ignoreInitialNodeCount_ = value;
    ignoreInitialNodeCountIsSet_ = true;
}

bool NodePoolSpecUpdate::ignoreInitialNodeCountIsSet() const
{
    return ignoreInitialNodeCountIsSet_;
}

void NodePoolSpecUpdate::unsetignoreInitialNodeCount()
{
    ignoreInitialNodeCountIsSet_ = false;
}

NodePoolNodeAutoscaling NodePoolSpecUpdate::getAutoscaling() const
{
    return autoscaling_;
}

void NodePoolSpecUpdate::setAutoscaling(const NodePoolNodeAutoscaling& value)
{
    autoscaling_ = value;
    autoscalingIsSet_ = true;
}

bool NodePoolSpecUpdate::autoscalingIsSet() const
{
    return autoscalingIsSet_;
}

void NodePoolSpecUpdate::unsetautoscaling()
{
    autoscalingIsSet_ = false;
}

NodeManagement NodePoolSpecUpdate::getNodeManagementUpdate() const
{
    return nodeManagementUpdate_;
}

void NodePoolSpecUpdate::setNodeManagementUpdate(const NodeManagement& value)
{
    nodeManagementUpdate_ = value;
    nodeManagementUpdateIsSet_ = true;
}

bool NodePoolSpecUpdate::nodeManagementUpdateIsSet() const
{
    return nodeManagementUpdateIsSet_;
}

void NodePoolSpecUpdate::unsetnodeManagementUpdate()
{
    nodeManagementUpdateIsSet_ = false;
}

std::string NodePoolSpecUpdate::getTaintPolicyOnExistingNodes() const
{
    return taintPolicyOnExistingNodes_;
}

void NodePoolSpecUpdate::setTaintPolicyOnExistingNodes(const std::string& value)
{
    taintPolicyOnExistingNodes_ = value;
    taintPolicyOnExistingNodesIsSet_ = true;
}

bool NodePoolSpecUpdate::taintPolicyOnExistingNodesIsSet() const
{
    return taintPolicyOnExistingNodesIsSet_;
}

void NodePoolSpecUpdate::unsettaintPolicyOnExistingNodes()
{
    taintPolicyOnExistingNodesIsSet_ = false;
}

std::string NodePoolSpecUpdate::getLabelPolicyOnExistingNodes() const
{
    return labelPolicyOnExistingNodes_;
}

void NodePoolSpecUpdate::setLabelPolicyOnExistingNodes(const std::string& value)
{
    labelPolicyOnExistingNodes_ = value;
    labelPolicyOnExistingNodesIsSet_ = true;
}

bool NodePoolSpecUpdate::labelPolicyOnExistingNodesIsSet() const
{
    return labelPolicyOnExistingNodesIsSet_;
}

void NodePoolSpecUpdate::unsetlabelPolicyOnExistingNodes()
{
    labelPolicyOnExistingNodesIsSet_ = false;
}

std::string NodePoolSpecUpdate::getUserTagsPolicyOnExistingNodes() const
{
    return userTagsPolicyOnExistingNodes_;
}

void NodePoolSpecUpdate::setUserTagsPolicyOnExistingNodes(const std::string& value)
{
    userTagsPolicyOnExistingNodes_ = value;
    userTagsPolicyOnExistingNodesIsSet_ = true;
}

bool NodePoolSpecUpdate::userTagsPolicyOnExistingNodesIsSet() const
{
    return userTagsPolicyOnExistingNodesIsSet_;
}

void NodePoolSpecUpdate::unsetuserTagsPolicyOnExistingNodes()
{
    userTagsPolicyOnExistingNodesIsSet_ = false;
}

std::vector<ExtensionScaleGroup>& NodePoolSpecUpdate::getExtensionScaleGroups()
{
    return extensionScaleGroups_;
}

void NodePoolSpecUpdate::setExtensionScaleGroups(const std::vector<ExtensionScaleGroup>& value)
{
    extensionScaleGroups_ = value;
    extensionScaleGroupsIsSet_ = true;
}

bool NodePoolSpecUpdate::extensionScaleGroupsIsSet() const
{
    return extensionScaleGroupsIsSet_;
}

void NodePoolSpecUpdate::unsetextensionScaleGroups()
{
    extensionScaleGroupsIsSet_ = false;
}

}
}
}
}
}


