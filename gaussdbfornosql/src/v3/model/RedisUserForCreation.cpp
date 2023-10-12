

#include "huaweicloud/gaussdbfornosql/v3/model/RedisUserForCreation.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




RedisUserForCreation::RedisUserForCreation()
{
    name_ = "";
    nameIsSet_ = false;
    password_ = "";
    passwordIsSet_ = false;
    databasesIsSet_ = false;
    privilege_ = "";
    privilegeIsSet_ = false;
}

RedisUserForCreation::~RedisUserForCreation() = default;

void RedisUserForCreation::validate()
{
}

web::json::value RedisUserForCreation::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(passwordIsSet_) {
        val[utility::conversions::to_string_t("password")] = ModelBase::toJson(password_);
    }
    if(databasesIsSet_) {
        val[utility::conversions::to_string_t("databases")] = ModelBase::toJson(databases_);
    }
    if(privilegeIsSet_) {
        val[utility::conversions::to_string_t("privilege")] = ModelBase::toJson(privilege_);
    }

    return val;
}
bool RedisUserForCreation::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("databases"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("databases"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabases(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("privilege"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("privilege"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrivilege(refVal);
        }
    }
    return ok;
}


std::string RedisUserForCreation::getName() const
{
    return name_;
}

void RedisUserForCreation::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool RedisUserForCreation::nameIsSet() const
{
    return nameIsSet_;
}

void RedisUserForCreation::unsetname()
{
    nameIsSet_ = false;
}

std::string RedisUserForCreation::getPassword() const
{
    return password_;
}

void RedisUserForCreation::setPassword(const std::string& value)
{
    password_ = value;
    passwordIsSet_ = true;
}

bool RedisUserForCreation::passwordIsSet() const
{
    return passwordIsSet_;
}

void RedisUserForCreation::unsetpassword()
{
    passwordIsSet_ = false;
}

std::vector<std::string>& RedisUserForCreation::getDatabases()
{
    return databases_;
}

void RedisUserForCreation::setDatabases(const std::vector<std::string>& value)
{
    databases_ = value;
    databasesIsSet_ = true;
}

bool RedisUserForCreation::databasesIsSet() const
{
    return databasesIsSet_;
}

void RedisUserForCreation::unsetdatabases()
{
    databasesIsSet_ = false;
}

std::string RedisUserForCreation::getPrivilege() const
{
    return privilege_;
}

void RedisUserForCreation::setPrivilege(const std::string& value)
{
    privilege_ = value;
    privilegeIsSet_ = true;
}

bool RedisUserForCreation::privilegeIsSet() const
{
    return privilegeIsSet_;
}

void RedisUserForCreation::unsetprivilege()
{
    privilegeIsSet_ = false;
}

}
}
}
}
}


