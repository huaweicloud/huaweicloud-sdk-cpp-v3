

#include "huaweicloud/codeartsdeploy/v2/model/HostClusterInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




HostClusterInfo::HostClusterInfo()
{
    id_ = "";
    idIsSet_ = false;
    hostCount_ = 0;
    hostCountIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    projectId_ = "";
    projectIdIsSet_ = false;
    os_ = "";
    osIsSet_ = false;
    slaveClusterId_ = "";
    slaveClusterIdIsSet_ = false;
    createdByIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    permissionIsSet_ = false;
    nickName_ = "";
    nickNameIsSet_ = false;
    envCount_ = 0;
    envCountIsSet_ = false;
}

HostClusterInfo::~HostClusterInfo() = default;

void HostClusterInfo::validate()
{
}

web::json::value HostClusterInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(hostCountIsSet_) {
        val[utility::conversions::to_string_t("host_count")] = ModelBase::toJson(hostCount_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(projectIdIsSet_) {
        val[utility::conversions::to_string_t("project_id")] = ModelBase::toJson(projectId_);
    }
    if(osIsSet_) {
        val[utility::conversions::to_string_t("os")] = ModelBase::toJson(os_);
    }
    if(slaveClusterIdIsSet_) {
        val[utility::conversions::to_string_t("slave_cluster_id")] = ModelBase::toJson(slaveClusterId_);
    }
    if(createdByIsSet_) {
        val[utility::conversions::to_string_t("created_by")] = ModelBase::toJson(createdBy_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(permissionIsSet_) {
        val[utility::conversions::to_string_t("permission")] = ModelBase::toJson(permission_);
    }
    if(nickNameIsSet_) {
        val[utility::conversions::to_string_t("nick_name")] = ModelBase::toJson(nickName_);
    }
    if(envCountIsSet_) {
        val[utility::conversions::to_string_t("env_count")] = ModelBase::toJson(envCount_);
    }

    return val;
}
bool HostClusterInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("host_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("host_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHostCount(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("os"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("os"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOs(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("slave_cluster_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("slave_cluster_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSlaveClusterId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_by"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_by"));
        if(!fieldValue.is_null())
        {
            UserInfo refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedBy(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("permission"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("permission"));
        if(!fieldValue.is_null())
        {
            PermissionClusterDetail refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPermission(refVal);
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


std::string HostClusterInfo::getId() const
{
    return id_;
}

void HostClusterInfo::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool HostClusterInfo::idIsSet() const
{
    return idIsSet_;
}

void HostClusterInfo::unsetid()
{
    idIsSet_ = false;
}

int32_t HostClusterInfo::getHostCount() const
{
    return hostCount_;
}

void HostClusterInfo::setHostCount(int32_t value)
{
    hostCount_ = value;
    hostCountIsSet_ = true;
}

bool HostClusterInfo::hostCountIsSet() const
{
    return hostCountIsSet_;
}

void HostClusterInfo::unsethostCount()
{
    hostCountIsSet_ = false;
}

std::string HostClusterInfo::getName() const
{
    return name_;
}

void HostClusterInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool HostClusterInfo::nameIsSet() const
{
    return nameIsSet_;
}

void HostClusterInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string HostClusterInfo::getProjectId() const
{
    return projectId_;
}

void HostClusterInfo::setProjectId(const std::string& value)
{
    projectId_ = value;
    projectIdIsSet_ = true;
}

bool HostClusterInfo::projectIdIsSet() const
{
    return projectIdIsSet_;
}

void HostClusterInfo::unsetprojectId()
{
    projectIdIsSet_ = false;
}

std::string HostClusterInfo::getOs() const
{
    return os_;
}

void HostClusterInfo::setOs(const std::string& value)
{
    os_ = value;
    osIsSet_ = true;
}

bool HostClusterInfo::osIsSet() const
{
    return osIsSet_;
}

void HostClusterInfo::unsetos()
{
    osIsSet_ = false;
}

std::string HostClusterInfo::getSlaveClusterId() const
{
    return slaveClusterId_;
}

void HostClusterInfo::setSlaveClusterId(const std::string& value)
{
    slaveClusterId_ = value;
    slaveClusterIdIsSet_ = true;
}

bool HostClusterInfo::slaveClusterIdIsSet() const
{
    return slaveClusterIdIsSet_;
}

void HostClusterInfo::unsetslaveClusterId()
{
    slaveClusterIdIsSet_ = false;
}

UserInfo HostClusterInfo::getCreatedBy() const
{
    return createdBy_;
}

void HostClusterInfo::setCreatedBy(const UserInfo& value)
{
    createdBy_ = value;
    createdByIsSet_ = true;
}

bool HostClusterInfo::createdByIsSet() const
{
    return createdByIsSet_;
}

void HostClusterInfo::unsetcreatedBy()
{
    createdByIsSet_ = false;
}

std::string HostClusterInfo::getDescription() const
{
    return description_;
}

void HostClusterInfo::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool HostClusterInfo::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void HostClusterInfo::unsetdescription()
{
    descriptionIsSet_ = false;
}

PermissionClusterDetail HostClusterInfo::getPermission() const
{
    return permission_;
}

void HostClusterInfo::setPermission(const PermissionClusterDetail& value)
{
    permission_ = value;
    permissionIsSet_ = true;
}

bool HostClusterInfo::permissionIsSet() const
{
    return permissionIsSet_;
}

void HostClusterInfo::unsetpermission()
{
    permissionIsSet_ = false;
}

std::string HostClusterInfo::getNickName() const
{
    return nickName_;
}

void HostClusterInfo::setNickName(const std::string& value)
{
    nickName_ = value;
    nickNameIsSet_ = true;
}

bool HostClusterInfo::nickNameIsSet() const
{
    return nickNameIsSet_;
}

void HostClusterInfo::unsetnickName()
{
    nickNameIsSet_ = false;
}

int32_t HostClusterInfo::getEnvCount() const
{
    return envCount_;
}

void HostClusterInfo::setEnvCount(int32_t value)
{
    envCount_ = value;
    envCountIsSet_ = true;
}

bool HostClusterInfo::envCountIsSet() const
{
    return envCountIsSet_;
}

void HostClusterInfo::unsetenvCount()
{
    envCountIsSet_ = false;
}

}
}
}
}
}


