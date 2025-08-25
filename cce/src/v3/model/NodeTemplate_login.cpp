

#include "huaweicloud/cce/v3/model/NodeTemplate_login.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Cce {
namespace V3 {
namespace Model {




NodeTemplate_login::NodeTemplate_login()
{
    sshKey_ = "";
    sshKeyIsSet_ = false;
    userPasswordIsSet_ = false;
}

NodeTemplate_login::~NodeTemplate_login() = default;

void NodeTemplate_login::validate()
{
}

web::json::value NodeTemplate_login::toJson() const
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
bool NodeTemplate_login::fromJson(const web::json::value& val)
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
            NodeTemplate_login_userPassword refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserPassword(refVal);
        }
    }
    return ok;
}


std::string NodeTemplate_login::getSshKey() const
{
    return sshKey_;
}

void NodeTemplate_login::setSshKey(const std::string& value)
{
    sshKey_ = value;
    sshKeyIsSet_ = true;
}

bool NodeTemplate_login::sshKeyIsSet() const
{
    return sshKeyIsSet_;
}

void NodeTemplate_login::unsetsshKey()
{
    sshKeyIsSet_ = false;
}

NodeTemplate_login_userPassword NodeTemplate_login::getUserPassword() const
{
    return userPassword_;
}

void NodeTemplate_login::setUserPassword(const NodeTemplate_login_userPassword& value)
{
    userPassword_ = value;
    userPasswordIsSet_ = true;
}

bool NodeTemplate_login::userPasswordIsSet() const
{
    return userPasswordIsSet_;
}

void NodeTemplate_login::unsetuserPassword()
{
    userPasswordIsSet_ = false;
}

}
}
}
}
}


