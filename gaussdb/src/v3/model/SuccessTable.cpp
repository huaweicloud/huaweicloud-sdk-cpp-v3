

#include "huaweicloud/gaussdb/v3/model/SuccessTable.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Gaussdb {
namespace V3 {
namespace Model {




SuccessTable::SuccessTable()
{
    dbName_ = "";
    dbNameIsSet_ = false;
    tableName_ = "";
    tableNameIsSet_ = false;
    configName_ = "";
    configNameIsSet_ = false;
    rowNumber_ = 0;
    rowNumberIsSet_ = false;
    fullTableName_ = "";
    fullTableNameIsSet_ = false;
    valid_ = false;
    validIsSet_ = false;
}

SuccessTable::~SuccessTable() = default;

void SuccessTable::validate()
{
}

web::json::value SuccessTable::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dbNameIsSet_) {
        val[utility::conversions::to_string_t("db_name")] = ModelBase::toJson(dbName_);
    }
    if(tableNameIsSet_) {
        val[utility::conversions::to_string_t("table_name")] = ModelBase::toJson(tableName_);
    }
    if(configNameIsSet_) {
        val[utility::conversions::to_string_t("config_name")] = ModelBase::toJson(configName_);
    }
    if(rowNumberIsSet_) {
        val[utility::conversions::to_string_t("row_number")] = ModelBase::toJson(rowNumber_);
    }
    if(fullTableNameIsSet_) {
        val[utility::conversions::to_string_t("full_table_name")] = ModelBase::toJson(fullTableName_);
    }
    if(validIsSet_) {
        val[utility::conversions::to_string_t("valid")] = ModelBase::toJson(valid_);
    }

    return val;
}
bool SuccessTable::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("db_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("config_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("config_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setConfigName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("row_number"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("row_number"));
        if(!fieldValue.is_null())
        {
            int32_t refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setRowNumber(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("full_table_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("full_table_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setFullTableName(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("valid"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("valid"));
        if(!fieldValue.is_null())
        {
            bool refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValid(refVal);
        }
    }
    return ok;
}


std::string SuccessTable::getDbName() const
{
    return dbName_;
}

void SuccessTable::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool SuccessTable::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void SuccessTable::unsetdbName()
{
    dbNameIsSet_ = false;
}

std::string SuccessTable::getTableName() const
{
    return tableName_;
}

void SuccessTable::setTableName(const std::string& value)
{
    tableName_ = value;
    tableNameIsSet_ = true;
}

bool SuccessTable::tableNameIsSet() const
{
    return tableNameIsSet_;
}

void SuccessTable::unsettableName()
{
    tableNameIsSet_ = false;
}

std::string SuccessTable::getConfigName() const
{
    return configName_;
}

void SuccessTable::setConfigName(const std::string& value)
{
    configName_ = value;
    configNameIsSet_ = true;
}

bool SuccessTable::configNameIsSet() const
{
    return configNameIsSet_;
}

void SuccessTable::unsetconfigName()
{
    configNameIsSet_ = false;
}

int32_t SuccessTable::getRowNumber() const
{
    return rowNumber_;
}

void SuccessTable::setRowNumber(int32_t value)
{
    rowNumber_ = value;
    rowNumberIsSet_ = true;
}

bool SuccessTable::rowNumberIsSet() const
{
    return rowNumberIsSet_;
}

void SuccessTable::unsetrowNumber()
{
    rowNumberIsSet_ = false;
}

std::string SuccessTable::getFullTableName() const
{
    return fullTableName_;
}

void SuccessTable::setFullTableName(const std::string& value)
{
    fullTableName_ = value;
    fullTableNameIsSet_ = true;
}

bool SuccessTable::fullTableNameIsSet() const
{
    return fullTableNameIsSet_;
}

void SuccessTable::unsetfullTableName()
{
    fullTableNameIsSet_ = false;
}

bool SuccessTable::isValid() const
{
    return valid_;
}

void SuccessTable::setValid(bool value)
{
    valid_ = value;
    validIsSet_ = true;
}

bool SuccessTable::validIsSet() const
{
    return validIsSet_;
}

void SuccessTable::unsetvalid()
{
    validIsSet_ = false;
}

}
}
}
}
}


