

#include "huaweicloud/drs/v3/model/ConfigTransformationVo.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




ConfigTransformationVo::ConfigTransformationVo()
{
    dbTableName_ = "";
    dbTableNameIsSet_ = false;
    dbName_ = "";
    dbNameIsSet_ = false;
    tableName_ = "";
    tableNameIsSet_ = false;
    colNames_ = "";
    colNamesIsSet_ = false;
    primKeyOrIndex_ = "";
    primKeyOrIndexIsSet_ = false;
    indexs_ = "";
    indexsIsSet_ = false;
    values_ = "";
    valuesIsSet_ = false;
}

ConfigTransformationVo::~ConfigTransformationVo() = default;

void ConfigTransformationVo::validate()
{
}

web::json::value ConfigTransformationVo::toJson() const
{
    web::json::value val = web::json::value::object();

    if(dbTableNameIsSet_) {
        val[utility::conversions::to_string_t("db_table_name")] = ModelBase::toJson(dbTableName_);
    }
    if(dbNameIsSet_) {
        val[utility::conversions::to_string_t("db_name")] = ModelBase::toJson(dbName_);
    }
    if(tableNameIsSet_) {
        val[utility::conversions::to_string_t("table_name")] = ModelBase::toJson(tableName_);
    }
    if(colNamesIsSet_) {
        val[utility::conversions::to_string_t("col_names")] = ModelBase::toJson(colNames_);
    }
    if(primKeyOrIndexIsSet_) {
        val[utility::conversions::to_string_t("prim_key_or_index")] = ModelBase::toJson(primKeyOrIndex_);
    }
    if(indexsIsSet_) {
        val[utility::conversions::to_string_t("indexs")] = ModelBase::toJson(indexs_);
    }
    if(valuesIsSet_) {
        val[utility::conversions::to_string_t("values")] = ModelBase::toJson(values_);
    }

    return val;
}

bool ConfigTransformationVo::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("db_table_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("db_table_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDbTableName(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("prim_key_or_index"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("prim_key_or_index"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setPrimKeyOrIndex(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("indexs"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("indexs"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setIndexs(refVal);
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

std::string ConfigTransformationVo::getDbTableName() const
{
    return dbTableName_;
}

void ConfigTransformationVo::setDbTableName(const std::string& value)
{
    dbTableName_ = value;
    dbTableNameIsSet_ = true;
}

bool ConfigTransformationVo::dbTableNameIsSet() const
{
    return dbTableNameIsSet_;
}

void ConfigTransformationVo::unsetdbTableName()
{
    dbTableNameIsSet_ = false;
}

std::string ConfigTransformationVo::getDbName() const
{
    return dbName_;
}

void ConfigTransformationVo::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool ConfigTransformationVo::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void ConfigTransformationVo::unsetdbName()
{
    dbNameIsSet_ = false;
}

std::string ConfigTransformationVo::getTableName() const
{
    return tableName_;
}

void ConfigTransformationVo::setTableName(const std::string& value)
{
    tableName_ = value;
    tableNameIsSet_ = true;
}

bool ConfigTransformationVo::tableNameIsSet() const
{
    return tableNameIsSet_;
}

void ConfigTransformationVo::unsettableName()
{
    tableNameIsSet_ = false;
}

std::string ConfigTransformationVo::getColNames() const
{
    return colNames_;
}

void ConfigTransformationVo::setColNames(const std::string& value)
{
    colNames_ = value;
    colNamesIsSet_ = true;
}

bool ConfigTransformationVo::colNamesIsSet() const
{
    return colNamesIsSet_;
}

void ConfigTransformationVo::unsetcolNames()
{
    colNamesIsSet_ = false;
}

std::string ConfigTransformationVo::getPrimKeyOrIndex() const
{
    return primKeyOrIndex_;
}

void ConfigTransformationVo::setPrimKeyOrIndex(const std::string& value)
{
    primKeyOrIndex_ = value;
    primKeyOrIndexIsSet_ = true;
}

bool ConfigTransformationVo::primKeyOrIndexIsSet() const
{
    return primKeyOrIndexIsSet_;
}

void ConfigTransformationVo::unsetprimKeyOrIndex()
{
    primKeyOrIndexIsSet_ = false;
}

std::string ConfigTransformationVo::getIndexs() const
{
    return indexs_;
}

void ConfigTransformationVo::setIndexs(const std::string& value)
{
    indexs_ = value;
    indexsIsSet_ = true;
}

bool ConfigTransformationVo::indexsIsSet() const
{
    return indexsIsSet_;
}

void ConfigTransformationVo::unsetindexs()
{
    indexsIsSet_ = false;
}

std::string ConfigTransformationVo::getValues() const
{
    return values_;
}

void ConfigTransformationVo::setValues(const std::string& value)
{
    values_ = value;
    valuesIsSet_ = true;
}

bool ConfigTransformationVo::valuesIsSet() const
{
    return valuesIsSet_;
}

void ConfigTransformationVo::unsetvalues()
{
    valuesIsSet_ = false;
}

}
}
}
}
}


