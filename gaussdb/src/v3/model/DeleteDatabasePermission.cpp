

#include "huaweicloud/gaussdb/v3/model/DeleteDatabasePermission.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




DeleteDatabasePermission::DeleteDatabasePermission()
{
    name_ = "";
    nameIsSet_ = false;
    host_ = "";
    hostIsSet_ = false;
    databasesIsSet_ = false;
}

DeleteDatabasePermission::~DeleteDatabasePermission() = default;

void DeleteDatabasePermission::validate()
{
}

web::json::value DeleteDatabasePermission::toJson() const
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

bool DeleteDatabasePermission::fromJson(const web::json::value& val)
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
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabases(refVal);
        }
    }
    return ok;
}

std::string DeleteDatabasePermission::getName() const
{
    return name_;
}

void DeleteDatabasePermission::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool DeleteDatabasePermission::nameIsSet() const
{
    return nameIsSet_;
}

void DeleteDatabasePermission::unsetname()
{
    nameIsSet_ = false;
}

std::string DeleteDatabasePermission::getHost() const
{
    return host_;
}

void DeleteDatabasePermission::setHost(const std::string& value)
{
    host_ = value;
    hostIsSet_ = true;
}

bool DeleteDatabasePermission::hostIsSet() const
{
    return hostIsSet_;
}

void DeleteDatabasePermission::unsethost()
{
    hostIsSet_ = false;
}

std::vector<std::string>& DeleteDatabasePermission::getDatabases()
{
    return databases_;
}

void DeleteDatabasePermission::setDatabases(const std::vector<std::string>& value)
{
    databases_ = value;
    databasesIsSet_ = true;
}

bool DeleteDatabasePermission::databasesIsSet() const
{
    return databasesIsSet_;
}

void DeleteDatabasePermission::unsetdatabases()
{
    databasesIsSet_ = false;
}

}
}
}
}
}


