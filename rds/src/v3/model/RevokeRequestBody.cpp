

#include "huaweicloud/rds/v3/model/RevokeRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




RevokeRequestBody::RevokeRequestBody()
{
    dbName_ = "";
    dbNameIsSet_ = false;
    usersIsSet_ = false;
}

RevokeRequestBody::~RevokeRequestBody() = default;

void RevokeRequestBody::validate()
{
}

web::json::value RevokeRequestBody::toJson() const
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

bool RevokeRequestBody::fromJson(const web::json::value& val)
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
            std::vector<RevokeRequestBody_users> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsers(refVal);
        }
    }
    return ok;
}

std::string RevokeRequestBody::getDbName() const
{
    return dbName_;
}

void RevokeRequestBody::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool RevokeRequestBody::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void RevokeRequestBody::unsetdbName()
{
    dbNameIsSet_ = false;
}

std::vector<RevokeRequestBody_users>& RevokeRequestBody::getUsers()
{
    return users_;
}

void RevokeRequestBody::setUsers(const std::vector<RevokeRequestBody_users>& value)
{
    users_ = value;
    usersIsSet_ = true;
}

bool RevokeRequestBody::usersIsSet() const
{
    return usersIsSet_;
}

void RevokeRequestBody::unsetusers()
{
    usersIsSet_ = false;
}

}
}
}
}
}


