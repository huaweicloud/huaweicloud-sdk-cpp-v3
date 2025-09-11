

#include "huaweicloud/gaussdbforopengauss/v3/model/SessionQueryInfoOption.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdbforopengauss {
namespace V3 {
namespace Model {




SessionQueryInfoOption::SessionQueryInfoOption()
{
    databaseName_ = "";
    databaseNameIsSet_ = false;
    clientIp_ = "";
    clientIpIsSet_ = false;
    userName_ = "";
    userNameIsSet_ = false;
}

SessionQueryInfoOption::~SessionQueryInfoOption() = default;

void SessionQueryInfoOption::validate()
{
}

web::json::value SessionQueryInfoOption::toJson() const
{
    web::json::value val = web::json::value::object();

    if(databaseNameIsSet_) {
        val[utility::conversions::to_string_t("database_name")] = ModelBase::toJson(databaseName_);
    }
    if(clientIpIsSet_) {
        val[utility::conversions::to_string_t("client_ip")] = ModelBase::toJson(clientIp_);
    }
    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }

    return val;
}
bool SessionQueryInfoOption::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("database_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("database_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabaseName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("client_ip"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("client_ip"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setClientIp(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserName(refVal);
        }
    }
    return ok;
}


std::string SessionQueryInfoOption::getDatabaseName() const
{
    return databaseName_;
}

void SessionQueryInfoOption::setDatabaseName(const std::string& value)
{
    databaseName_ = value;
    databaseNameIsSet_ = true;
}

bool SessionQueryInfoOption::databaseNameIsSet() const
{
    return databaseNameIsSet_;
}

void SessionQueryInfoOption::unsetdatabaseName()
{
    databaseNameIsSet_ = false;
}

std::string SessionQueryInfoOption::getClientIp() const
{
    return clientIp_;
}

void SessionQueryInfoOption::setClientIp(const std::string& value)
{
    clientIp_ = value;
    clientIpIsSet_ = true;
}

bool SessionQueryInfoOption::clientIpIsSet() const
{
    return clientIpIsSet_;
}

void SessionQueryInfoOption::unsetclientIp()
{
    clientIpIsSet_ = false;
}

std::string SessionQueryInfoOption::getUserName() const
{
    return userName_;
}

void SessionQueryInfoOption::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool SessionQueryInfoOption::userNameIsSet() const
{
    return userNameIsSet_;
}

void SessionQueryInfoOption::unsetuserName()
{
    userNameIsSet_ = false;
}

}
}
}
}
}


