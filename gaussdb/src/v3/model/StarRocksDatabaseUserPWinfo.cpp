

#include "huaweicloud/gaussdb/v3/model/StarRocksDatabaseUserPWinfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




StarRocksDatabaseUserPWinfo::StarRocksDatabaseUserPWinfo()
{
    userName_ = "";
    userNameIsSet_ = false;
    password_ = "";
    passwordIsSet_ = false;
}

StarRocksDatabaseUserPWinfo::~StarRocksDatabaseUserPWinfo() = default;

void StarRocksDatabaseUserPWinfo::validate()
{
}

web::json::value StarRocksDatabaseUserPWinfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(passwordIsSet_) {
        val[utility::conversions::to_string_t("password")] = ModelBase::toJson(password_);
    }

    return val;
}
bool StarRocksDatabaseUserPWinfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("password"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("password"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPassword(refVal);
        }
    }
    return ok;
}


std::string StarRocksDatabaseUserPWinfo::getUserName() const
{
    return userName_;
}

void StarRocksDatabaseUserPWinfo::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool StarRocksDatabaseUserPWinfo::userNameIsSet() const
{
    return userNameIsSet_;
}

void StarRocksDatabaseUserPWinfo::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string StarRocksDatabaseUserPWinfo::getPassword() const
{
    return password_;
}

void StarRocksDatabaseUserPWinfo::setPassword(const std::string& value)
{
    password_ = value;
    passwordIsSet_ = true;
}

bool StarRocksDatabaseUserPWinfo::passwordIsSet() const
{
    return passwordIsSet_;
}

void StarRocksDatabaseUserPWinfo::unsetpassword()
{
    passwordIsSet_ = false;
}

}
}
}
}
}


