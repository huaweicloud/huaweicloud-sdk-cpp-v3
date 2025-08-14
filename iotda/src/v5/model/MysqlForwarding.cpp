

#include "huaweicloud/iotda/v5/model/MysqlForwarding.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Iotda {
namespace V5 {
namespace Model {




MysqlForwarding::MysqlForwarding()
{
    addressIsSet_ = false;
    dbName_ = "";
    dbNameIsSet_ = false;
    username_ = "";
    usernameIsSet_ = false;
    password_ = "";
    passwordIsSet_ = false;
    enableSsl_ = false;
    enableSslIsSet_ = false;
    tableName_ = "";
    tableNameIsSet_ = false;
    columnMappingsIsSet_ = false;
}

MysqlForwarding::~MysqlForwarding() = default;

void MysqlForwarding::validate()
{
}

web::json::value MysqlForwarding::toJson() const
{
    web::json::value val = web::json::value::object();

    if(addressIsSet_) {
        val[utility::conversions::to_string_t("address")] = ModelBase::toJson(address_);
    }
    if(dbNameIsSet_) {
        val[utility::conversions::to_string_t("db_name")] = ModelBase::toJson(dbName_);
    }
    if(usernameIsSet_) {
        val[utility::conversions::to_string_t("username")] = ModelBase::toJson(username_);
    }
    if(passwordIsSet_) {
        val[utility::conversions::to_string_t("password")] = ModelBase::toJson(password_);
    }
    if(enableSslIsSet_) {
        val[utility::conversions::to_string_t("enable_ssl")] = ModelBase::toJson(enableSsl_);
    }
    if(tableNameIsSet_) {
        val[utility::conversions::to_string_t("table_name")] = ModelBase::toJson(tableName_);
    }
    if(columnMappingsIsSet_) {
        val[utility::conversions::to_string_t("column_mappings")] = ModelBase::toJson(columnMappings_);
    }

    return val;
}
bool MysqlForwarding::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("address"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("address"));
        if(!fieldValue.is_null())
        {
            NetAddress refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setAddress(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("db_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("username"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("username"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setUsername(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("enable_ssl"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("enable_ssl"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setEnableSsl(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("table_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("table_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setTableName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("column_mappings"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("column_mappings"));
        if(!fieldValue.is_null())
        {
            std::vector<ColumnMapping> refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setColumnMappings(refVal);
        }
    }
    return ok;
}


NetAddress MysqlForwarding::getAddress() const
{
    return address_;
}

void MysqlForwarding::setAddress(const NetAddress& value)
{
    address_ = value;
    addressIsSet_ = true;
}

bool MysqlForwarding::addressIsSet() const
{
    return addressIsSet_;
}

void MysqlForwarding::unsetaddress()
{
    addressIsSet_ = false;
}

std::string MysqlForwarding::getDbName() const
{
    return dbName_;
}

void MysqlForwarding::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool MysqlForwarding::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void MysqlForwarding::unsetdbName()
{
    dbNameIsSet_ = false;
}

std::string MysqlForwarding::getUsername() const
{
    return username_;
}

void MysqlForwarding::setUsername(const std::string& value)
{
    username_ = value;
    usernameIsSet_ = true;
}

bool MysqlForwarding::usernameIsSet() const
{
    return usernameIsSet_;
}

void MysqlForwarding::unsetusername()
{
    usernameIsSet_ = false;
}

std::string MysqlForwarding::getPassword() const
{
    return password_;
}

void MysqlForwarding::setPassword(const std::string& value)
{
    password_ = value;
    passwordIsSet_ = true;
}

bool MysqlForwarding::passwordIsSet() const
{
    return passwordIsSet_;
}

void MysqlForwarding::unsetpassword()
{
    passwordIsSet_ = false;
}

bool MysqlForwarding::isEnableSsl() const
{
    return enableSsl_;
}

void MysqlForwarding::setEnableSsl(bool value)
{
    enableSsl_ = value;
    enableSslIsSet_ = true;
}

bool MysqlForwarding::enableSslIsSet() const
{
    return enableSslIsSet_;
}

void MysqlForwarding::unsetenableSsl()
{
    enableSslIsSet_ = false;
}

std::string MysqlForwarding::getTableName() const
{
    return tableName_;
}

void MysqlForwarding::setTableName(const std::string& value)
{
    tableName_ = value;
    tableNameIsSet_ = true;
}

bool MysqlForwarding::tableNameIsSet() const
{
    return tableNameIsSet_;
}

void MysqlForwarding::unsettableName()
{
    tableNameIsSet_ = false;
}

std::vector<ColumnMapping>& MysqlForwarding::getColumnMappings()
{
    return columnMappings_;
}

void MysqlForwarding::setColumnMappings(const std::vector<ColumnMapping>& value)
{
    columnMappings_ = value;
    columnMappingsIsSet_ = true;
}

bool MysqlForwarding::columnMappingsIsSet() const
{
    return columnMappingsIsSet_;
}

void MysqlForwarding::unsetcolumnMappings()
{
    columnMappingsIsSet_ = false;
}

}
}
}
}
}


