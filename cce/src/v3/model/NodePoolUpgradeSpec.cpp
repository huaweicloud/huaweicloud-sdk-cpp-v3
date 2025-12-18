

#include "huaweicloud/cce/v3/model/NodePoolUpgradeSpec.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




NodePoolUpgradeSpec::NodePoolUpgradeSpec()
{
    maxUnavailable_ = 0;
    maxUnavailableIsSet_ = false;
    force_ = false;
    forceIsSet_ = false;
    retryTimes_ = 0;
    retryTimesIsSet_ = false;
    skippedNodesIsSet_ = false;
    nodeIDsIsSet_ = false;
    nodePoolID_ = "";
    nodePoolIDIsSet_ = false;
    nodeTemplateIsSet_ = false;
    validateStorage_ = false;
    validateStorageIsSet_ = false;
}

NodePoolUpgradeSpec::~NodePoolUpgradeSpec() = default;

void NodePoolUpgradeSpec::validate()
{
}

web::json::value NodePoolUpgradeSpec::toJson() const
{
    web::json::value val = web::json::value::object();

    if(maxUnavailableIsSet_) {
        val[utility::conversions::to_string_t("maxUnavailable")] = ModelBase::toJson(maxUnavailable_);
    }
    if(forceIsSet_) {
        val[utility::conversions::to_string_t("force")] = ModelBase::toJson(force_);
    }
    if(retryTimesIsSet_) {
        val[utility::conversions::to_string_t("retryTimes")] = ModelBase::toJson(retryTimes_);
    }
    if(skippedNodesIsSet_) {
        val[utility::conversions::to_string_t("skippedNodes")] = ModelBase::toJson(skippedNodes_);
    }
    if(nodeIDsIsSet_) {
        val[utility::conversions::to_string_t("nodeIDs")] = ModelBase::toJson(nodeIDs_);
    }
    if(nodePoolIDIsSet_) {
        val[utility::conversions::to_string_t("nodePoolID")] = ModelBase::toJson(nodePoolID_);
    }
    if(nodeTemplateIsSet_) {
        val[utility::conversions::to_string_t("nodeTemplate")] = ModelBase::toJson(nodeTemplate_);
    }
    if(validateStorageIsSet_) {
        val[utility::conversions::to_string_t("validateStorage")] = ModelBase::toJson(validateStorage_);
    }

    return val;
}
bool NodePoolUpgradeSpec::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("maxUnavailable"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("maxUnavailable"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setMaxUnavailable(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("force"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("force"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setForce(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("retryTimes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("retryTimes"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRetryTimes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("skippedNodes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("skippedNodes"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSkippedNodes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nodeIDs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nodeIDs"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodeIDs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nodePoolID"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nodePoolID"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodePoolID(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("validateStorage"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("validateStorage"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValidateStorage(refVal);
        }
    }
    return ok;
}


int32_t NodePoolUpgradeSpec::getMaxUnavailable() const
{
    return maxUnavailable_;
}

void NodePoolUpgradeSpec::setMaxUnavailable(int32_t value)
{
    maxUnavailable_ = value;
    maxUnavailableIsSet_ = true;
}

bool NodePoolUpgradeSpec::maxUnavailableIsSet() const
{
    return maxUnavailableIsSet_;
}

void NodePoolUpgradeSpec::unsetmaxUnavailable()
{
    maxUnavailableIsSet_ = false;
}

bool NodePoolUpgradeSpec::isForce() const
{
    return force_;
}

void NodePoolUpgradeSpec::setForce(bool value)
{
    force_ = value;
    forceIsSet_ = true;
}

bool NodePoolUpgradeSpec::forceIsSet() const
{
    return forceIsSet_;
}

void NodePoolUpgradeSpec::unsetforce()
{
    forceIsSet_ = false;
}

int32_t NodePoolUpgradeSpec::getRetryTimes() const
{
    return retryTimes_;
}

void NodePoolUpgradeSpec::setRetryTimes(int32_t value)
{
    retryTimes_ = value;
    retryTimesIsSet_ = true;
}

bool NodePoolUpgradeSpec::retryTimesIsSet() const
{
    return retryTimesIsSet_;
}

void NodePoolUpgradeSpec::unsetretryTimes()
{
    retryTimesIsSet_ = false;
}

std::vector<std::string>& NodePoolUpgradeSpec::getSkippedNodes()
{
    return skippedNodes_;
}

void NodePoolUpgradeSpec::setSkippedNodes(const std::vector<std::string>& value)
{
    skippedNodes_ = value;
    skippedNodesIsSet_ = true;
}

bool NodePoolUpgradeSpec::skippedNodesIsSet() const
{
    return skippedNodesIsSet_;
}

void NodePoolUpgradeSpec::unsetskippedNodes()
{
    skippedNodesIsSet_ = false;
}

std::vector<std::string>& NodePoolUpgradeSpec::getNodeIDs()
{
    return nodeIDs_;
}

void NodePoolUpgradeSpec::setNodeIDs(const std::vector<std::string>& value)
{
    nodeIDs_ = value;
    nodeIDsIsSet_ = true;
}

bool NodePoolUpgradeSpec::nodeIDsIsSet() const
{
    return nodeIDsIsSet_;
}

void NodePoolUpgradeSpec::unsetnodeIDs()
{
    nodeIDsIsSet_ = false;
}

std::string NodePoolUpgradeSpec::getNodePoolID() const
{
    return nodePoolID_;
}

void NodePoolUpgradeSpec::setNodePoolID(const std::string& value)
{
    nodePoolID_ = value;
    nodePoolIDIsSet_ = true;
}

bool NodePoolUpgradeSpec::nodePoolIDIsSet() const
{
    return nodePoolIDIsSet_;
}

void NodePoolUpgradeSpec::unsetnodePoolID()
{
    nodePoolIDIsSet_ = false;
}

NodeTemplate NodePoolUpgradeSpec::getNodeTemplate() const
{
    return nodeTemplate_;
}

void NodePoolUpgradeSpec::setNodeTemplate(const NodeTemplate& value)
{
    nodeTemplate_ = value;
    nodeTemplateIsSet_ = true;
}

bool NodePoolUpgradeSpec::nodeTemplateIsSet() const
{
    return nodeTemplateIsSet_;
}

void NodePoolUpgradeSpec::unsetnodeTemplate()
{
    nodeTemplateIsSet_ = false;
}

bool NodePoolUpgradeSpec::isValidateStorage() const
{
    return validateStorage_;
}

void NodePoolUpgradeSpec::setValidateStorage(bool value)
{
    validateStorage_ = value;
    validateStorageIsSet_ = true;
}

bool NodePoolUpgradeSpec::validateStorageIsSet() const
{
    return validateStorageIsSet_;
}

void NodePoolUpgradeSpec::unsetvalidateStorage()
{
    validateStorageIsSet_ = false;
}

}
}
}
}
}


