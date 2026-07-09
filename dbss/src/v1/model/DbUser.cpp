

#include "huaweicloud/dbss/v1/model/DbUser.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Dbss {
namespace V1 {
namespace Model {




DbUser::DbUser()
{
    userName_ = "";
    userNameIsSet_ = false;
    userPermission_ = "";
    userPermissionIsSet_ = false;
}

DbUser::~DbUser() = default;

void DbUser::validate()
{
}

web::json::value DbUser::toJson() const
{
    web::json::value val = web::json::value::object();

    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(userPermissionIsSet_) {
        val[utility::conversions::to_string_t("user_permission")] = ModelBase::toJson(userPermission_);
    }

    return val;
}
bool DbUser::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("user_permission"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_permission"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserPermission(refVal);
        }
    }
    return ok;
}


std::string DbUser::getUserName() const
{
    return userName_;
}

void DbUser::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool DbUser::userNameIsSet() const
{
    return userNameIsSet_;
}

void DbUser::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string DbUser::getUserPermission() const
{
    return userPermission_;
}

void DbUser::setUserPermission(const std::string& value)
{
    userPermission_ = value;
    userPermissionIsSet_ = true;
}

bool DbUser::userPermissionIsSet() const
{
    return userPermissionIsSet_;
}

void DbUser::unsetuserPermission()
{
    userPermissionIsSet_ = false;
}

}
}
}
}
}


