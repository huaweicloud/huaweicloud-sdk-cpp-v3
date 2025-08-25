

#include "huaweicloud/cce/v3/model/Login.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




Login::Login()
{
    sshKey_ = "";
    sshKeyIsSet_ = false;
    userPasswordIsSet_ = false;
}

Login::~Login() = default;

void Login::validate()
{
}

web::json::value Login::toJson() const
{
    web::json::value val = web::json::value::object();

    if(sshKeyIsSet_) {
        val[utility::conversions::to_string_t("sshKey")] = ModelBase::toJson(sshKey_);
    }
    if(userPasswordIsSet_) {
        val[utility::conversions::to_string_t("userPassword")] = ModelBase::toJson(userPassword_);
    }

    return val;
}
bool Login::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("sshKey"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("sshKey"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSshKey(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("userPassword"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("userPassword"));
        if(!fieldValue.is_null())
        {
            UserPassword refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserPassword(refVal);
        }
    }
    return ok;
}


std::string Login::getSshKey() const
{
    return sshKey_;
}

void Login::setSshKey(const std::string& value)
{
    sshKey_ = value;
    sshKeyIsSet_ = true;
}

bool Login::sshKeyIsSet() const
{
    return sshKeyIsSet_;
}

void Login::unsetsshKey()
{
    sshKeyIsSet_ = false;
}

UserPassword Login::getUserPassword() const
{
    return userPassword_;
}

void Login::setUserPassword(const UserPassword& value)
{
    userPassword_ = value;
    userPasswordIsSet_ = true;
}

bool Login::userPasswordIsSet() const
{
    return userPasswordIsSet_;
}

void Login::unsetuserPassword()
{
    userPasswordIsSet_ = false;
}

}
}
}
}
}


