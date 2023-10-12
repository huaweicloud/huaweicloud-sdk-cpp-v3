

#include "huaweicloud/dds/v3/model/CreateDatabaseRoleRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




CreateDatabaseRoleRequestBody::CreateDatabaseRoleRequestBody()
{
    roleName_ = "";
    roleNameIsSet_ = false;
    dbName_ = "";
    dbNameIsSet_ = false;
    rolesIsSet_ = false;
}

CreateDatabaseRoleRequestBody::~CreateDatabaseRoleRequestBody() = default;

void CreateDatabaseRoleRequestBody::validate()
{
}

web::json::value CreateDatabaseRoleRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(roleNameIsSet_) {
        val[utility::conversions::to_string_t("role_name")] = ModelBase::toJson(roleName_);
    }
    if(dbNameIsSet_) {
        val[utility::conversions::to_string_t("db_name")] = ModelBase::toJson(dbName_);
    }
    if(rolesIsSet_) {
        val[utility::conversions::to_string_t("roles")] = ModelBase::toJson(roles_);
    }

    return val;
}
bool CreateDatabaseRoleRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("role_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("role_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoleName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("roles"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("roles"));
        if(!fieldValue.is_null())
        {
            std::vector<RolesOption> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRoles(refVal);
        }
    }
    return ok;
}


std::string CreateDatabaseRoleRequestBody::getRoleName() const
{
    return roleName_;
}

void CreateDatabaseRoleRequestBody::setRoleName(const std::string& value)
{
    roleName_ = value;
    roleNameIsSet_ = true;
}

bool CreateDatabaseRoleRequestBody::roleNameIsSet() const
{
    return roleNameIsSet_;
}

void CreateDatabaseRoleRequestBody::unsetroleName()
{
    roleNameIsSet_ = false;
}

std::string CreateDatabaseRoleRequestBody::getDbName() const
{
    return dbName_;
}

void CreateDatabaseRoleRequestBody::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool CreateDatabaseRoleRequestBody::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void CreateDatabaseRoleRequestBody::unsetdbName()
{
    dbNameIsSet_ = false;
}

std::vector<RolesOption>& CreateDatabaseRoleRequestBody::getRoles()
{
    return roles_;
}

void CreateDatabaseRoleRequestBody::setRoles(const std::vector<RolesOption>& value)
{
    roles_ = value;
    rolesIsSet_ = true;
}

bool CreateDatabaseRoleRequestBody::rolesIsSet() const
{
    return rolesIsSet_;
}

void CreateDatabaseRoleRequestBody::unsetroles()
{
    rolesIsSet_ = false;
}

}
}
}
}
}


