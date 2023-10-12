

#include "huaweicloud/gaussdb/v3/model/ListGaussMySqlDatabaseUser.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListGaussMySqlDatabaseUser::ListGaussMySqlDatabaseUser()
{
    name_ = "";
    nameIsSet_ = false;
    host_ = "";
    hostIsSet_ = false;
    comment_ = "";
    commentIsSet_ = false;
    databasesIsSet_ = false;
}

ListGaussMySqlDatabaseUser::~ListGaussMySqlDatabaseUser() = default;

void ListGaussMySqlDatabaseUser::validate()
{
}

web::json::value ListGaussMySqlDatabaseUser::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(hostIsSet_) {
        val[utility::conversions::to_string_t("host")] = ModelBase::toJson(host_);
    }
    if(commentIsSet_) {
        val[utility::conversions::to_string_t("comment")] = ModelBase::toJson(comment_);
    }
    if(databasesIsSet_) {
        val[utility::conversions::to_string_t("databases")] = ModelBase::toJson(databases_);
    }

    return val;
}
bool ListGaussMySqlDatabaseUser::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("comment"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("comment"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setComment(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("databases"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("databases"));
        if(!fieldValue.is_null())
        {
            std::vector<ListGaussMySqlDatabase> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabases(refVal);
        }
    }
    return ok;
}


std::string ListGaussMySqlDatabaseUser::getName() const
{
    return name_;
}

void ListGaussMySqlDatabaseUser::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListGaussMySqlDatabaseUser::nameIsSet() const
{
    return nameIsSet_;
}

void ListGaussMySqlDatabaseUser::unsetname()
{
    nameIsSet_ = false;
}

std::string ListGaussMySqlDatabaseUser::getHost() const
{
    return host_;
}

void ListGaussMySqlDatabaseUser::setHost(const std::string& value)
{
    host_ = value;
    hostIsSet_ = true;
}

bool ListGaussMySqlDatabaseUser::hostIsSet() const
{
    return hostIsSet_;
}

void ListGaussMySqlDatabaseUser::unsethost()
{
    hostIsSet_ = false;
}

std::string ListGaussMySqlDatabaseUser::getComment() const
{
    return comment_;
}

void ListGaussMySqlDatabaseUser::setComment(const std::string& value)
{
    comment_ = value;
    commentIsSet_ = true;
}

bool ListGaussMySqlDatabaseUser::commentIsSet() const
{
    return commentIsSet_;
}

void ListGaussMySqlDatabaseUser::unsetcomment()
{
    commentIsSet_ = false;
}

std::vector<ListGaussMySqlDatabase>& ListGaussMySqlDatabaseUser::getDatabases()
{
    return databases_;
}

void ListGaussMySqlDatabaseUser::setDatabases(const std::vector<ListGaussMySqlDatabase>& value)
{
    databases_ = value;
    databasesIsSet_ = true;
}

bool ListGaussMySqlDatabaseUser::databasesIsSet() const
{
    return databasesIsSet_;
}

void ListGaussMySqlDatabaseUser::unsetdatabases()
{
    databasesIsSet_ = false;
}

}
}
}
}
}


