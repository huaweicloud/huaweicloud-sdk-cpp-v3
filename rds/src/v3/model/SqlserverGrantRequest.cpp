

#include "huaweicloud/rds/v3/model/SqlserverGrantRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SqlserverGrantRequest::SqlserverGrantRequest()
{
    dbName_ = "";
    dbNameIsSet_ = false;
    usersIsSet_ = false;
}

SqlserverGrantRequest::~SqlserverGrantRequest() = default;

void SqlserverGrantRequest::validate()
{
}

web::json::value SqlserverGrantRequest::toJson() const
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

bool SqlserverGrantRequest::fromJson(const web::json::value& val)
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
            std::vector<SqlserverUserWithPrivilege> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsers(refVal);
        }
    }
    return ok;
}

std::string SqlserverGrantRequest::getDbName() const
{
    return dbName_;
}

void SqlserverGrantRequest::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool SqlserverGrantRequest::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void SqlserverGrantRequest::unsetdbName()
{
    dbNameIsSet_ = false;
}

std::vector<SqlserverUserWithPrivilege>& SqlserverGrantRequest::getUsers()
{
    return users_;
}

void SqlserverGrantRequest::setUsers(const std::vector<SqlserverUserWithPrivilege>& value)
{
    users_ = value;
    usersIsSet_ = true;
}

bool SqlserverGrantRequest::usersIsSet() const
{
    return usersIsSet_;
}

void SqlserverGrantRequest::unsetusers()
{
    usersIsSet_ = false;
}

}
}
}
}
}


