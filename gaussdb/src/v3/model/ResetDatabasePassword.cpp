

#include "huaweicloud/gaussdb/v3/model/ResetDatabasePassword.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ResetDatabasePassword::ResetDatabasePassword()
{
    name_ = "";
    nameIsSet_ = false;
    host_ = "";
    hostIsSet_ = false;
    password_ = "";
    passwordIsSet_ = false;
}

ResetDatabasePassword::~ResetDatabasePassword() = default;

void ResetDatabasePassword::validate()
{
}

web::json::value ResetDatabasePassword::toJson() const
{
    web::json::value val = web::json::value::object();

    if(nameIsSet_) {
        val[utility::conversions::to_string_t("name")] = ModelBase::toJson(name_);
    }
    if(hostIsSet_) {
        val[utility::conversions::to_string_t("host")] = ModelBase::toJson(host_);
    }
    if(passwordIsSet_) {
        val[utility::conversions::to_string_t("password")] = ModelBase::toJson(password_);
    }

    return val;
}

bool ResetDatabasePassword::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("host"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("host"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setHost(refVal);
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

std::string ResetDatabasePassword::getName() const
{
    return name_;
}

void ResetDatabasePassword::setName(const std::string& value)
{
    name_ = value;
    nameIsSet_ = true;
}

bool ResetDatabasePassword::nameIsSet() const
{
    return nameIsSet_;
}

void ResetDatabasePassword::unsetname()
{
    nameIsSet_ = false;
}

std::string ResetDatabasePassword::getHost() const
{
    return host_;
}

void ResetDatabasePassword::setHost(const std::string& value)
{
    host_ = value;
    hostIsSet_ = true;
}

bool ResetDatabasePassword::hostIsSet() const
{
    return hostIsSet_;
}

void ResetDatabasePassword::unsethost()
{
    hostIsSet_ = false;
}

std::string ResetDatabasePassword::getPassword() const
{
    return password_;
}

void ResetDatabasePassword::setPassword(const std::string& value)
{
    password_ = value;
    passwordIsSet_ = true;
}

bool ResetDatabasePassword::passwordIsSet() const
{
    return passwordIsSet_;
}

void ResetDatabasePassword::unsetpassword()
{
    passwordIsSet_ = false;
}

}
}
}
}
}


