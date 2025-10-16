

#include "huaweicloud/rds/v3/model/ReplicationUserInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ReplicationUserInfo::ReplicationUserInfo()
{
    serverIp_ = "";
    serverIpIsSet_ = false;
    serverPort_ = 0;
    serverPortIsSet_ = false;
    serverName_ = "";
    serverNameIsSet_ = false;
    loginUserName_ = "";
    loginUserNameIsSet_ = false;
    loginUserPassword_ = "";
    loginUserPasswordIsSet_ = false;
}

ReplicationUserInfo::~ReplicationUserInfo() = default;

void ReplicationUserInfo::validate()
{
}

web::json::value ReplicationUserInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(serverIpIsSet_) {
        val[utility::conversions::to_string_t("server_ip")] = ModelBase::toJson(serverIp_);
    }
    if(serverPortIsSet_) {
        val[utility::conversions::to_string_t("server_port")] = ModelBase::toJson(serverPort_);
    }
    if(serverNameIsSet_) {
        val[utility::conversions::to_string_t("server_name")] = ModelBase::toJson(serverName_);
    }
    if(loginUserNameIsSet_) {
        val[utility::conversions::to_string_t("login_user_name")] = ModelBase::toJson(loginUserName_);
    }
    if(loginUserPasswordIsSet_) {
        val[utility::conversions::to_string_t("login_user_password")] = ModelBase::toJson(loginUserPassword_);
    }

    return val;
}
bool ReplicationUserInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("server_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("server_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setServerName(refVal);
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


std::string ReplicationUserInfo::getServerIp() const
{
    return serverIp_;
}

void ReplicationUserInfo::setServerIp(const std::string& value)
{
    serverIp_ = value;
    serverIpIsSet_ = true;
}

bool ReplicationUserInfo::serverIpIsSet() const
{
    return serverIpIsSet_;
}

void ReplicationUserInfo::unsetserverIp()
{
    serverIpIsSet_ = false;
}

int32_t ReplicationUserInfo::getServerPort() const
{
    return serverPort_;
}

void ReplicationUserInfo::setServerPort(int32_t value)
{
    serverPort_ = value;
    serverPortIsSet_ = true;
}

bool ReplicationUserInfo::serverPortIsSet() const
{
    return serverPortIsSet_;
}

void ReplicationUserInfo::unsetserverPort()
{
    serverPortIsSet_ = false;
}

std::string ReplicationUserInfo::getServerName() const
{
    return serverName_;
}

void ReplicationUserInfo::setServerName(const std::string& value)
{
    serverName_ = value;
    serverNameIsSet_ = true;
}

bool ReplicationUserInfo::serverNameIsSet() const
{
    return serverNameIsSet_;
}

void ReplicationUserInfo::unsetserverName()
{
    serverNameIsSet_ = false;
}

std::string ReplicationUserInfo::getLoginUserName() const
{
    return loginUserName_;
}

void ReplicationUserInfo::setLoginUserName(const std::string& value)
{
    loginUserName_ = value;
    loginUserNameIsSet_ = true;
}

bool ReplicationUserInfo::loginUserNameIsSet() const
{
    return loginUserNameIsSet_;
}

void ReplicationUserInfo::unsetloginUserName()
{
    loginUserNameIsSet_ = false;
}

std::string ReplicationUserInfo::getLoginUserPassword() const
{
    return loginUserPassword_;
}

void ReplicationUserInfo::setLoginUserPassword(const std::string& value)
{
    loginUserPassword_ = value;
    loginUserPasswordIsSet_ = true;
}

bool ReplicationUserInfo::loginUserPasswordIsSet() const
{
    return loginUserPasswordIsSet_;
}

void ReplicationUserInfo::unsetloginUserPassword()
{
    loginUserPasswordIsSet_ = false;
}

}
}
}
}
}


