

#include "huaweicloud/rds/v3/model/GrantRequest.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




GrantRequest::GrantRequest()
{
    dbName_ = "";
    dbNameIsSet_ = false;
    usersIsSet_ = false;
}

GrantRequest::~GrantRequest() = default;

void GrantRequest::validate()
{
}

web::json::value GrantRequest::toJson() const
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

bool GrantRequest::fromJson(const web::json::value& val)
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
            std::vector<UserWithPrivilege> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsers(refVal);
        }
    }
    return ok;
}

std::string GrantRequest::getDbName() const
{
    return dbName_;
}

void GrantRequest::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool GrantRequest::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void GrantRequest::unsetdbName()
{
    dbNameIsSet_ = false;
}

std::vector<UserWithPrivilege>& GrantRequest::getUsers()
{
    return users_;
}

void GrantRequest::setUsers(const std::vector<UserWithPrivilege>& value)
{
    users_ = value;
    usersIsSet_ = true;
}

bool GrantRequest::usersIsSet() const
{
    return usersIsSet_;
}

void GrantRequest::unsetusers()
{
    usersIsSet_ = false;
}

}
}
}
}
}


