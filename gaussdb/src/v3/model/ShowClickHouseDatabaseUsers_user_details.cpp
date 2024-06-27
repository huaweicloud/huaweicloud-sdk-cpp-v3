

#include "huaweicloud/gaussdb/v3/model/ShowClickHouseDatabaseUsers_user_details.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ShowClickHouseDatabaseUsers_user_details::ShowClickHouseDatabaseUsers_user_details()
{
    userName_ = "";
    userNameIsSet_ = false;
    databasesIsSet_ = false;
    dml_ = 0;
    dmlIsSet_ = false;
    ddl_ = 0;
    ddlIsSet_ = false;
}

ShowClickHouseDatabaseUsers_user_details::~ShowClickHouseDatabaseUsers_user_details() = default;

void ShowClickHouseDatabaseUsers_user_details::validate()
{
}

web::json::value ShowClickHouseDatabaseUsers_user_details::toJson() const
{
    web::json::value val = web::json::value::object();

    if(userNameIsSet_) {
        val[utility::conversions::to_string_t("user_name")] = ModelBase::toJson(userName_);
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
bool ShowClickHouseDatabaseUsers_user_details::fromJson(const web::json::value& val)
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


std::string ShowClickHouseDatabaseUsers_user_details::getUserName() const
{
    return userName_;
}

void ShowClickHouseDatabaseUsers_user_details::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool ShowClickHouseDatabaseUsers_user_details::userNameIsSet() const
{
    return userNameIsSet_;
}

void ShowClickHouseDatabaseUsers_user_details::unsetuserName()
{
    userNameIsSet_ = false;
}

std::vector<std::string>& ShowClickHouseDatabaseUsers_user_details::getDatabases()
{
    return databases_;
}

void ShowClickHouseDatabaseUsers_user_details::setDatabases(const std::vector<std::string>& value)
{
    databases_ = value;
    databasesIsSet_ = true;
}

bool ShowClickHouseDatabaseUsers_user_details::databasesIsSet() const
{
    return databasesIsSet_;
}

void ShowClickHouseDatabaseUsers_user_details::unsetdatabases()
{
    databasesIsSet_ = false;
}

int32_t ShowClickHouseDatabaseUsers_user_details::getDml() const
{
    return dml_;
}

void ShowClickHouseDatabaseUsers_user_details::setDml(int32_t value)
{
    dml_ = value;
    dmlIsSet_ = true;
}

bool ShowClickHouseDatabaseUsers_user_details::dmlIsSet() const
{
    return dmlIsSet_;
}

void ShowClickHouseDatabaseUsers_user_details::unsetdml()
{
    dmlIsSet_ = false;
}

int32_t ShowClickHouseDatabaseUsers_user_details::getDdl() const
{
    return ddl_;
}

void ShowClickHouseDatabaseUsers_user_details::setDdl(int32_t value)
{
    ddl_ = value;
    ddlIsSet_ = true;
}

bool ShowClickHouseDatabaseUsers_user_details::ddlIsSet() const
{
    return ddlIsSet_;
}

void ShowClickHouseDatabaseUsers_user_details::unsetddl()
{
    ddlIsSet_ = false;
}

}
}
}
}
}


