

#include "huaweicloud/tics/v1/model/TicsAgentDeployDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Tics {
namespace V1 {
namespace Model {




TicsAgentDeployDetail::TicsAgentDeployDetail()
{
    agentAccessAddress_ = "";
    agentAccessAddressIsSet_ = false;
    agentId_ = "";
    agentIdIsSet_ = false;
    cceClusterId_ = "";
    cceClusterIdIsSet_ = false;
    cceClusterName_ = "";
    cceClusterNameIsSet_ = false;
    consoleIp_ = "";
    consoleIpIsSet_ = false;
    consolePort_ = 0;
    consolePortIsSet_ = false;
    hostPath_ = "";
    hostPathIsSet_ = false;
    iefInstanceId_ = "";
    iefInstanceIdIsSet_ = false;
    namespaceName_ = "";
    namespaceNameIsSet_ = false;
    obsPvcName_ = "";
    obsPvcNameIsSet_ = false;
    persistenceId_ = "";
    persistenceIdIsSet_ = false;
    resourceSpecCode_ = "";
    resourceSpecCodeIsSet_ = false;
    webPort_ = 0;
    webPortIsSet_ = false;
}

TicsAgentDeployDetail::~TicsAgentDeployDetail() = default;

void TicsAgentDeployDetail::validate()
{
}

web::json::value TicsAgentDeployDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(agentAccessAddressIsSet_) {
        val[utility::conversions::to_string_t("agent_access_address")] = ModelBase::toJson(agentAccessAddress_);
    }
    if(agentIdIsSet_) {
        val[utility::conversions::to_string_t("agent_id")] = ModelBase::toJson(agentId_);
    }
    if(cceClusterIdIsSet_) {
        val[utility::conversions::to_string_t("cce_cluster_id")] = ModelBase::toJson(cceClusterId_);
    }
    if(cceClusterNameIsSet_) {
        val[utility::conversions::to_string_t("cce_cluster_name")] = ModelBase::toJson(cceClusterName_);
    }
    if(consoleIpIsSet_) {
        val[utility::conversions::to_string_t("console_ip")] = ModelBase::toJson(consoleIp_);
    }
    if(consolePortIsSet_) {
        val[utility::conversions::to_string_t("console_port")] = ModelBase::toJson(consolePort_);
    }
    if(hostPathIsSet_) {
        val[utility::conversions::to_string_t("host_path")] = ModelBase::toJson(hostPath_);
    }
    if(iefInstanceIdIsSet_) {
        val[utility::conversions::to_string_t("ief_instance_id")] = ModelBase::toJson(iefInstanceId_);
    }
    if(namespaceNameIsSet_) {
        val[utility::conversions::to_string_t("namespace_name")] = ModelBase::toJson(namespaceName_);
    }
    if(obsPvcNameIsSet_) {
        val[utility::conversions::to_string_t("obs_pvc_name")] = ModelBase::toJson(obsPvcName_);
    }
    if(persistenceIdIsSet_) {
        val[utility::conversions::to_string_t("persistence_id")] = ModelBase::toJson(persistenceId_);
    }
    if(resourceSpecCodeIsSet_) {
        val[utility::conversions::to_string_t("resource_spec_code")] = ModelBase::toJson(resourceSpecCode_);
    }
    if(webPortIsSet_) {
        val[utility::conversions::to_string_t("web_port")] = ModelBase::toJson(webPort_);
    }

    return val;
}
bool TicsAgentDeployDetail::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("agent_access_address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agent_access_address"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAgentAccessAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("agent_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("agent_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAgentId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cce_cluster_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cce_cluster_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCceClusterId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("cce_cluster_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("cce_cluster_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCceClusterName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("console_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("console_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConsoleIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("console_port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("console_port"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConsolePort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("host_path"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("host_path"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHostPath(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ief_instance_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ief_instance_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIefInstanceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("namespace_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("namespace_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNamespaceName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("obs_pvc_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("obs_pvc_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setObsPvcName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("persistence_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("persistence_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPersistenceId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_spec_code"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_spec_code"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourceSpecCode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("web_port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("web_port"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setWebPort(refVal);
        }
    }
    return ok;
}


std::string TicsAgentDeployDetail::getAgentAccessAddress() const
{
    return agentAccessAddress_;
}

void TicsAgentDeployDetail::setAgentAccessAddress(const std::string& value)
{
    agentAccessAddress_ = value;
    agentAccessAddressIsSet_ = true;
}

bool TicsAgentDeployDetail::agentAccessAddressIsSet() const
{
    return agentAccessAddressIsSet_;
}

void TicsAgentDeployDetail::unsetagentAccessAddress()
{
    agentAccessAddressIsSet_ = false;
}

std::string TicsAgentDeployDetail::getAgentId() const
{
    return agentId_;
}

void TicsAgentDeployDetail::setAgentId(const std::string& value)
{
    agentId_ = value;
    agentIdIsSet_ = true;
}

bool TicsAgentDeployDetail::agentIdIsSet() const
{
    return agentIdIsSet_;
}

void TicsAgentDeployDetail::unsetagentId()
{
    agentIdIsSet_ = false;
}

std::string TicsAgentDeployDetail::getCceClusterId() const
{
    return cceClusterId_;
}

void TicsAgentDeployDetail::setCceClusterId(const std::string& value)
{
    cceClusterId_ = value;
    cceClusterIdIsSet_ = true;
}

bool TicsAgentDeployDetail::cceClusterIdIsSet() const
{
    return cceClusterIdIsSet_;
}

void TicsAgentDeployDetail::unsetcceClusterId()
{
    cceClusterIdIsSet_ = false;
}

std::string TicsAgentDeployDetail::getCceClusterName() const
{
    return cceClusterName_;
}

void TicsAgentDeployDetail::setCceClusterName(const std::string& value)
{
    cceClusterName_ = value;
    cceClusterNameIsSet_ = true;
}

bool TicsAgentDeployDetail::cceClusterNameIsSet() const
{
    return cceClusterNameIsSet_;
}

void TicsAgentDeployDetail::unsetcceClusterName()
{
    cceClusterNameIsSet_ = false;
}

std::string TicsAgentDeployDetail::getConsoleIp() const
{
    return consoleIp_;
}

void TicsAgentDeployDetail::setConsoleIp(const std::string& value)
{
    consoleIp_ = value;
    consoleIpIsSet_ = true;
}

bool TicsAgentDeployDetail::consoleIpIsSet() const
{
    return consoleIpIsSet_;
}

void TicsAgentDeployDetail::unsetconsoleIp()
{
    consoleIpIsSet_ = false;
}

int32_t TicsAgentDeployDetail::getConsolePort() const
{
    return consolePort_;
}

void TicsAgentDeployDetail::setConsolePort(int32_t value)
{
    consolePort_ = value;
    consolePortIsSet_ = true;
}

bool TicsAgentDeployDetail::consolePortIsSet() const
{
    return consolePortIsSet_;
}

void TicsAgentDeployDetail::unsetconsolePort()
{
    consolePortIsSet_ = false;
}

std::string TicsAgentDeployDetail::getHostPath() const
{
    return hostPath_;
}

void TicsAgentDeployDetail::setHostPath(const std::string& value)
{
    hostPath_ = value;
    hostPathIsSet_ = true;
}

bool TicsAgentDeployDetail::hostPathIsSet() const
{
    return hostPathIsSet_;
}

void TicsAgentDeployDetail::unsethostPath()
{
    hostPathIsSet_ = false;
}

std::string TicsAgentDeployDetail::getIefInstanceId() const
{
    return iefInstanceId_;
}

void TicsAgentDeployDetail::setIefInstanceId(const std::string& value)
{
    iefInstanceId_ = value;
    iefInstanceIdIsSet_ = true;
}

bool TicsAgentDeployDetail::iefInstanceIdIsSet() const
{
    return iefInstanceIdIsSet_;
}

void TicsAgentDeployDetail::unsetiefInstanceId()
{
    iefInstanceIdIsSet_ = false;
}

std::string TicsAgentDeployDetail::getNamespaceName() const
{
    return namespaceName_;
}

void TicsAgentDeployDetail::setNamespaceName(const std::string& value)
{
    namespaceName_ = value;
    namespaceNameIsSet_ = true;
}

bool TicsAgentDeployDetail::namespaceNameIsSet() const
{
    return namespaceNameIsSet_;
}

void TicsAgentDeployDetail::unsetnamespaceName()
{
    namespaceNameIsSet_ = false;
}

std::string TicsAgentDeployDetail::getObsPvcName() const
{
    return obsPvcName_;
}

void TicsAgentDeployDetail::setObsPvcName(const std::string& value)
{
    obsPvcName_ = value;
    obsPvcNameIsSet_ = true;
}

bool TicsAgentDeployDetail::obsPvcNameIsSet() const
{
    return obsPvcNameIsSet_;
}

void TicsAgentDeployDetail::unsetobsPvcName()
{
    obsPvcNameIsSet_ = false;
}

std::string TicsAgentDeployDetail::getPersistenceId() const
{
    return persistenceId_;
}

void TicsAgentDeployDetail::setPersistenceId(const std::string& value)
{
    persistenceId_ = value;
    persistenceIdIsSet_ = true;
}

bool TicsAgentDeployDetail::persistenceIdIsSet() const
{
    return persistenceIdIsSet_;
}

void TicsAgentDeployDetail::unsetpersistenceId()
{
    persistenceIdIsSet_ = false;
}

std::string TicsAgentDeployDetail::getResourceSpecCode() const
{
    return resourceSpecCode_;
}

void TicsAgentDeployDetail::setResourceSpecCode(const std::string& value)
{
    resourceSpecCode_ = value;
    resourceSpecCodeIsSet_ = true;
}

bool TicsAgentDeployDetail::resourceSpecCodeIsSet() const
{
    return resourceSpecCodeIsSet_;
}

void TicsAgentDeployDetail::unsetresourceSpecCode()
{
    resourceSpecCodeIsSet_ = false;
}

int32_t TicsAgentDeployDetail::getWebPort() const
{
    return webPort_;
}

void TicsAgentDeployDetail::setWebPort(int32_t value)
{
    webPort_ = value;
    webPortIsSet_ = true;
}

bool TicsAgentDeployDetail::webPortIsSet() const
{
    return webPortIsSet_;
}

void TicsAgentDeployDetail::unsetwebPort()
{
    webPortIsSet_ = false;
}

}
}
}
}
}


