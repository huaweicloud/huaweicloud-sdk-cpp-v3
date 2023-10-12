

#include "huaweicloud/dds/v3/model/DeleteDatabaseRoleRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




DeleteDatabaseRoleRequestBody::DeleteDatabaseRoleRequestBody()
{
    roleName_ = "";
    roleNameIsSet_ = false;
    dbName_ = "";
    dbNameIsSet_ = false;
}

DeleteDatabaseRoleRequestBody::~DeleteDatabaseRoleRequestBody() = default;

void DeleteDatabaseRoleRequestBody::validate()
{
}

web::json::value DeleteDatabaseRoleRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(roleNameIsSet_) {
        val[utility::conversions::to_string_t("role_name")] = ModelBase::toJson(roleName_);
    }
    if(dbNameIsSet_) {
        val[utility::conversions::to_string_t("db_name")] = ModelBase::toJson(dbName_);
    }

    return val;
}
bool DeleteDatabaseRoleRequestBody::fromJson(const web::json::value& val)
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
    return ok;
}


std::string DeleteDatabaseRoleRequestBody::getRoleName() const
{
    return roleName_;
}

void DeleteDatabaseRoleRequestBody::setRoleName(const std::string& value)
{
    roleName_ = value;
    roleNameIsSet_ = true;
}

bool DeleteDatabaseRoleRequestBody::roleNameIsSet() const
{
    return roleNameIsSet_;
}

void DeleteDatabaseRoleRequestBody::unsetroleName()
{
    roleNameIsSet_ = false;
}

std::string DeleteDatabaseRoleRequestBody::getDbName() const
{
    return dbName_;
}

void DeleteDatabaseRoleRequestBody::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool DeleteDatabaseRoleRequestBody::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void DeleteDatabaseRoleRequestBody::unsetdbName()
{
    dbNameIsSet_ = false;
}

}
}
}
}
}


