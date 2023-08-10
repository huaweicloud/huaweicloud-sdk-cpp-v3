

#include "huaweicloud/codeartsdeploy/v2/model/DeploymentHost.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




DeploymentHost::DeploymentHost()
{
    hostName_ = "";
    hostNameIsSet_ = false;
    ip_ = "";
    ipIsSet_ = false;
    port_ = 0;
    portIsSet_ = false;
    os_ = "";
    osIsSet_ = false;
    asProxy_ = false;
    asProxyIsSet_ = false;
    proxyHostId_ = "";
    proxyHostIdIsSet_ = false;
    authorizationIsSet_ = false;
    installIcagent_ = false;
    installIcagentIsSet_ = false;
}

DeploymentHost::~DeploymentHost() = default;

void DeploymentHost::validate()
{
}

web::json::value DeploymentHost::toJson() const
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
    if(osIsSet_) {
        val[utility::conversions::to_string_t("os")] = ModelBase::toJson(os_);
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

bool DeploymentHost::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("os"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOs(refVal);
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

std::string DeploymentHost::getHostName() const
{
    return hostName_;
}

void DeploymentHost::setHostName(const std::string& value)
{
    hostName_ = value;
    hostNameIsSet_ = true;
}

bool DeploymentHost::hostNameIsSet() const
{
    return hostNameIsSet_;
}

void DeploymentHost::unsethostName()
{
    hostNameIsSet_ = false;
}

std::string DeploymentHost::getIp() const
{
    return ip_;
}

void DeploymentHost::setIp(const std::string& value)
{
    ip_ = value;
    ipIsSet_ = true;
}

bool DeploymentHost::ipIsSet() const
{
    return ipIsSet_;
}

void DeploymentHost::unsetip()
{
    ipIsSet_ = false;
}

int32_t DeploymentHost::getPort() const
{
    return port_;
}

void DeploymentHost::setPort(int32_t value)
{
    port_ = value;
    portIsSet_ = true;
}

bool DeploymentHost::portIsSet() const
{
    return portIsSet_;
}

void DeploymentHost::unsetport()
{
    portIsSet_ = false;
}

std::string DeploymentHost::getOs() const
{
    return os_;
}

void DeploymentHost::setOs(const std::string& value)
{
    os_ = value;
    osIsSet_ = true;
}

bool DeploymentHost::osIsSet() const
{
    return osIsSet_;
}

void DeploymentHost::unsetos()
{
    osIsSet_ = false;
}

bool DeploymentHost::isAsProxy() const
{
    return asProxy_;
}

void DeploymentHost::setAsProxy(bool value)
{
    asProxy_ = value;
    asProxyIsSet_ = true;
}

bool DeploymentHost::asProxyIsSet() const
{
    return asProxyIsSet_;
}

void DeploymentHost::unsetasProxy()
{
    asProxyIsSet_ = false;
}

std::string DeploymentHost::getProxyHostId() const
{
    return proxyHostId_;
}

void DeploymentHost::setProxyHostId(const std::string& value)
{
    proxyHostId_ = value;
    proxyHostIdIsSet_ = true;
}

bool DeploymentHost::proxyHostIdIsSet() const
{
    return proxyHostIdIsSet_;
}

void DeploymentHost::unsetproxyHostId()
{
    proxyHostIdIsSet_ = false;
}

DeploymentHostAuthorizationBody DeploymentHost::getAuthorization() const
{
    return authorization_;
}

void DeploymentHost::setAuthorization(const DeploymentHostAuthorizationBody& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool DeploymentHost::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void DeploymentHost::unsetauthorization()
{
    authorizationIsSet_ = false;
}

bool DeploymentHost::isInstallIcagent() const
{
    return installIcagent_;
}

void DeploymentHost::setInstallIcagent(bool value)
{
    installIcagent_ = value;
    installIcagentIsSet_ = true;
}

bool DeploymentHost::installIcagentIsSet() const
{
    return installIcagentIsSet_;
}

void DeploymentHost::unsetinstallIcagent()
{
    installIcagentIsSet_ = false;
}

}
}
}
}
}


