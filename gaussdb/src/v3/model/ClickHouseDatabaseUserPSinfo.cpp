

#include "huaweicloud/gaussdb/v3/model/ClickHouseDatabaseUserPSinfo.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




ClickHouseDatabaseUserPSinfo::ClickHouseDatabaseUserPSinfo()
{
    userName_ = "";
    userNameIsSet_ = false;
    databasesIsSet_ = false;
    dml_ = 0;
    dmlIsSet_ = false;
}

ClickHouseDatabaseUserPSinfo::~ClickHouseDatabaseUserPSinfo() = default;

void ClickHouseDatabaseUserPSinfo::validate()
{
}

web::json::value ClickHouseDatabaseUserPSinfo::toJson() const
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

    return val;
}
bool ClickHouseDatabaseUserPSinfo::fromJson(const web::json::value& val)
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
    return ok;
}


std::string ClickHouseDatabaseUserPSinfo::getUserName() const
{
    return userName_;
}

void ClickHouseDatabaseUserPSinfo::setUserName(const std::string& value)
{
    userName_ = value;
    userNameIsSet_ = true;
}

bool ClickHouseDatabaseUserPSinfo::userNameIsSet() const
{
    return userNameIsSet_;
}

void ClickHouseDatabaseUserPSinfo::unsetuserName()
{
    userNameIsSet_ = false;
}

std::vector<std::string>& ClickHouseDatabaseUserPSinfo::getDatabases()
{
    return databases_;
}

void ClickHouseDatabaseUserPSinfo::setDatabases(const std::vector<std::string>& value)
{
    databases_ = value;
    databasesIsSet_ = true;
}

bool ClickHouseDatabaseUserPSinfo::databasesIsSet() const
{
    return databasesIsSet_;
}

void ClickHouseDatabaseUserPSinfo::unsetdatabases()
{
    databasesIsSet_ = false;
}

int32_t ClickHouseDatabaseUserPSinfo::getDml() const
{
    return dml_;
}

void ClickHouseDatabaseUserPSinfo::setDml(int32_t value)
{
    dml_ = value;
    dmlIsSet_ = true;
}

bool ClickHouseDatabaseUserPSinfo::dmlIsSet() const
{
    return dmlIsSet_;
}

void ClickHouseDatabaseUserPSinfo::unsetdml()
{
    dmlIsSet_ = false;
}

}
}
}
}
}


