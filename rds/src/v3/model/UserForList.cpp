

#include "huaweicloud/rds/v3/model/UserForList.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UserForList::UserForList()
{
    name_ = "";
    nameIsSet_ = false;
    databasesIsSet_ = false;
    hostsIsSet_ = false;
}

UserForList::~UserForList() = default;

void UserForList::validate()
{
}

web::json::value UserForList::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(databasesIsSet_) {
        val[utility::conversions::to_string_t("databases")] = ModelBase::toJson(databases_);
    }
    if(hostsIsSet_) {
        val[utility::conversions::to_string_t("hosts")] = ModelBase::toJson(hosts_);
    }

    return val;
}
bool UserForList::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("databases"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("databases"));
        if(!fieldValue.is_null())
        {
            std::vector<DatabaseWithPrivilegeObject> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabases(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("hosts"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hosts"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHosts(refVal);
        }
    }
    return ok;
}


std::string UserForList::getName() const
{
    return name_;
}

void UserForList::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UserForList::nameIsSet() const
{
    return nameIsSet_;
}

void UserForList::unsetname()
{
    nameIsSet_ = false;
}

std::vector<DatabaseWithPrivilegeObject>& UserForList::getDatabases()
{
    return databases_;
}

void UserForList::setDatabases(const std::vector<DatabaseWithPrivilegeObject>& value)
{
    databases_ = value;
    databasesIsSet_ = true;
}

bool UserForList::databasesIsSet() const
{
    return databasesIsSet_;
}

void UserForList::unsetdatabases()
{
    databasesIsSet_ = false;
}

std::vector<std::string>& UserForList::getHosts()
{
    return hosts_;
}

void UserForList::setHosts(const std::vector<std::string>& value)
{
    hosts_ = value;
    hostsIsSet_ = true;
}

bool UserForList::hostsIsSet() const
{
    return hostsIsSet_;
}

void UserForList::unsethosts()
{
    hostsIsSet_ = false;
}

}
}
}
}
}


