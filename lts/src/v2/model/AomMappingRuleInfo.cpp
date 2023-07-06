

#include "huaweicloud/lts/v2/model/AomMappingRuleInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Lts {
namespace V2 {
namespace Model {




AomMappingRuleInfo::AomMappingRuleInfo()
{
    clusterId_ = "";
    clusterIdIsSet_ = false;
    clusterName_ = "";
    clusterNameIsSet_ = false;
    deploymentsPrefix_ = "";
    deploymentsPrefixIsSet_ = false;
    deploymentsIsSet_ = false;
    namespace_ = "";
    namespaceIsSet_ = false;
    containerName_ = "";
    containerNameIsSet_ = false;
    filesIsSet_ = false;
}

AomMappingRuleInfo::~AomMappingRuleInfo() = default;

void AomMappingRuleInfo::validate()
{
}

web::json::value AomMappingRuleInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(clusterIdIsSet_) {
        val[utility::conversions::to_string_t("cluster_id")] = ModelBase::toJson(clusterId_);
    }
    if(clusterNameIsSet_) {
        val[utility::conversions::to_string_t("cluster_name")] = ModelBase::toJson(clusterName_);
    }
    if(deploymentsPrefixIsSet_) {
        val[utility::conversions::to_string_t("deployments_prefix")] = ModelBase::toJson(deploymentsPrefix_);
    }
    if(deploymentsIsSet_) {
        val[utility::conversions::to_string_t("deployments")] = ModelBase::toJson(deployments_);
    }
    if(namespaceIsSet_) {
        val[utility::conversions::to_string_t("namespace")] = ModelBase::toJson(namespace_);
    }
    if(containerNameIsSet_) {
        val[utility::conversions::to_string_t("container_name")] = ModelBase::toJson(containerName_);
    }
    if(filesIsSet_) {
        val[utility::conversions::to_string_t("files")] = ModelBase::toJson(files_);
    }

    return val;
}

bool AomMappingRuleInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("cluster_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cluster_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cluster_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cluster_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClusterName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deployments_prefix"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deployments_prefix"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeploymentsPrefix(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deployments"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deployments"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeployments(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("namespace"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("namespace"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNamespace(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("container_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("container_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setContainerName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("files"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("files"));
        if(!fieldValue.is_null())
        {
            std::vector<AomMappingfilesInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFiles(refVal);
        }
    }
    return ok;
}

std::string AomMappingRuleInfo::getClusterId() const
{
    return clusterId_;
}

void AomMappingRuleInfo::setClusterId(const std::string& value)
{
    clusterId_ = value;
    clusterIdIsSet_ = true;
}

bool AomMappingRuleInfo::clusterIdIsSet() const
{
    return clusterIdIsSet_;
}

void AomMappingRuleInfo::unsetclusterId()
{
    clusterIdIsSet_ = false;
}

std::string AomMappingRuleInfo::getClusterName() const
{
    return clusterName_;
}

void AomMappingRuleInfo::setClusterName(const std::string& value)
{
    clusterName_ = value;
    clusterNameIsSet_ = true;
}

bool AomMappingRuleInfo::clusterNameIsSet() const
{
    return clusterNameIsSet_;
}

void AomMappingRuleInfo::unsetclusterName()
{
    clusterNameIsSet_ = false;
}

std::string AomMappingRuleInfo::getDeploymentsPrefix() const
{
    return deploymentsPrefix_;
}

void AomMappingRuleInfo::setDeploymentsPrefix(const std::string& value)
{
    deploymentsPrefix_ = value;
    deploymentsPrefixIsSet_ = true;
}

bool AomMappingRuleInfo::deploymentsPrefixIsSet() const
{
    return deploymentsPrefixIsSet_;
}

void AomMappingRuleInfo::unsetdeploymentsPrefix()
{
    deploymentsPrefixIsSet_ = false;
}

std::vector<std::string>& AomMappingRuleInfo::getDeployments()
{
    return deployments_;
}

void AomMappingRuleInfo::setDeployments(const std::vector<std::string>& value)
{
    deployments_ = value;
    deploymentsIsSet_ = true;
}

bool AomMappingRuleInfo::deploymentsIsSet() const
{
    return deploymentsIsSet_;
}

void AomMappingRuleInfo::unsetdeployments()
{
    deploymentsIsSet_ = false;
}

std::string AomMappingRuleInfo::getNamespace() const
{
    return namespace_;
}

void AomMappingRuleInfo::setNamespace(const std::string& value)
{
    namespace_ = value;
    namespaceIsSet_ = true;
}

bool AomMappingRuleInfo::namespaceIsSet() const
{
    return namespaceIsSet_;
}

void AomMappingRuleInfo::unsetnamespace()
{
    namespaceIsSet_ = false;
}

std::string AomMappingRuleInfo::getContainerName() const
{
    return containerName_;
}

void AomMappingRuleInfo::setContainerName(const std::string& value)
{
    containerName_ = value;
    containerNameIsSet_ = true;
}

bool AomMappingRuleInfo::containerNameIsSet() const
{
    return containerNameIsSet_;
}

void AomMappingRuleInfo::unsetcontainerName()
{
    containerNameIsSet_ = false;
}

std::vector<AomMappingfilesInfo>& AomMappingRuleInfo::getFiles()
{
    return files_;
}

void AomMappingRuleInfo::setFiles(const std::vector<AomMappingfilesInfo>& value)
{
    files_ = value;
    filesIsSet_ = true;
}

bool AomMappingRuleInfo::filesIsSet() const
{
    return filesIsSet_;
}

void AomMappingRuleInfo::unsetfiles()
{
    filesIsSet_ = false;
}

}
}
}
}
}


