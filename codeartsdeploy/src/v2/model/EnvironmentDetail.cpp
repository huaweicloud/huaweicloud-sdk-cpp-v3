

#include "huaweicloud/codeartsdeploy/v2/model/EnvironmentDetail.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsdeploy {
namespace V2 {
namespace Model {




EnvironmentDetail::EnvironmentDetail()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    description_ = "";
    descriptionIsSet_ = false;
    os_ = "";
    osIsSet_ = false;
    nickName_ = "";
    nickNameIsSet_ = false;
    deployType_ = 0;
    deployTypeIsSet_ = false;
    createdTime_ = "";
    createdTimeIsSet_ = false;
    instanceCount_ = 0;
    instanceCountIsSet_ = false;
    createdByIsSet_ = false;
    permissionIsSet_ = false;
}

EnvironmentDetail::~EnvironmentDetail() = default;

void EnvironmentDetail::validate()
{
}

web::json::value EnvironmentDetail::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(descriptionIsSet_) {
        val[utility::conversions::to_string_t("description")] = ModelBase::toJson(description_);
    }
    if(osIsSet_) {
        val[utility::conversions::to_string_t("os")] = ModelBase::toJson(os_);
    }
    if(nickNameIsSet_) {
        val[utility::conversions::to_string_t("nick_name")] = ModelBase::toJson(nickName_);
    }
    if(deployTypeIsSet_) {
        val[utility::conversions::to_string_t("deploy_type")] = ModelBase::toJson(deployType_);
    }
    if(createdTimeIsSet_) {
        val[utility::conversions::to_string_t("created_time")] = ModelBase::toJson(createdTime_);
    }
    if(instanceCountIsSet_) {
        val[utility::conversions::to_string_t("instance_count")] = ModelBase::toJson(instanceCount_);
    }
    if(createdByIsSet_) {
        val[utility::conversions::to_string_t("created_by")] = ModelBase::toJson(createdBy_);
    }
    if(permissionIsSet_) {
        val[utility::conversions::to_string_t("permission")] = ModelBase::toJson(permission_);
    }

    return val;
}
bool EnvironmentDetail::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("description"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("description"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDescription(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("nick_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nick_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNickName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("deploy_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("deploy_type"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDeployType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("instance_count"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("instance_count"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setInstanceCount(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("permission"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("permission"));
        if(!fieldValue.is_null())
        {
            EnvironmentPermissionDetail refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPermission(refVal);
        }
    }
    return ok;
}


std::string EnvironmentDetail::getId() const
{
    return id_;
}

void EnvironmentDetail::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool EnvironmentDetail::idIsSet() const
{
    return idIsSet_;
}

void EnvironmentDetail::unsetid()
{
    idIsSet_ = false;
}

std::string EnvironmentDetail::getName() const
{
    return name_;
}

void EnvironmentDetail::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool EnvironmentDetail::nameIsSet() const
{
    return nameIsSet_;
}

void EnvironmentDetail::unsetname()
{
    nameIsSet_ = false;
}

std::string EnvironmentDetail::getDescription() const
{
    return description_;
}

void EnvironmentDetail::setDescription(const std::string& value)
{
    description_ = value;
    descriptionIsSet_ = true;
}

bool EnvironmentDetail::descriptionIsSet() const
{
    return descriptionIsSet_;
}

void EnvironmentDetail::unsetdescription()
{
    descriptionIsSet_ = false;
}

std::string EnvironmentDetail::getOs() const
{
    return os_;
}

void EnvironmentDetail::setOs(const std::string& value)
{
    os_ = value;
    osIsSet_ = true;
}

bool EnvironmentDetail::osIsSet() const
{
    return osIsSet_;
}

void EnvironmentDetail::unsetos()
{
    osIsSet_ = false;
}

std::string EnvironmentDetail::getNickName() const
{
    return nickName_;
}

void EnvironmentDetail::setNickName(const std::string& value)
{
    nickName_ = value;
    nickNameIsSet_ = true;
}

bool EnvironmentDetail::nickNameIsSet() const
{
    return nickNameIsSet_;
}

void EnvironmentDetail::unsetnickName()
{
    nickNameIsSet_ = false;
}

int32_t EnvironmentDetail::getDeployType() const
{
    return deployType_;
}

void EnvironmentDetail::setDeployType(int32_t value)
{
    deployType_ = value;
    deployTypeIsSet_ = true;
}

bool EnvironmentDetail::deployTypeIsSet() const
{
    return deployTypeIsSet_;
}

void EnvironmentDetail::unsetdeployType()
{
    deployTypeIsSet_ = false;
}

std::string EnvironmentDetail::getCreatedTime() const
{
    return createdTime_;
}

void EnvironmentDetail::setCreatedTime(const std::string& value)
{
    createdTime_ = value;
    createdTimeIsSet_ = true;
}

bool EnvironmentDetail::createdTimeIsSet() const
{
    return createdTimeIsSet_;
}

void EnvironmentDetail::unsetcreatedTime()
{
    createdTimeIsSet_ = false;
}

int32_t EnvironmentDetail::getInstanceCount() const
{
    return instanceCount_;
}

void EnvironmentDetail::setInstanceCount(int32_t value)
{
    instanceCount_ = value;
    instanceCountIsSet_ = true;
}

bool EnvironmentDetail::instanceCountIsSet() const
{
    return instanceCountIsSet_;
}

void EnvironmentDetail::unsetinstanceCount()
{
    instanceCountIsSet_ = false;
}

UserInfo EnvironmentDetail::getCreatedBy() const
{
    return createdBy_;
}

void EnvironmentDetail::setCreatedBy(const UserInfo& value)
{
    createdBy_ = value;
    createdByIsSet_ = true;
}

bool EnvironmentDetail::createdByIsSet() const
{
    return createdByIsSet_;
}

void EnvironmentDetail::unsetcreatedBy()
{
    createdByIsSet_ = false;
}

EnvironmentPermissionDetail EnvironmentDetail::getPermission() const
{
    return permission_;
}

void EnvironmentDetail::setPermission(const EnvironmentPermissionDetail& value)
{
    permission_ = value;
    permissionIsSet_ = true;
}

bool EnvironmentDetail::permissionIsSet() const
{
    return permissionIsSet_;
}

void EnvironmentDetail::unsetpermission()
{
    permissionIsSet_ = false;
}

}
}
}
}
}


