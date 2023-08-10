

#include "huaweicloud/codeartsdeploy/v2/model/DeploymentHostDetail.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




DeploymentHostDetail::DeploymentHostDetail()
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
    hostId_ = "";
    hostIdIsSet_ = false;
    proxyHostIsSet_ = false;
    groupName_ = "";
    groupNameIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    projectName_ = "";
    projectNameIsSet_ = false;
    permissionIsSet_ = false;
    updateTime_ = "";
    updateTimeIsSet_ = false;
    lastestConnectionTime_ = "";
    lastestConnectionTimeIsSet_ = false;
    connectionStatus_ = "";
    connectionStatusIsSet_ = false;
    ownerName_ = "";
    ownerNameIsSet_ = false;
    updatorId_ = "";
    updatorIdIsSet_ = false;
    createTime_ = "";
    createTimeIsSet_ = false;
    nickName_ = "";
    nickNameIsSet_ = false;
    ownerId_ = "";
    ownerIdIsSet_ = false;
    updatorName_ = "";
    updatorNameIsSet_ = false;
    connectionResult_ = "";
    connectionResultIsSet_ = false;
}

DeploymentHostDetail::~DeploymentHostDetail() = default;

void DeploymentHostDetail::validate()
{
}

web::json::value DeploymentHostDetail::toJson() const
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
    if(hostIdIsSet_) {
        val[utility::conversions::to_string_t("host_id")] = ModelBase::toJson(hostId_);
    }
    if(proxyHostIsSet_) {
        val[utility::conversions::to_string_t("proxy_host")] = ModelBase::toJson(*proxyHost_);
    }
    if(groupNameIsSet_) {
        val[utility::conversions::to_string_t("group_name")] = ModelBase::toJson(groupName_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(projectNameIsSet_) {
        val[utility::conversions::to_string_t("project_name")] = ModelBase::toJson(projectName_);
    }
    if(permissionIsSet_) {
        val[utility::conversions::to_string_t("permission")] = ModelBase::toJson(permission_);
    }
    if(updateTimeIsSet_) {
        val[utility::conversions::to_string_t("update_time")] = ModelBase::toJson(updateTime_);
    }
    if(lastestConnectionTimeIsSet_) {
        val[utility::conversions::to_string_t("lastest_connection_time")] = ModelBase::toJson(lastestConnectionTime_);
    }
    if(connectionStatusIsSet_) {
        val[utility::conversions::to_string_t("connection_status")] = ModelBase::toJson(connectionStatus_);
    }
    if(ownerNameIsSet_) {
        val[utility::conversions::to_string_t("owner_name")] = ModelBase::toJson(ownerName_);
    }
    if(updatorIdIsSet_) {
        val[utility::conversions::to_string_t("updator_id")] = ModelBase::toJson(updatorId_);
    }
    if(createTimeIsSet_) {
        val[utility::conversions::to_string_t("create_time")] = ModelBase::toJson(createTime_);
    }
    if(nickNameIsSet_) {
        val[utility::conversions::to_string_t("nick_name")] = ModelBase::toJson(nickName_);
    }
    if(ownerIdIsSet_) {
        val[utility::conversions::to_string_t("owner_id")] = ModelBase::toJson(ownerId_);
    }
    if(updatorNameIsSet_) {
        val[utility::conversions::to_string_t("updator_name")] = ModelBase::toJson(updatorName_);
    }
    if(connectionResultIsSet_) {
        val[utility::conversions::to_string_t("connection_result")] = ModelBase::toJson(connectionResult_);
    }

    return val;
}

bool DeploymentHostDetail::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("host_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("host_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHostId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("proxy_host"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("proxy_host"));
        if(!fieldValue.is_null())
        {
            DeploymentHostDetail refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProxyHost(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("group_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("group_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setGroupName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("project_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("project_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setProjectName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("connection_status"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("connection_status"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConnectionStatus(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("updator_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updator_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatorId(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("nick_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nick_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNickName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("updator_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updator_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatorName(refVal);
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
    return ok;
}

std::string DeploymentHostDetail::getGroupId() const
{
    return groupId_;
}

void DeploymentHostDetail::setGroupId(const std::string& value)
{
    groupId_ = value;
    groupIdIsSet_ = true;
}

bool DeploymentHostDetail::groupIdIsSet() const
{
    return groupIdIsSet_;
}

void DeploymentHostDetail::unsetgroupId()
{
    groupIdIsSet_ = false;
}

std::string DeploymentHostDetail::getHostName() const
{
    return hostName_;
}

void DeploymentHostDetail::setHostName(const std::string& value)
{
    hostName_ = value;
    hostNameIsSet_ = true;
}

bool DeploymentHostDetail::hostNameIsSet() const
{
    return hostNameIsSet_;
}

void DeploymentHostDetail::unsethostName()
{
    hostNameIsSet_ = false;
}

std::string DeploymentHostDetail::getIp() const
{
    return ip_;
}

void DeploymentHostDetail::setIp(const std::string& value)
{
    ip_ = value;
    ipIsSet_ = true;
}

bool DeploymentHostDetail::ipIsSet() const
{
    return ipIsSet_;
}

void DeploymentHostDetail::unsetip()
{
    ipIsSet_ = false;
}

int32_t DeploymentHostDetail::getPort() const
{
    return port_;
}

void DeploymentHostDetail::setPort(int32_t value)
{
    port_ = value;
    portIsSet_ = true;
}

bool DeploymentHostDetail::portIsSet() const
{
    return portIsSet_;
}

void DeploymentHostDetail::unsetport()
{
    portIsSet_ = false;
}

std::string DeploymentHostDetail::getOs() const
{
    return os_;
}

void DeploymentHostDetail::setOs(const std::string& value)
{
    os_ = value;
    osIsSet_ = true;
}

bool DeploymentHostDetail::osIsSet() const
{
    return osIsSet_;
}

void DeploymentHostDetail::unsetos()
{
    osIsSet_ = false;
}

bool DeploymentHostDetail::isAsProxy() const
{
    return asProxy_;
}

void DeploymentHostDetail::setAsProxy(bool value)
{
    asProxy_ = value;
    asProxyIsSet_ = true;
}

bool DeploymentHostDetail::asProxyIsSet() const
{
    return asProxyIsSet_;
}

void DeploymentHostDetail::unsetasProxy()
{
    asProxyIsSet_ = false;
}

std::string DeploymentHostDetail::getProxyHostId() const
{
    return proxyHostId_;
}

void DeploymentHostDetail::setProxyHostId(const std::string& value)
{
    proxyHostId_ = value;
    proxyHostIdIsSet_ = true;
}

bool DeploymentHostDetail::proxyHostIdIsSet() const
{
    return proxyHostIdIsSet_;
}

void DeploymentHostDetail::unsetproxyHostId()
{
    proxyHostIdIsSet_ = false;
}

DeploymentHostAuthorizationBody DeploymentHostDetail::getAuthorization() const
{
    return authorization_;
}

void DeploymentHostDetail::setAuthorization(const DeploymentHostAuthorizationBody& value)
{
    authorization_ = value;
    authorizationIsSet_ = true;
}

bool DeploymentHostDetail::authorizationIsSet() const
{
    return authorizationIsSet_;
}

void DeploymentHostDetail::unsetauthorization()
{
    authorizationIsSet_ = false;
}

bool DeploymentHostDetail::isInstallIcagent() const
{
    return installIcagent_;
}

void DeploymentHostDetail::setInstallIcagent(bool value)
{
    installIcagent_ = value;
    installIcagentIsSet_ = true;
}

bool DeploymentHostDetail::installIcagentIsSet() const
{
    return installIcagentIsSet_;
}

void DeploymentHostDetail::unsetinstallIcagent()
{
    installIcagentIsSet_ = false;
}

std::string DeploymentHostDetail::getHostId() const
{
    return hostId_;
}

void DeploymentHostDetail::setHostId(const std::string& value)
{
    hostId_ = value;
    hostIdIsSet_ = true;
}

bool DeploymentHostDetail::hostIdIsSet() const
{
    return hostIdIsSet_;
}

void DeploymentHostDetail::unsethostId()
{
    hostIdIsSet_ = false;
}

DeploymentHostDetail DeploymentHostDetail::getProxyHost() const
{
    return *proxyHost_;
}

void DeploymentHostDetail::setProxyHost(const DeploymentHostDetail& value)
{
    *proxyHost_ = value;
    proxyHostIsSet_ = true;
}

bool DeploymentHostDetail::proxyHostIsSet() const
{
    return proxyHostIsSet_;
}

void DeploymentHostDetail::unsetproxyHost()
{
    proxyHostIsSet_ = false;
}

std::string DeploymentHostDetail::getGroupName() const
{
    return groupName_;
}

void DeploymentHostDetail::setGroupName(const std::string& value)
{
    groupName_ = value;
    groupNameIsSet_ = true;
}

bool DeploymentHostDetail::groupNameIsSet() const
{
    return groupNameIsSet_;
}

void DeploymentHostDetail::unsetgroupName()
{
    groupNameIsSet_ = false;
}

std::string DeploymentHostDetail::getProjectId() const
{
    return projectId_;
}

void DeploymentHostDetail::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool DeploymentHostDetail::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void DeploymentHostDetail::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string DeploymentHostDetail::getProjectName() const
{
    return projectName_;
}

void DeploymentHostDetail::setProjectName(const std::string& value)
{
    projectName_ = value;
    projectNameIsSet_ = true;
}

bool DeploymentHostDetail::projectNameIsSet() const
{
    return projectNameIsSet_;
}

void DeploymentHostDetail::unsetprojectName()
{
    projectNameIsSet_ = false;
}

PermissionHostDetail DeploymentHostDetail::getPermission() const
{
    return permission_;
}

void DeploymentHostDetail::setPermission(const PermissionHostDetail& value)
{
    permission_ = value;
    permissionIsSet_ = true;
}

bool DeploymentHostDetail::permissionIsSet() const
{
    return permissionIsSet_;
}

void DeploymentHostDetail::unsetpermission()
{
    permissionIsSet_ = false;
}

std::string DeploymentHostDetail::getUpdateTime() const
{
    return updateTime_;
}

void DeploymentHostDetail::setUpdateTime(const std::string& value)
{
    updateTime_ = value;
    updateTimeIsSet_ = true;
}

bool DeploymentHostDetail::updateTimeIsSet() const
{
    return updateTimeIsSet_;
}

void DeploymentHostDetail::unsetupdateTime()
{
    updateTimeIsSet_ = false;
}

std::string DeploymentHostDetail::getLastestConnectionTime() const
{
    return lastestConnectionTime_;
}

void DeploymentHostDetail::setLastestConnectionTime(const std::string& value)
{
    lastestConnectionTime_ = value;
    lastestConnectionTimeIsSet_ = true;
}

bool DeploymentHostDetail::lastestConnectionTimeIsSet() const
{
    return lastestConnectionTimeIsSet_;
}

void DeploymentHostDetail::unsetlastestConnectionTime()
{
    lastestConnectionTimeIsSet_ = false;
}

std::string DeploymentHostDetail::getConnectionStatus() const
{
    return connectionStatus_;
}

void DeploymentHostDetail::setConnectionStatus(const std::string& value)
{
    connectionStatus_ = value;
    connectionStatusIsSet_ = true;
}

bool DeploymentHostDetail::connectionStatusIsSet() const
{
    return connectionStatusIsSet_;
}

void DeploymentHostDetail::unsetconnectionStatus()
{
    connectionStatusIsSet_ = false;
}

std::string DeploymentHostDetail::getOwnerName() const
{
    return ownerName_;
}

void DeploymentHostDetail::setOwnerName(const std::string& value)
{
    ownerName_ = value;
    ownerNameIsSet_ = true;
}

bool DeploymentHostDetail::ownerNameIsSet() const
{
    return ownerNameIsSet_;
}

void DeploymentHostDetail::unsetownerName()
{
    ownerNameIsSet_ = false;
}

std::string DeploymentHostDetail::getUpdatorId() const
{
    return updatorId_;
}

void DeploymentHostDetail::setUpdatorId(const std::string& value)
{
    updatorId_ = value;
    updatorIdIsSet_ = true;
}

bool DeploymentHostDetail::updatorIdIsSet() const
{
    return updatorIdIsSet_;
}

void DeploymentHostDetail::unsetupdatorId()
{
    updatorIdIsSet_ = false;
}

std::string DeploymentHostDetail::getCreateTime() const
{
    return createTime_;
}

void DeploymentHostDetail::setCreateTime(const std::string& value)
{
    createTime_ = value;
    createTimeIsSet_ = true;
}

bool DeploymentHostDetail::createTimeIsSet() const
{
    return createTimeIsSet_;
}

void DeploymentHostDetail::unsetcreateTime()
{
    createTimeIsSet_ = false;
}

std::string DeploymentHostDetail::getNickName() const
{
    return nickName_;
}

void DeploymentHostDetail::setNickName(const std::string& value)
{
    nickName_ = value;
    nickNameIsSet_ = true;
}

bool DeploymentHostDetail::nickNameIsSet() const
{
    return nickNameIsSet_;
}

void DeploymentHostDetail::unsetnickName()
{
    nickNameIsSet_ = false;
}

std::string DeploymentHostDetail::getOwnerId() const
{
    return ownerId_;
}

void DeploymentHostDetail::setOwnerId(const std::string& value)
{
    ownerId_ = value;
    ownerIdIsSet_ = true;
}

bool DeploymentHostDetail::ownerIdIsSet() const
{
    return ownerIdIsSet_;
}

void DeploymentHostDetail::unsetownerId()
{
    ownerIdIsSet_ = false;
}

std::string DeploymentHostDetail::getUpdatorName() const
{
    return updatorName_;
}

void DeploymentHostDetail::setUpdatorName(const std::string& value)
{
    updatorName_ = value;
    updatorNameIsSet_ = true;
}

bool DeploymentHostDetail::updatorNameIsSet() const
{
    return updatorNameIsSet_;
}

void DeploymentHostDetail::unsetupdatorName()
{
    updatorNameIsSet_ = false;
}

std::string DeploymentHostDetail::getConnectionResult() const
{
    return connectionResult_;
}

void DeploymentHostDetail::setConnectionResult(const std::string& value)
{
    connectionResult_ = value;
    connectionResultIsSet_ = true;
}

bool DeploymentHostDetail::connectionResultIsSet() const
{
    return connectionResultIsSet_;
}

void DeploymentHostDetail::unsetconnectionResult()
{
    connectionResultIsSet_ = false;
}

}
}
}
}
}


