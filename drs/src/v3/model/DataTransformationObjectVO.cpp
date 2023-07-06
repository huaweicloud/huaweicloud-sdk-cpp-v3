

#include "huaweicloud/drs/v3/model/DataTransformationObjectVO.h"

namespace HuaweiCloud {
namespace Sdk {
namespace Drs {
namespace V3 {
namespace Model {




DataTransformationObjectVO::DataTransformationObjectVO()
{
    id_ = "";
    idIsSet_ = false;
    dataTransformationType_ = "";
    dataTransformationTypeIsSet_ = false;
    dbName_ = "";
    dbNameIsSet_ = false;
    schemaName_ = "";
    schemaNameIsSet_ = false;
    tableName_ = "";
    tableNameIsSet_ = false;
}

DataTransformationObjectVO::~DataTransformationObjectVO() = default;

void DataTransformationObjectVO::validate()
{
}

web::json::value DataTransformationObjectVO::toJson() const
{
    web::json::value val = web::json::value::object();

    if(idIsSet_) {
        val[utility::conversions::to_string_t("id")] = ModelBase::toJson(id_);
    }
    if(dataTransformationTypeIsSet_) {
        val[utility::conversions::to_string_t("data_transformation_type")] = ModelBase::toJson(dataTransformationType_);
    }
    if(dbNameIsSet_) {
        val[utility::conversions::to_string_t("db_name")] = ModelBase::toJson(dbName_);
    }
    if(schemaNameIsSet_) {
        val[utility::conversions::to_string_t("schema_name")] = ModelBase::toJson(schemaName_);
    }
    if(tableNameIsSet_) {
        val[utility::conversions::to_string_t("table_name")] = ModelBase::toJson(tableName_);
    }

    return val;
}

bool DataTransformationObjectVO::fromJson(const web::json::value& val)
{
    bool ok = true;
    
    if(val.has_field(utility::conversions::to_string_t("id"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("id"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setId(refVal);
        }
    }
    if(val.has_field(utility::conversions::to_string_t("data_transformation_type"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("data_transformation_type"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setDataTransformationType(refVal);
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
    if(val.has_field(utility::conversions::to_string_t("schema_name"))) {
        const web::json::value& fieldValue = val.at(utility::conversions::to_string_t("schema_name"));
        if(!fieldValue.is_null())
        {
            std::string refVal;
            ok &= ModelBase::fromJson(fieldValue, refVal);
            setSchemaName(refVal);
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
    return ok;
}

std::string DataTransformationObjectVO::getId() const
{
    return id_;
}

void DataTransformationObjectVO::setId(const std::string& value)
{
    id_ = value;
    idIsSet_ = true;
}

bool DataTransformationObjectVO::idIsSet() const
{
    return idIsSet_;
}

void DataTransformationObjectVO::unsetid()
{
    idIsSet_ = false;
}

std::string DataTransformationObjectVO::getDataTransformationType() const
{
    return dataTransformationType_;
}

void DataTransformationObjectVO::setDataTransformationType(const std::string& value)
{
    dataTransformationType_ = value;
    dataTransformationTypeIsSet_ = true;
}

bool DataTransformationObjectVO::dataTransformationTypeIsSet() const
{
    return dataTransformationTypeIsSet_;
}

void DataTransformationObjectVO::unsetdataTransformationType()
{
    dataTransformationTypeIsSet_ = false;
}

std::string DataTransformationObjectVO::getDbName() const
{
    return dbName_;
}

void DataTransformationObjectVO::setDbName(const std::string& value)
{
    dbName_ = value;
    dbNameIsSet_ = true;
}

bool DataTransformationObjectVO::dbNameIsSet() const
{
    return dbNameIsSet_;
}

void DataTransformationObjectVO::unsetdbName()
{
    dbNameIsSet_ = false;
}

std::string DataTransformationObjectVO::getSchemaName() const
{
    return schemaName_;
}

void DataTransformationObjectVO::setSchemaName(const std::string& value)
{
    schemaName_ = value;
    schemaNameIsSet_ = true;
}

bool DataTransformationObjectVO::schemaNameIsSet() const
{
    return schemaNameIsSet_;
}

void DataTransformationObjectVO::unsetschemaName()
{
    schemaNameIsSet_ = false;
}

std::string DataTransformationObjectVO::getTableName() const
{
    return tableName_;
}

void DataTransformationObjectVO::setTableName(const std::string& value)
{
    tableName_ = value;
    tableNameIsSet_ = true;
}

bool DataTransformationObjectVO::tableNameIsSet() const
{
    return tableNameIsSet_;
}

void DataTransformationObjectVO::unsettableName()
{
    tableNameIsSet_ = false;
}

}
}
}
}
}


