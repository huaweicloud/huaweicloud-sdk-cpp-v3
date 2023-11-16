

#include "huaweicloud/rds/v3/model/RevokePostgresqlDbPrivilegeRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




RevokePostgresqlDbPrivilegeRequestBody::RevokePostgresqlDbPrivilegeRequestBody()
{
    dbName_ = "";
    dbNameIsSet_ = false;
    usersIsSet_ = false;
}

RevokePostgresqlDbPrivilegeRequestBody::~RevokePostgresqlDbPrivilegeRequestBody() = default;

void RevokePostgresqlDbPrivilegeRequestBody::validate()
{
}

web::json::value RevokePostgresqlDbPrivilegeRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dbNameIsSet_) {
        val[utility::conversions::to_string_t("db_name")] = ModelBase::toJson(dbName_);
    }
    if(usersIsSet_) {
        val[utility::conversions::to_string_t("users")] = ModelBase::toJson(users_);
    }

    return val;
}
bool RevokePostgresqlDbPrivilegeRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("db_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("users"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("users"));
        if(!fieldValue.is_null())
        {
            std::vector<RevokePostgresqlDbPrivilegeUser> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsers(refVal);
        }
    }
    return ok;
}


std::string RevokePostgresqlDbPrivilegeRequestBody::getDbName() const
{
    return dbName_;
}

void RevokePostgresqlDbPrivilegeRequestBody::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool RevokePostgresqlDbPrivilegeRequestBody::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void RevokePostgresqlDbPrivilegeRequestBody::unsetdbName()
{
    dbNameIsSet_ = false;
}

std::vector<RevokePostgresqlDbPrivilegeUser>& RevokePostgresqlDbPrivilegeRequestBody::getUsers()
{
    return users_;
}

void RevokePostgresqlDbPrivilegeRequestBody::setUsers(const std::vector<RevokePostgresqlDbPrivilegeUser>& value)
{
    users_ = value;
    usersIsSet_ = true;
}

bool RevokePostgresqlDbPrivilegeRequestBody::usersIsSet() const
{
    return usersIsSet_;
}

void RevokePostgresqlDbPrivilegeRequestBody::unsetusers()
{
    usersIsSet_ = false;
}

}
}
}
}
}


