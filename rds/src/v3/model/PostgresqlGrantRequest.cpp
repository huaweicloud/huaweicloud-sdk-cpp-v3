

#include "huaweicloud/rds/v3/model/PostgresqlGrantRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




PostgresqlGrantRequest::PostgresqlGrantRequest()
{
    dbName_ = "";
    dbNameIsSet_ = false;
    usersIsSet_ = false;
}

PostgresqlGrantRequest::~PostgresqlGrantRequest() = default;

void PostgresqlGrantRequest::validate()
{
}

web::json::value PostgresqlGrantRequest::toJson() const
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

bool PostgresqlGrantRequest::fromJson(const web::json::value& val)
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
            std::vector<PostgresqlUserWithPrivilege> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsers(refVal);
        }
    }
    return ok;
}

std::string PostgresqlGrantRequest::getDbName() const
{
    return dbName_;
}

void PostgresqlGrantRequest::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool PostgresqlGrantRequest::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void PostgresqlGrantRequest::unsetdbName()
{
    dbNameIsSet_ = false;
}

std::vector<PostgresqlUserWithPrivilege>& PostgresqlGrantRequest::getUsers()
{
    return users_;
}

void PostgresqlGrantRequest::setUsers(const std::vector<PostgresqlUserWithPrivilege>& value)
{
    users_ = value;
    usersIsSet_ = true;
}

bool PostgresqlGrantRequest::usersIsSet() const
{
    return usersIsSet_;
}

void PostgresqlGrantRequest::unsetusers()
{
    usersIsSet_ = false;
}

}
}
}
}
}


