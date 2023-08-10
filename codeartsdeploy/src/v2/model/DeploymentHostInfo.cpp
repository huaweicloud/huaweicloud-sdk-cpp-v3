

#include "huaweicloud/codeartsdeploy/v2/model/DeploymentHostInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




DeploymentHostInfo::DeploymentHostInfo()
{
    groupId_ = "";
    groupIdIsSet_ = false;
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

DeploymentHostInfo::~DeploymentHostInfo() = default;

void DeploymentHostInfo::validate()
{
}

web::json::value DeploymentHostInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
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

bool DeploymentHostInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
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

std::string DeploymentHostInfo::getGroupId() const
{
    return groupId_;
}

void DeploymentHostInfo::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool DeploymentHostInfo::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void DeploymentHostInfo::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string DeploymentHostInfo::getHostName() const
{
    return hostName_;
}

void DeploymentHostInfo::setHostName(const std::string& value)
{
    hostName_ = value;
    hostNameIsSet_ = true;
}

bool DeploymentHostInfo::hostNameIsSet() const
{
    return hostNameIsSet_;
}

void DeploymentHostInfo::unsethostName()
{
    hostNameIsSet_ = false;
}

std::string DeploymentHostInfo::getIp() const
{
    return ip_;
}

void DeploymentHostInfo::setIp(const std::string& value)
{
    ip_ = value;
    ipIsSet_ = true;
}

bool DeploymentHostInfo::ipIsSet() const
{
    return ipIsSet_;
}

void DeploymentHostInfo::unsetip()
{
    ipIsSet_ = false;
}

int32_t DeploymentHostInfo::getPort() const
{
    return port_;
}

void DeploymentHostInfo::setPort(int32_t value)
{
    port_ = value;
    portIsSet_ = true;
}

bool DeploymentHostInfo::portIsSet() const
{
    return portIsSet_;
}

void DeploymentHostInfo::unsetport()
{
    portIsSet_ = false;
}

std::string DeploymentHostInfo::getOs() const
{
    return os_;
}

void DeploymentHostInfo::setOs(const std::string& value)
{
    os_ = value;
    osIsSet_ = true;
}

bool DeploymentHostInfo::osIsSet() const
{
    return osIsSet_;
}

void DeploymentHostInfo::unsetos()
{
    osIsSet_ = false;
}

bool DeploymentHostInfo::isAsProxy() const
{
    return asProxy_;
}

void DeploymentHostInfo::setAsProxy(bool value)
{
    asProxy_ = value;
    asProxyIsSet_ = true;
}

bool DeploymentHostInfo::asProxyIsSet() const
{
    return asProxyIsSet_;
}

void DeploymentHostInfo::unsetasProxy()
{
    asProxyIsSet_ = false;
}

std::string DeploymentHostInfo::getProxyHostId() const
{
    return proxyHostId_;
}

void DeploymentHostInfo::setProxyHostId(const std::string& value)
{
    proxyHostId_ = value;
    proxyHostIdIsSet_ = true;
}

bool DeploymentHostInfo::proxyHostIdIsSet() const
{
    return proxyHostIdIsSet_;
}

void DeploymentHostInfo::unsetproxyHostId()
{
    proxyHostIdIsSet_ = false;
}

DeploymentHostAuthorizationBody DeploymentHostInfo::getAuthorization() const
{
    return authorization_;
}

void DeploymentHostInfo::setAuthorization(const DeploymentHostAuthorizationBody& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool DeploymentHostInfo::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void DeploymentHostInfo::unsetauthorization()
{
    authorizationIsSet_ = false;
}

bool DeploymentHostInfo::isInstallIcagent() const
{
    return installIcagent_;
}

void DeploymentHostInfo::setInstallIcagent(bool value)
{
    installIcagent_ = value;
    installIcagentIsSet_ = true;
}

bool DeploymentHostInfo::installIcagentIsSet() const
{
    return installIcagentIsSet_;
}

void DeploymentHostInfo::unsetinstallIcagent()
{
    installIcagentIsSet_ = false;
}

}
}
}
}
}


