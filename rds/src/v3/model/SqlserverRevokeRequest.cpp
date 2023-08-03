

#include "huaweicloud/rds/v3/model/SqlserverRevokeRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




SqlserverRevokeRequest::SqlserverRevokeRequest()
{
    dbName_ = "";
    dbNameIsSet_ = false;
    usersIsSet_ = false;
}

SqlserverRevokeRequest::~SqlserverRevokeRequest() = default;

void SqlserverRevokeRequest::validate()
{
}

web::json::value SqlserverRevokeRequest::toJson() const
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

bool SqlserverRevokeRequest::fromJson(const web::json::value& val)
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

std::string SqlserverRevokeRequest::getDbName() const
{
    return dbName_;
}

void SqlserverRevokeRequest::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool SqlserverRevokeRequest::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void SqlserverRevokeRequest::unsetdbName()
{
    dbNameIsSet_ = false;
}

std::vector<SqlserverUserWithPrivilege>& SqlserverRevokeRequest::getUsers()
{
    return users_;
}

void SqlserverRevokeRequest::setUsers(const std::vector<SqlserverUserWithPrivilege>& value)
{
    users_ = value;
    usersIsSet_ = true;
}

bool SqlserverRevokeRequest::usersIsSet() const
{
    return usersIsSet_;
}

void SqlserverRevokeRequest::unsetusers()
{
    usersIsSet_ = false;
}

}
}
}
}
}


