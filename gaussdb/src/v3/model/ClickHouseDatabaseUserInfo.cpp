

#include "huaweicloud/gaussdb/v3/model/ClickHouseDatabaseUserInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ClickHouseDatabaseUserInfo::ClickHouseDatabaseUserInfo()
{
    userName_ = "";
    userNameIsSet_ = false;
    password_ = "";
    passwordIsSet_ = false;
    databasesIsSet_ = false;
    dml_ = 0;
    dmlIsSet_ = false;
}

ClickHouseDatabaseUserInfo::~ClickHouseDatabaseUserInfo() = default;

void ClickHouseDatabaseUserInfo::validate()
{
}

web::json::value ClickHouseDatabaseUserInfo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
    }
    if(passwordIsSet_) {
        val[utility::conversions::to_string_t("password")] = ModelBase::toJson(password_);
    }
    if(databasesIsSet_) {
        val[utility::conversions::to_string_t("databases")] = ModelBase::toJson(databases_);
    }
    if(dmlIsSet_) {
        val[utility::conversions::to_string_t("dml")] = ModelBase::toJson(dml_);
    }

    return val;
}
bool ClickHouseDatabaseUserInfo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("user_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("user_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUserName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("databases"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("databases"));
        if(!fieldValue.is_null())
        {
            std::vector<std::string> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDatabases(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("dml"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("dml"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDml(refVal);
        }
    }
    return ok;
}


std::string ClickHouseDatabaseUserInfo::getUserName() const
{
    return userName_;
}

void ClickHouseDatabaseUserInfo::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool ClickHouseDatabaseUserInfo::userNameIsSet() const
{
    return userNameIsSet_;
}

void ClickHouseDatabaseUserInfo::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string ClickHouseDatabaseUserInfo::getPassword() const
{
    return password_;
}

void ClickHouseDatabaseUserInfo::setPassword(const std::string& value)
{
    password_ = value;
    passwordIsSet_ = true;
}

bool ClickHouseDatabaseUserInfo::passwordIsSet() const
{
    return passwordIsSet_;
}

void ClickHouseDatabaseUserInfo::unsetpassword()
{
    passwordIsSet_ = false;
}

std::vector<std::string>& ClickHouseDatabaseUserInfo::getDatabases()
{
    return databases_;
}

void ClickHouseDatabaseUserInfo::setDatabases(const std::vector<std::string>& value)
{
    databases_ = value;
    databasesIsSet_ = true;
}

bool ClickHouseDatabaseUserInfo::databasesIsSet() const
{
    return databasesIsSet_;
}

void ClickHouseDatabaseUserInfo::unsetdatabases()
{
    databasesIsSet_ = false;
}

int32_t ClickHouseDatabaseUserInfo::getDml() const
{
    return dml_;
}

void ClickHouseDatabaseUserInfo::setDml(int32_t value)
{
    dml_ = value;
    dmlIsSet_ = true;
}

bool ClickHouseDatabaseUserInfo::dmlIsSet() const
{
    return dmlIsSet_;
}

void ClickHouseDatabaseUserInfo::unsetdml()
{
    dmlIsSet_ = false;
}

}
}
}
}
}


