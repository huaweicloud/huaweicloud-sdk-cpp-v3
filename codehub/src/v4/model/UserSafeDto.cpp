

#include "huaweicloud/codehub/v4/model/UserSafeDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




UserSafeDto::UserSafeDto()
{
    id_ = 0;
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
    username_ = "";
    usernameIsSet_ = false;
}

UserSafeDto::~UserSafeDto() = default;

void UserSafeDto::validate()
{
}

web::json::value UserSafeDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(usernameIsSet_) {
        val[utility::conversions::to_string_t("username")] = ModelBase::toJson(username_);
    }

    return val;
}
bool UserSafeDto::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
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
    if(val.has_field(utility::conversions::to_string_t("username"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("username"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsername(refVal);
        }
    }
    return ok;
}


int32_t UserSafeDto::getId() const
{
    return id_;
}

void UserSafeDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UserSafeDto::idIsSet() const
{
    return idIsSet_;
}

void UserSafeDto::unsetid()
{
    idIsSet_ = false;
}

std::string UserSafeDto::getName() const
{
    return name_;
}

void UserSafeDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UserSafeDto::nameIsSet() const
{
    return nameIsSet_;
}

void UserSafeDto::unsetname()
{
    nameIsSet_ = false;
}

std::string UserSafeDto::getUsername() const
{
    return username_;
}

void UserSafeDto::setUsername(const std::string& value)
{
    username_ = value;
    usernameIsSet_ = true;
}

bool UserSafeDto::usernameIsSet() const
{
    return usernameIsSet_;
}

void UserSafeDto::unsetusername()
{
    usernameIsSet_ = false;
}

}
}
}
}
}


