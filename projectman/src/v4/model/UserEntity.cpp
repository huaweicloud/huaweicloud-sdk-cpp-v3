

#include "huaweicloud/projectman/v4/model/UserEntity.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Projectman {
namespace V4 {
namespace Model {




UserEntity::UserEntity()
{
    id_ = "";
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    nickName_ = "";
    nickNameIsSet_ = false;
}

UserEntity::~UserEntity() = default;

void UserEntity::validate()
{
}

web::json::value UserEntity::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(nickNameIsSet_) {
        val[utility::conversions::to_string_t("nick_name")] = ModelBase::toJson(nickName_);
    }

    return val;
}
bool UserEntity::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("nick_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("nick_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setNickName(refVal);
        }
    }
    return ok;
}


std::string UserEntity::getId() const
{
    return id_;
}

void UserEntity::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UserEntity::idIsSet() const
{
    return idIsSet_;
}

void UserEntity::unsetid()
{
    idIsSet_ = false;
}

std::string UserEntity::getName() const
{
    return name_;
}

void UserEntity::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UserEntity::nameIsSet() const
{
    return nameIsSet_;
}

void UserEntity::unsetname()
{
    nameIsSet_ = false;
}

std::string UserEntity::getNickName() const
{
    return nickName_;
}

void UserEntity::setNickName(const std::string& value)
{
    nickName_ = value;
    nickNameIsSet_ = true;
}

bool UserEntity::nickNameIsSet() const
{
    return nickNameIsSet_;
}

void UserEntity::unsetnickName()
{
    nickNameIsSet_ = false;
}

}
}
}
}
}


