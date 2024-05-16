

#include "huaweicloud/gaussdb/v3/model/StarRocksDatabaseUserInfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




StarRocksDatabaseUserInfo::StarRocksDatabaseUserInfo()
{
    userName_ = "";
    userNameIsSet_ = false;
    password_ = "";
    passwordIsSet_ = false;
    databasesIsSet_ = false;
    dml_ = 0;
    dmlIsSet_ = false;
    ddl_ = 0;
    ddlIsSet_ = false;
}

StarRocksDatabaseUserInfo::~StarRocksDatabaseUserInfo() = default;

void StarRocksDatabaseUserInfo::validate()
{
}

web::json::value StarRocksDatabaseUserInfo::toJson() const
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
    if(ddlIsSet_) {
        val[utility::conversions::to_string_t("ddl")] = ModelBase::toJson(ddl_);
    }

    return val;
}
bool StarRocksDatabaseUserInfo::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("ddl"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("ddl"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDdl(refVal);
        }
    }
    return ok;
}


std::string StarRocksDatabaseUserInfo::getUserName() const
{
    return userName_;
}

void StarRocksDatabaseUserInfo::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool StarRocksDatabaseUserInfo::userNameIsSet() const
{
    return userNameIsSet_;
}

void StarRocksDatabaseUserInfo::unsetuserName()
{
    userNameIsSet_ = false;
}

std::string StarRocksDatabaseUserInfo::getPassword() const
{
    return password_;
}

void StarRocksDatabaseUserInfo::setPassword(const std::string& value)
{
    password_ = value;
    passwordIsSet_ = true;
}

bool StarRocksDatabaseUserInfo::passwordIsSet() const
{
    return passwordIsSet_;
}

void StarRocksDatabaseUserInfo::unsetpassword()
{
    passwordIsSet_ = false;
}

std::vector<std::string>& StarRocksDatabaseUserInfo::getDatabases()
{
    return databases_;
}

void StarRocksDatabaseUserInfo::setDatabases(const std::vector<std::string>& value)
{
    databases_ = value;
    databasesIsSet_ = true;
}

bool StarRocksDatabaseUserInfo::databasesIsSet() const
{
    return databasesIsSet_;
}

void StarRocksDatabaseUserInfo::unsetdatabases()
{
    databasesIsSet_ = false;
}

int32_t StarRocksDatabaseUserInfo::getDml() const
{
    return dml_;
}

void StarRocksDatabaseUserInfo::setDml(int32_t value)
{
    dml_ = value;
    dmlIsSet_ = true;
}

bool StarRocksDatabaseUserInfo::dmlIsSet() const
{
    return dmlIsSet_;
}

void StarRocksDatabaseUserInfo::unsetdml()
{
    dmlIsSet_ = false;
}

int32_t StarRocksDatabaseUserInfo::getDdl() const
{
    return ddl_;
}

void StarRocksDatabaseUserInfo::setDdl(int32_t value)
{
    ddl_ = value;
    ddlIsSet_ = true;
}

bool StarRocksDatabaseUserInfo::ddlIsSet() const
{
    return ddlIsSet_;
}

void StarRocksDatabaseUserInfo::unsetddl()
{
    ddlIsSet_ = false;
}

}
}
}
}
}


