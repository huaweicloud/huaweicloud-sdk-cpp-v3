

#include "huaweicloud/dds/v3/model/CreateDatabaseUserRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




CreateDatabaseUserRequestBody::CreateDatabaseUserRequestBody()
{
    userName_ = "";
    userNameIsSet_ = false;
    userPwd_ = "";
    userPwdIsSet_ = false;
    dbName_ = "";
    dbNameIsSet_ = false;
    rolesIsSet_ = false;
}

CreateDatabaseUserRequestBody::~CreateDatabaseUserRequestBody() = default;

void CreateDatabaseUserRequestBody::validate()
{
}

web::json::value CreateDatabaseUserRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(userPwdIsSet_) {
        val[utility::conversions::to_string_t("user_pwd")] = ModelBase::toJson(userPwd_);
    }
    if(dbNameIsSet_) {
        val[utility::conversions::to_string_t("db_name")] = ModelBase::toJson(dbName_);
    }
    if(rolesIsSet_) {
        val[utility::conversions::to_string_t("roles")] = ModelBase::toJson(roles_);
    }

    return val;
}

bool CreateDatabaseUserRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_pwd"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_pwd"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserPwd(refVal);
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

std::string CreateDatabaseUserRequestBody::getUserName() const
{
    return userName_;
}

void CreateDatabaseUserRequestBody::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool CreateDatabaseUserRequestBody::userNameIsSet() const
{
    return userNameIsSet_;
}

void CreateDatabaseUserRequestBody::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string CreateDatabaseUserRequestBody::getUserPwd() const
{
    return userPwd_;
}

void CreateDatabaseUserRequestBody::setUserPwd(const std::string& value)
{
    userPwd_ = value;
    userPwdIsSet_ = true;
}

bool CreateDatabaseUserRequestBody::userPwdIsSet() const
{
    return userPwdIsSet_;
}

void CreateDatabaseUserRequestBody::unsetuserPwd()
{
    userPwdIsSet_ = false;
}

std::string CreateDatabaseUserRequestBody::getDbName() const
{
    return dbName_;
}

void CreateDatabaseUserRequestBody::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool CreateDatabaseUserRequestBody::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void CreateDatabaseUserRequestBody::unsetdbName()
{
    dbNameIsSet_ = false;
}

std::vector<RolesOption>& CreateDatabaseUserRequestBody::getRoles()
{
    return roles_;
}

void CreateDatabaseUserRequestBody::setRoles(const std::vector<RolesOption>& value)
{
    roles_ = value;
    rolesIsSet_ = true;
}

bool CreateDatabaseUserRequestBody::rolesIsSet() const
{
    return rolesIsSet_;
}

void CreateDatabaseUserRequestBody::unsetroles()
{
    rolesIsSet_ = false;
}

}
}
}
}
}


