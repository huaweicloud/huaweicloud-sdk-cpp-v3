

#include "huaweicloud/gaussdb/v3/model/ClickHouseDatabaseUserPWinfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ClickHouseDatabaseUserPWinfo::ClickHouseDatabaseUserPWinfo()
{
    userName_ = "";
    userNameIsSet_ = false;
    password_ = "";
    passwordIsSet_ = false;
}

ClickHouseDatabaseUserPWinfo::~ClickHouseDatabaseUserPWinfo() = default;

void ClickHouseDatabaseUserPWinfo::validate()
{
}

web::json::value ClickHouseDatabaseUserPWinfo::toJson() const
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
bool ClickHouseDatabaseUserPWinfo::fromJson(const web::json::value& val)
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


std::string ClickHouseDatabaseUserPWinfo::getUserName() const
{
    return userName_;
}

void ClickHouseDatabaseUserPWinfo::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool ClickHouseDatabaseUserPWinfo::userNameIsSet() const
{
    return userNameIsSet_;
}

void ClickHouseDatabaseUserPWinfo::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string ClickHouseDatabaseUserPWinfo::getPassword() const
{
    return password_;
}

void ClickHouseDatabaseUserPWinfo::setPassword(const std::string& value)
{
    password_ = value;
    passwordIsSet_ = true;
}

bool ClickHouseDatabaseUserPWinfo::passwordIsSet() const
{
    return passwordIsSet_;
}

void ClickHouseDatabaseUserPWinfo::unsetpassword()
{
    passwordIsSet_ = false;
}

}
}
}
}
}


