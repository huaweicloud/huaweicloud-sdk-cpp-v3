

#include "huaweicloud/codehub/v4/model/PersonalEventAuthorDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




PersonalEventAuthorDto::PersonalEventAuthorDto()
{
    id_ = 0;
    idIsSet_ = false;
    username_ = "";
    usernameIsSet_ = false;
}

PersonalEventAuthorDto::~PersonalEventAuthorDto() = default;

void PersonalEventAuthorDto::validate()
{
}

web::json::value PersonalEventAuthorDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(usernameIsSet_) {
        val[utility::conversions::to_string_t("username")] = ModelBase::toJson(username_);
    }

    return val;
}
bool PersonalEventAuthorDto::fromJson(const web::json::value& val)
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


int32_t PersonalEventAuthorDto::getId() const
{
    return id_;
}

void PersonalEventAuthorDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool PersonalEventAuthorDto::idIsSet() const
{
    return idIsSet_;
}

void PersonalEventAuthorDto::unsetid()
{
    idIsSet_ = false;
}

std::string PersonalEventAuthorDto::getUsername() const
{
    return username_;
}

void PersonalEventAuthorDto::setUsername(const std::string& value)
{
    username_ = value;
    usernameIsSet_ = true;
}

bool PersonalEventAuthorDto::usernameIsSet() const
{
    return usernameIsSet_;
}

void PersonalEventAuthorDto::unsetusername()
{
    usernameIsSet_ = false;
}

}
}
}
}
}


