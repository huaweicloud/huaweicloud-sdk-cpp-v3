

#include "huaweicloud/gaussdb/v3/model/GrantDatabasePermission.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




GrantDatabasePermission::GrantDatabasePermission()
{
    name_ = "";
    nameIsSet_ = false;
    host_ = "";
    hostIsSet_ = false;
    databasesIsSet_ = false;
}

GrantDatabasePermission::~GrantDatabasePermission() = default;

void GrantDatabasePermission::validate()
{
}

web::json::value GrantDatabasePermission::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(hostIsSet_) {
        val[utility::conversions::to_string_t("host")] = ModelBase::toJson(host_);
    }
    if(databasesIsSet_) {
        val[utility::conversions::to_string_t("databases")] = ModelBase::toJson(databases_);
    }

    return val;
}
bool GrantDatabasePermission::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("host"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("host"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHost(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("databases"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("databases"));
        if(!fieldValue.is_null())
        {
            std::vector<DatabasePermission> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabases(refVal);
        }
    }
    return ok;
}


std::string GrantDatabasePermission::getName() const
{
    return name_;
}

void GrantDatabasePermission::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool GrantDatabasePermission::nameIsSet() const
{
    return nameIsSet_;
}

void GrantDatabasePermission::unsetname()
{
    nameIsSet_ = false;
}

std::string GrantDatabasePermission::getHost() const
{
    return host_;
}

void GrantDatabasePermission::setHost(const std::string& value)
{
    host_ = value;
    hostIsSet_ = true;
}

bool GrantDatabasePermission::hostIsSet() const
{
    return hostIsSet_;
}

void GrantDatabasePermission::unsethost()
{
    hostIsSet_ = false;
}

std::vector<DatabasePermission>& GrantDatabasePermission::getDatabases()
{
    return databases_;
}

void GrantDatabasePermission::setDatabases(const std::vector<DatabasePermission>& value)
{
    databases_ = value;
    databasesIsSet_ = true;
}

bool GrantDatabasePermission::databasesIsSet() const
{
    return databasesIsSet_;
}

void GrantDatabasePermission::unsetdatabases()
{
    databasesIsSet_ = false;
}

}
}
}
}
}


