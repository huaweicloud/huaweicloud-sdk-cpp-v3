

#include "huaweicloud/gaussdb/v3/model/CreateGaussMySqlDatabase.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




CreateGaussMySqlDatabase::CreateGaussMySqlDatabase()
{
    name_ = "";
    nameIsSet_ = false;
    comment_ = "";
    commentIsSet_ = false;
    characterSet_ = "";
    characterSetIsSet_ = false;
    usersIsSet_ = false;
}

CreateGaussMySqlDatabase::~CreateGaussMySqlDatabase() = default;

void CreateGaussMySqlDatabase::validate()
{
}

web::json::value CreateGaussMySqlDatabase::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(commentIsSet_) {
        val[utility::conversions::to_string_t("comment")] = ModelBase::toJson(comment_);
    }
    if(characterSetIsSet_) {
        val[utility::conversions::to_string_t("character_set")] = ModelBase::toJson(characterSet_);
    }
    if(usersIsSet_) {
        val[utility::conversions::to_string_t("users")] = ModelBase::toJson(users_);
    }

    return val;
}

bool CreateGaussMySqlDatabase::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("character_set"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("character_set"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setCharacterSet(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("users"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("users"));
        if(!fieldValue.is_null())
        {
            std::vector<GaussMySqlDatabaseUser> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsers(refVal);
        }
    }
    return ok;
}

std::string CreateGaussMySqlDatabase::getName() const
{
    return name_;
}

void CreateGaussMySqlDatabase::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool CreateGaussMySqlDatabase::nameIsSet() const
{
    return nameIsSet_;
}

void CreateGaussMySqlDatabase::unsetname()
{
    nameIsSet_ = false;
}

std::string CreateGaussMySqlDatabase::getComment() const
{
    return comment_;
}

void CreateGaussMySqlDatabase::setComment(const std::string& value)
{
    comment_ = value;
    commentIsSet_ = true;
}

bool CreateGaussMySqlDatabase::commentIsSet() const
{
    return commentIsSet_;
}

void CreateGaussMySqlDatabase::unsetcomment()
{
    commentIsSet_ = false;
}

std::string CreateGaussMySqlDatabase::getCharacterSet() const
{
    return characterSet_;
}

void CreateGaussMySqlDatabase::setCharacterSet(const std::string& value)
{
    characterSet_ = value;
    characterSetIsSet_ = true;
}

bool CreateGaussMySqlDatabase::characterSetIsSet() const
{
    return characterSetIsSet_;
}

void CreateGaussMySqlDatabase::unsetcharacterSet()
{
    characterSetIsSet_ = false;
}

std::vector<GaussMySqlDatabaseUser>& CreateGaussMySqlDatabase::getUsers()
{
    return users_;
}

void CreateGaussMySqlDatabase::setUsers(const std::vector<GaussMySqlDatabaseUser>& value)
{
    users_ = value;
    usersIsSet_ = true;
}

bool CreateGaussMySqlDatabase::usersIsSet() const
{
    return usersIsSet_;
}

void CreateGaussMySqlDatabase::unsetusers()
{
    usersIsSet_ = false;
}

}
}
}
}
}


