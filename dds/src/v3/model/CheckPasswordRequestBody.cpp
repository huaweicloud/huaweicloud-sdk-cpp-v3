

#include "huaweicloud/dds/v3/model/CheckPasswordRequestBody.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Dds {
namespace V3 {
namespace Model {




CheckPasswordRequestBody::CheckPasswordRequestBody()
{
    userPwd_ = "";
    userPwdIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
    dbName_ = "";
    dbNameIsSet_ = false;
}

CheckPasswordRequestBody::~CheckPasswordRequestBody() = default;

void CheckPasswordRequestBody::validate()
{
}

web::json::value CheckPasswordRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(userPwdIsSet_) {
        val[utility::conversions::to_string_t("user_pwd")] = ModelBase::toJson(userPwd_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(dbNameIsSet_) {
        val[utility::conversions::to_string_t("db_name")] = ModelBase::toJson(dbName_);
    }

    return val;
}

bool CheckPasswordRequestBody::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("user_pwd"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_pwd"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserPwd(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserName(refVal);
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

std::string CheckPasswordRequestBody::getUserPwd() const
{
    return userPwd_;
}

void CheckPasswordRequestBody::setUserPwd(const std::string& value)
{
    userPwd_ = value;
    userPwdIsSet_ = true;
}

bool CheckPasswordRequestBody::userPwdIsSet() const
{
    return userPwdIsSet_;
}

void CheckPasswordRequestBody::unsetuserPwd()
{
    userPwdIsSet_ = false;
}

std::string CheckPasswordRequestBody::getUserName() const
{
    return userName_;
}

void CheckPasswordRequestBody::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool CheckPasswordRequestBody::userNameIsSet() const
{
    return userNameIsSet_;
}

void CheckPasswordRequestBody::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string CheckPasswordRequestBody::getDbName() const
{
    return dbName_;
}

void CheckPasswordRequestBody::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool CheckPasswordRequestBody::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void CheckPasswordRequestBody::unsetdbName()
{
    dbNameIsSet_ = false;
}

}
}
}
}
}


