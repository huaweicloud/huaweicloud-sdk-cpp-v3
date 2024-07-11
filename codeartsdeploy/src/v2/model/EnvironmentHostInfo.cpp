

#include "huaweicloud/codeartsdeploy/v2/model/EnvironmentHostInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




EnvironmentHostInfo::EnvironmentHostInfo()
{
    hostId_ = "";
    hostIdIsSet_ = false;
    ip_ = "";
    ipIsSet_ = false;
    port_ = 0;
    portIsSet_ = false;
    permissionIsSet_ = false;
    groupId_ = "";
    groupIdIsSet_ = false;
    hostName_ = "";
    hostNameIsSet_ = false;
    asProxy_ = false;
    asProxyIsSet_ = false;
    proxyHostId_ = "";
    proxyHostIdIsSet_ = false;
    proxyHostName_ = "";
    proxyHostNameIsSet_ = false;
    ownerId_ = "";
    ownerIdIsSet_ = false;
    ownerName_ = "";
    ownerNameIsSet_ = false;
    connectionStatus_ = "";
    connectionStatusIsSet_ = false;
    lastestConnectionTime_ = "";
    lastestConnectionTimeIsSet_ = false;
    connectionResult_ = "";
    connectionResultIsSet_ = false;
    nickName_ = "";
    nickNameIsSet_ = false;
}

EnvironmentHostInfo::~EnvironmentHostInfo() = default;

void EnvironmentHostInfo::validate()
{
}

web::json::value EnvironmentHostInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(hostIdIsSet_) {
        val[utility::conversions::to_string_t("host_id")] = ModelBase::toJson(hostId_);
    }
    if(ipIsSet_) {
        val[utility::conversions::to_string_t("ip")] = ModelBase::toJson(ip_);
    }
    if(portIsSet_) {
        val[utility::conversions::to_string_t("port")] = ModelBase::toJson(port_);
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
    if(proxyHostNameIsSet_) {
        val[utility::conversions::to_string_t("proxy_host_name")] = ModelBase::toJson(proxyHostName_);
    }
    if(ownerIdIsSet_) {
        val[utility::conversions::to_string_t("owner_id")] = ModelBase::toJson(ownerId_);
    }
    if(ownerNameIsSet_) {
        val[utility::conversions::to_string_t("owner_name")] = ModelBase::toJson(ownerName_);
    }
    if(connectionStatusIsSet_) {
        val[utility::conversions::to_string_t("connection_status")] = ModelBase::toJson(connectionStatus_);
    }
    if(lastestConnectionTimeIsSet_) {
        val[utility::conversions::to_string_t("lastest_connection_time")] = ModelBase::toJson(lastestConnectionTime_);
    }
    if(connectionResultIsSet_) {
        val[utility::conversions::to_string_t("connection_result")] = ModelBase::toJson(connectionResult_);
    }
    if(nickNameIsSet_) {
        val[utility::conversions::to_string_t("nick_name")] = ModelBase::toJson(nickName_);
    }

    return val;
}
bool EnvironmentHostInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("port"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("permission"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("permission"));
        if(!fieldValue.is_null())
        {
            EnvironmentHostPermission refVal;
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
    if(val.has_field(utility::conversions::to_string_t("proxy_host_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("proxy_host_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProxyHostName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("owner_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("owner_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOwnerId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("connection_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("connection_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConnectionStatus(refVal);
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


std::string EnvironmentHostInfo::getHostId() const
{
    return hostId_;
}

void EnvironmentHostInfo::setHostId(const std::string& value)
{
    hostId_ = value;
    hostIdIsSet_ = true;
}

bool EnvironmentHostInfo::hostIdIsSet() const
{
    return hostIdIsSet_;
}

void EnvironmentHostInfo::unsethostId()
{
    hostIdIsSet_ = false;
}

std::string EnvironmentHostInfo::getIp() const
{
    return ip_;
}

void EnvironmentHostInfo::setIp(const std::string& value)
{
    ip_ = value;
    ipIsSet_ = true;
}

bool EnvironmentHostInfo::ipIsSet() const
{
    return ipIsSet_;
}

void EnvironmentHostInfo::unsetip()
{
    ipIsSet_ = false;
}

int32_t EnvironmentHostInfo::getPort() const
{
    return port_;
}

void EnvironmentHostInfo::setPort(int32_t value)
{
    port_ = value;
    portIsSet_ = true;
}

bool EnvironmentHostInfo::portIsSet() const
{
    return portIsSet_;
}

void EnvironmentHostInfo::unsetport()
{
    portIsSet_ = false;
}

EnvironmentHostPermission EnvironmentHostInfo::getPermission() const
{
    return permission_;
}

void EnvironmentHostInfo::setPermission(const EnvironmentHostPermission& value)
{
    permission_ = value;
    permissionIsSet_ = true;
}

bool EnvironmentHostInfo::permissionIsSet() const
{
    return permissionIsSet_;
}

void EnvironmentHostInfo::unsetpermission()
{
    permissionIsSet_ = false;
}

std::string EnvironmentHostInfo::getGroupId() const
{
    return groupId_;
}

void EnvironmentHostInfo::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool EnvironmentHostInfo::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void EnvironmentHostInfo::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string EnvironmentHostInfo::getHostName() const
{
    return hostName_;
}

void EnvironmentHostInfo::setHostName(const std::string& value)
{
    hostName_ = value;
    hostNameIsSet_ = true;
}

bool EnvironmentHostInfo::hostNameIsSet() const
{
    return hostNameIsSet_;
}

void EnvironmentHostInfo::unsethostName()
{
    hostNameIsSet_ = false;
}

bool EnvironmentHostInfo::isAsProxy() const
{
    return asProxy_;
}

void EnvironmentHostInfo::setAsProxy(bool value)
{
    asProxy_ = value;
    asProxyIsSet_ = true;
}

bool EnvironmentHostInfo::asProxyIsSet() const
{
    return asProxyIsSet_;
}

void EnvironmentHostInfo::unsetasProxy()
{
    asProxyIsSet_ = false;
}

std::string EnvironmentHostInfo::getProxyHostId() const
{
    return proxyHostId_;
}

void EnvironmentHostInfo::setProxyHostId(const std::string& value)
{
    proxyHostId_ = value;
    proxyHostIdIsSet_ = true;
}

bool EnvironmentHostInfo::proxyHostIdIsSet() const
{
    return proxyHostIdIsSet_;
}

void EnvironmentHostInfo::unsetproxyHostId()
{
    proxyHostIdIsSet_ = false;
}

std::string EnvironmentHostInfo::getProxyHostName() const
{
    return proxyHostName_;
}

void EnvironmentHostInfo::setProxyHostName(const std::string& value)
{
    proxyHostName_ = value;
    proxyHostNameIsSet_ = true;
}

bool EnvironmentHostInfo::proxyHostNameIsSet() const
{
    return proxyHostNameIsSet_;
}

void EnvironmentHostInfo::unsetproxyHostName()
{
    proxyHostNameIsSet_ = false;
}

std::string EnvironmentHostInfo::getOwnerId() const
{
    return ownerId_;
}

void EnvironmentHostInfo::setOwnerId(const std::string& value)
{
    ownerId_ = value;
    ownerIdIsSet_ = true;
}

bool EnvironmentHostInfo::ownerIdIsSet() const
{
    return ownerIdIsSet_;
}

void EnvironmentHostInfo::unsetownerId()
{
    ownerIdIsSet_ = false;
}

std::string EnvironmentHostInfo::getOwnerName() const
{
    return ownerName_;
}

void EnvironmentHostInfo::setOwnerName(const std::string& value)
{
    ownerName_ = value;
    ownerNameIsSet_ = true;
}

bool EnvironmentHostInfo::ownerNameIsSet() const
{
    return ownerNameIsSet_;
}

void EnvironmentHostInfo::unsetownerName()
{
    ownerNameIsSet_ = false;
}

std::string EnvironmentHostInfo::getConnectionStatus() const
{
    return connectionStatus_;
}

void EnvironmentHostInfo::setConnectionStatus(const std::string& value)
{
    connectionStatus_ = value;
    connectionStatusIsSet_ = true;
}

bool EnvironmentHostInfo::connectionStatusIsSet() const
{
    return connectionStatusIsSet_;
}

void EnvironmentHostInfo::unsetconnectionStatus()
{
    connectionStatusIsSet_ = false;
}

std::string EnvironmentHostInfo::getLastestConnectionTime() const
{
    return lastestConnectionTime_;
}

void EnvironmentHostInfo::setLastestConnectionTime(const std::string& value)
{
    lastestConnectionTime_ = value;
    lastestConnectionTimeIsSet_ = true;
}

bool EnvironmentHostInfo::lastestConnectionTimeIsSet() const
{
    return lastestConnectionTimeIsSet_;
}

void EnvironmentHostInfo::unsetlastestConnectionTime()
{
    lastestConnectionTimeIsSet_ = false;
}

std::string EnvironmentHostInfo::getConnectionResult() const
{
    return connectionResult_;
}

void EnvironmentHostInfo::setConnectionResult(const std::string& value)
{
    connectionResult_ = value;
    connectionResultIsSet_ = true;
}

bool EnvironmentHostInfo::connectionResultIsSet() const
{
    return connectionResultIsSet_;
}

void EnvironmentHostInfo::unsetconnectionResult()
{
    connectionResultIsSet_ = false;
}

std::string EnvironmentHostInfo::getNickName() const
{
    return nickName_;
}

void EnvironmentHostInfo::setNickName(const std::string& value)
{
    nickName_ = value;
    nickNameIsSet_ = true;
}

bool EnvironmentHostInfo::nickNameIsSet() const
{
    return nickNameIsSet_;
}

void EnvironmentHostInfo::unsetnickName()
{
    nickNameIsSet_ = false;
}

}
}
}
}
}


