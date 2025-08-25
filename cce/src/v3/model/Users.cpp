

#include "huaweicloud/cce/v3/model/Users.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




Users::Users()
{
    name_ = "";
    nameIsSet_ = false;
    userIsSet_ = false;
}

Users::~Users() = default;

void Users::validate()
{
}

web::json::value Users::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(userIsSet_) {
        val[utility::conversions::to_string_t("user")] = ModelBase::toJson(user_);
    }

    return val;
}
bool Users::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("user"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user"));
        if(!fieldValue.is_null())
        {
            User refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUser(refVal);
        }
    }
    return ok;
}


std::string Users::getName() const
{
    return name_;
}

void Users::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool Users::nameIsSet() const
{
    return nameIsSet_;
}

void Users::unsetname()
{
    nameIsSet_ = false;
}

User Users::getUser() const
{
    return user_;
}

void Users::setUser(const User& value)
{
    user_ = value;
    userIsSet_ = true;
}

bool Users::userIsSet() const
{
    return userIsSet_;
}

void Users::unsetuser()
{
    userIsSet_ = false;
}

}
}
}
}
}


