

#include "huaweicloud/codehub/v4/model/UserTeamBasicDto.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codehub {
namespace V4 {
namespace Model {




UserTeamBasicDto::UserTeamBasicDto()
{
    id_ = 0;
    idIsSet_ = false;
    name_ = "";
    nameIsSet_ = false;
}

UserTeamBasicDto::~UserTeamBasicDto() = default;

void UserTeamBasicDto::validate()
{
}

web::json::value UserTeamBasicDto::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }

    return val;
}
bool UserTeamBasicDto::fromJson(const web::json::value& val)
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
    return ok;
}


int32_t UserTeamBasicDto::getId() const
{
    return id_;
}

void UserTeamBasicDto::setId(int32_t value)
{
    id_ = value;
    idIsSet_ = true;
}

bool UserTeamBasicDto::idIsSet() const
{
    return idIsSet_;
}

void UserTeamBasicDto::unsetid()
{
    idIsSet_ = false;
}

std::string UserTeamBasicDto::getName() const
{
    return name_;
}

void UserTeamBasicDto::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool UserTeamBasicDto::nameIsSet() const
{
    return nameIsSet_;
}

void UserTeamBasicDto::unsetname()
{
    nameIsSet_ = false;
}

}
}
}
}
}


