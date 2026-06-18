

#include "huaweicloud/codeartsrepo/v4/model/MultipleRoleDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsrepo {
namespace V4 {
namespace Model {




MultipleRoleDto::MultipleRoleDto()
{
    roleId_ = "";
    roleIdIsSet_ = false;
    roleName_ = "";
    roleNameIsSet_ = false;
    roleChineseName_ = "";
    roleChineseNameIsSet_ = false;
}

MultipleRoleDto::~MultipleRoleDto() = default;

void MultipleRoleDto::validate()
{
}

web::json::value MultipleRoleDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(roleIdIsSet_) {
        val[utility::conversions::to_string_t("role_id")] = ModelBase::toJson(roleId_);
    }
    if(roleNameIsSet_) {
        val[utility::conversions::to_string_t("role_name")] = ModelBase::toJson(roleName_);
    }
    if(roleChineseNameIsSet_) {
        val[utility::conversions::to_string_t("role_chinese_name")] = ModelBase::toJson(roleChineseName_);
    }

    return val;
}
bool MultipleRoleDto::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("role_chinese_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role_chinese_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoleChineseName(refVal);
        }
    }
    return ok;
}


std::string MultipleRoleDto::getRoleId() const
{
    return roleId_;
}

void MultipleRoleDto::setRoleId(const std::string& value)
{
    roleId_ = value;
    roleIdIsSet_ = true;
}

bool MultipleRoleDto::roleIdIsSet() const
{
    return roleIdIsSet_;
}

void MultipleRoleDto::unsetroleId()
{
    roleIdIsSet_ = false;
}

std::string MultipleRoleDto::getRoleName() const
{
    return roleName_;
}

void MultipleRoleDto::setRoleName(const std::string& value)
{
    roleName_ = value;
    roleNameIsSet_ = true;
}

bool MultipleRoleDto::roleNameIsSet() const
{
    return roleNameIsSet_;
}

void MultipleRoleDto::unsetroleName()
{
    roleNameIsSet_ = false;
}

std::string MultipleRoleDto::getRoleChineseName() const
{
    return roleChineseName_;
}

void MultipleRoleDto::setRoleChineseName(const std::string& value)
{
    roleChineseName_ = value;
    roleChineseNameIsSet_ = true;
}

bool MultipleRoleDto::roleChineseNameIsSet() const
{
    return roleChineseNameIsSet_;
}

void MultipleRoleDto::unsetroleChineseName()
{
    roleChineseNameIsSet_ = false;
}

}
}
}
}
}


