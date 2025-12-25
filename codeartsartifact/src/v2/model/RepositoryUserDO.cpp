

#include "huaweicloud/codeartsartifact/v2/model/RepositoryUserDO.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Codeartsartifact {
namespace V2 {
namespace Model {




RepositoryUserDO::RepositoryUserDO()
{
    username_ = "";
    usernameIsSet_ = false;
    password_ = "";
    passwordIsSet_ = false;
}

RepositoryUserDO::~RepositoryUserDO() = default;

void RepositoryUserDO::validate()
{
}

web::json::value RepositoryUserDO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(usernameIsSet_) {
        val[utility::conversions::to_string_t("username")] = ModelBase::toJson(username_);
    }
    if(passwordIsSet_) {
        val[utility::conversions::to_string_t("password")] = ModelBase::toJson(password_);
    }

    return val;
}
bool RepositoryUserDO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("username"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("username"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsername(refVal);
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
    return ok;
}


std::string RepositoryUserDO::getUsername() const
{
    return username_;
}

void RepositoryUserDO::setUsername(const std::string& value)
{
    username_ = value;
    usernameIsSet_ = true;
}

bool RepositoryUserDO::usernameIsSet() const
{
    return usernameIsSet_;
}

void RepositoryUserDO::unsetusername()
{
    usernameIsSet_ = false;
}

std::string RepositoryUserDO::getPassword() const
{
    return password_;
}

void RepositoryUserDO::setPassword(const std::string& value)
{
    password_ = value;
    passwordIsSet_ = true;
}

bool RepositoryUserDO::passwordIsSet() const
{
    return passwordIsSet_;
}

void RepositoryUserDO::unsetpassword()
{
    passwordIsSet_ = false;
}

}
}
}
}
}


