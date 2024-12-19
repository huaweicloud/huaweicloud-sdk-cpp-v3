

#include "huaweicloud/gaussdbforopengauss/v3/model/AllowDbRolePrivilegesRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




AllowDbRolePrivilegesRequestBody::AllowDbRolePrivilegesRequestBody()
{
    dbName_ = "";
    dbNameIsSet_ = false;
    userIsSet_ = false;
}

AllowDbRolePrivilegesRequestBody::~AllowDbRolePrivilegesRequestBody() = default;

void AllowDbRolePrivilegesRequestBody::validate()
{
}

web::json::value AllowDbRolePrivilegesRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dbNameIsSet_) {
        val[utility::conversions::to_string_t("db_name")] = ModelBase::toJson(dbName_);
    }
    if(userIsSet_) {
        val[utility::conversions::to_string_t("user")] = ModelBase::toJson(user_);
    }

    return val;
}
bool AllowDbRolePrivilegesRequestBody::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user"));
        if(!fieldValue.is_null())
        {
            Object refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUser(refVal);
        }
    }
    return ok;
}


std::string AllowDbRolePrivilegesRequestBody::getDbName() const
{
    return dbName_;
}

void AllowDbRolePrivilegesRequestBody::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool AllowDbRolePrivilegesRequestBody::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void AllowDbRolePrivilegesRequestBody::unsetdbName()
{
    dbNameIsSet_ = false;
}

Object AllowDbRolePrivilegesRequestBody::getUser() const
{
    return user_;
}

void AllowDbRolePrivilegesRequestBody::setUser(const Object& value)
{
    user_ = value;
    userIsSet_ = true;
}

bool AllowDbRolePrivilegesRequestBody::userIsSet() const
{
    return userIsSet_;
}

void AllowDbRolePrivilegesRequestBody::unsetuser()
{
    userIsSet_ = false;
}

}
}
}
}
}


