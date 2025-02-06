

#include "huaweicloud/identitycenter/v1/model/ResourceAttachedManagedPolicyDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Identitycenter {
namespace V1 {
namespace Model {




ResourceAttachedManagedPolicyDto::ResourceAttachedManagedPolicyDto()
{
    roleId_ = "";
    roleIdIsSet_ = false;
    roleName_ = "";
    roleNameIsSet_ = false;
}

ResourceAttachedManagedPolicyDto::~ResourceAttachedManagedPolicyDto() = default;

void ResourceAttachedManagedPolicyDto::validate()
{
}

web::json::value ResourceAttachedManagedPolicyDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(roleIdIsSet_) {
        val[utility::conversions::to_string_t("role_id")] = ModelBase::toJson(roleId_);
    }
    if(roleNameIsSet_) {
        val[utility::conversions::to_string_t("role_name")] = ModelBase::toJson(roleName_);
    }

    return val;
}
bool ResourceAttachedManagedPolicyDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
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
    return ok;
}


std::string ResourceAttachedManagedPolicyDto::getRoleId() const
{
    return roleId_;
}

void ResourceAttachedManagedPolicyDto::setRoleId(const std::string& value)
{
    roleId_ = value;
    roleIdIsSet_ = true;
}

bool ResourceAttachedManagedPolicyDto::roleIdIsSet() const
{
    return roleIdIsSet_;
}

void ResourceAttachedManagedPolicyDto::unsetroleId()
{
    roleIdIsSet_ = false;
}

std::string ResourceAttachedManagedPolicyDto::getRoleName() const
{
    return roleName_;
}

void ResourceAttachedManagedPolicyDto::setRoleName(const std::string& value)
{
    roleName_ = value;
    roleNameIsSet_ = true;
}

bool ResourceAttachedManagedPolicyDto::roleNameIsSet() const
{
    return roleNameIsSet_;
}

void ResourceAttachedManagedPolicyDto::unsetroleName()
{
    roleNameIsSet_ = false;
}

}
}
}
}
}


