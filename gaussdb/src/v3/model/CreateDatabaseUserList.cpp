

#include "huaweicloud/gaussdb/v3/model/CreateDatabaseUserList.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CreateDatabaseUserList::CreateDatabaseUserList()
{
    name_ = "";
    nameIsSet_ = false;
    comment_ = "";
    commentIsSet_ = false;
    password_ = "";
    passwordIsSet_ = false;
    hostsIsSet_ = false;
    databasesIsSet_ = false;
}

CreateDatabaseUserList::~CreateDatabaseUserList() = default;

void CreateDatabaseUserList::validate()
{
}

web::json::value CreateDatabaseUserList::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(commentIsSet_) {
        val[utility::conversions::to_string_t("comment")] = ModelBase::toJson(comment_);
    }
    if(passwordIsSet_) {
        val[utility::conversions::to_string_t("password")] = ModelBase::toJson(password_);
    }
    if(hostsIsSet_) {
        val[utility::conversions::to_string_t("hosts")] = ModelBase::toJson(hosts_);
    }
    if(databasesIsSet_) {
        val[utility::conversions::to_string_t("databases")] = ModelBase::toJson(databases_);
    }

    return val;
}

bool CreateDatabaseUserList::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("comment"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("comment"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setComment(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("hosts"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("hosts"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHosts(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("databases"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("databases"));
        if(!fieldValue.is_null())
        {
            std::vector<CreateDatabaseList> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabases(refVal);
        }
    }
    return ok;
}

std::string CreateDatabaseUserList::getName() const
{
    return name_;
}

void CreateDatabaseUserList::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateDatabaseUserList::nameIsSet() const
{
    return nameIsSet_;
}

void CreateDatabaseUserList::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateDatabaseUserList::getComment() const
{
    return comment_;
}

void CreateDatabaseUserList::setComment(const std::string& value)
{
    comment_ = value;
    commentIsSet_ = true;
}

bool CreateDatabaseUserList::commentIsSet() const
{
    return commentIsSet_;
}

void CreateDatabaseUserList::unsetcomment()
{
    commentIsSet_ = false;
}

std::string CreateDatabaseUserList::getPassword() const
{
    return password_;
}

void CreateDatabaseUserList::setPassword(const std::string& value)
{
    password_ = value;
    passwordIsSet_ = true;
}

bool CreateDatabaseUserList::passwordIsSet() const
{
    return passwordIsSet_;
}

void CreateDatabaseUserList::unsetpassword()
{
    passwordIsSet_ = false;
}

std::vector<std::string>& CreateDatabaseUserList::getHosts()
{
    return hosts_;
}

void CreateDatabaseUserList::setHosts(const std::vector<std::string>& value)
{
    hosts_ = value;
    hostsIsSet_ = true;
}

bool CreateDatabaseUserList::hostsIsSet() const
{
    return hostsIsSet_;
}

void CreateDatabaseUserList::unsethosts()
{
    hostsIsSet_ = false;
}

std::vector<CreateDatabaseList>& CreateDatabaseUserList::getDatabases()
{
    return databases_;
}

void CreateDatabaseUserList::setDatabases(const std::vector<CreateDatabaseList>& value)
{
    databases_ = value;
    databasesIsSet_ = true;
}

bool CreateDatabaseUserList::databasesIsSet() const
{
    return databasesIsSet_;
}

void CreateDatabaseUserList::unsetdatabases()
{
    databasesIsSet_ = false;
}

}
}
}
}
}


