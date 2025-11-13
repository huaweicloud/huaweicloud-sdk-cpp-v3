

#include "huaweicloud/rds/v3/model/ValidateConnectionUserInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ValidateConnectionUserInfo::ValidateConnectionUserInfo()
{
    serverIp_ = "";
    serverIpIsSet_ = false;
    serverPort_ = 0;
    serverPortIsSet_ = false;
    loginUserName_ = "";
    loginUserNameIsSet_ = false;
    loginUserPassword_ = "";
    loginUserPasswordIsSet_ = false;
}

ValidateConnectionUserInfo::~ValidateConnectionUserInfo() = default;

void ValidateConnectionUserInfo::validate()
{
}

web::json::value ValidateConnectionUserInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serverIpIsSet_) {
        val[utility::conversions::to_string_t("server_ip")] = ModelBase::toJson(serverIp_);
    }
    if(serverPortIsSet_) {
        val[utility::conversions::to_string_t("server_port")] = ModelBase::toJson(serverPort_);
    }
    if(loginUserNameIsSet_) {
        val[utility::conversions::to_string_t("login_user_name")] = ModelBase::toJson(loginUserName_);
    }
    if(loginUserPasswordIsSet_) {
        val[utility::conversions::to_string_t("login_user_password")] = ModelBase::toJson(loginUserPassword_);
    }

    return val;
}
bool ValidateConnectionUserInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("server_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("server_port"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_port"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerPort(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("login_user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("login_user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLoginUserName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("login_user_password"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("login_user_password"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLoginUserPassword(refVal);
        }
    }
    return ok;
}


std::string ValidateConnectionUserInfo::getServerIp() const
{
    return serverIp_;
}

void ValidateConnectionUserInfo::setServerIp(const std::string& value)
{
    serverIp_ = value;
    serverIpIsSet_ = true;
}

bool ValidateConnectionUserInfo::serverIpIsSet() const
{
    return serverIpIsSet_;
}

void ValidateConnectionUserInfo::unsetserverIp()
{
    serverIpIsSet_ = false;
}

int32_t ValidateConnectionUserInfo::getServerPort() const
{
    return serverPort_;
}

void ValidateConnectionUserInfo::setServerPort(int32_t value)
{
    serverPort_ = value;
    serverPortIsSet_ = true;
}

bool ValidateConnectionUserInfo::serverPortIsSet() const
{
    return serverPortIsSet_;
}

void ValidateConnectionUserInfo::unsetserverPort()
{
    serverPortIsSet_ = false;
}

std::string ValidateConnectionUserInfo::getLoginUserName() const
{
    return loginUserName_;
}

void ValidateConnectionUserInfo::setLoginUserName(const std::string& value)
{
    loginUserName_ = value;
    loginUserNameIsSet_ = true;
}

bool ValidateConnectionUserInfo::loginUserNameIsSet() const
{
    return loginUserNameIsSet_;
}

void ValidateConnectionUserInfo::unsetloginUserName()
{
    loginUserNameIsSet_ = false;
}

std::string ValidateConnectionUserInfo::getLoginUserPassword() const
{
    return loginUserPassword_;
}

void ValidateConnectionUserInfo::setLoginUserPassword(const std::string& value)
{
    loginUserPassword_ = value;
    loginUserPasswordIsSet_ = true;
}

bool ValidateConnectionUserInfo::loginUserPasswordIsSet() const
{
    return loginUserPasswordIsSet_;
}

void ValidateConnectionUserInfo::unsetloginUserPassword()
{
    loginUserPasswordIsSet_ = false;
}

}
}
}
}
}


