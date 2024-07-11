

#include "huaweicloud/codeartsdeploy/v2/model/DeploymentHostRequestExternal.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




DeploymentHostRequestExternal::DeploymentHostRequestExternal()
{
    asProxy_ = false;
    asProxyIsSet_ = false;
    authorizationIsSet_ = false;
    hostName_ = "";
    hostNameIsSet_ = false;
    ip_ = "";
    ipIsSet_ = false;
    port_ = 0;
    portIsSet_ = false;
    proxyHostId_ = "";
    proxyHostIdIsSet_ = false;
    sync_ = false;
    syncIsSet_ = false;
    installIcagent_ = false;
    installIcagentIsSet_ = false;
}

DeploymentHostRequestExternal::~DeploymentHostRequestExternal() = default;

void DeploymentHostRequestExternal::validate()
{
}

web::json::value DeploymentHostRequestExternal::toJson() const
{
    web::json::value val = web::json::value::object();

    if(asProxyIsSet_) {
        val[utility::conversions::to_string_t("as_proxy")] = ModelBase::toJson(asProxy_);
    }
    if(authorizationIsSet_) {
        val[utility::conversions::to_string_t("authorization")] = ModelBase::toJson(authorization_);
    }
    if(hostNameIsSet_) {
        val[utility::conversions::to_string_t("host_name")] = ModelBase::toJson(hostName_);
    }
    if(ipIsSet_) {
        val[utility::conversions::to_string_t("ip")] = ModelBase::toJson(ip_);
    }
    if(portIsSet_) {
        val[utility::conversions::to_string_t("port")] = ModelBase::toJson(port_);
    }
    if(proxyHostIdIsSet_) {
        val[utility::conversions::to_string_t("proxy_host_id")] = ModelBase::toJson(proxyHostId_);
    }
    if(syncIsSet_) {
        val[utility::conversions::to_string_t("sync")] = ModelBase::toJson(sync_);
    }
    if(installIcagentIsSet_) {
        val[utility::conversions::to_string_t("install_icagent")] = ModelBase::toJson(installIcagent_);
    }

    return val;
}
bool DeploymentHostRequestExternal::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("as_proxy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("as_proxy"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAsProxy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("authorization"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("authorization"));
        if(!fieldValue.is_null())
        {
            DeploymentHostAuthorizationBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorization(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("host_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("host_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHostName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("proxy_host_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("proxy_host_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProxyHostId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("sync"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sync"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSync(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("install_icagent"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("install_icagent"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstallIcagent(refVal);
        }
    }
    return ok;
}


bool DeploymentHostRequestExternal::isAsProxy() const
{
    return asProxy_;
}

void DeploymentHostRequestExternal::setAsProxy(bool value)
{
    asProxy_ = value;
    asProxyIsSet_ = true;
}

bool DeploymentHostRequestExternal::asProxyIsSet() const
{
    return asProxyIsSet_;
}

void DeploymentHostRequestExternal::unsetasProxy()
{
    asProxyIsSet_ = false;
}

DeploymentHostAuthorizationBody DeploymentHostRequestExternal::getAuthorization() const
{
    return authorization_;
}

void DeploymentHostRequestExternal::setAuthorization(const DeploymentHostAuthorizationBody& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool DeploymentHostRequestExternal::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void DeploymentHostRequestExternal::unsetauthorization()
{
    authorizationIsSet_ = false;
}

std::string DeploymentHostRequestExternal::getHostName() const
{
    return hostName_;
}

void DeploymentHostRequestExternal::setHostName(const std::string& value)
{
    hostName_ = value;
    hostNameIsSet_ = true;
}

bool DeploymentHostRequestExternal::hostNameIsSet() const
{
    return hostNameIsSet_;
}

void DeploymentHostRequestExternal::unsethostName()
{
    hostNameIsSet_ = false;
}

std::string DeploymentHostRequestExternal::getIp() const
{
    return ip_;
}

void DeploymentHostRequestExternal::setIp(const std::string& value)
{
    ip_ = value;
    ipIsSet_ = true;
}

bool DeploymentHostRequestExternal::ipIsSet() const
{
    return ipIsSet_;
}

void DeploymentHostRequestExternal::unsetip()
{
    ipIsSet_ = false;
}

int32_t DeploymentHostRequestExternal::getPort() const
{
    return port_;
}

void DeploymentHostRequestExternal::setPort(int32_t value)
{
    port_ = value;
    portIsSet_ = true;
}

bool DeploymentHostRequestExternal::portIsSet() const
{
    return portIsSet_;
}

void DeploymentHostRequestExternal::unsetport()
{
    portIsSet_ = false;
}

std::string DeploymentHostRequestExternal::getProxyHostId() const
{
    return proxyHostId_;
}

void DeploymentHostRequestExternal::setProxyHostId(const std::string& value)
{
    proxyHostId_ = value;
    proxyHostIdIsSet_ = true;
}

bool DeploymentHostRequestExternal::proxyHostIdIsSet() const
{
    return proxyHostIdIsSet_;
}

void DeploymentHostRequestExternal::unsetproxyHostId()
{
    proxyHostIdIsSet_ = false;
}

bool DeploymentHostRequestExternal::isSync() const
{
    return sync_;
}

void DeploymentHostRequestExternal::setSync(bool value)
{
    sync_ = value;
    syncIsSet_ = true;
}

bool DeploymentHostRequestExternal::syncIsSet() const
{
    return syncIsSet_;
}

void DeploymentHostRequestExternal::unsetsync()
{
    syncIsSet_ = false;
}

bool DeploymentHostRequestExternal::isInstallIcagent() const
{
    return installIcagent_;
}

void DeploymentHostRequestExternal::setInstallIcagent(bool value)
{
    installIcagent_ = value;
    installIcagentIsSet_ = true;
}

bool DeploymentHostRequestExternal::installIcagentIsSet() const
{
    return installIcagentIsSet_;
}

void DeploymentHostRequestExternal::unsetinstallIcagent()
{
    installIcagentIsSet_ = false;
}

}
}
}
}
}


