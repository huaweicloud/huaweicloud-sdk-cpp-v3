

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
    removeUserPassword_ = false;
    removeUserPasswordIsSet_ = false;
    removeSSHKey_ = false;
    removeSSHKeyIsSet_ = false;
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
    if(removeUserPasswordIsSet_) {
        val[utility::conversions::to_string_t("removeUserPassword")] = ModelBase::toJson(removeUserPassword_);
    }
    if(removeSSHKeyIsSet_) {
        val[utility::conversions::to_string_t("removeSSHKey")] = ModelBase::toJson(removeSSHKey_);
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
    if(val.has_field(utility::conversions::to_string_t("removeUserPassword"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("removeUserPassword"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemoveUserPassword(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("removeSSHKey"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("removeSSHKey"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRemoveSSHKey(refVal);
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

bool Login::isRemoveUserPassword() const
{
    return removeUserPassword_;
}

void Login::setRemoveUserPassword(bool value)
{
    removeUserPassword_ = value;
    removeUserPasswordIsSet_ = true;
}

bool Login::removeUserPasswordIsSet() const
{
    return removeUserPasswordIsSet_;
}

void Login::unsetremoveUserPassword()
{
    removeUserPasswordIsSet_ = false;
}

bool Login::isRemoveSSHKey() const
{
    return removeSSHKey_;
}

void Login::setRemoveSSHKey(bool value)
{
    removeSSHKey_ = value;
    removeSSHKeyIsSet_ = true;
}

bool Login::removeSSHKeyIsSet() const
{
    return removeSSHKeyIsSet_;
}

void Login::unsetremoveSSHKey()
{
    removeSSHKeyIsSet_ = false;
}

}
}
}
}
}


