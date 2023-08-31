

#include "huaweicloud/codeartsdeploy/v2/model/HostInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




HostInfo::HostInfo()
{
    uuid_ = "";
    uuidIsSet_ = false;
    ip_ = "";
    ipIsSet_ = false;
    os_ = "";
    osIsSet_ = false;
    port_ = 0;
    portIsSet_ = false;
    authorizationIsSet_ = false;
    permissionIsSet_ = false;
    hostName_ = "";
    hostNameIsSet_ = false;
    asProxy_ = false;
    asProxyIsSet_ = false;
    groupId_ = "";
    groupIdIsSet_ = false;
    proxyHostId_ = "";
    proxyHostIdIsSet_ = false;
    ownerId_ = "";
    ownerIdIsSet_ = false;
    ownerName_ = "";
    ownerNameIsSet_ = false;
    proxyHostIsSet_ = false;
    connectionStatus_ = "";
    connectionStatusIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    lastestConnectionTime_ = "";
    lastestConnectionTimeIsSet_ = false;
    connectionResult_ = "";
    connectionResultIsSet_ = false;
    nickName_ = "";
    nickNameIsSet_ = false;
    importStatus_ = "";
    importStatusIsSet_ = false;
    envCount_ = 0;
    envCountIsSet_ = false;
}

HostInfo::~HostInfo() = default;

void HostInfo::validate()
{
}

web::json::value HostInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(uuidIsSet_) {
        val[utility::conversions::to_string_t("uuid")] = ModelBase::toJson(uuid_);
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
    if(hostNameIsSet_) {
        val[utility::conversions::to_string_t("host_name")] = ModelBase::toJson(hostName_);
    }
    if(asProxyIsSet_) {
        val[utility::conversions::to_string_t("as_proxy")] = ModelBase::toJson(asProxy_);
    }
    if(groupIdIsSet_) {
        val[utility::conversions::to_string_t("group_id")] = ModelBase::toJson(groupId_);
    }
    if(proxyHostIdIsSet_) {
        val[utility::conversions::to_string_t("proxy_host_id")] = ModelBase::toJson(proxyHostId_);
    }
    if(ownerIdIsSet_) {
        val[utility::conversions::to_string_t("owner_id")] = ModelBase::toJson(ownerId_);
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
    if(lastestConnectionTimeIsSet_) {
        val[utility::conversions::to_string_t("lastest_connection_time")] = ModelBase::toJson(lastestConnectionTime_);
    }
    if(connectionResultIsSet_) {
        val[utility::conversions::to_string_t("connection_result")] = ModelBase::toJson(connectionResult_);
    }
    if(nickNameIsSet_) {
        val[utility::conversions::to_string_t("nick_name")] = ModelBase::toJson(nickName_);
    }
    if(importStatusIsSet_) {
        val[utility::conversions::to_string_t("import_status")] = ModelBase::toJson(importStatus_);
    }
    if(envCountIsSet_) {
        val[utility::conversions::to_string_t("env_count")] = ModelBase::toJson(envCount_);
    }

    return val;
}

bool HostInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("uuid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("uuid"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUuid(refVal);
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
            PermissionHostDetail refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPermission(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("group_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("proxy_host"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("proxy_host"));
        if(!fieldValue.is_null())
        {
            HostInfo refVal;
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
    if(val.has_field(utility::conversions::to_string_t("import_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("import_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setImportStatus(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("env_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("env_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnvCount(refVal);
        }
    }
    return ok;
}

std::string HostInfo::getUuid() const
{
    return uuid_;
}

void HostInfo::setUuid(const std::string& value)
{
    uuid_ = value;
    uuidIsSet_ = true;
}

bool HostInfo::uuidIsSet() const
{
    return uuidIsSet_;
}

void HostInfo::unsetuuid()
{
    uuidIsSet_ = false;
}

std::string HostInfo::getIp() const
{
    return ip_;
}

void HostInfo::setIp(const std::string& value)
{
    ip_ = value;
    ipIsSet_ = true;
}

bool HostInfo::ipIsSet() const
{
    return ipIsSet_;
}

void HostInfo::unsetip()
{
    ipIsSet_ = false;
}

std::string HostInfo::getOs() const
{
    return os_;
}

void HostInfo::setOs(const std::string& value)
{
    os_ = value;
    osIsSet_ = true;
}

bool HostInfo::osIsSet() const
{
    return osIsSet_;
}

void HostInfo::unsetos()
{
    osIsSet_ = false;
}

int32_t HostInfo::getPort() const
{
    return port_;
}

void HostInfo::setPort(int32_t value)
{
    port_ = value;
    portIsSet_ = true;
}

bool HostInfo::portIsSet() const
{
    return portIsSet_;
}

void HostInfo::unsetport()
{
    portIsSet_ = false;
}

HostAuthorizationBody HostInfo::getAuthorization() const
{
    return authorization_;
}

void HostInfo::setAuthorization(const HostAuthorizationBody& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool HostInfo::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void HostInfo::unsetauthorization()
{
    authorizationIsSet_ = false;
}

PermissionHostDetail HostInfo::getPermission() const
{
    return permission_;
}

void HostInfo::setPermission(const PermissionHostDetail& value)
{
    permission_ = value;
    permissionIsSet_ = true;
}

bool HostInfo::permissionIsSet() const
{
    return permissionIsSet_;
}

void HostInfo::unsetpermission()
{
    permissionIsSet_ = false;
}

std::string HostInfo::getHostName() const
{
    return hostName_;
}

void HostInfo::setHostName(const std::string& value)
{
    hostName_ = value;
    hostNameIsSet_ = true;
}

bool HostInfo::hostNameIsSet() const
{
    return hostNameIsSet_;
}

void HostInfo::unsethostName()
{
    hostNameIsSet_ = false;
}

bool HostInfo::isAsProxy() const
{
    return asProxy_;
}

void HostInfo::setAsProxy(bool value)
{
    asProxy_ = value;
    asProxyIsSet_ = true;
}

bool HostInfo::asProxyIsSet() const
{
    return asProxyIsSet_;
}

void HostInfo::unsetasProxy()
{
    asProxyIsSet_ = false;
}

std::string HostInfo::getGroupId() const
{
    return groupId_;
}

void HostInfo::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool HostInfo::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void HostInfo::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string HostInfo::getProxyHostId() const
{
    return proxyHostId_;
}

void HostInfo::setProxyHostId(const std::string& value)
{
    proxyHostId_ = value;
    proxyHostIdIsSet_ = true;
}

bool HostInfo::proxyHostIdIsSet() const
{
    return proxyHostIdIsSet_;
}

void HostInfo::unsetproxyHostId()
{
    proxyHostIdIsSet_ = false;
}

std::string HostInfo::getOwnerId() const
{
    return ownerId_;
}

void HostInfo::setOwnerId(const std::string& value)
{
    ownerId_ = value;
    ownerIdIsSet_ = true;
}

bool HostInfo::ownerIdIsSet() const
{
    return ownerIdIsSet_;
}

void HostInfo::unsetownerId()
{
    ownerIdIsSet_ = false;
}

std::string HostInfo::getOwnerName() const
{
    return ownerName_;
}

void HostInfo::setOwnerName(const std::string& value)
{
    ownerName_ = value;
    ownerNameIsSet_ = true;
}

bool HostInfo::ownerNameIsSet() const
{
    return ownerNameIsSet_;
}

void HostInfo::unsetownerName()
{
    ownerNameIsSet_ = false;
}

HostInfo HostInfo::getProxyHost() const
{
    return *proxyHost_;
}

void HostInfo::setProxyHost(const HostInfo& value)
{
    *proxyHost_ = value;
    proxyHostIsSet_ = true;
}

bool HostInfo::proxyHostIsSet() const
{
    return proxyHostIsSet_;
}

void HostInfo::unsetproxyHost()
{
    proxyHostIsSet_ = false;
}

std::string HostInfo::getConnectionStatus() const
{
    return connectionStatus_;
}

void HostInfo::setConnectionStatus(const std::string& value)
{
    connectionStatus_ = value;
    connectionStatusIsSet_ = true;
}

bool HostInfo::connectionStatusIsSet() const
{
    return connectionStatusIsSet_;
}

void HostInfo::unsetconnectionStatus()
{
    connectionStatusIsSet_ = false;
}

std::string HostInfo::getCreateTime() const
{
    return createTime_;
}

void HostInfo::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool HostInfo::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void HostInfo::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string HostInfo::getLastestConnectionTime() const
{
    return lastestConnectionTime_;
}

void HostInfo::setLastestConnectionTime(const std::string& value)
{
    lastestConnectionTime_ = value;
    lastestConnectionTimeIsSet_ = true;
}

bool HostInfo::lastestConnectionTimeIsSet() const
{
    return lastestConnectionTimeIsSet_;
}

void HostInfo::unsetlastestConnectionTime()
{
    lastestConnectionTimeIsSet_ = false;
}

std::string HostInfo::getConnectionResult() const
{
    return connectionResult_;
}

void HostInfo::setConnectionResult(const std::string& value)
{
    connectionResult_ = value;
    connectionResultIsSet_ = true;
}

bool HostInfo::connectionResultIsSet() const
{
    return connectionResultIsSet_;
}

void HostInfo::unsetconnectionResult()
{
    connectionResultIsSet_ = false;
}

std::string HostInfo::getNickName() const
{
    return nickName_;
}

void HostInfo::setNickName(const std::string& value)
{
    nickName_ = value;
    nickNameIsSet_ = true;
}

bool HostInfo::nickNameIsSet() const
{
    return nickNameIsSet_;
}

void HostInfo::unsetnickName()
{
    nickNameIsSet_ = false;
}

std::string HostInfo::getImportStatus() const
{
    return importStatus_;
}

void HostInfo::setImportStatus(const std::string& value)
{
    importStatus_ = value;
    importStatusIsSet_ = true;
}

bool HostInfo::importStatusIsSet() const
{
    return importStatusIsSet_;
}

void HostInfo::unsetimportStatus()
{
    importStatusIsSet_ = false;
}

int32_t HostInfo::getEnvCount() const
{
    return envCount_;
}

void HostInfo::setEnvCount(int32_t value)
{
    envCount_ = value;
    envCountIsSet_ = true;
}

bool HostInfo::envCountIsSet() const
{
    return envCountIsSet_;
}

void HostInfo::unsetenvCount()
{
    envCountIsSet_ = false;
}

}
}
}
}
}


