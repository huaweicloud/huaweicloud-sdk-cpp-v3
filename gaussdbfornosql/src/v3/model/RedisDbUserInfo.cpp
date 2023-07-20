

#include "huaweicloud/gaussdbfornosql/v3/model/RedisDbUserInfo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




RedisDbUserInfo::RedisDbUserInfo()
{
    name_ = "";
    nameIsSet_ = false;
    type_ = "";
    typeIsSet_ = false;
    privilege_ = "";
    privilegeIsSet_ = false;
    databasesIsSet_ = false;
}

RedisDbUserInfo::~RedisDbUserInfo() = default;

void RedisDbUserInfo::validate()
{
}

web::json::value RedisDbUserInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(typeIsSet_) {
        val[utility::conversions::to_string_t("type")] = ModelBase::toJson(type_);
    }
    if(privilegeIsSet_) {
        val[utility::conversions::to_string_t("privilege")] = ModelBase::toJson(privilege_);
    }
    if(databasesIsSet_) {
        val[utility::conversions::to_string_t("databases")] = ModelBase::toJson(databases_);
    }

    return val;
}

bool RedisDbUserInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("databases"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("databases"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabases(refVal);
        }
    }
    return ok;
}

std::string RedisDbUserInfo::getName() const
{
    return name_;
}

void RedisDbUserInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool RedisDbUserInfo::nameIsSet() const
{
    return nameIsSet_;
}

void RedisDbUserInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string RedisDbUserInfo::getType() const
{
    return type_;
}

void RedisDbUserInfo::setType(const std::string& value)
{
    type_ = value;
    typeIsSet_ = true;
}

bool RedisDbUserInfo::typeIsSet() const
{
    return typeIsSet_;
}

void RedisDbUserInfo::unsettype()
{
    typeIsSet_ = false;
}

std::string RedisDbUserInfo::getPrivilege() const
{
    return privilege_;
}

void RedisDbUserInfo::setPrivilege(const std::string& value)
{
    privilege_ = value;
    privilegeIsSet_ = true;
}

bool RedisDbUserInfo::privilegeIsSet() const
{
    return privilegeIsSet_;
}

void RedisDbUserInfo::unsetprivilege()
{
    privilegeIsSet_ = false;
}

std::vector<std::string>& RedisDbUserInfo::getDatabases()
{
    return databases_;
}

void RedisDbUserInfo::setDatabases(const std::vector<std::string>& value)
{
    databases_ = value;
    databasesIsSet_ = true;
}

bool RedisDbUserInfo::databasesIsSet() const
{
    return databasesIsSet_;
}

void RedisDbUserInfo::unsetdatabases()
{
    databasesIsSet_ = false;
}

}
}
}
}
}


