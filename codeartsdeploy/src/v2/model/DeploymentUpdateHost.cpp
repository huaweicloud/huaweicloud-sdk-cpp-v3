

#include "huaweicloud/codeartsdeploy/v2/model/DeploymentUpdateHost.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




DeploymentUpdateHost::DeploymentUpdateHost()
{
    hostName_ = "";
    hostNameIsSet_ = false;
    ip_ = "";
    ipIsSet_ = false;
    port_ = 0;
    portIsSet_ = false;
    asProxy_ = false;
    asProxyIsSet_ = false;
    proxyHostId_ = "";
    proxyHostIdIsSet_ = false;
    authorizationIsSet_ = false;
    installIcagent_ = false;
    installIcagentIsSet_ = false;
}

DeploymentUpdateHost::~DeploymentUpdateHost() = default;

void DeploymentUpdateHost::validate()
{
}

web::json::value DeploymentUpdateHost::toJson() const
{
    web::json::value val = web::json::value::object();

    if(hostNameIsSet_) {
        val[utility::conversions::to_string_t("host_name")] = ModelBase::toJson(hostName_);
    }
    if(ipIsSet_) {
        val[utility::conversions::to_string_t("ip")] = ModelBase::toJson(ip_);
    }
    if(portIsSet_) {
        val[utility::conversions::to_string_t("port")] = ModelBase::toJson(port_);
    }
    if(asProxyIsSet_) {
        val[utility::conversions::to_string_t("as_proxy")] = ModelBase::toJson(asProxy_);
    }
    if(proxyHostIdIsSet_) {
        val[utility::conversions::to_string_t("proxy_host_id")] = ModelBase::toJson(proxyHostId_);
    }
    if(authorizationIsSet_) {
        val[utility::conversions::to_string_t("authorization")] = ModelBase::toJson(authorization_);
    }
    if(installIcagentIsSet_) {
        val[utility::conversions::to_string_t("install_icagent")] = ModelBase::toJson(installIcagent_);
    }

    return val;
}
bool DeploymentUpdateHost::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    if(val.has_field(utility::conversions::to_string_t("as_proxy"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("as_proxy"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAsProxy(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("authorization"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("authorization"));
        if(!fieldValue.is_null())
        {
            DeploymentHostAuthorizationBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorization(refVal);
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


std::string DeploymentUpdateHost::getHostName() const
{
    return hostName_;
}

void DeploymentUpdateHost::setHostName(const std::string& value)
{
    hostName_ = value;
    hostNameIsSet_ = true;
}

bool DeploymentUpdateHost::hostNameIsSet() const
{
    return hostNameIsSet_;
}

void DeploymentUpdateHost::unsethostName()
{
    hostNameIsSet_ = false;
}

std::string DeploymentUpdateHost::getIp() const
{
    return ip_;
}

void DeploymentUpdateHost::setIp(const std::string& value)
{
    ip_ = value;
    ipIsSet_ = true;
}

bool DeploymentUpdateHost::ipIsSet() const
{
    return ipIsSet_;
}

void DeploymentUpdateHost::unsetip()
{
    ipIsSet_ = false;
}

int32_t DeploymentUpdateHost::getPort() const
{
    return port_;
}

void DeploymentUpdateHost::setPort(int32_t value)
{
    port_ = value;
    portIsSet_ = true;
}

bool DeploymentUpdateHost::portIsSet() const
{
    return portIsSet_;
}

void DeploymentUpdateHost::unsetport()
{
    portIsSet_ = false;
}

bool DeploymentUpdateHost::isAsProxy() const
{
    return asProxy_;
}

void DeploymentUpdateHost::setAsProxy(bool value)
{
    asProxy_ = value;
    asProxyIsSet_ = true;
}

bool DeploymentUpdateHost::asProxyIsSet() const
{
    return asProxyIsSet_;
}

void DeploymentUpdateHost::unsetasProxy()
{
    asProxyIsSet_ = false;
}

std::string DeploymentUpdateHost::getProxyHostId() const
{
    return proxyHostId_;
}

void DeploymentUpdateHost::setProxyHostId(const std::string& value)
{
    proxyHostId_ = value;
    proxyHostIdIsSet_ = true;
}

bool DeploymentUpdateHost::proxyHostIdIsSet() const
{
    return proxyHostIdIsSet_;
}

void DeploymentUpdateHost::unsetproxyHostId()
{
    proxyHostIdIsSet_ = false;
}

DeploymentHostAuthorizationBody DeploymentUpdateHost::getAuthorization() const
{
    return authorization_;
}

void DeploymentUpdateHost::setAuthorization(const DeploymentHostAuthorizationBody& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool DeploymentUpdateHost::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void DeploymentUpdateHost::unsetauthorization()
{
    authorizationIsSet_ = false;
}

bool DeploymentUpdateHost::isInstallIcagent() const
{
    return installIcagent_;
}

void DeploymentUpdateHost::setInstallIcagent(bool value)
{
    installIcagent_ = value;
    installIcagentIsSet_ = true;
}

bool DeploymentUpdateHost::installIcagentIsSet() const
{
    return installIcagentIsSet_;
}

void DeploymentUpdateHost::unsetinstallIcagent()
{
    installIcagentIsSet_ = false;
}

}
}
}
}
}


