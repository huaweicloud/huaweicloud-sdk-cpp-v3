

#include "huaweicloud/codeartsdeploy/v2/model/DeploymentHostRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




DeploymentHostRequest::DeploymentHostRequest()
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
    sync_ = false;
    syncIsSet_ = false;
}

DeploymentHostRequest::~DeploymentHostRequest() = default;

void DeploymentHostRequest::validate()
{
}

web::json::value DeploymentHostRequest::toJson() const
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
    if(syncIsSet_) {
        val[utility::conversions::to_string_t("sync")] = ModelBase::toJson(sync_);
    }

    return val;
}

bool DeploymentHostRequest::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("sync"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sync"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSync(refVal);
        }
    }
    return ok;
}

std::string DeploymentHostRequest::getHostName() const
{
    return hostName_;
}

void DeploymentHostRequest::setHostName(const std::string& value)
{
    hostName_ = value;
    hostNameIsSet_ = true;
}

bool DeploymentHostRequest::hostNameIsSet() const
{
    return hostNameIsSet_;
}

void DeploymentHostRequest::unsethostName()
{
    hostNameIsSet_ = false;
}

std::string DeploymentHostRequest::getIp() const
{
    return ip_;
}

void DeploymentHostRequest::setIp(const std::string& value)
{
    ip_ = value;
    ipIsSet_ = true;
}

bool DeploymentHostRequest::ipIsSet() const
{
    return ipIsSet_;
}

void DeploymentHostRequest::unsetip()
{
    ipIsSet_ = false;
}

int32_t DeploymentHostRequest::getPort() const
{
    return port_;
}

void DeploymentHostRequest::setPort(int32_t value)
{
    port_ = value;
    portIsSet_ = true;
}

bool DeploymentHostRequest::portIsSet() const
{
    return portIsSet_;
}

void DeploymentHostRequest::unsetport()
{
    portIsSet_ = false;
}

bool DeploymentHostRequest::isAsProxy() const
{
    return asProxy_;
}

void DeploymentHostRequest::setAsProxy(bool value)
{
    asProxy_ = value;
    asProxyIsSet_ = true;
}

bool DeploymentHostRequest::asProxyIsSet() const
{
    return asProxyIsSet_;
}

void DeploymentHostRequest::unsetasProxy()
{
    asProxyIsSet_ = false;
}

std::string DeploymentHostRequest::getProxyHostId() const
{
    return proxyHostId_;
}

void DeploymentHostRequest::setProxyHostId(const std::string& value)
{
    proxyHostId_ = value;
    proxyHostIdIsSet_ = true;
}

bool DeploymentHostRequest::proxyHostIdIsSet() const
{
    return proxyHostIdIsSet_;
}

void DeploymentHostRequest::unsetproxyHostId()
{
    proxyHostIdIsSet_ = false;
}

DeploymentHostAuthorizationBody DeploymentHostRequest::getAuthorization() const
{
    return authorization_;
}

void DeploymentHostRequest::setAuthorization(const DeploymentHostAuthorizationBody& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool DeploymentHostRequest::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void DeploymentHostRequest::unsetauthorization()
{
    authorizationIsSet_ = false;
}

bool DeploymentHostRequest::isInstallIcagent() const
{
    return installIcagent_;
}

void DeploymentHostRequest::setInstallIcagent(bool value)
{
    installIcagent_ = value;
    installIcagentIsSet_ = true;
}

bool DeploymentHostRequest::installIcagentIsSet() const
{
    return installIcagentIsSet_;
}

void DeploymentHostRequest::unsetinstallIcagent()
{
    installIcagentIsSet_ = false;
}

bool DeploymentHostRequest::isSync() const
{
    return sync_;
}

void DeploymentHostRequest::setSync(bool value)
{
    sync_ = value;
    syncIsSet_ = true;
}

bool DeploymentHostRequest::syncIsSet() const
{
    return syncIsSet_;
}

void DeploymentHostRequest::unsetsync()
{
    syncIsSet_ = false;
}

}
}
}
}
}


