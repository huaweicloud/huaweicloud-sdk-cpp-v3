

#include "huaweicloud/gaussdbfornosql/v3/model/RedisModifyDbUserPrivilegeRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbfornosql {
namespace V3 {
namespace Model {




RedisModifyDbUserPrivilegeRequestBody::RedisModifyDbUserPrivilegeRequestBody()
{
    name_ = "";
    nameIsSet_ = false;
    privilege_ = "";
    privilegeIsSet_ = false;
    databasesIsSet_ = false;
}

RedisModifyDbUserPrivilegeRequestBody::~RedisModifyDbUserPrivilegeRequestBody() = default;

void RedisModifyDbUserPrivilegeRequestBody::validate()
{
}

web::json::value RedisModifyDbUserPrivilegeRequestBody::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(privilegeIsSet_) {
        val[utility::conversions::to_string_t("privilege")] = ModelBase::toJson(privilege_);
    }
    if(databasesIsSet_) {
        val[utility::conversions::to_string_t("databases")] = ModelBase::toJson(databases_);
    }

    return val;
}
bool RedisModifyDbUserPrivilegeRequestBody::fromJson(const web::json::value& val)
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


std::string RedisModifyDbUserPrivilegeRequestBody::getName() const
{
    return name_;
}

void RedisModifyDbUserPrivilegeRequestBody::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool RedisModifyDbUserPrivilegeRequestBody::nameIsSet() const
{
    return nameIsSet_;
}

void RedisModifyDbUserPrivilegeRequestBody::unsetname()
{
    nameIsSet_ = false;
}

std::string RedisModifyDbUserPrivilegeRequestBody::getPrivilege() const
{
    return privilege_;
}

void RedisModifyDbUserPrivilegeRequestBody::setPrivilege(const std::string& value)
{
    privilege_ = value;
    privilegeIsSet_ = true;
}

bool RedisModifyDbUserPrivilegeRequestBody::privilegeIsSet() const
{
    return privilegeIsSet_;
}

void RedisModifyDbUserPrivilegeRequestBody::unsetprivilege()
{
    privilegeIsSet_ = false;
}

std::vector<std::string>& RedisModifyDbUserPrivilegeRequestBody::getDatabases()
{
    return databases_;
}

void RedisModifyDbUserPrivilegeRequestBody::setDatabases(const std::vector<std::string>& value)
{
    databases_ = value;
    databasesIsSet_ = true;
}

bool RedisModifyDbUserPrivilegeRequestBody::databasesIsSet() const
{
    return databasesIsSet_;
}

void RedisModifyDbUserPrivilegeRequestBody::unsetdatabases()
{
    databasesIsSet_ = false;
}

}
}
}
}
}


