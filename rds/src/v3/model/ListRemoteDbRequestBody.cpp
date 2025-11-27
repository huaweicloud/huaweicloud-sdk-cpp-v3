

#include "huaweicloud/rds/v3/model/ListRemoteDbRequestBody.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Rds {
namespace V3 {
namespace Model {




ListRemoteDbRequestBody::ListRemoteDbRequestBody()
{
    serverIp_ = "";
    serverIpIsSet_ = false;
    serverPort_ = "";
    serverPortIsSet_ = false;
    loginUserName_ = "";
    loginUserNameIsSet_ = false;
    loginUserPassword_ = "";
    loginUserPasswordIsSet_ = false;
    offset_ = 0;
    offsetIsSet_ = false;
    limit_ = 0;
    limitIsSet_ = false;
}

ListRemoteDbRequestBody::~ListRemoteDbRequestBody() = default;

void ListRemoteDbRequestBody::validate()
{
}

web::json::value ListRemoteDbRequestBody::toJson() const
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
    if(offsetIsSet_) {
        val[utility::conversions::to_string_t("offset")] = ModelBase::toJson(offset_);
    }
    if(limitIsSet_) {
        val[utility::conversions::to_string_t("limit")] = ModelBase::toJson(limit_);
    }

    return val;
}
bool ListRemoteDbRequestBody::fromJson(const web::json::value& val)
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
            std::string refVal;
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
    if(val.has_field(utility::conversions::to_string_t("offset"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("offset"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setOffset(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("limit"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("limit"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setLimit(refVal);
        }
    }
    return ok;
}


std::string ListRemoteDbRequestBody::getServerIp() const
{
    return serverIp_;
}

void ListRemoteDbRequestBody::setServerIp(const std::string& value)
{
    serverIp_ = value;
    serverIpIsSet_ = true;
}

bool ListRemoteDbRequestBody::serverIpIsSet() const
{
    return serverIpIsSet_;
}

void ListRemoteDbRequestBody::unsetserverIp()
{
    serverIpIsSet_ = false;
}

std::string ListRemoteDbRequestBody::getServerPort() const
{
    return serverPort_;
}

void ListRemoteDbRequestBody::setServerPort(const std::string& value)
{
    serverPort_ = value;
    serverPortIsSet_ = true;
}

bool ListRemoteDbRequestBody::serverPortIsSet() const
{
    return serverPortIsSet_;
}

void ListRemoteDbRequestBody::unsetserverPort()
{
    serverPortIsSet_ = false;
}

std::string ListRemoteDbRequestBody::getLoginUserName() const
{
    return loginUserName_;
}

void ListRemoteDbRequestBody::setLoginUserName(const std::string& value)
{
    loginUserName_ = value;
    loginUserNameIsSet_ = true;
}

bool ListRemoteDbRequestBody::loginUserNameIsSet() const
{
    return loginUserNameIsSet_;
}

void ListRemoteDbRequestBody::unsetloginUserName()
{
    loginUserNameIsSet_ = false;
}

std::string ListRemoteDbRequestBody::getLoginUserPassword() const
{
    return loginUserPassword_;
}

void ListRemoteDbRequestBody::setLoginUserPassword(const std::string& value)
{
    loginUserPassword_ = value;
    loginUserPasswordIsSet_ = true;
}

bool ListRemoteDbRequestBody::loginUserPasswordIsSet() const
{
    return loginUserPasswordIsSet_;
}

void ListRemoteDbRequestBody::unsetloginUserPassword()
{
    loginUserPasswordIsSet_ = false;
}

int32_t ListRemoteDbRequestBody::getOffset() const
{
    return offset_;
}

void ListRemoteDbRequestBody::setOffset(int32_t value)
{
    offset_ = value;
    offsetIsSet_ = true;
}

bool ListRemoteDbRequestBody::offsetIsSet() const
{
    return offsetIsSet_;
}

void ListRemoteDbRequestBody::unsetoffset()
{
    offsetIsSet_ = false;
}

int32_t ListRemoteDbRequestBody::getLimit() const
{
    return limit_;
}

void ListRemoteDbRequestBody::setLimit(int32_t value)
{
    limit_ = value;
    limitIsSet_ = true;
}

bool ListRemoteDbRequestBody::limitIsSet() const
{
    return limitIsSet_;
}

void ListRemoteDbRequestBody::unsetlimit()
{
    limitIsSet_ = false;
}

}
}
}
}
}


