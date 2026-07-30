

#include "huaweicloud/modelarts/v1/model/ResourceExtendParams.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Modelarts {
namespace V1 {
namespace Model {




ResourceExtendParams::ResourceExtendParams()
{
    dockerBaseSize_ = "";
    dockerBaseSizeIsSet_ = false;
    postInstall_ = "";
    postInstallIsSet_ = false;
    runtime_ = "";
    runtimeIsSet_ = false;
    labelPolicyOnExistingNodes_ = "";
    labelPolicyOnExistingNodesIsSet_ = false;
    taintPolicyOnExistingNodes_ = "";
    taintPolicyOnExistingNodesIsSet_ = false;
    tagPolicyOnExistingNodes_ = "";
    tagPolicyOnExistingNodesIsSet_ = false;
    xParameterPlaneSubnet_ = "";
    xParameterPlaneSubnetIsSet_ = false;
    nodePoolName_ = "";
    nodePoolNameIsSet_ = false;
}

ResourceExtendParams::~ResourceExtendParams() = default;

void ResourceExtendParams::validate()
{
}

web::json::value ResourceExtendParams::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dockerBaseSizeIsSet_) {
        val[utility::conversions::to_string_t("dockerBaseSize")] = ModelBase::toJson(dockerBaseSize_);
    }
    if(postInstallIsSet_) {
        val[utility::conversions::to_string_t("postInstall")] = ModelBase::toJson(postInstall_);
    }
    if(runtimeIsSet_) {
        val[utility::conversions::to_string_t("runtime")] = ModelBase::toJson(runtime_);
    }
    if(labelPolicyOnExistingNodesIsSet_) {
        val[utility::conversions::to_string_t("labelPolicyOnExistingNodes")] = ModelBase::toJson(labelPolicyOnExistingNodes_);
    }
    if(taintPolicyOnExistingNodesIsSet_) {
        val[utility::conversions::to_string_t("taintPolicyOnExistingNodes")] = ModelBase::toJson(taintPolicyOnExistingNodes_);
    }
    if(tagPolicyOnExistingNodesIsSet_) {
        val[utility::conversions::to_string_t("tagPolicyOnExistingNodes")] = ModelBase::toJson(tagPolicyOnExistingNodes_);
    }
    if(xParameterPlaneSubnetIsSet_) {
        val[utility::conversions::to_string_t("XParameterPlaneSubnet")] = ModelBase::toJson(xParameterPlaneSubnet_);
    }
    if(nodePoolNameIsSet_) {
        val[utility::conversions::to_string_t("nodePoolName")] = ModelBase::toJson(nodePoolName_);
    }

    return val;
}
bool ResourceExtendParams::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("dockerBaseSize"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dockerBaseSize"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDockerBaseSize(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("postInstall"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("postInstall"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPostInstall(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("runtime"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("runtime"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRuntime(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("taintPolicyOnExistingNodes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("taintPolicyOnExistingNodes"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTaintPolicyOnExistingNodes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("tagPolicyOnExistingNodes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("tagPolicyOnExistingNodes"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTagPolicyOnExistingNodes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("XParameterPlaneSubnet"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("XParameterPlaneSubnet"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setXParameterPlaneSubnet(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nodePoolName"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nodePoolName"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNodePoolName(refVal);
        }
    }
    return ok;
}


std::string ResourceExtendParams::getDockerBaseSize() const
{
    return dockerBaseSize_;
}

void ResourceExtendParams::setDockerBaseSize(const std::string& value)
{
    dockerBaseSize_ = value;
    dockerBaseSizeIsSet_ = true;
}

bool ResourceExtendParams::dockerBaseSizeIsSet() const
{
    return dockerBaseSizeIsSet_;
}

void ResourceExtendParams::unsetdockerBaseSize()
{
    dockerBaseSizeIsSet_ = false;
}

std::string ResourceExtendParams::getPostInstall() const
{
    return postInstall_;
}

void ResourceExtendParams::setPostInstall(const std::string& value)
{
    postInstall_ = value;
    postInstallIsSet_ = true;
}

bool ResourceExtendParams::postInstallIsSet() const
{
    return postInstallIsSet_;
}

void ResourceExtendParams::unsetpostInstall()
{
    postInstallIsSet_ = false;
}

std::string ResourceExtendParams::getRuntime() const
{
    return runtime_;
}

void ResourceExtendParams::setRuntime(const std::string& value)
{
    runtime_ = value;
    runtimeIsSet_ = true;
}

bool ResourceExtendParams::runtimeIsSet() const
{
    return runtimeIsSet_;
}

void ResourceExtendParams::unsetruntime()
{
    runtimeIsSet_ = false;
}

std::string ResourceExtendParams::getLabelPolicyOnExistingNodes() const
{
    return labelPolicyOnExistingNodes_;
}

void ResourceExtendParams::setLabelPolicyOnExistingNodes(const std::string& value)
{
    labelPolicyOnExistingNodes_ = value;
    labelPolicyOnExistingNodesIsSet_ = true;
}

bool ResourceExtendParams::labelPolicyOnExistingNodesIsSet() const
{
    return labelPolicyOnExistingNodesIsSet_;
}

void ResourceExtendParams::unsetlabelPolicyOnExistingNodes()
{
    labelPolicyOnExistingNodesIsSet_ = false;
}

std::string ResourceExtendParams::getTaintPolicyOnExistingNodes() const
{
    return taintPolicyOnExistingNodes_;
}

void ResourceExtendParams::setTaintPolicyOnExistingNodes(const std::string& value)
{
    taintPolicyOnExistingNodes_ = value;
    taintPolicyOnExistingNodesIsSet_ = true;
}

bool ResourceExtendParams::taintPolicyOnExistingNodesIsSet() const
{
    return taintPolicyOnExistingNodesIsSet_;
}

void ResourceExtendParams::unsettaintPolicyOnExistingNodes()
{
    taintPolicyOnExistingNodesIsSet_ = false;
}

std::string ResourceExtendParams::getTagPolicyOnExistingNodes() const
{
    return tagPolicyOnExistingNodes_;
}

void ResourceExtendParams::setTagPolicyOnExistingNodes(const std::string& value)
{
    tagPolicyOnExistingNodes_ = value;
    tagPolicyOnExistingNodesIsSet_ = true;
}

bool ResourceExtendParams::tagPolicyOnExistingNodesIsSet() const
{
    return tagPolicyOnExistingNodesIsSet_;
}

void ResourceExtendParams::unsettagPolicyOnExistingNodes()
{
    tagPolicyOnExistingNodesIsSet_ = false;
}

std::string ResourceExtendParams::getXParameterPlaneSubnet() const
{
    return xParameterPlaneSubnet_;
}

void ResourceExtendParams::setXParameterPlaneSubnet(const std::string& value)
{
    xParameterPlaneSubnet_ = value;
    xParameterPlaneSubnetIsSet_ = true;
}

bool ResourceExtendParams::xParameterPlaneSubnetIsSet() const
{
    return xParameterPlaneSubnetIsSet_;
}

void ResourceExtendParams::unsetxParameterPlaneSubnet()
{
    xParameterPlaneSubnetIsSet_ = false;
}

std::string ResourceExtendParams::getNodePoolName() const
{
    return nodePoolName_;
}

void ResourceExtendParams::setNodePoolName(const std::string& value)
{
    nodePoolName_ = value;
    nodePoolNameIsSet_ = true;
}

bool ResourceExtendParams::nodePoolNameIsSet() const
{
    return nodePoolNameIsSet_;
}

void ResourceExtendParams::unsetnodePoolName()
{
    nodePoolNameIsSet_ = false;
}

}
}
}
}
}


