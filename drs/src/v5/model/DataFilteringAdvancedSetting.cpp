

#include "huaweicloud/drs/v5/model/DataFilteringAdvancedSetting.h"
namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V5 {
namespace Model {




DataFilteringAdvancedSetting::DataFilteringAdvancedSetting()
{
    dbName_ = "";
    dbNameIsSet_ = false;
    tableName_ = "";
    tableNameIsSet_ = false;
    colNames_ = "";
    colNamesIsSet_ = false;
    primKeyOrIndexes_ = "";
    primKeyOrIndexesIsSet_ = false;
    indexes_ = "";
    indexesIsSet_ = false;
    values_ = "";
    valuesIsSet_ = false;
}

DataFilteringAdvancedSetting::~DataFilteringAdvancedSetting() = default;

void DataFilteringAdvancedSetting::validate()
{
}

web::json::value DataFilteringAdvancedSetting::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dbNameIsSet_) {
        val[utility::conversions::to_string_t("db_name")] = ModelBase::toJson(dbName_);
    }
    if(tableNameIsSet_) {
        val[utility::conversions::to_string_t("table_name")] = ModelBase::toJson(tableName_);
    }
    if(colNamesIsSet_) {
        val[utility::conversions::to_string_t("col_names")] = ModelBase::toJson(colNames_);
    }
    if(primKeyOrIndexesIsSet_) {
        val[utility::conversions::to_string_t("prim_key_or_indexes")] = ModelBase::toJson(primKeyOrIndexes_);
    }
    if(indexesIsSet_) {
        val[utility::conversions::to_string_t("indexes")] = ModelBase::toJson(indexes_);
    }
    if(valuesIsSet_) {
        val[utility::conversions::to_string_t("values")] = ModelBase::toJson(values_);
    }

    return val;
}
bool DataFilteringAdvancedSetting::fromJson(const web::json::value& val)
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
    if(val.has_field(utility::conversions::to_string_t("col_names"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("col_names"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setColNames(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("prim_key_or_indexes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("prim_key_or_indexes"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrimKeyOrIndexes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("indexes"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("indexes"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIndexes(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("values"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("values"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setValues(refVal);
        }
    }
    return ok;
}


std::string DataFilteringAdvancedSetting::getDbName() const
{
    return dbName_;
}

void DataFilteringAdvancedSetting::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool DataFilteringAdvancedSetting::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void DataFilteringAdvancedSetting::unsetdbName()
{
    dbNameIsSet_ = false;
}

std::string DataFilteringAdvancedSetting::getTableName() const
{
    return tableName_;
}

void DataFilteringAdvancedSetting::setTableName(const std::string& value)
{
    tableName_ = value;
    tableNameIsSet_ = true;
}

bool DataFilteringAdvancedSetting::tableNameIsSet() const
{
    return tableNameIsSet_;
}

void DataFilteringAdvancedSetting::unsettableName()
{
    tableNameIsSet_ = false;
}

std::string DataFilteringAdvancedSetting::getColNames() const
{
    return colNames_;
}

void DataFilteringAdvancedSetting::setColNames(const std::string& value)
{
    colNames_ = value;
    colNamesIsSet_ = true;
}

bool DataFilteringAdvancedSetting::colNamesIsSet() const
{
    return colNamesIsSet_;
}

void DataFilteringAdvancedSetting::unsetcolNames()
{
    colNamesIsSet_ = false;
}

std::string DataFilteringAdvancedSetting::getPrimKeyOrIndexes() const
{
    return primKeyOrIndexes_;
}

void DataFilteringAdvancedSetting::setPrimKeyOrIndexes(const std::string& value)
{
    primKeyOrIndexes_ = value;
    primKeyOrIndexesIsSet_ = true;
}

bool DataFilteringAdvancedSetting::primKeyOrIndexesIsSet() const
{
    return primKeyOrIndexesIsSet_;
}

void DataFilteringAdvancedSetting::unsetprimKeyOrIndexes()
{
    primKeyOrIndexesIsSet_ = false;
}

std::string DataFilteringAdvancedSetting::getIndexes() const
{
    return indexes_;
}

void DataFilteringAdvancedSetting::setIndexes(const std::string& value)
{
    indexes_ = value;
    indexesIsSet_ = true;
}

bool DataFilteringAdvancedSetting::indexesIsSet() const
{
    return indexesIsSet_;
}

void DataFilteringAdvancedSetting::unsetindexes()
{
    indexesIsSet_ = false;
}

std::string DataFilteringAdvancedSetting::getValues() const
{
    return values_;
}

void DataFilteringAdvancedSetting::setValues(const std::string& value)
{
    values_ = value;
    valuesIsSet_ = true;
}

bool DataFilteringAdvancedSetting::valuesIsSet() const
{
    return valuesIsSet_;
}

void DataFilteringAdvancedSetting::unsetvalues()
{
    valuesIsSet_ = false;
}

}
}
}
}
}


