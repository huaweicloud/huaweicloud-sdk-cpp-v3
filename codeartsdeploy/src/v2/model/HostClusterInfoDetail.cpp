

#include "huaweicloud/codeartsdeploy/v2/model/HostClusterInfoDetail.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




HostClusterInfoDetail::HostClusterInfoDetail()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
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
    isProxyMode_ = 0;
    isProxyModeIsSet_ = false;
    createdTime_ = "";
    createdTimeIsSet_ = false;
    updatedTime_ = "";
    updatedTimeIsSet_ = false;
}

HostClusterInfoDetail::~HostClusterInfoDetail() = default;

void HostClusterInfoDetail::validate()
{
}

web::json::value HostClusterInfoDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
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
    if(isProxyModeIsSet_) {
        val[utility::conversions::to_string_t("is_proxy_mode")] = ModelBase::toJson(isProxyMode_);
    }
    if(createdTimeIsSet_) {
        val[utility::conversions::to_string_t("created_time")] = ModelBase::toJson(createdTime_);
    }
    if(updatedTimeIsSet_) {
        val[utility::conversions::to_string_t("updated_time")] = ModelBase::toJson(updatedTime_);
    }

    return val;
}

bool HostClusterInfoDetail::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("is_proxy_mode"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("is_proxy_mode"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIsProxyMode(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("created_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("created_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCreatedTime(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("updated_time"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("updated_time"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUpdatedTime(refVal);
        }
    }
    return ok;
}

std::string HostClusterInfoDetail::getId() const
{
    return id_;
}

void HostClusterInfoDetail::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool HostClusterInfoDetail::idIsSet() const
{
    return idIsSet_;
}

void HostClusterInfoDetail::unsetid()
{
    idIsSet_ = false;
}

std::string HostClusterInfoDetail::getName() const
{
    return name_;
}

void HostClusterInfoDetail::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool HostClusterInfoDetail::nameIsSet() const
{
    return nameIsSet_;
}

void HostClusterInfoDetail::unsetname()
{
    nameIsSet_ = false;
}

std::string HostClusterInfoDetail::getOs() const
{
    return os_;
}

void HostClusterInfoDetail::setOs(const std::string& value)
{
    os_ = value;
    osIsSet_ = true;
}

bool HostClusterInfoDetail::osIsSet() const
{
    return osIsSet_;
}

void HostClusterInfoDetail::unsetos()
{
    osIsSet_ = false;
}

std::string HostClusterInfoDetail::getSlaveClusterId() const
{
    return slaveClusterId_;
}

void HostClusterInfoDetail::setSlaveClusterId(const std::string& value)
{
    slaveClusterId_ = value;
    slaveClusterIdIsSet_ = true;
}

bool HostClusterInfoDetail::slaveClusterIdIsSet() const
{
    return slaveClusterIdIsSet_;
}

void HostClusterInfoDetail::unsetslaveClusterId()
{
    slaveClusterIdIsSet_ = false;
}

UserInfo HostClusterInfoDetail::getCreatedBy() const
{
    return createdBy_;
}

void HostClusterInfoDetail::setCreatedBy(const UserInfo& value)
{
    createdBy_ = value;
    createdByIsSet_ = true;
}

bool HostClusterInfoDetail::createdByIsSet() const
{
    return createdByIsSet_;
}

void HostClusterInfoDetail::unsetcreatedBy()
{
    createdByIsSet_ = false;
}

std::string HostClusterInfoDetail::getDescription() const
{
    return description_;
}

void HostClusterInfoDetail::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool HostClusterInfoDetail::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void HostClusterInfoDetail::unsetdescription()
{
    descriptionIsSet_ = false;
}

PermissionClusterDetail HostClusterInfoDetail::getPermission() const
{
    return permission_;
}

void HostClusterInfoDetail::setPermission(const PermissionClusterDetail& value)
{
    permission_ = value;
    permissionIsSet_ = true;
}

bool HostClusterInfoDetail::permissionIsSet() const
{
    return permissionIsSet_;
}

void HostClusterInfoDetail::unsetpermission()
{
    permissionIsSet_ = false;
}

std::string HostClusterInfoDetail::getNickName() const
{
    return nickName_;
}

void HostClusterInfoDetail::setNickName(const std::string& value)
{
    nickName_ = value;
    nickNameIsSet_ = true;
}

bool HostClusterInfoDetail::nickNameIsSet() const
{
    return nickNameIsSet_;
}

void HostClusterInfoDetail::unsetnickName()
{
    nickNameIsSet_ = false;
}

int32_t HostClusterInfoDetail::getIsProxyMode() const
{
    return isProxyMode_;
}

void HostClusterInfoDetail::setIsProxyMode(int32_t value)
{
    isProxyMode_ = value;
    isProxyModeIsSet_ = true;
}

bool HostClusterInfoDetail::isProxyModeIsSet() const
{
    return isProxyModeIsSet_;
}

void HostClusterInfoDetail::unsetisProxyMode()
{
    isProxyModeIsSet_ = false;
}

std::string HostClusterInfoDetail::getCreatedTime() const
{
    return createdTime_;
}

void HostClusterInfoDetail::setCreatedTime(const std::string& value)
{
    createdTime_ = value;
    createdTimeIsSet_ = true;
}

bool HostClusterInfoDetail::createdTimeIsSet() const
{
    return createdTimeIsSet_;
}

void HostClusterInfoDetail::unsetcreatedTime()
{
    createdTimeIsSet_ = false;
}

std::string HostClusterInfoDetail::getUpdatedTime() const
{
    return updatedTime_;
}

void HostClusterInfoDetail::setUpdatedTime(const std::string& value)
{
    updatedTime_ = value;
    updatedTimeIsSet_ = true;
}

bool HostClusterInfoDetail::updatedTimeIsSet() const
{
    return updatedTimeIsSet_;
}

void HostClusterInfoDetail::unsetupdatedTime()
{
    updatedTimeIsSet_ = false;
}

}
}
}
}
}


