

#include "huaweicloud/rds/v3/model/UserForCreation.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




UserForCreation::UserForCreation()
{
    name_ = "";
    nameIsSet_ = false;
    password_ = "";
    passwordIsSet_ = false;
    comment_ = "";
    commentIsSet_ = false;
    hostsIsSet_ = false;
    databasesIsSet_ = false;
}

UserForCreation::~UserForCreation() = default;

void UserForCreation::validate()
{
}

web::json::value UserForCreation::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(passwordIsSet_) {
        val[utility::conversions::to_string_t("password")] = ModelBase::toJson(password_);
    }
    if(commentIsSet_) {
        val[utility::conversions::to_string_t("comment")] = ModelBase::toJson(comment_);
    }
    if(hostsIsSet_) {
        val[utility::conversions::to_string_t("hosts")] = ModelBase::toJson(hosts_);
    }
    if(databasesIsSet_) {
        val[utility::conversions::to_string_t("databases")] = ModelBase::toJson(databases_);
    }

    return val;
}
bool UserForCreation::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("comment"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("comment"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setComment(refVal);
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
            std::vector<DatabaseWithPrivilegeObject> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabases(refVal);
        }
    }
    return ok;
}


std::string UserForCreation::getName() const
{
    return name_;
}

void UserForCreation::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UserForCreation::nameIsSet() const
{
    return nameIsSet_;
}

void UserForCreation::unsetname()
{
    nameIsSet_ = false;
}

std::string UserForCreation::getPassword() const
{
    return password_;
}

void UserForCreation::setPassword(const std::string& value)
{
    password_ = value;
    passwordIsSet_ = true;
}

bool UserForCreation::passwordIsSet() const
{
    return passwordIsSet_;
}

void UserForCreation::unsetpassword()
{
    passwordIsSet_ = false;
}

std::string UserForCreation::getComment() const
{
    return comment_;
}

void UserForCreation::setComment(const std::string& value)
{
    comment_ = value;
    commentIsSet_ = true;
}

bool UserForCreation::commentIsSet() const
{
    return commentIsSet_;
}

void UserForCreation::unsetcomment()
{
    commentIsSet_ = false;
}

std::vector<std::string>& UserForCreation::getHosts()
{
    return hosts_;
}

void UserForCreation::setHosts(const std::vector<std::string>& value)
{
    hosts_ = value;
    hostsIsSet_ = true;
}

bool UserForCreation::hostsIsSet() const
{
    return hostsIsSet_;
}

void UserForCreation::unsethosts()
{
    hostsIsSet_ = false;
}

std::vector<DatabaseWithPrivilegeObject>& UserForCreation::getDatabases()
{
    return databases_;
}

void UserForCreation::setDatabases(const std::vector<DatabaseWithPrivilegeObject>& value)
{
    databases_ = value;
    databasesIsSet_ = true;
}

bool UserForCreation::databasesIsSet() const
{
    return databasesIsSet_;
}

void UserForCreation::unsetdatabases()
{
    databasesIsSet_ = false;
}

}
}
}
}
}


