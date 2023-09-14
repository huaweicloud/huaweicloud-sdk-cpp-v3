

#include "huaweicloud/codeartsdeploy/v2/model/HostInfoDetail.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




HostInfoDetail::HostInfoDetail()
{
    hostId_ = "";
    hostIdIsSet_ = false;
    ip_ = "";
    ipIsSet_ = false;
    os_ = "";
    osIsSet_ = false;
    port_ = 0;
    portIsSet_ = false;
    authorizationIsSet_ = false;
    permissionIsSet_ = false;
    groupId_ = "";
    groupIdIsSet_ = false;
    hostName_ = "";
    hostNameIsSet_ = false;
    asProxy_ = false;
    asProxyIsSet_ = false;
    proxyHostId_ = "";
    proxyHostIdIsSet_ = false;
    ownerName_ = "";
    ownerNameIsSet_ = false;
    proxyHostIsSet_ = false;
    connectionStatus_ = "";
    connectionStatusIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
    lastestConnectionTime_ = "";
    lastestConnectionTimeIsSet_ = false;
    connectionResult_ = "";
    connectionResultIsSet_ = false;
    installIcagent_ = false;
    installIcagentIsSet_ = false;
    nickName_ = "";
    nickNameIsSet_ = false;
}

HostInfoDetail::~HostInfoDetail() = default;

void HostInfoDetail::validate()
{
}

web::json::value HostInfoDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(hostIdIsSet_) {
        val[utility::conversions::to_string_t("host_id")] = ModelBase::toJson(hostId_);
    }
    if(ipIsSet_) {
        val[utility::conversions::to_string_t("ip")] = ModelBase::toJson(ip_);
    }
    if(osIsSet_) {
        val[utility::conversions::to_string_t("os")] = ModelBase::toJson(os_);
    }
    if(portIsSet_) {
        val[utility::conversions::to_string_t("port")] = ModelBase::toJson(port_);
    }
    if(authorizationIsSet_) {
        val[utility::conversions::to_string_t("authorization")] = ModelBase::toJson(authorization_);
    }
    if(permissionIsSet_) {
        val[utility::conversions::to_string_t("permission")] = ModelBase::toJson(permission_);
    }
    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(hostNameIsSet_) {
        val[utility::conversions::to_string_t("host_name")] = ModelBase::toJson(hostName_);
    }
    if(asProxyIsSet_) {
        val[utility::conversions::to_string_t("as_proxy")] = ModelBase::toJson(asProxy_);
    }
    if(proxyHostIdIsSet_) {
        val[utility::conversions::to_string_t("proxy_host_id")] = ModelBase::toJson(proxyHostId_);
    }
    if(ownerNameIsSet_) {
        val[utility::conversions::to_string_t("owner_name")] = ModelBase::toJson(ownerName_);
    }
    if(proxyHostIsSet_) {
        val[utility::conversions::to_string_t("proxy_host")] = ModelBase::toJson(*proxyHost_);
    }
    if(connectionStatusIsSet_) {
        val[utility::conversions::to_string_t("connection_status")] = ModelBase::toJson(connectionStatus_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
    if(lastestConnectionTimeIsSet_) {
        val[utility::conversions::to_string_t("lastest_connection_time")] = ModelBase::toJson(lastestConnectionTime_);
    }
    if(connectionResultIsSet_) {
        val[utility::conversions::to_string_t("connection_result")] = ModelBase::toJson(connectionResult_);
    }
    if(installIcagentIsSet_) {
        val[utility::conversions::to_string_t("install_icagent")] = ModelBase::toJson(installIcagent_);
    }
    if(nickNameIsSet_) {
        val[utility::conversions::to_string_t("nick_name")] = ModelBase::toJson(nickName_);
    }

    return val;
}

bool HostInfoDetail::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("host_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("host_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHostId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("os"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOs(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("authorization"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("authorization"));
        if(!fieldValue.is_null())
        {
            HostAuthorizationBody refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAuthorization(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("permission"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("permission"));
        if(!fieldValue.is_null())
        {
            PermissionHostDetailNew refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPermission(refVal);
        }
    }
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
    if(val.has_field(utility::conversions::to_string_t("owner_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("owner_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwnerName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("proxy_host"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("proxy_host"));
        if(!fieldValue.is_null())
        {
            HostInfoDetail refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProxyHost(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("connection_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("connection_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConnectionStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("create_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("create_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("update_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("update_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdateTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("lastest_connection_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("lastest_connection_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLastestConnectionTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("connection_result"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("connection_result"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConnectionResult(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("nick_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nick_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNickName(refVal);
        }
    }
    return ok;
}

std::string HostInfoDetail::getHostId() const
{
    return hostId_;
}

void HostInfoDetail::setHostId(const std::string& value)
{
    hostId_ = value;
    hostIdIsSet_ = true;
}

bool HostInfoDetail::hostIdIsSet() const
{
    return hostIdIsSet_;
}

void HostInfoDetail::unsethostId()
{
    hostIdIsSet_ = false;
}

std::string HostInfoDetail::getIp() const
{
    return ip_;
}

void HostInfoDetail::setIp(const std::string& value)
{
    ip_ = value;
    ipIsSet_ = true;
}

bool HostInfoDetail::ipIsSet() const
{
    return ipIsSet_;
}

void HostInfoDetail::unsetip()
{
    ipIsSet_ = false;
}

std::string HostInfoDetail::getOs() const
{
    return os_;
}

void HostInfoDetail::setOs(const std::string& value)
{
    os_ = value;
    osIsSet_ = true;
}

bool HostInfoDetail::osIsSet() const
{
    return osIsSet_;
}

void HostInfoDetail::unsetos()
{
    osIsSet_ = false;
}

int32_t HostInfoDetail::getPort() const
{
    return port_;
}

void HostInfoDetail::setPort(int32_t value)
{
    port_ = value;
    portIsSet_ = true;
}

bool HostInfoDetail::portIsSet() const
{
    return portIsSet_;
}

void HostInfoDetail::unsetport()
{
    portIsSet_ = false;
}

HostAuthorizationBody HostInfoDetail::getAuthorization() const
{
    return authorization_;
}

void HostInfoDetail::setAuthorization(const HostAuthorizationBody& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool HostInfoDetail::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void HostInfoDetail::unsetauthorization()
{
    authorizationIsSet_ = false;
}

PermissionHostDetailNew HostInfoDetail::getPermission() const
{
    return permission_;
}

void HostInfoDetail::setPermission(const PermissionHostDetailNew& value)
{
    permission_ = value;
    permissionIsSet_ = true;
}

bool HostInfoDetail::permissionIsSet() const
{
    return permissionIsSet_;
}

void HostInfoDetail::unsetpermission()
{
    permissionIsSet_ = false;
}

std::string HostInfoDetail::getGroupId() const
{
    return groupId_;
}

void HostInfoDetail::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool HostInfoDetail::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void HostInfoDetail::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string HostInfoDetail::getHostName() const
{
    return hostName_;
}

void HostInfoDetail::setHostName(const std::string& value)
{
    hostName_ = value;
    hostNameIsSet_ = true;
}

bool HostInfoDetail::hostNameIsSet() const
{
    return hostNameIsSet_;
}

void HostInfoDetail::unsethostName()
{
    hostNameIsSet_ = false;
}

bool HostInfoDetail::isAsProxy() const
{
    return asProxy_;
}

void HostInfoDetail::setAsProxy(bool value)
{
    asProxy_ = value;
    asProxyIsSet_ = true;
}

bool HostInfoDetail::asProxyIsSet() const
{
    return asProxyIsSet_;
}

void HostInfoDetail::unsetasProxy()
{
    asProxyIsSet_ = false;
}

std::string HostInfoDetail::getProxyHostId() const
{
    return proxyHostId_;
}

void HostInfoDetail::setProxyHostId(const std::string& value)
{
    proxyHostId_ = value;
    proxyHostIdIsSet_ = true;
}

bool HostInfoDetail::proxyHostIdIsSet() const
{
    return proxyHostIdIsSet_;
}

void HostInfoDetail::unsetproxyHostId()
{
    proxyHostIdIsSet_ = false;
}

std::string HostInfoDetail::getOwnerName() const
{
    return ownerName_;
}

void HostInfoDetail::setOwnerName(const std::string& value)
{
    ownerName_ = value;
    ownerNameIsSet_ = true;
}

bool HostInfoDetail::ownerNameIsSet() const
{
    return ownerNameIsSet_;
}

void HostInfoDetail::unsetownerName()
{
    ownerNameIsSet_ = false;
}

HostInfoDetail HostInfoDetail::getProxyHost() const
{
    return *proxyHost_;
}

void HostInfoDetail::setProxyHost(const HostInfoDetail& value)
{
    *proxyHost_ = value;
    proxyHostIsSet_ = true;
}

bool HostInfoDetail::proxyHostIsSet() const
{
    return proxyHostIsSet_;
}

void HostInfoDetail::unsetproxyHost()
{
    proxyHostIsSet_ = false;
}

std::string HostInfoDetail::getConnectionStatus() const
{
    return connectionStatus_;
}

void HostInfoDetail::setConnectionStatus(const std::string& value)
{
    connectionStatus_ = value;
    connectionStatusIsSet_ = true;
}

bool HostInfoDetail::connectionStatusIsSet() const
{
    return connectionStatusIsSet_;
}

void HostInfoDetail::unsetconnectionStatus()
{
    connectionStatusIsSet_ = false;
}

std::string HostInfoDetail::getCreateTime() const
{
    return createTime_;
}

void HostInfoDetail::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool HostInfoDetail::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void HostInfoDetail::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string HostInfoDetail::getUpdateTime() const
{
    return updateTime_;
}

void HostInfoDetail::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool HostInfoDetail::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void HostInfoDetail::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string HostInfoDetail::getLastestConnectionTime() const
{
    return lastestConnectionTime_;
}

void HostInfoDetail::setLastestConnectionTime(const std::string& value)
{
    lastestConnectionTime_ = value;
    lastestConnectionTimeIsSet_ = true;
}

bool HostInfoDetail::lastestConnectionTimeIsSet() const
{
    return lastestConnectionTimeIsSet_;
}

void HostInfoDetail::unsetlastestConnectionTime()
{
    lastestConnectionTimeIsSet_ = false;
}

std::string HostInfoDetail::getConnectionResult() const
{
    return connectionResult_;
}

void HostInfoDetail::setConnectionResult(const std::string& value)
{
    connectionResult_ = value;
    connectionResultIsSet_ = true;
}

bool HostInfoDetail::connectionResultIsSet() const
{
    return connectionResultIsSet_;
}

void HostInfoDetail::unsetconnectionResult()
{
    connectionResultIsSet_ = false;
}

bool HostInfoDetail::isInstallIcagent() const
{
    return installIcagent_;
}

void HostInfoDetail::setInstallIcagent(bool value)
{
    installIcagent_ = value;
    installIcagentIsSet_ = true;
}

bool HostInfoDetail::installIcagentIsSet() const
{
    return installIcagentIsSet_;
}

void HostInfoDetail::unsetinstallIcagent()
{
    installIcagentIsSet_ = false;
}

std::string HostInfoDetail::getNickName() const
{
    return nickName_;
}

void HostInfoDetail::setNickName(const std::string& value)
{
    nickName_ = value;
    nickNameIsSet_ = true;
}

bool HostInfoDetail::nickNameIsSet() const
{
    return nickNameIsSet_;
}

void HostInfoDetail::unsetnickName()
{
    nickNameIsSet_ = false;
}

}
}
}
}
}


