

#include "huaweicloud/gaussdb/v3/model/ListGaussMysqlDatabaseInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ListGaussMysqlDatabaseInfo::ListGaussMysqlDatabaseInfo()
{
    name_ = "";
    nameIsSet_ = false;
    charset_ = "";
    charsetIsSet_ = false;
    comment_ = "";
    commentIsSet_ = false;
    usersIsSet_ = false;
}

ListGaussMysqlDatabaseInfo::~ListGaussMysqlDatabaseInfo() = default;

void ListGaussMysqlDatabaseInfo::validate()
{
}

web::json::value ListGaussMysqlDatabaseInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(charsetIsSet_) {
        val[utility::conversions::to_string_t("charset")] = ModelBase::toJson(charset_);
    }
    if(commentIsSet_) {
        val[utility::conversions::to_string_t("comment")] = ModelBase::toJson(comment_);
    }
    if(usersIsSet_) {
        val[utility::conversions::to_string_t("users")] = ModelBase::toJson(users_);
    }

    return val;
}
bool ListGaussMysqlDatabaseInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("charset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("charset"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCharset(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("users"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("users"));
        if(!fieldValue.is_null())
        {
            std::vector<GaussMySqlDatabaseInfo> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsers(refVal);
        }
    }
    return ok;
}


std::string ListGaussMysqlDatabaseInfo::getName() const
{
    return name_;
}

void ListGaussMysqlDatabaseInfo::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ListGaussMysqlDatabaseInfo::nameIsSet() const
{
    return nameIsSet_;
}

void ListGaussMysqlDatabaseInfo::unsetname()
{
    nameIsSet_ = false;
}

std::string ListGaussMysqlDatabaseInfo::getCharset() const
{
    return charset_;
}

void ListGaussMysqlDatabaseInfo::setCharset(const std::string& value)
{
    charset_ = value;
    charsetIsSet_ = true;
}

bool ListGaussMysqlDatabaseInfo::charsetIsSet() const
{
    return charsetIsSet_;
}

void ListGaussMysqlDatabaseInfo::unsetcharset()
{
    charsetIsSet_ = false;
}

std::string ListGaussMysqlDatabaseInfo::getComment() const
{
    return comment_;
}

void ListGaussMysqlDatabaseInfo::setComment(const std::string& value)
{
    comment_ = value;
    commentIsSet_ = true;
}

bool ListGaussMysqlDatabaseInfo::commentIsSet() const
{
    return commentIsSet_;
}

void ListGaussMysqlDatabaseInfo::unsetcomment()
{
    commentIsSet_ = false;
}

std::vector<GaussMySqlDatabaseInfo>& ListGaussMysqlDatabaseInfo::getUsers()
{
    return users_;
}

void ListGaussMysqlDatabaseInfo::setUsers(const std::vector<GaussMySqlDatabaseInfo>& value)
{
    users_ = value;
    usersIsSet_ = true;
}

bool ListGaussMysqlDatabaseInfo::usersIsSet() const
{
    return usersIsSet_;
}

void ListGaussMysqlDatabaseInfo::unsetusers()
{
    usersIsSet_ = false;
}

}
}
}
}
}


