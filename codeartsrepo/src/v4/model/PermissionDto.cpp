

#include "huaweicloud/codeartsrepo/v4/model/PermissionDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




PermissionDto::PermissionDto()
{
    order_ = 0;
    orderIsSet_ = false;
    roleId_ = "";
    roleIdIsSet_ = false;
    roleName_ = "";
    roleNameIsSet_ = false;
    roleNameCn_ = "";
    roleNameCnIsSet_ = false;
    resourcePermissionsIsSet_ = false;
}

PermissionDto::~PermissionDto() = default;

void PermissionDto::validate()
{
}

web::json::value PermissionDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(orderIsSet_) {
        val[utility::conversions::to_string_t("order")] = ModelBase::toJson(order_);
    }
    if(roleIdIsSet_) {
        val[utility::conversions::to_string_t("role_id")] = ModelBase::toJson(roleId_);
    }
    if(roleNameIsSet_) {
        val[utility::conversions::to_string_t("role_name")] = ModelBase::toJson(roleName_);
    }
    if(roleNameCnIsSet_) {
        val[utility::conversions::to_string_t("role_name_cn")] = ModelBase::toJson(roleNameCn_);
    }
    if(resourcePermissionsIsSet_) {
        val[utility::conversions::to_string_t("resource_permissions")] = ModelBase::toJson(resourcePermissions_);
    }

    return val;
}
bool PermissionDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("order"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("order"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOrder(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("role_id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role_id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoleId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("role_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoleName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("role_name_cn"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role_name_cn"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoleNameCn(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("resource_permissions"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("resource_permissions"));
        if(!fieldValue.is_null())
        {
            std::map<std::string, ResourcePermissionDto> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setResourcePermissions(refVal);
        }
    }
    return ok;
}


int32_t PermissionDto::getOrder() const
{
    return order_;
}

void PermissionDto::setOrder(int32_t value)
{
    order_ = value;
    orderIsSet_ = true;
}

bool PermissionDto::orderIsSet() const
{
    return orderIsSet_;
}

void PermissionDto::unsetorder()
{
    orderIsSet_ = false;
}

std::string PermissionDto::getRoleId() const
{
    return roleId_;
}

void PermissionDto::setRoleId(const std::string& value)
{
    roleId_ = value;
    roleIdIsSet_ = true;
}

bool PermissionDto::roleIdIsSet() const
{
    return roleIdIsSet_;
}

void PermissionDto::unsetroleId()
{
    roleIdIsSet_ = false;
}

std::string PermissionDto::getRoleName() const
{
    return roleName_;
}

void PermissionDto::setRoleName(const std::string& value)
{
    roleName_ = value;
    roleNameIsSet_ = true;
}

bool PermissionDto::roleNameIsSet() const
{
    return roleNameIsSet_;
}

void PermissionDto::unsetroleName()
{
    roleNameIsSet_ = false;
}

std::string PermissionDto::getRoleNameCn() const
{
    return roleNameCn_;
}

void PermissionDto::setRoleNameCn(const std::string& value)
{
    roleNameCn_ = value;
    roleNameCnIsSet_ = true;
}

bool PermissionDto::roleNameCnIsSet() const
{
    return roleNameCnIsSet_;
}

void PermissionDto::unsetroleNameCn()
{
    roleNameCnIsSet_ = false;
}

std::map<std::string, ResourcePermissionDto>& PermissionDto::getResourcePermissions()
{
    return resourcePermissions_;
}

void PermissionDto::setResourcePermissions(const std::map<std::string, ResourcePermissionDto>& value)
{
    resourcePermissions_ = value;
    resourcePermissionsIsSet_ = true;
}

bool PermissionDto::resourcePermissionsIsSet() const
{
    return resourcePermissionsIsSet_;
}

void PermissionDto::unsetresourcePermissions()
{
    resourcePermissionsIsSet_ = false;
}

}
}
}
}
}


